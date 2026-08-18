/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_SETUSERQUOTAREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_SETUSERQUOTAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * SetUserQuota请求参数结构体
                */
                class SetUserQuotaRequest : public AbstractModel
                {
                public:
                    SetUserQuotaRequest();
                    ~SetUserQuotaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>文件系统 ID,通过<a href="https://cloud.tencent.com/document/api/582/38170">查询文件系统列表</a>获取</p>
                     * @return FileSystemId <p>文件系统 ID,通过<a href="https://cloud.tencent.com/document/api/582/38170">查询文件系统列表</a>获取</p>
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置<p>文件系统 ID,通过<a href="https://cloud.tencent.com/document/api/582/38170">查询文件系统列表</a>获取</p>
                     * @param _fileSystemId <p>文件系统 ID,通过<a href="https://cloud.tencent.com/document/api/582/38170">查询文件系统列表</a>获取</p>
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取<p>指定配额类型，包括Uid、Gid，Dir，分别代表用户配额，用户组配额，目录配额</p>
                     * @return UserType <p>指定配额类型，包括Uid、Gid，Dir，分别代表用户配额，用户组配额，目录配额</p>
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置<p>指定配额类型，包括Uid、Gid，Dir，分别代表用户配额，用户组配额，目录配额</p>
                     * @param _userType <p>指定配额类型，包括Uid、Gid，Dir，分别代表用户配额，用户组配额，目录配额</p>
                     * 
                     */
                    void SetUserType(const std::string& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                    /**
                     * 获取<p>UID/GID信息</p>
                     * @return UserId <p>UID/GID信息</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>UID/GID信息</p>
                     * @param _userId <p>UID/GID信息</p>
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取<p>容量硬限制，单位GiB。设置范围10-10000000。</p>
                     * @return CapacityHardLimit <p>容量硬限制，单位GiB。设置范围10-10000000。</p>
                     * 
                     */
                    uint64_t GetCapacityHardLimit() const;

                    /**
                     * 设置<p>容量硬限制，单位GiB。设置范围10-10000000。</p>
                     * @param _capacityHardLimit <p>容量硬限制，单位GiB。设置范围10-10000000。</p>
                     * 
                     */
                    void SetCapacityHardLimit(const uint64_t& _capacityHardLimit);

                    /**
                     * 判断参数 CapacityHardLimit 是否已赋值
                     * @return CapacityHardLimit 是否已赋值
                     * 
                     */
                    bool CapacityHardLimitHasBeenSet() const;

                    /**
                     * 获取<p>文件硬限制，单位个。设置范围1000-100000000</p>
                     * @return FileHardLimit <p>文件硬限制，单位个。设置范围1000-100000000</p>
                     * 
                     */
                    uint64_t GetFileHardLimit() const;

                    /**
                     * 设置<p>文件硬限制，单位个。设置范围1000-100000000</p>
                     * @param _fileHardLimit <p>文件硬限制，单位个。设置范围1000-100000000</p>
                     * 
                     */
                    void SetFileHardLimit(const uint64_t& _fileHardLimit);

                    /**
                     * 判断参数 FileHardLimit 是否已赋值
                     * @return FileHardLimit 是否已赋值
                     * 
                     */
                    bool FileHardLimitHasBeenSet() const;

                    /**
                     * 获取<p>需设置配额的目录路径，必须以 /cfs/ 开头，代表文件存储实例内部的逻辑路径，而非本地挂载点路径。不同目录之间不可存在包含关系。<br>示例：</p><ul><li>若挂载的是CFS根目录 /，需对挂载路径下的 test1/test2 设置配额，则入参值为 /cfs/test1/test2</li><li>若挂载的是CFS子目录 /subdir，需对挂载路径下的 test1/test2 设置配额，则入参值为 /cfs/subdir/test1/test2</li></ul>
                     * @return DirectoryPath <p>需设置配额的目录路径，必须以 /cfs/ 开头，代表文件存储实例内部的逻辑路径，而非本地挂载点路径。不同目录之间不可存在包含关系。<br>示例：</p><ul><li>若挂载的是CFS根目录 /，需对挂载路径下的 test1/test2 设置配额，则入参值为 /cfs/test1/test2</li><li>若挂载的是CFS子目录 /subdir，需对挂载路径下的 test1/test2 设置配额，则入参值为 /cfs/subdir/test1/test2</li></ul>
                     * 
                     */
                    std::string GetDirectoryPath() const;

                    /**
                     * 设置<p>需设置配额的目录路径，必须以 /cfs/ 开头，代表文件存储实例内部的逻辑路径，而非本地挂载点路径。不同目录之间不可存在包含关系。<br>示例：</p><ul><li>若挂载的是CFS根目录 /，需对挂载路径下的 test1/test2 设置配额，则入参值为 /cfs/test1/test2</li><li>若挂载的是CFS子目录 /subdir，需对挂载路径下的 test1/test2 设置配额，则入参值为 /cfs/subdir/test1/test2</li></ul>
                     * @param _directoryPath <p>需设置配额的目录路径，必须以 /cfs/ 开头，代表文件存储实例内部的逻辑路径，而非本地挂载点路径。不同目录之间不可存在包含关系。<br>示例：</p><ul><li>若挂载的是CFS根目录 /，需对挂载路径下的 test1/test2 设置配额，则入参值为 /cfs/test1/test2</li><li>若挂载的是CFS子目录 /subdir，需对挂载路径下的 test1/test2 设置配额，则入参值为 /cfs/subdir/test1/test2</li></ul>
                     * 
                     */
                    void SetDirectoryPath(const std::string& _directoryPath);

                    /**
                     * 判断参数 DirectoryPath 是否已赋值
                     * @return DirectoryPath 是否已赋值
                     * 
                     */
                    bool DirectoryPathHasBeenSet() const;

                private:

                    /**
                     * <p>文件系统 ID,通过<a href="https://cloud.tencent.com/document/api/582/38170">查询文件系统列表</a>获取</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>指定配额类型，包括Uid、Gid，Dir，分别代表用户配额，用户组配额，目录配额</p>
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * <p>UID/GID信息</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>容量硬限制，单位GiB。设置范围10-10000000。</p>
                     */
                    uint64_t m_capacityHardLimit;
                    bool m_capacityHardLimitHasBeenSet;

                    /**
                     * <p>文件硬限制，单位个。设置范围1000-100000000</p>
                     */
                    uint64_t m_fileHardLimit;
                    bool m_fileHardLimitHasBeenSet;

                    /**
                     * <p>需设置配额的目录路径，必须以 /cfs/ 开头，代表文件存储实例内部的逻辑路径，而非本地挂载点路径。不同目录之间不可存在包含关系。<br>示例：</p><ul><li>若挂载的是CFS根目录 /，需对挂载路径下的 test1/test2 设置配额，则入参值为 /cfs/test1/test2</li><li>若挂载的是CFS子目录 /subdir，需对挂载路径下的 test1/test2 设置配额，则入参值为 /cfs/subdir/test1/test2</li></ul>
                     */
                    std::string m_directoryPath;
                    bool m_directoryPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_SETUSERQUOTAREQUEST_H_
