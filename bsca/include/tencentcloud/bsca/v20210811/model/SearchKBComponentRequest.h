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

#ifndef TENCENTCLOUD_BSCA_V20210811_MODEL_SEARCHKBCOMPONENTREQUEST_H_
#define TENCENTCLOUD_BSCA_V20210811_MODEL_SEARCHKBCOMPONENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bsca
    {
        namespace V20210811
        {
            namespace Model
            {
                /**
                * SearchKBComponent请求参数结构体
                */
                class SearchKBComponentRequest : public AbstractModel
                {
                public:
                    SearchKBComponentRequest();
                    ~SearchKBComponentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要搜索的组件名
                     * @return Query 需要搜索的组件名
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置需要搜索的组件名
                     * @param _query 需要搜索的组件名
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
                     * 获取需要搜索的组件类型
                     * @return Protocol 需要搜索的组件类型
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置需要搜索的组件类型
                     * @param _protocol 需要搜索的组件类型
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取分页参数，从 0 开始
                     * @return PageNumber 分页参数，从 0 开始
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置分页参数，从 0 开始
                     * @param _pageNumber 分页参数，从 0 开始
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
                     * 获取分页参数，设置每页返回的结果数量
                     * @return PageSize 分页参数，设置每页返回的结果数量
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置分页参数，设置每页返回的结果数量
                     * @param _pageSize 分页参数，设置每页返回的结果数量
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
                     * 需要搜索的组件名
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 需要搜索的组件类型
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 分页参数，从 0 开始
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 分页参数，设置每页返回的结果数量
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BSCA_V20210811_MODEL_SEARCHKBCOMPONENTREQUEST_H_
