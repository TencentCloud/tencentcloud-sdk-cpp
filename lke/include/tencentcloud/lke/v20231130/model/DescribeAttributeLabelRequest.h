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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEATTRIBUTELABELREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEATTRIBUTELABELREQUEST_H_

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
                * DescribeAttributeLabel请求参数结构体
                */
                class DescribeAttributeLabelRequest : public AbstractModel
                {
                public:
                    DescribeAttributeLabelRequest();
                    ~DescribeAttributeLabelRequest() = default;
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
                     * 获取标签ID
                     * @return AttributeBizId 标签ID
                     * 
                     */
                    std::string GetAttributeBizId() const;

                    /**
                     * 设置标签ID
                     * @param _attributeBizId 标签ID
                     * 
                     */
                    void SetAttributeBizId(const std::string& _attributeBizId);

                    /**
                     * 判断参数 AttributeBizId 是否已赋值
                     * @return AttributeBizId 是否已赋值
                     * 
                     */
                    bool AttributeBizIdHasBeenSet() const;

                    /**
                     * 获取每次请求返回的最大标签数量​，限制单次接口返回的标签数量，避免数据量过大。取值范围：大于0。

                     * @return Limit 每次请求返回的最大标签数量​，限制单次接口返回的标签数量，避免数据量过大。取值范围：大于0。

                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每次请求返回的最大标签数量​，限制单次接口返回的标签数量，避免数据量过大。取值范围：大于0。

                     * @param _limit 每次请求返回的最大标签数量​，限制单次接口返回的标签数量，避免数据量过大。取值范围：大于0。

                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

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
                     * 获取搜索关键词，用于查询标签标准词或相似词
                     * @return Query 搜索关键词，用于查询标签标准词或相似词
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置搜索关键词，用于查询标签标准词或相似词
                     * @param _query 搜索关键词，用于查询标签标准词或相似词
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
                     * 获取滚动加载游标，上一次请求返回的最后一个标签ID
                     * @return LastLabelBizId 滚动加载游标，上一次请求返回的最后一个标签ID
                     * 
                     */
                    std::string GetLastLabelBizId() const;

                    /**
                     * 设置滚动加载游标，上一次请求返回的最后一个标签ID
                     * @param _lastLabelBizId 滚动加载游标，上一次请求返回的最后一个标签ID
                     * 
                     */
                    void SetLastLabelBizId(const std::string& _lastLabelBizId);

                    /**
                     * 判断参数 LastLabelBizId 是否已赋值
                     * @return LastLabelBizId 是否已赋值
                     * 
                     */
                    bool LastLabelBizIdHasBeenSet() const;

                    /**
                     * 获取查询范围 all(或者传空):标准词和相似词 standard:标准词 similar:相似词
                     * @return QueryScope 查询范围 all(或者传空):标准词和相似词 standard:标准词 similar:相似词
                     * 
                     */
                    std::string GetQueryScope() const;

                    /**
                     * 设置查询范围 all(或者传空):标准词和相似词 standard:标准词 similar:相似词
                     * @param _queryScope 查询范围 all(或者传空):标准词和相似词 standard:标准词 similar:相似词
                     * 
                     */
                    void SetQueryScope(const std::string& _queryScope);

                    /**
                     * 判断参数 QueryScope 是否已赋值
                     * @return QueryScope 是否已赋值
                     * 
                     */
                    bool QueryScopeHasBeenSet() const;

                private:

                    /**
                     * 应用ID，获取方法参看如何获取[BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * 标签ID
                     */
                    std::string m_attributeBizId;
                    bool m_attributeBizIdHasBeenSet;

                    /**
                     * 每次请求返回的最大标签数量​，限制单次接口返回的标签数量，避免数据量过大。取值范围：大于0。

                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

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
                     * 搜索关键词，用于查询标签标准词或相似词
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 滚动加载游标，上一次请求返回的最后一个标签ID
                     */
                    std::string m_lastLabelBizId;
                    bool m_lastLabelBizIdHasBeenSet;

                    /**
                     * 查询范围 all(或者传空):标准词和相似词 standard:标准词 similar:相似词
                     */
                    std::string m_queryScope;
                    bool m_queryScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEATTRIBUTELABELREQUEST_H_
