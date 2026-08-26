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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_AGENTINFO_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_AGENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/Tag.h>
#include <tencentcloud/monitor/v20230616/model/EnvVar.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * Agent 信息
                */
                class AgentInfo : public AbstractModel
                {
                public:
                    AgentInfo();
                    ~AgentInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Agent ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentId <p>Agent ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置<p>Agent ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agentId <p>Agent ID</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>Agent 名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>Agent 名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Agent 名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>Agent 名称</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>Agent 描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>Agent 描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Agent 描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>Agent 描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Agent 分类</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Category <p>Agent 分类</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置<p>Agent 分类</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _category <p>Agent 分类</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取<p>状态: draft/configured/running/standby/disabled</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>状态: draft/configured/running/standby/disabled</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态: draft/configured/running/standby/disabled</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>状态: draft/configured/running/standby/disabled</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>关联技能 ID 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SkillIds <p>关联技能 ID 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSkillIds() const;

                    /**
                     * 设置<p>关联技能 ID 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _skillIds <p>关联技能 ID 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSkillIds(const std::vector<std::string>& _skillIds);

                    /**
                     * 判断参数 SkillIds 是否已赋值
                     * @return SkillIds 是否已赋值
                     * 
                     */
                    bool SkillIdsHasBeenSet() const;

                    /**
                     * 获取<p>关联的资源地图 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceMapId <p>关联的资源地图 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceMapId() const;

                    /**
                     * 设置<p>关联的资源地图 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceMapId <p>关联的资源地图 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceMapId(const std::string& _resourceMapId);

                    /**
                     * 判断参数 ResourceMapId 是否已赋值
                     * @return ResourceMapId 是否已赋值
                     * 
                     */
                    bool ResourceMapIdHasBeenSet() const;

                    /**
                     * 获取<p>关联的mcp id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MCPIds <p>关联的mcp id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetMCPIds() const;

                    /**
                     * 设置<p>关联的mcp id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mCPIds <p>关联的mcp id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMCPIds(const std::vector<std::string>& _mCPIds);

                    /**
                     * 判断参数 MCPIds 是否已赋值
                     * @return MCPIds 是否已赋值
                     * 
                     */
                    bool MCPIdsHasBeenSet() const;

                    /**
                     * 获取<p>资源标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CamTags <p>资源标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetCamTags() const;

                    /**
                     * 设置<p>资源标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _camTags <p>资源标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCamTags(const std::vector<Tag>& _camTags);

                    /**
                     * 判断参数 CamTags 是否已赋值
                     * @return CamTags 是否已赋值
                     * 
                     */
                    bool CamTagsHasBeenSet() const;

                    /**
                     * 获取<p>agent运行时所需环境变量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnvVars <p>agent运行时所需环境变量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EnvVar> GetEnvVars() const;

                    /**
                     * 设置<p>agent运行时所需环境变量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _envVars <p>agent运行时所需环境变量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnvVars(const std::vector<EnvVar>& _envVars);

                    /**
                     * 判断参数 EnvVars 是否已赋值
                     * @return EnvVars 是否已赋值
                     * 
                     */
                    bool EnvVarsHasBeenSet() const;

                private:

                    /**
                     * <p>Agent ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * <p>Agent 名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Agent 描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Agent 分类</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>状态: draft/configured/running/standby/disabled</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>关联技能 ID 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_skillIds;
                    bool m_skillIdsHasBeenSet;

                    /**
                     * <p>关联的资源地图 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceMapId;
                    bool m_resourceMapIdHasBeenSet;

                    /**
                     * <p>关联的mcp id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_mCPIds;
                    bool m_mCPIdsHasBeenSet;

                    /**
                     * <p>资源标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_camTags;
                    bool m_camTagsHasBeenSet;

                    /**
                     * <p>agent运行时所需环境变量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EnvVar> m_envVars;
                    bool m_envVarsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_AGENTINFO_H_
