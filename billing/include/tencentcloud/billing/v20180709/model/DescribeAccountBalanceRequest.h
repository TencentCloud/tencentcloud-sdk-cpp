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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEACCOUNTBALANCEREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEACCOUNTBALANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeAccountBalance请求参数结构体
                */
                class DescribeAccountBalanceRequest : public AbstractModel
                {
                public:
                    DescribeAccountBalanceRequest();
                    ~DescribeAccountBalanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取是否查询临时额度
                     * @return TempCredit 是否查询临时额度
                     * 
                     */
                    bool GetTempCredit() const;

                    /**
                     * 设置是否查询临时额度
                     * @param _tempCredit 是否查询临时额度
                     * 
                     */
                    void SetTempCredit(const bool& _tempCredit);

                    /**
                     * 判断参数 TempCredit 是否已赋值
                     * @return TempCredit 是否已赋值
                     * 
                     */
                    bool TempCreditHasBeenSet() const;

                private:

                    /**
                     * 是否查询临时额度
                     */
                    bool m_tempCredit;
                    bool m_tempCreditHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEACCOUNTBALANCEREQUEST_H_
