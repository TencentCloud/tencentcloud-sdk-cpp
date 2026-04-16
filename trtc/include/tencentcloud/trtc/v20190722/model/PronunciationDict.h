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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_PRONUNCIATIONDICT_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_PRONUNCIATIONDICT_H_

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
                * 多音字/生僻字发音纠正词典条目。指定特定词语在本次请求中使用的发音。
                */
                class PronunciationDict : public AbstractModel
                {
                public:
                    PronunciationDict();
                    ~PronunciationDict() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取需要纠正发音的词语，前后空格自动去除。同一请求中若有重复词语，以最后一条为准。
                     * @return Word 需要纠正发音的词语，前后空格自动去除。同一请求中若有重复词语，以最后一条为准。
                     * 
                     */
                    std::string GetWord() const;

                    /**
                     * 设置需要纠正发音的词语，前后空格自动去除。同一请求中若有重复词语，以最后一条为准。
                     * @param _word 需要纠正发音的词语，前后空格自动去除。同一请求中若有重复词语，以最后一条为准。
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
                     * 获取目标发音，支持以下格式：<br>① 带声调数字的拼音（1=阴平，2=阳平，3=上声，4=去声，5=轻声），如 yin2 hang2；<br>② 拼音连写（无空格），如 yin2hang2；<br>③ 文字+拼音混写，如 银hang2；<br>④ 直接文本替换，会将原始文本替换为目标文本
                     * @return Pronunciation 目标发音，支持以下格式：<br>① 带声调数字的拼音（1=阴平，2=阳平，3=上声，4=去声，5=轻声），如 yin2 hang2；<br>② 拼音连写（无空格），如 yin2hang2；<br>③ 文字+拼音混写，如 银hang2；<br>④ 直接文本替换，会将原始文本替换为目标文本
                     * 
                     */
                    std::string GetPronunciation() const;

                    /**
                     * 设置目标发音，支持以下格式：<br>① 带声调数字的拼音（1=阴平，2=阳平，3=上声，4=去声，5=轻声），如 yin2 hang2；<br>② 拼音连写（无空格），如 yin2hang2；<br>③ 文字+拼音混写，如 银hang2；<br>④ 直接文本替换，会将原始文本替换为目标文本
                     * @param _pronunciation 目标发音，支持以下格式：<br>① 带声调数字的拼音（1=阴平，2=阳平，3=上声，4=去声，5=轻声），如 yin2 hang2；<br>② 拼音连写（无空格），如 yin2hang2；<br>③ 文字+拼音混写，如 银hang2；<br>④ 直接文本替换，会将原始文本替换为目标文本
                     * 
                     */
                    void SetPronunciation(const std::string& _pronunciation);

                    /**
                     * 判断参数 Pronunciation 是否已赋值
                     * @return Pronunciation 是否已赋值
                     * 
                     */
                    bool PronunciationHasBeenSet() const;

                private:

                    /**
                     * 需要纠正发音的词语，前后空格自动去除。同一请求中若有重复词语，以最后一条为准。
                     */
                    std::string m_word;
                    bool m_wordHasBeenSet;

                    /**
                     * 目标发音，支持以下格式：<br>① 带声调数字的拼音（1=阴平，2=阳平，3=上声，4=去声，5=轻声），如 yin2 hang2；<br>② 拼音连写（无空格），如 yin2hang2；<br>③ 文字+拼音混写，如 银hang2；<br>④ 直接文本替换，会将原始文本替换为目标文本
                     */
                    std::string m_pronunciation;
                    bool m_pronunciationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_PRONUNCIATIONDICT_H_
