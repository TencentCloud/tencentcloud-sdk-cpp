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

#ifndef TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_CUSTOMIZETEMPLATESPRESETSINFO_H_
#define TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_CUSTOMIZETEMPLATESPRESETSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudstudio/v20210524/model/UserDefinedTemplateParams.h>


namespace TencentCloud
{
    namespace Cloudstudio
    {
        namespace V20210524
        {
            namespace Model
            {
                /**
                * 模板的预置参数
                */
                class CustomizeTemplatesPresetsInfo : public AbstractModel
                {
                public:
                    CustomizeTemplatesPresetsInfo();
                    ~CustomizeTemplatesPresetsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模板tag列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 模板tag列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置模板tag列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Tags 模板tag列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取模板图标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Icons 模板图标列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetIcons() const;

                    /**
                     * 设置模板图标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Icons 模板图标列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIcons(const std::vector<std::string>& _icons);

                    /**
                     * 判断参数 Icons 是否已赋值
                     * @return Icons 是否已赋值
                     */
                    bool IconsHasBeenSet() const;

                    /**
                     * 获取无
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Templates 无
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    UserDefinedTemplateParams GetTemplates() const;

                    /**
                     * 设置无
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Templates 无
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTemplates(const UserDefinedTemplateParams& _templates);

                    /**
                     * 判断参数 Templates 是否已赋值
                     * @return Templates 是否已赋值
                     */
                    bool TemplatesHasBeenSet() const;

                private:

                    /**
                     * 模板tag列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 模板图标列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_icons;
                    bool m_iconsHasBeenSet;

                    /**
                     * 无
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    UserDefinedTemplateParams m_templates;
                    bool m_templatesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_CUSTOMIZETEMPLATESPRESETSINFO_H_
