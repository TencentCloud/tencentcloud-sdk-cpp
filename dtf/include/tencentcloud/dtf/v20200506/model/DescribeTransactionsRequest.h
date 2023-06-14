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

#ifndef TENCENTCLOUD_DTF_V20200506_MODEL_DESCRIBETRANSACTIONSREQUEST_H_
#define TENCENTCLOUD_DTF_V20200506_MODEL_DESCRIBETRANSACTIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dtf
    {
        namespace V20200506
        {
            namespace Model
            {
                /**
                * DescribeTransactions请求参数结构体
                */
                class DescribeTransactionsRequest : public AbstractModel
                {
                public:
                    DescribeTransactionsRequest();
                    ~DescribeTransactionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取事务分组ID
                     * @return GroupId 事务分组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置事务分组ID
                     * @param _groupId 事务分组ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取事务开始时间查询起始时间戳，UTC，精确到毫秒
                     * @return TransactionBeginFrom 事务开始时间查询起始时间戳，UTC，精确到毫秒
                     * 
                     */
                    int64_t GetTransactionBeginFrom() const;

                    /**
                     * 设置事务开始时间查询起始时间戳，UTC，精确到毫秒
                     * @param _transactionBeginFrom 事务开始时间查询起始时间戳，UTC，精确到毫秒
                     * 
                     */
                    void SetTransactionBeginFrom(const int64_t& _transactionBeginFrom);

                    /**
                     * 判断参数 TransactionBeginFrom 是否已赋值
                     * @return TransactionBeginFrom 是否已赋值
                     * 
                     */
                    bool TransactionBeginFromHasBeenSet() const;

                    /**
                     * 获取事务开始时间查询截止时间戳，UTC，精确到毫秒
                     * @return TransactionBeginTo 事务开始时间查询截止时间戳，UTC，精确到毫秒
                     * 
                     */
                    int64_t GetTransactionBeginTo() const;

                    /**
                     * 设置事务开始时间查询截止时间戳，UTC，精确到毫秒
                     * @param _transactionBeginTo 事务开始时间查询截止时间戳，UTC，精确到毫秒
                     * 
                     */
                    void SetTransactionBeginTo(const int64_t& _transactionBeginTo);

                    /**
                     * 判断参数 TransactionBeginTo 是否已赋值
                     * @return TransactionBeginTo 是否已赋值
                     * 
                     */
                    bool TransactionBeginToHasBeenSet() const;

                    /**
                     * 获取仅查询异常状态的事务，true：仅查询异常，false或不传入：查询所有
                     * @return SearchError 仅查询异常状态的事务，true：仅查询异常，false或不传入：查询所有
                     * 
                     */
                    bool GetSearchError() const;

                    /**
                     * 设置仅查询异常状态的事务，true：仅查询异常，false或不传入：查询所有
                     * @param _searchError 仅查询异常状态的事务，true：仅查询异常，false或不传入：查询所有
                     * 
                     */
                    void SetSearchError(const bool& _searchError);

                    /**
                     * 判断参数 SearchError 是否已赋值
                     * @return SearchError 是否已赋值
                     * 
                     */
                    bool SearchErrorHasBeenSet() const;

                    /**
                     * 获取主事务ID，不传入时查询全量，高优先级
                     * @return TransactionId 主事务ID，不传入时查询全量，高优先级
                     * 
                     */
                    int64_t GetTransactionId() const;

                    /**
                     * 设置主事务ID，不传入时查询全量，高优先级
                     * @param _transactionId 主事务ID，不传入时查询全量，高优先级
                     * 
                     */
                    void SetTransactionId(const int64_t& _transactionId);

                    /**
                     * 判断参数 TransactionId 是否已赋值
                     * @return TransactionId 是否已赋值
                     * 
                     */
                    bool TransactionIdHasBeenSet() const;

                    /**
                     * 获取主事务ID列表，不传入时查询全量，低优先级
                     * @return TransactionIdList 主事务ID列表，不传入时查询全量，低优先级
                     * 
                     */
                    std::vector<int64_t> GetTransactionIdList() const;

                    /**
                     * 设置主事务ID列表，不传入时查询全量，低优先级
                     * @param _transactionIdList 主事务ID列表，不传入时查询全量，低优先级
                     * 
                     */
                    void SetTransactionIdList(const std::vector<int64_t>& _transactionIdList);

                    /**
                     * 判断参数 TransactionIdList 是否已赋值
                     * @return TransactionIdList 是否已赋值
                     * 
                     */
                    bool TransactionIdListHasBeenSet() const;

                    /**
                     * 获取每页数量
                     * @return Limit 每页数量
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页数量
                     * @param _limit 每页数量
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取起始偏移量
                     * @return Offset 起始偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置起始偏移量
                     * @param _offset 起始偏移量
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 事务分组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 事务开始时间查询起始时间戳，UTC，精确到毫秒
                     */
                    int64_t m_transactionBeginFrom;
                    bool m_transactionBeginFromHasBeenSet;

                    /**
                     * 事务开始时间查询截止时间戳，UTC，精确到毫秒
                     */
                    int64_t m_transactionBeginTo;
                    bool m_transactionBeginToHasBeenSet;

                    /**
                     * 仅查询异常状态的事务，true：仅查询异常，false或不传入：查询所有
                     */
                    bool m_searchError;
                    bool m_searchErrorHasBeenSet;

                    /**
                     * 主事务ID，不传入时查询全量，高优先级
                     */
                    int64_t m_transactionId;
                    bool m_transactionIdHasBeenSet;

                    /**
                     * 主事务ID列表，不传入时查询全量，低优先级
                     */
                    std::vector<int64_t> m_transactionIdList;
                    bool m_transactionIdListHasBeenSet;

                    /**
                     * 每页数量
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 起始偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTF_V20200506_MODEL_DESCRIBETRANSACTIONSREQUEST_H_
