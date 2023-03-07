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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYCREDITALLOCATIONHISTORYREQUEST_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYCREDITALLOCATIONHISTORYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * QueryCreditAllocationHistory请求参数结构体
                */
                class QueryCreditAllocationHistoryRequest : public AbstractModel
                {
                public:
                    QueryCreditAllocationHistoryRequest();
                    ~QueryCreditAllocationHistoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取客户uin
                     * @return ClientUin 客户uin
                     */
                    uint64_t GetClientUin() const;

                    /**
                     * 设置客户uin
                     * @param ClientUin 客户uin
                     */
                    void SetClientUin(const uint64_t& _clientUin);

                    /**
                     * 判断参数 ClientUin 是否已赋值
                     * @return ClientUin 是否已赋值
                     */
                    bool ClientUinHasBeenSet() const;

                    /**
                     * 获取翻页参数，所在页数
                     * @return Page 翻页参数，所在页数
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置翻页参数，所在页数
                     * @param Page 翻页参数，所在页数
                     */
                    void SetPage(const uint64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取翻页参数，每页数据量
                     * @return PageSize 翻页参数，每页数据量
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置翻页参数，每页数据量
                     * @param PageSize 翻页参数，每页数据量
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * 客户uin
                     */
                    uint64_t m_clientUin;
                    bool m_clientUinHasBeenSet;

                    /**
                     * 翻页参数，所在页数
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 翻页参数，每页数据量
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYCREDITALLOCATIONHISTORYREQUEST_H_
