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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYFLEXAMOUNTBEFORETAXREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYFLEXAMOUNTBEFORETAXREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * QueryFlexAmountBeforeTax请求参数结构体
                */
                class QueryFlexAmountBeforeTaxRequest : public AbstractModel
                {
                public:
                    QueryFlexAmountBeforeTaxRequest();
                    ~QueryFlexAmountBeforeTaxRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取收款用户ID
                     * @return PayeeId 收款用户ID
                     */
                    std::string GetPayeeId() const;

                    /**
                     * 设置收款用户ID
                     * @param PayeeId 收款用户ID
                     */
                    void SetPayeeId(const std::string& _payeeId);

                    /**
                     * 判断参数 PayeeId 是否已赋值
                     * @return PayeeId 是否已赋值
                     */
                    bool PayeeIdHasBeenSet() const;

                    /**
                     * 获取收入类型
LABOR:劳务所得
OCCASION:偶然所得
                     * @return IncomeType 收入类型
LABOR:劳务所得
OCCASION:偶然所得
                     */
                    std::string GetIncomeType() const;

                    /**
                     * 设置收入类型
LABOR:劳务所得
OCCASION:偶然所得
                     * @param IncomeType 收入类型
LABOR:劳务所得
OCCASION:偶然所得
                     */
                    void SetIncomeType(const std::string& _incomeType);

                    /**
                     * 判断参数 IncomeType 是否已赋值
                     * @return IncomeType 是否已赋值
                     */
                    bool IncomeTypeHasBeenSet() const;

                    /**
                     * 获取税后金额
                     * @return AmountAfterTax 税后金额
                     */
                    std::string GetAmountAfterTax() const;

                    /**
                     * 设置税后金额
                     * @param AmountAfterTax 税后金额
                     */
                    void SetAmountAfterTax(const std::string& _amountAfterTax);

                    /**
                     * 判断参数 AmountAfterTax 是否已赋值
                     * @return AmountAfterTax 是否已赋值
                     */
                    bool AmountAfterTaxHasBeenSet() const;

                private:

                    /**
                     * 收款用户ID
                     */
                    std::string m_payeeId;
                    bool m_payeeIdHasBeenSet;

                    /**
                     * 收入类型
LABOR:劳务所得
OCCASION:偶然所得
                     */
                    std::string m_incomeType;
                    bool m_incomeTypeHasBeenSet;

                    /**
                     * 税后金额
                     */
                    std::string m_amountAfterTax;
                    bool m_amountAfterTaxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYFLEXAMOUNTBEFORETAXREQUEST_H_
