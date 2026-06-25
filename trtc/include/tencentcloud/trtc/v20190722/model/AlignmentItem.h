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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_ALIGNMENTITEM_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_ALIGNMENTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/WordItem.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 字幕对齐
                */
                class AlignmentItem : public AbstractModel
                {
                public:
                    AlignmentItem();
                    ~AlignmentItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>字幕文本</p>
                     * @return Text <p>字幕文本</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>字幕文本</p>
                     * @param _text <p>字幕文本</p>
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
                     * 获取<p>字幕对应的时间起点</p>
                     * @return TimeBeginMs <p>字幕对应的时间起点</p>
                     * 
                     */
                    uint64_t GetTimeBeginMs() const;

                    /**
                     * 设置<p>字幕对应的时间起点</p>
                     * @param _timeBeginMs <p>字幕对应的时间起点</p>
                     * 
                     */
                    void SetTimeBeginMs(const uint64_t& _timeBeginMs);

                    /**
                     * 判断参数 TimeBeginMs 是否已赋值
                     * @return TimeBeginMs 是否已赋值
                     * 
                     */
                    bool TimeBeginMsHasBeenSet() const;

                    /**
                     * 获取<p>字幕对应的时间尾点</p>
                     * @return TimeEndMs <p>字幕对应的时间尾点</p>
                     * 
                     */
                    uint64_t GetTimeEndMs() const;

                    /**
                     * 设置<p>字幕对应的时间尾点</p>
                     * @param _timeEndMs <p>字幕对应的时间尾点</p>
                     * 
                     */
                    void SetTimeEndMs(const uint64_t& _timeEndMs);

                    /**
                     * 判断参数 TimeEndMs 是否已赋值
                     * @return TimeEndMs 是否已赋值
                     * 
                     */
                    bool TimeEndMsHasBeenSet() const;

                    /**
                     * 获取<p>字幕对应的文本索引起点</p>
                     * @return TextBegin <p>字幕对应的文本索引起点</p>
                     * 
                     */
                    uint64_t GetTextBegin() const;

                    /**
                     * 设置<p>字幕对应的文本索引起点</p>
                     * @param _textBegin <p>字幕对应的文本索引起点</p>
                     * 
                     */
                    void SetTextBegin(const uint64_t& _textBegin);

                    /**
                     * 判断参数 TextBegin 是否已赋值
                     * @return TextBegin 是否已赋值
                     * 
                     */
                    bool TextBeginHasBeenSet() const;

                    /**
                     * 获取<p>字幕对应的文本索引尾点</p>
                     * @return TextEnd <p>字幕对应的文本索引尾点</p>
                     * 
                     */
                    uint64_t GetTextEnd() const;

                    /**
                     * 设置<p>字幕对应的文本索引尾点</p>
                     * @param _textEnd <p>字幕对应的文本索引尾点</p>
                     * 
                     */
                    void SetTextEnd(const uint64_t& _textEnd);

                    /**
                     * 判断参数 TextEnd 是否已赋值
                     * @return TextEnd 是否已赋值
                     * 
                     */
                    bool TextEndHasBeenSet() const;

                    /**
                     * 获取<p>词级别时间戳</p>
                     * @return Words <p>词级别时间戳</p>
                     * 
                     */
                    std::vector<WordItem> GetWords() const;

                    /**
                     * 设置<p>词级别时间戳</p>
                     * @param _words <p>词级别时间戳</p>
                     * 
                     */
                    void SetWords(const std::vector<WordItem>& _words);

                    /**
                     * 判断参数 Words 是否已赋值
                     * @return Words 是否已赋值
                     * 
                     */
                    bool WordsHasBeenSet() const;

                private:

                    /**
                     * <p>字幕文本</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>字幕对应的时间起点</p>
                     */
                    uint64_t m_timeBeginMs;
                    bool m_timeBeginMsHasBeenSet;

                    /**
                     * <p>字幕对应的时间尾点</p>
                     */
                    uint64_t m_timeEndMs;
                    bool m_timeEndMsHasBeenSet;

                    /**
                     * <p>字幕对应的文本索引起点</p>
                     */
                    uint64_t m_textBegin;
                    bool m_textBeginHasBeenSet;

                    /**
                     * <p>字幕对应的文本索引尾点</p>
                     */
                    uint64_t m_textEnd;
                    bool m_textEndHasBeenSet;

                    /**
                     * <p>词级别时间戳</p>
                     */
                    std::vector<WordItem> m_words;
                    bool m_wordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_ALIGNMENTITEM_H_
