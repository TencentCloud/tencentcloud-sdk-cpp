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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DELETEUSERQUOTAREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DELETEUSERQUOTAREQUEST_H_

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
                * DeleteUserQuota请求参数结构体
                */
                class DeleteUserQuotaRequest : public AbstractModel
                {
                public:
                    DeleteUserQuotaRequest();
                    ~DeleteUserQuotaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件系统 ID
                     * @return FileSystemId 文件系统 ID
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置文件系统 ID
                     * @param _fileSystemId 文件系统 ID
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
                     * 获取指定配额类型，包括Uid、Gid
                     * @return UserType 指定配额类型，包括Uid、Gid
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置指定配额类型，包括Uid、Gid
                     * @param _userType 指定配额类型，包括Uid、Gid
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

                private:

                    /**
                     * 文件系统 ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 指定配额类型，包括Uid、Gid
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * UID/GID信息
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DELETEUSERQUOTAREQUEST_H_
