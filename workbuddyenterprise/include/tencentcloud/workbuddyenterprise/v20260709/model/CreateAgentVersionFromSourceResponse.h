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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_CREATEAGENTVERSIONFROMSOURCERESPONSE_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_CREATEAGENTVERSIONFROMSOURCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * CreateAgentVersionFromSource返回参数结构体
                */
                class CreateAgentVersionFromSourceResponse : public AbstractModel
                {
                public:
                    CreateAgentVersionFromSourceResponse();
                    ~CreateAgentVersionFromSourceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>版本 ID</p>
                     * @return VersionId <p>版本 ID</p>
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取<p>Agent 业务 ID</p>
                     * @return AgentId <p>Agent 业务 ID</p>
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * 
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取<p>版本名称</p>
                     * @return VersionName <p>版本名称</p>
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     * 
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取<p>版本类型：DEFAULT / TEST / PROD</p>
                     * @return VersionType <p>版本类型：DEFAULT / TEST / PROD</p>
                     * 
                     */
                    std::string GetVersionType() const;

                    /**
                     * 判断参数 VersionType 是否已赋值
                     * @return VersionType 是否已赋值
                     * 
                     */
                    bool VersionTypeHasBeenSet() const;

                    /**
                     * 获取<p>版本变更说明</p>
                     * @return Description <p>版本变更说明</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>模型标识</p>
                     * @return Model <p>模型标识</p>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取<p>Manifest v2.0 精简 manifest 原文（JSON 字符串）</p>
                     * @return Manifest <p>Manifest v2.0 精简 manifest 原文（JSON 字符串）</p>
                     * 
                     */
                    std::string GetManifest() const;

                    /**
                     * 判断参数 Manifest 是否已赋值
                     * @return Manifest 是否已赋值
                     * 
                     */
                    bool ManifestHasBeenSet() const;

                    /**
                     * 获取<p>版本状态：DRAFT / ENABLED / DISABLED</p>
                     * @return Status <p>版本状态：DRAFT / ENABLED / DISABLED</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreatedTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
                     * @return ModifiedTime <p>更新时间</p>
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取<p>绑定的沙箱模板 ID；未绑定时为空，创建会话沙箱使用系统默认模板。</p>
                     * @return SandboxTemplateId <p>绑定的沙箱模板 ID；未绑定时为空，创建会话沙箱使用系统默认模板。</p>
                     * 
                     */
                    std::string GetSandboxTemplateId() const;

                    /**
                     * 判断参数 SandboxTemplateId 是否已赋值
                     * @return SandboxTemplateId 是否已赋值
                     * 
                     */
                    bool SandboxTemplateIdHasBeenSet() const;

                private:

                    /**
                     * <p>版本 ID</p>
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * <p>Agent 业务 ID</p>
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * <p>版本名称</p>
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * <p>版本类型：DEFAULT / TEST / PROD</p>
                     */
                    std::string m_versionType;
                    bool m_versionTypeHasBeenSet;

                    /**
                     * <p>版本变更说明</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>模型标识</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>Manifest v2.0 精简 manifest 原文（JSON 字符串）</p>
                     */
                    std::string m_manifest;
                    bool m_manifestHasBeenSet;

                    /**
                     * <p>版本状态：DRAFT / ENABLED / DISABLED</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * <p>绑定的沙箱模板 ID；未绑定时为空，创建会话沙箱使用系统默认模板。</p>
                     */
                    std::string m_sandboxTemplateId;
                    bool m_sandboxTemplateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_CREATEAGENTVERSIONFROMSOURCERESPONSE_H_
