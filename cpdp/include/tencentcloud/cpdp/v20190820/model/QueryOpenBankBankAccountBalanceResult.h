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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKBANKACCOUNTBALANCERESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKBANKACCOUNTBALANCERESULT_H_

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
                * 云企付-查询账户余额
                */
                class QueryOpenBankBankAccountBalanceResult : public AbstractModel
                {
                public:
                    QueryOpenBankBankAccountBalanceResult();
                    ~QueryOpenBankBankAccountBalanceResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总余额，单位分
                     * @return TotalBalance 总余额，单位分
                     * 
                     */
                    std::string GetTotalBalance() const;

                    /**
                     * 设置总余额，单位分
                     * @param _totalBalance 总余额，单位分
                     * 
                     */
                    void SetTotalBalance(const std::string& _totalBalance);

                    /**
                     * 判断参数 TotalBalance 是否已赋值
                     * @return TotalBalance 是否已赋值
                     * 
                     */
                    bool TotalBalanceHasBeenSet() const;

                    /**
                     * 获取昨日余额，单位分
                     * @return YesterdayBalance 昨日余额，单位分
                     * 
                     */
                    std::string GetYesterdayBalance() const;

                    /**
                     * 设置昨日余额，单位分
                     * @param _yesterdayBalance 昨日余额，单位分
                     * 
                     */
                    void SetYesterdayBalance(const std::string& _yesterdayBalance);

                    /**
                     * 判断参数 YesterdayBalance 是否已赋值
                     * @return YesterdayBalance 是否已赋值
                     * 
                     */
                    bool YesterdayBalanceHasBeenSet() const;

                private:

                    /**
                     * 总余额，单位分
                     */
                    std::string m_totalBalance;
                    bool m_totalBalanceHasBeenSet;

                    /**
                     * 昨日余额，单位分
                     */
                    std::string m_yesterdayBalance;
                    bool m_yesterdayBalanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKBANKACCOUNTBALANCERESULT_H_
