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

#ifndef TENCENTCLOUD_CHDFS_V20190718_MODEL_CREATEMOUNTPOINTREQUEST_H_
#define TENCENTCLOUD_CHDFS_V20190718_MODEL_CREATEMOUNTPOINTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20190718
        {
            namespace Model
            {
                /**
                * CreateMountPoint请求参数结构体
                */
                class CreateMountPointRequest : public AbstractModel
                {
                public:
                    CreateMountPointRequest();
                    ~CreateMountPointRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取挂载点名称
                     * @return MountPointName 挂载点名称
                     * 
                     */
                    std::string GetMountPointName() const;

                    /**
                     * 设置挂载点名称
                     * @param _mountPointName 挂载点名称
                     * 
                     */
                    void SetMountPointName(const std::string& _mountPointName);

                    /**
                     * 判断参数 MountPointName 是否已赋值
                     * @return MountPointName 是否已赋值
                     * 
                     */
                    bool MountPointNameHasBeenSet() const;

                    /**
                     * 获取文件系统ID
                     * @return FileSystemId 文件系统ID
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置文件系统ID
                     * @param _fileSystemId 文件系统ID
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
                     * 获取VPC网络ID
                     * @return VpcId VPC网络ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC网络ID
                     * @param _vpcId VPC网络ID
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取挂载点状态（1：打开；2：关闭）
                     * @return MountPointStatus 挂载点状态（1：打开；2：关闭）
                     * 
                     */
                    uint64_t GetMountPointStatus() const;

                    /**
                     * 设置挂载点状态（1：打开；2：关闭）
                     * @param _mountPointStatus 挂载点状态（1：打开；2：关闭）
                     * 
                     */
                    void SetMountPointStatus(const uint64_t& _mountPointStatus);

                    /**
                     * 判断参数 MountPointStatus 是否已赋值
                     * @return MountPointStatus 是否已赋值
                     * 
                     */
                    bool MountPointStatusHasBeenSet() const;

                    /**
                     * 获取VPC网络类型（1：CVM；2：黑石1.0；3：黑石2.0）
                     * @return VpcType VPC网络类型（1：CVM；2：黑石1.0；3：黑石2.0）
                     * 
                     */
                    uint64_t GetVpcType() const;

                    /**
                     * 设置VPC网络类型（1：CVM；2：黑石1.0；3：黑石2.0）
                     * @param _vpcType VPC网络类型（1：CVM；2：黑石1.0；3：黑石2.0）
                     * 
                     */
                    void SetVpcType(const uint64_t& _vpcType);

                    /**
                     * 判断参数 VpcType 是否已赋值
                     * @return VpcType 是否已赋值
                     * 
                     */
                    bool VpcTypeHasBeenSet() const;

                private:

                    /**
                     * 挂载点名称
                     */
                    std::string m_mountPointName;
                    bool m_mountPointNameHasBeenSet;

                    /**
                     * 文件系统ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 权限组ID
                     */
                    std::string m_accessGroupId;
                    bool m_accessGroupIdHasBeenSet;

                    /**
                     * VPC网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 挂载点状态（1：打开；2：关闭）
                     */
                    uint64_t m_mountPointStatus;
                    bool m_mountPointStatusHasBeenSet;

                    /**
                     * VPC网络类型（1：CVM；2：黑石1.0；3：黑石2.0）
                     */
                    uint64_t m_vpcType;
                    bool m_vpcTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20190718_MODEL_CREATEMOUNTPOINTREQUEST_H_
