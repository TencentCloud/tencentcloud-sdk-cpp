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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_WORDITEM_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_WORDITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 词级别对齐信息
                */
                class WordItem : public AbstractModel
                {
                public:
                    WordItem();
                    ~WordItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>词对应的文本</p>
                     * @return Word <p>词对应的文本</p>
                     * 
                     */
                    std::string GetWord() const;

                    /**
                     * 设置<p>词对应的文本</p>
                     * @param _word <p>词对应的文本</p>
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
                     * 获取<p>词对应的时间起点</p>
                     * @return TimeBeginMs <p>词对应的时间起点</p>
                     * 
                     */
                    uint64_t GetTimeBeginMs() const;

                    /**
                     * 设置<p>词对应的时间起点</p>
                     * @param _timeBeginMs <p>词对应的时间起点</p>
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
                     * 获取<p>词对应的时间尾点</p>
                     * @return TimeEndMs <p>词对应的时间尾点</p>
                     * 
                     */
                    uint64_t GetTimeEndMs() const;

                    /**
                     * 设置<p>词对应的时间尾点</p>
                     * @param _timeEndMs <p>词对应的时间尾点</p>
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
                     * 获取<p>词的索引起点</p>
                     * @return WordBegin <p>词的索引起点</p>
                     * 
                     */
                    uint64_t GetWordBegin() const;

                    /**
                     * 设置<p>词的索引起点</p>
                     * @param _wordBegin <p>词的索引起点</p>
                     * 
                     */
                    void SetWordBegin(const uint64_t& _wordBegin);

                    /**
                     * 判断参数 WordBegin 是否已赋值
                     * @return WordBegin 是否已赋值
                     * 
                     */
                    bool WordBeginHasBeenSet() const;

                    /**
                     * 获取<p>词的索引尾点</p>
                     * @return WordEnd <p>词的索引尾点</p>
                     * 
                     */
                    uint64_t GetWordEnd() const;

                    /**
                     * 设置<p>词的索引尾点</p>
                     * @param _wordEnd <p>词的索引尾点</p>
                     * 
                     */
                    void SetWordEnd(const uint64_t& _wordEnd);

                    /**
                     * 判断参数 WordEnd 是否已赋值
                     * @return WordEnd 是否已赋值
                     * 
                     */
                    bool WordEndHasBeenSet() const;

                private:

                    /**
                     * <p>词对应的文本</p>
                     */
                    std::string m_word;
                    bool m_wordHasBeenSet;

                    /**
                     * <p>词对应的时间起点</p>
                     */
                    uint64_t m_timeBeginMs;
                    bool m_timeBeginMsHasBeenSet;

                    /**
                     * <p>词对应的时间尾点</p>
                     */
                    uint64_t m_timeEndMs;
                    bool m_timeEndMsHasBeenSet;

                    /**
                     * <p>词的索引起点</p>
                     */
                    uint64_t m_wordBegin;
                    bool m_wordBeginHasBeenSet;

                    /**
                     * <p>词的索引尾点</p>
                     */
                    uint64_t m_wordEnd;
                    bool m_wordEndHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_WORDITEM_H_
