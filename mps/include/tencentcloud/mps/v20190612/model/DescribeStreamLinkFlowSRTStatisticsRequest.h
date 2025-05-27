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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESTREAMLINKFLOWSRTSTATISTICSREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESTREAMLINKFLOWSRTSTATISTICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeStreamLinkFlowSRTStatistics请求参数结构体
                */
                class DescribeStreamLinkFlowSRTStatisticsRequest : public AbstractModel
                {
                public:
                    DescribeStreamLinkFlowSRTStatisticsRequest();
                    ~DescribeStreamLinkFlowSRTStatisticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取传输流ID。
                     * @return FlowId 传输流ID。
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置传输流ID。
                     * @param _flowId 传输流ID。
                     * 
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取输入或输出类型，可选[input|output]。
                     * @return Type 输入或输出类型，可选[input|output]。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置输入或输出类型，可选[input|output]。
                     * @param _type 输入或输出类型，可选[input|output]。
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
                     * 获取输入或输出Id。
                     * @return InputOutputId 输入或输出Id。
                     * 
                     */
                    std::string GetInputOutputId() const;

                    /**
                     * 设置输入或输出Id。
                     * @param _inputOutputId 输入或输出Id。
                     * 
                     */
                    void SetInputOutputId(const std::string& _inputOutputId);

                    /**
                     * 判断参数 InputOutputId 是否已赋值
                     * @return InputOutputId 是否已赋值
                     * 
                     */
                    bool InputOutputIdHasBeenSet() const;

                    /**
                     * 获取主通道或备通道，可选[0|1]。
                     * @return Pipeline 主通道或备通道，可选[0|1]。
                     * 
                     */
                    std::string GetPipeline() const;

                    /**
                     * 设置主通道或备通道，可选[0|1]。
                     * @param _pipeline 主通道或备通道，可选[0|1]。
                     * 
                     */
                    void SetPipeline(const std::string& _pipeline);

                    /**
                     * 判断参数 Pipeline 是否已赋值
                     * @return Pipeline 是否已赋值
                     * 
                     */
                    bool PipelineHasBeenSet() const;

                    /**
                     * 获取统计的开始时间，默认为前一小时，最多支持查询近7天。
UTC时间，如'2020-01-01T12:00:00Z'。
                     * @return StartTime 统计的开始时间，默认为前一小时，最多支持查询近7天。
UTC时间，如'2020-01-01T12:00:00Z'。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置统计的开始时间，默认为前一小时，最多支持查询近7天。
UTC时间，如'2020-01-01T12:00:00Z'。
                     * @param _startTime 统计的开始时间，默认为前一小时，最多支持查询近7天。
UTC时间，如'2020-01-01T12:00:00Z'。
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
                     * 获取统计的结束时间，默认为StartTime后一小时，最多支持查询24小时的数据。
UTC时间，如'2020-01-01T12:00:00Z'。
                     * @return EndTime 统计的结束时间，默认为StartTime后一小时，最多支持查询24小时的数据。
UTC时间，如'2020-01-01T12:00:00Z'。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置统计的结束时间，默认为StartTime后一小时，最多支持查询24小时的数据。
UTC时间，如'2020-01-01T12:00:00Z'。
                     * @param _endTime 统计的结束时间，默认为StartTime后一小时，最多支持查询24小时的数据。
UTC时间，如'2020-01-01T12:00:00Z'。
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
                     * 获取查询间隔，可选[5s|1min|5min|15min]。
                     * @return Period 查询间隔，可选[5s|1min|5min|15min]。
                     * 
                     */
                    std::string GetPeriod() const;

                    /**
                     * 设置查询间隔，可选[5s|1min|5min|15min]。
                     * @param _period 查询间隔，可选[5s|1min|5min|15min]。
                     * 
                     */
                    void SetPeriod(const std::string& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取对端客户端或者服务端的IP地址
                     * @return RemoteIp 对端客户端或者服务端的IP地址
                     * 
                     */
                    std::string GetRemoteIp() const;

                    /**
                     * 设置对端客户端或者服务端的IP地址
                     * @param _remoteIp 对端客户端或者服务端的IP地址
                     * 
                     */
                    void SetRemoteIp(const std::string& _remoteIp);

                    /**
                     * 判断参数 RemoteIp 是否已赋值
                     * @return RemoteIp 是否已赋值
                     * 
                     */
                    bool RemoteIpHasBeenSet() const;

                private:

                    /**
                     * 传输流ID。
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 输入或输出类型，可选[input|output]。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 输入或输出Id。
                     */
                    std::string m_inputOutputId;
                    bool m_inputOutputIdHasBeenSet;

                    /**
                     * 主通道或备通道，可选[0|1]。
                     */
                    std::string m_pipeline;
                    bool m_pipelineHasBeenSet;

                    /**
                     * 统计的开始时间，默认为前一小时，最多支持查询近7天。
UTC时间，如'2020-01-01T12:00:00Z'。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 统计的结束时间，默认为StartTime后一小时，最多支持查询24小时的数据。
UTC时间，如'2020-01-01T12:00:00Z'。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 查询间隔，可选[5s|1min|5min|15min]。
                     */
                    std::string m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 对端客户端或者服务端的IP地址
                     */
                    std::string m_remoteIp;
                    bool m_remoteIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESTREAMLINKFLOWSRTSTATISTICSREQUEST_H_
