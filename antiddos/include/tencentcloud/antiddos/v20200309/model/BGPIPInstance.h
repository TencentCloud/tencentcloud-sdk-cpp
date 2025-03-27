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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPIPINSTANCE_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPIPINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/InstanceRelation.h>
#include <tencentcloud/antiddos/v20200309/model/BGPIPInstanceSpecification.h>
#include <tencentcloud/antiddos/v20200309/model/BGPIPInstanceUsages.h>
#include <tencentcloud/antiddos/v20200309/model/RegionInfo.h>
#include <tencentcloud/antiddos/v20200309/model/PackInfo.h>
#include <tencentcloud/antiddos/v20200309/model/StaticPackRelation.h>
#include <tencentcloud/antiddos/v20200309/model/EipAddressPackRelation.h>
#include <tencentcloud/antiddos/v20200309/model/EipAddressRelation.h>
#include <tencentcloud/antiddos/v20200309/model/TagInfo.h>
#include <tencentcloud/antiddos/v20200309/model/AnycastOutPackRelation.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * 高防IP资产实例信息
                */
                class BGPIPInstance : public AbstractModel
                {
                public:
                    BGPIPInstance();
                    ~BGPIPInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资产实例的详细信息
                     * @return InstanceDetail 资产实例的详细信息
                     * 
                     */
                    InstanceRelation GetInstanceDetail() const;

                    /**
                     * 设置资产实例的详细信息
                     * @param _instanceDetail 资产实例的详细信息
                     * 
                     */
                    void SetInstanceDetail(const InstanceRelation& _instanceDetail);

                    /**
                     * 判断参数 InstanceDetail 是否已赋值
                     * @return InstanceDetail 是否已赋值
                     * 
                     */
                    bool InstanceDetailHasBeenSet() const;

                    /**
                     * 获取资产实例的规格信息
                     * @return SpecificationLimit 资产实例的规格信息
                     * 
                     */
                    BGPIPInstanceSpecification GetSpecificationLimit() const;

                    /**
                     * 设置资产实例的规格信息
                     * @param _specificationLimit 资产实例的规格信息
                     * 
                     */
                    void SetSpecificationLimit(const BGPIPInstanceSpecification& _specificationLimit);

                    /**
                     * 判断参数 SpecificationLimit 是否已赋值
                     * @return SpecificationLimit 是否已赋值
                     * 
                     */
                    bool SpecificationLimitHasBeenSet() const;

                    /**
                     * 获取资产实例的使用统计信息
                     * @return Usage 资产实例的使用统计信息
                     * 
                     */
                    BGPIPInstanceUsages GetUsage() const;

                    /**
                     * 设置资产实例的使用统计信息
                     * @param _usage 资产实例的使用统计信息
                     * 
                     */
                    void SetUsage(const BGPIPInstanceUsages& _usage);

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                    /**
                     * 获取资产实例所在的地域
                     * @return Region 资产实例所在的地域
                     * 
                     */
                    RegionInfo GetRegion() const;

                    /**
                     * 设置资产实例所在的地域
                     * @param _region 资产实例所在的地域
                     * 
                     */
                    void SetRegion(const RegionInfo& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取资产实例的防护状态，状态码如下：
"idle"：正常状态(无攻击)
"attacking"：攻击中
"blocking"：封堵中
"creating"：创建中
"deblocking"：解封中
"isolate"：回收隔离中
                     * @return Status 资产实例的防护状态，状态码如下：
"idle"：正常状态(无攻击)
"attacking"：攻击中
"blocking"：封堵中
"creating"：创建中
"deblocking"：解封中
"isolate"：回收隔离中
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置资产实例的防护状态，状态码如下：
"idle"：正常状态(无攻击)
"attacking"：攻击中
"blocking"：封堵中
"creating"：创建中
"deblocking"：解封中
"isolate"：回收隔离中
                     * @param _status 资产实例的防护状态，状态码如下：
"idle"：正常状态(无攻击)
"attacking"：攻击中
"blocking"：封堵中
"creating"：创建中
"deblocking"：解封中
"isolate"：回收隔离中
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取到期时间
                     * @return ExpiredTime 到期时间
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置到期时间
                     * @param _expiredTime 到期时间
                     * 
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取购买时间
                     * @return CreatedTime 购买时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置购买时间
                     * @param _createdTime 购买时间
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取资产实例的名称
                     * @return Name 资产实例的名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置资产实例的名称
                     * @param _name 资产实例的名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取资产实例所属的套餐包信息，
注意：当资产实例不是套餐包的实例时，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackInfo 资产实例所属的套餐包信息，
注意：当资产实例不是套餐包的实例时，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PackInfo GetPackInfo() const;

                    /**
                     * 设置资产实例所属的套餐包信息，
注意：当资产实例不是套餐包的实例时，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _packInfo 资产实例所属的套餐包信息，
注意：当资产实例不是套餐包的实例时，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPackInfo(const PackInfo& _packInfo);

                    /**
                     * 判断参数 PackInfo 是否已赋值
                     * @return PackInfo 是否已赋值
                     * 
                     */
                    bool PackInfoHasBeenSet() const;

                    /**
                     * 获取资产实例所属的三网套餐包详情，
注意：当资产实例不是三网套餐包的实例时，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StaticPackRelation 资产实例所属的三网套餐包详情，
注意：当资产实例不是三网套餐包的实例时，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    StaticPackRelation GetStaticPackRelation() const;

                    /**
                     * 设置资产实例所属的三网套餐包详情，
注意：当资产实例不是三网套餐包的实例时，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _staticPackRelation 资产实例所属的三网套餐包详情，
注意：当资产实例不是三网套餐包的实例时，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStaticPackRelation(const StaticPackRelation& _staticPackRelation);

                    /**
                     * 判断参数 StaticPackRelation 是否已赋值
                     * @return StaticPackRelation 是否已赋值
                     * 
                     */
                    bool StaticPackRelationHasBeenSet() const;

                    /**
                     * 获取区分高防IP境外线路
                     * @return ZoneId 区分高防IP境外线路
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置区分高防IP境外线路
                     * @param _zoneId 区分高防IP境外线路
                     * 
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取区分集群
                     * @return Tgw 区分集群
                     * 
                     */
                    uint64_t GetTgw() const;

                    /**
                     * 设置区分集群
                     * @param _tgw 区分集群
                     * 
                     */
                    void SetTgw(const uint64_t& _tgw);

                    /**
                     * 判断参数 Tgw 是否已赋值
                     * @return Tgw 是否已赋值
                     * 
                     */
                    bool TgwHasBeenSet() const;

                    /**
                     * 获取高防弹性公网IP状态，包含'CREATING'(创建中),'BINDING'(绑定中),'BIND'(已绑定),'UNBINDING'(解绑中),'UNBIND'(已解绑),'OFFLINING'(释放中),'BIND_ENI'(绑定悬空弹性网卡)。只对高防弹性公网IP实例有效。
                     * @return EipAddressStatus 高防弹性公网IP状态，包含'CREATING'(创建中),'BINDING'(绑定中),'BIND'(已绑定),'UNBINDING'(解绑中),'UNBIND'(已解绑),'OFFLINING'(释放中),'BIND_ENI'(绑定悬空弹性网卡)。只对高防弹性公网IP实例有效。
                     * 
                     */
                    std::string GetEipAddressStatus() const;

                    /**
                     * 设置高防弹性公网IP状态，包含'CREATING'(创建中),'BINDING'(绑定中),'BIND'(已绑定),'UNBINDING'(解绑中),'UNBIND'(已解绑),'OFFLINING'(释放中),'BIND_ENI'(绑定悬空弹性网卡)。只对高防弹性公网IP实例有效。
                     * @param _eipAddressStatus 高防弹性公网IP状态，包含'CREATING'(创建中),'BINDING'(绑定中),'BIND'(已绑定),'UNBINDING'(解绑中),'UNBIND'(已解绑),'OFFLINING'(释放中),'BIND_ENI'(绑定悬空弹性网卡)。只对高防弹性公网IP实例有效。
                     * 
                     */
                    void SetEipAddressStatus(const std::string& _eipAddressStatus);

                    /**
                     * 判断参数 EipAddressStatus 是否已赋值
                     * @return EipAddressStatus 是否已赋值
                     * 
                     */
                    bool EipAddressStatusHasBeenSet() const;

                    /**
                     * 获取是否高防弹性公网IP实例，是为1，否为0。
                     * @return EipFlag 是否高防弹性公网IP实例，是为1，否为0。
                     * 
                     */
                    int64_t GetEipFlag() const;

                    /**
                     * 设置是否高防弹性公网IP实例，是为1，否为0。
                     * @param _eipFlag 是否高防弹性公网IP实例，是为1，否为0。
                     * 
                     */
                    void SetEipFlag(const int64_t& _eipFlag);

                    /**
                     * 判断参数 EipFlag 是否已赋值
                     * @return EipFlag 是否已赋值
                     * 
                     */
                    bool EipFlagHasBeenSet() const;

                    /**
                     * 获取资产实例所属的高防弹性公网IP套餐包详情，
注意：当资产实例不是高防弹性公网IP套餐包的实例时，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EipAddressPackRelation 资产实例所属的高防弹性公网IP套餐包详情，
注意：当资产实例不是高防弹性公网IP套餐包的实例时，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EipAddressPackRelation GetEipAddressPackRelation() const;

                    /**
                     * 设置资产实例所属的高防弹性公网IP套餐包详情，
注意：当资产实例不是高防弹性公网IP套餐包的实例时，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eipAddressPackRelation 资产实例所属的高防弹性公网IP套餐包详情，
注意：当资产实例不是高防弹性公网IP套餐包的实例时，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEipAddressPackRelation(const EipAddressPackRelation& _eipAddressPackRelation);

                    /**
                     * 判断参数 EipAddressPackRelation 是否已赋值
                     * @return EipAddressPackRelation 是否已赋值
                     * 
                     */
                    bool EipAddressPackRelationHasBeenSet() const;

                    /**
                     * 获取高防弹性公网IP关联的实例信息。
注意：当资产实例不是高防弹性公网IP实例时，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EipAddressInfo 高防弹性公网IP关联的实例信息。
注意：当资产实例不是高防弹性公网IP实例时，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EipAddressRelation GetEipAddressInfo() const;

                    /**
                     * 设置高防弹性公网IP关联的实例信息。
注意：当资产实例不是高防弹性公网IP实例时，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eipAddressInfo 高防弹性公网IP关联的实例信息。
注意：当资产实例不是高防弹性公网IP实例时，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEipAddressInfo(const EipAddressRelation& _eipAddressInfo);

                    /**
                     * 判断参数 EipAddressInfo 是否已赋值
                     * @return EipAddressInfo 是否已赋值
                     * 
                     */
                    bool EipAddressInfoHasBeenSet() const;

                    /**
                     * 获取建议客户接入的域名，客户可使用域名接入。
                     * @return Domain 建议客户接入的域名，客户可使用域名接入。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置建议客户接入的域名，客户可使用域名接入。
                     * @param _domain 建议客户接入的域名，客户可使用域名接入。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取是否开启安全加速，是为1，否为0。
                     * @return DamDDoSStatus 是否开启安全加速，是为1，否为0。
                     * 
                     */
                    uint64_t GetDamDDoSStatus() const;

                    /**
                     * 设置是否开启安全加速，是为1，否为0。
                     * @param _damDDoSStatus 是否开启安全加速，是为1，否为0。
                     * 
                     */
                    void SetDamDDoSStatus(const uint64_t& _damDDoSStatus);

                    /**
                     * 判断参数 DamDDoSStatus 是否已赋值
                     * @return DamDDoSStatus 是否已赋值
                     * 
                     */
                    bool DamDDoSStatusHasBeenSet() const;

                    /**
                     * 获取是否Ipv6版本的IP, 是为1，否为0
                     * @return V6Flag 是否Ipv6版本的IP, 是为1，否为0
                     * 
                     */
                    uint64_t GetV6Flag() const;

                    /**
                     * 设置是否Ipv6版本的IP, 是为1，否为0
                     * @param _v6Flag 是否Ipv6版本的IP, 是为1，否为0
                     * 
                     */
                    void SetV6Flag(const uint64_t& _v6Flag);

                    /**
                     * 判断参数 V6Flag 是否已赋值
                     * @return V6Flag 是否已赋值
                     * 
                     */
                    bool V6FlagHasBeenSet() const;

                    /**
                     * 获取是否渠道版高防IP，是为1，否为0
                     * @return BGPIPChannelFlag 是否渠道版高防IP，是为1，否为0
                     * 
                     */
                    uint64_t GetBGPIPChannelFlag() const;

                    /**
                     * 设置是否渠道版高防IP，是为1，否为0
                     * @param _bGPIPChannelFlag 是否渠道版高防IP，是为1，否为0
                     * 
                     */
                    void SetBGPIPChannelFlag(const uint64_t& _bGPIPChannelFlag);

                    /**
                     * 判断参数 BGPIPChannelFlag 是否已赋值
                     * @return BGPIPChannelFlag 是否已赋值
                     * 
                     */
                    bool BGPIPChannelFlagHasBeenSet() const;

                    /**
                     * 获取资源关联标签
                     * @return TagInfoList 资源关联标签
                     * 
                     */
                    std::vector<TagInfo> GetTagInfoList() const;

                    /**
                     * 设置资源关联标签
                     * @param _tagInfoList 资源关联标签
                     * 
                     */
                    void SetTagInfoList(const std::vector<TagInfo>& _tagInfoList);

                    /**
                     * 判断参数 TagInfoList 是否已赋值
                     * @return TagInfoList 是否已赋值
                     * 
                     */
                    bool TagInfoListHasBeenSet() const;

                    /**
                     * 获取资产实例所属的全力防护套餐包详情，
注意：当资产实例不是全力防护套餐包的实例时，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AnycastOutPackRelation 资产实例所属的全力防护套餐包详情，
注意：当资产实例不是全力防护套餐包的实例时，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AnycastOutPackRelation GetAnycastOutPackRelation() const;

                    /**
                     * 设置资产实例所属的全力防护套餐包详情，
注意：当资产实例不是全力防护套餐包的实例时，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _anycastOutPackRelation 资产实例所属的全力防护套餐包详情，
注意：当资产实例不是全力防护套餐包的实例时，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAnycastOutPackRelation(const AnycastOutPackRelation& _anycastOutPackRelation);

                    /**
                     * 判断参数 AnycastOutPackRelation 是否已赋值
                     * @return AnycastOutPackRelation 是否已赋值
                     * 
                     */
                    bool AnycastOutPackRelationHasBeenSet() const;

                    /**
                     * 获取资源实例版本
                     * @return InstanceVersion 资源实例版本
                     * 
                     */
                    uint64_t GetInstanceVersion() const;

                    /**
                     * 设置资源实例版本
                     * @param _instanceVersion 资源实例版本
                     * 
                     */
                    void SetInstanceVersion(const uint64_t& _instanceVersion);

                    /**
                     * 判断参数 InstanceVersion 是否已赋值
                     * @return InstanceVersion 是否已赋值
                     * 
                     */
                    bool InstanceVersionHasBeenSet() const;

                    /**
                     * 获取重保实例
                     * @return ConvoyId 重保实例
                     * 
                     */
                    std::string GetConvoyId() const;

                    /**
                     * 设置重保实例
                     * @param _convoyId 重保实例
                     * 
                     */
                    void SetConvoyId(const std::string& _convoyId);

                    /**
                     * 判断参数 ConvoyId 是否已赋值
                     * @return ConvoyId 是否已赋值
                     * 
                     */
                    bool ConvoyIdHasBeenSet() const;

                    /**
                     * 获取带宽后付费
                     * @return ElasticBandwidth 带宽后付费
                     * 
                     */
                    uint64_t GetElasticBandwidth() const;

                    /**
                     * 设置带宽后付费
                     * @param _elasticBandwidth 带宽后付费
                     * 
                     */
                    void SetElasticBandwidth(const uint64_t& _elasticBandwidth);

                    /**
                     * 判断参数 ElasticBandwidth 是否已赋值
                     * @return ElasticBandwidth 是否已赋值
                     * 
                     */
                    bool ElasticBandwidthHasBeenSet() const;

                    /**
                     * 获取是否为EO代播的ip: 1是，0不是
                     * @return EOFlag 是否为EO代播的ip: 1是，0不是
                     * 
                     */
                    uint64_t GetEOFlag() const;

                    /**
                     * 设置是否为EO代播的ip: 1是，0不是
                     * @param _eOFlag 是否为EO代播的ip: 1是，0不是
                     * 
                     */
                    void SetEOFlag(const uint64_t& _eOFlag);

                    /**
                     * 判断参数 EOFlag 是否已赋值
                     * @return EOFlag 是否已赋值
                     * 
                     */
                    bool EOFlagHasBeenSet() const;

                private:

                    /**
                     * 资产实例的详细信息
                     */
                    InstanceRelation m_instanceDetail;
                    bool m_instanceDetailHasBeenSet;

                    /**
                     * 资产实例的规格信息
                     */
                    BGPIPInstanceSpecification m_specificationLimit;
                    bool m_specificationLimitHasBeenSet;

                    /**
                     * 资产实例的使用统计信息
                     */
                    BGPIPInstanceUsages m_usage;
                    bool m_usageHasBeenSet;

                    /**
                     * 资产实例所在的地域
                     */
                    RegionInfo m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 资产实例的防护状态，状态码如下：
"idle"：正常状态(无攻击)
"attacking"：攻击中
"blocking"：封堵中
"creating"：创建中
"deblocking"：解封中
"isolate"：回收隔离中
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 到期时间
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * 购买时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 资产实例的名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 资产实例所属的套餐包信息，
注意：当资产实例不是套餐包的实例时，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PackInfo m_packInfo;
                    bool m_packInfoHasBeenSet;

                    /**
                     * 资产实例所属的三网套餐包详情，
注意：当资产实例不是三网套餐包的实例时，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StaticPackRelation m_staticPackRelation;
                    bool m_staticPackRelationHasBeenSet;

                    /**
                     * 区分高防IP境外线路
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 区分集群
                     */
                    uint64_t m_tgw;
                    bool m_tgwHasBeenSet;

                    /**
                     * 高防弹性公网IP状态，包含'CREATING'(创建中),'BINDING'(绑定中),'BIND'(已绑定),'UNBINDING'(解绑中),'UNBIND'(已解绑),'OFFLINING'(释放中),'BIND_ENI'(绑定悬空弹性网卡)。只对高防弹性公网IP实例有效。
                     */
                    std::string m_eipAddressStatus;
                    bool m_eipAddressStatusHasBeenSet;

                    /**
                     * 是否高防弹性公网IP实例，是为1，否为0。
                     */
                    int64_t m_eipFlag;
                    bool m_eipFlagHasBeenSet;

                    /**
                     * 资产实例所属的高防弹性公网IP套餐包详情，
注意：当资产实例不是高防弹性公网IP套餐包的实例时，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EipAddressPackRelation m_eipAddressPackRelation;
                    bool m_eipAddressPackRelationHasBeenSet;

                    /**
                     * 高防弹性公网IP关联的实例信息。
注意：当资产实例不是高防弹性公网IP实例时，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EipAddressRelation m_eipAddressInfo;
                    bool m_eipAddressInfoHasBeenSet;

                    /**
                     * 建议客户接入的域名，客户可使用域名接入。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 是否开启安全加速，是为1，否为0。
                     */
                    uint64_t m_damDDoSStatus;
                    bool m_damDDoSStatusHasBeenSet;

                    /**
                     * 是否Ipv6版本的IP, 是为1，否为0
                     */
                    uint64_t m_v6Flag;
                    bool m_v6FlagHasBeenSet;

                    /**
                     * 是否渠道版高防IP，是为1，否为0
                     */
                    uint64_t m_bGPIPChannelFlag;
                    bool m_bGPIPChannelFlagHasBeenSet;

                    /**
                     * 资源关联标签
                     */
                    std::vector<TagInfo> m_tagInfoList;
                    bool m_tagInfoListHasBeenSet;

                    /**
                     * 资产实例所属的全力防护套餐包详情，
注意：当资产实例不是全力防护套餐包的实例时，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AnycastOutPackRelation m_anycastOutPackRelation;
                    bool m_anycastOutPackRelationHasBeenSet;

                    /**
                     * 资源实例版本
                     */
                    uint64_t m_instanceVersion;
                    bool m_instanceVersionHasBeenSet;

                    /**
                     * 重保实例
                     */
                    std::string m_convoyId;
                    bool m_convoyIdHasBeenSet;

                    /**
                     * 带宽后付费
                     */
                    uint64_t m_elasticBandwidth;
                    bool m_elasticBandwidthHasBeenSet;

                    /**
                     * 是否为EO代播的ip: 1是，0不是
                     */
                    uint64_t m_eOFlag;
                    bool m_eOFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPIPINSTANCE_H_
