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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEREDISCMDPERFTIMESERIESREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEREDISCMDPERFTIMESERIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeRedisCmdPerfTimeSeries请求参数结构体
                */
                class DescribeRedisCmdPerfTimeSeriesRequest : public AbstractModel
                {
                public:
                    DescribeRedisCmdPerfTimeSeriesRequest();
                    ~DescribeRedisCmdPerfTimeSeriesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID
                     * @return InstanceId 实例 ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID
                     * @param _instanceId 实例 ID
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
                     * 获取服务产品类型，仅仅支持值 "redis" - 云数据库 Redis。
                     * @return Product 服务产品类型，仅仅支持值 "redis" - 云数据库 Redis。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置服务产品类型，仅仅支持值 "redis" - 云数据库 Redis。
                     * @param _product 服务产品类型，仅仅支持值 "redis" - 云数据库 Redis。
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取开始时间，如“2025-03-17T00:00:00+00:00”。0天 < 当前服务器时间 - 开始时间 <= 10天。
                     * @return StartTime 开始时间，如“2025-03-17T00:00:00+00:00”。0天 < 当前服务器时间 - 开始时间 <= 10天。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间，如“2025-03-17T00:00:00+00:00”。0天 < 当前服务器时间 - 开始时间 <= 10天。
                     * @param _startTime 开始时间，如“2025-03-17T00:00:00+00:00”。0天 < 当前服务器时间 - 开始时间 <= 10天。
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
                     * 获取结束时间，如“2025-03-17T01:00:00+00:00”，0天 < 结束时间 - 开始时间 <= 10天。
                     * @return EndTime 结束时间，如“2025-03-17T01:00:00+00:00”，0天 < 结束时间 - 开始时间 <= 10天。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，如“2025-03-17T01:00:00+00:00”，0天 < 结束时间 - 开始时间 <= 10天。
                     * @param _endTime 结束时间，如“2025-03-17T01:00:00+00:00”，0天 < 结束时间 - 开始时间 <= 10天。
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
                     * 获取需要分析的redis命令
                     * @return CommandList 需要分析的redis命令
                     * 
                     */
                    std::vector<std::string> GetCommandList() const;

                    /**
                     * 设置需要分析的redis命令
                     * @param _commandList 需要分析的redis命令
                     * 
                     */
                    void SetCommandList(const std::vector<std::string>& _commandList);

                    /**
                     * 判断参数 CommandList 是否已赋值
                     * @return CommandList 是否已赋值
                     * 
                     */
                    bool CommandListHasBeenSet() const;

                    /**
                     * 获取监控指标，以逗号分隔
                     * @return Metric 监控指标，以逗号分隔
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置监控指标，以逗号分隔
                     * @param _metric 监控指标，以逗号分隔
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
                     * 获取监控指标时间粒度，单位秒，若不提供则根据开始时间和结束时间取默认值
                     * @return Period 监控指标时间粒度，单位秒，若不提供则根据开始时间和结束时间取默认值
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置监控指标时间粒度，单位秒，若不提供则根据开始时间和结束时间取默认值
                     * @param _period 监控指标时间粒度，单位秒，若不提供则根据开始时间和结束时间取默认值
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
                     * 实例 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 服务产品类型，仅仅支持值 "redis" - 云数据库 Redis。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 开始时间，如“2025-03-17T00:00:00+00:00”。0天 < 当前服务器时间 - 开始时间 <= 10天。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，如“2025-03-17T01:00:00+00:00”，0天 < 结束时间 - 开始时间 <= 10天。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 需要分析的redis命令
                     */
                    std::vector<std::string> m_commandList;
                    bool m_commandListHasBeenSet;

                    /**
                     * 监控指标，以逗号分隔
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * 监控指标时间粒度，单位秒，若不提供则根据开始时间和结束时间取默认值
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEREDISCMDPERFTIMESERIESREQUEST_H_
