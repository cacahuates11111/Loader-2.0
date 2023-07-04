#include <spawn.h>
#include <IOKit/IOKitlib.h>
@import Foundation;
@interface LSApplicationWorkspace
+ (instancetype)defaultWorkspace;
- (BOOL)openApplicationWithBundleID:(NSString *)arg1 ;
@end

#define POSIX_SPAWN_PERSONA_FLAGS_OVERRIDE 1
int posix_spawnattr_set_persona_np(const posix_spawnattr_t* __restrict, uid_t, uint32_t);
int posix_spawnattr_set_persona_uid_np(const posix_spawnattr_t* __restrict, uid_t);
int posix_spawnattr_set_persona_gid_np(const posix_spawnattr_t* __restrict, uid_t);
