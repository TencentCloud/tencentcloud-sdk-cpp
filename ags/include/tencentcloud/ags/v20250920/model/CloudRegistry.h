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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_CLOUDREGISTRY_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_CLOUDREGISTRY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/CloudTag.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * Registry 对象。包含注册中心的基本信息与 Record 计数。
                */
                class CloudRegistry : public AbstractModel
                {
                public:
                    CloudRegistry();
                    ~CloudRegistry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Registry ID；格式 <code>reg-</code> + 8 位小写字母/数字。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegistryId <p>Registry ID；格式 <code>reg-</code> + 8 位小写字母/数字。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置<p>Registry ID；格式 <code>reg-</code> + 8 位小写字母/数字。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _registryId <p>Registry ID；格式 <code>reg-</code> + 8 位小写字母/数字。</p>
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
                     * 获取<p>Registry 同一 AppId + Region 唯一名称。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>Registry 同一 AppId + Region 唯一名称。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Registry 同一 AppId + Region 唯一名称。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>Registry 同一 AppId + Region 唯一名称。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>描述。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>描述。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>描述。</p>
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
                     * 获取<p>审批模式；AUTO 自动通过，MANUAL 需人工审批；创建时确定，不可修改。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApprovalMode <p>审批模式；AUTO 自动通过，MANUAL 需人工审批；创建时确定，不可修改。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApprovalMode() const;

                    /**
                     * 设置<p>审批模式；AUTO 自动通过，MANUAL 需人工审批；创建时确定，不可修改。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _approvalMode <p>审批模式；AUTO 自动通过，MANUAL 需人工审批；创建时确定，不可修改。</p>
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
                     * 获取<p>Registry 所在腾讯云地域，如 <code>ap-guangzhou</code>。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region <p>Registry 所在腾讯云地域，如 <code>ap-guangzhou</code>。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Registry 所在腾讯云地域，如 <code>ap-guangzhou</code>。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region <p>Registry 所在腾讯云地域，如 <code>ap-guangzhou</code>。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>Registry 状态。ACTIVE / ARCHIVED。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>Registry 状态。ACTIVE / ARCHIVED。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Registry 状态。ACTIVE / ARCHIVED。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>Registry 状态。ACTIVE / ARCHIVED。</p>
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
                     * 获取<p>创建时间，ISO 8601 UTC，如 <code>2026-08-11T10:00:00Z</code>。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创建时间，ISO 8601 UTC，如 <code>2026-08-11T10:00:00Z</code>。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间，ISO 8601 UTC，如 <code>2026-08-11T10:00:00Z</code>。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>创建时间，ISO 8601 UTC，如 <code>2026-08-11T10:00:00Z</code>。</p>
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
                     * 获取<p>最近一次更新时间，ISO 8601 UTC。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime <p>最近一次更新时间，ISO 8601 UTC。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>最近一次更新时间，ISO 8601 UTC。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime <p>最近一次更新时间，ISO 8601 UTC。</p>
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
                     * 获取<p>Registry 下 Record 总数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordCount <p>Registry 下 Record 总数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRecordCount() const;

                    /**
                     * 设置<p>Registry 下 Record 总数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recordCount <p>Registry 下 Record 总数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecordCount(const int64_t& _recordCount);

                    /**
                     * 判断参数 RecordCount 是否已赋值
                     * @return RecordCount 是否已赋值
                     * 
                     */
                    bool RecordCountHasBeenSet() const;

                    /**
                     * 获取<p>权威读取的腾讯云自定义标签，按 Key、Value 稳定排序；无标签时固定返回空数组，不返回 null。</p>
                     * @return Tags <p>权威读取的腾讯云自定义标签，按 Key、Value 稳定排序；无标签时固定返回空数组，不返回 null。</p>
                     * 
                     */
                    std::vector<CloudTag> GetTags() const;

                    /**
                     * 设置<p>权威读取的腾讯云自定义标签，按 Key、Value 稳定排序；无标签时固定返回空数组，不返回 null。</p>
                     * @param _tags <p>权威读取的腾讯云自定义标签，按 Key、Value 稳定排序；无标签时固定返回空数组，不返回 null。</p>
                     * 
                     */
                    void SetTags(const std::vector<CloudTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>Stable Label 已绑定的 Record 数量。Approved Version 数量和可对外消费的 Record 数量已不再等价。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublishedRecordCount <p>Stable Label 已绑定的 Record 数量。Approved Version 数量和可对外消费的 Record 数量已不再等价。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPublishedRecordCount() const;

                    /**
                     * 设置<p>Stable Label 已绑定的 Record 数量。Approved Version 数量和可对外消费的 Record 数量已不再等价。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publishedRecordCount <p>Stable Label 已绑定的 Record 数量。Approved Version 数量和可对外消费的 Record 数量已不再等价。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublishedRecordCount(const int64_t& _publishedRecordCount);

                    /**
                     * 判断参数 PublishedRecordCount 是否已赋值
                     * @return PublishedRecordCount 是否已赋值
                     * 
                     */
                    bool PublishedRecordCountHasBeenSet() const;

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
                     * 获取<p>创建者子账号 UIN；主账号直接创建时为空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatorSubAccountUin <p>创建者子账号 UIN；主账号直接创建时为空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatorSubAccountUin() const;

                    /**
                     * 设置<p>创建者子账号 UIN；主账号直接创建时为空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creatorSubAccountUin <p>创建者子账号 UIN；主账号直接创建时为空字符串。</p>
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

                private:

                    /**
                     * <p>Registry ID；格式 <code>reg-</code> + 8 位小写字母/数字。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * <p>Registry 同一 AppId + Region 唯一名称。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>描述。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>审批模式；AUTO 自动通过，MANUAL 需人工审批；创建时确定，不可修改。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_approvalMode;
                    bool m_approvalModeHasBeenSet;

                    /**
                     * <p>Registry 所在腾讯云地域，如 <code>ap-guangzhou</code>。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Registry 状态。ACTIVE / ARCHIVED。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>创建时间，ISO 8601 UTC，如 <code>2026-08-11T10:00:00Z</code>。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>最近一次更新时间，ISO 8601 UTC。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Registry 下 Record 总数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_recordCount;
                    bool m_recordCountHasBeenSet;

                    /**
                     * <p>权威读取的腾讯云自定义标签，按 Key、Value 稳定排序；无标签时固定返回空数组，不返回 null。</p>
                     */
                    std::vector<CloudTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Stable Label 已绑定的 Record 数量。Approved Version 数量和可对外消费的 Record 数量已不再等价。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_publishedRecordCount;
                    bool m_publishedRecordCountHasBeenSet;

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
                     * <p>创建者子账号 UIN；主账号直接创建时为空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creatorSubAccountUin;
                    bool m_creatorSubAccountUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_CLOUDREGISTRY_H_
