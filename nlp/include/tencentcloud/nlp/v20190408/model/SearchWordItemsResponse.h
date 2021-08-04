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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_SEARCHWORDITEMSRESPONSE_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_SEARCHWORDITEMSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/nlp/v20190408/model/SearchResult.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * SearchWordItems返回参数结构体
                */
                class SearchWordItemsResponse : public AbstractModel
                {
                public:
                    SearchWordItemsResponse();
                    ~SearchWordItemsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取词条检索结果集合。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Results 词条检索结果集合。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SearchResult> GetResults() const;

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     */
                    bool ResultsHasBeenSet() const;

                private:

                    /**
                     * 词条检索结果集合。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SearchResult> m_results;
                    bool m_resultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_SEARCHWORDITEMSRESPONSE_H_
