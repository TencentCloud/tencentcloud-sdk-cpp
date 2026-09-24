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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_CLOUDAUDITLOG_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_CLOUDAUDITLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * 审计日志条目。记录 Registry / Record / Version 维度的动作。
                */
                class CloudAuditLog : public AbstractModel
                {
                public:
                    CloudAuditLog();
                    ~CloudAuditLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>审计日志 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuditLogId <p>审计日志 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAuditLogId() const;

                    /**
                     * 设置<p>审计日志 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _auditLogId <p>审计日志 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuditLogId(const std::string& _auditLogId);

                    /**
                     * 判断参数 AuditLogId 是否已赋值
                     * @return AuditLogId 是否已赋值
                     * 
                     */
                    bool AuditLogIdHasBeenSet() const;

                    /**
                     * 获取<p>所属 Registry ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegistryId <p>所属 Registry ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置<p>所属 Registry ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _registryId <p>所属 Registry ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>动作发起者（主账号 UIN 或子账号 UIN）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Actor <p>动作发起者（主账号 UIN 或子账号 UIN）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetActor() const;

                    /**
                     * 设置<p>动作发起者（主账号 UIN 或子账号 UIN）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _actor <p>动作发起者（主账号 UIN 或子账号 UIN）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActor(const std::string& _actor);

                    /**
                     * 判断参数 Actor 是否已赋值
                     * @return Actor 是否已赋值
                     * 
                     */
                    bool ActorHasBeenSet() const;

                    /**
                     * 获取<p>Action 名称，等同 X-TC-Action。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Action <p>Action 名称，等同 X-TC-Action。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置<p>Action 名称，等同 X-TC-Action。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _action <p>Action 名称，等同 X-TC-Action。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取<p>动作脱敏摘要对象；使用云 API 字段命名，字段随 Action 而变；不包含凭据、预签名 URL 或完整 Descriptor。（JSON 字符串形式）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Details <p>动作脱敏摘要对象；使用云 API 字段命名，字段随 Action 而变；不包含凭据、预签名 URL 或完整 Descriptor。（JSON 字符串形式）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDetails() const;

                    /**
                     * 设置<p>动作脱敏摘要对象；使用云 API 字段命名，字段随 Action 而变；不包含凭据、预签名 URL 或完整 Descriptor。（JSON 字符串形式）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _details <p>动作脱敏摘要对象；使用云 API 字段命名，字段随 Action 而变；不包含凭据、预签名 URL 或完整 Descriptor。（JSON 字符串形式）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDetails(const std::string& _details);

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     * 
                     */
                    bool DetailsHasBeenSet() const;

                    /**
                     * 获取<p>动作发生时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>动作发生时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>动作发生时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>动作发生时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>关联 Record ID；仅 Record / Version 相关动作。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordId <p>关联 Record ID；仅 Record / Version 相关动作。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置<p>关联 Record ID；仅 Record / Version 相关动作。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recordId <p>关联 Record ID；仅 Record / Version 相关动作。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>关联 Version ID；仅 Version 相关动作。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionId <p>关联 Version ID；仅 Version 相关动作。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置<p>关联 Version ID；仅 Version 相关动作。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionId <p>关联 Version ID；仅 Version 相关动作。</p>
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

                private:

                    /**
                     * <p>审计日志 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_auditLogId;
                    bool m_auditLogIdHasBeenSet;

                    /**
                     * <p>所属 Registry ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * <p>动作发起者（主账号 UIN 或子账号 UIN）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_actor;
                    bool m_actorHasBeenSet;

                    /**
                     * <p>Action 名称，等同 X-TC-Action。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>动作脱敏摘要对象；使用云 API 字段命名，字段随 Action 而变；不包含凭据、预签名 URL 或完整 Descriptor。（JSON 字符串形式）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_details;
                    bool m_detailsHasBeenSet;

                    /**
                     * <p>动作发生时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>关联 Record ID；仅 Record / Version 相关动作。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * <p>关联 Version ID；仅 Version 相关动作。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_CLOUDAUDITLOG_H_
