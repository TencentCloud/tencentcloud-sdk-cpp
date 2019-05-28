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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEWORDSAMPLESREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEWORDSAMPLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AiSampleWordInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
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
2. Recognition.Asr：通过语音识别技术，进行内容识别；
3. Review.Ocr：通过光学字符识别技术，进行内容审核；
4. Review.Asr：通过语音识别技术，进行内容审核；
<b>可合并简写为：</b>
5. Recognition：通过光学字符识别技术、语音识别技术，进行内容识别，等价于 1+2；
6. Review：通过光学字符识别技术、语音识别技术，进行内容审核，等价于 3+4；
7. All：通过光学字符识别技术、语音识别技术，进行内容识别、内容审核，等价于 1+2+3+4。
                     * @return Usages <b>关键词应用场景，可选值：</b>
1. Recognition.Ocr：通过光学字符识别技术，进行内容识别；
2. Recognition.Asr：通过语音识别技术，进行内容识别；
3. Review.Ocr：通过光学字符识别技术，进行内容审核；
4. Review.Asr：通过语音识别技术，进行内容审核；
<b>可合并简写为：</b>
5. Recognition：通过光学字符识别技术、语音识别技术，进行内容识别，等价于 1+2；
6. Review：通过光学字符识别技术、语音识别技术，进行内容审核，等价于 3+4；
7. All：通过光学字符识别技术、语音识别技术，进行内容识别、内容审核，等价于 1+2+3+4。
                     */
                    std::vector<std::string> GetUsages() const;

                    /**
                     * 设置<b>关键词应用场景，可选值：</b>
1. Recognition.Ocr：通过光学字符识别技术，进行内容识别；
2. Recognition.Asr：通过语音识别技术，进行内容识别；
3. Review.Ocr：通过光学字符识别技术，进行内容审核；
4. Review.Asr：通过语音识别技术，进行内容审核；
<b>可合并简写为：</b>
5. Recognition：通过光学字符识别技术、语音识别技术，进行内容识别，等价于 1+2；
6. Review：通过光学字符识别技术、语音识别技术，进行内容审核，等价于 3+4；
7. All：通过光学字符识别技术、语音识别技术，进行内容识别、内容审核，等价于 1+2+3+4。
                     * @param Usages <b>关键词应用场景，可选值：</b>
1. Recognition.Ocr：通过光学字符识别技术，进行内容识别；
2. Recognition.Asr：通过语音识别技术，进行内容识别；
3. Review.Ocr：通过光学字符识别技术，进行内容审核；
4. Review.Asr：通过语音识别技术，进行内容审核；
<b>可合并简写为：</b>
5. Recognition：通过光学字符识别技术、语音识别技术，进行内容识别，等价于 1+2；
6. Review：通过光学字符识别技术、语音识别技术，进行内容审核，等价于 3+4；
7. All：通过光学字符识别技术、语音识别技术，进行内容识别、内容审核，等价于 1+2+3+4。
                     */
                    void SetUsages(const std::vector<std::string>& _usages);

                    /**
                     * 判断参数 Usages 是否已赋值
                     * @return Usages 是否已赋值
                     */
                    bool UsagesHasBeenSet() const;

                    /**
                     * 获取关键词，数组长度限制：100。
                     * @return Words 关键词，数组长度限制：100。
                     */
                    std::vector<AiSampleWordInfo> GetWords() const;

                    /**
                     * 设置关键词，数组长度限制：100。
                     * @param Words 关键词，数组长度限制：100。
                     */
                    void SetWords(const std::vector<AiSampleWordInfo>& _words);

                    /**
                     * 判断参数 Words 是否已赋值
                     * @return Words 是否已赋值
                     */
                    bool WordsHasBeenSet() const;

                    /**
                     * 获取点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     * @return SubAppId 点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     * @param SubAppId 点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * <b>关键词应用场景，可选值：</b>
1. Recognition.Ocr：通过光学字符识别技术，进行内容识别；
2. Recognition.Asr：通过语音识别技术，进行内容识别；
3. Review.Ocr：通过光学字符识别技术，进行内容审核；
4. Review.Asr：通过语音识别技术，进行内容审核；
<b>可合并简写为：</b>
5. Recognition：通过光学字符识别技术、语音识别技术，进行内容识别，等价于 1+2；
6. Review：通过光学字符识别技术、语音识别技术，进行内容审核，等价于 3+4；
7. All：通过光学字符识别技术、语音识别技术，进行内容识别、内容审核，等价于 1+2+3+4。
                     */
                    std::vector<std::string> m_usages;
                    bool m_usagesHasBeenSet;

                    /**
                     * 关键词，数组长度限制：100。
                     */
                    std::vector<AiSampleWordInfo> m_words;
                    bool m_wordsHasBeenSet;

                    /**
                     * 点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEWORDSAMPLESREQUEST_H_
