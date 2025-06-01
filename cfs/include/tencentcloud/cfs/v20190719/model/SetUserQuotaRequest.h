/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
                     * 获取文件系统 ID,通过[查询文件系统列表](https://cloud.tencent.com/document/api/582/38170)获取
                     * @return FileSystemId 文件系统 ID,通过[查询文件系统列表](https://cloud.tencent.com/document/api/582/38170)获取
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置文件系统 ID,通过[查询文件系统列表](https://cloud.tencent.com/document/api/582/38170)获取
                     * @param _fileSystemId 文件系统 ID,通过[查询文件系统列表](https://cloud.tencent.com/document/api/582/38170)获取
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
                     * 获取指定配额类型，包括Uid、Gid，Dir，分别代表用户配额，用户组配额，目录配额
                     * @return UserType 指定配额类型，包括Uid、Gid，Dir，分别代表用户配额，用户组配额，目录配额
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置指定配额类型，包括Uid、Gid，Dir，分别代表用户配额，用户组配额，目录配额
                     * @param _userType 指定配额类型，包括Uid、Gid，Dir，分别代表用户配额，用户组配额，目录配额
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
                     * 获取UID/GID信息
                     * @return UserId UID/GID信息
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置UID/GID信息
                     * @param _userId UID/GID信息
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
                     * 获取容量硬限制，单位GiB。设置范围10-10000000。
                     * @return CapacityHardLimit 容量硬限制，单位GiB。设置范围10-10000000。
                     * 
                     */
                    uint64_t GetCapacityHardLimit() const;

                    /**
                     * 设置容量硬限制，单位GiB。设置范围10-10000000。
                     * @param _capacityHardLimit 容量硬限制，单位GiB。设置范围10-10000000。
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
                     * 获取文件硬限制，单位个。设置范围1000-100000000
                     * @return FileHardLimit 文件硬限制，单位个。设置范围1000-100000000
                     * 
                     */
                    uint64_t GetFileHardLimit() const;

                    /**
                     * 设置文件硬限制，单位个。设置范围1000-100000000
                     * @param _fileHardLimit 文件硬限制，单位个。设置范围1000-100000000
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
                     * 获取需设置目录配额的目录绝对路径，不同目录不可存在包含关系
                     * @return DirectoryPath 需设置目录配额的目录绝对路径，不同目录不可存在包含关系
                     * 
                     */
                    std::string GetDirectoryPath() const;

                    /**
                     * 设置需设置目录配额的目录绝对路径，不同目录不可存在包含关系
                     * @param _directoryPath 需设置目录配额的目录绝对路径，不同目录不可存在包含关系
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
                     * 文件系统 ID,通过[查询文件系统列表](https://cloud.tencent.com/document/api/582/38170)获取
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 指定配额类型，包括Uid、Gid，Dir，分别代表用户配额，用户组配额，目录配额
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * UID/GID信息
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 容量硬限制，单位GiB。设置范围10-10000000。
                     */
                    uint64_t m_capacityHardLimit;
                    bool m_capacityHardLimitHasBeenSet;

                    /**
                     * 文件硬限制，单位个。设置范围1000-100000000
                     */
                    uint64_t m_fileHardLimit;
                    bool m_fileHardLimitHasBeenSet;

                    /**
                     * 需设置目录配额的目录绝对路径，不同目录不可存在包含关系
                     */
                    std::string m_directoryPath;
                    bool m_directoryPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_SETUSERQUOTAREQUEST_H_
