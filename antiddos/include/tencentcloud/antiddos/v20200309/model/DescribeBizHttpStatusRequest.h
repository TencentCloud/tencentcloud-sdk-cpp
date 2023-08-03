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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEBIZHTTPSTATUSREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEBIZHTTPSTATUSREQUEST_H_

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
                * DescribeBizHttpStatus请求参数结构体
                */
                class DescribeBizHttpStatusRequest : public AbstractModel
                {
                public:
                    DescribeBizHttpStatusRequest();
                    ~DescribeBizHttpStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取统计方式，仅支持sum
                     * @return Statistics 统计方式，仅支持sum
                     * 
                     */
                    std::string GetStatistics() const;

                    /**
                     * 设置统计方式，仅支持sum
                     * @param _statistics 统计方式，仅支持sum
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
                     * 获取统计周期，可取值60，300，1800，3600， 21600，86400，单位秒
                     * @return Period 统计周期，可取值60，300，1800，3600， 21600，86400，单位秒
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置统计周期，可取值60，300，1800，3600， 21600，86400，单位秒
                     * @param _period 统计周期，可取值60，300，1800，3600， 21600，86400，单位秒
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取统计开始时间。 如2020-02-01 12:04:12
                     * @return StartTime 统计开始时间。 如2020-02-01 12:04:12
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置统计开始时间。 如2020-02-01 12:04:12
                     * @param _startTime 统计开始时间。 如2020-02-01 12:04:12
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
                     * 获取统计结束时间。如2020-02-03 18:03:23
                     * @return EndTime 统计结束时间。如2020-02-03 18:03:23
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置统计结束时间。如2020-02-03 18:03:23
                     * @param _endTime 统计结束时间。如2020-02-03 18:03:23
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
                     * 获取资源Id
                     * @return Id 资源Id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置资源Id
                     * @param _id 资源Id
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
                     * 获取特定域名查询
                     * @return Domain 特定域名查询
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置特定域名查询
                     * @param _domain 特定域名查询
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

                private:

                    /**
                     * 统计方式，仅支持sum
                     */
                    std::string m_statistics;
                    bool m_statisticsHasBeenSet;

                    /**
                     * DDoS防护子产品代号（bgpip表示高防IP）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 统计周期，可取值60，300，1800，3600， 21600，86400，单位秒
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 统计开始时间。 如2020-02-01 12:04:12
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 统计结束时间。如2020-02-03 18:03:23
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 资源Id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 特定域名查询
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 协议及端口列表，协议可取值TCP, UDP, HTTP, HTTPS，仅统计纬度为连接数时有效
                     */
                    std::vector<ProtocolPort> m_protoInfo;
                    bool m_protoInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEBIZHTTPSTATUSREQUEST_H_
