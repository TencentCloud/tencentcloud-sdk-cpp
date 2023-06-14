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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_CREATEIMAGEACCELERATIONSERVICEREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_CREATEIMAGEACCELERATIONSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/TagSpecification.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * CreateImageAccelerationService请求参数结构体
                */
                class CreateImageAccelerationServiceRequest : public AbstractModel
                {
                public:
                    CreateImageAccelerationServiceRequest();
                    ~CreateImageAccelerationServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例Id
                     * @return RegistryId 实例Id
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置实例Id
                     * @param _registryId 实例Id
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取创建CFS的归属的VPCID
                     * @return VpcId 创建CFS的归属的VPCID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置创建CFS的归属的VPCID
                     * @param _vpcId 创建CFS的归属的VPCID
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
                     * 获取创建CFS的归属的子网ID
                     * @return SubnetId 创建CFS的归属的子网ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置创建CFS的归属的子网ID
                     * @param _subnetId 创建CFS的归属的子网ID
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取创建CFS的存储类型，其中 SD 为标准型存储， HP为性能存储。
                     * @return StorageType 创建CFS的存储类型，其中 SD 为标准型存储， HP为性能存储。
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置创建CFS的存储类型，其中 SD 为标准型存储， HP为性能存储。
                     * @param _storageType 创建CFS的存储类型，其中 SD 为标准型存储， HP为性能存储。
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取权限组 ID
                     * @return PGroupId 权限组 ID
                     * 
                     */
                    std::string GetPGroupId() const;

                    /**
                     * 设置权限组 ID
                     * @param _pGroupId 权限组 ID
                     * 
                     */
                    void SetPGroupId(const std::string& _pGroupId);

                    /**
                     * 判断参数 PGroupId 是否已赋值
                     * @return PGroupId 是否已赋值
                     * 
                     */
                    bool PGroupIdHasBeenSet() const;

                    /**
                     * 获取可用区名称，例如ap-beijing-1，请参考 概览 文档中的地域与可用区列表
                     * @return Zone 可用区名称，例如ap-beijing-1，请参考 概览 文档中的地域与可用区列表
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区名称，例如ap-beijing-1，请参考 概览 文档中的地域与可用区列表
                     * @param _zone 可用区名称，例如ap-beijing-1，请参考 概览 文档中的地域与可用区列表
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取云标签描述
                     * @return TagSpecification 云标签描述
                     * 
                     */
                    TagSpecification GetTagSpecification() const;

                    /**
                     * 设置云标签描述
                     * @param _tagSpecification 云标签描述
                     * 
                     */
                    void SetTagSpecification(const TagSpecification& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     * 
                     */
                    bool TagSpecificationHasBeenSet() const;

                private:

                    /**
                     * 实例Id
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * 创建CFS的归属的VPCID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 创建CFS的归属的子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 创建CFS的存储类型，其中 SD 为标准型存储， HP为性能存储。
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 权限组 ID
                     */
                    std::string m_pGroupId;
                    bool m_pGroupIdHasBeenSet;

                    /**
                     * 可用区名称，例如ap-beijing-1，请参考 概览 文档中的地域与可用区列表
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 云标签描述
                     */
                    TagSpecification m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_CREATEIMAGEACCELERATIONSERVICEREQUEST_H_
