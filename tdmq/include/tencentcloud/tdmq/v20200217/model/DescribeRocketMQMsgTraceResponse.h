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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQMSGTRACERESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQMSGTRACERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/TraceResult.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeRocketMQMsgTrace返回参数结构体
                */
                class DescribeRocketMQMsgTraceResponse : public AbstractModel
                {
                public:
                    DescribeRocketMQMsgTraceResponse();
                    ~DescribeRocketMQMsgTraceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取轨迹详情列表
                     * @return Result 轨迹详情列表
                     * 
                     */
                    std::vector<TraceResult> GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取消息轨迹页展示的topic名称
                     * @return ShowTopicName 消息轨迹页展示的topic名称
                     * 
                     */
                    std::string GetShowTopicName() const;

                    /**
                     * 判断参数 ShowTopicName 是否已赋值
                     * @return ShowTopicName 是否已赋值
                     * 
                     */
                    bool ShowTopicNameHasBeenSet() const;

                private:

                    /**
                     * 轨迹详情列表
                     */
                    std::vector<TraceResult> m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 消息轨迹页展示的topic名称
                     */
                    std::string m_showTopicName;
                    bool m_showTopicNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQMSGTRACERESPONSE_H_
