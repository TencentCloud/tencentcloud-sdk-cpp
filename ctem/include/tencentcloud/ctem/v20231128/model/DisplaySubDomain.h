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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYSUBDOMAIN_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYSUBDOMAIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ctem/v20231128/model/DisplayToolCommon.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * 子域名详情
                */
                class DisplaySubDomain : public AbstractModel
                {
                public:
                    DisplaySubDomain();
                    ~DisplaySubDomain() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>主键ID</p>
                     * @return Id <p>主键ID</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>主键ID</p>
                     * @param _id <p>主键ID</p>
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>子域名</p>
                     * @return SubDomain <p>子域名</p>
                     * 
                     */
                    std::string GetSubDomain() const;

                    /**
                     * 设置<p>子域名</p>
                     * @param _subDomain <p>子域名</p>
                     * 
                     */
                    void SetSubDomain(const std::string& _subDomain);

                    /**
                     * 判断参数 SubDomain 是否已赋值
                     * @return SubDomain 是否已赋值
                     * 
                     */
                    bool SubDomainHasBeenSet() const;

                    /**
                     * 获取<p>Ip</p>
                     * @return Ip <p>Ip</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>Ip</p>
                     * @param _ip <p>Ip</p>
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取<p>国家</p>
                     * @return Country <p>国家</p>
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置<p>国家</p>
                     * @param _country <p>国家</p>
                     * 
                     */
                    void SetCountry(const std::string& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取<p>省份</p>
                     * @return Province <p>省份</p>
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置<p>省份</p>
                     * @param _province <p>省份</p>
                     * 
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取<p>城市</p>
                     * @return City <p>城市</p>
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置<p>城市</p>
                     * @param _city <p>城市</p>
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取<p>互联网服务提供商</p>
                     * @return Isp <p>互联网服务提供商</p>
                     * 
                     */
                    std::string GetIsp() const;

                    /**
                     * 设置<p>互联网服务提供商</p>
                     * @param _isp <p>互联网服务提供商</p>
                     * 
                     */
                    void SetIsp(const std::string& _isp);

                    /**
                     * 判断参数 Isp 是否已赋值
                     * @return Isp 是否已赋值
                     * 
                     */
                    bool IspHasBeenSet() const;

                    /**
                     * 获取<p>公共字段</p>
                     * @return DisplayToolCommon <p>公共字段</p>
                     * 
                     */
                    DisplayToolCommon GetDisplayToolCommon() const;

                    /**
                     * 设置<p>公共字段</p>
                     * @param _displayToolCommon <p>公共字段</p>
                     * 
                     */
                    void SetDisplayToolCommon(const DisplayToolCommon& _displayToolCommon);

                    /**
                     * 判断参数 DisplayToolCommon 是否已赋值
                     * @return DisplayToolCommon 是否已赋值
                     * 
                     */
                    bool DisplayToolCommonHasBeenSet() const;

                    /**
                     * 获取<p>是否为云资产：0-非云资产 1-是云资产</p>
                     * @return IsCloudAsset <p>是否为云资产：0-非云资产 1-是云资产</p>
                     * 
                     */
                    int64_t GetIsCloudAsset() const;

                    /**
                     * 设置<p>是否为云资产：0-非云资产 1-是云资产</p>
                     * @param _isCloudAsset <p>是否为云资产：0-非云资产 1-是云资产</p>
                     * 
                     */
                    void SetIsCloudAsset(const int64_t& _isCloudAsset);

                    /**
                     * 判断参数 IsCloudAsset 是否已赋值
                     * @return IsCloudAsset 是否已赋值
                     * 
                     */
                    bool IsCloudAssetHasBeenSet() const;

                    /**
                     * 获取<p>云资产是否下线：-1-已下线 0-正常</p>
                     * @return CloudAssetStatus <p>云资产是否下线：-1-已下线 0-正常</p>
                     * 
                     */
                    int64_t GetCloudAssetStatus() const;

                    /**
                     * 设置<p>云资产是否下线：-1-已下线 0-正常</p>
                     * @param _cloudAssetStatus <p>云资产是否下线：-1-已下线 0-正常</p>
                     * 
                     */
                    void SetCloudAssetStatus(const int64_t& _cloudAssetStatus);

                    /**
                     * 判断参数 CloudAssetStatus 是否已赋值
                     * @return CloudAssetStatus 是否已赋值
                     * 
                     */
                    bool CloudAssetStatusHasBeenSet() const;

                    /**
                     * 获取<p>可用率（百分比）</p>
                     * @return AvailabilityRate <p>可用率（百分比）</p>
                     * 
                     */
                    int64_t GetAvailabilityRate() const;

                    /**
                     * 设置<p>可用率（百分比）</p>
                     * @param _availabilityRate <p>可用率（百分比）</p>
                     * 
                     */
                    void SetAvailabilityRate(const int64_t& _availabilityRate);

                    /**
                     * 判断参数 AvailabilityRate 是否已赋值
                     * @return AvailabilityRate 是否已赋值
                     * 
                     */
                    bool AvailabilityRateHasBeenSet() const;

                    /**
                     * 获取<p>可用状态 1:异常 0:正常</p>
                     * @return AvailabilityState <p>可用状态 1:异常 0:正常</p>
                     * 
                     */
                    int64_t GetAvailabilityState() const;

                    /**
                     * 设置<p>可用状态 1:异常 0:正常</p>
                     * @param _availabilityState <p>可用状态 1:异常 0:正常</p>
                     * 
                     */
                    void SetAvailabilityState(const int64_t& _availabilityState);

                    /**
                     * 判断参数 AvailabilityState 是否已赋值
                     * @return AvailabilityState 是否已赋值
                     * 
                     */
                    bool AvailabilityStateHasBeenSet() const;

                    /**
                     * 获取<p>域名解析状态 1:异常 0:正常</p>
                     * @return AnalysisState <p>域名解析状态 1:异常 0:正常</p>
                     * 
                     */
                    int64_t GetAnalysisState() const;

                    /**
                     * 设置<p>域名解析状态 1:异常 0:正常</p>
                     * @param _analysisState <p>域名解析状态 1:异常 0:正常</p>
                     * 
                     */
                    void SetAnalysisState(const int64_t& _analysisState);

                    /**
                     * 判断参数 AnalysisState 是否已赋值
                     * @return AnalysisState 是否已赋值
                     * 
                     */
                    bool AnalysisStateHasBeenSet() const;

                    /**
                     * 获取<p>平均时延：单位ms</p>
                     * @return AverageDelay <p>平均时延：单位ms</p>
                     * 
                     */
                    int64_t GetAverageDelay() const;

                    /**
                     * 设置<p>平均时延：单位ms</p>
                     * @param _averageDelay <p>平均时延：单位ms</p>
                     * 
                     */
                    void SetAverageDelay(const int64_t& _averageDelay);

                    /**
                     * 判断参数 AverageDelay 是否已赋值
                     * @return AverageDelay 是否已赋值
                     * 
                     */
                    bool AverageDelayHasBeenSet() const;

                    /**
                     * 获取<p>丢包率（百分比）</p>
                     * @return LossRate <p>丢包率（百分比）</p>
                     * 
                     */
                    int64_t GetLossRate() const;

                    /**
                     * 设置<p>丢包率（百分比）</p>
                     * @param _lossRate <p>丢包率（百分比）</p>
                     * 
                     */
                    void SetLossRate(const int64_t& _lossRate);

                    /**
                     * 判断参数 LossRate 是否已赋值
                     * @return LossRate 是否已赋值
                     * 
                     */
                    bool LossRateHasBeenSet() const;

                    /**
                     * 获取<p>DNS解析类型</p><p>A、AAAA、MX、CNAME、NX</p>
                     * @return DnsType <p>DNS解析类型</p><p>A、AAAA、MX、CNAME、NX</p>
                     * 
                     */
                    std::string GetDnsType() const;

                    /**
                     * 设置<p>DNS解析类型</p><p>A、AAAA、MX、CNAME、NX</p>
                     * @param _dnsType <p>DNS解析类型</p><p>A、AAAA、MX、CNAME、NX</p>
                     * 
                     */
                    void SetDnsType(const std::string& _dnsType);

                    /**
                     * 判断参数 DnsType 是否已赋值
                     * @return DnsType 是否已赋值
                     * 
                     */
                    bool DnsTypeHasBeenSet() const;

                    /**
                     * 获取<p>DNS解析值</p>
                     * @return DnsValue <p>DNS解析值</p>
                     * 
                     */
                    std::string GetDnsValue() const;

                    /**
                     * 设置<p>DNS解析值</p>
                     * @param _dnsValue <p>DNS解析值</p>
                     * 
                     */
                    void SetDnsValue(const std::string& _dnsValue);

                    /**
                     * 判断参数 DnsValue 是否已赋值
                     * @return DnsValue 是否已赋值
                     * 
                     */
                    bool DnsValueHasBeenSet() const;

                private:

                    /**
                     * <p>主键ID</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>子域名</p>
                     */
                    std::string m_subDomain;
                    bool m_subDomainHasBeenSet;

                    /**
                     * <p>Ip</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>国家</p>
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * <p>省份</p>
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * <p>城市</p>
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * <p>互联网服务提供商</p>
                     */
                    std::string m_isp;
                    bool m_ispHasBeenSet;

                    /**
                     * <p>公共字段</p>
                     */
                    DisplayToolCommon m_displayToolCommon;
                    bool m_displayToolCommonHasBeenSet;

                    /**
                     * <p>是否为云资产：0-非云资产 1-是云资产</p>
                     */
                    int64_t m_isCloudAsset;
                    bool m_isCloudAssetHasBeenSet;

                    /**
                     * <p>云资产是否下线：-1-已下线 0-正常</p>
                     */
                    int64_t m_cloudAssetStatus;
                    bool m_cloudAssetStatusHasBeenSet;

                    /**
                     * <p>可用率（百分比）</p>
                     */
                    int64_t m_availabilityRate;
                    bool m_availabilityRateHasBeenSet;

                    /**
                     * <p>可用状态 1:异常 0:正常</p>
                     */
                    int64_t m_availabilityState;
                    bool m_availabilityStateHasBeenSet;

                    /**
                     * <p>域名解析状态 1:异常 0:正常</p>
                     */
                    int64_t m_analysisState;
                    bool m_analysisStateHasBeenSet;

                    /**
                     * <p>平均时延：单位ms</p>
                     */
                    int64_t m_averageDelay;
                    bool m_averageDelayHasBeenSet;

                    /**
                     * <p>丢包率（百分比）</p>
                     */
                    int64_t m_lossRate;
                    bool m_lossRateHasBeenSet;

                    /**
                     * <p>DNS解析类型</p><p>A、AAAA、MX、CNAME、NX</p>
                     */
                    std::string m_dnsType;
                    bool m_dnsTypeHasBeenSet;

                    /**
                     * <p>DNS解析值</p>
                     */
                    std::string m_dnsValue;
                    bool m_dnsValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYSUBDOMAIN_H_
