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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SEARCHKNOWLEDGERESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SEARCHKNOWLEDGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/KnowledgeResult.h>
#include <tencentcloud/adp/v20260520/model/TokenUsage.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * SearchKnowledge返回参数结构体
                */
                class SearchKnowledgeResponse : public AbstractModel
                {
                public:
                    SearchKnowledgeResponse();
                    ~SearchKnowledgeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>检索结果列表</p>
                     * @return KnowledgeList <p>检索结果列表</p>
                     * 
                     */
                    std::vector<KnowledgeResult> GetKnowledgeList() const;

                    /**
                     * 判断参数 KnowledgeList 是否已赋值
                     * @return KnowledgeList 是否已赋值
                     * 
                     */
                    bool KnowledgeListHasBeenSet() const;

                    /**
                     * 获取<p>消耗的 token 统计</p>
                     * @return TokenUsageList <p>消耗的 token 统计</p>
                     * 
                     */
                    std::vector<TokenUsage> GetTokenUsageList() const;

                    /**
                     * 判断参数 TokenUsageList 是否已赋值
                     * @return TokenUsageList 是否已赋值
                     * 
                     */
                    bool TokenUsageListHasBeenSet() const;

                private:

                    /**
                     * <p>检索结果列表</p>
                     */
                    std::vector<KnowledgeResult> m_knowledgeList;
                    bool m_knowledgeListHasBeenSet;

                    /**
                     * <p>消耗的 token 统计</p>
                     */
                    std::vector<TokenUsage> m_tokenUsageList;
                    bool m_tokenUsageListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SEARCHKNOWLEDGERESPONSE_H_
