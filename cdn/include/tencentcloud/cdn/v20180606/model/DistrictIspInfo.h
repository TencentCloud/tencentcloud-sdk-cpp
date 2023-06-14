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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DISTRICTISPINFO_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DISTRICTISPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 地区运营商明细数据
                */
                class DistrictIspInfo : public AbstractModel
                {
                public:
                    DistrictIspInfo();
                    ~DistrictIspInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
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
                     * 获取协议类型
                     * @return Protocol 协议类型
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议类型
                     * @param _protocol 协议类型
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取IP协议类型
                     * @return IpProtocol IP协议类型
                     * 
                     */
                    std::string GetIpProtocol() const;

                    /**
                     * 设置IP协议类型
                     * @param _ipProtocol IP协议类型
                     * 
                     */
                    void SetIpProtocol(const std::string& _ipProtocol);

                    /**
                     * 判断参数 IpProtocol 是否已赋值
                     * @return IpProtocol 是否已赋值
                     * 
                     */
                    bool IpProtocolHasBeenSet() const;

                    /**
                     * 获取起始时间
                     * @return StartTime 起始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置起始时间
                     * @param _startTime 起始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取时间间隔，单位为分钟
                     * @return Interval 时间间隔，单位为分钟
                     * 
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置时间间隔，单位为分钟
                     * @param _interval 时间间隔，单位为分钟
                     * 
                     */
                    void SetInterval(const uint64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取指标名称
                     * @return Metric 指标名称
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置指标名称
                     * @param _metric 指标名称
                     * 
                     */
                    void SetMetric(const std::string& _metric);

                    /**
                     * 判断参数 Metric 是否已赋值
                     * @return Metric 是否已赋值
                     * 
                     */
                    bool MetricHasBeenSet() const;

                    /**
                     * 获取地区ID
                     * @return District 地区ID
                     * 
                     */
                    int64_t GetDistrict() const;

                    /**
                     * 设置地区ID
                     * @param _district 地区ID
                     * 
                     */
                    void SetDistrict(const int64_t& _district);

                    /**
                     * 判断参数 District 是否已赋值
                     * @return District 是否已赋值
                     * 
                     */
                    bool DistrictHasBeenSet() const;

                    /**
                     * 获取运营商ID
                     * @return Isp 运营商ID
                     * 
                     */
                    int64_t GetIsp() const;

                    /**
                     * 设置运营商ID
                     * @param _isp 运营商ID
                     * 
                     */
                    void SetIsp(const int64_t& _isp);

                    /**
                     * 判断参数 Isp 是否已赋值
                     * @return Isp 是否已赋值
                     * 
                     */
                    bool IspHasBeenSet() const;

                    /**
                     * 获取指标数据点
                     * @return DataPoints 指标数据点
                     * 
                     */
                    std::vector<uint64_t> GetDataPoints() const;

                    /**
                     * 设置指标数据点
                     * @param _dataPoints 指标数据点
                     * 
                     */
                    void SetDataPoints(const std::vector<uint64_t>& _dataPoints);

                    /**
                     * 判断参数 DataPoints 是否已赋值
                     * @return DataPoints 是否已赋值
                     * 
                     */
                    bool DataPointsHasBeenSet() const;

                    /**
                     * 获取地区名称
                     * @return DistrictName 地区名称
                     * 
                     */
                    std::string GetDistrictName() const;

                    /**
                     * 设置地区名称
                     * @param _districtName 地区名称
                     * 
                     */
                    void SetDistrictName(const std::string& _districtName);

                    /**
                     * 判断参数 DistrictName 是否已赋值
                     * @return DistrictName 是否已赋值
                     * 
                     */
                    bool DistrictNameHasBeenSet() const;

                    /**
                     * 获取运营商名称
                     * @return IspName 运营商名称
                     * 
                     */
                    std::string GetIspName() const;

                    /**
                     * 设置运营商名称
                     * @param _ispName 运营商名称
                     * 
                     */
                    void SetIspName(const std::string& _ispName);

                    /**
                     * 判断参数 IspName 是否已赋值
                     * @return IspName 是否已赋值
                     * 
                     */
                    bool IspNameHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 协议类型
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * IP协议类型
                     */
                    std::string m_ipProtocol;
                    bool m_ipProtocolHasBeenSet;

                    /**
                     * 起始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 时间间隔，单位为分钟
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 指标名称
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * 地区ID
                     */
                    int64_t m_district;
                    bool m_districtHasBeenSet;

                    /**
                     * 运营商ID
                     */
                    int64_t m_isp;
                    bool m_ispHasBeenSet;

                    /**
                     * 指标数据点
                     */
                    std::vector<uint64_t> m_dataPoints;
                    bool m_dataPointsHasBeenSet;

                    /**
                     * 地区名称
                     */
                    std::string m_districtName;
                    bool m_districtNameHasBeenSet;

                    /**
                     * 运营商名称
                     */
                    std::string m_ispName;
                    bool m_ispNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DISTRICTISPINFO_H_
