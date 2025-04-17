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

#ifndef TENCENTCLOUD_ES_V20250101_MODEL_WEBSEARCHRESPONSE_H_
#define TENCENTCLOUD_ES_V20250101_MODEL_WEBSEARCHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20250101/model/WebPage.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20250101
        {
            namespace Model
            {
                /**
                * WebSearch返回参数结构体
                */
                class WebSearchResponse : public AbstractModel
                {
                public:
                    WebSearchResponse();
                    ~WebSearchResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询
                     * @return Query 查询
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取响应状态
                     * @return Status 响应状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取执行搜索的引擎
                     * @return SearchEngine 执行搜索的引擎
                     * 
                     */
                    std::string GetSearchEngine() const;

                    /**
                     * 判断参数 SearchEngine 是否已赋值
                     * @return SearchEngine 是否已赋值
                     * 
                     */
                    bool SearchEngineHasBeenSet() const;

                    /**
                     * 获取搜索结果
                     * @return Results 搜索结果
                     * 
                     */
                    std::vector<WebPage> GetResults() const;

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     * 
                     */
                    bool ResultsHasBeenSet() const;

                private:

                    /**
                     * 查询
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 响应状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 执行搜索的引擎
                     */
                    std::string m_searchEngine;
                    bool m_searchEngineHasBeenSet;

                    /**
                     * 搜索结果
                     */
                    std::vector<WebPage> m_results;
                    bool m_resultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20250101_MODEL_WEBSEARCHRESPONSE_H_
