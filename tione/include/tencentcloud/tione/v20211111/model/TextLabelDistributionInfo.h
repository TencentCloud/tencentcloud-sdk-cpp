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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_TEXTLABELDISTRIBUTIONINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_TEXTLABELDISTRIBUTIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/TextLabelDistributionDetailInfoFirstClass.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 文本标签
                */
                class TextLabelDistributionInfo : public AbstractModel
                {
                public:
                    TextLabelDistributionInfo();
                    ~TextLabelDistributionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文本分类题目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Theme 文本分类题目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTheme() const;

                    /**
                     * 设置文本分类题目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _theme 文本分类题目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTheme(const std::string& _theme);

                    /**
                     * 判断参数 Theme 是否已赋值
                     * @return Theme 是否已赋值
                     * 
                     */
                    bool ThemeHasBeenSet() const;

                    /**
                     * 获取一级标签分布
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClassLabelList 一级标签分布
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TextLabelDistributionDetailInfoFirstClass> GetClassLabelList() const;

                    /**
                     * 设置一级标签分布
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _classLabelList 一级标签分布
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClassLabelList(const std::vector<TextLabelDistributionDetailInfoFirstClass>& _classLabelList);

                    /**
                     * 判断参数 ClassLabelList 是否已赋值
                     * @return ClassLabelList 是否已赋值
                     * 
                     */
                    bool ClassLabelListHasBeenSet() const;

                private:

                    /**
                     * 文本分类题目名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_theme;
                    bool m_themeHasBeenSet;

                    /**
                     * 一级标签分布
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TextLabelDistributionDetailInfoFirstClass> m_classLabelList;
                    bool m_classLabelListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_TEXTLABELDISTRIBUTIONINFO_H_
