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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_WORDSIMILARITYREQUEST_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_WORDSIMILARITYREQUEST_H_

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
                * WordSimilarity请求参数结构体
                */
                class WordSimilarityRequest : public AbstractModel
                {
                public:
                    WordSimilarityRequest();
                    ~WordSimilarityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取计算相似度的源词（仅支持UTF-8格式，不超过20字）
                     * @return SrcWord 计算相似度的源词（仅支持UTF-8格式，不超过20字）
                     */
                    std::string GetSrcWord() const;

                    /**
                     * 设置计算相似度的源词（仅支持UTF-8格式，不超过20字）
                     * @param SrcWord 计算相似度的源词（仅支持UTF-8格式，不超过20字）
                     */
                    void SetSrcWord(const std::string& _srcWord);

                    /**
                     * 判断参数 SrcWord 是否已赋值
                     * @return SrcWord 是否已赋值
                     */
                    bool SrcWordHasBeenSet() const;

                    /**
                     * 获取计算相似度的目标词（仅支持UTF-8格式，不超过20字）
                     * @return TargetWord 计算相似度的目标词（仅支持UTF-8格式，不超过20字）
                     */
                    std::string GetTargetWord() const;

                    /**
                     * 设置计算相似度的目标词（仅支持UTF-8格式，不超过20字）
                     * @param TargetWord 计算相似度的目标词（仅支持UTF-8格式，不超过20字）
                     */
                    void SetTargetWord(const std::string& _targetWord);

                    /**
                     * 判断参数 TargetWord 是否已赋值
                     * @return TargetWord 是否已赋值
                     */
                    bool TargetWordHasBeenSet() const;

                private:

                    /**
                     * 计算相似度的源词（仅支持UTF-8格式，不超过20字）
                     */
                    std::string m_srcWord;
                    bool m_srcWordHasBeenSet;

                    /**
                     * 计算相似度的目标词（仅支持UTF-8格式，不超过20字）
                     */
                    std::string m_targetWord;
                    bool m_targetWordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_WORDSIMILARITYREQUEST_H_
