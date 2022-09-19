/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_USERDEFINEDTEMPLATEPARAMS_H_
#define TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_USERDEFINEDTEMPLATEPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudstudio
    {
        namespace V20210524
        {
            namespace Model
            {
                /**
                * 用户自定义模板参数
                */
                class UserDefinedTemplateParams : public AbstractModel
                {
                public:
                    UserDefinedTemplateParams();
                    ~UserDefinedTemplateParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取模板图标地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Icon 模板图标地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIcon() const;

                    /**
                     * 设置模板图标地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Icon 模板图标地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIcon(const std::string& _icon);

                    /**
                     * 判断参数 Icon 是否已赋值
                     * @return Icon 是否已赋值
                     */
                    bool IconHasBeenSet() const;

                    /**
                     * 获取模板标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 模板标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置模板标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Tags 模板标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取模板来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Source 模板来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSource() const;

                    /**
                     * 设置模板来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Source 模板来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取模板描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 模板描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置模板描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Description 模板描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取模板仓库类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionControlType 模板仓库类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVersionControlType() const;

                    /**
                     * 设置模板仓库类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VersionControlType 模板仓库类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVersionControlType(const std::string& _versionControlType);

                    /**
                     * 判断参数 VersionControlType 是否已赋值
                     * @return VersionControlType 是否已赋值
                     */
                    bool VersionControlTypeHasBeenSet() const;

                    /**
                     * 获取模板地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionControlUrl 模板地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVersionControlUrl() const;

                    /**
                     * 设置模板地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VersionControlUrl 模板地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVersionControlUrl(const std::string& _versionControlUrl);

                    /**
                     * 判断参数 VersionControlUrl 是否已赋值
                     * @return VersionControlUrl 是否已赋值
                     */
                    bool VersionControlUrlHasBeenSet() const;

                private:

                    /**
                     * 模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 模板图标地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_icon;
                    bool m_iconHasBeenSet;

                    /**
                     * 模板标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 模板来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 模板描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 模板仓库类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionControlType;
                    bool m_versionControlTypeHasBeenSet;

                    /**
                     * 模板地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionControlUrl;
                    bool m_versionControlUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_USERDEFINEDTEMPLATEPARAMS_H_
