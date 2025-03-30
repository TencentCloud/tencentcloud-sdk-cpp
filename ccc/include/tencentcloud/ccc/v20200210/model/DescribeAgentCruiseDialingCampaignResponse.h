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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEAGENTCRUISEDIALINGCAMPAIGNRESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEAGENTCRUISEDIALINGCAMPAIGNRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeAgentCruiseDialingCampaign返回参数结构体
                */
                class DescribeAgentCruiseDialingCampaignResponse : public AbstractModel
                {
                public:
                    DescribeAgentCruiseDialingCampaignResponse();
                    ~DescribeAgentCruiseDialingCampaignResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务名称
                     * @return Name 任务名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取座席账号
                     * @return Agent 座席账号
                     * 
                     */
                    std::string GetAgent() const;

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取单轮并发呼叫量 1-20
                     * @return ConcurrencyNumber 单轮并发呼叫量 1-20
                     * 
                     */
                    int64_t GetConcurrencyNumber() const;

                    /**
                     * 判断参数 ConcurrencyNumber 是否已赋值
                     * @return ConcurrencyNumber 是否已赋值
                     * 
                     */
                    bool ConcurrencyNumberHasBeenSet() const;

                    /**
                     * 获取任务启动时间，Unix 时间戳，到此时间后会自动启动任务
                     * @return StartTime 任务启动时间，Unix 时间戳，到此时间后会自动启动任务
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取任务结束时间，Unix 时间戳，到此时间后会自动终止任务
                     * @return EndTime 任务结束时间，Unix 时间戳，到此时间后会自动终止任务
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取被叫呼叫顺序 0 随机 1 顺序
                     * @return CallOrder 被叫呼叫顺序 0 随机 1 顺序
                     * 
                     */
                    int64_t GetCallOrder() const;

                    /**
                     * 判断参数 CallOrder 是否已赋值
                     * @return CallOrder 是否已赋值
                     * 
                     */
                    bool CallOrderHasBeenSet() const;

                    /**
                     * 获取调用方自定义数据，最大长度 1024
                     * @return UUI 调用方自定义数据，最大长度 1024
                     * 
                     */
                    std::string GetUUI() const;

                    /**
                     * 判断参数 UUI 是否已赋值
                     * @return UUI 是否已赋值
                     * 
                     */
                    bool UUIHasBeenSet() const;

                    /**
                     * 获取任务状态 0 未启动 1 运行中 2 已完成 3 已终止
                     * @return State 任务状态 0 未启动 1 运行中 2 已完成 3 已终止
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取被叫总数
                     * @return TotalCalleeCount 被叫总数
                     * 
                     */
                    int64_t GetTotalCalleeCount() const;

                    /**
                     * 判断参数 TotalCalleeCount 是否已赋值
                     * @return TotalCalleeCount 是否已赋值
                     * 
                     */
                    bool TotalCalleeCountHasBeenSet() const;

                    /**
                     * 获取已呼被叫数
                     * @return CalledCalleeCount 已呼被叫数
                     * 
                     */
                    int64_t GetCalledCalleeCount() const;

                    /**
                     * 判断参数 CalledCalleeCount 是否已赋值
                     * @return CalledCalleeCount 是否已赋值
                     * 
                     */
                    bool CalledCalleeCountHasBeenSet() const;

                private:

                    /**
                     * 任务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 座席账号
                     */
                    std::string m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 单轮并发呼叫量 1-20
                     */
                    int64_t m_concurrencyNumber;
                    bool m_concurrencyNumberHasBeenSet;

                    /**
                     * 任务启动时间，Unix 时间戳，到此时间后会自动启动任务
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 任务结束时间，Unix 时间戳，到此时间后会自动终止任务
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 被叫呼叫顺序 0 随机 1 顺序
                     */
                    int64_t m_callOrder;
                    bool m_callOrderHasBeenSet;

                    /**
                     * 调用方自定义数据，最大长度 1024
                     */
                    std::string m_uUI;
                    bool m_uUIHasBeenSet;

                    /**
                     * 任务状态 0 未启动 1 运行中 2 已完成 3 已终止
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 被叫总数
                     */
                    int64_t m_totalCalleeCount;
                    bool m_totalCalleeCountHasBeenSet;

                    /**
                     * 已呼被叫数
                     */
                    int64_t m_calledCalleeCount;
                    bool m_calledCalleeCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEAGENTCRUISEDIALINGCAMPAIGNRESPONSE_H_
