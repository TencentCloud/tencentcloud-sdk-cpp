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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_LISTTOPDDOSDATAREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_LISTTOPDDOSDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ListTopDDoSData请求参数结构体
                */
                class ListTopDDoSDataRequest : public AbstractModel
                {
                public:
                    ListTopDDoSDataRequest();
                    ~ListTopDDoSDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询Top数据的开始时间，格式为：2020-01-01 00:00:00
                     * @return StartTime 查询Top数据的开始时间，格式为：2020-01-01 00:00:00
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询Top数据的开始时间，格式为：2020-01-01 00:00:00
                     * @param _startTime 查询Top数据的开始时间，格式为：2020-01-01 00:00:00
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
                     * 获取查询Top数据的结束时间，格式为：2020-01-01 23:59:59
支持 90 天内数据查询，时间跨度要小于等于7天
                     * @return EndTime 查询Top数据的结束时间，格式为：2020-01-01 23:59:59
支持 90 天内数据查询，时间跨度要小于等于7天
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询Top数据的结束时间，格式为：2020-01-01 23:59:59
支持 90 天内数据查询，时间跨度要小于等于7天
                     * @param _endTime 查询Top数据的结束时间，格式为：2020-01-01 23:59:59
支持 90 天内数据查询，时间跨度要小于等于7天
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
                     * 获取查询Top的数量，不填默认值为10
                     * @return TopCount 查询Top的数量，不填默认值为10
                     * 
                     */
                    uint64_t GetTopCount() const;

                    /**
                     * 设置查询Top的数量，不填默认值为10
                     * @param _topCount 查询Top的数量，不填默认值为10
                     * 
                     */
                    void SetTopCount(const uint64_t& _topCount);

                    /**
                     * 判断参数 TopCount 是否已赋值
                     * @return TopCount 是否已赋值
                     * 
                     */
                    bool TopCountHasBeenSet() const;

                    /**
                     * 获取AttackIP表示查询攻击ip的top排行，AttackType表示攻击类型的top排行，为空默认为AttackType
                     * @return Metric AttackIP表示查询攻击ip的top排行，AttackType表示攻击类型的top排行，为空默认为AttackType
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置AttackIP表示查询攻击ip的top排行，AttackType表示攻击类型的top排行，为空默认为AttackType
                     * @param _metric AttackIP表示查询攻击ip的top排行，AttackType表示攻击类型的top排行，为空默认为AttackType
                     * 
                     */
                    void SetMetric(const std::string& _metric);

                    /**
                     * 判断参数 Metric 是否已赋值
                     * @return Metric 是否已赋值
                     * 
                     */
                    bool MetricHasBeenSet() const;

                private:

                    /**
                     * 查询Top数据的开始时间，格式为：2020-01-01 00:00:00
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询Top数据的结束时间，格式为：2020-01-01 23:59:59
支持 90 天内数据查询，时间跨度要小于等于7天
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 查询Top的数量，不填默认值为10
                     */
                    uint64_t m_topCount;
                    bool m_topCountHasBeenSet;

                    /**
                     * AttackIP表示查询攻击ip的top排行，AttackType表示攻击类型的top排行，为空默认为AttackType
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_LISTTOPDDOSDATAREQUEST_H_
