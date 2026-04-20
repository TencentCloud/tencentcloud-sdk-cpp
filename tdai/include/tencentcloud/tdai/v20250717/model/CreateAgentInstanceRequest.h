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
                     * 获取<p>智能体ID</p>
                     * @return AgentId <p>智能体ID</p>
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置<p>智能体ID</p>
                     * @param _agentId <p>智能体ID</p>
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
                     * 获取<p>智能体版本</p>
                     * @return AgentVersion <p>智能体版本</p>
                     * 
                     */
                    std::string GetAgentVersion() const;

                    /**
                     * 设置<p>智能体版本</p>
                     * @param _agentVersion <p>智能体版本</p>
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
                     * 获取<p>实例名</p>
                     * @return InstanceName <p>实例名</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名</p>
                     * @param _instanceName <p>实例名</p>
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
                     * 获取<p>智能体实例的参数列表</p>
                     * @return Parameters <p>智能体实例的参数列表</p>
                     * 
                     */
                    std::vector<Parameter> GetParameters() const;

                    /**
                     * 设置<p>智能体实例的参数列表</p>
                     * @param _parameters <p>智能体实例的参数列表</p>
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
                     * 获取<p>资源的标签信息</p>
                     * @return Tags <p>资源的标签信息</p>
                     * 
                     */
                    std::vector<TagItem> GetTags() const;

                    /**
                     * 设置<p>资源的标签信息</p>
                     * @param _tags <p>资源的标签信息</p>
                     * 
                     */
                    void SetTags(const std::vector<TagItem>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>无</p>
                     * @return InstanceType <p>无</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>无</p>
                     * @param _instanceType <p>无</p>
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>无</p>
                     * @return TemplateId <p>无</p>
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置<p>无</p>
                     * @param _templateId <p>无</p>
                     * 
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>无</p>
                     * @return Skills <p>无</p>
                     * 
                     */
                    std::vector<std::string> GetSkills() const;

                    /**
                     * 设置<p>无</p>
                     * @param _skills <p>无</p>
                     * 
                     */
                    void SetSkills(const std::vector<std::string>& _skills);

                    /**
                     * 判断参数 Skills 是否已赋值
                     * @return Skills 是否已赋值
                     * 
                     */
                    bool SkillsHasBeenSet() const;

                    /**
                     * 获取<p>无</p>
                     * @return SoulId <p>无</p>
                     * 
                     */
                    int64_t GetSoulId() const;

                    /**
                     * 设置<p>无</p>
                     * @param _soulId <p>无</p>
                     * 
                     */
                    void SetSoulId(const int64_t& _soulId);

                    /**
                     * 判断参数 SoulId 是否已赋值
                     * @return SoulId 是否已赋值
                     * 
                     */
                    bool SoulIdHasBeenSet() const;

                    /**
                     * 获取<p>无</p>
                     * @return Description <p>无</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>无</p>
                     * @param _description <p>无</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>智能体ID</p>
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * <p>智能体版本</p>
                     */
                    std::string m_agentVersion;
                    bool m_agentVersionHasBeenSet;

                    /**
                     * <p>实例名</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>智能体实例的参数列表</p>
                     */
                    std::vector<Parameter> m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * <p>资源的标签信息</p>
                     */
                    std::vector<TagItem> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>无</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>无</p>
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>无</p>
                     */
                    std::vector<std::string> m_skills;
                    bool m_skillsHasBeenSet;

                    /**
                     * <p>无</p>
                     */
                    int64_t m_soulId;
                    bool m_soulIdHasBeenSet;

                    /**
                     * <p>无</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_CREATEAGENTINSTANCEREQUEST_H_
