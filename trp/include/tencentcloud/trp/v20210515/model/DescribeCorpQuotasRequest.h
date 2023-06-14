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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBECORPQUOTASREQUEST_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBECORPQUOTASREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * DescribeCorpQuotas请求参数结构体
                */
                class DescribeCorpQuotasRequest : public AbstractModel
                {
                public:
                    DescribeCorpQuotasRequest();
                    ~DescribeCorpQuotasRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取渠道商ID，不要传
                     * @return AgentId 渠道商ID，不要传
                     * 
                     */
                    uint64_t GetAgentId() const;

                    /**
                     * 设置渠道商ID，不要传
                     * @param _agentId 渠道商ID，不要传
                     * 
                     */
                    void SetAgentId(const uint64_t& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * 
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取页数
                     * @return PageNumber 页数
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页数
                     * @param _pageNumber 页数
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
                     * 获取搜索企业ID
                     * @return Keyword 搜索企业ID
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置搜索企业ID
                     * @param _keyword 搜索企业ID
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                private:

                    /**
                     * 渠道商ID，不要传
                     */
                    uint64_t m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * 页数
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页数量
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 搜索企业ID
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBECORPQUOTASREQUEST_H_
