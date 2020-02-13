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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_GETRESPTIMETRENDEXREQUEST_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_GETRESPTIMETRENDEXREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cat/v20180409/model/DimensionsDetail.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * GetRespTimeTrendEx请求参数结构体
                */
                class GetRespTimeTrendExRequest : public AbstractModel
                {
                public:
                    GetRespTimeTrendExRequest();
                    ~GetRespTimeTrendExRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取验证成功的拨测任务id
                     * @return TaskId 验证成功的拨测任务id
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置验证成功的拨测任务id
                     * @param TaskId 验证成功的拨测任务id
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取统计数据的发生日期。格式如：2017-05-09
                     * @return Date 统计数据的发生日期。格式如：2017-05-09
                     */
                    std::string GetDate() const;

                    /**
                     * 设置统计数据的发生日期。格式如：2017-05-09
                     * @param Date 统计数据的发生日期。格式如：2017-05-09
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取数据的采集周期，单位分钟。取值可为 1, 5, 15, 30
                     * @return Period 数据的采集周期，单位分钟。取值可为 1, 5, 15, 30
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置数据的采集周期，单位分钟。取值可为 1, 5, 15, 30
                     * @param Period 数据的采集周期，单位分钟。取值可为 1, 5, 15, 30
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取可为 Isp, Province
                     * @return Dimensions 可为 Isp, Province
                     */
                    DimensionsDetail GetDimensions() const;

                    /**
                     * 设置可为 Isp, Province
                     * @param Dimensions 可为 Isp, Province
                     */
                    void SetDimensions(const DimensionsDetail& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     */
                    bool DimensionsHasBeenSet() const;

                    /**
                     * 获取可为  totalTime, parseTime, connectTime, sendTime, waitTime, receiveTime, availRatio。缺省值为 totalTime
                     * @return MetricName 可为  totalTime, parseTime, connectTime, sendTime, waitTime, receiveTime, availRatio。缺省值为 totalTime
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置可为  totalTime, parseTime, connectTime, sendTime, waitTime, receiveTime, availRatio。缺省值为 totalTime
                     * @param MetricName 可为  totalTime, parseTime, connectTime, sendTime, waitTime, receiveTime, availRatio。缺省值为 totalTime
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     */
                    bool MetricNameHasBeenSet() const;

                private:

                    /**
                     * 验证成功的拨测任务id
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 统计数据的发生日期。格式如：2017-05-09
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 数据的采集周期，单位分钟。取值可为 1, 5, 15, 30
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 可为 Isp, Province
                     */
                    DimensionsDetail m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * 可为  totalTime, parseTime, connectTime, sendTime, waitTime, receiveTime, availRatio。缺省值为 totalTime
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_GETRESPTIMETRENDEXREQUEST_H_
