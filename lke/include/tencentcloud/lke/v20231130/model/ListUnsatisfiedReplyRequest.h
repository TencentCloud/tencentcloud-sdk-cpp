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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_LISTUNSATISFIEDREPLYREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_LISTUNSATISFIEDREPLYREQUEST_H_

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
                * ListUnsatisfiedReply请求参数结构体
                */
                class ListUnsatisfiedReplyRequest : public AbstractModel
                {
                public:
                    ListUnsatisfiedReplyRequest();
                    ~ListUnsatisfiedReplyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID，获取方法参看如何获取[BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)
                     * @return BotBizId 应用ID，获取方法参看如何获取[BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)
                     * 
                     */
                    std::string GetBotBizId() const;

                    /**
                     * 设置应用ID，获取方法参看如何获取[BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)
                     * @param _botBizId 应用ID，获取方法参看如何获取[BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)
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
                     * 获取页码，取值范围：大于0
                     * @return PageNumber 页码，取值范围：大于0
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页码，取值范围：大于0
                     * @param _pageNumber 页码，取值范围：大于0
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
                     * 获取分页数量，取值范围：大于0
                     * @return PageSize 分页数量，取值范围：大于0
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置分页数量，取值范围：大于0
                     * @param _pageSize 分页数量，取值范围：大于0
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
                     * 获取登录用户主账号(集成商模式必填)
                     * @return LoginUin 登录用户主账号(集成商模式必填)
                     * 
                     */
                    std::string GetLoginUin() const;

                    /**
                     * 设置登录用户主账号(集成商模式必填)
                     * @param _loginUin 登录用户主账号(集成商模式必填)
                     * 
                     */
                    void SetLoginUin(const std::string& _loginUin);

                    /**
                     * 判断参数 LoginUin 是否已赋值
                     * @return LoginUin 是否已赋值
                     * 
                     */
                    bool LoginUinHasBeenSet() const;

                    /**
                     * 获取登录用户子账号(集成商模式必填)
                     * @return LoginSubAccountUin 登录用户子账号(集成商模式必填)
                     * 
                     */
                    std::string GetLoginSubAccountUin() const;

                    /**
                     * 设置登录用户子账号(集成商模式必填)
                     * @param _loginSubAccountUin 登录用户子账号(集成商模式必填)
                     * 
                     */
                    void SetLoginSubAccountUin(const std::string& _loginSubAccountUin);

                    /**
                     * 判断参数 LoginSubAccountUin 是否已赋值
                     * @return LoginSubAccountUin 是否已赋值
                     * 
                     */
                    bool LoginSubAccountUinHasBeenSet() const;

                    /**
                     * 获取用户请求(问题或答案)，按关键词检索，可匹配用户问题或答案
                     * @return Query 用户请求(问题或答案)，按关键词检索，可匹配用户问题或答案
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置用户请求(问题或答案)，按关键词检索，可匹配用户问题或答案
                     * @param _query 用户请求(问题或答案)，按关键词检索，可匹配用户问题或答案
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
                     * 获取按错误类型检索
                     * @return Reasons 按错误类型检索
                     * 
                     */
                    std::vector<std::string> GetReasons() const;

                    /**
                     * 设置按错误类型检索
                     * @param _reasons 按错误类型检索
                     * 
                     */
                    void SetReasons(const std::vector<std::string>& _reasons);

                    /**
                     * 判断参数 Reasons 是否已赋值
                     * @return Reasons 是否已赋值
                     * 
                     */
                    bool ReasonsHasBeenSet() const;

                    /**
                     * 获取按操作状态检索  0-全部 1-待处理  2-已处理【包括答案纠错，拒答，忽略】，不填时默认值为0
                     * @return Status 按操作状态检索  0-全部 1-待处理  2-已处理【包括答案纠错，拒答，忽略】，不填时默认值为0
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置按操作状态检索  0-全部 1-待处理  2-已处理【包括答案纠错，拒答，忽略】，不填时默认值为0
                     * @param _status 按操作状态检索  0-全部 1-待处理  2-已处理【包括答案纠错，拒答，忽略】，不填时默认值为0
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取处理状态 0-待处理 1-已拒答 2-已忽略 3-已添加为新问答 4-已添加为相似问
                     * @return HandlingStatuses 处理状态 0-待处理 1-已拒答 2-已忽略 3-已添加为新问答 4-已添加为相似问
                     * 
                     */
                    std::vector<int64_t> GetHandlingStatuses() const;

                    /**
                     * 设置处理状态 0-待处理 1-已拒答 2-已忽略 3-已添加为新问答 4-已添加为相似问
                     * @param _handlingStatuses 处理状态 0-待处理 1-已拒答 2-已忽略 3-已添加为新问答 4-已添加为相似问
                     * 
                     */
                    void SetHandlingStatuses(const std::vector<int64_t>& _handlingStatuses);

                    /**
                     * 判断参数 HandlingStatuses 是否已赋值
                     * @return HandlingStatuses 是否已赋值
                     * 
                     */
                    bool HandlingStatusesHasBeenSet() const;

                private:

                    /**
                     * 应用ID，获取方法参看如何获取[BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * 页码，取值范围：大于0
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 分页数量，取值范围：大于0
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 登录用户主账号(集成商模式必填)
                     */
                    std::string m_loginUin;
                    bool m_loginUinHasBeenSet;

                    /**
                     * 登录用户子账号(集成商模式必填)
                     */
                    std::string m_loginSubAccountUin;
                    bool m_loginSubAccountUinHasBeenSet;

                    /**
                     * 用户请求(问题或答案)，按关键词检索，可匹配用户问题或答案
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 按错误类型检索
                     */
                    std::vector<std::string> m_reasons;
                    bool m_reasonsHasBeenSet;

                    /**
                     * 按操作状态检索  0-全部 1-待处理  2-已处理【包括答案纠错，拒答，忽略】，不填时默认值为0
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 处理状态 0-待处理 1-已拒答 2-已忽略 3-已添加为新问答 4-已添加为相似问
                     */
                    std::vector<int64_t> m_handlingStatuses;
                    bool m_handlingStatusesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_LISTUNSATISFIEDREPLYREQUEST_H_
