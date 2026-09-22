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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_AGENTVERSIONITEM_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_AGENTVERSIONITEM_H_

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
                * Agent 版本列表项（原 AgentVersionSummary / AgentVersionBrief 合并，字段取并集）
                */
                class AgentVersionItem : public AbstractModel
                {
                public:
                    AgentVersionItem();
                    ~AgentVersionItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取版本 ID（雪花算法生成的数字字符串，唯一标识）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionId 版本 ID（雪花算法生成的数字字符串，唯一标识）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置版本 ID（雪花算法生成的数字字符串，唯一标识）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionId 版本 ID（雪花算法生成的数字字符串，唯一标识）
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取版本名称，形如 default / test-N / prod-N（N 为同类型版本的自增序号）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionName 版本名称，形如 default / test-N / prod-N（N 为同类型版本的自增序号）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置版本名称，形如 default / test-N / prod-N（N 为同类型版本的自增序号）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionName 版本名称，形如 default / test-N / prod-N（N 为同类型版本的自增序号）
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取版本类型（服务端按 VersionName 派生）：DEFAULT（默认版本，可编辑）/ TEST（测试版本，可编辑）/ PROD（生产版本，内容冻结）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionType 版本类型（服务端按 VersionName 派生）：DEFAULT（默认版本，可编辑）/ TEST（测试版本，可编辑）/ PROD（生产版本，内容冻结）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersionType() const;

                    /**
                     * 设置版本类型（服务端按 VersionName 派生）：DEFAULT（默认版本，可编辑）/ TEST（测试版本，可编辑）/ PROD（生产版本，内容冻结）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionType 版本类型（服务端按 VersionName 派生）：DEFAULT（默认版本，可编辑）/ TEST（测试版本，可编辑）/ PROD（生产版本，内容冻结）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersionType(const std::string& _versionType);

                    /**
                     * 判断参数 VersionType 是否已赋值
                     * @return VersionType 是否已赋值
                     * 
                     */
                    bool VersionTypeHasBeenSet() const;

                    /**
                     * 获取版本绑定的模型标识；未设置时缺省
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Model 版本绑定的模型标识；未设置时缺省
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置版本绑定的模型标识；未设置时缺省
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _model 版本绑定的模型标识；未设置时缺省
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
                     * 获取版本运行时使用的沙箱模板业务 ID；空字符串表示使用默认沙箱
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SandboxTemplateId 版本运行时使用的沙箱模板业务 ID；空字符串表示使用默认沙箱
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSandboxTemplateId() const;

                    /**
                     * 设置版本运行时使用的沙箱模板业务 ID；空字符串表示使用默认沙箱
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sandboxTemplateId 版本运行时使用的沙箱模板业务 ID；空字符串表示使用默认沙箱
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取版本状态：DRAFT（草稿）/ ENABLED（已启用）/ DISABLED（已停用）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 版本状态：DRAFT（草稿）/ ENABLED（已启用）/ DISABLED（已停用）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置版本状态：DRAFT（草稿）/ ENABLED（已启用）/ DISABLED（已停用）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 版本状态：DRAFT（草稿）/ ENABLED（已启用）/ DISABLED（已停用）
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
                     * 获取<p>该版本累计承接的会话总数（历史累计值，只增不减）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SessionCount <p>该版本累计承接的会话总数（历史累计值，只增不减）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSessionCount() const;

                    /**
                     * 设置<p>该版本累计承接的会话总数（历史累计值，只增不减）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sessionCount <p>该版本累计承接的会话总数（历史累计值，只增不减）</p>
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
                     * 获取创建时间，RFC3339 UTC 格式（如 2026-08-01T10:00:00Z）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedTime 创建时间，RFC3339 UTC 格式（如 2026-08-01T10:00:00Z）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间，RFC3339 UTC 格式（如 2026-08-01T10:00:00Z）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdTime 创建时间，RFC3339 UTC 格式（如 2026-08-01T10:00:00Z）
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
                     * 获取更新时间，RFC3339 UTC 格式（如 2026-08-10T15:30:00Z）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifiedTime 更新时间，RFC3339 UTC 格式（如 2026-08-10T15:30:00Z）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置更新时间，RFC3339 UTC 格式（如 2026-08-10T15:30:00Z）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifiedTime 更新时间，RFC3339 UTC 格式（如 2026-08-10T15:30:00Z）
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

                private:

                    /**
                     * 版本 ID（雪花算法生成的数字字符串，唯一标识）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * 版本名称，形如 default / test-N / prod-N（N 为同类型版本的自增序号）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * 版本类型（服务端按 VersionName 派生）：DEFAULT（默认版本，可编辑）/ TEST（测试版本，可编辑）/ PROD（生产版本，内容冻结）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionType;
                    bool m_versionTypeHasBeenSet;

                    /**
                     * 版本绑定的模型标识；未设置时缺省
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 版本运行时使用的沙箱模板业务 ID；空字符串表示使用默认沙箱
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sandboxTemplateId;
                    bool m_sandboxTemplateIdHasBeenSet;

                    /**
                     * 版本状态：DRAFT（草稿）/ ENABLED（已启用）/ DISABLED（已停用）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>该版本累计承接的会话总数（历史累计值，只增不减）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sessionCount;
                    bool m_sessionCountHasBeenSet;

                    /**
                     * 创建时间，RFC3339 UTC 格式（如 2026-08-01T10:00:00Z）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 更新时间，RFC3339 UTC 格式（如 2026-08-10T15:30:00Z）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_AGENTVERSIONITEM_H_
