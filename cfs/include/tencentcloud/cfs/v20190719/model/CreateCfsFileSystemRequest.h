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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_CREATECFSFILESYSTEMREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_CREATECFSFILESYSTEMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/TagInfo.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * CreateCfsFileSystem请求参数结构体
                */
                class CreateCfsFileSystemRequest : public AbstractModel
                {
                public:
                    CreateCfsFileSystemRequest();
                    ~CreateCfsFileSystemRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取可用区名称，例如ap-beijing-1，请参考 [概览](https://cloud.tencent.com/document/product/582/13225) 文档中的地域与可用区列表
                     * @return Zone 可用区名称，例如ap-beijing-1，请参考 [概览](https://cloud.tencent.com/document/product/582/13225) 文档中的地域与可用区列表
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区名称，例如ap-beijing-1，请参考 [概览](https://cloud.tencent.com/document/product/582/13225) 文档中的地域与可用区列表
                     * @param Zone 可用区名称，例如ap-beijing-1，请参考 [概览](https://cloud.tencent.com/document/product/582/13225) 文档中的地域与可用区列表
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取网络类型，值为 VPC，BASIC；其中 VPC 为私有网络，BASIC 为基础网络
                     * @return NetInterface 网络类型，值为 VPC，BASIC；其中 VPC 为私有网络，BASIC 为基础网络
                     */
                    std::string GetNetInterface() const;

                    /**
                     * 设置网络类型，值为 VPC，BASIC；其中 VPC 为私有网络，BASIC 为基础网络
                     * @param NetInterface 网络类型，值为 VPC，BASIC；其中 VPC 为私有网络，BASIC 为基础网络
                     */
                    void SetNetInterface(const std::string& _netInterface);

                    /**
                     * 判断参数 NetInterface 是否已赋值
                     * @return NetInterface 是否已赋值
                     */
                    bool NetInterfaceHasBeenSet() const;

                    /**
                     * 获取权限组 ID
                     * @return PGroupId 权限组 ID
                     */
                    std::string GetPGroupId() const;

                    /**
                     * 设置权限组 ID
                     * @param PGroupId 权限组 ID
                     */
                    void SetPGroupId(const std::string& _pGroupId);

                    /**
                     * 判断参数 PGroupId 是否已赋值
                     * @return PGroupId 是否已赋值
                     */
                    bool PGroupIdHasBeenSet() const;

                    /**
                     * 获取文件系统协议类型， 值为 NFS、CIFS; 若留空则默认为 NFS协议
                     * @return Protocol 文件系统协议类型， 值为 NFS、CIFS; 若留空则默认为 NFS协议
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置文件系统协议类型， 值为 NFS、CIFS; 若留空则默认为 NFS协议
                     * @param Protocol 文件系统协议类型， 值为 NFS、CIFS; 若留空则默认为 NFS协议
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取文件系统存储类型，值为 SD ；其中 SD 为标准型存储， HP为性能存储。
                     * @return StorageType 文件系统存储类型，值为 SD ；其中 SD 为标准型存储， HP为性能存储。
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置文件系统存储类型，值为 SD ；其中 SD 为标准型存储， HP为性能存储。
                     * @param StorageType 文件系统存储类型，值为 SD ；其中 SD 为标准型存储， HP为性能存储。
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取私有网络（VPC） ID，若网络类型选择的是VPC，该字段为必填。
                     * @return VpcId 私有网络（VPC） ID，若网络类型选择的是VPC，该字段为必填。
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络（VPC） ID，若网络类型选择的是VPC，该字段为必填。
                     * @param VpcId 私有网络（VPC） ID，若网络类型选择的是VPC，该字段为必填。
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网 ID，若网络类型选择的是VPC，该字段为必填。
                     * @return SubnetId 子网 ID，若网络类型选择的是VPC，该字段为必填。
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网 ID，若网络类型选择的是VPC，该字段为必填。
                     * @param SubnetId 子网 ID，若网络类型选择的是VPC，该字段为必填。
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取指定IP地址，仅VPC网络支持；若不填写、将在该子网下随机分配 IP
                     * @return MountIP 指定IP地址，仅VPC网络支持；若不填写、将在该子网下随机分配 IP
                     */
                    std::string GetMountIP() const;

                    /**
                     * 设置指定IP地址，仅VPC网络支持；若不填写、将在该子网下随机分配 IP
                     * @param MountIP 指定IP地址，仅VPC网络支持；若不填写、将在该子网下随机分配 IP
                     */
                    void SetMountIP(const std::string& _mountIP);

                    /**
                     * 判断参数 MountIP 是否已赋值
                     * @return MountIP 是否已赋值
                     */
                    bool MountIPHasBeenSet() const;

                    /**
                     * 获取用户自定义文件系统名称
                     * @return FsName 用户自定义文件系统名称
                     */
                    std::string GetFsName() const;

                    /**
                     * 设置用户自定义文件系统名称
                     * @param FsName 用户自定义文件系统名称
                     */
                    void SetFsName(const std::string& _fsName);

                    /**
                     * 判断参数 FsName 是否已赋值
                     * @return FsName 是否已赋值
                     */
                    bool FsNameHasBeenSet() const;

                    /**
                     * 获取文件系统标签
                     * @return ResourceTags 文件系统标签
                     */
                    std::vector<TagInfo> GetResourceTags() const;

                    /**
                     * 设置文件系统标签
                     * @param ResourceTags 文件系统标签
                     */
                    void SetResourceTags(const std::vector<TagInfo>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。用于保证请求幂等性的字符串失效时间为2小时。
                     * @return ClientToken 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。用于保证请求幂等性的字符串失效时间为2小时。
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。用于保证请求幂等性的字符串失效时间为2小时。
                     * @param ClientToken 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。用于保证请求幂等性的字符串失效时间为2小时。
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     */
                    bool ClientTokenHasBeenSet() const;

                private:

                    /**
                     * 可用区名称，例如ap-beijing-1，请参考 [概览](https://cloud.tencent.com/document/product/582/13225) 文档中的地域与可用区列表
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 网络类型，值为 VPC，BASIC；其中 VPC 为私有网络，BASIC 为基础网络
                     */
                    std::string m_netInterface;
                    bool m_netInterfaceHasBeenSet;

                    /**
                     * 权限组 ID
                     */
                    std::string m_pGroupId;
                    bool m_pGroupIdHasBeenSet;

                    /**
                     * 文件系统协议类型， 值为 NFS、CIFS; 若留空则默认为 NFS协议
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 文件系统存储类型，值为 SD ；其中 SD 为标准型存储， HP为性能存储。
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 私有网络（VPC） ID，若网络类型选择的是VPC，该字段为必填。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网 ID，若网络类型选择的是VPC，该字段为必填。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 指定IP地址，仅VPC网络支持；若不填写、将在该子网下随机分配 IP
                     */
                    std::string m_mountIP;
                    bool m_mountIPHasBeenSet;

                    /**
                     * 用户自定义文件系统名称
                     */
                    std::string m_fsName;
                    bool m_fsNameHasBeenSet;

                    /**
                     * 文件系统标签
                     */
                    std::vector<TagInfo> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。用于保证请求幂等性的字符串失效时间为2小时。
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_CREATECFSFILESYSTEMREQUEST_H_
