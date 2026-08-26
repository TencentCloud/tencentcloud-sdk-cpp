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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_CREATEAIWORKBENCHAGENTREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_CREATEAIWORKBENCHAGENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/InstructionConfig.h>
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
                * CreateAIWorkbenchAgent请求参数结构体
                */
                class CreateAIWorkbenchAgentRequest : public AbstractModel
                {
                public:
                    CreateAIWorkbenchAgentRequest();
                    ~CreateAIWorkbenchAgentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Agent 名称</p>
                     * @return Name <p>Agent 名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Agent 名称</p>
                     * @param _name <p>Agent 名称</p>
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
                     * @return Description <p>Agent 描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Agent 描述</p>
                     * @param _description <p>Agent 描述</p>
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
                     * @return Category <p>Agent 分类</p>
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置<p>Agent 分类</p>
                     * @param _category <p>Agent 分类</p>
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
                     * 获取<p>Agent 标签</p>
                     * @return Tags <p>Agent 标签</p>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置<p>Agent 标签</p>
                     * @param _tags <p>Agent 标签</p>
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>Agent 提示词</p>
                     * @return Instruction <p>Agent 提示词</p>
                     * 
                     */
                    InstructionConfig GetInstruction() const;

                    /**
                     * 设置<p>Agent 提示词</p>
                     * @param _instruction <p>Agent 提示词</p>
                     * 
                     */
                    void SetInstruction(const InstructionConfig& _instruction);

                    /**
                     * 判断参数 Instruction 是否已赋值
                     * @return Instruction 是否已赋值
                     * 
                     */
                    bool InstructionHasBeenSet() const;

                    /**
                     * 获取<p>关联技能 ID 列表</p>
                     * @return SkillIds <p>关联技能 ID 列表</p>
                     * 
                     */
                    std::vector<std::string> GetSkillIds() const;

                    /**
                     * 设置<p>关联技能 ID 列表</p>
                     * @param _skillIds <p>关联技能 ID 列表</p>
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
                     * 获取<p>来源: builtin / custom</p>
                     * @return Source <p>来源: builtin / custom</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>来源: builtin / custom</p>
                     * @param _source <p>来源: builtin / custom</p>
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>关联的资源地图 ID</p>
                     * @return ResourceMapId <p>关联的资源地图 ID</p>
                     * 
                     */
                    std::string GetResourceMapId() const;

                    /**
                     * 设置<p>关联的资源地图 ID</p>
                     * @param _resourceMapId <p>关联的资源地图 ID</p>
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
                     * 获取<p>关联的mcp工具</p>
                     * @return MCPIds <p>关联的mcp工具</p>
                     * 
                     */
                    std::vector<std::string> GetMCPIds() const;

                    /**
                     * 设置<p>关联的mcp工具</p>
                     * @param _mCPIds <p>关联的mcp工具</p>
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
                     * @return CamTags <p>资源标签</p>
                     * 
                     */
                    std::vector<Tag> GetCamTags() const;

                    /**
                     * 设置<p>资源标签</p>
                     * @param _camTags <p>资源标签</p>
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
                     * 获取<p>agent运行时环境变量</p>
                     * @return EnvVars <p>agent运行时环境变量</p>
                     * 
                     */
                    std::vector<EnvVar> GetEnvVars() const;

                    /**
                     * 设置<p>agent运行时环境变量</p>
                     * @param _envVars <p>agent运行时环境变量</p>
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
                     * <p>Agent 名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Agent 描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Agent 分类</p>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>Agent 标签</p>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Agent 提示词</p>
                     */
                    InstructionConfig m_instruction;
                    bool m_instructionHasBeenSet;

                    /**
                     * <p>关联技能 ID 列表</p>
                     */
                    std::vector<std::string> m_skillIds;
                    bool m_skillIdsHasBeenSet;

                    /**
                     * <p>来源: builtin / custom</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>关联的资源地图 ID</p>
                     */
                    std::string m_resourceMapId;
                    bool m_resourceMapIdHasBeenSet;

                    /**
                     * <p>关联的mcp工具</p>
                     */
                    std::vector<std::string> m_mCPIds;
                    bool m_mCPIdsHasBeenSet;

                    /**
                     * <p>资源标签</p>
                     */
                    std::vector<Tag> m_camTags;
                    bool m_camTagsHasBeenSet;

                    /**
                     * <p>agent运行时环境变量</p>
                     */
                    std::vector<EnvVar> m_envVars;
                    bool m_envVarsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_CREATEAIWORKBENCHAGENTREQUEST_H_
