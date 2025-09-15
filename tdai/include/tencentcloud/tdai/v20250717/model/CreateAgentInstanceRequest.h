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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_CREATEAGENTINSTANCEREQUEST_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_CREATEAGENTINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdai/v20250717/model/Parameter.h>
#include <tencentcloud/tdai/v20250717/model/TagItem.h>


namespace TencentCloud
{
    namespace Tdai
    {
        namespace V20250717
        {
            namespace Model
            {
                /**
                * CreateAgentInstance请求参数结构体
                */
                class CreateAgentInstanceRequest : public AbstractModel
                {
                public:
                    CreateAgentInstanceRequest();
                    ~CreateAgentInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取智能体ID
                     * @return AgentId 智能体ID
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置智能体ID
                     * @param _agentId 智能体ID
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
                     * 获取智能体版本
                     * @return AgentVersion 智能体版本
                     * 
                     */
                    std::string GetAgentVersion() const;

                    /**
                     * 设置智能体版本
                     * @param _agentVersion 智能体版本
                     * 
                     */
                    void SetAgentVersion(const std::string& _agentVersion);

                    /**
                     * 判断参数 AgentVersion 是否已赋值
                     * @return AgentVersion 是否已赋值
                     * 
                     */
                    bool AgentVersionHasBeenSet() const;

                    /**
                     * 获取实例名
                     * @return InstanceName 实例名
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名
                     * @param _instanceName 实例名
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
                     * 获取智能体实例的参数列表
                     * @return Parameters 智能体实例的参数列表
                     * 
                     */
                    std::vector<Parameter> GetParameters() const;

                    /**
                     * 设置智能体实例的参数列表
                     * @param _parameters 智能体实例的参数列表
                     * 
                     */
                    void SetParameters(const std::vector<Parameter>& _parameters);

                    /**
                     * 判断参数 Parameters 是否已赋值
                     * @return Parameters 是否已赋值
                     * 
                     */
                    bool ParametersHasBeenSet() const;

                    /**
                     * 获取资源的标签信息
                     * @return Tags 资源的标签信息
                     * 
                     */
                    std::vector<TagItem> GetTags() const;

                    /**
                     * 设置资源的标签信息
                     * @param _tags 资源的标签信息
                     * 
                     */
                    void SetTags(const std::vector<TagItem>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 智能体ID
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * 智能体版本
                     */
                    std::string m_agentVersion;
                    bool m_agentVersionHasBeenSet;

                    /**
                     * 实例名
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 智能体实例的参数列表
                     */
                    std::vector<Parameter> m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * 资源的标签信息
                     */
                    std::vector<TagItem> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_CREATEAGENTINSTANCEREQUEST_H_
