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

#ifndef TENCENTCLOUD_PORTAL_V20230413_MODEL_SEARCHDOCUMENTSRESPONSE_H_
#define TENCENTCLOUD_PORTAL_V20230413_MODEL_SEARCHDOCUMENTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/portal/v20230413/model/SearchDocumentItem.h>


namespace TencentCloud
{
    namespace Portal
    {
        namespace V20230413
        {
            namespace Model
            {
                /**
                * SearchDocuments返回参数结构体
                */
                class SearchDocumentsResponse : public AbstractModel
                {
                public:
                    SearchDocumentsResponse();
                    ~SearchDocumentsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>总数</p>
                     * @return Total <p>总数</p>
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取<p>文档列表</p>
                     * @return Documents <p>文档列表</p>
                     * 
                     */
                    std::vector<SearchDocumentItem> GetDocuments() const;

                    /**
                     * 判断参数 Documents 是否已赋值
                     * @return Documents 是否已赋值
                     * 
                     */
                    bool DocumentsHasBeenSet() const;

                private:

                    /**
                     * <p>总数</p>
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * <p>文档列表</p>
                     */
                    std::vector<SearchDocumentItem> m_documents;
                    bool m_documentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PORTAL_V20230413_MODEL_SEARCHDOCUMENTSRESPONSE_H_
