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

#ifndef TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_RESOURCEINFO_H_
#define TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_RESOURCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudhsm/v20191112/model/SgUnit.h>
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
                * 资源信息
                */
                class ResourceInfo : public AbstractModel
                {
                public:
                    ResourceInfo();
                    ~ResourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceId 资源Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ResourceId 资源Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceName 资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ResourceName 资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取资源状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 资源状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置资源状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 资源状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取资源IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Vip 资源IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVip() const;

                    /**
                     * 设置资源IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Vip 资源IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取资源所属Vpc
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId 资源所属Vpc
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置资源所属Vpc
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VpcId 资源所属Vpc
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取资源所属子网
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId 资源所属子网
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置资源所属子网
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SubnetId 资源所属子网
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取资源所属HSM规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Model 资源所属HSM规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetModel() const;

                    /**
                     * 设置资源所属HSM规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Model 资源所属HSM规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VsmType 资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetVsmType() const;

                    /**
                     * 设置资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VsmType 资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVsmType(const int64_t& _vsmType);

                    /**
                     * 判断参数 VsmType 是否已赋值
                     * @return VsmType 是否已赋值
                     */
                    bool VsmTypeHasBeenSet() const;

                    /**
                     * 获取地域Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionId 地域Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置地域Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RegionId 地域Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取区域Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneId 区域Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置区域Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ZoneId 区域Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ExpireTime 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取地域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionName 地域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置地域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RegionName 地域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取区域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneName 区域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置区域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ZoneName 区域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取实例的安全组列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SgList 实例的安全组列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SgUnit> GetSgList() const;

                    /**
                     * 设置实例的安全组列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SgList 实例的安全组列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSgList(const std::vector<SgUnit>& _sgList);

                    /**
                     * 判断参数 SgList 是否已赋值
                     * @return SgList 是否已赋值
                     */
                    bool SgListHasBeenSet() const;

                    /**
                     * 获取子网名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetName 子网名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置子网名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SubnetName 子网名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     */
                    bool SubnetNameHasBeenSet() const;

                    /**
                     * 获取当前实例是否已经过期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Expired 当前实例是否已经过期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetExpired() const;

                    /**
                     * 设置当前实例是否已经过期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Expired 当前实例是否已经过期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExpired(const bool& _expired);

                    /**
                     * 判断参数 Expired 是否已赋值
                     * @return Expired 是否已赋值
                     */
                    bool ExpiredHasBeenSet() const;

                    /**
                     * 获取为正数表示实例距离过期时间还剩余多少秒，为负数表示已经过期多少秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RemainSeconds 为正数表示实例距离过期时间还剩余多少秒，为负数表示已经过期多少秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRemainSeconds() const;

                    /**
                     * 设置为正数表示实例距离过期时间还剩余多少秒，为负数表示已经过期多少秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RemainSeconds 为正数表示实例距离过期时间还剩余多少秒，为负数表示已经过期多少秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRemainSeconds(const int64_t& _remainSeconds);

                    /**
                     * 判断参数 RemainSeconds 是否已赋值
                     * @return RemainSeconds 是否已赋值
                     */
                    bool RemainSecondsHasBeenSet() const;

                    /**
                     * 获取Vpc名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcName Vpc名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置Vpc名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VpcName Vpc名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取创建者Uin账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateUin 创建者Uin账号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreateUin() const;

                    /**
                     * 设置创建者Uin账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateUin 创建者Uin账号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateUin(const std::string& _createUin);

                    /**
                     * 判断参数 CreateUin 是否已赋值
                     * @return CreateUin 是否已赋值
                     */
                    bool CreateUinHasBeenSet() const;

                    /**
                     * 获取自动续费状态标识， 0-手动续费，1-自动续费，2-到期不续
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RenewFlag 自动续费状态标识， 0-手动续费，1-自动续费，2-到期不续
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置自动续费状态标识， 0-手动续费，1-自动续费，2-到期不续
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RenewFlag 自动续费状态标识， 0-手动续费，1-自动续费，2-到期不续
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Tags 标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取厂商
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Manufacturer 厂商
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetManufacturer() const;

                    /**
                     * 设置厂商
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Manufacturer 厂商
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetManufacturer(const std::string& _manufacturer);

                    /**
                     * 判断参数 Manufacturer 是否已赋值
                     * @return Manufacturer 是否已赋值
                     */
                    bool ManufacturerHasBeenSet() const;

                private:

                    /**
                     * 资源Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 资源状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 资源IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 资源所属Vpc
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 资源所属子网
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 资源所属HSM规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_vsmType;
                    bool m_vsmTypeHasBeenSet;

                    /**
                     * 地域Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 区域Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 地域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 区域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 实例的安全组列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SgUnit> m_sgList;
                    bool m_sgListHasBeenSet;

                    /**
                     * 子网名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * 当前实例是否已经过期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_expired;
                    bool m_expiredHasBeenSet;

                    /**
                     * 为正数表示实例距离过期时间还剩余多少秒，为负数表示已经过期多少秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_remainSeconds;
                    bool m_remainSecondsHasBeenSet;

                    /**
                     * Vpc名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * 创建者Uin账号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createUin;
                    bool m_createUinHasBeenSet;

                    /**
                     * 自动续费状态标识， 0-手动续费，1-自动续费，2-到期不续
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 厂商
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_manufacturer;
                    bool m_manufacturerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_RESOURCEINFO_H_
