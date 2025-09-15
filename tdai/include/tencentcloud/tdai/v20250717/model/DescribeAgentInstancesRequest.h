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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBEAGENTINSTANCESREQUEST_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBEAGENTINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdai/v20250717/model/TagFilter.h>


namespace TencentCloud
{
    namespace Tdai
    {
        namespace V20250717
        {
            namespace Model
            {
                /**
                * DescribeAgentInstances请求参数结构体
                */
                class DescribeAgentInstancesRequest : public AbstractModel
                {
                public:
                    DescribeAgentInstancesRequest();
                    ~DescribeAgentInstancesRequest() = default;
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
                     * 获取实例ID，为空时查询所有，如果填写则会根据InstanceId筛选
                     * @return InstanceId 实例ID，为空时查询所有，如果填写则会根据InstanceId筛选
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，为空时查询所有，如果填写则会根据InstanceId筛选
                     * @param _instanceId 实例ID，为空时查询所有，如果填写则会根据InstanceId筛选
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
                     * 获取实例名，为空时查询所有，如果填写则会根据InstanceName筛选
                     * @return InstanceName 实例名，为空时查询所有，如果填写则会根据InstanceName筛选
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名，为空时查询所有，如果填写则会根据InstanceName筛选
                     * @param _instanceName 实例名，为空时查询所有，如果填写则会根据InstanceName筛选
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

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
                     * 获取智能体实例状态，为空时查询所有，如果填写则会根据Status筛选
                     * @return Status 智能体实例状态，为空时查询所有，如果填写则会根据Status筛选
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置智能体实例状态，为空时查询所有，如果填写则会根据Status筛选
                     * @param _status 智能体实例状态，为空时查询所有，如果填写则会根据Status筛选
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取标签过滤信息
                     * @return TagFilter 标签过滤信息
                     * 
                     */
                    std::vector<TagFilter> GetTagFilter() const;

                    /**
                     * 设置标签过滤信息
                     * @param _tagFilter 标签过滤信息
                     * 
                     */
                    void SetTagFilter(const std::vector<TagFilter>& _tagFilter);

                    /**
                     * 判断参数 TagFilter 是否已赋值
                     * @return TagFilter 是否已赋值
                     * 
                     */
                    bool TagFilterHasBeenSet() const;

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
                     * 实例ID，为空时查询所有，如果填写则会根据InstanceId筛选
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名，为空时查询所有，如果填写则会根据InstanceName筛选
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

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
                     * 智能体实例状态，为空时查询所有，如果填写则会根据Status筛选
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 标签过滤信息
                     */
                    std::vector<TagFilter> m_tagFilter;
                    bool m_tagFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBEAGENTINSTANCESREQUEST_H_
