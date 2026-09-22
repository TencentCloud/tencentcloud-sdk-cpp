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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_MODIFYAGENTVERSIONRESPONSE_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_MODIFYAGENTVERSIONRESPONSE_H_

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
                * ModifyAgentVersion返回参数结构体
                */
                class ModifyAgentVersionResponse : public AbstractModel
                {
                public:
                    ModifyAgentVersionResponse();
                    ~ModifyAgentVersionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取版本 ID
                     * @return VersionId 版本 ID
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
                     * 获取Agent 业务 ID
                     * @return AgentId Agent 业务 ID
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
                     * 获取版本名称
                     * @return VersionName 版本名称
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
                     * 获取版本类型：DEFAULT / TEST / PROD
                     * @return VersionType 版本类型：DEFAULT / TEST / PROD
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
                     * 获取版本变更说明
                     * @return Description 版本变更说明
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
                     * 获取模型标识
                     * @return Model 模型标识
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
                     * 获取Manifest v2.0 精简 manifest 原文（JSON 字符串）
                     * @return Manifest Manifest v2.0 精简 manifest 原文（JSON 字符串）
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
                     * 获取版本状态：DRAFT / ENABLED / DISABLED
                     * @return Status 版本状态：DRAFT / ENABLED / DISABLED
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
                     * 获取创建时间
                     * @return CreatedTime 创建时间
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
                     * 获取更新时间
                     * @return ModifiedTime 更新时间
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
                     * 获取绑定的沙箱模板 ID；未绑定时为空，创建会话沙箱使用系统默认模板。
                     * @return SandboxTemplateId 绑定的沙箱模板 ID；未绑定时为空，创建会话沙箱使用系统默认模板。
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
                     * 版本 ID
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * Agent 业务 ID
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * 版本名称
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * 版本类型：DEFAULT / TEST / PROD
                     */
                    std::string m_versionType;
                    bool m_versionTypeHasBeenSet;

                    /**
                     * 版本变更说明
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 模型标识
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * Manifest v2.0 精简 manifest 原文（JSON 字符串）
                     */
                    std::string m_manifest;
                    bool m_manifestHasBeenSet;

                    /**
                     * 版本状态：DRAFT / ENABLED / DISABLED
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * 绑定的沙箱模板 ID；未绑定时为空，创建会话沙箱使用系统默认模板。
                     */
                    std::string m_sandboxTemplateId;
                    bool m_sandboxTemplateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_MODIFYAGENTVERSIONRESPONSE_H_
