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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBEAGENTSREQUEST_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBEAGENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdai
    {
        namespace V20250717
        {
            namespace Model
            {
                /**
                * DescribeAgents请求参数结构体
                */
                class DescribeAgentsRequest : public AbstractModel
                {
                public:
                    DescribeAgentsRequest();
                    ~DescribeAgentsRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取智能体ID，为空时查询所有，如果填写则会根据AgentId筛选
                     * @return AgentId 智能体ID，为空时查询所有，如果填写则会根据AgentId筛选
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置智能体ID，为空时查询所有，如果填写则会根据AgentId筛选
                     * @param _agentId 智能体ID，为空时查询所有，如果填写则会根据AgentId筛选
                     * 
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * 
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取智能体名称，为空时查询所有，如果填写则会根据AgentName筛选
                     * @return AgentName 智能体名称，为空时查询所有，如果填写则会根据AgentName筛选
                     * 
                     */
                    std::string GetAgentName() const;

                    /**
                     * 设置智能体名称，为空时查询所有，如果填写则会根据AgentName筛选
                     * @param _agentName 智能体名称，为空时查询所有，如果填写则会根据AgentName筛选
                     * 
                     */
                    void SetAgentName(const std::string& _agentName);

                    /**
                     * 判断参数 AgentName 是否已赋值
                     * @return AgentName 是否已赋值
                     * 
                     */
                    bool AgentNameHasBeenSet() const;

                    /**
                     * 获取智能体类型，为空时查询所有，如果填写则会根据AgentName筛选
                     * @return AgentInternalName 智能体类型，为空时查询所有，如果填写则会根据AgentName筛选
                     * 
                     */
                    std::string GetAgentInternalName() const;

                    /**
                     * 设置智能体类型，为空时查询所有，如果填写则会根据AgentName筛选
                     * @param _agentInternalName 智能体类型，为空时查询所有，如果填写则会根据AgentName筛选
                     * 
                     */
                    void SetAgentInternalName(const std::string& _agentInternalName);

                    /**
                     * 判断参数 AgentInternalName 是否已赋值
                     * @return AgentInternalName 是否已赋值
                     * 
                     */
                    bool AgentInternalNameHasBeenSet() const;

                    /**
                     * 获取智能体状态，为空时查询所有，如果填写则会根据AgentStatus筛选
                     * @return AgentStatus 智能体状态，为空时查询所有，如果填写则会根据AgentStatus筛选
                     * 
                     */
                    std::string GetAgentStatus() const;

                    /**
                     * 设置智能体状态，为空时查询所有，如果填写则会根据AgentStatus筛选
                     * @param _agentStatus 智能体状态，为空时查询所有，如果填写则会根据AgentStatus筛选
                     * 
                     */
                    void SetAgentStatus(const std::string& _agentStatus);

                    /**
                     * 判断参数 AgentStatus 是否已赋值
                     * @return AgentStatus 是否已赋值
                     * 
                     */
                    bool AgentStatusHasBeenSet() const;

                private:

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
                     * 智能体ID，为空时查询所有，如果填写则会根据AgentId筛选
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * 智能体名称，为空时查询所有，如果填写则会根据AgentName筛选
                     */
                    std::string m_agentName;
                    bool m_agentNameHasBeenSet;

                    /**
                     * 智能体类型，为空时查询所有，如果填写则会根据AgentName筛选
                     */
                    std::string m_agentInternalName;
                    bool m_agentInternalNameHasBeenSet;

                    /**
                     * 智能体状态，为空时查询所有，如果填写则会根据AgentStatus筛选
                     */
                    std::string m_agentStatus;
                    bool m_agentStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBEAGENTSREQUEST_H_
