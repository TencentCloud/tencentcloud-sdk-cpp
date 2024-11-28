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

#ifndef TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DESCRIBEVSMATTRIBUTESRESPONSE_H_
#define TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DESCRIBEVSMATTRIBUTESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudhsm/v20191112/model/UsgRuleDetail.h>
#include <tencentcloud/cloudhsm/v20191112/model/Tag.h>


namespace TencentCloud
{
    namespace Cloudhsm
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * DescribeVsmAttributes返回参数结构体
                */
                class DescribeVsmAttributesResponse : public AbstractModel
                {
                public:
                    DescribeVsmAttributesResponse();
                    ~DescribeVsmAttributesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取资源Id
                     * @return ResourceId 资源Id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取资源名称
                     * @return ResourceName 资源名称
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取资源状态，1表示资源为正常，2表示资源处于隔离状态
                     * @return Status 资源状态，1表示资源为正常，2表示资源处于隔离状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取资源IP
                     * @return Vip 资源IP
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取资源所属Vpc
                     * @return VpcId 资源所属Vpc
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取资源所属子网
                     * @return SubnetId 资源所属子网
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取资源所属HSM的规格
                     * @return Model 资源所属HSM的规格
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取资源类型，17表示EVSM，33表示GVSM，49表示SVSM
                     * @return VsmType 资源类型，17表示EVSM，33表示GVSM，49表示SVSM
                     * 
                     */
                    int64_t GetVsmType() const;

                    /**
                     * 判断参数 VsmType 是否已赋值
                     * @return VsmType 是否已赋值
                     * 
                     */
                    bool VsmTypeHasBeenSet() const;

                    /**
                     * 获取地域Id，返回腾讯云地域代码，如广州为1，北京为8
                     * @return RegionId 地域Id，返回腾讯云地域代码，如广州为1，北京为8
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取区域Id，返回腾讯云每个地域的可用区代码
                     * @return ZoneId 区域Id，返回腾讯云每个地域的可用区代码
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取资源过期时间，以时间戳形式展示。
                     * @return ExpireTime 资源过期时间，以时间戳形式展示。
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取安全组详情信息,如果未配置字段返回null
                     * @return SgList 安全组详情信息,如果未配置字段返回null
                     * 
                     */
                    std::vector<UsgRuleDetail> GetSgList() const;

                    /**
                     * 判断参数 SgList 是否已赋值
                     * @return SgList 是否已赋值
                     * 
                     */
                    bool SgListHasBeenSet() const;

                    /**
                     * 获取子网名
                     * @return SubnetName 子网名
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     * 
                     */
                    bool SubnetNameHasBeenSet() const;

                    /**
                     * 获取地域名
                     * @return RegionName 地域名
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取区域名
                     * @return ZoneName 区域名
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取实例是否已经过期
                     * @return Expired 实例是否已经过期
                     * 
                     */
                    bool GetExpired() const;

                    /**
                     * 判断参数 Expired 是否已赋值
                     * @return Expired 是否已赋值
                     * 
                     */
                    bool ExpiredHasBeenSet() const;

                    /**
                     * 获取为正数表示实例距离过期时间剩余秒数，为负数表示实例已经过期多少秒
                     * @return RemainSeconds 为正数表示实例距离过期时间剩余秒数，为负数表示实例已经过期多少秒
                     * 
                     */
                    int64_t GetRemainSeconds() const;

                    /**
                     * 判断参数 RemainSeconds 是否已赋值
                     * @return RemainSeconds 是否已赋值
                     * 
                     */
                    bool RemainSecondsHasBeenSet() const;

                    /**
                     * 获取私有虚拟网络名称
                     * @return VpcName 私有虚拟网络名称
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取VPC的IPv4 CIDR
                     * @return VpcCidrBlock VPC的IPv4 CIDR
                     * 
                     */
                    std::string GetVpcCidrBlock() const;

                    /**
                     * 判断参数 VpcCidrBlock 是否已赋值
                     * @return VpcCidrBlock 是否已赋值
                     * 
                     */
                    bool VpcCidrBlockHasBeenSet() const;

                    /**
                     * 获取子网的CIDR
                     * @return SubnetCidrBlock 子网的CIDR
                     * 
                     */
                    std::string GetSubnetCidrBlock() const;

                    /**
                     * 判断参数 SubnetCidrBlock 是否已赋值
                     * @return SubnetCidrBlock 是否已赋值
                     * 
                     */
                    bool SubnetCidrBlockHasBeenSet() const;

                    /**
                     * 获取资源所关联的标签Tag
                     * @return Tags 资源所关联的标签Tag
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取资源续费标识，0表示默认状态(用户未设置，即初始状态)， 1表示自动续费，2表示明确不自动续费(用户设置)
                     * @return RenewFlag 资源续费标识，0表示默认状态(用户未设置，即初始状态)， 1表示自动续费，2表示明确不自动续费(用户设置)
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取厂商
                     * @return Manufacturer 厂商
                     * 
                     */
                    std::string GetManufacturer() const;

                    /**
                     * 判断参数 Manufacturer 是否已赋值
                     * @return Manufacturer 是否已赋值
                     * 
                     */
                    bool ManufacturerHasBeenSet() const;

                private:

                    /**
                     * 资源Id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源名称
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 资源状态，1表示资源为正常，2表示资源处于隔离状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 资源IP
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 资源所属Vpc
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 资源所属子网
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 资源所属HSM的规格
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 资源类型，17表示EVSM，33表示GVSM，49表示SVSM
                     */
                    int64_t m_vsmType;
                    bool m_vsmTypeHasBeenSet;

                    /**
                     * 地域Id，返回腾讯云地域代码，如广州为1，北京为8
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 区域Id，返回腾讯云每个地域的可用区代码
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 资源过期时间，以时间戳形式展示。
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 安全组详情信息,如果未配置字段返回null
                     */
                    std::vector<UsgRuleDetail> m_sgList;
                    bool m_sgListHasBeenSet;

                    /**
                     * 子网名
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * 地域名
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 区域名
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 实例是否已经过期
                     */
                    bool m_expired;
                    bool m_expiredHasBeenSet;

                    /**
                     * 为正数表示实例距离过期时间剩余秒数，为负数表示实例已经过期多少秒
                     */
                    int64_t m_remainSeconds;
                    bool m_remainSecondsHasBeenSet;

                    /**
                     * 私有虚拟网络名称
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * VPC的IPv4 CIDR
                     */
                    std::string m_vpcCidrBlock;
                    bool m_vpcCidrBlockHasBeenSet;

                    /**
                     * 子网的CIDR
                     */
                    std::string m_subnetCidrBlock;
                    bool m_subnetCidrBlockHasBeenSet;

                    /**
                     * 资源所关联的标签Tag
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 资源续费标识，0表示默认状态(用户未设置，即初始状态)， 1表示自动续费，2表示明确不自动续费(用户设置)
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 厂商
                     */
                    std::string m_manufacturer;
                    bool m_manufacturerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DESCRIBEVSMATTRIBUTESRESPONSE_H_
