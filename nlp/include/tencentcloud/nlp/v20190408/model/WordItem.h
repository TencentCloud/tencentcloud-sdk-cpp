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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_WORDITEM_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_WORDITEM_H_

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
                * 词条信息。
                */
                class WordItem : public AbstractModel
                {
                public:
                    WordItem();
                    ~WordItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取词条文本内容。
                     * @return Text 词条文本内容。
                     */
                    std::string GetText() const;

                    /**
                     * 设置词条文本内容。
                     * @param Text 词条文本内容。
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取词条创建时间。
                     * @return CreateTime 词条创建时间。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置词条创建时间。
                     * @param CreateTime 词条创建时间。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取词条的词性。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Pos 词条的词性。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPos() const;

                    /**
                     * 设置词条的词性。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Pos 词条的词性。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPos(const std::string& _pos);

                    /**
                     * 判断参数 Pos 是否已赋值
                     * @return Pos 是否已赋值
                     */
                    bool PosHasBeenSet() const;

                private:

                    /**
                     * 词条文本内容。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 词条创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 词条的词性。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pos;
                    bool m_posHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_WORDITEM_H_
