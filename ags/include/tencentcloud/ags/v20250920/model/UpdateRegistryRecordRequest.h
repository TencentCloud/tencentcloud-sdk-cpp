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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_UPDATEREGISTRYRECORDREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_UPDATEREGISTRYRECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/CloudMCPSourceInput.h>
#include <tencentcloud/ags/v20250920/model/CloudAgentSourceInput.h>
#include <tencentcloud/ags/v20250920/model/CloudSkillSourceInput.h>
#include <tencentcloud/ags/v20250920/model/CloudRecordLabelMutation.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * UpdateRegistryRecord请求参数结构体
                */
                class UpdateRegistryRecordRequest : public AbstractModel
                {
                public:
                    UpdateRegistryRecordRequest();
                    ~UpdateRegistryRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Registry ID。</p>
                     * @return RegistryId <p>Registry ID。</p>
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置<p>Registry ID。</p>
                     * @param _registryId <p>Registry ID。</p>
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取<p>Record ID。</p>
                     * @return RecordId <p>Record ID。</p>
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置<p>Record ID。</p>
                     * @param _recordId <p>Record ID。</p>
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取<p>Record 描述，可选。Record 更新模式下允许，允许空字符串清空；Version 创建模式禁止。</p>
                     * @return Description <p>Record 描述，可选。Record 更新模式下允许，允许空字符串清空；Version 创建模式禁止。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Record 描述，可选。Record 更新模式下允许，允许空字符串清空；Version 创建模式禁止。</p>
                     * @param _description <p>Record 描述，可选。Record 更新模式下允许，允许空字符串清空；Version 创建模式禁止。</p>
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
                     * 获取<p>新 Version 的展示名，可选。仅 Version 创建模式允许。</p>
                     * @return VersionName <p>新 Version 的展示名，可选。仅 Version 创建模式允许。</p>
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置<p>新 Version 的展示名，可选。仅 Version 创建模式允许。</p>
                     * @param _versionName <p>新 Version 的展示名，可选。仅 Version 创建模式允许。</p>
                     * 
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     * 
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取<p>新 Version 的变更原因，最大 4096 字符，可选。仅 Version 创建模式允许。</p>
                     * @return ChangeLog <p>新 Version 的变更原因，最大 4096 字符，可选。仅 Version 创建模式允许。</p>
                     * 
                     */
                    std::string GetChangeLog() const;

                    /**
                     * 设置<p>新 Version 的变更原因，最大 4096 字符，可选。仅 Version 创建模式允许。</p>
                     * @param _changeLog <p>新 Version 的变更原因，最大 4096 字符，可选。仅 Version 创建模式允许。</p>
                     * 
                     */
                    void SetChangeLog(const std::string& _changeLog);

                    /**
                     * 判断参数 ChangeLog 是否已赋值
                     * @return ChangeLog 是否已赋值
                     * 
                     */
                    bool ChangeLogHasBeenSet() const;

                    /**
                     * 获取<p>Version 创建模式：现有 Record 的 DescriptorType=MCP 时可提交。</p>
                     * @return MCPSource <p>Version 创建模式：现有 Record 的 DescriptorType=MCP 时可提交。</p>
                     * 
                     */
                    CloudMCPSourceInput GetMCPSource() const;

                    /**
                     * 设置<p>Version 创建模式：现有 Record 的 DescriptorType=MCP 时可提交。</p>
                     * @param _mCPSource <p>Version 创建模式：现有 Record 的 DescriptorType=MCP 时可提交。</p>
                     * 
                     */
                    void SetMCPSource(const CloudMCPSourceInput& _mCPSource);

                    /**
                     * 判断参数 MCPSource 是否已赋值
                     * @return MCPSource 是否已赋值
                     * 
                     */
                    bool MCPSourceHasBeenSet() const;

                    /**
                     * 获取<p>Version 创建模式：现有 Record 的 DescriptorType=A2A 或 AGUI 时可提交。</p>
                     * @return AgentSource <p>Version 创建模式：现有 Record 的 DescriptorType=A2A 或 AGUI 时可提交。</p>
                     * 
                     */
                    CloudAgentSourceInput GetAgentSource() const;

                    /**
                     * 设置<p>Version 创建模式：现有 Record 的 DescriptorType=A2A 或 AGUI 时可提交。</p>
                     * @param _agentSource <p>Version 创建模式：现有 Record 的 DescriptorType=A2A 或 AGUI 时可提交。</p>
                     * 
                     */
                    void SetAgentSource(const CloudAgentSourceInput& _agentSource);

                    /**
                     * 判断参数 AgentSource 是否已赋值
                     * @return AgentSource 是否已赋值
                     * 
                     */
                    bool AgentSourceHasBeenSet() const;

                    /**
                     * 获取<p>Version 创建模式：现有 Record 的 DescriptorType=AGENT_SKILLS 时可提交。</p>
                     * @return SkillSource <p>Version 创建模式：现有 Record 的 DescriptorType=AGENT_SKILLS 时可提交。</p>
                     * 
                     */
                    CloudSkillSourceInput GetSkillSource() const;

                    /**
                     * 设置<p>Version 创建模式：现有 Record 的 DescriptorType=AGENT_SKILLS 时可提交。</p>
                     * @param _skillSource <p>Version 创建模式：现有 Record 的 DescriptorType=AGENT_SKILLS 时可提交。</p>
                     * 
                     */
                    void SetSkillSource(const CloudSkillSourceInput& _skillSource);

                    /**
                     * 判断参数 SkillSource 是否已赋值
                     * @return SkillSource 是否已赋值
                     * 
                     */
                    bool SkillSourceHasBeenSet() const;

                    /**
                     * 获取<p>Version 创建模式：现有 Record 的 DescriptorType=CUSTOM 时可提交，必须是 JSON object 字符串。</p>
                     * @return CustomDescriptors <p>Version 创建模式：现有 Record 的 DescriptorType=CUSTOM 时可提交，必须是 JSON object 字符串。</p>
                     * 
                     */
                    std::string GetCustomDescriptors() const;

                    /**
                     * 设置<p>Version 创建模式：现有 Record 的 DescriptorType=CUSTOM 时可提交，必须是 JSON object 字符串。</p>
                     * @param _customDescriptors <p>Version 创建模式：现有 Record 的 DescriptorType=CUSTOM 时可提交，必须是 JSON object 字符串。</p>
                     * 
                     */
                    void SetCustomDescriptors(const std::string& _customDescriptors);

                    /**
                     * 判断参数 CustomDescriptors 是否已赋值
                     * @return CustomDescriptors 是否已赋值
                     * 
                     */
                    bool CustomDescriptorsHasBeenSet() const;

                    /**
                     * 获取<p>Record 更新模式：Label 变更列表，最多 32 条，同一次请求中 Label Name 不可重复。</p>
                     * @return LabelMutations <p>Record 更新模式：Label 变更列表，最多 32 条，同一次请求中 Label Name 不可重复。</p>
                     * 
                     */
                    std::vector<CloudRecordLabelMutation> GetLabelMutations() const;

                    /**
                     * 设置<p>Record 更新模式：Label 变更列表，最多 32 条，同一次请求中 Label Name 不可重复。</p>
                     * @param _labelMutations <p>Record 更新模式：Label 变更列表，最多 32 条，同一次请求中 Label Name 不可重复。</p>
                     * 
                     */
                    void SetLabelMutations(const std::vector<CloudRecordLabelMutation>& _labelMutations);

                    /**
                     * 判断参数 LabelMutations 是否已赋值
                     * @return LabelMutations 是否已赋值
                     * 
                     */
                    bool LabelMutationsHasBeenSet() const;

                private:

                    /**
                     * <p>Registry ID。</p>
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * <p>Record ID。</p>
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * <p>Record 描述，可选。Record 更新模式下允许，允许空字符串清空；Version 创建模式禁止。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>新 Version 的展示名，可选。仅 Version 创建模式允许。</p>
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * <p>新 Version 的变更原因，最大 4096 字符，可选。仅 Version 创建模式允许。</p>
                     */
                    std::string m_changeLog;
                    bool m_changeLogHasBeenSet;

                    /**
                     * <p>Version 创建模式：现有 Record 的 DescriptorType=MCP 时可提交。</p>
                     */
                    CloudMCPSourceInput m_mCPSource;
                    bool m_mCPSourceHasBeenSet;

                    /**
                     * <p>Version 创建模式：现有 Record 的 DescriptorType=A2A 或 AGUI 时可提交。</p>
                     */
                    CloudAgentSourceInput m_agentSource;
                    bool m_agentSourceHasBeenSet;

                    /**
                     * <p>Version 创建模式：现有 Record 的 DescriptorType=AGENT_SKILLS 时可提交。</p>
                     */
                    CloudSkillSourceInput m_skillSource;
                    bool m_skillSourceHasBeenSet;

                    /**
                     * <p>Version 创建模式：现有 Record 的 DescriptorType=CUSTOM 时可提交，必须是 JSON object 字符串。</p>
                     */
                    std::string m_customDescriptors;
                    bool m_customDescriptorsHasBeenSet;

                    /**
                     * <p>Record 更新模式：Label 变更列表，最多 32 条，同一次请求中 Label Name 不可重复。</p>
                     */
                    std::vector<CloudRecordLabelMutation> m_labelMutations;
                    bool m_labelMutationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_UPDATEREGISTRYRECORDREQUEST_H_
