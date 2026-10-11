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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RUNRERANKREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RUNRERANKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
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
                     * 获取<p>选择模型。<br>0：Rerank-2b<br>1：Rerank-0.6b</p>
                     * @return Model <p>选择模型。<br>0：Rerank-2b<br>1：Rerank-0.6b</p>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>选择模型。<br>0：Rerank-2b<br>1：Rerank-0.6b</p>
                     * @param _model <p>选择模型。<br>0：Rerank-2b<br>1：Rerank-0.6b</p>
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取<p>查询内容。用于匹配的query，即用户检索意图。</p>
                     * @return Query <p>查询内容。用于匹配的query，即用户检索意图。</p>
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置<p>查询内容。用于匹配的query，即用户检索意图。</p>
                     * @param _query <p>查询内容。用于匹配的query，即用户检索意图。</p>
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
                     * 获取<p>文档内容列表。</p>
                     * @return Docs <p>文档内容列表。</p>
                     * 
                     */
                    std::vector<std::string> GetDocs() const;

                    /**
                     * 设置<p>文档内容列表。</p>
                     * @param _docs <p>文档内容列表。</p>
                     * 
                     */
                    void SetDocs(const std::vector<std::string>& _docs);

                    /**
                     * 判断参数 Docs 是否已赋值
                     * @return Docs 是否已赋值
                     * 
                     */
                    bool DocsHasBeenSet() const;

                private:

                    /**
                     * <p>选择模型。<br>0：Rerank-2b<br>1：Rerank-0.6b</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>查询内容。用于匹配的query，即用户检索意图。</p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * <p>文档内容列表。</p>
                     */
                    std::vector<std::string> m_docs;
                    bool m_docsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RUNRERANKREQUEST_H_
