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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_EXPERTITEM_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_EXPERTITEM_H_

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
                * 专家列表/详情项
                */
                class ExpertItem : public AbstractModel
                {
                public:
                    ExpertItem();
                    ~ExpertItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>专家来源：builtin、custom</p>
                     * @return Source <p>专家来源：builtin、custom</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>专家来源：builtin、custom</p>
                     * @param _source <p>专家来源：builtin、custom</p>
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
                     * 获取<p>更新时间</p>
                     * @return ModifiedTime <p>更新时间</p>
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _modifiedTime <p>更新时间</p>
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
                     * 获取<p>启停状态：enabled、disabled</p>
                     * @return Status <p>启停状态：enabled、disabled</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>启停状态：enabled、disabled</p>
                     * @param _status <p>启停状态：enabled、disabled</p>
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
                     * 获取<p>专家标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpertId <p>专家标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpertId() const;

                    /**
                     * 设置<p>专家标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expertId <p>专家标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpertId(const std::string& _expertId);

                    /**
                     * 判断参数 ExpertId 是否已赋值
                     * @return ExpertId 是否已赋值
                     * 
                     */
                    bool ExpertIdHasBeenSet() const;

                    /**
                     * 获取<p>当前生效版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpertVersion <p>当前生效版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpertVersion() const;

                    /**
                     * 设置<p>当前生效版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expertVersion <p>当前生效版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpertVersion(const std::string& _expertVersion);

                    /**
                     * 判断参数 ExpertVersion 是否已赋值
                     * @return ExpertVersion 是否已赋值
                     * 
                     */
                    bool ExpertVersionHasBeenSet() const;

                private:

                    /**
                     * <p>专家来源：builtin、custom</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

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
                     * <p>更新时间</p>
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * <p>启停状态：enabled、disabled</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>专家标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expertId;
                    bool m_expertIdHasBeenSet;

                    /**
                     * <p>当前生效版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expertVersion;
                    bool m_expertVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_EXPERTITEM_H_
