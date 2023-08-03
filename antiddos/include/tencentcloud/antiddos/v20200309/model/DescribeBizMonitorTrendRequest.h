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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEBIZMONITORTRENDREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEBIZMONITORTRENDREQUEST_H_

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
                * DescribeBizMonitorTrend请求参数结构体
                */
                class DescribeBizMonitorTrendRequest : public AbstractModel
                {
                public:
                    DescribeBizMonitorTrendRequest();
                    ~DescribeBizMonitorTrendRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取统计纬度，可取值intraffic outtraffic inpkg outpkg
                     * @return MetricName 统计纬度，可取值intraffic outtraffic inpkg outpkg
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置统计纬度，可取值intraffic outtraffic inpkg outpkg
                     * @param _metricName 统计纬度，可取值intraffic outtraffic inpkg outpkg
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
                     * 获取时间粒度 60 300 3600 21600 86400
                     * @return Period 时间粒度 60 300 3600 21600 86400
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置时间粒度 60 300 3600 21600 86400
                     * @param _period 时间粒度 60 300 3600 21600 86400
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                private:

                    /**
                     * DDoS防护子产品代号（bgpip表示高防IP）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

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
                     * 统计纬度，可取值intraffic outtraffic inpkg outpkg
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 时间粒度 60 300 3600 21600 86400
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEBIZMONITORTRENDREQUEST_H_
