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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEOVERVIEWINVOCATIONREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEOVERVIEWINVOCATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribeOverviewInvocation请求参数结构体
                */
                class DescribeOverviewInvocationRequest : public AbstractModel
                {
                public:
                    DescribeOverviewInvocationRequest();
                    ~DescribeOverviewInvocationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取命名空间ID， 此参数必填
                     * @return NamespaceId 命名空间ID， 此参数必填
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间ID， 此参数必填
                     * @param _namespaceId 命名空间ID， 此参数必填
                     * 
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取监控统计类型，必填，可选值：SumReqAmount、AvgFailureRate、AvgTimeCost，分别对应请求量、请求错误率、平均响应耗时
                     * @return Type 监控统计类型，必填，可选值：SumReqAmount、AvgFailureRate、AvgTimeCost，分别对应请求量、请求错误率、平均响应耗时
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置监控统计类型，必填，可选值：SumReqAmount、AvgFailureRate、AvgTimeCost，分别对应请求量、请求错误率、平均响应耗时
                     * @param _type 监控统计类型，必填，可选值：SumReqAmount、AvgFailureRate、AvgTimeCost，分别对应请求量、请求错误率、平均响应耗时
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取监控统计数据粒度，可选值：60、3600、86400，分别对应1分钟、1小时、1天
                     * @return Period 监控统计数据粒度，可选值：60、3600、86400，分别对应1分钟、1小时、1天
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置监控统计数据粒度，可选值：60、3600、86400，分别对应1分钟、1小时、1天
                     * @param _period 监控统计数据粒度，可选值：60、3600、86400，分别对应1分钟、1小时、1天
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
                     * 获取查询开始时间，默认为当天的 00:00:00
                     * @return StartTime 查询开始时间，默认为当天的 00:00:00
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询开始时间，默认为当天的 00:00:00
                     * @param _startTime 查询开始时间，默认为当天的 00:00:00
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
                     * 获取查询结束时间，默认为当前时间
                     * @return EndTime 查询结束时间，默认为当前时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询结束时间，默认为当前时间
                     * @param _endTime 查询结束时间，默认为当前时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 命名空间ID， 此参数必填
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 监控统计类型，必填，可选值：SumReqAmount、AvgFailureRate、AvgTimeCost，分别对应请求量、请求错误率、平均响应耗时
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 监控统计数据粒度，可选值：60、3600、86400，分别对应1分钟、1小时、1天
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 查询开始时间，默认为当天的 00:00:00
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束时间，默认为当前时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEOVERVIEWINVOCATIONREQUEST_H_
