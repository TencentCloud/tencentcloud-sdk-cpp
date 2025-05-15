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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_PLAN_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_PLAN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ZoneInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 套餐信息
                */
                class Plan : public AbstractModel
                {
                public:
                    Plan();
                    ~Plan() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取套餐类型。取值有：
<li>plan-trial: 试用版套餐；</li>
<li>plan-personal: 个人版套餐；</li>
<li>plan-basic: 基础版套餐；</li>
<li>plan-standard: 标准版套餐；</li>
<li>plan-enterprise-v2: 企业版套餐；</li>
<li>plan-enterprise-model-a: 企业版 Model A 套餐。</li>
<li>plan-enterprise: 旧企业版套餐。</li>
                     * @return PlanType 套餐类型。取值有：
<li>plan-trial: 试用版套餐；</li>
<li>plan-personal: 个人版套餐；</li>
<li>plan-basic: 基础版套餐；</li>
<li>plan-standard: 标准版套餐；</li>
<li>plan-enterprise-v2: 企业版套餐；</li>
<li>plan-enterprise-model-a: 企业版 Model A 套餐。</li>
<li>plan-enterprise: 旧企业版套餐。</li>
                     * 
                     */
                    std::string GetPlanType() const;

                    /**
                     * 设置套餐类型。取值有：
<li>plan-trial: 试用版套餐；</li>
<li>plan-personal: 个人版套餐；</li>
<li>plan-basic: 基础版套餐；</li>
<li>plan-standard: 标准版套餐；</li>
<li>plan-enterprise-v2: 企业版套餐；</li>
<li>plan-enterprise-model-a: 企业版 Model A 套餐。</li>
<li>plan-enterprise: 旧企业版套餐。</li>
                     * @param _planType 套餐类型。取值有：
<li>plan-trial: 试用版套餐；</li>
<li>plan-personal: 个人版套餐；</li>
<li>plan-basic: 基础版套餐；</li>
<li>plan-standard: 标准版套餐；</li>
<li>plan-enterprise-v2: 企业版套餐；</li>
<li>plan-enterprise-model-a: 企业版 Model A 套餐。</li>
<li>plan-enterprise: 旧企业版套餐。</li>
                     * 
                     */
                    void SetPlanType(const std::string& _planType);

                    /**
                     * 判断参数 PlanType 是否已赋值
                     * @return PlanType 是否已赋值
                     * 
                     */
                    bool PlanTypeHasBeenSet() const;

                    /**
                     * 获取套餐 ID。形如 edgeone-2y041pblwaxe。
                     * @return PlanId 套餐 ID。形如 edgeone-2y041pblwaxe。
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置套餐 ID。形如 edgeone-2y041pblwaxe。
                     * @param _planId 套餐 ID。形如 edgeone-2y041pblwaxe。
                     * 
                     */
                    void SetPlanId(const std::string& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                    /**
                     * 获取服务区域，取值有：
<li>mainland: 中国大陆；</li>
<li>overseas: 全球（不包括中国大陆)；</li>
<li>global: 全球（包括中国大陆)。</li>
                     * @return Area 服务区域，取值有：
<li>mainland: 中国大陆；</li>
<li>overseas: 全球（不包括中国大陆)；</li>
<li>global: 全球（包括中国大陆)。</li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置服务区域，取值有：
<li>mainland: 中国大陆；</li>
<li>overseas: 全球（不包括中国大陆)；</li>
<li>global: 全球（包括中国大陆)。</li>
                     * @param _area 服务区域，取值有：
<li>mainland: 中国大陆；</li>
<li>overseas: 全球（不包括中国大陆)；</li>
<li>global: 全球（包括中国大陆)。</li>
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取套餐状态，取值有：
<li>normal：正常状态；</li>
<li>expiring-soon：即将到期状态；</li>
<li>expired：到期状态；</li>
<li>isolated：隔离状态；</li>
<li>overdue-isolated：欠费隔离状态。</li>
                     * @return Status 套餐状态，取值有：
<li>normal：正常状态；</li>
<li>expiring-soon：即将到期状态；</li>
<li>expired：到期状态；</li>
<li>isolated：隔离状态；</li>
<li>overdue-isolated：欠费隔离状态。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置套餐状态，取值有：
<li>normal：正常状态；</li>
<li>expiring-soon：即将到期状态；</li>
<li>expired：到期状态；</li>
<li>isolated：隔离状态；</li>
<li>overdue-isolated：欠费隔离状态。</li>
                     * @param _status 套餐状态，取值有：
<li>normal：正常状态；</li>
<li>expiring-soon：即将到期状态；</li>
<li>expired：到期状态；</li>
<li>isolated：隔离状态；</li>
<li>overdue-isolated：欠费隔离状态。</li>
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
                     * 获取付费类型，取值有：
<li>0: 后付费；</li>
<li>1: 预付费。</li>
                     * @return PayMode 付费类型，取值有：
<li>0: 后付费；</li>
<li>1: 预付费。</li>
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置付费类型，取值有：
<li>0: 后付费；</li>
<li>1: 预付费。</li>
                     * @param _payMode 付费类型，取值有：
<li>0: 后付费；</li>
<li>1: 预付费。</li>
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取套餐绑定的站点信息，包括站点id和站点名称，站点状态。
                     * @return ZonesInfo 套餐绑定的站点信息，包括站点id和站点名称，站点状态。
                     * 
                     */
                    std::vector<ZoneInfo> GetZonesInfo() const;

                    /**
                     * 设置套餐绑定的站点信息，包括站点id和站点名称，站点状态。
                     * @param _zonesInfo 套餐绑定的站点信息，包括站点id和站点名称，站点状态。
                     * 
                     */
                    void SetZonesInfo(const std::vector<ZoneInfo>& _zonesInfo);

                    /**
                     * 判断参数 ZonesInfo 是否已赋值
                     * @return ZonesInfo 是否已赋值
                     * 
                     */
                    bool ZonesInfoHasBeenSet() const;

                    /**
                     * 获取套餐内智能加速请求数规格，单位：次。
                     * @return SmartRequestCapacity 套餐内智能加速请求数规格，单位：次。
                     * 
                     */
                    int64_t GetSmartRequestCapacity() const;

                    /**
                     * 设置套餐内智能加速请求数规格，单位：次。
                     * @param _smartRequestCapacity 套餐内智能加速请求数规格，单位：次。
                     * 
                     */
                    void SetSmartRequestCapacity(const int64_t& _smartRequestCapacity);

                    /**
                     * 判断参数 SmartRequestCapacity 是否已赋值
                     * @return SmartRequestCapacity 是否已赋值
                     * 
                     */
                    bool SmartRequestCapacityHasBeenSet() const;

                    /**
                     * 获取套餐内VAU规格，单位：个。
                     * @return VAUCapacity 套餐内VAU规格，单位：个。
                     * 
                     */
                    int64_t GetVAUCapacity() const;

                    /**
                     * 设置套餐内VAU规格，单位：个。
                     * @param _vAUCapacity 套餐内VAU规格，单位：个。
                     * 
                     */
                    void SetVAUCapacity(const int64_t& _vAUCapacity);

                    /**
                     * 判断参数 VAUCapacity 是否已赋值
                     * @return VAUCapacity 是否已赋值
                     * 
                     */
                    bool VAUCapacityHasBeenSet() const;

                    /**
                     * 获取套餐内内容加速流量规格，单位：字节。
                     * @return AccTrafficCapacity 套餐内内容加速流量规格，单位：字节。
                     * 
                     */
                    int64_t GetAccTrafficCapacity() const;

                    /**
                     * 设置套餐内内容加速流量规格，单位：字节。
                     * @param _accTrafficCapacity 套餐内内容加速流量规格，单位：字节。
                     * 
                     */
                    void SetAccTrafficCapacity(const int64_t& _accTrafficCapacity);

                    /**
                     * 判断参数 AccTrafficCapacity 是否已赋值
                     * @return AccTrafficCapacity 是否已赋值
                     * 
                     */
                    bool AccTrafficCapacityHasBeenSet() const;

                    /**
                     * 获取套餐内智能加速流量规格，单位：字节。
                     * @return SmartTrafficCapacity 套餐内智能加速流量规格，单位：字节。
                     * 
                     */
                    int64_t GetSmartTrafficCapacity() const;

                    /**
                     * 设置套餐内智能加速流量规格，单位：字节。
                     * @param _smartTrafficCapacity 套餐内智能加速流量规格，单位：字节。
                     * 
                     */
                    void SetSmartTrafficCapacity(const int64_t& _smartTrafficCapacity);

                    /**
                     * 判断参数 SmartTrafficCapacity 是否已赋值
                     * @return SmartTrafficCapacity 是否已赋值
                     * 
                     */
                    bool SmartTrafficCapacityHasBeenSet() const;

                    /**
                     * 获取套餐内DDoS防护流量规格，单位：字节。
                     * @return DDoSTrafficCapacity 套餐内DDoS防护流量规格，单位：字节。
                     * 
                     */
                    int64_t GetDDoSTrafficCapacity() const;

                    /**
                     * 设置套餐内DDoS防护流量规格，单位：字节。
                     * @param _dDoSTrafficCapacity 套餐内DDoS防护流量规格，单位：字节。
                     * 
                     */
                    void SetDDoSTrafficCapacity(const int64_t& _dDoSTrafficCapacity);

                    /**
                     * 判断参数 DDoSTrafficCapacity 是否已赋值
                     * @return DDoSTrafficCapacity 是否已赋值
                     * 
                     */
                    bool DDoSTrafficCapacityHasBeenSet() const;

                    /**
                     * 获取套餐内安全流量规格，单位：字节。
                     * @return SecTrafficCapacity 套餐内安全流量规格，单位：字节。
                     * 
                     */
                    int64_t GetSecTrafficCapacity() const;

                    /**
                     * 设置套餐内安全流量规格，单位：字节。
                     * @param _secTrafficCapacity 套餐内安全流量规格，单位：字节。
                     * 
                     */
                    void SetSecTrafficCapacity(const int64_t& _secTrafficCapacity);

                    /**
                     * 判断参数 SecTrafficCapacity 是否已赋值
                     * @return SecTrafficCapacity 是否已赋值
                     * 
                     */
                    bool SecTrafficCapacityHasBeenSet() const;

                    /**
                     * 获取套餐内安全请求数规格，单位：次。
                     * @return SecRequestCapacity 套餐内安全请求数规格，单位：次。
                     * 
                     */
                    int64_t GetSecRequestCapacity() const;

                    /**
                     * 设置套餐内安全请求数规格，单位：次。
                     * @param _secRequestCapacity 套餐内安全请求数规格，单位：次。
                     * 
                     */
                    void SetSecRequestCapacity(const int64_t& _secRequestCapacity);

                    /**
                     * 判断参数 SecRequestCapacity 是否已赋值
                     * @return SecRequestCapacity 是否已赋值
                     * 
                     */
                    bool SecRequestCapacityHasBeenSet() const;

                    /**
                     * 获取套餐内四层加速流量规格，单位：字节。
                     * @return L4TrafficCapacity 套餐内四层加速流量规格，单位：字节。
                     * 
                     */
                    int64_t GetL4TrafficCapacity() const;

                    /**
                     * 设置套餐内四层加速流量规格，单位：字节。
                     * @param _l4TrafficCapacity 套餐内四层加速流量规格，单位：字节。
                     * 
                     */
                    void SetL4TrafficCapacity(const int64_t& _l4TrafficCapacity);

                    /**
                     * 判断参数 L4TrafficCapacity 是否已赋值
                     * @return L4TrafficCapacity 是否已赋值
                     * 
                     */
                    bool L4TrafficCapacityHasBeenSet() const;

                    /**
                     * 获取套餐内中国大陆网络优化流量规格，单位：字节。
                     * @return CrossMLCTrafficCapacity 套餐内中国大陆网络优化流量规格，单位：字节。
                     * 
                     */
                    int64_t GetCrossMLCTrafficCapacity() const;

                    /**
                     * 设置套餐内中国大陆网络优化流量规格，单位：字节。
                     * @param _crossMLCTrafficCapacity 套餐内中国大陆网络优化流量规格，单位：字节。
                     * 
                     */
                    void SetCrossMLCTrafficCapacity(const int64_t& _crossMLCTrafficCapacity);

                    /**
                     * 判断参数 CrossMLCTrafficCapacity 是否已赋值
                     * @return CrossMLCTrafficCapacity 是否已赋值
                     * 
                     */
                    bool CrossMLCTrafficCapacityHasBeenSet() const;

                    /**
                     * 获取套餐是否允许绑定新站点，取值有：
<li>true: 允许绑定新站点；</li>
<li>false: 不允许绑定新站点。</li>
                     * @return Bindable 套餐是否允许绑定新站点，取值有：
<li>true: 允许绑定新站点；</li>
<li>false: 不允许绑定新站点。</li>
                     * 
                     */
                    std::string GetBindable() const;

                    /**
                     * 设置套餐是否允许绑定新站点，取值有：
<li>true: 允许绑定新站点；</li>
<li>false: 不允许绑定新站点。</li>
                     * @param _bindable 套餐是否允许绑定新站点，取值有：
<li>true: 允许绑定新站点；</li>
<li>false: 不允许绑定新站点。</li>
                     * 
                     */
                    void SetBindable(const std::string& _bindable);

                    /**
                     * 判断参数 Bindable 是否已赋值
                     * @return Bindable 是否已赋值
                     * 
                     */
                    bool BindableHasBeenSet() const;

                    /**
                     * 获取套餐生效时间。
                     * @return EnabledTime 套餐生效时间。
                     * 
                     */
                    std::string GetEnabledTime() const;

                    /**
                     * 设置套餐生效时间。
                     * @param _enabledTime 套餐生效时间。
                     * 
                     */
                    void SetEnabledTime(const std::string& _enabledTime);

                    /**
                     * 判断参数 EnabledTime 是否已赋值
                     * @return EnabledTime 是否已赋值
                     * 
                     */
                    bool EnabledTimeHasBeenSet() const;

                    /**
                     * 获取套餐过期时间。
                     * @return ExpiredTime 套餐过期时间。
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置套餐过期时间。
                     * @param _expiredTime 套餐过期时间。
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
                     * 获取套餐所支持的功能，取值有：<li>ContentAcceleration：内容加速功能；</li><li>SmartAcceleration：智能加速功能；</li><li>L4：四层加速功能；</li><li>Waf：高级 Web 防护；</li><li>QUIC：QUIC功能；</li><li>CrossMLC：中国大陆网络优化功能；</li><li>ProcessMedia：媒体处理功能；</li><li>L4DDoS：四层DDoS防护功能；</li>L7DDoS功能只会出现以下所有规格中的一项<li>L7DDoS.CM30G；七层DDoS防护功能-中国大陆30G保底带宽规格；</li><li>L7DDoS.CM60G；七层DDoS防护功能-中国大陆60G保底带宽规格；</li><li>L7DDoS.CM100G；七层DDoS防护功能-中国大陆100G保底带宽规格；</li><li>L7DDoS.Anycast300G；七层DDoS防护功能-中国大陆以外Anycast300G保底带宽规格；</li><li>L7DDoS.AnycastUnlimited；七层DDoS防护功能-中国大陆以外Anycast无上限全力防护规格；</li><li>L7DDoS.CM30G_Anycast300G；七层DDoS防护功能-中国大陆30G保底带宽规格，中国大陆以外Anycast300G保底带宽规格；</li><li>L7DDoS.CM60G_Anycast300G；七层DDoS防护功能-中国大陆60G保底带宽规格，中国大陆以外Anycast300G保底带宽规格；</li><li>L7DDoS.CM100G_Anycast300G；七层DDoS防护功能-中国大陆100G保底带宽规格，中国大陆以外Anycast300G保底带宽规格；</li><li>L7DDoS.CM30G_AnycastUnlimited；七层DDoS防护功能-中国大陆30G保底带宽规格，中国大陆以外Anycast无上限全力防护规格；</li><li>L7DDoS.CM60G_AnycastUnlimited；七层DDoS防护功能-中国大陆60G保底带宽规格，中国大陆以外Anycast无上限全力防护规格；</li><li>L7DDoS.CM100G_AnycastUnlimited；七层DDoS防护功能-中国大陆100G保底带宽规格，中国大陆以外Anycast无上限全力防护规格；</li>
                     * @return Features 套餐所支持的功能，取值有：<li>ContentAcceleration：内容加速功能；</li><li>SmartAcceleration：智能加速功能；</li><li>L4：四层加速功能；</li><li>Waf：高级 Web 防护；</li><li>QUIC：QUIC功能；</li><li>CrossMLC：中国大陆网络优化功能；</li><li>ProcessMedia：媒体处理功能；</li><li>L4DDoS：四层DDoS防护功能；</li>L7DDoS功能只会出现以下所有规格中的一项<li>L7DDoS.CM30G；七层DDoS防护功能-中国大陆30G保底带宽规格；</li><li>L7DDoS.CM60G；七层DDoS防护功能-中国大陆60G保底带宽规格；</li><li>L7DDoS.CM100G；七层DDoS防护功能-中国大陆100G保底带宽规格；</li><li>L7DDoS.Anycast300G；七层DDoS防护功能-中国大陆以外Anycast300G保底带宽规格；</li><li>L7DDoS.AnycastUnlimited；七层DDoS防护功能-中国大陆以外Anycast无上限全力防护规格；</li><li>L7DDoS.CM30G_Anycast300G；七层DDoS防护功能-中国大陆30G保底带宽规格，中国大陆以外Anycast300G保底带宽规格；</li><li>L7DDoS.CM60G_Anycast300G；七层DDoS防护功能-中国大陆60G保底带宽规格，中国大陆以外Anycast300G保底带宽规格；</li><li>L7DDoS.CM100G_Anycast300G；七层DDoS防护功能-中国大陆100G保底带宽规格，中国大陆以外Anycast300G保底带宽规格；</li><li>L7DDoS.CM30G_AnycastUnlimited；七层DDoS防护功能-中国大陆30G保底带宽规格，中国大陆以外Anycast无上限全力防护规格；</li><li>L7DDoS.CM60G_AnycastUnlimited；七层DDoS防护功能-中国大陆60G保底带宽规格，中国大陆以外Anycast无上限全力防护规格；</li><li>L7DDoS.CM100G_AnycastUnlimited；七层DDoS防护功能-中国大陆100G保底带宽规格，中国大陆以外Anycast无上限全力防护规格；</li>
                     * 
                     */
                    std::vector<std::string> GetFeatures() const;

                    /**
                     * 设置套餐所支持的功能，取值有：<li>ContentAcceleration：内容加速功能；</li><li>SmartAcceleration：智能加速功能；</li><li>L4：四层加速功能；</li><li>Waf：高级 Web 防护；</li><li>QUIC：QUIC功能；</li><li>CrossMLC：中国大陆网络优化功能；</li><li>ProcessMedia：媒体处理功能；</li><li>L4DDoS：四层DDoS防护功能；</li>L7DDoS功能只会出现以下所有规格中的一项<li>L7DDoS.CM30G；七层DDoS防护功能-中国大陆30G保底带宽规格；</li><li>L7DDoS.CM60G；七层DDoS防护功能-中国大陆60G保底带宽规格；</li><li>L7DDoS.CM100G；七层DDoS防护功能-中国大陆100G保底带宽规格；</li><li>L7DDoS.Anycast300G；七层DDoS防护功能-中国大陆以外Anycast300G保底带宽规格；</li><li>L7DDoS.AnycastUnlimited；七层DDoS防护功能-中国大陆以外Anycast无上限全力防护规格；</li><li>L7DDoS.CM30G_Anycast300G；七层DDoS防护功能-中国大陆30G保底带宽规格，中国大陆以外Anycast300G保底带宽规格；</li><li>L7DDoS.CM60G_Anycast300G；七层DDoS防护功能-中国大陆60G保底带宽规格，中国大陆以外Anycast300G保底带宽规格；</li><li>L7DDoS.CM100G_Anycast300G；七层DDoS防护功能-中国大陆100G保底带宽规格，中国大陆以外Anycast300G保底带宽规格；</li><li>L7DDoS.CM30G_AnycastUnlimited；七层DDoS防护功能-中国大陆30G保底带宽规格，中国大陆以外Anycast无上限全力防护规格；</li><li>L7DDoS.CM60G_AnycastUnlimited；七层DDoS防护功能-中国大陆60G保底带宽规格，中国大陆以外Anycast无上限全力防护规格；</li><li>L7DDoS.CM100G_AnycastUnlimited；七层DDoS防护功能-中国大陆100G保底带宽规格，中国大陆以外Anycast无上限全力防护规格；</li>
                     * @param _features 套餐所支持的功能，取值有：<li>ContentAcceleration：内容加速功能；</li><li>SmartAcceleration：智能加速功能；</li><li>L4：四层加速功能；</li><li>Waf：高级 Web 防护；</li><li>QUIC：QUIC功能；</li><li>CrossMLC：中国大陆网络优化功能；</li><li>ProcessMedia：媒体处理功能；</li><li>L4DDoS：四层DDoS防护功能；</li>L7DDoS功能只会出现以下所有规格中的一项<li>L7DDoS.CM30G；七层DDoS防护功能-中国大陆30G保底带宽规格；</li><li>L7DDoS.CM60G；七层DDoS防护功能-中国大陆60G保底带宽规格；</li><li>L7DDoS.CM100G；七层DDoS防护功能-中国大陆100G保底带宽规格；</li><li>L7DDoS.Anycast300G；七层DDoS防护功能-中国大陆以外Anycast300G保底带宽规格；</li><li>L7DDoS.AnycastUnlimited；七层DDoS防护功能-中国大陆以外Anycast无上限全力防护规格；</li><li>L7DDoS.CM30G_Anycast300G；七层DDoS防护功能-中国大陆30G保底带宽规格，中国大陆以外Anycast300G保底带宽规格；</li><li>L7DDoS.CM60G_Anycast300G；七层DDoS防护功能-中国大陆60G保底带宽规格，中国大陆以外Anycast300G保底带宽规格；</li><li>L7DDoS.CM100G_Anycast300G；七层DDoS防护功能-中国大陆100G保底带宽规格，中国大陆以外Anycast300G保底带宽规格；</li><li>L7DDoS.CM30G_AnycastUnlimited；七层DDoS防护功能-中国大陆30G保底带宽规格，中国大陆以外Anycast无上限全力防护规格；</li><li>L7DDoS.CM60G_AnycastUnlimited；七层DDoS防护功能-中国大陆60G保底带宽规格，中国大陆以外Anycast无上限全力防护规格；</li><li>L7DDoS.CM100G_AnycastUnlimited；七层DDoS防护功能-中国大陆100G保底带宽规格，中国大陆以外Anycast无上限全力防护规格；</li>
                     * 
                     */
                    void SetFeatures(const std::vector<std::string>& _features);

                    /**
                     * 判断参数 Features 是否已赋值
                     * @return Features 是否已赋值
                     * 
                     */
                    bool FeaturesHasBeenSet() const;

                private:

                    /**
                     * 套餐类型。取值有：
<li>plan-trial: 试用版套餐；</li>
<li>plan-personal: 个人版套餐；</li>
<li>plan-basic: 基础版套餐；</li>
<li>plan-standard: 标准版套餐；</li>
<li>plan-enterprise-v2: 企业版套餐；</li>
<li>plan-enterprise-model-a: 企业版 Model A 套餐。</li>
<li>plan-enterprise: 旧企业版套餐。</li>
                     */
                    std::string m_planType;
                    bool m_planTypeHasBeenSet;

                    /**
                     * 套餐 ID。形如 edgeone-2y041pblwaxe。
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * 服务区域，取值有：
<li>mainland: 中国大陆；</li>
<li>overseas: 全球（不包括中国大陆)；</li>
<li>global: 全球（包括中国大陆)。</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 套餐状态，取值有：
<li>normal：正常状态；</li>
<li>expiring-soon：即将到期状态；</li>
<li>expired：到期状态；</li>
<li>isolated：隔离状态；</li>
<li>overdue-isolated：欠费隔离状态。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 付费类型，取值有：
<li>0: 后付费；</li>
<li>1: 预付费。</li>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 套餐绑定的站点信息，包括站点id和站点名称，站点状态。
                     */
                    std::vector<ZoneInfo> m_zonesInfo;
                    bool m_zonesInfoHasBeenSet;

                    /**
                     * 套餐内智能加速请求数规格，单位：次。
                     */
                    int64_t m_smartRequestCapacity;
                    bool m_smartRequestCapacityHasBeenSet;

                    /**
                     * 套餐内VAU规格，单位：个。
                     */
                    int64_t m_vAUCapacity;
                    bool m_vAUCapacityHasBeenSet;

                    /**
                     * 套餐内内容加速流量规格，单位：字节。
                     */
                    int64_t m_accTrafficCapacity;
                    bool m_accTrafficCapacityHasBeenSet;

                    /**
                     * 套餐内智能加速流量规格，单位：字节。
                     */
                    int64_t m_smartTrafficCapacity;
                    bool m_smartTrafficCapacityHasBeenSet;

                    /**
                     * 套餐内DDoS防护流量规格，单位：字节。
                     */
                    int64_t m_dDoSTrafficCapacity;
                    bool m_dDoSTrafficCapacityHasBeenSet;

                    /**
                     * 套餐内安全流量规格，单位：字节。
                     */
                    int64_t m_secTrafficCapacity;
                    bool m_secTrafficCapacityHasBeenSet;

                    /**
                     * 套餐内安全请求数规格，单位：次。
                     */
                    int64_t m_secRequestCapacity;
                    bool m_secRequestCapacityHasBeenSet;

                    /**
                     * 套餐内四层加速流量规格，单位：字节。
                     */
                    int64_t m_l4TrafficCapacity;
                    bool m_l4TrafficCapacityHasBeenSet;

                    /**
                     * 套餐内中国大陆网络优化流量规格，单位：字节。
                     */
                    int64_t m_crossMLCTrafficCapacity;
                    bool m_crossMLCTrafficCapacityHasBeenSet;

                    /**
                     * 套餐是否允许绑定新站点，取值有：
<li>true: 允许绑定新站点；</li>
<li>false: 不允许绑定新站点。</li>
                     */
                    std::string m_bindable;
                    bool m_bindableHasBeenSet;

                    /**
                     * 套餐生效时间。
                     */
                    std::string m_enabledTime;
                    bool m_enabledTimeHasBeenSet;

                    /**
                     * 套餐过期时间。
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * 套餐所支持的功能，取值有：<li>ContentAcceleration：内容加速功能；</li><li>SmartAcceleration：智能加速功能；</li><li>L4：四层加速功能；</li><li>Waf：高级 Web 防护；</li><li>QUIC：QUIC功能；</li><li>CrossMLC：中国大陆网络优化功能；</li><li>ProcessMedia：媒体处理功能；</li><li>L4DDoS：四层DDoS防护功能；</li>L7DDoS功能只会出现以下所有规格中的一项<li>L7DDoS.CM30G；七层DDoS防护功能-中国大陆30G保底带宽规格；</li><li>L7DDoS.CM60G；七层DDoS防护功能-中国大陆60G保底带宽规格；</li><li>L7DDoS.CM100G；七层DDoS防护功能-中国大陆100G保底带宽规格；</li><li>L7DDoS.Anycast300G；七层DDoS防护功能-中国大陆以外Anycast300G保底带宽规格；</li><li>L7DDoS.AnycastUnlimited；七层DDoS防护功能-中国大陆以外Anycast无上限全力防护规格；</li><li>L7DDoS.CM30G_Anycast300G；七层DDoS防护功能-中国大陆30G保底带宽规格，中国大陆以外Anycast300G保底带宽规格；</li><li>L7DDoS.CM60G_Anycast300G；七层DDoS防护功能-中国大陆60G保底带宽规格，中国大陆以外Anycast300G保底带宽规格；</li><li>L7DDoS.CM100G_Anycast300G；七层DDoS防护功能-中国大陆100G保底带宽规格，中国大陆以外Anycast300G保底带宽规格；</li><li>L7DDoS.CM30G_AnycastUnlimited；七层DDoS防护功能-中国大陆30G保底带宽规格，中国大陆以外Anycast无上限全力防护规格；</li><li>L7DDoS.CM60G_AnycastUnlimited；七层DDoS防护功能-中国大陆60G保底带宽规格，中国大陆以外Anycast无上限全力防护规格；</li><li>L7DDoS.CM100G_AnycastUnlimited；七层DDoS防护功能-中国大陆100G保底带宽规格，中国大陆以外Anycast无上限全力防护规格；</li>
                     */
                    std::vector<std::string> m_features;
                    bool m_featuresHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_PLAN_H_
