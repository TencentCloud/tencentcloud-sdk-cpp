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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_AUTOSUMMARIZATIONREQUEST_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_AUTOSUMMARIZATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * AutoSummarization请求参数结构体
                */
                class AutoSummarizationRequest : public AbstractModel
                {
                public:
                    AutoSummarizationRequest();
                    ~AutoSummarizationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待处理的文本（仅支持UTF-8格式，不超过2000字）
                     * @return Text 待处理的文本（仅支持UTF-8格式，不超过2000字）
                     */
                    std::string GetText() const;

                    /**
                     * 设置待处理的文本（仅支持UTF-8格式，不超过2000字）
                     * @param Text 待处理的文本（仅支持UTF-8格式，不超过2000字）
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取指定摘要的长度上限（默认值为200）
注：为保证摘要的可读性，最终生成的摘要长度会低于指定的长度上限。
                     * @return Length 指定摘要的长度上限（默认值为200）
注：为保证摘要的可读性，最终生成的摘要长度会低于指定的长度上限。
                     */
                    uint64_t GetLength() const;

                    /**
                     * 设置指定摘要的长度上限（默认值为200）
注：为保证摘要的可读性，最终生成的摘要长度会低于指定的长度上限。
                     * @param Length 指定摘要的长度上限（默认值为200）
注：为保证摘要的可读性，最终生成的摘要长度会低于指定的长度上限。
                     */
                    void SetLength(const uint64_t& _length);

                    /**
                     * 判断参数 Length 是否已赋值
                     * @return Length 是否已赋值
                     */
                    bool LengthHasBeenSet() const;

                private:

                    /**
                     * 待处理的文本（仅支持UTF-8格式，不超过2000字）
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 指定摘要的长度上限（默认值为200）
注：为保证摘要的可读性，最终生成的摘要长度会低于指定的长度上限。
                     */
                    uint64_t m_length;
                    bool m_lengthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_AUTOSUMMARIZATIONREQUEST_H_
