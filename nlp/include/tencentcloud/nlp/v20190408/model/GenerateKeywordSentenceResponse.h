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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_GENERATEKEYWORDSENTENCERESPONSE_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_GENERATEKEYWORDSENTENCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/nlp/v20190408/model/KeywordSentence.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * GenerateKeywordSentence返回参数结构体
                */
                class GenerateKeywordSentenceResponse : public AbstractModel
                {
                public:
                    GenerateKeywordSentenceResponse();
                    ~GenerateKeywordSentenceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取生成的句子列表。
                     * @return KeywordSentenceList 生成的句子列表。
                     * 
                     */
                    std::vector<KeywordSentence> GetKeywordSentenceList() const;

                    /**
                     * 判断参数 KeywordSentenceList 是否已赋值
                     * @return KeywordSentenceList 是否已赋值
                     * 
                     */
                    bool KeywordSentenceListHasBeenSet() const;

                private:

                    /**
                     * 生成的句子列表。
                     */
                    std::vector<KeywordSentence> m_keywordSentenceList;
                    bool m_keywordSentenceListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_GENERATEKEYWORDSENTENCERESPONSE_H_
