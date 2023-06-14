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

#ifndef TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBEBALANCETRANSACTIONSREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBEBALANCETRANSACTIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20211125
        {
            namespace Model
            {
                /**
                * DescribeBalanceTransactions请求参数结构体
                */
                class DescribeBalanceTransactionsRequest : public AbstractModel
                {
                public:
                    DescribeBalanceTransactionsRequest();
                    ~DescribeBalanceTransactionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取账户类型：1-设备接入；2-云存。
                     * @return AccountType 账户类型：1-设备接入；2-云存。
                     * 
                     */
                    uint64_t GetAccountType() const;

                    /**
                     * 设置账户类型：1-设备接入；2-云存。
                     * @param _accountType 账户类型：1-设备接入；2-云存。
                     * 
                     */
                    void SetAccountType(const uint64_t& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取分页游标开始，默认为0开始拉取第一条。
                     * @return Offset 分页游标开始，默认为0开始拉取第一条。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页游标开始，默认为0开始拉取第一条。
                     * @param _offset 分页游标开始，默认为0开始拉取第一条。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页每页数量。
                     * @return Limit 分页每页数量。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页每页数量。
                     * @param _limit 分页每页数量。
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
                     * 获取流水类型：All-全部类型；Recharge-充值；CreateOrder-新购。默认为All
                     * @return Operation 流水类型：All-全部类型；Recharge-充值；CreateOrder-新购。默认为All
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置流水类型：All-全部类型；Recharge-充值；CreateOrder-新购。默认为All
                     * @param _operation 流水类型：All-全部类型；Recharge-充值；CreateOrder-新购。默认为All
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                private:

                    /**
                     * 账户类型：1-设备接入；2-云存。
                     */
                    uint64_t m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * 分页游标开始，默认为0开始拉取第一条。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页每页数量。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 流水类型：All-全部类型；Recharge-充值；CreateOrder-新购。默认为All
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBEBALANCETRANSACTIONSREQUEST_H_
