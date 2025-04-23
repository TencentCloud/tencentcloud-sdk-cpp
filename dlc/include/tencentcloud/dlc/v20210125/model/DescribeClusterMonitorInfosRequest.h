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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBECLUSTERMONITORINFOSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBECLUSTERMONITORINFOSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeClusterMonitorInfos请求参数结构体
                */
                class DescribeClusterMonitorInfosRequest : public AbstractModel
                {
                public:
                    DescribeClusterMonitorInfosRequest();
                    ~DescribeClusterMonitorInfosRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取引擎Id
                     * @return DataEngineId 引擎Id
                     * 
                     */
                    std::string GetDataEngineId() const;

                    /**
                     * 设置引擎Id
                     * @param _dataEngineId 引擎Id
                     * 
                     */
                    void SetDataEngineId(const std::string& _dataEngineId);

                    /**
                     * 判断参数 DataEngineId 是否已赋值
                     * @return DataEngineId 是否已赋值
                     * 
                     */
                    bool DataEngineIdHasBeenSet() const;

                    /**
                     * 获取任务创建时间的起始时间
                     * @return TimeStart 任务创建时间的起始时间
                     * 
                     */
                    std::string GetTimeStart() const;

                    /**
                     * 设置任务创建时间的起始时间
                     * @param _timeStart 任务创建时间的起始时间
                     * 
                     */
                    void SetTimeStart(const std::string& _timeStart);

                    /**
                     * 判断参数 TimeStart 是否已赋值
                     * @return TimeStart 是否已赋值
                     * 
                     */
                    bool TimeStartHasBeenSet() const;

                    /**
                     * 获取任务创建时间的结束时间
                     * @return TimeEnd 任务创建时间的结束时间
                     * 
                     */
                    std::string GetTimeEnd() const;

                    /**
                     * 设置任务创建时间的结束时间
                     * @param _timeEnd 任务创建时间的结束时间
                     * 
                     */
                    void SetTimeEnd(const std::string& _timeEnd);

                    /**
                     * 判断参数 TimeEnd 是否已赋值
                     * @return TimeEnd 是否已赋值
                     * 
                     */
                    bool TimeEndHasBeenSet() const;

                    /**
                     * 获取指标名称
                     * @return MetricName 指标名称
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标名称
                     * @param _metricName 指标名称
                     * 
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                private:

                    /**
                     * 引擎Id
                     */
                    std::string m_dataEngineId;
                    bool m_dataEngineIdHasBeenSet;

                    /**
                     * 任务创建时间的起始时间
                     */
                    std::string m_timeStart;
                    bool m_timeStartHasBeenSet;

                    /**
                     * 任务创建时间的结束时间
                     */
                    std::string m_timeEnd;
                    bool m_timeEndHasBeenSet;

                    /**
                     * 指标名称
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBECLUSTERMONITORINFOSREQUEST_H_
