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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_LISTQACATEREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_LISTQACATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * ListQACate请求参数结构体
                */
                class ListQACateRequest : public AbstractModel
                {
                public:
                    ListQACateRequest();
                    ~ListQACateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return BotBizId 应用ID
                     * 
                     */
                    std::string GetBotBizId() const;

                    /**
                     * 设置应用ID
                     * @param _botBizId 应用ID
                     * 
                     */
                    void SetBotBizId(const std::string& _botBizId);

                    /**
                     * 判断参数 BotBizId 是否已赋值
                     * @return BotBizId 是否已赋值
                     * 
                     */
                    bool BotBizIdHasBeenSet() const;

                    /**
                     * 获取分类查询类型：0-全量查询整棵标签树，1-根据父节点BizId分页查询子节点，2-关键词检索所有匹配的分类链路
                     * @return QueryType 分类查询类型：0-全量查询整棵标签树，1-根据父节点BizId分页查询子节点，2-关键词检索所有匹配的分类链路
                     * 
                     */
                    uint64_t GetQueryType() const;

                    /**
                     * 设置分类查询类型：0-全量查询整棵标签树，1-根据父节点BizId分页查询子节点，2-关键词检索所有匹配的分类链路
                     * @param _queryType 分类查询类型：0-全量查询整棵标签树，1-根据父节点BizId分页查询子节点，2-关键词检索所有匹配的分类链路
                     * 
                     */
                    void SetQueryType(const uint64_t& _queryType);

                    /**
                     * 判断参数 QueryType 是否已赋值
                     * @return QueryType 是否已赋值
                     * 
                     */
                    bool QueryTypeHasBeenSet() const;

                    /**
                     * 获取QueryType=1时，父节点分类ID
                     * @return ParentCateBizId QueryType=1时，父节点分类ID
                     * 
                     */
                    std::string GetParentCateBizId() const;

                    /**
                     * 设置QueryType=1时，父节点分类ID
                     * @param _parentCateBizId QueryType=1时，父节点分类ID
                     * 
                     */
                    void SetParentCateBizId(const std::string& _parentCateBizId);

                    /**
                     * 判断参数 ParentCateBizId 是否已赋值
                     * @return ParentCateBizId 是否已赋值
                     * 
                     */
                    bool ParentCateBizIdHasBeenSet() const;

                    /**
                     * 获取QueryType=1时，页码（从1开始）
                     * @return PageNumber QueryType=1时，页码（从1开始）
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置QueryType=1时，页码（从1开始）
                     * @param _pageNumber QueryType=1时，页码（从1开始）
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取每页数量（默认10）
                     * @return PageSize 每页数量（默认10）
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页数量（默认10）
                     * @param _pageSize 每页数量（默认10）
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
                     * 获取QueryType=2时，搜索内容
                     * @return Query QueryType=2时，搜索内容
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置QueryType=2时，搜索内容
                     * @param _query QueryType=2时，搜索内容
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * 分类查询类型：0-全量查询整棵标签树，1-根据父节点BizId分页查询子节点，2-关键词检索所有匹配的分类链路
                     */
                    uint64_t m_queryType;
                    bool m_queryTypeHasBeenSet;

                    /**
                     * QueryType=1时，父节点分类ID
                     */
                    std::string m_parentCateBizId;
                    bool m_parentCateBizIdHasBeenSet;

                    /**
                     * QueryType=1时，页码（从1开始）
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页数量（默认10）
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * QueryType=2时，搜索内容
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_LISTQACATEREQUEST_H_
