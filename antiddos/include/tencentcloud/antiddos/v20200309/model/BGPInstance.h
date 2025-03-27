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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPINSTANCE_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/InstanceRelation.h>
#include <tencentcloud/antiddos/v20200309/model/BGPInstanceSpecification.h>
#include <tencentcloud/antiddos/v20200309/model/BGPInstanceUsages.h>
#include <tencentcloud/antiddos/v20200309/model/RegionInfo.h>
#include <tencentcloud/antiddos/v20200309/model/PackInfo.h>
#include <tencentcloud/antiddos/v20200309/model/EipProductInfo.h>
#include <tencentcloud/antiddos/v20200309/model/TagInfo.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * 高防包资产实例信息
                */
                class BGPInstance : public AbstractModel
                {
                public:
                    BGPInstance();
                    ~BGPInstance() = default;
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
                    BGPInstanceSpecification GetSpecificationLimit() const;

                    /**
                     * 设置资产实例的规格信息
                     * @param _specificationLimit 资产实例的规格信息
                     * 
                     */
                    void SetSpecificationLimit(const BGPInstanceSpecification& _specificationLimit);

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
                    BGPInstanceUsages GetUsage() const;

                    /**
                     * 设置资产实例的使用统计信息
                     * @param _usage 资产实例的使用统计信息
                     * 
                     */
                    void SetUsage(const BGPInstanceUsages& _usage);

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
                     * 获取高防包绑定的EIP属于的云产品信息
                     * @return EipProductInfos 高防包绑定的EIP属于的云产品信息
                     * 
                     */
                    std::vector<EipProductInfo> GetEipProductInfos() const;

                    /**
                     * 设置高防包绑定的EIP属于的云产品信息
                     * @param _eipProductInfos 高防包绑定的EIP属于的云产品信息
                     * 
                     */
                    void SetEipProductInfos(const std::vector<EipProductInfo>& _eipProductInfos);

                    /**
                     * 判断参数 EipProductInfos 是否已赋值
                     * @return EipProductInfos 是否已赋值
                     * 
                     */
                    bool EipProductInfosHasBeenSet() const;

                    /**
                     * 获取高防包绑定状态，取值[
"idle"：绑定已完成
 "bounding"：正在绑定中
"failed"：绑定失败
]
                     * @return BoundStatus 高防包绑定状态，取值[
"idle"：绑定已完成
 "bounding"：正在绑定中
"failed"：绑定失败
]
                     * 
                     */
                    std::string GetBoundStatus() const;

                    /**
                     * 设置高防包绑定状态，取值[
"idle"：绑定已完成
 "bounding"：正在绑定中
"failed"：绑定失败
]
                     * @param _boundStatus 高防包绑定状态，取值[
"idle"：绑定已完成
 "bounding"：正在绑定中
"failed"：绑定失败
]
                     * 
                     */
                    void SetBoundStatus(const std::string& _boundStatus);

                    /**
                     * 判断参数 BoundStatus 是否已赋值
                     * @return BoundStatus 是否已赋值
                     * 
                     */
                    bool BoundStatusHasBeenSet() const;

                    /**
                     * 获取四层防护严格级别
                     * @return DDoSLevel 四层防护严格级别
                     * 
                     */
                    std::string GetDDoSLevel() const;

                    /**
                     * 设置四层防护严格级别
                     * @param _dDoSLevel 四层防护严格级别
                     * 
                     */
                    void SetDDoSLevel(const std::string& _dDoSLevel);

                    /**
                     * 判断参数 DDoSLevel 是否已赋值
                     * @return DDoSLevel 是否已赋值
                     * 
                     */
                    bool DDoSLevelHasBeenSet() const;

                    /**
                     * 获取CC防护开关
                     * @return CCEnable CC防护开关
                     * 
                     */
                    int64_t GetCCEnable() const;

                    /**
                     * 设置CC防护开关
                     * @param _cCEnable CC防护开关
                     * 
                     */
                    void SetCCEnable(const int64_t& _cCEnable);

                    /**
                     * 判断参数 CCEnable 是否已赋值
                     * @return CCEnable 是否已赋值
                     * 
                     */
                    bool CCEnableHasBeenSet() const;

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
                     * 获取新版本1ip高防包
                     * @return IpCountNewFlag 新版本1ip高防包
                     * 
                     */
                    uint64_t GetIpCountNewFlag() const;

                    /**
                     * 设置新版本1ip高防包
                     * @param _ipCountNewFlag 新版本1ip高防包
                     * 
                     */
                    void SetIpCountNewFlag(const uint64_t& _ipCountNewFlag);

                    /**
                     * 判断参数 IpCountNewFlag 是否已赋值
                     * @return IpCountNewFlag 是否已赋值
                     * 
                     */
                    bool IpCountNewFlagHasBeenSet() const;

                    /**
                     * 获取攻击封堵套餐标记
                     * @return VitalityVersion 攻击封堵套餐标记
                     * 
                     */
                    uint64_t GetVitalityVersion() const;

                    /**
                     * 设置攻击封堵套餐标记
                     * @param _vitalityVersion 攻击封堵套餐标记
                     * 
                     */
                    void SetVitalityVersion(const uint64_t& _vitalityVersion);

                    /**
                     * 判断参数 VitalityVersion 是否已赋值
                     * @return VitalityVersion 是否已赋值
                     * 
                     */
                    bool VitalityVersionHasBeenSet() const;

                    /**
                     * 获取网络线路
                     * @return Line 网络线路
                     * 
                     */
                    uint64_t GetLine() const;

                    /**
                     * 设置网络线路
                     * @param _line 网络线路
                     * 
                     */
                    void SetLine(const uint64_t& _line);

                    /**
                     * 判断参数 Line 是否已赋值
                     * @return Line 是否已赋值
                     * 
                     */
                    bool LineHasBeenSet() const;

                    /**
                     * 获取不计费的业务带宽
                     * @return FreeServiceBandwidth 不计费的业务带宽
                     * 
                     */
                    uint64_t GetFreeServiceBandwidth() const;

                    /**
                     * 设置不计费的业务带宽
                     * @param _freeServiceBandwidth 不计费的业务带宽
                     * 
                     */
                    void SetFreeServiceBandwidth(const uint64_t& _freeServiceBandwidth);

                    /**
                     * 判断参数 FreeServiceBandwidth 是否已赋值
                     * @return FreeServiceBandwidth 是否已赋值
                     * 
                     */
                    bool FreeServiceBandwidthHasBeenSet() const;

                    /**
                     * 获取弹性业务带宽开关
                     * @return ElasticServiceBandwidth 弹性业务带宽开关
                     * 
                     */
                    uint64_t GetElasticServiceBandwidth() const;

                    /**
                     * 设置弹性业务带宽开关
                     * @param _elasticServiceBandwidth 弹性业务带宽开关
                     * 
                     */
                    void SetElasticServiceBandwidth(const uint64_t& _elasticServiceBandwidth);

                    /**
                     * 判断参数 ElasticServiceBandwidth 是否已赋值
                     * @return ElasticServiceBandwidth 是否已赋值
                     * 
                     */
                    bool ElasticServiceBandwidthHasBeenSet() const;

                    /**
                     * 获取赠送的业务带宽
                     * @return GiftServiceBandWidth 赠送的业务带宽
                     * 
                     */
                    int64_t GetGiftServiceBandWidth() const;

                    /**
                     * 设置赠送的业务带宽
                     * @param _giftServiceBandWidth 赠送的业务带宽
                     * 
                     */
                    void SetGiftServiceBandWidth(const int64_t& _giftServiceBandWidth);

                    /**
                     * 判断参数 GiftServiceBandWidth 是否已赋值
                     * @return GiftServiceBandWidth 是否已赋值
                     * 
                     */
                    bool GiftServiceBandWidthHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return ModifyTime 修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
                     * @param _modifyTime 修改时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取是否是基础防护加强版 0: 不是 1: 是
                     * @return BasicPlusFlag 是否是基础防护加强版 0: 不是 1: 是
                     * 
                     */
                    uint64_t GetBasicPlusFlag() const;

                    /**
                     * 设置是否是基础防护加强版 0: 不是 1: 是
                     * @param _basicPlusFlag 是否是基础防护加强版 0: 不是 1: 是
                     * 
                     */
                    void SetBasicPlusFlag(const uint64_t& _basicPlusFlag);

                    /**
                     * 判断参数 BasicPlusFlag 是否已赋值
                     * @return BasicPlusFlag 是否已赋值
                     * 
                     */
                    bool BasicPlusFlagHasBeenSet() const;

                    /**
                     * 获取是否标准版2.0 0: 包含标准版2.0 1: 只查询标准版2.0 2: 不查标准版2.0
                     * @return PlanCntFlag 是否标准版2.0 0: 包含标准版2.0 1: 只查询标准版2.0 2: 不查标准版2.0
                     * 
                     */
                    uint64_t GetPlanCntFlag() const;

                    /**
                     * 设置是否标准版2.0 0: 包含标准版2.0 1: 只查询标准版2.0 2: 不查标准版2.0
                     * @param _planCntFlag 是否标准版2.0 0: 包含标准版2.0 1: 只查询标准版2.0 2: 不查标准版2.0
                     * 
                     */
                    void SetPlanCntFlag(const uint64_t& _planCntFlag);

                    /**
                     * 判断参数 PlanCntFlag 是否已赋值
                     * @return PlanCntFlag 是否已赋值
                     * 
                     */
                    bool PlanCntFlagHasBeenSet() const;

                    /**
                     * 获取是否跨区域产品 0: 不包含跨区域产品 1: 中国大陆跨区域产品 2: 非中国大陆跨区域产品
                     * @return TransRegionFlag 是否跨区域产品 0: 不包含跨区域产品 1: 中国大陆跨区域产品 2: 非中国大陆跨区域产品
                     * 
                     */
                    uint64_t GetTransRegionFlag() const;

                    /**
                     * 设置是否跨区域产品 0: 不包含跨区域产品 1: 中国大陆跨区域产品 2: 非中国大陆跨区域产品
                     * @param _transRegionFlag 是否跨区域产品 0: 不包含跨区域产品 1: 中国大陆跨区域产品 2: 非中国大陆跨区域产品
                     * 
                     */
                    void SetTransRegionFlag(const uint64_t& _transRegionFlag);

                    /**
                     * 判断参数 TransRegionFlag 是否已赋值
                     * @return TransRegionFlag 是否已赋值
                     * 
                     */
                    bool TransRegionFlagHasBeenSet() const;

                    /**
                     * 获取是否为超级高防包
                     * @return SuperPackFlag 是否为超级高防包
                     * 
                     */
                    uint64_t GetSuperPackFlag() const;

                    /**
                     * 设置是否为超级高防包
                     * @param _superPackFlag 是否为超级高防包
                     * 
                     */
                    void SetSuperPackFlag(const uint64_t& _superPackFlag);

                    /**
                     * 判断参数 SuperPackFlag 是否已赋值
                     * @return SuperPackFlag 是否已赋值
                     * 
                     */
                    bool SuperPackFlagHasBeenSet() const;

                    /**
                     * 获取所属ZoneId
                     * @return ZoneId 所属ZoneId
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置所属ZoneId
                     * @param _zoneId 所属ZoneId
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                private:

                    /**
                     * 资产实例的详细信息
                     */
                    InstanceRelation m_instanceDetail;
                    bool m_instanceDetailHasBeenSet;

                    /**
                     * 资产实例的规格信息
                     */
                    BGPInstanceSpecification m_specificationLimit;
                    bool m_specificationLimitHasBeenSet;

                    /**
                     * 资产实例的使用统计信息
                     */
                    BGPInstanceUsages m_usage;
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
                     * 购买时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 到期时间
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

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
                     * 高防包绑定的EIP属于的云产品信息
                     */
                    std::vector<EipProductInfo> m_eipProductInfos;
                    bool m_eipProductInfosHasBeenSet;

                    /**
                     * 高防包绑定状态，取值[
"idle"：绑定已完成
 "bounding"：正在绑定中
"failed"：绑定失败
]
                     */
                    std::string m_boundStatus;
                    bool m_boundStatusHasBeenSet;

                    /**
                     * 四层防护严格级别
                     */
                    std::string m_dDoSLevel;
                    bool m_dDoSLevelHasBeenSet;

                    /**
                     * CC防护开关
                     */
                    int64_t m_cCEnable;
                    bool m_cCEnableHasBeenSet;

                    /**
                     * 资源关联标签
                     */
                    std::vector<TagInfo> m_tagInfoList;
                    bool m_tagInfoListHasBeenSet;

                    /**
                     * 新版本1ip高防包
                     */
                    uint64_t m_ipCountNewFlag;
                    bool m_ipCountNewFlagHasBeenSet;

                    /**
                     * 攻击封堵套餐标记
                     */
                    uint64_t m_vitalityVersion;
                    bool m_vitalityVersionHasBeenSet;

                    /**
                     * 网络线路
                     */
                    uint64_t m_line;
                    bool m_lineHasBeenSet;

                    /**
                     * 不计费的业务带宽
                     */
                    uint64_t m_freeServiceBandwidth;
                    bool m_freeServiceBandwidthHasBeenSet;

                    /**
                     * 弹性业务带宽开关
                     */
                    uint64_t m_elasticServiceBandwidth;
                    bool m_elasticServiceBandwidthHasBeenSet;

                    /**
                     * 赠送的业务带宽
                     */
                    int64_t m_giftServiceBandWidth;
                    bool m_giftServiceBandWidthHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 是否是基础防护加强版 0: 不是 1: 是
                     */
                    uint64_t m_basicPlusFlag;
                    bool m_basicPlusFlagHasBeenSet;

                    /**
                     * 是否标准版2.0 0: 包含标准版2.0 1: 只查询标准版2.0 2: 不查标准版2.0
                     */
                    uint64_t m_planCntFlag;
                    bool m_planCntFlagHasBeenSet;

                    /**
                     * 是否跨区域产品 0: 不包含跨区域产品 1: 中国大陆跨区域产品 2: 非中国大陆跨区域产品
                     */
                    uint64_t m_transRegionFlag;
                    bool m_transRegionFlagHasBeenSet;

                    /**
                     * 是否为超级高防包
                     */
                    uint64_t m_superPackFlag;
                    bool m_superPackFlagHasBeenSet;

                    /**
                     * 所属ZoneId
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPINSTANCE_H_
