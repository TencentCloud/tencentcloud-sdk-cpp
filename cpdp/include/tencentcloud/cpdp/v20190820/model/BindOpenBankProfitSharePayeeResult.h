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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_BINDOPENBANKPROFITSHAREPAYEERESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_BINDOPENBANKPROFITSHAREPAYEERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 绑定分账收款方响应
                */
                class BindOpenBankProfitSharePayeeResult : public AbstractModel
                {
                public:
                    BindOpenBankProfitSharePayeeResult();
                    ~BindOpenBankProfitSharePayeeResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取账户ID。受益人ID
                     * @return AccountId 账户ID。受益人ID
                     * 
                     */
                    std::string GetAccountId() const;

                    /**
                     * 设置账户ID。受益人ID
                     * @param _accountId 账户ID。受益人ID
                     * 
                     */
                    void SetAccountId(const std::string& _accountId);

                    /**
                     * 判断参数 AccountId 是否已赋值
                     * @return AccountId 是否已赋值
                     * 
                     */
                    bool AccountIdHasBeenSet() const;

                    /**
                     * 获取账户号，通联渠道指客户银行账号
                     * @return AccountNo 账户号，通联渠道指客户银行账号
                     * 
                     */
                    std::string GetAccountNo() const;

                    /**
                     * 设置账户号，通联渠道指客户银行账号
                     * @param _accountNo 账户号，通联渠道指客户银行账号
                     * 
                     */
                    void SetAccountNo(const std::string& _accountNo);

                    /**
                     * 判断参数 AccountNo 是否已赋值
                     * @return AccountNo 是否已赋值
                     * 
                     */
                    bool AccountNoHasBeenSet() const;

                    /**
                     * 获取账户货币。参考附录“币种类型”。
                     * @return Currency 账户货币。参考附录“币种类型”。
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置账户货币。参考附录“币种类型”。
                     * @param _currency 账户货币。参考附录“币种类型”。
                     * 
                     */
                    void SetCurrency(const std::string& _currency);

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     * 
                     */
                    bool CurrencyHasBeenSet() const;

                private:

                    /**
                     * 账户ID。受益人ID
                     */
                    std::string m_accountId;
                    bool m_accountIdHasBeenSet;

                    /**
                     * 账户号，通联渠道指客户银行账号
                     */
                    std::string m_accountNo;
                    bool m_accountNoHasBeenSet;

                    /**
                     * 账户货币。参考附录“币种类型”。
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_BINDOPENBANKPROFITSHAREPAYEERESULT_H_
