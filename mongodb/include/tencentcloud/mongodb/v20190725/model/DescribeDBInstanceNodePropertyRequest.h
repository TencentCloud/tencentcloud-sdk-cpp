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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCENODEPROPERTYREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCENODEPROPERTYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/NodeTag.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeDBInstanceNodeProperty请求参数结构体
                */
                class DescribeDBInstanceNodePropertyRequest : public AbstractModel
                {
                public:
                    DescribeDBInstanceNodePropertyRequest();
                    ~DescribeDBInstanceNodePropertyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同。
                     * @return InstanceId 实例ID，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同。
                     * @param _instanceId 实例ID，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同。
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
                     * 获取节点ID。
                     * @return NodeIds 节点ID。
                     * 
                     */
                    std::vector<std::string> GetNodeIds() const;

                    /**
                     * 设置节点ID。
                     * @param _nodeIds 节点ID。
                     * 
                     */
                    void SetNodeIds(const std::vector<std::string>& _nodeIds);

                    /**
                     * 判断参数 NodeIds 是否已赋值
                     * @return NodeIds 是否已赋值
                     * 
                     */
                    bool NodeIdsHasBeenSet() const;

                    /**
                     * 获取节点角色。可选值包括：
<ul><li>PRIMARY：主节点。</li><li>SECONDARY：从节点。</li><li>READONLY：只读节点。</li><li>ARBITER：仲裁节点。</li></ul>
                     * @return Roles 节点角色。可选值包括：
<ul><li>PRIMARY：主节点。</li><li>SECONDARY：从节点。</li><li>READONLY：只读节点。</li><li>ARBITER：仲裁节点。</li></ul>
                     * 
                     */
                    std::vector<std::string> GetRoles() const;

                    /**
                     * 设置节点角色。可选值包括：
<ul><li>PRIMARY：主节点。</li><li>SECONDARY：从节点。</li><li>READONLY：只读节点。</li><li>ARBITER：仲裁节点。</li></ul>
                     * @param _roles 节点角色。可选值包括：
<ul><li>PRIMARY：主节点。</li><li>SECONDARY：从节点。</li><li>READONLY：只读节点。</li><li>ARBITER：仲裁节点。</li></ul>
                     * 
                     */
                    void SetRoles(const std::vector<std::string>& _roles);

                    /**
                     * 判断参数 Roles 是否已赋值
                     * @return Roles 是否已赋值
                     * 
                     */
                    bool RolesHasBeenSet() const;

                    /**
                     * 获取该参数指定节点是否为Hidden节点，默认为false。
                     * @return OnlyHidden 该参数指定节点是否为Hidden节点，默认为false。
                     * 
                     */
                    bool GetOnlyHidden() const;

                    /**
                     * 设置该参数指定节点是否为Hidden节点，默认为false。
                     * @param _onlyHidden 该参数指定节点是否为Hidden节点，默认为false。
                     * 
                     */
                    void SetOnlyHidden(const bool& _onlyHidden);

                    /**
                     * 判断参数 OnlyHidden 是否已赋值
                     * @return OnlyHidden 是否已赋值
                     * 
                     */
                    bool OnlyHiddenHasBeenSet() const;

                    /**
                     * 获取该参数指定选举新主节点的优先级。其取值范围为[0,100]，数值越高，优先级越高。
                     * @return Priority 该参数指定选举新主节点的优先级。其取值范围为[0,100]，数值越高，优先级越高。
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置该参数指定选举新主节点的优先级。其取值范围为[0,100]，数值越高，优先级越高。
                     * @param _priority 该参数指定选举新主节点的优先级。其取值范围为[0,100]，数值越高，优先级越高。
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取该参数指定节点投票权。
<ul><li>1：具有投票权。</li><li>0：无投票权。</li></ul>
                     * @return Votes 该参数指定节点投票权。
<ul><li>1：具有投票权。</li><li>0：无投票权。</li></ul>
                     * 
                     */
                    int64_t GetVotes() const;

                    /**
                     * 设置该参数指定节点投票权。
<ul><li>1：具有投票权。</li><li>0：无投票权。</li></ul>
                     * @param _votes 该参数指定节点投票权。
<ul><li>1：具有投票权。</li><li>0：无投票权。</li></ul>
                     * 
                     */
                    void SetVotes(const int64_t& _votes);

                    /**
                     * 判断参数 Votes 是否已赋值
                     * @return Votes 是否已赋值
                     * 
                     */
                    bool VotesHasBeenSet() const;

                    /**
                     * 获取节点标签。
                     * @return Tags 节点标签。
                     * 
                     */
                    std::vector<NodeTag> GetTags() const;

                    /**
                     * 设置节点标签。
                     * @param _tags 节点标签。
                     * 
                     */
                    void SetTags(const std::vector<NodeTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 实例ID，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 节点ID。
                     */
                    std::vector<std::string> m_nodeIds;
                    bool m_nodeIdsHasBeenSet;

                    /**
                     * 节点角色。可选值包括：
<ul><li>PRIMARY：主节点。</li><li>SECONDARY：从节点。</li><li>READONLY：只读节点。</li><li>ARBITER：仲裁节点。</li></ul>
                     */
                    std::vector<std::string> m_roles;
                    bool m_rolesHasBeenSet;

                    /**
                     * 该参数指定节点是否为Hidden节点，默认为false。
                     */
                    bool m_onlyHidden;
                    bool m_onlyHiddenHasBeenSet;

                    /**
                     * 该参数指定选举新主节点的优先级。其取值范围为[0,100]，数值越高，优先级越高。
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 该参数指定节点投票权。
<ul><li>1：具有投票权。</li><li>0：无投票权。</li></ul>
                     */
                    int64_t m_votes;
                    bool m_votesHasBeenSet;

                    /**
                     * 节点标签。
                     */
                    std::vector<NodeTag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCENODEPROPERTYREQUEST_H_
