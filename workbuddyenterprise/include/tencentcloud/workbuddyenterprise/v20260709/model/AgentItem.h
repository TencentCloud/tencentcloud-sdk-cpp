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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_AGENTITEM_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_AGENTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Agent 列表项（原 AgentSummary；Agent 级纯字段，不再内嵌版本信息）
                */
                class AgentItem : public AbstractModel
                {
                public:
                    AgentItem();
                    ~AgentItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Agent 业务 ID（全局唯一，数字字符串形态）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentId Agent 业务 ID（全局唯一，数字字符串形态）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置Agent 业务 ID（全局唯一，数字字符串形态）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agentId Agent 业务 ID（全局唯一，数字字符串形态）
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
                     * 获取Agent 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentName Agent 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAgentName() const;

                    /**
                     * 设置Agent 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agentName Agent 名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取Agent 描述；未填写时缺省
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description Agent 描述；未填写时缺省
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Agent 描述；未填写时缺省
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description Agent 描述；未填写时缺省
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
                     * 获取头像 URL；未设置时缺省
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AvatarUrl 头像 URL；未设置时缺省
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAvatarUrl() const;

                    /**
                     * 设置头像 URL；未设置时缺省
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _avatarUrl 头像 URL；未设置时缺省
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAvatarUrl(const std::string& _avatarUrl);

                    /**
                     * 判断参数 AvatarUrl 是否已赋值
                     * @return AvatarUrl 是否已赋值
                     * 
                     */
                    bool AvatarUrlHasBeenSet() const;

                    /**
                     * 获取创建时间，RFC3339 UTC 格式（如 2026-06-01T09:00:00Z）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedTime 创建时间，RFC3339 UTC 格式（如 2026-06-01T09:00:00Z）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间，RFC3339 UTC 格式（如 2026-06-01T09:00:00Z）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdTime 创建时间，RFC3339 UTC 格式（如 2026-06-01T09:00:00Z）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取更新时间，RFC3339 UTC 格式（如 2026-09-10T15:20:00Z）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifiedTime 更新时间，RFC3339 UTC 格式（如 2026-09-10T15:20:00Z）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置更新时间，RFC3339 UTC 格式（如 2026-09-10T15:20:00Z）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifiedTime 更新时间，RFC3339 UTC 格式（如 2026-09-10T15:20:00Z）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取Agent 级 A2A 开关。false 恒输出（未开启不等于字段缺失）；A2AEndpoint / A2AStatus 由本接口在 A2A 开启时直接下发
注意：此字段可能返回 null，表示取不到有效值。
                     * @return A2AEnabled Agent 级 A2A 开关。false 恒输出（未开启不等于字段缺失）；A2AEndpoint / A2AStatus 由本接口在 A2A 开启时直接下发
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetA2AEnabled() const;

                    /**
                     * 设置Agent 级 A2A 开关。false 恒输出（未开启不等于字段缺失）；A2AEndpoint / A2AStatus 由本接口在 A2A 开启时直接下发
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _a2AEnabled Agent 级 A2A 开关。false 恒输出（未开启不等于字段缺失）；A2AEndpoint / A2AStatus 由本接口在 A2A 开启时直接下发
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetA2AEnabled(const bool& _a2AEnabled);

                    /**
                     * 判断参数 A2AEnabled 是否已赋值
                     * @return A2AEnabled 是否已赋值
                     * 
                     */
                    bool A2AEnabledHasBeenSet() const;

                    /**
                     * 获取历史会话总数（t_managed_agent_sessions 未软删计数，含全部状态）。注意与 DescribeAgent.ActiveSessionCount（活跃会话数）口径不同
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SessionCount 历史会话总数（t_managed_agent_sessions 未软删计数，含全部状态）。注意与 DescribeAgent.ActiveSessionCount（活跃会话数）口径不同
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSessionCount() const;

                    /**
                     * 设置历史会话总数（t_managed_agent_sessions 未软删计数，含全部状态）。注意与 DescribeAgent.ActiveSessionCount（活跃会话数）口径不同
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sessionCount 历史会话总数（t_managed_agent_sessions 未软删计数，含全部状态）。注意与 DescribeAgent.ActiveSessionCount（活跃会话数）口径不同
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSessionCount(const int64_t& _sessionCount);

                    /**
                     * 判断参数 SessionCount 是否已赋值
                     * @return SessionCount 是否已赋值
                     * 
                     */
                    bool SessionCountHasBeenSet() const;

                    /**
                     * 获取最新版本的模型标识，取 latest_version_id 指向版本的 model；Agent 尚无版本时缺省
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Model 最新版本的模型标识，取 latest_version_id 指向版本的 model；Agent 尚无版本时缺省
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置最新版本的模型标识，取 latest_version_id 指向版本的 model；Agent 尚无版本时缺省
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _model 最新版本的模型标识，取 latest_version_id 指向版本的 model；Agent 尚无版本时缺省
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取最新版本 ID（latest_version_id 转字符串，19 位雪花数字形态）；Agent 尚无版本时缺省
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestVersionId 最新版本 ID（latest_version_id 转字符串，19 位雪花数字形态）；Agent 尚无版本时缺省
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLatestVersionId() const;

                    /**
                     * 设置最新版本 ID（latest_version_id 转字符串，19 位雪花数字形态）；Agent 尚无版本时缺省
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latestVersionId 最新版本 ID（latest_version_id 转字符串，19 位雪花数字形态）；Agent 尚无版本时缺省
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLatestVersionId(const std::string& _latestVersionId);

                    /**
                     * 判断参数 LatestVersionId 是否已赋值
                     * @return LatestVersionId 是否已赋值
                     * 
                     */
                    bool LatestVersionIdHasBeenSet() const;

                    /**
                     * 获取最新版本名（可能为 default / test-N / prod-N 任意类型）；Agent 尚无版本时缺省
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestVersionName 最新版本名（可能为 default / test-N / prod-N 任意类型）；Agent 尚无版本时缺省
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLatestVersionName() const;

                    /**
                     * 设置最新版本名（可能为 default / test-N / prod-N 任意类型）；Agent 尚无版本时缺省
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latestVersionName 最新版本名（可能为 default / test-N / prod-N 任意类型）；Agent 尚无版本时缺省
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLatestVersionName(const std::string& _latestVersionName);

                    /**
                     * 判断参数 LatestVersionName 是否已赋值
                     * @return LatestVersionName 是否已赋值
                     * 
                     */
                    bool LatestVersionNameHasBeenSet() const;

                    /**
                     * 获取对外 A2A card 发现地址（Agent Card JSON 地址），仅 A2AEnabled=true 的行下发；未注册 / registry 读失败时缺省
注意：此字段可能返回 null，表示取不到有效值。
                     * @return A2AEndpoint 对外 A2A card 发现地址（Agent Card JSON 地址），仅 A2AEnabled=true 的行下发；未注册 / registry 读失败时缺省
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetA2AEndpoint() const;

                    /**
                     * 设置对外 A2A card 发现地址（Agent Card JSON 地址），仅 A2AEnabled=true 的行下发；未注册 / registry 读失败时缺省
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _a2AEndpoint 对外 A2A card 发现地址（Agent Card JSON 地址），仅 A2AEnabled=true 的行下发；未注册 / registry 读失败时缺省
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetA2AEndpoint(const std::string& _a2AEndpoint);

                    /**
                     * 判断参数 A2AEndpoint 是否已赋值
                     * @return A2AEndpoint 是否已赋值
                     * 
                     */
                    bool A2AEndpointHasBeenSet() const;

                    /**
                     * 获取A2A 注册态：DRAFT / REGISTERED / DISABLED / NONE / UNKNOWN，仅 A2AEnabled=true 的行下发，与 DescribeAgent.A2AConfig.A2AStatus 同枚举；用于「开关已开但地址尚未生成」的空态文案
注意：此字段可能返回 null，表示取不到有效值。
                     * @return A2AStatus A2A 注册态：DRAFT / REGISTERED / DISABLED / NONE / UNKNOWN，仅 A2AEnabled=true 的行下发，与 DescribeAgent.A2AConfig.A2AStatus 同枚举；用于「开关已开但地址尚未生成」的空态文案
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetA2AStatus() const;

                    /**
                     * 设置A2A 注册态：DRAFT / REGISTERED / DISABLED / NONE / UNKNOWN，仅 A2AEnabled=true 的行下发，与 DescribeAgent.A2AConfig.A2AStatus 同枚举；用于「开关已开但地址尚未生成」的空态文案
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _a2AStatus A2A 注册态：DRAFT / REGISTERED / DISABLED / NONE / UNKNOWN，仅 A2AEnabled=true 的行下发，与 DescribeAgent.A2AConfig.A2AStatus 同枚举；用于「开关已开但地址尚未生成」的空态文案
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetA2AStatus(const std::string& _a2AStatus);

                    /**
                     * 判断参数 A2AStatus 是否已赋值
                     * @return A2AStatus 是否已赋值
                     * 
                     */
                    bool A2AStatusHasBeenSet() const;

                    /**
                     * 获取公网链接访问开关。false 恒输出（未开启不等于字段缺失）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicApiEnabled 公网链接访问开关。false 恒输出（未开启不等于字段缺失）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetPublicApiEnabled() const;

                    /**
                     * 设置公网链接访问开关。false 恒输出（未开启不等于字段缺失）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicApiEnabled 公网链接访问开关。false 恒输出（未开启不等于字段缺失）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublicApiEnabled(const bool& _publicApiEnabled);

                    /**
                     * 判断参数 PublicApiEnabled 是否已赋值
                     * @return PublicApiEnabled 是否已赋值
                     * 
                     */
                    bool PublicApiEnabledHasBeenSet() const;

                    /**
                     * 获取公网访问地址，仅 PublicApiEnabled=true 的行下发。固定拼法 https://{AgentId}-{region}.{endpoint_suffix}，与 DescribeAgentPublicAccess.Url 同规则；endpoint_suffix 未配置时为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicApiUrl 公网访问地址，仅 PublicApiEnabled=true 的行下发。固定拼法 https://{AgentId}-{region}.{endpoint_suffix}，与 DescribeAgentPublicAccess.Url 同规则；endpoint_suffix 未配置时为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPublicApiUrl() const;

                    /**
                     * 设置公网访问地址，仅 PublicApiEnabled=true 的行下发。固定拼法 https://{AgentId}-{region}.{endpoint_suffix}，与 DescribeAgentPublicAccess.Url 同规则；endpoint_suffix 未配置时为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicApiUrl 公网访问地址，仅 PublicApiEnabled=true 的行下发。固定拼法 https://{AgentId}-{region}.{endpoint_suffix}，与 DescribeAgentPublicAccess.Url 同规则；endpoint_suffix 未配置时为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublicApiUrl(const std::string& _publicApiUrl);

                    /**
                     * 判断参数 PublicApiUrl 是否已赋值
                     * @return PublicApiUrl 是否已赋值
                     * 
                     */
                    bool PublicApiUrlHasBeenSet() const;

                    /**
                     * 获取创建人 UIN（建号时落库的 sub_account_uin；主账号自建时为主账号 uin）。注意语义为「实际操作建号的账号」
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatorUin 创建人 UIN（建号时落库的 sub_account_uin；主账号自建时为主账号 uin）。注意语义为「实际操作建号的账号」
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatorUin() const;

                    /**
                     * 设置创建人 UIN（建号时落库的 sub_account_uin；主账号自建时为主账号 uin）。注意语义为「实际操作建号的账号」
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creatorUin 创建人 UIN（建号时落库的 sub_account_uin；主账号自建时为主账号 uin）。注意语义为「实际操作建号的账号」
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatorUin(const std::string& _creatorUin);

                    /**
                     * 判断参数 CreatorUin 是否已赋值
                     * @return CreatorUin 是否已赋值
                     * 
                     */
                    bool CreatorUinHasBeenSet() const;

                    /**
                     * 获取绑定的 OneID 企业账号 ID（数字字符串形态，如 1438693592234206274）；空=未绑定（缺省）。与 DescribeAgent.AgentInfo.AccountId 同源同语义；创建时可选传入，之后不可变
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountId 绑定的 OneID 企业账号 ID（数字字符串形态，如 1438693592234206274）；空=未绑定（缺省）。与 DescribeAgent.AgentInfo.AccountId 同源同语义；创建时可选传入，之后不可变
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountId() const;

                    /**
                     * 设置绑定的 OneID 企业账号 ID（数字字符串形态，如 1438693592234206274）；空=未绑定（缺省）。与 DescribeAgent.AgentInfo.AccountId 同源同语义；创建时可选传入，之后不可变
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountId 绑定的 OneID 企业账号 ID（数字字符串形态，如 1438693592234206274）；空=未绑定（缺省）。与 DescribeAgent.AgentInfo.AccountId 同源同语义；创建时可选传入，之后不可变
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountId(const std::string& _accountId);

                    /**
                     * 判断参数 AccountId 是否已赋值
                     * @return AccountId 是否已赋值
                     * 
                     */
                    bool AccountIdHasBeenSet() const;

                private:

                    /**
                     * Agent 业务 ID（全局唯一，数字字符串形态）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * Agent 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_agentName;
                    bool m_agentNameHasBeenSet;

                    /**
                     * Agent 描述；未填写时缺省
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 头像 URL；未设置时缺省
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_avatarUrl;
                    bool m_avatarUrlHasBeenSet;

                    /**
                     * 创建时间，RFC3339 UTC 格式（如 2026-06-01T09:00:00Z）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 更新时间，RFC3339 UTC 格式（如 2026-09-10T15:20:00Z）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * Agent 级 A2A 开关。false 恒输出（未开启不等于字段缺失）；A2AEndpoint / A2AStatus 由本接口在 A2A 开启时直接下发
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_a2AEnabled;
                    bool m_a2AEnabledHasBeenSet;

                    /**
                     * 历史会话总数（t_managed_agent_sessions 未软删计数，含全部状态）。注意与 DescribeAgent.ActiveSessionCount（活跃会话数）口径不同
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sessionCount;
                    bool m_sessionCountHasBeenSet;

                    /**
                     * 最新版本的模型标识，取 latest_version_id 指向版本的 model；Agent 尚无版本时缺省
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 最新版本 ID（latest_version_id 转字符串，19 位雪花数字形态）；Agent 尚无版本时缺省
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latestVersionId;
                    bool m_latestVersionIdHasBeenSet;

                    /**
                     * 最新版本名（可能为 default / test-N / prod-N 任意类型）；Agent 尚无版本时缺省
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latestVersionName;
                    bool m_latestVersionNameHasBeenSet;

                    /**
                     * 对外 A2A card 发现地址（Agent Card JSON 地址），仅 A2AEnabled=true 的行下发；未注册 / registry 读失败时缺省
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_a2AEndpoint;
                    bool m_a2AEndpointHasBeenSet;

                    /**
                     * A2A 注册态：DRAFT / REGISTERED / DISABLED / NONE / UNKNOWN，仅 A2AEnabled=true 的行下发，与 DescribeAgent.A2AConfig.A2AStatus 同枚举；用于「开关已开但地址尚未生成」的空态文案
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_a2AStatus;
                    bool m_a2AStatusHasBeenSet;

                    /**
                     * 公网链接访问开关。false 恒输出（未开启不等于字段缺失）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_publicApiEnabled;
                    bool m_publicApiEnabledHasBeenSet;

                    /**
                     * 公网访问地址，仅 PublicApiEnabled=true 的行下发。固定拼法 https://{AgentId}-{region}.{endpoint_suffix}，与 DescribeAgentPublicAccess.Url 同规则；endpoint_suffix 未配置时为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publicApiUrl;
                    bool m_publicApiUrlHasBeenSet;

                    /**
                     * 创建人 UIN（建号时落库的 sub_account_uin；主账号自建时为主账号 uin）。注意语义为「实际操作建号的账号」
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * 绑定的 OneID 企业账号 ID（数字字符串形态，如 1438693592234206274）；空=未绑定（缺省）。与 DescribeAgent.AgentInfo.AccountId 同源同语义；创建时可选传入，之后不可变
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountId;
                    bool m_accountIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_AGENTITEM_H_
