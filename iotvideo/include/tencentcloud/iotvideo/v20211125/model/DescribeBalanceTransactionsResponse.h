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

#ifndef TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBEBALANCETRANSACTIONSRESPONSE_H_
#define TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBEBALANCETRANSACTIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotvideo/v20211125/model/BalanceTransaction.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20211125
        {
            namespace Model
            {
                /**
                * DescribeBalanceTransactions返回参数结构体
                */
                class DescribeBalanceTransactionsResponse : public AbstractModel
                {
                public:
                    DescribeBalanceTransactionsResponse();
                    ~DescribeBalanceTransactionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取账户流水总数。
                     * @return TotalCount 账户流水总数。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取账户流水详情数组。
                     * @return Transactions 账户流水详情数组。
                     * 
                     */
                    std::vector<BalanceTransaction> GetTransactions() const;

                    /**
                     * 判断参数 Transactions 是否已赋值
                     * @return Transactions 是否已赋值
                     * 
                     */
                    bool TransactionsHasBeenSet() const;

                private:

                    /**
                     * 账户流水总数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 账户流水详情数组。
                     */
                    std::vector<BalanceTransaction> m_transactions;
                    bool m_transactionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBEBALANCETRANSACTIONSRESPONSE_H_
