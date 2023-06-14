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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_TEXTITEM_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_TEXTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tci/v20190318/model/Word.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * 当前句子的信息
                */
                class TextItem : public AbstractModel
                {
                public:
                    TextItem();
                    ~TextItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前句子包含的所有单词信息
                     * @return Words 当前句子包含的所有单词信息
                     * 
                     */
                    std::vector<Word> GetWords() const;

                    /**
                     * 设置当前句子包含的所有单词信息
                     * @param _words 当前句子包含的所有单词信息
                     * 
                     */
                    void SetWords(const std::vector<Word>& _words);

                    /**
                     * 判断参数 Words 是否已赋值
                     * @return Words 是否已赋值
                     * 
                     */
                    bool WordsHasBeenSet() const;

                    /**
                     * 获取当前句子的置信度
                     * @return Confidence 当前句子的置信度
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置当前句子的置信度
                     * @param _confidence 当前句子的置信度
                     * 
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取当前句子语音的起始时间点，单位为ms
                     * @return Mbtm 当前句子语音的起始时间点，单位为ms
                     * 
                     */
                    int64_t GetMbtm() const;

                    /**
                     * 设置当前句子语音的起始时间点，单位为ms
                     * @param _mbtm 当前句子语音的起始时间点，单位为ms
                     * 
                     */
                    void SetMbtm(const int64_t& _mbtm);

                    /**
                     * 判断参数 Mbtm 是否已赋值
                     * @return Mbtm 是否已赋值
                     * 
                     */
                    bool MbtmHasBeenSet() const;

                    /**
                     * 获取当前句子语音的终止时间点，单位为ms
                     * @return Metm 当前句子语音的终止时间点，单位为ms
                     * 
                     */
                    int64_t GetMetm() const;

                    /**
                     * 设置当前句子语音的终止时间点，单位为ms
                     * @param _metm 当前句子语音的终止时间点，单位为ms
                     * 
                     */
                    void SetMetm(const int64_t& _metm);

                    /**
                     * 判断参数 Metm 是否已赋值
                     * @return Metm 是否已赋值
                     * 
                     */
                    bool MetmHasBeenSet() const;

                    /**
                     * 获取保留参数，暂无意义
                     * @return Tag 保留参数，暂无意义
                     * 
                     */
                    int64_t GetTag() const;

                    /**
                     * 设置保留参数，暂无意义
                     * @param _tag 保留参数，暂无意义
                     * 
                     */
                    void SetTag(const int64_t& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取当前句子
                     * @return Text 当前句子
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置当前句子
                     * @param _text 当前句子
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
                     * 获取当前句子的字节数
                     * @return TextSize 当前句子的字节数
                     * 
                     */
                    int64_t GetTextSize() const;

                    /**
                     * 设置当前句子的字节数
                     * @param _textSize 当前句子的字节数
                     * 
                     */
                    void SetTextSize(const int64_t& _textSize);

                    /**
                     * 判断参数 TextSize 是否已赋值
                     * @return TextSize 是否已赋值
                     * 
                     */
                    bool TextSizeHasBeenSet() const;

                private:

                    /**
                     * 当前句子包含的所有单词信息
                     */
                    std::vector<Word> m_words;
                    bool m_wordsHasBeenSet;

                    /**
                     * 当前句子的置信度
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 当前句子语音的起始时间点，单位为ms
                     */
                    int64_t m_mbtm;
                    bool m_mbtmHasBeenSet;

                    /**
                     * 当前句子语音的终止时间点，单位为ms
                     */
                    int64_t m_metm;
                    bool m_metmHasBeenSet;

                    /**
                     * 保留参数，暂无意义
                     */
                    int64_t m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 当前句子
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 当前句子的字节数
                     */
                    int64_t m_textSize;
                    bool m_textSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_TEXTITEM_H_
