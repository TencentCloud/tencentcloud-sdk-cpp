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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_CREATEREGISTRYRECORDREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_CREATEREGISTRYRECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/CloudMCPSourceInput.h>
#include <tencentcloud/ags/v20250920/model/CloudAgentSourceInput.h>
#include <tencentcloud/ags/v20250920/model/CloudSkillSourceInput.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * CreateRegistryRecord请求参数结构体
                */
                class CreateRegistryRecordRequest : public AbstractModel
                {
                public:
                    CreateRegistryRecordRequest();
                    ~CreateRegistryRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>所属 Registry ID。</p>
                     * @return RegistryId <p>所属 Registry ID。</p>
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置<p>所属 Registry ID。</p>
                     * @param _registryId <p>所属 Registry ID。</p>
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
                     * 获取<p>Record 名称，长度 1..255，同一租户、Registry 内按规范化 Name 唯一（大小写不敏感）；软删除后允许复用。</p>
                     * @return Name <p>Record 名称，长度 1..255，同一租户、Registry 内按规范化 Name 唯一（大小写不敏感）；软删除后允许复用。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Record 名称，长度 1..255，同一租户、Registry 内按规范化 Name 唯一（大小写不敏感）；软删除后允许复用。</p>
                     * @param _name <p>Record 名称，长度 1..255，同一租户、Registry 内按规范化 Name 唯一（大小写不敏感）；软删除后允许复用。</p>
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
                     * 获取<p>协议描述符类型。MCP / A2A / AGUI / CUSTOM / AGENT_SKILLS。Record 创建后不可修改。</p>
                     * @return DescriptorType <p>协议描述符类型。MCP / A2A / AGUI / CUSTOM / AGENT_SKILLS。Record 创建后不可修改。</p>
                     * 
                     */
                    std::string GetDescriptorType() const;

                    /**
                     * 设置<p>协议描述符类型。MCP / A2A / AGUI / CUSTOM / AGENT_SKILLS。Record 创建后不可修改。</p>
                     * @param _descriptorType <p>协议描述符类型。MCP / A2A / AGUI / CUSTOM / AGENT_SKILLS。Record 创建后不可修改。</p>
                     * 
                     */
                    void SetDescriptorType(const std::string& _descriptorType);

                    /**
                     * 判断参数 DescriptorType 是否已赋值
                     * @return DescriptorType 是否已赋值
                     * 
                     */
                    bool DescriptorTypeHasBeenSet() const;

                    /**
                     * 获取<p>Record 描述，最大 4096 字符，可选，默认空。</p>
                     * @return Description <p>Record 描述，最大 4096 字符，可选，默认空。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Record 描述，最大 4096 字符，可选，默认空。</p>
                     * @param _description <p>Record 描述，最大 4096 字符，可选，默认空。</p>
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
                     * 获取<p>Revision 1 的展示名称，可选。</p>
                     * @return VersionName <p>Revision 1 的展示名称，可选。</p>
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置<p>Revision 1 的展示名称，可选。</p>
                     * @param _versionName <p>Revision 1 的展示名称，可选。</p>
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
                     * 获取<p>DescriptorType=MCP 时必填，其他类型禁止。</p>
                     * @return MCPSource <p>DescriptorType=MCP 时必填，其他类型禁止。</p>
                     * 
                     */
                    CloudMCPSourceInput GetMCPSource() const;

                    /**
                     * 设置<p>DescriptorType=MCP 时必填，其他类型禁止。</p>
                     * @param _mCPSource <p>DescriptorType=MCP 时必填，其他类型禁止。</p>
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
                     * 获取<p>DescriptorType=A2A 或 AGUI 时必填，其他类型禁止。</p>
                     * @return AgentSource <p>DescriptorType=A2A 或 AGUI 时必填，其他类型禁止。</p>
                     * 
                     */
                    CloudAgentSourceInput GetAgentSource() const;

                    /**
                     * 设置<p>DescriptorType=A2A 或 AGUI 时必填，其他类型禁止。</p>
                     * @param _agentSource <p>DescriptorType=A2A 或 AGUI 时必填，其他类型禁止。</p>
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
                     * 获取<p>DescriptorType=AGENT_SKILLS 时必填，其他类型禁止。</p>
                     * @return SkillSource <p>DescriptorType=AGENT_SKILLS 时必填，其他类型禁止。</p>
                     * 
                     */
                    CloudSkillSourceInput GetSkillSource() const;

                    /**
                     * 设置<p>DescriptorType=AGENT_SKILLS 时必填，其他类型禁止。</p>
                     * @param _skillSource <p>DescriptorType=AGENT_SKILLS 时必填，其他类型禁止。</p>
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
                     * 获取<p>DescriptorType=CUSTOM 时必填，其他类型禁止。内容必须是 JSON object 字符串；服务端解析后写入 CloudRecordVersion.Descriptors，Version 的 SourceType 固定为 MANUAL、SourceConfig 固定为空对象。</p>
                     * @return CustomDescriptors <p>DescriptorType=CUSTOM 时必填，其他类型禁止。内容必须是 JSON object 字符串；服务端解析后写入 CloudRecordVersion.Descriptors，Version 的 SourceType 固定为 MANUAL、SourceConfig 固定为空对象。</p>
                     * 
                     */
                    std::string GetCustomDescriptors() const;

                    /**
                     * 设置<p>DescriptorType=CUSTOM 时必填，其他类型禁止。内容必须是 JSON object 字符串；服务端解析后写入 CloudRecordVersion.Descriptors，Version 的 SourceType 固定为 MANUAL、SourceConfig 固定为空对象。</p>
                     * @param _customDescriptors <p>DescriptorType=CUSTOM 时必填，其他类型禁止。内容必须是 JSON object 字符串；服务端解析后写入 CloudRecordVersion.Descriptors，Version 的 SourceType 固定为 MANUAL、SourceConfig 固定为空对象。</p>
                     * 
                     */
                    void SetCustomDescriptors(const std::string& _customDescriptors);

                    /**
                     * 判断参数 CustomDescriptors 是否已赋值
                     * @return CustomDescriptors 是否已赋值
                     * 
                     */
                    bool CustomDescriptorsHasBeenSet() const;

                private:

                    /**
                     * <p>所属 Registry ID。</p>
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * <p>Record 名称，长度 1..255，同一租户、Registry 内按规范化 Name 唯一（大小写不敏感）；软删除后允许复用。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>协议描述符类型。MCP / A2A / AGUI / CUSTOM / AGENT_SKILLS。Record 创建后不可修改。</p>
                     */
                    std::string m_descriptorType;
                    bool m_descriptorTypeHasBeenSet;

                    /**
                     * <p>Record 描述，最大 4096 字符，可选，默认空。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Revision 1 的展示名称，可选。</p>
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * <p>DescriptorType=MCP 时必填，其他类型禁止。</p>
                     */
                    CloudMCPSourceInput m_mCPSource;
                    bool m_mCPSourceHasBeenSet;

                    /**
                     * <p>DescriptorType=A2A 或 AGUI 时必填，其他类型禁止。</p>
                     */
                    CloudAgentSourceInput m_agentSource;
                    bool m_agentSourceHasBeenSet;

                    /**
                     * <p>DescriptorType=AGENT_SKILLS 时必填，其他类型禁止。</p>
                     */
                    CloudSkillSourceInput m_skillSource;
                    bool m_skillSourceHasBeenSet;

                    /**
                     * <p>DescriptorType=CUSTOM 时必填，其他类型禁止。内容必须是 JSON object 字符串；服务端解析后写入 CloudRecordVersion.Descriptors，Version 的 SourceType 固定为 MANUAL、SourceConfig 固定为空对象。</p>
                     */
                    std::string m_customDescriptors;
                    bool m_customDescriptorsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_CREATEREGISTRYRECORDREQUEST_H_
