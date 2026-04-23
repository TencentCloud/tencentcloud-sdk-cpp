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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SSAICONF_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SSAICONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ConfigAliasesInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * SSAI广告插入配置。
                */
                class SSAIConf : public AbstractModel
                {
                public:
                    SSAIConf();
                    ~SSAIConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>广告决策服务器URL(ADS)。注意：填了AdsUrl会自动代替覆盖AdsUrls[0]</p>
                     * @return AdsUrl <p>广告决策服务器URL(ADS)。注意：填了AdsUrl会自动代替覆盖AdsUrls[0]</p>
                     * 
                     */
                    std::string GetAdsUrl() const;

                    /**
                     * 设置<p>广告决策服务器URL(ADS)。注意：填了AdsUrl会自动代替覆盖AdsUrls[0]</p>
                     * @param _adsUrl <p>广告决策服务器URL(ADS)。注意：填了AdsUrl会自动代替覆盖AdsUrls[0]</p>
                     * 
                     */
                    void SetAdsUrl(const std::string& _adsUrl);

                    /**
                     * 判断参数 AdsUrl 是否已赋值
                     * @return AdsUrl 是否已赋值
                     * 
                     */
                    bool AdsUrlHasBeenSet() const;

                    /**
                     * 获取<p>广告决策服务器URL数组(ADS)</p>
                     * @return AdsUrls <p>广告决策服务器URL数组(ADS)</p>
                     * 
                     */
                    std::vector<std::string> GetAdsUrls() const;

                    /**
                     * 设置<p>广告决策服务器URL数组(ADS)</p>
                     * @param _adsUrls <p>广告决策服务器URL数组(ADS)</p>
                     * 
                     */
                    void SetAdsUrls(const std::vector<std::string>& _adsUrls);

                    /**
                     * 判断参数 AdsUrls 是否已赋值
                     * @return AdsUrls 是否已赋值
                     * 
                     */
                    bool AdsUrlsHasBeenSet() const;

                    /**
                     * 获取<p>参数配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigAliases <p>参数配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ConfigAliasesInfo> GetConfigAliases() const;

                    /**
                     * 设置<p>参数配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configAliases <p>参数配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigAliases(const std::vector<ConfigAliasesInfo>& _configAliases);

                    /**
                     * 判断参数 ConfigAliases 是否已赋值
                     * @return ConfigAliases 是否已赋值
                     * 
                     */
                    bool ConfigAliasesHasBeenSet() const;

                    /**
                     * 获取<p>是否开启广告标记透传。</p>
                     * @return AdMarkerPassthrough <p>是否开启广告标记透传。</p>
                     * 
                     */
                    bool GetAdMarkerPassthrough() const;

                    /**
                     * 设置<p>是否开启广告标记透传。</p>
                     * @param _adMarkerPassthrough <p>是否开启广告标记透传。</p>
                     * 
                     */
                    void SetAdMarkerPassthrough(const bool& _adMarkerPassthrough);

                    /**
                     * 判断参数 AdMarkerPassthrough 是否已赋值
                     * @return AdMarkerPassthrough 是否已赋值
                     * 
                     */
                    bool AdMarkerPassthroughHasBeenSet() const;

                    /**
                     * 获取<p>如何处理广告中的标记,可选值[1-2]：<br>1:所有SCTE-35类型标记全部处理-all（默认）<br>2:SCTE-35enhanced，解析部分类型。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SCTE35AdType <p>如何处理广告中的标记,可选值[1-2]：<br>1:所有SCTE-35类型标记全部处理-all（默认）<br>2:SCTE-35enhanced，解析部分类型。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSCTE35AdType() const;

                    /**
                     * 设置<p>如何处理广告中的标记,可选值[1-2]：<br>1:所有SCTE-35类型标记全部处理-all（默认）<br>2:SCTE-35enhanced，解析部分类型。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sCTE35AdType <p>如何处理广告中的标记,可选值[1-2]：<br>1:所有SCTE-35类型标记全部处理-all（默认）<br>2:SCTE-35enhanced，解析部分类型。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSCTE35AdType(const uint64_t& _sCTE35AdType);

                    /**
                     * 判断参数 SCTE35AdType 是否已赋值
                     * @return SCTE35AdType 是否已赋值
                     * 
                     */
                    bool SCTE35AdTypeHasBeenSet() const;

                    /**
                     * 获取<p>默认广告url。</p>
                     * @return SlateAd <p>默认广告url。</p>
                     * 
                     */
                    std::string GetSlateAd() const;

                    /**
                     * 设置<p>默认广告url。</p>
                     * @param _slateAd <p>默认广告url。</p>
                     * 
                     */
                    void SetSlateAd(const std::string& _slateAd);

                    /**
                     * 判断参数 SlateAd 是否已赋值
                     * @return SlateAd 是否已赋值
                     * 
                     */
                    bool SlateAdHasBeenSet() const;

                    /**
                     * 获取<p>未填充的最大时长，单位：秒。</p>
                     * @return Threshold <p>未填充的最大时长，单位：秒。</p>
                     * 
                     */
                    uint64_t GetThreshold() const;

                    /**
                     * 设置<p>未填充的最大时长，单位：秒。</p>
                     * @param _threshold <p>未填充的最大时长，单位：秒。</p>
                     * 
                     */
                    void SetThreshold(const uint64_t& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     * 
                     */
                    bool ThresholdHasBeenSet() const;

                    /**
                     * 获取<p>是否开启mpd location, true对应enable， false对应disable。</p>
                     * @return DashMPDLocation <p>是否开启mpd location, true对应enable， false对应disable。</p>
                     * 
                     */
                    bool GetDashMPDLocation() const;

                    /**
                     * 设置<p>是否开启mpd location, true对应enable， false对应disable。</p>
                     * @param _dashMPDLocation <p>是否开启mpd location, true对应enable， false对应disable。</p>
                     * 
                     */
                    void SetDashMPDLocation(const bool& _dashMPDLocation);

                    /**
                     * 判断参数 DashMPDLocation 是否已赋值
                     * @return DashMPDLocation 是否已赋值
                     * 
                     */
                    bool DashMPDLocationHasBeenSet() const;

                    /**
                     * 获取<p>被视作广告的标记类型，可选值[1-8]：</p><ol><li>Splice insert<br>2.Provider advertisement</li><li>Distributor advertisement</li><li>Provider placement opportunity</li><li>Distributor placement opportunity</li><li>Break</li><li>Provider overlay placement opportunity</li><li>Distributor overlay placement opportunity。</li></ol>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdTriggers <p>被视作广告的标记类型，可选值[1-8]：</p><ol><li>Splice insert<br>2.Provider advertisement</li><li>Distributor advertisement</li><li>Provider placement opportunity</li><li>Distributor placement opportunity</li><li>Break</li><li>Provider overlay placement opportunity</li><li>Distributor overlay placement opportunity。</li></ol>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<uint64_t> GetAdTriggers() const;

                    /**
                     * 设置<p>被视作广告的标记类型，可选值[1-8]：</p><ol><li>Splice insert<br>2.Provider advertisement</li><li>Distributor advertisement</li><li>Provider placement opportunity</li><li>Distributor placement opportunity</li><li>Break</li><li>Provider overlay placement opportunity</li><li>Distributor overlay placement opportunity。</li></ol>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _adTriggers <p>被视作广告的标记类型，可选值[1-8]：</p><ol><li>Splice insert<br>2.Provider advertisement</li><li>Distributor advertisement</li><li>Provider placement opportunity</li><li>Distributor placement opportunity</li><li>Break</li><li>Provider overlay placement opportunity</li><li>Distributor overlay placement opportunity。</li></ol>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdTriggers(const std::vector<uint64_t>& _adTriggers);

                    /**
                     * 判断参数 AdTriggers 是否已赋值
                     * @return AdTriggers 是否已赋值
                     * 
                     */
                    bool AdTriggersHasBeenSet() const;

                    /**
                     * 获取<p>被视作广告的分发限制类型，可选值[1-4]：<br>1:None<br>2:Restricted（默认） 3:Unrestricted<br>4.Both</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeliveryRestrictions <p>被视作广告的分发限制类型，可选值[1-4]：<br>1:None<br>2:Restricted（默认） 3:Unrestricted<br>4.Both</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDeliveryRestrictions() const;

                    /**
                     * 设置<p>被视作广告的分发限制类型，可选值[1-4]：<br>1:None<br>2:Restricted（默认） 3:Unrestricted<br>4.Both</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deliveryRestrictions <p>被视作广告的分发限制类型，可选值[1-4]：<br>1:None<br>2:Restricted（默认） 3:Unrestricted<br>4.Both</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeliveryRestrictions(const uint64_t& _deliveryRestrictions);

                    /**
                     * 判断参数 DeliveryRestrictions 是否已赋值
                     * @return DeliveryRestrictions 是否已赋值
                     * 
                     */
                    bool DeliveryRestrictionsHasBeenSet() const;

                    /**
                     * 获取<p>源流CDN前缀，需要以http://或者https://开头。</p>
                     * @return SourceCDNPrefix <p>源流CDN前缀，需要以http://或者https://开头。</p>
                     * 
                     */
                    std::string GetSourceCDNPrefix() const;

                    /**
                     * 设置<p>源流CDN前缀，需要以http://或者https://开头。</p>
                     * @param _sourceCDNPrefix <p>源流CDN前缀，需要以http://或者https://开头。</p>
                     * 
                     */
                    void SetSourceCDNPrefix(const std::string& _sourceCDNPrefix);

                    /**
                     * 判断参数 SourceCDNPrefix 是否已赋值
                     * @return SourceCDNPrefix 是否已赋值
                     * 
                     */
                    bool SourceCDNPrefixHasBeenSet() const;

                    /**
                     * 获取<p>广告CDN前缀，需要以http://或者https://开头。</p>
                     * @return AdCDNPrefix <p>广告CDN前缀，需要以http://或者https://开头。</p>
                     * 
                     */
                    std::string GetAdCDNPrefix() const;

                    /**
                     * 设置<p>广告CDN前缀，需要以http://或者https://开头。</p>
                     * @param _adCDNPrefix <p>广告CDN前缀，需要以http://或者https://开头。</p>
                     * 
                     */
                    void SetAdCDNPrefix(const std::string& _adCDNPrefix);

                    /**
                     * 判断参数 AdCDNPrefix 是否已赋值
                     * @return AdCDNPrefix 是否已赋值
                     * 
                     */
                    bool AdCDNPrefixHasBeenSet() const;

                    /**
                     * 获取<p>预加载广告决策服务地址。注意：填了PreRollAdsUrl会自动代替覆盖PreRollAdsUrls[0]</p>
                     * @return PreRollAdsUrl <p>预加载广告决策服务地址。注意：填了PreRollAdsUrl会自动代替覆盖PreRollAdsUrls[0]</p>
                     * 
                     */
                    std::string GetPreRollAdsUrl() const;

                    /**
                     * 设置<p>预加载广告决策服务地址。注意：填了PreRollAdsUrl会自动代替覆盖PreRollAdsUrls[0]</p>
                     * @param _preRollAdsUrl <p>预加载广告决策服务地址。注意：填了PreRollAdsUrl会自动代替覆盖PreRollAdsUrls[0]</p>
                     * 
                     */
                    void SetPreRollAdsUrl(const std::string& _preRollAdsUrl);

                    /**
                     * 判断参数 PreRollAdsUrl 是否已赋值
                     * @return PreRollAdsUrl 是否已赋值
                     * 
                     */
                    bool PreRollAdsUrlHasBeenSet() const;

                    /**
                     * 获取<p>预加载广告决策服务地址数组</p>
                     * @return PreRollAdsUrls <p>预加载广告决策服务地址数组</p>
                     * 
                     */
                    std::vector<std::string> GetPreRollAdsUrls() const;

                    /**
                     * 设置<p>预加载广告决策服务地址数组</p>
                     * @param _preRollAdsUrls <p>预加载广告决策服务地址数组</p>
                     * 
                     */
                    void SetPreRollAdsUrls(const std::vector<std::string>& _preRollAdsUrls);

                    /**
                     * 判断参数 PreRollAdsUrls 是否已赋值
                     * @return PreRollAdsUrls 是否已赋值
                     * 
                     */
                    bool PreRollAdsUrlsHasBeenSet() const;

                    /**
                     * 获取<p>预加载广告最大允许时长，0-3600。</p>
                     * @return PreRollMaxAllowedDuration <p>预加载广告最大允许时长，0-3600。</p>
                     * 
                     */
                    int64_t GetPreRollMaxAllowedDuration() const;

                    /**
                     * 设置<p>预加载广告最大允许时长，0-3600。</p>
                     * @param _preRollMaxAllowedDuration <p>预加载广告最大允许时长，0-3600。</p>
                     * 
                     */
                    void SetPreRollMaxAllowedDuration(const int64_t& _preRollMaxAllowedDuration);

                    /**
                     * 判断参数 PreRollMaxAllowedDuration 是否已赋值
                     * @return PreRollMaxAllowedDuration 是否已赋值
                     * 
                     */
                    bool PreRollMaxAllowedDurationHasBeenSet() const;

                    /**
                     * 获取<p>是否开启多次请求ADS,开启后将优先请求ADS，请求失败后再请求兜底广告</p>
                     * @return MultiRequest <p>是否开启多次请求ADS,开启后将优先请求ADS，请求失败后再请求兜底广告</p>
                     * 
                     */
                    bool GetMultiRequest() const;

                    /**
                     * 设置<p>是否开启多次请求ADS,开启后将优先请求ADS，请求失败后再请求兜底广告</p>
                     * @param _multiRequest <p>是否开启多次请求ADS,开启后将优先请求ADS，请求失败后再请求兜底广告</p>
                     * 
                     */
                    void SetMultiRequest(const bool& _multiRequest);

                    /**
                     * 判断参数 MultiRequest 是否已赋值
                     * @return MultiRequest 是否已赋值
                     * 
                     */
                    bool MultiRequestHasBeenSet() const;

                    /**
                     * 获取<p>dash周期类型：SinglePeriod 或 MultiPeriod，默认 MultiPeriod</p>
                     * @return DashOriginManifestType <p>dash周期类型：SinglePeriod 或 MultiPeriod，默认 MultiPeriod</p>
                     * 
                     */
                    std::string GetDashOriginManifestType() const;

                    /**
                     * 设置<p>dash周期类型：SinglePeriod 或 MultiPeriod，默认 MultiPeriod</p>
                     * @param _dashOriginManifestType <p>dash周期类型：SinglePeriod 或 MultiPeriod，默认 MultiPeriod</p>
                     * 
                     */
                    void SetDashOriginManifestType(const std::string& _dashOriginManifestType);

                    /**
                     * 判断参数 DashOriginManifestType 是否已赋值
                     * @return DashOriginManifestType 是否已赋值
                     * 
                     */
                    bool DashOriginManifestTypeHasBeenSet() const;

                    /**
                     * 获取<p>Empty VAST时是否播放Slate，默认开启(true)</p>
                     * @return SlateOnEmptyVast <p>Empty VAST时是否播放Slate，默认开启(true)</p>
                     * 
                     */
                    bool GetSlateOnEmptyVast() const;

                    /**
                     * 设置<p>Empty VAST时是否播放Slate，默认开启(true)</p>
                     * @param _slateOnEmptyVast <p>Empty VAST时是否播放Slate，默认开启(true)</p>
                     * 
                     */
                    void SetSlateOnEmptyVast(const bool& _slateOnEmptyVast);

                    /**
                     * 判断参数 SlateOnEmptyVast 是否已赋值
                     * @return SlateOnEmptyVast 是否已赋值
                     * 
                     */
                    bool SlateOnEmptyVastHasBeenSet() const;

                    /**
                     * 获取<p>SCTE marker duration，默认180，范围0-3600</p>
                     * @return SCTEMarkerDuration <p>SCTE marker duration，默认180，范围0-3600</p>
                     * 
                     */
                    int64_t GetSCTEMarkerDuration() const;

                    /**
                     * 设置<p>SCTE marker duration，默认180，范围0-3600</p>
                     * @param _sCTEMarkerDuration <p>SCTE marker duration，默认180，范围0-3600</p>
                     * 
                     */
                    void SetSCTEMarkerDuration(const int64_t& _sCTEMarkerDuration);

                    /**
                     * 判断参数 SCTEMarkerDuration 是否已赋值
                     * @return SCTEMarkerDuration 是否已赋值
                     * 
                     */
                    bool SCTEMarkerDurationHasBeenSet() const;

                    /**
                     * 获取<p>安全组Id</p>
                     * @return SecurityGroupId <p>安全组Id</p>
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置<p>安全组Id</p>
                     * @param _securityGroupId <p>安全组Id</p>
                     * 
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                private:

                    /**
                     * <p>广告决策服务器URL(ADS)。注意：填了AdsUrl会自动代替覆盖AdsUrls[0]</p>
                     */
                    std::string m_adsUrl;
                    bool m_adsUrlHasBeenSet;

                    /**
                     * <p>广告决策服务器URL数组(ADS)</p>
                     */
                    std::vector<std::string> m_adsUrls;
                    bool m_adsUrlsHasBeenSet;

                    /**
                     * <p>参数配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ConfigAliasesInfo> m_configAliases;
                    bool m_configAliasesHasBeenSet;

                    /**
                     * <p>是否开启广告标记透传。</p>
                     */
                    bool m_adMarkerPassthrough;
                    bool m_adMarkerPassthroughHasBeenSet;

                    /**
                     * <p>如何处理广告中的标记,可选值[1-2]：<br>1:所有SCTE-35类型标记全部处理-all（默认）<br>2:SCTE-35enhanced，解析部分类型。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_sCTE35AdType;
                    bool m_sCTE35AdTypeHasBeenSet;

                    /**
                     * <p>默认广告url。</p>
                     */
                    std::string m_slateAd;
                    bool m_slateAdHasBeenSet;

                    /**
                     * <p>未填充的最大时长，单位：秒。</p>
                     */
                    uint64_t m_threshold;
                    bool m_thresholdHasBeenSet;

                    /**
                     * <p>是否开启mpd location, true对应enable， false对应disable。</p>
                     */
                    bool m_dashMPDLocation;
                    bool m_dashMPDLocationHasBeenSet;

                    /**
                     * <p>被视作广告的标记类型，可选值[1-8]：</p><ol><li>Splice insert<br>2.Provider advertisement</li><li>Distributor advertisement</li><li>Provider placement opportunity</li><li>Distributor placement opportunity</li><li>Break</li><li>Provider overlay placement opportunity</li><li>Distributor overlay placement opportunity。</li></ol>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<uint64_t> m_adTriggers;
                    bool m_adTriggersHasBeenSet;

                    /**
                     * <p>被视作广告的分发限制类型，可选值[1-4]：<br>1:None<br>2:Restricted（默认） 3:Unrestricted<br>4.Both</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_deliveryRestrictions;
                    bool m_deliveryRestrictionsHasBeenSet;

                    /**
                     * <p>源流CDN前缀，需要以http://或者https://开头。</p>
                     */
                    std::string m_sourceCDNPrefix;
                    bool m_sourceCDNPrefixHasBeenSet;

                    /**
                     * <p>广告CDN前缀，需要以http://或者https://开头。</p>
                     */
                    std::string m_adCDNPrefix;
                    bool m_adCDNPrefixHasBeenSet;

                    /**
                     * <p>预加载广告决策服务地址。注意：填了PreRollAdsUrl会自动代替覆盖PreRollAdsUrls[0]</p>
                     */
                    std::string m_preRollAdsUrl;
                    bool m_preRollAdsUrlHasBeenSet;

                    /**
                     * <p>预加载广告决策服务地址数组</p>
                     */
                    std::vector<std::string> m_preRollAdsUrls;
                    bool m_preRollAdsUrlsHasBeenSet;

                    /**
                     * <p>预加载广告最大允许时长，0-3600。</p>
                     */
                    int64_t m_preRollMaxAllowedDuration;
                    bool m_preRollMaxAllowedDurationHasBeenSet;

                    /**
                     * <p>是否开启多次请求ADS,开启后将优先请求ADS，请求失败后再请求兜底广告</p>
                     */
                    bool m_multiRequest;
                    bool m_multiRequestHasBeenSet;

                    /**
                     * <p>dash周期类型：SinglePeriod 或 MultiPeriod，默认 MultiPeriod</p>
                     */
                    std::string m_dashOriginManifestType;
                    bool m_dashOriginManifestTypeHasBeenSet;

                    /**
                     * <p>Empty VAST时是否播放Slate，默认开启(true)</p>
                     */
                    bool m_slateOnEmptyVast;
                    bool m_slateOnEmptyVastHasBeenSet;

                    /**
                     * <p>SCTE marker duration，默认180，范围0-3600</p>
                     */
                    int64_t m_sCTEMarkerDuration;
                    bool m_sCTEMarkerDurationHasBeenSet;

                    /**
                     * <p>安全组Id</p>
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SSAICONF_H_
