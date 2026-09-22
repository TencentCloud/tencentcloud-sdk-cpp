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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_CREATEAGENTVERSIONREQUEST_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_CREATEAGENTVERSIONREQUEST_H_

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
                * CreateAgentVersion请求参数结构体
                */
                class CreateAgentVersionRequest : public AbstractModel
                {
                public:
                    CreateAgentVersionRequest();
                    ~CreateAgentVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Agent 业务 ID</p>
                     * @return AgentId <p>Agent 业务 ID</p>
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置<p>Agent 业务 ID</p>
                     * @param _agentId <p>Agent 业务 ID</p>
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
                     * 获取<p>Manifest v2.0 精简 manifest 原文（JSON 对象序列化后的字符串）</p>
                     * @return Manifest <p>Manifest v2.0 精简 manifest 原文（JSON 对象序列化后的字符串）</p>
                     * 
                     */
                    std::string GetManifest() const;

                    /**
                     * 设置<p>Manifest v2.0 精简 manifest 原文（JSON 对象序列化后的字符串）</p>
                     * @param _manifest <p>Manifest v2.0 精简 manifest 原文（JSON 对象序列化后的字符串）</p>
                     * 
                     */
                    void SetManifest(const std::string& _manifest);

                    /**
                     * 判断参数 Manifest 是否已赋值
                     * @return Manifest 是否已赋值
                     * 
                     */
                    bool ManifestHasBeenSet() const;

                    /**
                     * 获取<p>模型标识</p>
                     * @return Model <p>模型标识</p>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>模型标识</p>
                     * @param _model <p>模型标识</p>
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取<p>版本变更说明</p>
                     * @return Description <p>版本变更说明</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>版本变更说明</p>
                     * @param _description <p>版本变更说明</p>
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
                     * 获取<p>沙箱模板 ID。可选；传入时模板须属于当前企业且可用（未删除、状态正常），绑定到新建的 test/prod 版本。</p>
                     * @return SandboxTemplateId <p>沙箱模板 ID。可选；传入时模板须属于当前企业且可用（未删除、状态正常），绑定到新建的 test/prod 版本。</p>
                     * 
                     */
                    std::string GetSandboxTemplateId() const;

                    /**
                     * 设置<p>沙箱模板 ID。可选；传入时模板须属于当前企业且可用（未删除、状态正常），绑定到新建的 test/prod 版本。</p>
                     * @param _sandboxTemplateId <p>沙箱模板 ID。可选；传入时模板须属于当前企业且可用（未删除、状态正常），绑定到新建的 test/prod 版本。</p>
                     * 
                     */
                    void SetSandboxTemplateId(const std::string& _sandboxTemplateId);

                    /**
                     * 判断参数 SandboxTemplateId 是否已赋值
                     * @return SandboxTemplateId 是否已赋值
                     * 
                     */
                    bool SandboxTemplateIdHasBeenSet() const;

                private:

                    /**
                     * <p>Agent 业务 ID</p>
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * <p>Manifest v2.0 精简 manifest 原文（JSON 对象序列化后的字符串）</p>
                     */
                    std::string m_manifest;
                    bool m_manifestHasBeenSet;

                    /**
                     * <p>模型标识</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>版本变更说明</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>沙箱模板 ID。可选；传入时模板须属于当前企业且可用（未删除、状态正常），绑定到新建的 test/prod 版本。</p>
                     */
                    std::string m_sandboxTemplateId;
                    bool m_sandboxTemplateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_CREATEAGENTVERSIONREQUEST_H_
