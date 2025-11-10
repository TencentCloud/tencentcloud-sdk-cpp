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
                     * 获取主键ID
                     * @return Id 主键ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置主键ID
                     * @param _id 主键ID
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
                     * 获取子域名
                     * @return SubDomain 子域名
                     * 
                     */
                    std::string GetSubDomain() const;

                    /**
                     * 设置子域名
                     * @param _subDomain 子域名
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
                     * 获取Ip
                     * @return Ip Ip
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Ip
                     * @param _ip Ip
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
                     * 获取国家
                     * @return Country 国家
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置国家
                     * @param _country 国家
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
                     * 获取省份
                     * @return Province 省份
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置省份
                     * @param _province 省份
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
                     * 获取城市
                     * @return City 城市
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置城市
                     * @param _city 城市
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
                     * 获取互联网服务提供商
                     * @return Isp 互联网服务提供商
                     * 
                     */
                    std::string GetIsp() const;

                    /**
                     * 设置互联网服务提供商
                     * @param _isp 互联网服务提供商
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
                     * 获取公共字段
                     * @return DisplayToolCommon 公共字段
                     * 
                     */
                    DisplayToolCommon GetDisplayToolCommon() const;

                    /**
                     * 设置公共字段
                     * @param _displayToolCommon 公共字段
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
                     * 获取是否为云资产：0-非云资产 1-是云资产
                     * @return IsCloudAsset 是否为云资产：0-非云资产 1-是云资产
                     * 
                     */
                    int64_t GetIsCloudAsset() const;

                    /**
                     * 设置是否为云资产：0-非云资产 1-是云资产
                     * @param _isCloudAsset 是否为云资产：0-非云资产 1-是云资产
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
                     * 获取云资产是否下线：-1-已下线 0-正常
                     * @return CloudAssetStatus 云资产是否下线：-1-已下线 0-正常
                     * 
                     */
                    int64_t GetCloudAssetStatus() const;

                    /**
                     * 设置云资产是否下线：-1-已下线 0-正常
                     * @param _cloudAssetStatus 云资产是否下线：-1-已下线 0-正常
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
                     * 获取可用率（百分比）
                     * @return AvailabilityRate 可用率（百分比）
                     * 
                     */
                    int64_t GetAvailabilityRate() const;

                    /**
                     * 设置可用率（百分比）
                     * @param _availabilityRate 可用率（百分比）
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
                     * 获取可用状态 1:异常 0:正常
                     * @return AvailabilityState 可用状态 1:异常 0:正常
                     * 
                     */
                    int64_t GetAvailabilityState() const;

                    /**
                     * 设置可用状态 1:异常 0:正常
                     * @param _availabilityState 可用状态 1:异常 0:正常
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
                     * 获取域名解析状态 1:异常 0:正常
                     * @return AnalysisState 域名解析状态 1:异常 0:正常
                     * 
                     */
                    int64_t GetAnalysisState() const;

                    /**
                     * 设置域名解析状态 1:异常 0:正常
                     * @param _analysisState 域名解析状态 1:异常 0:正常
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
                     * 获取平均时延：单位ms
                     * @return AverageDelay 平均时延：单位ms
                     * 
                     */
                    int64_t GetAverageDelay() const;

                    /**
                     * 设置平均时延：单位ms
                     * @param _averageDelay 平均时延：单位ms
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
                     * 获取丢包率（百分比）
                     * @return LossRate 丢包率（百分比）
                     * 
                     */
                    int64_t GetLossRate() const;

                    /**
                     * 设置丢包率（百分比）
                     * @param _lossRate 丢包率（百分比）
                     * 
                     */
                    void SetLossRate(const int64_t& _lossRate);

                    /**
                     * 判断参数 LossRate 是否已赋值
                     * @return LossRate 是否已赋值
                     * 
                     */
                    bool LossRateHasBeenSet() const;

                private:

                    /**
                     * 主键ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 子域名
                     */
                    std::string m_subDomain;
                    bool m_subDomainHasBeenSet;

                    /**
                     * Ip
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 国家
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * 省份
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 城市
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 互联网服务提供商
                     */
                    std::string m_isp;
                    bool m_ispHasBeenSet;

                    /**
                     * 公共字段
                     */
                    DisplayToolCommon m_displayToolCommon;
                    bool m_displayToolCommonHasBeenSet;

                    /**
                     * 是否为云资产：0-非云资产 1-是云资产
                     */
                    int64_t m_isCloudAsset;
                    bool m_isCloudAssetHasBeenSet;

                    /**
                     * 云资产是否下线：-1-已下线 0-正常
                     */
                    int64_t m_cloudAssetStatus;
                    bool m_cloudAssetStatusHasBeenSet;

                    /**
                     * 可用率（百分比）
                     */
                    int64_t m_availabilityRate;
                    bool m_availabilityRateHasBeenSet;

                    /**
                     * 可用状态 1:异常 0:正常
                     */
                    int64_t m_availabilityState;
                    bool m_availabilityStateHasBeenSet;

                    /**
                     * 域名解析状态 1:异常 0:正常
                     */
                    int64_t m_analysisState;
                    bool m_analysisStateHasBeenSet;

                    /**
                     * 平均时延：单位ms
                     */
                    int64_t m_averageDelay;
                    bool m_averageDelayHasBeenSet;

                    /**
                     * 丢包率（百分比）
                     */
                    int64_t m_lossRate;
                    bool m_lossRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYSUBDOMAIN_H_
