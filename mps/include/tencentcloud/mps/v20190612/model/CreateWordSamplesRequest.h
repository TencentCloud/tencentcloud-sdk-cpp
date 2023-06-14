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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEWORDSAMPLESREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEWORDSAMPLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AiSampleWordInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CreateWordSamples请求参数结构体
                */
                class CreateWordSamplesRequest : public AbstractModel
                {
                public:
                    CreateWordSamplesRequest();
                    ~CreateWordSamplesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<b>关键词应用场景，可选值：</b>
1. Recognition.Ocr：通过光学字符识别技术，进行内容识别；
2. Recognition.Asr：通过音频识别技术，进行内容识别；
3. Review.Ocr：通过光学字符识别技术，进行不适宜内容识别；
4. Review.Asr：通过音频识别技术，进行不适宜内容识别；
<b>可合并简写为：</b>
5. Recognition：通过光学字符识别技术、音频识别技术，进行内容识别，等价于 1+2；
6. Review：通过光学字符识别技术、音频识别技术，进行不适宜内容识别，等价于 3+4；
7. All：通过光学字符识别技术、音频识别技术，进行内容识别、不适宜内容识别，等价于 1+2+3+4。
                     * @return Usages <b>关键词应用场景，可选值：</b>
1. Recognition.Ocr：通过光学字符识别技术，进行内容识别；
2. Recognition.Asr：通过音频识别技术，进行内容识别；
3. Review.Ocr：通过光学字符识别技术，进行不适宜内容识别；
4. Review.Asr：通过音频识别技术，进行不适宜内容识别；
<b>可合并简写为：</b>
5. Recognition：通过光学字符识别技术、音频识别技术，进行内容识别，等价于 1+2；
6. Review：通过光学字符识别技术、音频识别技术，进行不适宜内容识别，等价于 3+4；
7. All：通过光学字符识别技术、音频识别技术，进行内容识别、不适宜内容识别，等价于 1+2+3+4。
                     * 
                     */
                    std::vector<std::string> GetUsages() const;

                    /**
                     * 设置<b>关键词应用场景，可选值：</b>
1. Recognition.Ocr：通过光学字符识别技术，进行内容识别；
2. Recognition.Asr：通过音频识别技术，进行内容识别；
3. Review.Ocr：通过光学字符识别技术，进行不适宜内容识别；
4. Review.Asr：通过音频识别技术，进行不适宜内容识别；
<b>可合并简写为：</b>
5. Recognition：通过光学字符识别技术、音频识别技术，进行内容识别，等价于 1+2；
6. Review：通过光学字符识别技术、音频识别技术，进行不适宜内容识别，等价于 3+4；
7. All：通过光学字符识别技术、音频识别技术，进行内容识别、不适宜内容识别，等价于 1+2+3+4。
                     * @param _usages <b>关键词应用场景，可选值：</b>
1. Recognition.Ocr：通过光学字符识别技术，进行内容识别；
2. Recognition.Asr：通过音频识别技术，进行内容识别；
3. Review.Ocr：通过光学字符识别技术，进行不适宜内容识别；
4. Review.Asr：通过音频识别技术，进行不适宜内容识别；
<b>可合并简写为：</b>
5. Recognition：通过光学字符识别技术、音频识别技术，进行内容识别，等价于 1+2；
6. Review：通过光学字符识别技术、音频识别技术，进行不适宜内容识别，等价于 3+4；
7. All：通过光学字符识别技术、音频识别技术，进行内容识别、不适宜内容识别，等价于 1+2+3+4。
                     * 
                     */
                    void SetUsages(const std::vector<std::string>& _usages);

                    /**
                     * 判断参数 Usages 是否已赋值
                     * @return Usages 是否已赋值
                     * 
                     */
                    bool UsagesHasBeenSet() const;

                    /**
                     * 获取关键词，数组长度限制：100。
                     * @return Words 关键词，数组长度限制：100。
                     * 
                     */
                    std::vector<AiSampleWordInfo> GetWords() const;

                    /**
                     * 设置关键词，数组长度限制：100。
                     * @param _words 关键词，数组长度限制：100。
                     * 
                     */
                    void SetWords(const std::vector<AiSampleWordInfo>& _words);

                    /**
                     * 判断参数 Words 是否已赋值
                     * @return Words 是否已赋值
                     * 
                     */
                    bool WordsHasBeenSet() const;

                private:

                    /**
                     * <b>关键词应用场景，可选值：</b>
1. Recognition.Ocr：通过光学字符识别技术，进行内容识别；
2. Recognition.Asr：通过音频识别技术，进行内容识别；
3. Review.Ocr：通过光学字符识别技术，进行不适宜内容识别；
4. Review.Asr：通过音频识别技术，进行不适宜内容识别；
<b>可合并简写为：</b>
5. Recognition：通过光学字符识别技术、音频识别技术，进行内容识别，等价于 1+2；
6. Review：通过光学字符识别技术、音频识别技术，进行不适宜内容识别，等价于 3+4；
7. All：通过光学字符识别技术、音频识别技术，进行内容识别、不适宜内容识别，等价于 1+2+3+4。
                     */
                    std::vector<std::string> m_usages;
                    bool m_usagesHasBeenSet;

                    /**
                     * 关键词，数组长度限制：100。
                     */
                    std::vector<AiSampleWordInfo> m_words;
                    bool m_wordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEWORDSAMPLESREQUEST_H_
