/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBEAGENTDUTYTASKSREQUEST_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBEAGENTDUTYTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdai/v20250717/model/Parameter.h>


namespace TencentCloud
{
    namespace Tdai
    {
        namespace V20250717
        {
            namespace Model
            {
                /**
                * DescribeAgentDutyTasks请求参数结构体
                */
                class DescribeAgentDutyTasksRequest : public AbstractModel
                {
                public:
                    DescribeAgentDutyTasksRequest();
                    ~DescribeAgentDutyTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取agent实例ID
                     * @return InstanceId agent实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置agent实例ID
                     * @param _instanceId agent实例ID
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
                     * 获取会话ID
                     * @return ChatId 会话ID
                     * 
                     */
                    std::string GetChatId() const;

                    /**
                     * 设置会话ID
                     * @param _chatId 会话ID
                     * 
                     */
                    void SetChatId(const std::string& _chatId);

                    /**
                     * 判断参数 ChatId 是否已赋值
                     * @return ChatId 是否已赋值
                     * 
                     */
                    bool ChatIdHasBeenSet() const;

                    /**
                     * 获取查询开始位置
                     * @return Offset 查询开始位置
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置查询开始位置
                     * @param _offset 查询开始位置
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取列表查询数量
                     * @return Limit 列表查询数量
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置列表查询数量
                     * @param _limit 列表查询数量
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取任务启动时间
                     * @return StartTime 任务启动时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置任务启动时间
                     * @param _startTime 任务启动时间
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
                     * 获取任务结束时间
                     * @return EndTime 任务结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置任务结束时间
                     * @param _endTime 任务结束时间
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
                     * 获取任务类型
                     * @return AgentTaskType 任务类型
                     * 
                     */
                    std::string GetAgentTaskType() const;

                    /**
                     * 设置任务类型
                     * @param _agentTaskType 任务类型
                     * 
                     */
                    void SetAgentTaskType(const std::string& _agentTaskType);

                    /**
                     * 判断参数 AgentTaskType 是否已赋值
                     * @return AgentTaskType 是否已赋值
                     * 
                     */
                    bool AgentTaskTypeHasBeenSet() const;

                    /**
                     * 获取业务参数
                     * @return Parameters 业务参数
                     * 
                     */
                    std::vector<Parameter> GetParameters() const;

                    /**
                     * 设置业务参数
                     * @param _parameters 业务参数
                     * 
                     */
                    void SetParameters(const std::vector<Parameter>& _parameters);

                    /**
                     * 判断参数 Parameters 是否已赋值
                     * @return Parameters 是否已赋值
                     * 
                     */
                    bool ParametersHasBeenSet() const;

                private:

                    /**
                     * agent实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 会话ID
                     */
                    std::string m_chatId;
                    bool m_chatIdHasBeenSet;

                    /**
                     * 查询开始位置
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 列表查询数量
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 任务启动时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 任务结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 任务类型
                     */
                    std::string m_agentTaskType;
                    bool m_agentTaskTypeHasBeenSet;

                    /**
                     * 业务参数
                     */
                    std::vector<Parameter> m_parameters;
                    bool m_parametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBEAGENTDUTYTASKSREQUEST_H_
