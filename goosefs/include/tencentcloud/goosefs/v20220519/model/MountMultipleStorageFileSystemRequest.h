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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_MOUNTMULTIPLESTORAGEFILESYSTEMREQUEST_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_MOUNTMULTIPLESTORAGEFILESYSTEMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * MountMultipleStorageFileSystem请求参数结构体
                */
                class MountMultipleStorageFileSystemRequest : public AbstractModel
                {
                public:
                    MountMultipleStorageFileSystemRequest();
                    ~MountMultipleStorageFileSystemRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取客户端集群所属的文件系统id
                     * @return FileSystemId 客户端集群所属的文件系统id
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置客户端集群所属的文件系统id
                     * @param _fileSystemId 客户端集群所属的文件系统id
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
                     * 获取客户端集群Id
                     * @return CustomerClusterId 客户端集群Id
                     * 
                     */
                    std::string GetCustomerClusterId() const;

                    /**
                     * 设置客户端集群Id
                     * @param _customerClusterId 客户端集群Id
                     * 
                     */
                    void SetCustomerClusterId(const std::string& _customerClusterId);

                    /**
                     * 判断参数 CustomerClusterId 是否已赋值
                     * @return CustomerClusterId 是否已赋值
                     * 
                     */
                    bool CustomerClusterIdHasBeenSet() const;

                    /**
                     * 获取挂载的存储集群的id
                     * @return StorageFileSystemId 挂载的存储集群的id
                     * 
                     */
                    std::string GetStorageFileSystemId() const;

                    /**
                     * 设置挂载的存储集群的id
                     * @param _storageFileSystemId 挂载的存储集群的id
                     * 
                     */
                    void SetStorageFileSystemId(const std::string& _storageFileSystemId);

                    /**
                     * 判断参数 StorageFileSystemId 是否已赋值
                     * @return StorageFileSystemId 是否已赋值
                     * 
                     */
                    bool StorageFileSystemIdHasBeenSet() const;

                private:

                    /**
                     * 客户端集群所属的文件系统id
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 客户端集群Id
                     */
                    std::string m_customerClusterId;
                    bool m_customerClusterIdHasBeenSet;

                    /**
                     * 挂载的存储集群的id
                     */
                    std::string m_storageFileSystemId;
                    bool m_storageFileSystemIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_MOUNTMULTIPLESTORAGEFILESYSTEMREQUEST_H_
