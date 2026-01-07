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

#ifndef TENCENTCLOUD_DATAAGENT_V20250513_MODEL_QUERYCHUNKLISTREQUEST_H_
#define TENCENTCLOUD_DATAAGENT_V20250513_MODEL_QUERYCHUNKLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dataagent
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * QueryChunkList请求参数结构体
                */
                class QueryChunkListRequest : public AbstractModel
                {
                public:
                    QueryChunkListRequest();
                    ~QueryChunkListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取表示第一页
                     * @return Page 表示第一页
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置表示第一页
                     * @param _page 表示第一页
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取默认一页展示 10 条
                     * @return PageSize 默认一页展示 10 条
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置默认一页展示 10 条
                     * @param _pageSize 默认一页展示 10 条
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取知识库id
                     * @return KnowledgeBaseId 知识库id
                     * 
                     */
                    std::string GetKnowledgeBaseId() const;

                    /**
                     * 设置知识库id
                     * @param _knowledgeBaseId 知识库id
                     * 
                     */
                    void SetKnowledgeBaseId(const std::string& _knowledgeBaseId);

                    /**
                     * 判断参数 KnowledgeBaseId 是否已赋值
                     * @return KnowledgeBaseId 是否已赋值
                     * 
                     */
                    bool KnowledgeBaseIdHasBeenSet() const;

                private:

                    /**
                     * 表示第一页
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 默认一页展示 10 条
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 知识库id
                     */
                    std::string m_knowledgeBaseId;
                    bool m_knowledgeBaseIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_QUERYCHUNKLISTREQUEST_H_
