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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_CHARGEBACKEVENT_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_CHARGEBACKEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/Amount.h>
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
                * 拒付事件详情
                */
                class ChargeBackEvent : public AbstractModel
                {
                public:
                    ChargeBackEvent();
                    ~ChargeBackEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>交易ID</p>
                     * @return TransactionId <p>交易ID</p>
                     * 
                     */
                    std::string GetTransactionId() const;

                    /**
                     * 设置<p>交易ID</p>
                     * @param _transactionId <p>交易ID</p>
                     * 
                     */
                    void SetTransactionId(const std::string& _transactionId);

                    /**
                     * 判断参数 TransactionId 是否已赋值
                     * @return TransactionId 是否已赋值
                     * 
                     */
                    bool TransactionIdHasBeenSet() const;

                    /**
                     * 获取<p>订单 ID，当一笔交易关联多个订单（合并支付）时请输入所有订单ID</p>
                     * @return OrderId <p>订单 ID，当一笔交易关联多个订单（合并支付）时请输入所有订单ID</p>
                     * 
                     */
                    std::vector<std::string> GetOrderId() const;

                    /**
                     * 设置<p>订单 ID，当一笔交易关联多个订单（合并支付）时请输入所有订单ID</p>
                     * @param _orderId <p>订单 ID，当一笔交易关联多个订单（合并支付）时请输入所有订单ID</p>
                     * 
                     */
                    void SetOrderId(const std::vector<std::string>& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取<p>拒付理由码，参考各卡组织定义的拒付码，例如：10.1、13.1、 4870、4871等</p>
                     * @return ChargeBackCode <p>拒付理由码，参考各卡组织定义的拒付码，例如：10.1、13.1、 4870、4871等</p>
                     * 
                     */
                    std::string GetChargeBackCode() const;

                    /**
                     * 设置<p>拒付理由码，参考各卡组织定义的拒付码，例如：10.1、13.1、 4870、4871等</p>
                     * @param _chargeBackCode <p>拒付理由码，参考各卡组织定义的拒付码，例如：10.1、13.1、 4870、4871等</p>
                     * 
                     */
                    void SetChargeBackCode(const std::string& _chargeBackCode);

                    /**
                     * 判断参数 ChargeBackCode 是否已赋值
                     * @return ChargeBackCode 是否已赋值
                     * 
                     */
                    bool ChargeBackCodeHasBeenSet() const;

                    /**
                     * 获取<p>拒付原因，参考各卡组织定义的拒付原因，例如：未收到商品、欺诈等</p>
                     * @return ChargeBackReason <p>拒付原因，参考各卡组织定义的拒付原因，例如：未收到商品、欺诈等</p>
                     * 
                     */
                    std::string GetChargeBackReason() const;

                    /**
                     * 设置<p>拒付原因，参考各卡组织定义的拒付原因，例如：未收到商品、欺诈等</p>
                     * @param _chargeBackReason <p>拒付原因，参考各卡组织定义的拒付原因，例如：未收到商品、欺诈等</p>
                     * 
                     */
                    void SetChargeBackReason(const std::string& _chargeBackReason);

                    /**
                     * 判断参数 ChargeBackReason 是否已赋值
                     * @return ChargeBackReason 是否已赋值
                     * 
                     */
                    bool ChargeBackReasonHasBeenSet() const;

                    /**
                     * 获取<p>拒付申诉阶段</p><p>枚举值：</p><ul><li>need_response： 需要商家回应</li><li>information_supplied： 商家已提供信息</li><li>chargeback_reversed： 拒付已撤销</li><li>chargeback_sustained： 拒付已成立</li></ul>
                     * @return ChargeBackProcess <p>拒付申诉阶段</p><p>枚举值：</p><ul><li>need_response： 需要商家回应</li><li>information_supplied： 商家已提供信息</li><li>chargeback_reversed： 拒付已撤销</li><li>chargeback_sustained： 拒付已成立</li></ul>
                     * 
                     */
                    std::string GetChargeBackProcess() const;

                    /**
                     * 设置<p>拒付申诉阶段</p><p>枚举值：</p><ul><li>need_response： 需要商家回应</li><li>information_supplied： 商家已提供信息</li><li>chargeback_reversed： 拒付已撤销</li><li>chargeback_sustained： 拒付已成立</li></ul>
                     * @param _chargeBackProcess <p>拒付申诉阶段</p><p>枚举值：</p><ul><li>need_response： 需要商家回应</li><li>information_supplied： 商家已提供信息</li><li>chargeback_reversed： 拒付已撤销</li><li>chargeback_sustained： 拒付已成立</li></ul>
                     * 
                     */
                    void SetChargeBackProcess(const std::string& _chargeBackProcess);

                    /**
                     * 判断参数 ChargeBackProcess 是否已赋值
                     * @return ChargeBackProcess 是否已赋值
                     * 
                     */
                    bool ChargeBackProcessHasBeenSet() const;

                    /**
                     * 获取<p>拒付金额</p>
                     * @return ChargeBackAmount <p>拒付金额</p>
                     * 
                     */
                    Amount GetChargeBackAmount() const;

                    /**
                     * 设置<p>拒付金额</p>
                     * @param _chargeBackAmount <p>拒付金额</p>
                     * 
                     */
                    void SetChargeBackAmount(const Amount& _chargeBackAmount);

                    /**
                     * 判断参数 ChargeBackAmount 是否已赋值
                     * @return ChargeBackAmount 是否已赋值
                     * 
                     */
                    bool ChargeBackAmountHasBeenSet() const;

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
                     * <p>交易ID</p>
                     */
                    std::string m_transactionId;
                    bool m_transactionIdHasBeenSet;

                    /**
                     * <p>订单 ID，当一笔交易关联多个订单（合并支付）时请输入所有订单ID</p>
                     */
                    std::vector<std::string> m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * <p>拒付理由码，参考各卡组织定义的拒付码，例如：10.1、13.1、 4870、4871等</p>
                     */
                    std::string m_chargeBackCode;
                    bool m_chargeBackCodeHasBeenSet;

                    /**
                     * <p>拒付原因，参考各卡组织定义的拒付原因，例如：未收到商品、欺诈等</p>
                     */
                    std::string m_chargeBackReason;
                    bool m_chargeBackReasonHasBeenSet;

                    /**
                     * <p>拒付申诉阶段</p><p>枚举值：</p><ul><li>need_response： 需要商家回应</li><li>information_supplied： 商家已提供信息</li><li>chargeback_reversed： 拒付已撤销</li><li>chargeback_sustained： 拒付已成立</li></ul>
                     */
                    std::string m_chargeBackProcess;
                    bool m_chargeBackProcessHasBeenSet;

                    /**
                     * <p>拒付金额</p>
                     */
                    Amount m_chargeBackAmount;
                    bool m_chargeBackAmountHasBeenSet;

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

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_CHARGEBACKEVENT_H_
