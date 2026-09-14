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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SIMILARQUESTIONSTAT_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SIMILARQUESTIONSTAT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * QA 相似问统计
                */
                class SimilarQuestionStat : public AbstractModel
                {
                public:
                    SimilarQuestionStat();
                    ~SimilarQuestionStat() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>相似问数量</p>
                     * @return SimilarQuestionCount <p>相似问数量</p>
                     * 
                     */
                    uint64_t GetSimilarQuestionCount() const;

                    /**
                     * 设置<p>相似问数量</p>
                     * @param _similarQuestionCount <p>相似问数量</p>
                     * 
                     */
                    void SetSimilarQuestionCount(const uint64_t& _similarQuestionCount);

                    /**
                     * 判断参数 SimilarQuestionCount 是否已赋值
                     * @return SimilarQuestionCount 是否已赋值
                     * 
                     */
                    bool SimilarQuestionCountHasBeenSet() const;

                    /**
                     * 获取<p>相似问提示（展示一条相似问样例）</p>
                     * @return SimilarQuestionTips <p>相似问提示（展示一条相似问样例）</p>
                     * 
                     */
                    std::string GetSimilarQuestionTips() const;

                    /**
                     * 设置<p>相似问提示（展示一条相似问样例）</p>
                     * @param _similarQuestionTips <p>相似问提示（展示一条相似问样例）</p>
                     * 
                     */
                    void SetSimilarQuestionTips(const std::string& _similarQuestionTips);

                    /**
                     * 判断参数 SimilarQuestionTips 是否已赋值
                     * @return SimilarQuestionTips 是否已赋值
                     * 
                     */
                    bool SimilarQuestionTipsHasBeenSet() const;

                private:

                    /**
                     * <p>相似问数量</p>
                     */
                    uint64_t m_similarQuestionCount;
                    bool m_similarQuestionCountHasBeenSet;

                    /**
                     * <p>相似问提示（展示一条相似问样例）</p>
                     */
                    std::string m_similarQuestionTips;
                    bool m_similarQuestionTipsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SIMILARQUESTIONSTAT_H_
