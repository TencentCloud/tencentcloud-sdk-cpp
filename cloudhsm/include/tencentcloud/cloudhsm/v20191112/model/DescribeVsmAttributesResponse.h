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
                     * 获取<p>资源Id</p>
                     * @return ResourceId <p>资源Id</p>
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
                     * 获取<p>资源名称</p>
                     * @return ResourceName <p>资源名称</p>
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
                     * 获取<p>资源状态，1表示资源为正常，2表示资源处于隔离状态</p>
                     * @return Status <p>资源状态，1表示资源为正常，2表示资源处于隔离状态</p>
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
                     * 获取<p>资源IP</p>
                     * @return Vip <p>资源IP</p>
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
                     * 获取<p>资源所属Vpc</p>
                     * @return VpcId <p>资源所属Vpc</p>
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
                     * 获取<p>资源所属子网</p>
                     * @return SubnetId <p>资源所属子网</p>
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
                     * 获取<p>资源所属HSM的规格</p>
                     * @return Model <p>资源所属HSM的规格</p>
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
                     * 获取<p>资源类型，17表示EVSM，33表示GVSM，49表示SVSM</p>
                     * @return VsmType <p>资源类型，17表示EVSM，33表示GVSM，49表示SVSM</p>
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
                     * 获取<p>地域Id，返回腾讯云地域代码，如广州为1，北京为8</p>
                     * @return RegionId <p>地域Id，返回腾讯云地域代码，如广州为1，北京为8</p>
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
                     * 获取<p>区域Id，返回腾讯云每个地域的可用区代码</p>
                     * @return ZoneId <p>区域Id，返回腾讯云每个地域的可用区代码</p>
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
                     * 获取<p>资源过期时间，以时间戳形式展示。</p>
                     * @return ExpireTime <p>资源过期时间，以时间戳形式展示。</p>
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
                     * 获取<p>安全组详情信息,如果未配置字段返回null</p>
                     * @return SgList <p>安全组详情信息,如果未配置字段返回null</p>
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
                     * 获取<p>子网名</p>
                     * @return SubnetName <p>子网名</p>
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
                     * 获取<p>地域名</p>
                     * @return RegionName <p>地域名</p>
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
                     * 获取<p>区域名</p>
                     * @return ZoneName <p>区域名</p>
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
                     * 获取<p>实例是否已经过期</p>
                     * @return Expired <p>实例是否已经过期</p>
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
                     * 获取<p>为正数表示实例距离过期时间剩余秒数，为负数表示实例已经过期多少秒</p>
                     * @return RemainSeconds <p>为正数表示实例距离过期时间剩余秒数，为负数表示实例已经过期多少秒</p>
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
                     * 获取<p>私有虚拟网络名称</p>
                     * @return VpcName <p>私有虚拟网络名称</p>
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
                     * 获取<p>VPC的IPv4 CIDR</p>
                     * @return VpcCidrBlock <p>VPC的IPv4 CIDR</p>
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
                     * 获取<p>子网的CIDR</p>
                     * @return SubnetCidrBlock <p>子网的CIDR</p>
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
                     * 获取<p>资源所关联的标签Tag</p>
                     * @return Tags <p>资源所关联的标签Tag</p>
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
                     * 获取<p>资源续费标识，0表示默认状态(用户未设置，即初始状态)， 1表示自动续费，2表示明确不自动续费(用户设置)</p>
                     * @return RenewFlag <p>资源续费标识，0表示默认状态(用户未设置，即初始状态)， 1表示自动续费，2表示明确不自动续费(用户设置)</p>
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
                     * 获取<p>厂商</p>
                     * @return Manufacturer <p>厂商</p>
                     * 
                     */
                    std::string GetManufacturer() const;

                    /**
                     * 判断参数 Manufacturer 是否已赋值
                     * @return Manufacturer 是否已赋值
                     * 
                     */
                    bool ManufacturerHasBeenSet() const;

                    /**
                     * 获取<p>0-关闭，1-开启</p>
                     * @return PqcFlag <p>0-关闭，1-开启</p>
                     * 
                     */
                    int64_t GetPqcFlag() const;

                    /**
                     * 判断参数 PqcFlag 是否已赋值
                     * @return PqcFlag 是否已赋值
                     * 
                     */
                    bool PqcFlagHasBeenSet() const;

                    /**
                     * 获取<p>环境</p><p>默认值：cloud</p><p>cloud或者cdc</p>
                     * @return DeployEnv <p>环境</p><p>默认值：cloud</p><p>cloud或者cdc</p>
                     * 
                     */
                    std::string GetDeployEnv() const;

                    /**
                     * 判断参数 DeployEnv 是否已赋值
                     * @return DeployEnv 是否已赋值
                     * 
                     */
                    bool DeployEnvHasBeenSet() const;

                private:

                    /**
                     * <p>资源Id</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>资源名称</p>
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * <p>资源状态，1表示资源为正常，2表示资源处于隔离状态</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>资源IP</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>资源所属Vpc</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>资源所属子网</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>资源所属HSM的规格</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>资源类型，17表示EVSM，33表示GVSM，49表示SVSM</p>
                     */
                    int64_t m_vsmType;
                    bool m_vsmTypeHasBeenSet;

                    /**
                     * <p>地域Id，返回腾讯云地域代码，如广州为1，北京为8</p>
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * <p>区域Id，返回腾讯云每个地域的可用区代码</p>
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>资源过期时间，以时间戳形式展示。</p>
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>安全组详情信息,如果未配置字段返回null</p>
                     */
                    std::vector<UsgRuleDetail> m_sgList;
                    bool m_sgListHasBeenSet;

                    /**
                     * <p>子网名</p>
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * <p>地域名</p>
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * <p>区域名</p>
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * <p>实例是否已经过期</p>
                     */
                    bool m_expired;
                    bool m_expiredHasBeenSet;

                    /**
                     * <p>为正数表示实例距离过期时间剩余秒数，为负数表示实例已经过期多少秒</p>
                     */
                    int64_t m_remainSeconds;
                    bool m_remainSecondsHasBeenSet;

                    /**
                     * <p>私有虚拟网络名称</p>
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * <p>VPC的IPv4 CIDR</p>
                     */
                    std::string m_vpcCidrBlock;
                    bool m_vpcCidrBlockHasBeenSet;

                    /**
                     * <p>子网的CIDR</p>
                     */
                    std::string m_subnetCidrBlock;
                    bool m_subnetCidrBlockHasBeenSet;

                    /**
                     * <p>资源所关联的标签Tag</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>资源续费标识，0表示默认状态(用户未设置，即初始状态)， 1表示自动续费，2表示明确不自动续费(用户设置)</p>
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>厂商</p>
                     */
                    std::string m_manufacturer;
                    bool m_manufacturerHasBeenSet;

                    /**
                     * <p>0-关闭，1-开启</p>
                     */
                    int64_t m_pqcFlag;
                    bool m_pqcFlagHasBeenSet;

                    /**
                     * <p>环境</p><p>默认值：cloud</p><p>cloud或者cdc</p>
                     */
                    std::string m_deployEnv;
                    bool m_deployEnvHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DESCRIBEVSMATTRIBUTESRESPONSE_H_
