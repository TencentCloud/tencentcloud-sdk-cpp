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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_LISTREJECTEDQUESTIONREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_LISTREJECTEDQUESTIONREQUEST_H_

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
                * ListRejectedQuestion请求参数结构体
                */
                class ListRejectedQuestionRequest : public AbstractModel
                {
                public:
                    ListRejectedQuestionRequest();
                    ~ListRejectedQuestionRequest() = default;
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
                     * 获取页码

                     * @return PageNumber 页码

                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页码

                     * @param _pageNumber 页码

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
                     * 获取每页数量

                     * @return PageSize 每页数量

                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页数量

                     * @param _pageSize 每页数量

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
                     * 获取查询内容

                     * @return Query 查询内容

                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置查询内容

                     * @param _query 查询内容

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
                     * 页码

                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页数量

                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 查询内容

                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_LISTREJECTEDQUESTIONREQUEST_H_
