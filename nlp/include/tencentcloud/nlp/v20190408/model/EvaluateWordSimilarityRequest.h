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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_EVALUATEWORDSIMILARITYREQUEST_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_EVALUATEWORDSIMILARITYREQUEST_H_

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
                * EvaluateWordSimilarity请求参数结构体
                */
                class EvaluateWordSimilarityRequest : public AbstractModel
                {
                public:
                    EvaluateWordSimilarityRequest();
                    ~EvaluateWordSimilarityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取计算相似度的源词。（仅支持UTF-8格式，不超过10字符）

                     * @return SourceWord 计算相似度的源词。（仅支持UTF-8格式，不超过10字符）

                     * 
                     */
                    std::string GetSourceWord() const;

                    /**
                     * 设置计算相似度的源词。（仅支持UTF-8格式，不超过10字符）

                     * @param _sourceWord 计算相似度的源词。（仅支持UTF-8格式，不超过10字符）

                     * 
                     */
                    void SetSourceWord(const std::string& _sourceWord);

                    /**
                     * 判断参数 SourceWord 是否已赋值
                     * @return SourceWord 是否已赋值
                     * 
                     */
                    bool SourceWordHasBeenSet() const;

                    /**
                     * 获取计算相似度的目标词。（仅支持UTF-8格式，不超过10字符）

                     * @return TargetWord 计算相似度的目标词。（仅支持UTF-8格式，不超过10字符）

                     * 
                     */
                    std::string GetTargetWord() const;

                    /**
                     * 设置计算相似度的目标词。（仅支持UTF-8格式，不超过10字符）

                     * @param _targetWord 计算相似度的目标词。（仅支持UTF-8格式，不超过10字符）

                     * 
                     */
                    void SetTargetWord(const std::string& _targetWord);

                    /**
                     * 判断参数 TargetWord 是否已赋值
                     * @return TargetWord 是否已赋值
                     * 
                     */
                    bool TargetWordHasBeenSet() const;

                private:

                    /**
                     * 计算相似度的源词。（仅支持UTF-8格式，不超过10字符）

                     */
                    std::string m_sourceWord;
                    bool m_sourceWordHasBeenSet;

                    /**
                     * 计算相似度的目标词。（仅支持UTF-8格式，不超过10字符）

                     */
                    std::string m_targetWord;
                    bool m_targetWordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_EVALUATEWORDSIMILARITYREQUEST_H_
