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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEBIZTRENDREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEBIZTRENDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/ProtocolPort.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeBizTrend请求参数结构体
                */
                class DescribeBizTrendRequest : public AbstractModel
                {
                public:
                    DescribeBizTrendRequest();
                    ~DescribeBizTrendRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取统计方式，可取值max, min, avg, sum, 如统计纬度是流量速率或包量速率，仅可取值max
                     * @return Statistics 统计方式，可取值max, min, avg, sum, 如统计纬度是流量速率或包量速率，仅可取值max
                     * 
                     */
                    std::string GetStatistics() const;

                    /**
                     * 设置统计方式，可取值max, min, avg, sum, 如统计纬度是流量速率或包量速率，仅可取值max
                     * @param _statistics 统计方式，可取值max, min, avg, sum, 如统计纬度是流量速率或包量速率，仅可取值max
                     * 
                     */
                    void SetStatistics(const std::string& _statistics);

                    /**
                     * 判断参数 Statistics 是否已赋值
                     * @return Statistics 是否已赋值
                     * 
                     */
                    bool StatisticsHasBeenSet() const;

                    /**
                     * 获取DDoS防护子产品代号（bgpip表示高防IP）
                     * @return Business DDoS防护子产品代号（bgpip表示高防IP）
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置DDoS防护子产品代号（bgpip表示高防IP）
                     * @param _business DDoS防护子产品代号（bgpip表示高防IP）
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取统计周期，可取值60，300，1800，3600，21600，86400，单位秒
                     * @return Period 统计周期，可取值60，300，1800，3600，21600，86400，单位秒
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置统计周期，可取值60，300，1800，3600，21600，86400，单位秒
                     * @param _period 统计周期，可取值60，300，1800，3600，21600，86400，单位秒
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取统计开始时间。 例：“2020-09-22 00:00:00”
                     * @return StartTime 统计开始时间。 例：“2020-09-22 00:00:00”
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置统计开始时间。 例：“2020-09-22 00:00:00”
                     * @param _startTime 统计开始时间。 例：“2020-09-22 00:00:00”
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
                     * 获取统计结束时间。 例：“2020-09-22 00:00:00”
                     * @return EndTime 统计结束时间。 例：“2020-09-22 00:00:00”
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置统计结束时间。 例：“2020-09-22 00:00:00”
                     * @param _endTime 统计结束时间。 例：“2020-09-22 00:00:00”
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
                     * 获取资源实例ID
                     * @return Id 资源实例ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置资源实例ID
                     * @param _id 资源实例ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取统计纬度，可取值connum, new_conn, inactive_conn, intraffic, outtraffic, inpkg, outpkg, qps
                     * @return MetricName 统计纬度，可取值connum, new_conn, inactive_conn, intraffic, outtraffic, inpkg, outpkg, qps
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置统计纬度，可取值connum, new_conn, inactive_conn, intraffic, outtraffic, inpkg, outpkg, qps
                     * @param _metricName 统计纬度，可取值connum, new_conn, inactive_conn, intraffic, outtraffic, inpkg, outpkg, qps
                     * 
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取统计纬度为qps时，可选特定域名查询
                     * @return Domain 统计纬度为qps时，可选特定域名查询
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置统计纬度为qps时，可选特定域名查询
                     * @param _domain 统计纬度为qps时，可选特定域名查询
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
                     * 获取协议及端口列表，协议可取值TCP, UDP, HTTP, HTTPS，仅统计纬度为连接数时有效
                     * @return ProtoInfo 协议及端口列表，协议可取值TCP, UDP, HTTP, HTTPS，仅统计纬度为连接数时有效
                     * 
                     */
                    std::vector<ProtocolPort> GetProtoInfo() const;

                    /**
                     * 设置协议及端口列表，协议可取值TCP, UDP, HTTP, HTTPS，仅统计纬度为连接数时有效
                     * @param _protoInfo 协议及端口列表，协议可取值TCP, UDP, HTTP, HTTPS，仅统计纬度为连接数时有效
                     * 
                     */
                    void SetProtoInfo(const std::vector<ProtocolPort>& _protoInfo);

                    /**
                     * 判断参数 ProtoInfo 是否已赋值
                     * @return ProtoInfo 是否已赋值
                     * 
                     */
                    bool ProtoInfoHasBeenSet() const;

                    /**
                     * 获取业务类型：</br>
port：端口业务
domain：域名业务
                     * @return BusinessType 业务类型：</br>
port：端口业务
domain：域名业务
                     * 
                     */
                    std::string GetBusinessType() const;

                    /**
                     * 设置业务类型：</br>
port：端口业务
domain：域名业务
                     * @param _businessType 业务类型：</br>
port：端口业务
domain：域名业务
                     * 
                     */
                    void SetBusinessType(const std::string& _businessType);

                    /**
                     * 判断参数 BusinessType 是否已赋值
                     * @return BusinessType 是否已赋值
                     * 
                     */
                    bool BusinessTypeHasBeenSet() const;

                private:

                    /**
                     * 统计方式，可取值max, min, avg, sum, 如统计纬度是流量速率或包量速率，仅可取值max
                     */
                    std::string m_statistics;
                    bool m_statisticsHasBeenSet;

                    /**
                     * DDoS防护子产品代号（bgpip表示高防IP）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 统计周期，可取值60，300，1800，3600，21600，86400，单位秒
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 统计开始时间。 例：“2020-09-22 00:00:00”
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 统计结束时间。 例：“2020-09-22 00:00:00”
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 资源实例ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 统计纬度，可取值connum, new_conn, inactive_conn, intraffic, outtraffic, inpkg, outpkg, qps
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 统计纬度为qps时，可选特定域名查询
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 协议及端口列表，协议可取值TCP, UDP, HTTP, HTTPS，仅统计纬度为连接数时有效
                     */
                    std::vector<ProtocolPort> m_protoInfo;
                    bool m_protoInfoHasBeenSet;

                    /**
                     * 业务类型：</br>
port：端口业务
domain：域名业务
                     */
                    std::string m_businessType;
                    bool m_businessTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEBIZTRENDREQUEST_H_
