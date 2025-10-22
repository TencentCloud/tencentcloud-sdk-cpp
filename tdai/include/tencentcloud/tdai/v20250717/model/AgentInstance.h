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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_AGENTINSTANCE_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_AGENTINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 智能体实例
                */
                class AgentInstance : public AbstractModel
                {
                public:
                    AgentInstance();
                    ~AgentInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取智能体实例ID
                     * @return InstanceId 智能体实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置智能体实例ID
                     * @param _instanceId 智能体实例ID
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
                     * 获取智能体实例名称
                     * @return InstanceName 智能体实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置智能体实例名称
                     * @param _instanceName 智能体实例名称
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
                     * 获取智能体名称
                     * @return AgentName 智能体名称
                     * 
                     */
                    std::string GetAgentName() const;

                    /**
                     * 设置智能体名称
                     * @param _agentName 智能体名称
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
                     * 获取智能体类型
                     * @return AgentInternalName 智能体类型
                     * 
                     */
                    std::string GetAgentInternalName() const;

                    /**
                     * 设置智能体类型
                     * @param _agentInternalName 智能体类型
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
                     * 获取智能体服务模式
                     * @return AgentType 智能体服务模式
                     * 
                     */
                    std::string GetAgentType() const;

                    /**
                     * 设置智能体服务模式
                     * @param _agentType 智能体服务模式
                     * 
                     */
                    void SetAgentType(const std::string& _agentType);

                    /**
                     * 判断参数 AgentType 是否已赋值
                     * @return AgentType 是否已赋值
                     * 
                     */
                    bool AgentTypeHasBeenSet() const;

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
                     * 获取智能体实例状态
                     * @return Status 智能体实例状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置智能体实例状态
                     * @param _status 智能体实例状态
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
                     * 获取智能体实例参数列表
                     * @return Parameters 智能体实例参数列表
                     * 
                     */
                    std::vector<Parameter> GetParameters() const;

                    /**
                     * 设置智能体实例参数列表
                     * @param _parameters 智能体实例参数列表
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return UpdateTime 修改时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置修改时间
                     * @param _updateTime 修改时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取资源绑定Tag列表
                     * @return Tags 资源绑定Tag列表
                     * 
                     */
                    std::vector<TagItem> GetTags() const;

                    /**
                     * 设置资源绑定Tag列表
                     * @param _tags 资源绑定Tag列表
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
                     * 智能体实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 智能体实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 智能体ID
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * 智能体名称
                     */
                    std::string m_agentName;
                    bool m_agentNameHasBeenSet;

                    /**
                     * 智能体类型
                     */
                    std::string m_agentInternalName;
                    bool m_agentInternalNameHasBeenSet;

                    /**
                     * 智能体服务模式
                     */
                    std::string m_agentType;
                    bool m_agentTypeHasBeenSet;

                    /**
                     * 智能体版本
                     */
                    std::string m_agentVersion;
                    bool m_agentVersionHasBeenSet;

                    /**
                     * 智能体实例状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 智能体实例参数列表
                     */
                    std::vector<Parameter> m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 资源绑定Tag列表
                     */
                    std::vector<TagItem> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_AGENTINSTANCE_H_
