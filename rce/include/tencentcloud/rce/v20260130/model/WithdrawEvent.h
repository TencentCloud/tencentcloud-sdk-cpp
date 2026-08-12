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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_WITHDRAWEVENT_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_WITHDRAWEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/Amount.h>
#include <tencentcloud/rce/v20260130/model/Card.h>
#include <tencentcloud/rce/v20260130/model/Wallet.h>
#include <tencentcloud/rce/v20260130/model/Result.h>
#include <tencentcloud/rce/v20260130/model/Cust.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 提现事件详情
                */
                class WithdrawEvent : public AbstractModel
                {
                public:
                    WithdrawEvent();
                    ~WithdrawEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>提现金额</p>
                     * @return Amount <p>提现金额</p>
                     * 
                     */
                    Amount GetAmount() const;

                    /**
                     * 设置<p>提现金额</p>
                     * @param _amount <p>提现金额</p>
                     * 
                     */
                    void SetAmount(const Amount& _amount);

                    /**
                     * 判断参数 Amount 是否已赋值
                     * @return Amount 是否已赋值
                     * 
                     */
                    bool AmountHasBeenSet() const;

                    /**
                     * 获取<p>提现方式</p><p>枚举值：</p><ul><li>card： 银行卡</li><li>wallet： 电子钱包</li></ul>
                     * @return Method <p>提现方式</p><p>枚举值：</p><ul><li>card： 银行卡</li><li>wallet： 电子钱包</li></ul>
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置<p>提现方式</p><p>枚举值：</p><ul><li>card： 银行卡</li><li>wallet： 电子钱包</li></ul>
                     * @param _method <p>提现方式</p><p>枚举值：</p><ul><li>card： 银行卡</li><li>wallet： 电子钱包</li></ul>
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取<p>提现银行卡，当提现方式是card时必填</p>
                     * @return Card <p>提现银行卡，当提现方式是card时必填</p>
                     * 
                     */
                    Card GetCard() const;

                    /**
                     * 设置<p>提现银行卡，当提现方式是card时必填</p>
                     * @param _card <p>提现银行卡，当提现方式是card时必填</p>
                     * 
                     */
                    void SetCard(const Card& _card);

                    /**
                     * 判断参数 Card 是否已赋值
                     * @return Card 是否已赋值
                     * 
                     */
                    bool CardHasBeenSet() const;

                    /**
                     * 获取<p>提现数字钱包，当提现方式是wallet时必填</p>
                     * @return Wallet <p>提现数字钱包，当提现方式是wallet时必填</p>
                     * 
                     */
                    Wallet GetWallet() const;

                    /**
                     * 设置<p>提现数字钱包，当提现方式是wallet时必填</p>
                     * @param _wallet <p>提现数字钱包，当提现方式是wallet时必填</p>
                     * 
                     */
                    void SetWallet(const Wallet& _wallet);

                    /**
                     * 判断参数 Wallet 是否已赋值
                     * @return Wallet 是否已赋值
                     * 
                     */
                    bool WalletHasBeenSet() const;

                    /**
                     * 获取<p>提现结果</p>
                     * @return Result <p>提现结果</p>
                     * 
                     */
                    Result GetResult() const;

                    /**
                     * 设置<p>提现结果</p>
                     * @param _result <p>提现结果</p>
                     * 
                     */
                    void SetResult(const Result& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取<p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * @return Cust <p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * 
                     */
                    std::vector<Cust> GetCust() const;

                    /**
                     * 设置<p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * @param _cust <p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * 
                     */
                    void SetCust(const std::vector<Cust>& _cust);

                    /**
                     * 判断参数 Cust 是否已赋值
                     * @return Cust 是否已赋值
                     * 
                     */
                    bool CustHasBeenSet() const;

                private:

                    /**
                     * <p>提现金额</p>
                     */
                    Amount m_amount;
                    bool m_amountHasBeenSet;

                    /**
                     * <p>提现方式</p><p>枚举值：</p><ul><li>card： 银行卡</li><li>wallet： 电子钱包</li></ul>
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * <p>提现银行卡，当提现方式是card时必填</p>
                     */
                    Card m_card;
                    bool m_cardHasBeenSet;

                    /**
                     * <p>提现数字钱包，当提现方式是wallet时必填</p>
                     */
                    Wallet m_wallet;
                    bool m_walletHasBeenSet;

                    /**
                     * <p>提现结果</p>
                     */
                    Result m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * <p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     */
                    std::vector<Cust> m_cust;
                    bool m_custHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_WITHDRAWEVENT_H_
