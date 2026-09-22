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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_SKILLITEM_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_SKILLITEM_H_

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
                * Skill 列表项（按列表页展示裁剪：名称/版本/描述/状态/操作五列 + 编排所需的 Source 与 DownloadUrl）
                */
                class SkillItem : public AbstractModel
                {
                public:
                    SkillItem();
                    ~SkillItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取技能来源：BUILTIN（内置）/ CUSTOM（自建）/ AUTHORIZED（企业授权）
                     * @return Source 技能来源：BUILTIN（内置）/ CUSTOM（自建）/ AUTHORIZED（企业授权）
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置技能来源：BUILTIN（内置）/ CUSTOM（自建）/ AUTHORIZED（企业授权）
                     * @param _source 技能来源：BUILTIN（内置）/ CUSTOM（自建）/ AUTHORIZED（企业授权）
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>slug（仅 custom 返回）</p>
                     * @return Name <p>slug（仅 custom 返回）</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>slug（仅 custom 返回）</p>
                     * @param _name <p>slug（仅 custom 返回）</p>
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
                     * 获取<p>展示名</p>
                     * @return DisplayName <p>展示名</p>
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置<p>展示名</p>
                     * @param _displayName <p>展示名</p>
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _description <p>描述</p>
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
                     * 获取<p>图标 URL</p>
                     * @return Icon <p>图标 URL</p>
                     * 
                     */
                    std::string GetIcon() const;

                    /**
                     * 设置<p>图标 URL</p>
                     * @param _icon <p>图标 URL</p>
                     * 
                     */
                    void SetIcon(const std::string& _icon);

                    /**
                     * 判断参数 Icon 是否已赋值
                     * @return Icon 是否已赋值
                     * 
                     */
                    bool IconHasBeenSet() const;

                    /**
                     * 获取<p>是否启用</p>
                     * @return Enabled <p>是否启用</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>是否启用</p>
                     * @param _enabled <p>是否启用</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>下载 URL</p>
                     * @return DownloadUrl <p>下载 URL</p>
                     * 
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 设置<p>下载 URL</p>
                     * @param _downloadUrl <p>下载 URL</p>
                     * 
                     */
                    void SetDownloadUrl(const std::string& _downloadUrl);

                    /**
                     * 判断参数 DownloadUrl 是否已赋值
                     * @return DownloadUrl 是否已赋值
                     * 
                     */
                    bool DownloadUrlHasBeenSet() const;

                    /**
                     * 获取<p>技能标识</p>
                     * @return SkillId <p>技能标识</p>
                     * 
                     */
                    std::string GetSkillId() const;

                    /**
                     * 设置<p>技能标识</p>
                     * @param _skillId <p>技能标识</p>
                     * 
                     */
                    void SetSkillId(const std::string& _skillId);

                    /**
                     * 判断参数 SkillId 是否已赋值
                     * @return SkillId 是否已赋值
                     * 
                     */
                    bool SkillIdHasBeenSet() const;

                    /**
                     * 获取<p>当前生效版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SkillVersion <p>当前生效版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSkillVersion() const;

                    /**
                     * 设置<p>当前生效版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _skillVersion <p>当前生效版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSkillVersion(const std::string& _skillVersion);

                    /**
                     * 判断参数 SkillVersion 是否已赋值
                     * @return SkillVersion 是否已赋值
                     * 
                     */
                    bool SkillVersionHasBeenSet() const;

                    /**
                     * 获取创建时间，RFC3339 UTC 格式（如 2026-08-11T09:23:10Z）
                     * @return CreateTime 创建时间，RFC3339 UTC 格式（如 2026-08-11T09:23:10Z）
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间，RFC3339 UTC 格式（如 2026-08-11T09:23:10Z）
                     * @param _createTime 创建时间，RFC3339 UTC 格式（如 2026-08-11T09:23:10Z）
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
                     * 获取更新时间，RFC3339 UTC 格式（如 2026-09-15T06:51:26Z）
                     * @return UpdateTime 更新时间，RFC3339 UTC 格式（如 2026-09-15T06:51:26Z）
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间，RFC3339 UTC 格式（如 2026-09-15T06:51:26Z）
                     * @param _updateTime 更新时间，RFC3339 UTC 格式（如 2026-09-15T06:51:26Z）
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 技能来源：BUILTIN（内置）/ CUSTOM（自建）/ AUTHORIZED（企业授权）
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>slug（仅 custom 返回）</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>展示名</p>
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>图标 URL</p>
                     */
                    std::string m_icon;
                    bool m_iconHasBeenSet;

                    /**
                     * <p>是否启用</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>下载 URL</p>
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                    /**
                     * <p>技能标识</p>
                     */
                    std::string m_skillId;
                    bool m_skillIdHasBeenSet;

                    /**
                     * <p>当前生效版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_skillVersion;
                    bool m_skillVersionHasBeenSet;

                    /**
                     * 创建时间，RFC3339 UTC 格式（如 2026-08-11T09:23:10Z）
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间，RFC3339 UTC 格式（如 2026-09-15T06:51:26Z）
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_SKILLITEM_H_
