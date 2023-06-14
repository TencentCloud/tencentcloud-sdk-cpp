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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_EMBELLISH_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_EMBELLISH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * 文本润色结果
                */
                class Embellish : public AbstractModel
                {
                public:
                    Embellish();
                    ~Embellish() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取润色后的文本。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Text 润色后的文本。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置润色后的文本。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _text 润色后的文本。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取润色类型。类型如下：
expansion：扩写
rewriting：改写
translation_m2a：从现代文改写为古文
translation_a2m：从古文改写为现代文


注意：此字段可能返回 null，表示取不到有效值。
                     * @return EmbellishType 润色类型。类型如下：
expansion：扩写
rewriting：改写
translation_m2a：从现代文改写为古文
translation_a2m：从古文改写为现代文


注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEmbellishType() const;

                    /**
                     * 设置润色类型。类型如下：
expansion：扩写
rewriting：改写
translation_m2a：从现代文改写为古文
translation_a2m：从古文改写为现代文


注意：此字段可能返回 null，表示取不到有效值。
                     * @param _embellishType 润色类型。类型如下：
expansion：扩写
rewriting：改写
translation_m2a：从现代文改写为古文
translation_a2m：从古文改写为现代文


注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEmbellishType(const std::string& _embellishType);

                    /**
                     * 判断参数 EmbellishType 是否已赋值
                     * @return EmbellishType 是否已赋值
                     * 
                     */
                    bool EmbellishTypeHasBeenSet() const;

                private:

                    /**
                     * 润色后的文本。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 润色类型。类型如下：
expansion：扩写
rewriting：改写
translation_m2a：从现代文改写为古文
translation_a2m：从古文改写为现代文


注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_embellishType;
                    bool m_embellishTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_EMBELLISH_H_
