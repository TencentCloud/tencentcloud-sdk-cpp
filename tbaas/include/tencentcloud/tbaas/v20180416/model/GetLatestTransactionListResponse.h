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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_GETLATESTTRANSACTIONLISTRESPONSE_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_GETLATESTTRANSACTIONLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tbaas/v20180416/model/TransactionItem.h>


namespace TencentCloud
{
    namespace Tbaas
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * GetLatestTransactionList返回参数结构体
                */
                class GetLatestTransactionListResponse : public AbstractModel
                {
                public:
                    GetLatestTransactionListResponse();
                    ~GetLatestTransactionListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取交易总数量
                     * @return TotalCount 交易总数量
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
                     * 获取交易列表
                     * @return TransactionList 交易列表
                     * 
                     */
                    std::vector<TransactionItem> GetTransactionList() const;

                    /**
                     * 判断参数 TransactionList 是否已赋值
                     * @return TransactionList 是否已赋值
                     * 
                     */
                    bool TransactionListHasBeenSet() const;

                private:

                    /**
                     * 交易总数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 交易列表
                     */
                    std::vector<TransactionItem> m_transactionList;
                    bool m_transactionListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_GETLATESTTRANSACTIONLISTRESPONSE_H_
