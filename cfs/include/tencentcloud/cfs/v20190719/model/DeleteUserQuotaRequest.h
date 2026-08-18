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
                     * 获取<p>文件系统ID，通过查询文件系统列表获取；<a href="https://cloud.tencent.com/document/product/582/38170">DescribeCfsFileSystems</a></p>
                     * @return FileSystemId <p>文件系统ID，通过查询文件系统列表获取；<a href="https://cloud.tencent.com/document/product/582/38170">DescribeCfsFileSystems</a></p>
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置<p>文件系统ID，通过查询文件系统列表获取；<a href="https://cloud.tencent.com/document/product/582/38170">DescribeCfsFileSystems</a></p>
                     * @param _fileSystemId <p>文件系统ID，通过查询文件系统列表获取；<a href="https://cloud.tencent.com/document/product/582/38170">DescribeCfsFileSystems</a></p>
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
                     * 获取<p>指定配额类型，包括Uid（按用户ID限制）、Gid（按用户组ID限制）、Dir（按目录限制）</p>
                     * @return UserType <p>指定配额类型，包括Uid（按用户ID限制）、Gid（按用户组ID限制）、Dir（按目录限制）</p>
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置<p>指定配额类型，包括Uid（按用户ID限制）、Gid（按用户组ID限制）、Dir（按目录限制）</p>
                     * @param _userType <p>指定配额类型，包括Uid（按用户ID限制）、Gid（按用户组ID限制）、Dir（按目录限制）</p>
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
                     * 获取<p>UID/GID信息，和DirectoryPath参数，两者必须填写一个</p>
                     * @return UserId <p>UID/GID信息，和DirectoryPath参数，两者必须填写一个</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>UID/GID信息，和DirectoryPath参数，两者必须填写一个</p>
                     * @param _userId <p>UID/GID信息，和DirectoryPath参数，两者必须填写一个</p>
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
                     * 获取<p>需删除配额的目录路径，必须以 /cfs/ 开头，代表文件存储实例内部的逻辑路径，而非本地挂载点路径。该参数与 UserId 参数至少填写一个。<br>示例：</p><ul><li>若挂载的是CFS根目录 /，需删除挂载路径下 test1/test2 的配额，则入参值为 /cfs/test1/test2</li><li>若挂载的是CFS子目录 /subdir，需删除挂载路径下 test1/test2 的配额，则入参值为 /cfs/subdir/test1/test2</li></ul>
                     * @return DirectoryPath <p>需删除配额的目录路径，必须以 /cfs/ 开头，代表文件存储实例内部的逻辑路径，而非本地挂载点路径。该参数与 UserId 参数至少填写一个。<br>示例：</p><ul><li>若挂载的是CFS根目录 /，需删除挂载路径下 test1/test2 的配额，则入参值为 /cfs/test1/test2</li><li>若挂载的是CFS子目录 /subdir，需删除挂载路径下 test1/test2 的配额，则入参值为 /cfs/subdir/test1/test2</li></ul>
                     * 
                     */
                    std::string GetDirectoryPath() const;

                    /**
                     * 设置<p>需删除配额的目录路径，必须以 /cfs/ 开头，代表文件存储实例内部的逻辑路径，而非本地挂载点路径。该参数与 UserId 参数至少填写一个。<br>示例：</p><ul><li>若挂载的是CFS根目录 /，需删除挂载路径下 test1/test2 的配额，则入参值为 /cfs/test1/test2</li><li>若挂载的是CFS子目录 /subdir，需删除挂载路径下 test1/test2 的配额，则入参值为 /cfs/subdir/test1/test2</li></ul>
                     * @param _directoryPath <p>需删除配额的目录路径，必须以 /cfs/ 开头，代表文件存储实例内部的逻辑路径，而非本地挂载点路径。该参数与 UserId 参数至少填写一个。<br>示例：</p><ul><li>若挂载的是CFS根目录 /，需删除挂载路径下 test1/test2 的配额，则入参值为 /cfs/test1/test2</li><li>若挂载的是CFS子目录 /subdir，需删除挂载路径下 test1/test2 的配额，则入参值为 /cfs/subdir/test1/test2</li></ul>
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
                     * <p>文件系统ID，通过查询文件系统列表获取；<a href="https://cloud.tencent.com/document/product/582/38170">DescribeCfsFileSystems</a></p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>指定配额类型，包括Uid（按用户ID限制）、Gid（按用户组ID限制）、Dir（按目录限制）</p>
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * <p>UID/GID信息，和DirectoryPath参数，两者必须填写一个</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>需删除配额的目录路径，必须以 /cfs/ 开头，代表文件存储实例内部的逻辑路径，而非本地挂载点路径。该参数与 UserId 参数至少填写一个。<br>示例：</p><ul><li>若挂载的是CFS根目录 /，需删除挂载路径下 test1/test2 的配额，则入参值为 /cfs/test1/test2</li><li>若挂载的是CFS子目录 /subdir，需删除挂载路径下 test1/test2 的配额，则入参值为 /cfs/subdir/test1/test2</li></ul>
                     */
                    std::string m_directoryPath;
                    bool m_directoryPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DELETEUSERQUOTAREQUEST_H_
