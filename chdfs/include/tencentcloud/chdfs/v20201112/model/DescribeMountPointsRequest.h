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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_DESCRIBEMOUNTPOINTSREQUEST_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_DESCRIBEMOUNTPOINTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20201112
        {
            namespace Model
            {
                /**
                * DescribeMountPoints请求参数结构体
                */
                class DescribeMountPointsRequest : public AbstractModel
                {
                public:
                    DescribeMountPointsRequest();
                    ~DescribeMountPointsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件系统ID
备注：入参只能指定AccessGroupId、FileSystemId和OwnerUin的其中一个
                     * @return FileSystemId 文件系统ID
备注：入参只能指定AccessGroupId、FileSystemId和OwnerUin的其中一个
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置文件系统ID
备注：入参只能指定AccessGroupId、FileSystemId和OwnerUin的其中一个
                     * @param _fileSystemId 文件系统ID
备注：入参只能指定AccessGroupId、FileSystemId和OwnerUin的其中一个
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
                     * 获取权限组ID
                     * @return AccessGroupId 权限组ID
                     * 
                     */
                    std::string GetAccessGroupId() const;

                    /**
                     * 设置权限组ID
                     * @param _accessGroupId 权限组ID
                     * 
                     */
                    void SetAccessGroupId(const std::string& _accessGroupId);

                    /**
                     * 判断参数 AccessGroupId 是否已赋值
                     * @return AccessGroupId 是否已赋值
                     * 
                     */
                    bool AccessGroupIdHasBeenSet() const;

                    /**
                     * 获取资源所属者Uin
                     * @return OwnerUin 资源所属者Uin
                     * 
                     */
                    uint64_t GetOwnerUin() const;

                    /**
                     * 设置资源所属者Uin
                     * @param _ownerUin 资源所属者Uin
                     * 
                     */
                    void SetOwnerUin(const uint64_t& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                private:

                    /**
                     * 文件系统ID
备注：入参只能指定AccessGroupId、FileSystemId和OwnerUin的其中一个
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 权限组ID
                     */
                    std::string m_accessGroupId;
                    bool m_accessGroupIdHasBeenSet;

                    /**
                     * 资源所属者Uin
                     */
                    uint64_t m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_DESCRIBEMOUNTPOINTSREQUEST_H_
