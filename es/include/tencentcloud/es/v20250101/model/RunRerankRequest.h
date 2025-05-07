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

#ifndef TENCENTCLOUD_ES_V20250101_MODEL_RUNRERANKREQUEST_H_
#define TENCENTCLOUD_ES_V20250101_MODEL_RUNRERANKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20250101
        {
            namespace Model
            {
                /**
                * RunRerank请求参数结构体
                */
                class RunRerankRequest : public AbstractModel
                {
                public:
                    RunRerankRequest();
                    ~RunRerankRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模型名称，可选模型列表：bge-reranker-large，bge-reranker-v2-m3。
                     * @return ModelName 模型名称，可选模型列表：bge-reranker-large，bge-reranker-v2-m3。
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置模型名称，可选模型列表：bge-reranker-large，bge-reranker-v2-m3。
                     * @param _modelName 模型名称，可选模型列表：bge-reranker-large，bge-reranker-v2-m3。
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取查询文本。
                     * @return Query 查询文本。
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置查询文本。
                     * @param _query 查询文本。
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取待排序的候选doc列表。
                     * @return Documents 待排序的候选doc列表。
                     * 
                     */
                    std::vector<std::string> GetDocuments() const;

                    /**
                     * 设置待排序的候选doc列表。
                     * @param _documents 待排序的候选doc列表。
                     * 
                     */
                    void SetDocuments(const std::vector<std::string>& _documents);

                    /**
                     * 判断参数 Documents 是否已赋值
                     * @return Documents 是否已赋值
                     * 
                     */
                    bool DocumentsHasBeenSet() const;

                    /**
                     * 获取排序返回的top文档数量, 如果没有指定则返回全部候选doc，如果指定的top_n值大于输入的候选doc数量，返回全部doc。
                     * @return TopN 排序返回的top文档数量, 如果没有指定则返回全部候选doc，如果指定的top_n值大于输入的候选doc数量，返回全部doc。
                     * 
                     */
                    int64_t GetTopN() const;

                    /**
                     * 设置排序返回的top文档数量, 如果没有指定则返回全部候选doc，如果指定的top_n值大于输入的候选doc数量，返回全部doc。
                     * @param _topN 排序返回的top文档数量, 如果没有指定则返回全部候选doc，如果指定的top_n值大于输入的候选doc数量，返回全部doc。
                     * 
                     */
                    void SetTopN(const int64_t& _topN);

                    /**
                     * 判断参数 TopN 是否已赋值
                     * @return TopN 是否已赋值
                     * 
                     */
                    bool TopNHasBeenSet() const;

                    /**
                     * 获取返回的排序结果列表里面是否返回每一条document原文，默认值False。
                     * @return ReturnDocuments 返回的排序结果列表里面是否返回每一条document原文，默认值False。
                     * 
                     */
                    bool GetReturnDocuments() const;

                    /**
                     * 设置返回的排序结果列表里面是否返回每一条document原文，默认值False。
                     * @param _returnDocuments 返回的排序结果列表里面是否返回每一条document原文，默认值False。
                     * 
                     */
                    void SetReturnDocuments(const bool& _returnDocuments);

                    /**
                     * 判断参数 ReturnDocuments 是否已赋值
                     * @return ReturnDocuments 是否已赋值
                     * 
                     */
                    bool ReturnDocumentsHasBeenSet() const;

                private:

                    /**
                     * 模型名称，可选模型列表：bge-reranker-large，bge-reranker-v2-m3。
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * 查询文本。
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 待排序的候选doc列表。
                     */
                    std::vector<std::string> m_documents;
                    bool m_documentsHasBeenSet;

                    /**
                     * 排序返回的top文档数量, 如果没有指定则返回全部候选doc，如果指定的top_n值大于输入的候选doc数量，返回全部doc。
                     */
                    int64_t m_topN;
                    bool m_topNHasBeenSet;

                    /**
                     * 返回的排序结果列表里面是否返回每一条document原文，默认值False。
                     */
                    bool m_returnDocuments;
                    bool m_returnDocumentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20250101_MODEL_RUNRERANKREQUEST_H_
