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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETCUSTOMERGATEWAYCLUSTERLISTREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETCUSTOMERGATEWAYCLUSTERLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * GetCustomerGatewayClusterList请求参数结构体
                */
                class GetCustomerGatewayClusterListRequest : public AbstractModel
                {
                public:
                    GetCustomerGatewayClusterListRequest();
                    ~GetCustomerGatewayClusterListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>按集群名称模糊匹配的关键字。最大 64 字符。</p>
                     * @return Keyword <p>按集群名称模糊匹配的关键字。最大 64 字符。</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>按集群名称模糊匹配的关键字。最大 64 字符。</p>
                     * @param _keyword <p>按集群名称模糊匹配的关键字。最大 64 字符。</p>
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取<p>当前查看页码。</p>
                     * @return PageNumber <p>当前查看页码。</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>当前查看页码。</p>
                     * @param _pageNumber <p>当前查看页码。</p>
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取<p>每页显示记录数。</p>
                     * @return PageSize <p>每页显示记录数。</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>每页显示记录数。</p>
                     * @param _pageSize <p>每页显示记录数。</p>
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * <p>按集群名称模糊匹配的关键字。最大 64 字符。</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>当前查看页码。</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>每页显示记录数。</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETCUSTOMERGATEWAYCLUSTERLISTREQUEST_H_
