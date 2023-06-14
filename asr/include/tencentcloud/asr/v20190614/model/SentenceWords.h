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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_SENTENCEWORDS_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_SENTENCEWORDS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * 识别结果中词文本，以及对应时间偏移
                */
                class SentenceWords : public AbstractModel
                {
                public:
                    SentenceWords();
                    ~SentenceWords() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取词文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Word 词文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWord() const;

                    /**
                     * 设置词文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _word 词文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWord(const std::string& _word);

                    /**
                     * 判断参数 Word 是否已赋值
                     * @return Word 是否已赋值
                     * 
                     */
                    bool WordHasBeenSet() const;

                    /**
                     * 获取在句子中的开始时间偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OffsetStartMs 在句子中的开始时间偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOffsetStartMs() const;

                    /**
                     * 设置在句子中的开始时间偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _offsetStartMs 在句子中的开始时间偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOffsetStartMs(const int64_t& _offsetStartMs);

                    /**
                     * 判断参数 OffsetStartMs 是否已赋值
                     * @return OffsetStartMs 是否已赋值
                     * 
                     */
                    bool OffsetStartMsHasBeenSet() const;

                    /**
                     * 获取在句子中的结束时间偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OffsetEndMs 在句子中的结束时间偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOffsetEndMs() const;

                    /**
                     * 设置在句子中的结束时间偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _offsetEndMs 在句子中的结束时间偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOffsetEndMs(const int64_t& _offsetEndMs);

                    /**
                     * 判断参数 OffsetEndMs 是否已赋值
                     * @return OffsetEndMs 是否已赋值
                     * 
                     */
                    bool OffsetEndMsHasBeenSet() const;

                private:

                    /**
                     * 词文本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_word;
                    bool m_wordHasBeenSet;

                    /**
                     * 在句子中的开始时间偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_offsetStartMs;
                    bool m_offsetStartMsHasBeenSet;

                    /**
                     * 在句子中的结束时间偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_offsetEndMs;
                    bool m_offsetEndMsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_SENTENCEWORDS_H_
