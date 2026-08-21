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

#ifndef TENCENTCLOUD_PORTAL_V20230413_MODEL_SEARCHDOCUMENTSREQUEST_H_
#define TENCENTCLOUD_PORTAL_V20230413_MODEL_SEARCHDOCUMENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Portal
    {
        namespace V20230413
        {
            namespace Model
            {
                /**
                * SearchDocuments请求参数结构体
                */
                class SearchDocumentsRequest : public AbstractModel
                {
                public:
                    SearchDocumentsRequest();
                    ~SearchDocumentsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>搜索关键词</p>
                     * @return Query <p>搜索关键词</p>
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置<p>搜索关键词</p>
                     * @param _query <p>搜索关键词</p>
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
                     * 获取<p>页码</p><p>取值范围：[1, 99]</p>
                     * @return Page <p>页码</p><p>取值范围：[1, 99]</p>
                     * 
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置<p>页码</p><p>取值范围：[1, 99]</p>
                     * @param _page <p>页码</p><p>取值范围：[1, 99]</p>
                     * 
                     */
                    void SetPage(const uint64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取<p>每页条数</p><p>取值范围：[1, 20]</p>
                     * @return PageSize <p>每页条数</p><p>取值范围：[1, 20]</p>
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置<p>每页条数</p><p>取值范围：[1, 20]</p>
                     * @param _pageSize <p>每页条数</p><p>取值范围：[1, 20]</p>
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>产品名称</p>
                     * @return ProductName <p>产品名称</p>
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置<p>产品名称</p>
                     * @param _productName <p>产品名称</p>
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                private:

                    /**
                     * <p>搜索关键词</p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * <p>页码</p><p>取值范围：[1, 99]</p>
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * <p>每页条数</p><p>取值范围：[1, 20]</p>
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>产品名称</p>
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PORTAL_V20230413_MODEL_SEARCHDOCUMENTSREQUEST_H_
