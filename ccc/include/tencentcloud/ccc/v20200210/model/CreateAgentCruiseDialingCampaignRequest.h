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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CREATEAGENTCRUISEDIALINGCAMPAIGNREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CREATEAGENTCRUISEDIALINGCAMPAIGNREQUEST_H_

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
                * CreateAgentCruiseDialingCampaign请求参数结构体
                */
                class CreateAgentCruiseDialingCampaignRequest : public AbstractModel
                {
                public:
                    CreateAgentCruiseDialingCampaignRequest();
                    ~CreateAgentCruiseDialingCampaignRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @return SdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @param _sdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取任务名称
                     * @return Name 任务名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置任务名称
                     * @param _name 任务名称
                     * 
                     */
                    void SetName(const std::string& _name);

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
                     * 设置座席账号
                     * @param _agent 座席账号
                     * 
                     */
                    void SetAgent(const std::string& _agent);

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
                     * 设置单轮并发呼叫量 1-20
                     * @param _concurrencyNumber 单轮并发呼叫量 1-20
                     * 
                     */
                    void SetConcurrencyNumber(const int64_t& _concurrencyNumber);

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
                     * 设置任务启动时间，Unix 时间戳，到此时间后会自动启动任务
                     * @param _startTime 任务启动时间，Unix 时间戳，到此时间后会自动启动任务
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

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
                     * 设置任务结束时间，Unix 时间戳，到此时间后会自动终止任务
                     * @param _endTime 任务结束时间，Unix 时间戳，到此时间后会自动终止任务
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取被叫列表，支持 E.164 或不带国家码形式的号码
                     * @return Callees 被叫列表，支持 E.164 或不带国家码形式的号码
                     * 
                     */
                    std::vector<std::string> GetCallees() const;

                    /**
                     * 设置被叫列表，支持 E.164 或不带国家码形式的号码
                     * @param _callees 被叫列表，支持 E.164 或不带国家码形式的号码
                     * 
                     */
                    void SetCallees(const std::vector<std::string>& _callees);

                    /**
                     * 判断参数 Callees 是否已赋值
                     * @return Callees 是否已赋值
                     * 
                     */
                    bool CalleesHasBeenSet() const;

                    /**
                     * 获取主叫列表，使用管理端展示的号码格式
                     * @return Callers 主叫列表，使用管理端展示的号码格式
                     * 
                     */
                    std::vector<std::string> GetCallers() const;

                    /**
                     * 设置主叫列表，使用管理端展示的号码格式
                     * @param _callers 主叫列表，使用管理端展示的号码格式
                     * 
                     */
                    void SetCallers(const std::vector<std::string>& _callers);

                    /**
                     * 判断参数 Callers 是否已赋值
                     * @return Callers 是否已赋值
                     * 
                     */
                    bool CallersHasBeenSet() const;

                    /**
                     * 获取被叫呼叫顺序 0 随机 1 顺序
                     * @return CallOrder 被叫呼叫顺序 0 随机 1 顺序
                     * 
                     */
                    int64_t GetCallOrder() const;

                    /**
                     * 设置被叫呼叫顺序 0 随机 1 顺序
                     * @param _callOrder 被叫呼叫顺序 0 随机 1 顺序
                     * 
                     */
                    void SetCallOrder(const int64_t& _callOrder);

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
                     * 设置调用方自定义数据，最大长度 1024
                     * @param _uUI 调用方自定义数据，最大长度 1024
                     * 
                     */
                    void SetUUI(const std::string& _uUI);

                    /**
                     * 判断参数 UUI 是否已赋值
                     * @return UUI 是否已赋值
                     * 
                     */
                    bool UUIHasBeenSet() const;

                private:

                    /**
                     * 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

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
                     * 被叫列表，支持 E.164 或不带国家码形式的号码
                     */
                    std::vector<std::string> m_callees;
                    bool m_calleesHasBeenSet;

                    /**
                     * 主叫列表，使用管理端展示的号码格式
                     */
                    std::vector<std::string> m_callers;
                    bool m_callersHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CREATEAGENTCRUISEDIALINGCAMPAIGNREQUEST_H_
