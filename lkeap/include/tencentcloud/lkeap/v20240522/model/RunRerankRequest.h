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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_RUNRERANKREQUEST_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_RUNRERANKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
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
                     * 获取说明：查询内容
备注：用于匹配的query
                     * @return Query 说明：查询内容
备注：用于匹配的query
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置说明：查询内容
备注：用于匹配的query
                     * @param _query 说明：查询内容
备注：用于匹配的query
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
                     * 获取说明：文档列表
备注：最多60个，Query字段和Docs字段的总长度上限为2000字符
                     * @return Docs 说明：文档列表
备注：最多60个，Query字段和Docs字段的总长度上限为2000字符
                     * 
                     */
                    std::vector<std::string> GetDocs() const;

                    /**
                     * 设置说明：文档列表
备注：最多60个，Query字段和Docs字段的总长度上限为2000字符
                     * @param _docs 说明：文档列表
备注：最多60个，Query字段和Docs字段的总长度上限为2000字符
                     * 
                     */
                    void SetDocs(const std::vector<std::string>& _docs);

                    /**
                     * 判断参数 Docs 是否已赋值
                     * @return Docs 是否已赋值
                     * 
                     */
                    bool DocsHasBeenSet() const;

                    /**
                     * 获取说明：模型名称
备注：仅一个模型可选
默认值：lke-reranker-base
                     * @return Model 说明：模型名称
备注：仅一个模型可选
默认值：lke-reranker-base
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置说明：模型名称
备注：仅一个模型可选
默认值：lke-reranker-base
                     * @param _model 说明：模型名称
备注：仅一个模型可选
默认值：lke-reranker-base
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                private:

                    /**
                     * 说明：查询内容
备注：用于匹配的query
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 说明：文档列表
备注：最多60个，Query字段和Docs字段的总长度上限为2000字符
                     */
                    std::vector<std::string> m_docs;
                    bool m_docsHasBeenSet;

                    /**
                     * 说明：模型名称
备注：仅一个模型可选
默认值：lke-reranker-base
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_RUNRERANKREQUEST_H_
