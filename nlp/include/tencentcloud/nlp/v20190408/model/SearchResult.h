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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_SEARCHRESULT_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_SEARCHRESULT_H_

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
                * 词条搜索的结果，主要描述该词条是否存在以及相关的词性。
                */
                class SearchResult : public AbstractModel
                {
                public:
                    SearchResult();
                    ~SearchResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取被搜索的词条文本。
                     * @return Text 被搜索的词条文本。
                     */
                    std::string GetText() const;

                    /**
                     * 设置被搜索的词条文本。
                     * @param Text 被搜索的词条文本。
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取0表示词条不存在，1表示存在。
                     * @return IsExist 0表示词条不存在，1表示存在。
                     */
                    uint64_t GetIsExist() const;

                    /**
                     * 设置0表示词条不存在，1表示存在。
                     * @param IsExist 0表示词条不存在，1表示存在。
                     */
                    void SetIsExist(const uint64_t& _isExist);

                    /**
                     * 判断参数 IsExist 是否已赋值
                     * @return IsExist 是否已赋值
                     */
                    bool IsExistHasBeenSet() const;

                    /**
                     * 获取匹配到的词条文本。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MatchText 匹配到的词条文本。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMatchText() const;

                    /**
                     * 设置匹配到的词条文本。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MatchText 匹配到的词条文本。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMatchText(const std::string& _matchText);

                    /**
                     * 判断参数 MatchText 是否已赋值
                     * @return MatchText 是否已赋值
                     */
                    bool MatchTextHasBeenSet() const;

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
                     * 被搜索的词条文本。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 0表示词条不存在，1表示存在。
                     */
                    uint64_t m_isExist;
                    bool m_isExistHasBeenSet;

                    /**
                     * 匹配到的词条文本。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_matchText;
                    bool m_matchTextHasBeenSet;

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

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_SEARCHRESULT_H_
