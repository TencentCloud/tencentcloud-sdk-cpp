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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_SENTENCEPAIR_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_SENTENCEPAIR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 待分析的句子对
                */
                class SentencePair : public AbstractModel
                {
                public:
                    SentencePair();
                    ~SentencePair() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取需要与目标句子计算相似度的源句子。（仅支持UTF-8格式，不超过500字符）
                     * @return SourceText 需要与目标句子计算相似度的源句子。（仅支持UTF-8格式，不超过500字符）
                     * 
                     */
                    std::string GetSourceText() const;

                    /**
                     * 设置需要与目标句子计算相似度的源句子。（仅支持UTF-8格式，不超过500字符）
                     * @param _sourceText 需要与目标句子计算相似度的源句子。（仅支持UTF-8格式，不超过500字符）
                     * 
                     */
                    void SetSourceText(const std::string& _sourceText);

                    /**
                     * 判断参数 SourceText 是否已赋值
                     * @return SourceText 是否已赋值
                     * 
                     */
                    bool SourceTextHasBeenSet() const;

                    /**
                     * 获取目标句子。（仅支持UTF-8格式，不超过500字符）

                     * @return TargetText 目标句子。（仅支持UTF-8格式，不超过500字符）

                     * 
                     */
                    std::string GetTargetText() const;

                    /**
                     * 设置目标句子。（仅支持UTF-8格式，不超过500字符）

                     * @param _targetText 目标句子。（仅支持UTF-8格式，不超过500字符）

                     * 
                     */
                    void SetTargetText(const std::string& _targetText);

                    /**
                     * 判断参数 TargetText 是否已赋值
                     * @return TargetText 是否已赋值
                     * 
                     */
                    bool TargetTextHasBeenSet() const;

                private:

                    /**
                     * 需要与目标句子计算相似度的源句子。（仅支持UTF-8格式，不超过500字符）
                     */
                    std::string m_sourceText;
                    bool m_sourceTextHasBeenSet;

                    /**
                     * 目标句子。（仅支持UTF-8格式，不超过500字符）

                     */
                    std::string m_targetText;
                    bool m_targetTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_SENTENCEPAIR_H_
