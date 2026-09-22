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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_MODIFYAGENTVERSIONREQUEST_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_MODIFYAGENTVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/ConnectorRefInput.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * ModifyAgentVersion请求参数结构体
                */
                class ModifyAgentVersionRequest : public AbstractModel
                {
                public:
                    ModifyAgentVersionRequest();
                    ~ModifyAgentVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Agent 业务 ID
                     * @return AgentId Agent 业务 ID
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置Agent 业务 ID
                     * @param _agentId Agent 业务 ID
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
                     * 获取版本 ID（仅 default 或 test 版本可原地更新，prod 拒绝）
                     * @return VersionId 版本 ID（仅 default 或 test 版本可原地更新，prod 拒绝）
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置版本 ID（仅 default 或 test 版本可原地更新，prod 拒绝）
                     * @param _versionId 版本 ID（仅 default 或 test 版本可原地更新，prod 拒绝）
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取Manifest v2.0 原文（可选；Manifest / Model / Description / SandboxTemplateId / ConnectorSet 五个可选字段至少提供一个）
                     * @return Manifest Manifest v2.0 原文（可选；Manifest / Model / Description / SandboxTemplateId / ConnectorSet 五个可选字段至少提供一个）
                     * 
                     */
                    std::string GetManifest() const;

                    /**
                     * 设置Manifest v2.0 原文（可选；Manifest / Model / Description / SandboxTemplateId / ConnectorSet 五个可选字段至少提供一个）
                     * @param _manifest Manifest v2.0 原文（可选；Manifest / Model / Description / SandboxTemplateId / ConnectorSet 五个可选字段至少提供一个）
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
                     * 获取模型标识（可选）
                     * @return Model 模型标识（可选）
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置模型标识（可选）
                     * @param _model 模型标识（可选）
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
                     * 获取版本变更说明（可选）
                     * @return Description 版本变更说明（可选）
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置版本变更说明（可选）
                     * @param _description 版本变更说明（可选）
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
                     * 获取沙箱模板 ID。可选，patch 语义：null 不修改；空串解绑（恢复系统默认模板）；非空时模板须属于当前企业且可用（未删除、状态正常）。
                     * @return SandboxTemplateId 沙箱模板 ID。可选，patch 语义：null 不修改；空串解绑（恢复系统默认模板）；非空时模板须属于当前企业且可用（未删除、状态正常）。
                     * 
                     */
                    std::string GetSandboxTemplateId() const;

                    /**
                     * 设置沙箱模板 ID。可选，patch 语义：null 不修改；空串解绑（恢复系统默认模板）；非空时模板须属于当前企业且可用（未删除、状态正常）。
                     * @param _sandboxTemplateId 沙箱模板 ID。可选，patch 语义：null 不修改；空串解绑（恢复系统默认模板）；非空时模板须属于当前企业且可用（未删除、状态正常）。
                     * 
                     */
                    void SetSandboxTemplateId(const std::string& _sandboxTemplateId);

                    /**
                     * 判断参数 SandboxTemplateId 是否已赋值
                     * @return SandboxTemplateId 是否已赋值
                     * 
                     */
                    bool SandboxTemplateIdHasBeenSet() const;

                    /**
                     * 获取该版本最终绑定的连接器集合（全量覆盖语义）：缺省 = 本次不改动连接器绑定；空数组 = 解绑全部连接器；非空 = 物化为 manifest v2 mcp_servers 网关条目，manifest 中不在本集合内的连接器条目会被移除（解绑在服务端闭环，无需调用方改写 Manifest）
                     * @return ConnectorSet 该版本最终绑定的连接器集合（全量覆盖语义）：缺省 = 本次不改动连接器绑定；空数组 = 解绑全部连接器；非空 = 物化为 manifest v2 mcp_servers 网关条目，manifest 中不在本集合内的连接器条目会被移除（解绑在服务端闭环，无需调用方改写 Manifest）
                     * 
                     */
                    std::vector<ConnectorRefInput> GetConnectorSet() const;

                    /**
                     * 设置该版本最终绑定的连接器集合（全量覆盖语义）：缺省 = 本次不改动连接器绑定；空数组 = 解绑全部连接器；非空 = 物化为 manifest v2 mcp_servers 网关条目，manifest 中不在本集合内的连接器条目会被移除（解绑在服务端闭环，无需调用方改写 Manifest）
                     * @param _connectorSet 该版本最终绑定的连接器集合（全量覆盖语义）：缺省 = 本次不改动连接器绑定；空数组 = 解绑全部连接器；非空 = 物化为 manifest v2 mcp_servers 网关条目，manifest 中不在本集合内的连接器条目会被移除（解绑在服务端闭环，无需调用方改写 Manifest）
                     * 
                     */
                    void SetConnectorSet(const std::vector<ConnectorRefInput>& _connectorSet);

                    /**
                     * 判断参数 ConnectorSet 是否已赋值
                     * @return ConnectorSet 是否已赋值
                     * 
                     */
                    bool ConnectorSetHasBeenSet() const;

                private:

                    /**
                     * Agent 业务 ID
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * 版本 ID（仅 default 或 test 版本可原地更新，prod 拒绝）
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * Manifest v2.0 原文（可选；Manifest / Model / Description / SandboxTemplateId / ConnectorSet 五个可选字段至少提供一个）
                     */
                    std::string m_manifest;
                    bool m_manifestHasBeenSet;

                    /**
                     * 模型标识（可选）
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 版本变更说明（可选）
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 沙箱模板 ID。可选，patch 语义：null 不修改；空串解绑（恢复系统默认模板）；非空时模板须属于当前企业且可用（未删除、状态正常）。
                     */
                    std::string m_sandboxTemplateId;
                    bool m_sandboxTemplateIdHasBeenSet;

                    /**
                     * 该版本最终绑定的连接器集合（全量覆盖语义）：缺省 = 本次不改动连接器绑定；空数组 = 解绑全部连接器；非空 = 物化为 manifest v2 mcp_servers 网关条目，manifest 中不在本集合内的连接器条目会被移除（解绑在服务端闭环，无需调用方改写 Manifest）
                     */
                    std::vector<ConnectorRefInput> m_connectorSet;
                    bool m_connectorSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_MODIFYAGENTVERSIONREQUEST_H_
