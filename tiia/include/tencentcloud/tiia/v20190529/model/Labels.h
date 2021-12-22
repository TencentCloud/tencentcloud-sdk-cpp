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

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_LABELS_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_LABELS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            namespace Model
            {
                /**
                * 名人识别的标签
                */
                class Labels : public AbstractModel
                {
                public:
                    Labels();
                    ~Labels() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取公众人物身份标签的一级分类，例如体育明星、娱乐明星等；
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstLabel 公众人物身份标签的一级分类，例如体育明星、娱乐明星等；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFirstLabel() const;

                    /**
                     * 设置公众人物身份标签的一级分类，例如体育明星、娱乐明星等；
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FirstLabel 公众人物身份标签的一级分类，例如体育明星、娱乐明星等；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFirstLabel(const std::string& _firstLabel);

                    /**
                     * 判断参数 FirstLabel 是否已赋值
                     * @return FirstLabel 是否已赋值
                     */
                    bool FirstLabelHasBeenSet() const;

                    /**
                     * 获取公众人物身份标签的二级分类，例如歌手（对应一级标签为“娱乐明星”）；
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecondLabel 公众人物身份标签的二级分类，例如歌手（对应一级标签为“娱乐明星”）；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSecondLabel() const;

                    /**
                     * 设置公众人物身份标签的二级分类，例如歌手（对应一级标签为“娱乐明星”）；
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SecondLabel 公众人物身份标签的二级分类，例如歌手（对应一级标签为“娱乐明星”）；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSecondLabel(const std::string& _secondLabel);

                    /**
                     * 判断参数 SecondLabel 是否已赋值
                     * @return SecondLabel 是否已赋值
                     */
                    bool SecondLabelHasBeenSet() const;

                private:

                    /**
                     * 公众人物身份标签的一级分类，例如体育明星、娱乐明星等；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_firstLabel;
                    bool m_firstLabelHasBeenSet;

                    /**
                     * 公众人物身份标签的二级分类，例如歌手（对应一级标签为“娱乐明星”）；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_secondLabel;
                    bool m_secondLabelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_LABELS_H_
