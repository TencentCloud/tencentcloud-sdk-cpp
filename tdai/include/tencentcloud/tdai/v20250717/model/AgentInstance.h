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
#include <tencentcloud/tdai/v20250717/model/ClawConfigInfo.h>


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
                     * 获取<p>智能体实例ID</p>
                     * @return InstanceId <p>智能体实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>智能体实例ID</p>
                     * @param _instanceId <p>智能体实例ID</p>
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
                     * 获取<p>智能体实例名称</p>
                     * @return InstanceName <p>智能体实例名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>智能体实例名称</p>
                     * @param _instanceName <p>智能体实例名称</p>
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
                     * 获取<p>智能体名称</p>
                     * @return AgentName <p>智能体名称</p>
                     * 
                     */
                    std::string GetAgentName() const;

                    /**
                     * 设置<p>智能体名称</p>
                     * @param _agentName <p>智能体名称</p>
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
                     * 获取<p>智能体类型</p>
                     * @return AgentInternalName <p>智能体类型</p>
                     * 
                     */
                    std::string GetAgentInternalName() const;

                    /**
                     * 设置<p>智能体类型</p>
                     * @param _agentInternalName <p>智能体类型</p>
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
                     * 获取<p>智能体服务模式</p>
                     * @return AgentType <p>智能体服务模式</p>
                     * 
                     */
                    std::string GetAgentType() const;

                    /**
                     * 设置<p>智能体服务模式</p>
                     * @param _agentType <p>智能体服务模式</p>
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
                     * 获取<p>智能体实例状态</p>
                     * @return Status <p>智能体实例状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>智能体实例状态</p>
                     * @param _status <p>智能体实例状态</p>
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
                     * 获取<p>智能体实例参数列表</p>
                     * @return Parameters <p>智能体实例参数列表</p>
                     * 
                     */
                    std::vector<Parameter> GetParameters() const;

                    /**
                     * 设置<p>智能体实例参数列表</p>
                     * @param _parameters <p>智能体实例参数列表</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>修改时间</p>
                     * @return UpdateTime <p>修改时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>修改时间</p>
                     * @param _updateTime <p>修改时间</p>
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
                     * 获取<p>资源绑定Tag列表</p>
                     * @return Tags <p>资源绑定Tag列表</p>
                     * 
                     */
                    std::vector<TagItem> GetTags() const;

                    /**
                     * 设置<p>资源绑定Tag列表</p>
                     * @param _tags <p>资源绑定Tag列表</p>
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
                     * 获取<p>部署位置,intranet-共享版，userVpc-专享版</p>
                     * @return DeployPlace <p>部署位置,intranet-共享版，userVpc-专享版</p>
                     * 
                     */
                    std::string GetDeployPlace() const;

                    /**
                     * 设置<p>部署位置,intranet-共享版，userVpc-专享版</p>
                     * @param _deployPlace <p>部署位置,intranet-共享版，userVpc-专享版</p>
                     * 
                     */
                    void SetDeployPlace(const std::string& _deployPlace);

                    /**
                     * 判断参数 DeployPlace 是否已赋值
                     * @return DeployPlace 是否已赋值
                     * 
                     */
                    bool DeployPlaceHasBeenSet() const;

                    /**
                     * 获取<p>关联的告警策略ID。</p>
                     * @return PolicyIds <p>关联的告警策略ID。</p>
                     * 
                     */
                    std::vector<std::string> GetPolicyIds() const;

                    /**
                     * 设置<p>关联的告警策略ID。</p>
                     * @param _policyIds <p>关联的告警策略ID。</p>
                     * 
                     */
                    void SetPolicyIds(const std::vector<std::string>& _policyIds);

                    /**
                     * 判断参数 PolicyIds 是否已赋值
                     * @return PolicyIds 是否已赋值
                     * 
                     */
                    bool PolicyIdsHasBeenSet() const;

                    /**
                     * 获取<p>无</p>
                     * @return ClawConfig <p>无</p>
                     * 
                     */
                    ClawConfigInfo GetClawConfig() const;

                    /**
                     * 设置<p>无</p>
                     * @param _clawConfig <p>无</p>
                     * 
                     */
                    void SetClawConfig(const ClawConfigInfo& _clawConfig);

                    /**
                     * 判断参数 ClawConfig 是否已赋值
                     * @return ClawConfig 是否已赋值
                     * 
                     */
                    bool ClawConfigHasBeenSet() const;

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
                     * @return AllowedActions <p>无</p>
                     * 
                     */
                    std::vector<std::string> GetAllowedActions() const;

                    /**
                     * 设置<p>无</p>
                     * @param _allowedActions <p>无</p>
                     * 
                     */
                    void SetAllowedActions(const std::vector<std::string>& _allowedActions);

                    /**
                     * 判断参数 AllowedActions 是否已赋值
                     * @return AllowedActions 是否已赋值
                     * 
                     */
                    bool AllowedActionsHasBeenSet() const;

                    /**
                     * 获取<p>无</p>
                     * @return LastActiveTime <p>无</p>
                     * 
                     */
                    std::string GetLastActiveTime() const;

                    /**
                     * 设置<p>无</p>
                     * @param _lastActiveTime <p>无</p>
                     * 
                     */
                    void SetLastActiveTime(const std::string& _lastActiveTime);

                    /**
                     * 判断参数 LastActiveTime 是否已赋值
                     * @return LastActiveTime 是否已赋值
                     * 
                     */
                    bool LastActiveTimeHasBeenSet() const;

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
                     * <p>智能体实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>智能体实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>智能体ID</p>
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * <p>智能体名称</p>
                     */
                    std::string m_agentName;
                    bool m_agentNameHasBeenSet;

                    /**
                     * <p>智能体类型</p>
                     */
                    std::string m_agentInternalName;
                    bool m_agentInternalNameHasBeenSet;

                    /**
                     * <p>智能体服务模式</p>
                     */
                    std::string m_agentType;
                    bool m_agentTypeHasBeenSet;

                    /**
                     * <p>智能体版本</p>
                     */
                    std::string m_agentVersion;
                    bool m_agentVersionHasBeenSet;

                    /**
                     * <p>智能体实例状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>智能体实例参数列表</p>
                     */
                    std::vector<Parameter> m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>修改时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>资源绑定Tag列表</p>
                     */
                    std::vector<TagItem> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>部署位置,intranet-共享版，userVpc-专享版</p>
                     */
                    std::string m_deployPlace;
                    bool m_deployPlaceHasBeenSet;

                    /**
                     * <p>关联的告警策略ID。</p>
                     */
                    std::vector<std::string> m_policyIds;
                    bool m_policyIdsHasBeenSet;

                    /**
                     * <p>无</p>
                     */
                    ClawConfigInfo m_clawConfig;
                    bool m_clawConfigHasBeenSet;

                    /**
                     * <p>无</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>无</p>
                     */
                    std::vector<std::string> m_allowedActions;
                    bool m_allowedActionsHasBeenSet;

                    /**
                     * <p>无</p>
                     */
                    std::string m_lastActiveTime;
                    bool m_lastActiveTimeHasBeenSet;

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

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_AGENTINSTANCE_H_
