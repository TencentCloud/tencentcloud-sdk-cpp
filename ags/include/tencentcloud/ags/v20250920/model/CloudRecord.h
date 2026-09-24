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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_CLOUDRECORD_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_CLOUDRECORD_H_

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
                * Registry Record 对象。Record 只保存元数据；协议描述符与内容状态请通过 Version 相关接口获取。
                */
                class CloudRecord : public AbstractModel
                {
                public:
                    CloudRecord();
                    ~CloudRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Record ID；格式 <code>rec-</code> + 8 位小写字母/数字。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordId <p>Record ID；格式 <code>rec-</code> + 8 位小写字母/数字。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置<p>Record ID；格式 <code>rec-</code> + 8 位小写字母/数字。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recordId <p>Record ID；格式 <code>rec-</code> + 8 位小写字母/数字。</p>
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
                     * 获取<p>Record 名称；同一 Registry 内可重复。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>Record 名称；同一 Registry 内可重复。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Record 名称；同一 Registry 内可重复。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>Record 名称；同一 Registry 内可重复。</p>
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
                     * 获取<p>协议描述符类型；创建后不可变。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DescriptorType <p>协议描述符类型；创建后不可变。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescriptorType() const;

                    /**
                     * 设置<p>协议描述符类型；创建后不可变。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _descriptorType <p>协议描述符类型；创建后不可变。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>生命周期状态。ACTIVE：可用；DELETED：软删除墓碑，不再参与常规查询、下发或版本配额。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LifecycleStatus <p>生命周期状态。ACTIVE：可用；DELETED：软删除墓碑，不再参与常规查询、下发或版本配额。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLifecycleStatus() const;

                    /**
                     * 设置<p>生命周期状态。ACTIVE：可用；DELETED：软删除墓碑，不再参与常规查询、下发或版本配额。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lifecycleStatus <p>生命周期状态。ACTIVE：可用；DELETED：软删除墓碑，不再参与常规查询、下发或版本配额。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLifecycleStatus(const std::string& _lifecycleStatus);

                    /**
                     * 判断参数 LifecycleStatus 是否已赋值
                     * @return LifecycleStatus 是否已赋值
                     * 
                     */
                    bool LifecycleStatusHasBeenSet() const;

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
                     * 获取<p>创建者子账号 UIN；主账号直接创建时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatorSubAccountUin <p>创建者子账号 UIN；主账号直接创建时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatorSubAccountUin() const;

                    /**
                     * 设置<p>创建者子账号 UIN；主账号直接创建时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creatorSubAccountUin <p>创建者子账号 UIN；主账号直接创建时为空。</p>
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
                     * 获取<p>创建时间，ISO 8601 UTC。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创建时间，ISO 8601 UTC。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间，ISO 8601 UTC。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>创建时间，ISO 8601 UTC。</p>
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
                     * 获取<p>Record 下未删除 Version 数量。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionCount <p>Record 下未删除 Version 数量。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetVersionCount() const;

                    /**
                     * 设置<p>Record 下未删除 Version 数量。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionCount <p>Record 下未删除 Version 数量。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersionCount(const int64_t& _versionCount);

                    /**
                     * 判断参数 VersionCount 是否已赋值
                     * @return VersionCount 是否已赋值
                     * 
                     */
                    bool VersionCountHasBeenSet() const;

                    /**
                     * 获取<p>Record 下所有 Label Name（含未绑定 Label），包括系统 Label（stable / latest）和自定义 Label。仅名称，不含 VersionId、更新时间或操作者。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelSet <p>Record 下所有 Label Name（含未绑定 Label），包括系统 Label（stable / latest）和自定义 Label。仅名称，不含 VersionId、更新时间或操作者。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetLabelSet() const;

                    /**
                     * 设置<p>Record 下所有 Label Name（含未绑定 Label），包括系统 Label（stable / latest）和自定义 Label。仅名称，不含 VersionId、更新时间或操作者。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelSet <p>Record 下所有 Label Name（含未绑定 Label），包括系统 Label（stable / latest）和自定义 Label。仅名称，不含 VersionId、更新时间或操作者。</p>
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

                private:

                    /**
                     * <p>Record ID；格式 <code>rec-</code> + 8 位小写字母/数字。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * <p>所属 Registry ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * <p>Record 名称；同一 Registry 内可重复。</p>
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
                     * <p>协议描述符类型；创建后不可变。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_descriptorType;
                    bool m_descriptorTypeHasBeenSet;

                    /**
                     * <p>生命周期状态。ACTIVE：可用；DELETED：软删除墓碑，不再参与常规查询、下发或版本配额。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lifecycleStatus;
                    bool m_lifecycleStatusHasBeenSet;

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
                     * <p>创建者子账号 UIN；主账号直接创建时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creatorSubAccountUin;
                    bool m_creatorSubAccountUinHasBeenSet;

                    /**
                     * <p>创建时间，ISO 8601 UTC。</p>
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
                     * <p>Record 下未删除 Version 数量。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_versionCount;
                    bool m_versionCountHasBeenSet;

                    /**
                     * <p>Record 下所有 Label Name（含未绑定 Label），包括系统 Label（stable / latest）和自定义 Label。仅名称，不含 VersionId、更新时间或操作者。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_labelSet;
                    bool m_labelSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_CLOUDRECORD_H_
