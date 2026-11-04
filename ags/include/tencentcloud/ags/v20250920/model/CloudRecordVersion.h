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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_CLOUDRECORDVERSION_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_CLOUDRECORDVERSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/CloudVersionApprovalAction.h>
#include <tencentcloud/ags/v20250920/model/HarnessVersionReference.h>
#include <tencentcloud/ags/v20250920/model/MetadataEntry.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * Record 的版本信息，包含不可变描述符、来源配置与审批状态。DescribeRegistryRecordVersionList 另返回所属 Record 当前的 Name、Description、DescriptorType 展示投影；这些展示字段不属于版本快照，其他接口可不返回。
                */
                class CloudRecordVersion : public AbstractModel
                {
                public:
                    CloudRecordVersion();
                    ~CloudRecordVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Version ID；格式 <code>rv-</code> + 8 位小写字母/数字。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionId <p>Version ID；格式 <code>rv-</code> + 8 位小写字母/数字。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置<p>Version ID；格式 <code>rv-</code> + 8 位小写字母/数字。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionId <p>Version ID；格式 <code>rv-</code> + 8 位小写字母/数字。</p>
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
                     * 获取<p>所属 Record ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordId <p>所属 Record ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置<p>所属 Record ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recordId <p>所属 Record ID。</p>
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
                     * 获取<p>Version 递增序号（1 起）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Revision <p>Version 递增序号（1 起）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRevision() const;

                    /**
                     * 设置<p>Version 递增序号（1 起）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _revision <p>Version 递增序号（1 起）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRevision(const int64_t& _revision);

                    /**
                     * 判断参数 Revision 是否已赋值
                     * @return Revision 是否已赋值
                     * 
                     */
                    bool RevisionHasBeenSet() const;

                    /**
                     * 获取<p>Version 状态。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>Version 状态。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Version 状态。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>Version 状态。</p>
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
                     * 获取<p>审批模式；创建时锁定，后续变更 Registry 审批模式不影响本 Version。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApprovalMode <p>审批模式；创建时锁定，后续变更 Registry 审批模式不影响本 Version。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApprovalMode() const;

                    /**
                     * 设置<p>审批模式；创建时锁定，后续变更 Registry 审批模式不影响本 Version。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _approvalMode <p>审批模式；创建时锁定，后续变更 Registry 审批模式不影响本 Version。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApprovalMode(const std::string& _approvalMode);

                    /**
                     * 判断参数 ApprovalMode 是否已赋值
                     * @return ApprovalMode 是否已赋值
                     * 
                     */
                    bool ApprovalModeHasBeenSet() const;

                    /**
                     * 获取<p>所属租户 AppId。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId <p>所属租户 AppId。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>所属租户 AppId。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId <p>所属租户 AppId。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>创建者主账号 UIN。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatorUin <p>创建者主账号 UIN。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatorUin() const;

                    /**
                     * 设置<p>创建者主账号 UIN。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creatorUin <p>创建者主账号 UIN。</p>
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
                     * 获取<p>创建时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创建时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>创建时间。</p>
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
                     * 获取<p>最近一次更新时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime <p>最近一次更新时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>最近一次更新时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime <p>最近一次更新时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Version 别名（可选）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionName <p>Version 别名（可选）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置<p>Version 别名（可选）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionName <p>Version 别名（可选）。</p>
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
                     * 获取<p>协议描述符对象。（JSON 字符串形式）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Descriptors <p>协议描述符对象。（JSON 字符串形式）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescriptors() const;

                    /**
                     * 设置<p>协议描述符对象。（JSON 字符串形式）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _descriptors <p>协议描述符对象。（JSON 字符串形式）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescriptors(const std::string& _descriptors);

                    /**
                     * 判断参数 Descriptors 是否已赋值
                     * @return Descriptors 是否已赋值
                     * 
                     */
                    bool DescriptorsHasBeenSet() const;

                    /**
                     * 获取<p>内容来源。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceType <p>内容来源。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置<p>内容来源。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceType <p>内容来源。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>规范化来源配置对象。（JSON 字符串形式）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceConfig <p>规范化来源配置对象。（JSON 字符串形式）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceConfig() const;

                    /**
                     * 设置<p>规范化来源配置对象。（JSON 字符串形式）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceConfig <p>规范化来源配置对象。（JSON 字符串形式）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceConfig(const std::string& _sourceConfig);

                    /**
                     * 判断参数 SourceConfig 是否已赋值
                     * @return SourceConfig 是否已赋值
                     * 
                     */
                    bool SourceConfigHasBeenSet() const;

                    /**
                     * 获取<p>内容状态。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContentStatus <p>内容状态。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContentStatus() const;

                    /**
                     * 设置<p>内容状态。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contentStatus <p>内容状态。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContentStatus(const std::string& _contentStatus);

                    /**
                     * 判断参数 ContentStatus 是否已赋值
                     * @return ContentStatus 是否已赋值
                     * 
                     */
                    bool ContentStatusHasBeenSet() const;

                    /**
                     * 获取<p>READY 内容 SHA-256。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContentSHA256 <p>READY 内容 SHA-256。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContentSHA256() const;

                    /**
                     * 设置<p>READY 内容 SHA-256。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contentSHA256 <p>READY 内容 SHA-256。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContentSHA256(const std::string& _contentSHA256);

                    /**
                     * 判断参数 ContentSHA256 是否已赋值
                     * @return ContentSHA256 是否已赋值
                     * 
                     */
                    bool ContentSHA256HasBeenSet() const;

                    /**
                     * 获取<p>READY 内容字节数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContentSizeBytes <p>READY 内容字节数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetContentSizeBytes() const;

                    /**
                     * 设置<p>READY 内容字节数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contentSizeBytes <p>READY 内容字节数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContentSizeBytes(const int64_t& _contentSizeBytes);

                    /**
                     * 判断参数 ContentSizeBytes 是否已赋值
                     * @return ContentSizeBytes 是否已赋值
                     * 
                     */
                    bool ContentSizeBytesHasBeenSet() const;

                    /**
                     * 获取<p>配置内容规范化后的 SHA-256（用于幂等去重）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigSHA256 <p>配置内容规范化后的 SHA-256（用于幂等去重）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigSHA256() const;

                    /**
                     * 设置<p>配置内容规范化后的 SHA-256（用于幂等去重）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configSHA256 <p>配置内容规范化后的 SHA-256（用于幂等去重）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigSHA256(const std::string& _configSHA256);

                    /**
                     * 判断参数 ConfigSHA256 是否已赋值
                     * @return ConfigSHA256 是否已赋值
                     * 
                     */
                    bool ConfigSHA256HasBeenSet() const;

                    /**
                     * 获取<p>创建者子账号 UIN。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatorSubAccountUin <p>创建者子账号 UIN。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatorSubAccountUin() const;

                    /**
                     * 设置<p>创建者子账号 UIN。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creatorSubAccountUin <p>创建者子账号 UIN。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatorSubAccountUin(const std::string& _creatorSubAccountUin);

                    /**
                     * 判断参数 CreatorSubAccountUin 是否已赋值
                     * @return CreatorSubAccountUin 是否已赋值
                     * 
                     */
                    bool CreatorSubAccountUinHasBeenSet() const;

                    /**
                     * 获取<p>Version 历次审批动作。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApprovalActions <p>Version 历次审批动作。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CloudVersionApprovalAction> GetApprovalActions() const;

                    /**
                     * 设置<p>Version 历次审批动作。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _approvalActions <p>Version 历次审批动作。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApprovalActions(const std::vector<CloudVersionApprovalAction>& _approvalActions);

                    /**
                     * 判断参数 ApprovalActions 是否已赋值
                     * @return ApprovalActions 是否已赋值
                     * 
                     */
                    bool ApprovalActionsHasBeenSet() const;

                    /**
                     * 获取<p>文件内容就绪时间，UTC RFC3339 格式。</p><p>仅 TAR_PACKAGE 或 FILE 来源且 ContentStatus=READY 的版本返回；其他来源或未就绪文件为空。Skill 沿用现有 TAR 内容校验机制，Plugin 仅确认文件大小和完整性。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContentReadyTime <p>文件内容就绪时间，UTC RFC3339 格式。</p><p>仅 TAR_PACKAGE 或 FILE 来源且 ContentStatus=READY 的版本返回；其他来源或未就绪文件为空。Skill 沿用现有 TAR 内容校验机制，Plugin 仅确认文件大小和完整性。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContentReadyTime() const;

                    /**
                     * 设置<p>文件内容就绪时间，UTC RFC3339 格式。</p><p>仅 TAR_PACKAGE 或 FILE 来源且 ContentStatus=READY 的版本返回；其他来源或未就绪文件为空。Skill 沿用现有 TAR 内容校验机制，Plugin 仅确认文件大小和完整性。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contentReadyTime <p>文件内容就绪时间，UTC RFC3339 格式。</p><p>仅 TAR_PACKAGE 或 FILE 来源且 ContentStatus=READY 的版本返回；其他来源或未就绪文件为空。Skill 沿用现有 TAR 内容校验机制，Plugin 仅确认文件大小和完整性。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContentReadyTime(const std::string& _contentReadyTime);

                    /**
                     * 判断参数 ContentReadyTime 是否已赋值
                     * @return ContentReadyTime 是否已赋值
                     * 
                     */
                    bool ContentReadyTimeHasBeenSet() const;

                    /**
                     * 获取<p>本次 Version 的变更原因，最大 4096 字符；不可修改。Revision 1 或未填写时返回空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChangeLog <p>本次 Version 的变更原因，最大 4096 字符；不可修改。Revision 1 或未填写时返回空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChangeLog() const;

                    /**
                     * 设置<p>本次 Version 的变更原因，最大 4096 字符；不可修改。Revision 1 或未填写时返回空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _changeLog <p>本次 Version 的变更原因，最大 4096 字符；不可修改。Revision 1 或未填写时返回空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>当前绑定该 Version 的 Label Name 列表（例如 stable / latest 或自定义 Label 名称）。未绑定 Label 不在此返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelSet <p>当前绑定该 Version 的 Label Name 列表（例如 stable / latest 或自定义 Label 名称）。未绑定 Label 不在此返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetLabelSet() const;

                    /**
                     * 设置<p>当前绑定该 Version 的 Label Name 列表（例如 stable / latest 或自定义 Label 名称）。未绑定 Label 不在此返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelSet <p>当前绑定该 Version 的 Label Name 列表（例如 stable / latest 或自定义 Label 名称）。未绑定 Label 不在此返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabelSet(const std::vector<std::string>& _labelSet);

                    /**
                     * 判断参数 LabelSet 是否已赋值
                     * @return LabelSet 是否已赋值
                     * 
                     */
                    bool LabelSetHasBeenSet() const;

                    /**
                     * 获取<p>该资产版本支持的 Harness 引擎与具体版本对象列表。</p><p>参数格式：元素为 HarnessVersionReference，包含必填的 HarnessEngine 和 HarnessEngineVersion，原样使用 DescribeHarnessEngineList 返回值；每个字段 1 至 128 字符，最多 128 项，按二元组区分大小写去重。不使用拼接标识、通配符或版本范围。</p><p>默认值：[]</p><p>随版本创建，不继承。省略或空列表表示未声明，不代表支持所有 Harness。旧字符串快照按未声明返回 []，不推断引擎，不匹配兼容筛选。supported_harness_engine 和 supported_harness_version 必须同时传入并精确匹配同一个对象；Managed Harness 按目标引擎与版本二元组校验。</p>
                     * @return SupportedHarnessVersions <p>该资产版本支持的 Harness 引擎与具体版本对象列表。</p><p>参数格式：元素为 HarnessVersionReference，包含必填的 HarnessEngine 和 HarnessEngineVersion，原样使用 DescribeHarnessEngineList 返回值；每个字段 1 至 128 字符，最多 128 项，按二元组区分大小写去重。不使用拼接标识、通配符或版本范围。</p><p>默认值：[]</p><p>随版本创建，不继承。省略或空列表表示未声明，不代表支持所有 Harness。旧字符串快照按未声明返回 []，不推断引擎，不匹配兼容筛选。supported_harness_engine 和 supported_harness_version 必须同时传入并精确匹配同一个对象；Managed Harness 按目标引擎与版本二元组校验。</p>
                     * 
                     */
                    std::vector<HarnessVersionReference> GetSupportedHarnessVersions() const;

                    /**
                     * 设置<p>该资产版本支持的 Harness 引擎与具体版本对象列表。</p><p>参数格式：元素为 HarnessVersionReference，包含必填的 HarnessEngine 和 HarnessEngineVersion，原样使用 DescribeHarnessEngineList 返回值；每个字段 1 至 128 字符，最多 128 项，按二元组区分大小写去重。不使用拼接标识、通配符或版本范围。</p><p>默认值：[]</p><p>随版本创建，不继承。省略或空列表表示未声明，不代表支持所有 Harness。旧字符串快照按未声明返回 []，不推断引擎，不匹配兼容筛选。supported_harness_engine 和 supported_harness_version 必须同时传入并精确匹配同一个对象；Managed Harness 按目标引擎与版本二元组校验。</p>
                     * @param _supportedHarnessVersions <p>该资产版本支持的 Harness 引擎与具体版本对象列表。</p><p>参数格式：元素为 HarnessVersionReference，包含必填的 HarnessEngine 和 HarnessEngineVersion，原样使用 DescribeHarnessEngineList 返回值；每个字段 1 至 128 字符，最多 128 项，按二元组区分大小写去重。不使用拼接标识、通配符或版本范围。</p><p>默认值：[]</p><p>随版本创建，不继承。省略或空列表表示未声明，不代表支持所有 Harness。旧字符串快照按未声明返回 []，不推断引擎，不匹配兼容筛选。supported_harness_engine 和 supported_harness_version 必须同时传入并精确匹配同一个对象；Managed Harness 按目标引擎与版本二元组校验。</p>
                     * 
                     */
                    void SetSupportedHarnessVersions(const std::vector<HarnessVersionReference>& _supportedHarnessVersions);

                    /**
                     * 判断参数 SupportedHarnessVersions 是否已赋值
                     * @return SupportedHarnessVersions 是否已赋值
                     * 
                     */
                    bool SupportedHarnessVersionsHasBeenSet() const;

                    /**
                     * 获取<p>版本元数据的 Name/Value 对象数组。</p><p>参数格式：每项仅包含必填的 Name、Value 两个字符串字段。Name 非空、小写且数组内唯一，不自动转换；重复 Name 即使 Value 相同也返回 InvalidParameter。Value 允许空字符串，保留大小写；不接受嵌套对象、数组或非字符串值。</p><p>默认值：空数组 []。创建新版本时省略或 [] 均为空，不继承；null、JSON 字符串和原生对象非法。响应按 Name 升序返回，旧 SQL NULL 归一为 []。服务内部使用 map[string]string，数据库 JSON 列保存对象。publisher 表示发布者展示名称；metadata.&lt;key&gt; 按完整小写名称精确筛选，规则不变。</p>
                     * @return Metadata <p>版本元数据的 Name/Value 对象数组。</p><p>参数格式：每项仅包含必填的 Name、Value 两个字符串字段。Name 非空、小写且数组内唯一，不自动转换；重复 Name 即使 Value 相同也返回 InvalidParameter。Value 允许空字符串，保留大小写；不接受嵌套对象、数组或非字符串值。</p><p>默认值：空数组 []。创建新版本时省略或 [] 均为空，不继承；null、JSON 字符串和原生对象非法。响应按 Name 升序返回，旧 SQL NULL 归一为 []。服务内部使用 map[string]string，数据库 JSON 列保存对象。publisher 表示发布者展示名称；metadata.&lt;key&gt; 按完整小写名称精确筛选，规则不变。</p>
                     * 
                     */
                    std::vector<MetadataEntry> GetMetadata() const;

                    /**
                     * 设置<p>版本元数据的 Name/Value 对象数组。</p><p>参数格式：每项仅包含必填的 Name、Value 两个字符串字段。Name 非空、小写且数组内唯一，不自动转换；重复 Name 即使 Value 相同也返回 InvalidParameter。Value 允许空字符串，保留大小写；不接受嵌套对象、数组或非字符串值。</p><p>默认值：空数组 []。创建新版本时省略或 [] 均为空，不继承；null、JSON 字符串和原生对象非法。响应按 Name 升序返回，旧 SQL NULL 归一为 []。服务内部使用 map[string]string，数据库 JSON 列保存对象。publisher 表示发布者展示名称；metadata.&lt;key&gt; 按完整小写名称精确筛选，规则不变。</p>
                     * @param _metadata <p>版本元数据的 Name/Value 对象数组。</p><p>参数格式：每项仅包含必填的 Name、Value 两个字符串字段。Name 非空、小写且数组内唯一，不自动转换；重复 Name 即使 Value 相同也返回 InvalidParameter。Value 允许空字符串，保留大小写；不接受嵌套对象、数组或非字符串值。</p><p>默认值：空数组 []。创建新版本时省略或 [] 均为空，不继承；null、JSON 字符串和原生对象非法。响应按 Name 升序返回，旧 SQL NULL 归一为 []。服务内部使用 map[string]string，数据库 JSON 列保存对象。publisher 表示发布者展示名称；metadata.&lt;key&gt; 按完整小写名称精确筛选，规则不变。</p>
                     * 
                     */
                    void SetMetadata(const std::vector<MetadataEntry>& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                    /**
                     * 获取<p>所属 Record 当前的名称。仅 DescribeRegistryRecordVersionList 在普通模式和市场模式中返回，用于卡片展示。</p><p>展示投影不保存到不可变版本快照；其他返回版本信息的接口可不包含此字段。</p>
                     * @return Name <p>所属 Record 当前的名称。仅 DescribeRegistryRecordVersionList 在普通模式和市场模式中返回，用于卡片展示。</p><p>展示投影不保存到不可变版本快照；其他返回版本信息的接口可不包含此字段。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>所属 Record 当前的名称。仅 DescribeRegistryRecordVersionList 在普通模式和市场模式中返回，用于卡片展示。</p><p>展示投影不保存到不可变版本快照；其他返回版本信息的接口可不包含此字段。</p>
                     * @param _name <p>所属 Record 当前的名称。仅 DescribeRegistryRecordVersionList 在普通模式和市场模式中返回，用于卡片展示。</p><p>展示投影不保存到不可变版本快照；其他返回版本信息的接口可不包含此字段。</p>
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
                     * 获取<p>所属 Record 当前的描述。仅 DescribeRegistryRecordVersionList 在普通模式和市场模式中返回，允许为空字符串。</p><p>Record 描述更新后，列表查询同步反映新值，包括空字符串；固定 VersionId、Descriptors 和其他版本内容不变。其他返回版本信息的接口可不包含此字段。</p>
                     * @return Description <p>所属 Record 当前的描述。仅 DescribeRegistryRecordVersionList 在普通模式和市场模式中返回，允许为空字符串。</p><p>Record 描述更新后，列表查询同步反映新值，包括空字符串；固定 VersionId、Descriptors 和其他版本内容不变。其他返回版本信息的接口可不包含此字段。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>所属 Record 当前的描述。仅 DescribeRegistryRecordVersionList 在普通模式和市场模式中返回，允许为空字符串。</p><p>Record 描述更新后，列表查询同步反映新值，包括空字符串；固定 VersionId、Descriptors 和其他版本内容不变。其他返回版本信息的接口可不包含此字段。</p>
                     * @param _description <p>所属 Record 当前的描述。仅 DescribeRegistryRecordVersionList 在普通模式和市场模式中返回，允许为空字符串。</p><p>Record 描述更新后，列表查询同步反映新值，包括空字符串；固定 VersionId、Descriptors 和其他版本内容不变。其他返回版本信息的接口可不包含此字段。</p>
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
                     * 获取<p>所属 Record 的底层资产类型。仅 DescribeRegistryRecordVersionList 在普通模式和市场模式中返回，用于卡片展示及 descriptor_type 筛选。</p><p>取值包括 MCP、A2A、AGUI、CUSTOM、AGENT_SKILLS 和 PLUGIN。不新增 Kind 或 TOOL 类型；此展示投影不保存到版本快照，其他返回版本信息的接口可不包含此字段。</p>
                     * @return DescriptorType <p>所属 Record 的底层资产类型。仅 DescribeRegistryRecordVersionList 在普通模式和市场模式中返回，用于卡片展示及 descriptor_type 筛选。</p><p>取值包括 MCP、A2A、AGUI、CUSTOM、AGENT_SKILLS 和 PLUGIN。不新增 Kind 或 TOOL 类型；此展示投影不保存到版本快照，其他返回版本信息的接口可不包含此字段。</p>
                     * 
                     */
                    std::string GetDescriptorType() const;

                    /**
                     * 设置<p>所属 Record 的底层资产类型。仅 DescribeRegistryRecordVersionList 在普通模式和市场模式中返回，用于卡片展示及 descriptor_type 筛选。</p><p>取值包括 MCP、A2A、AGUI、CUSTOM、AGENT_SKILLS 和 PLUGIN。不新增 Kind 或 TOOL 类型；此展示投影不保存到版本快照，其他返回版本信息的接口可不包含此字段。</p>
                     * @param _descriptorType <p>所属 Record 的底层资产类型。仅 DescribeRegistryRecordVersionList 在普通模式和市场模式中返回，用于卡片展示及 descriptor_type 筛选。</p><p>取值包括 MCP、A2A、AGUI、CUSTOM、AGENT_SKILLS 和 PLUGIN。不新增 Kind 或 TOOL 类型；此展示投影不保存到版本快照，其他返回版本信息的接口可不包含此字段。</p>
                     * 
                     */
                    void SetDescriptorType(const std::string& _descriptorType);

                    /**
                     * 判断参数 DescriptorType 是否已赋值
                     * @return DescriptorType 是否已赋值
                     * 
                     */
                    bool DescriptorTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Version ID；格式 <code>rv-</code> + 8 位小写字母/数字。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * <p>所属 Record ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * <p>Version 递增序号（1 起）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_revision;
                    bool m_revisionHasBeenSet;

                    /**
                     * <p>Version 状态。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>审批模式；创建时锁定，后续变更 Registry 审批模式不影响本 Version。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_approvalMode;
                    bool m_approvalModeHasBeenSet;

                    /**
                     * <p>所属租户 AppId。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>创建者主账号 UIN。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * <p>创建时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>最近一次更新时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Version 别名（可选）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * <p>协议描述符对象。（JSON 字符串形式）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_descriptors;
                    bool m_descriptorsHasBeenSet;

                    /**
                     * <p>内容来源。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * <p>规范化来源配置对象。（JSON 字符串形式）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceConfig;
                    bool m_sourceConfigHasBeenSet;

                    /**
                     * <p>内容状态。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contentStatus;
                    bool m_contentStatusHasBeenSet;

                    /**
                     * <p>READY 内容 SHA-256。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contentSHA256;
                    bool m_contentSHA256HasBeenSet;

                    /**
                     * <p>READY 内容字节数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_contentSizeBytes;
                    bool m_contentSizeBytesHasBeenSet;

                    /**
                     * <p>配置内容规范化后的 SHA-256（用于幂等去重）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configSHA256;
                    bool m_configSHA256HasBeenSet;

                    /**
                     * <p>创建者子账号 UIN。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creatorSubAccountUin;
                    bool m_creatorSubAccountUinHasBeenSet;

                    /**
                     * <p>Version 历次审批动作。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CloudVersionApprovalAction> m_approvalActions;
                    bool m_approvalActionsHasBeenSet;

                    /**
                     * <p>文件内容就绪时间，UTC RFC3339 格式。</p><p>仅 TAR_PACKAGE 或 FILE 来源且 ContentStatus=READY 的版本返回；其他来源或未就绪文件为空。Skill 沿用现有 TAR 内容校验机制，Plugin 仅确认文件大小和完整性。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contentReadyTime;
                    bool m_contentReadyTimeHasBeenSet;

                    /**
                     * <p>本次 Version 的变更原因，最大 4096 字符；不可修改。Revision 1 或未填写时返回空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_changeLog;
                    bool m_changeLogHasBeenSet;

                    /**
                     * <p>当前绑定该 Version 的 Label Name 列表（例如 stable / latest 或自定义 Label 名称）。未绑定 Label 不在此返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_labelSet;
                    bool m_labelSetHasBeenSet;

                    /**
                     * <p>该资产版本支持的 Harness 引擎与具体版本对象列表。</p><p>参数格式：元素为 HarnessVersionReference，包含必填的 HarnessEngine 和 HarnessEngineVersion，原样使用 DescribeHarnessEngineList 返回值；每个字段 1 至 128 字符，最多 128 项，按二元组区分大小写去重。不使用拼接标识、通配符或版本范围。</p><p>默认值：[]</p><p>随版本创建，不继承。省略或空列表表示未声明，不代表支持所有 Harness。旧字符串快照按未声明返回 []，不推断引擎，不匹配兼容筛选。supported_harness_engine 和 supported_harness_version 必须同时传入并精确匹配同一个对象；Managed Harness 按目标引擎与版本二元组校验。</p>
                     */
                    std::vector<HarnessVersionReference> m_supportedHarnessVersions;
                    bool m_supportedHarnessVersionsHasBeenSet;

                    /**
                     * <p>版本元数据的 Name/Value 对象数组。</p><p>参数格式：每项仅包含必填的 Name、Value 两个字符串字段。Name 非空、小写且数组内唯一，不自动转换；重复 Name 即使 Value 相同也返回 InvalidParameter。Value 允许空字符串，保留大小写；不接受嵌套对象、数组或非字符串值。</p><p>默认值：空数组 []。创建新版本时省略或 [] 均为空，不继承；null、JSON 字符串和原生对象非法。响应按 Name 升序返回，旧 SQL NULL 归一为 []。服务内部使用 map[string]string，数据库 JSON 列保存对象。publisher 表示发布者展示名称；metadata.&lt;key&gt; 按完整小写名称精确筛选，规则不变。</p>
                     */
                    std::vector<MetadataEntry> m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * <p>所属 Record 当前的名称。仅 DescribeRegistryRecordVersionList 在普通模式和市场模式中返回，用于卡片展示。</p><p>展示投影不保存到不可变版本快照；其他返回版本信息的接口可不包含此字段。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>所属 Record 当前的描述。仅 DescribeRegistryRecordVersionList 在普通模式和市场模式中返回，允许为空字符串。</p><p>Record 描述更新后，列表查询同步反映新值，包括空字符串；固定 VersionId、Descriptors 和其他版本内容不变。其他返回版本信息的接口可不包含此字段。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>所属 Record 的底层资产类型。仅 DescribeRegistryRecordVersionList 在普通模式和市场模式中返回，用于卡片展示及 descriptor_type 筛选。</p><p>取值包括 MCP、A2A、AGUI、CUSTOM、AGENT_SKILLS 和 PLUGIN。不新增 Kind 或 TOOL 类型；此展示投影不保存到版本快照，其他返回版本信息的接口可不包含此字段。</p>
                     */
                    std::string m_descriptorType;
                    bool m_descriptorTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_CLOUDRECORDVERSION_H_
