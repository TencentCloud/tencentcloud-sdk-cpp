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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEBGPBIZTRENDREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEBGPBIZTRENDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeBgpBizTrend请求参数结构体
                */
                class DescribeBgpBizTrendRequest : public AbstractModel
                {
                public:
                    DescribeBgpBizTrendRequest();
                    ~DescribeBgpBizTrendRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DDoS防护子产品代号（bgp-multip表示高防包）
                     * @return Business DDoS防护子产品代号（bgp-multip表示高防包）
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置DDoS防护子产品代号（bgp-multip表示高防包）
                     * @param _business DDoS防护子产品代号（bgp-multip表示高防包）
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
                     * 获取统计开始时间。 例：“2020-09-22 00:00:00”，注意该时间必须为5分钟的倍数
                     * @return StartTime 统计开始时间。 例：“2020-09-22 00:00:00”，注意该时间必须为5分钟的倍数
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置统计开始时间。 例：“2020-09-22 00:00:00”，注意该时间必须为5分钟的倍数
                     * @param _startTime 统计开始时间。 例：“2020-09-22 00:00:00”，注意该时间必须为5分钟的倍数
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
                     * 获取统计结束时间。 例：“2020-09-22 00:00:00”，注意该时间必须为5分钟的倍数
                     * @return EndTime 统计结束时间。 例：“2020-09-22 00:00:00”，注意该时间必须为5分钟的倍数
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置统计结束时间。 例：“2020-09-22 00:00:00”，注意该时间必须为5分钟的倍数
                     * @param _endTime 统计结束时间。 例：“2020-09-22 00:00:00”，注意该时间必须为5分钟的倍数
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
                     * 获取统计维度，可取值intraffic, outtraffic, inpkg, outpkg； intraffic：入流量 outtraffic：出流量 inpkg：入包速率 outpkg：出包速率
                     * @return MetricName 统计维度，可取值intraffic, outtraffic, inpkg, outpkg； intraffic：入流量 outtraffic：出流量 inpkg：入包速率 outpkg：出包速率
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置统计维度，可取值intraffic, outtraffic, inpkg, outpkg； intraffic：入流量 outtraffic：出流量 inpkg：入包速率 outpkg：出包速率
                     * @param _metricName 统计维度，可取值intraffic, outtraffic, inpkg, outpkg； intraffic：入流量 outtraffic：出流量 inpkg：入包速率 outpkg：出包速率
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
                     * 获取资源实例ID
                     * @return InstanceId 资源实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置资源实例ID
                     * @param _instanceId 资源实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取0表示固定时间，1表示自定义时间
                     * @return Flag 0表示固定时间，1表示自定义时间
                     * 
                     */
                    uint64_t GetFlag() const;

                    /**
                     * 设置0表示固定时间，1表示自定义时间
                     * @param _flag 0表示固定时间，1表示自定义时间
                     * 
                     */
                    void SetFlag(const uint64_t& _flag);

                    /**
                     * 判断参数 Flag 是否已赋值
                     * @return Flag 是否已赋值
                     * 
                     */
                    bool FlagHasBeenSet() const;

                private:

                    /**
                     * DDoS防护子产品代号（bgp-multip表示高防包）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 统计开始时间。 例：“2020-09-22 00:00:00”，注意该时间必须为5分钟的倍数
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 统计结束时间。 例：“2020-09-22 00:00:00”，注意该时间必须为5分钟的倍数
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 统计维度，可取值intraffic, outtraffic, inpkg, outpkg； intraffic：入流量 outtraffic：出流量 inpkg：入包速率 outpkg：出包速率
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 资源实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 0表示固定时间，1表示自定义时间
                     */
                    uint64_t m_flag;
                    bool m_flagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEBGPBIZTRENDREQUEST_H_
