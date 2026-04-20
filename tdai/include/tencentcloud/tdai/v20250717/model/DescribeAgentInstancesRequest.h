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
                     * 获取<p>实例ID，为空时查询所有，如果填写则会根据InstanceId筛选</p>
                     * @return InstanceId <p>实例ID，为空时查询所有，如果填写则会根据InstanceId筛选</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID，为空时查询所有，如果填写则会根据InstanceId筛选</p>
                     * @param _instanceId <p>实例ID，为空时查询所有，如果填写则会根据InstanceId筛选</p>
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
                     * 获取<p>实例名，为空时查询所有，如果填写则会根据InstanceName筛选</p>
                     * @return InstanceName <p>实例名，为空时查询所有，如果填写则会根据InstanceName筛选</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名，为空时查询所有，如果填写则会根据InstanceName筛选</p>
                     * @param _instanceName <p>实例名，为空时查询所有，如果填写则会根据InstanceName筛选</p>
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
                     * 获取<p>智能体ID，为空时查询所有，如果填写则会根据AgentId筛选</p>
                     * @return AgentId <p>智能体ID，为空时查询所有，如果填写则会根据AgentId筛选</p>
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置<p>智能体ID，为空时查询所有，如果填写则会根据AgentId筛选</p>
                     * @param _agentId <p>智能体ID，为空时查询所有，如果填写则会根据AgentId筛选</p>
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
                     * 获取<p>智能体名称，为空时查询所有，如果填写则会根据AgentName筛选</p>
                     * @return AgentName <p>智能体名称，为空时查询所有，如果填写则会根据AgentName筛选</p>
                     * 
                     */
                    std::string GetAgentName() const;

                    /**
                     * 设置<p>智能体名称，为空时查询所有，如果填写则会根据AgentName筛选</p>
                     * @param _agentName <p>智能体名称，为空时查询所有，如果填写则会根据AgentName筛选</p>
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
                     * 获取<p>智能体类型，为空时查询所有，如果填写则会根据AgentName筛选</p>
                     * @return AgentInternalName <p>智能体类型，为空时查询所有，如果填写则会根据AgentName筛选</p>
                     * 
                     */
                    std::string GetAgentInternalName() const;

                    /**
                     * 设置<p>智能体类型，为空时查询所有，如果填写则会根据AgentName筛选</p>
                     * @param _agentInternalName <p>智能体类型，为空时查询所有，如果填写则会根据AgentName筛选</p>
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
                     * 获取<p>智能体实例状态，为空时查询所有，如果填写则会根据Status筛选</p>
                     * @return Status <p>智能体实例状态，为空时查询所有，如果填写则会根据Status筛选</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>智能体实例状态，为空时查询所有，如果填写则会根据Status筛选</p>
                     * @param _status <p>智能体实例状态，为空时查询所有，如果填写则会根据Status筛选</p>
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
                     * 获取<p>标签过滤信息</p>
                     * @return TagFilter <p>标签过滤信息</p>
                     * 
                     */
                    std::vector<TagFilter> GetTagFilter() const;

                    /**
                     * 设置<p>标签过滤信息</p>
                     * @param _tagFilter <p>标签过滤信息</p>
                     * 
                     */
                    void SetTagFilter(const std::vector<TagFilter>& _tagFilter);

                    /**
                     * 判断参数 TagFilter 是否已赋值
                     * @return TagFilter 是否已赋值
                     * 
                     */
                    bool TagFilterHasBeenSet() const;

                    /**
                     * 获取<p>实例类型</p>
                     * @return InstanceType <p>实例类型</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>实例类型</p>
                     * @param _instanceType <p>实例类型</p>
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

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
                     * <p>实例ID，为空时查询所有，如果填写则会根据InstanceId筛选</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例名，为空时查询所有，如果填写则会根据InstanceName筛选</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>智能体ID，为空时查询所有，如果填写则会根据AgentId筛选</p>
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * <p>智能体名称，为空时查询所有，如果填写则会根据AgentName筛选</p>
                     */
                    std::string m_agentName;
                    bool m_agentNameHasBeenSet;

                    /**
                     * <p>智能体类型，为空时查询所有，如果填写则会根据AgentName筛选</p>
                     */
                    std::string m_agentInternalName;
                    bool m_agentInternalNameHasBeenSet;

                    /**
                     * <p>智能体实例状态，为空时查询所有，如果填写则会根据Status筛选</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>标签过滤信息</p>
                     */
                    std::vector<TagFilter> m_tagFilter;
                    bool m_tagFilterHasBeenSet;

                    /**
                     * <p>实例类型</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBEAGENTINSTANCESREQUEST_H_
