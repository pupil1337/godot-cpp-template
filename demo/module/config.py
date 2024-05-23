def can_build(env, platform):
    return True


def configure(env):
    # open engine define example:
    # define
    env.Append(CPPDEFINES=["DEBUG_LOAD_THREADED"])
    
    pass
