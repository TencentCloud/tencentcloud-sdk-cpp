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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_PAYMENTORDERRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_PAYMENTORDERRESULT_H_

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
                * 付款订单结果
                */
                class PaymentOrderResult : public AbstractModel
                {
                public:
                    PaymentOrderResult();
                    ~PaymentOrderResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取税前金额
                     * @return AmountBeforeTax 税前金额
                     */
                    std::string GetAmountBeforeTax() const;

                    /**
                     * 设置税前金额
                     * @param AmountBeforeTax 税前金额
                     */
                    void SetAmountBeforeTax(const std::string& _amountBeforeTax);

                    /**
                     * 判断参数 AmountBeforeTax 是否已赋值
                     * @return AmountBeforeTax 是否已赋值
                     */
                    bool AmountBeforeTaxHasBeenSet() const;

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

                    /**
                     * 获取税金
                     * @return Tax 税金
                     */
                    std::string GetTax() const;

                    /**
                     * 设置税金
                     * @param Tax 税金
                     */
                    void SetTax(const std::string& _tax);

                    /**
                     * 判断参数 Tax 是否已赋值
                     * @return Tax 是否已赋值
                     */
                    bool TaxHasBeenSet() const;

                    /**
                     * 获取外部订单ID
                     * @return OutOrderId 外部订单ID
                     */
                    std::string GetOutOrderId() const;

                    /**
                     * 设置外部订单ID
                     * @param OutOrderId 外部订单ID
                     */
                    void SetOutOrderId(const std::string& _outOrderId);

                    /**
                     * 判断参数 OutOrderId 是否已赋值
                     * @return OutOrderId 是否已赋值
                     */
                    bool OutOrderIdHasBeenSet() const;

                    /**
                     * 获取订单ID
                     * @return OrderId 订单ID
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单ID
                     * @param OrderId 订单ID
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取发起时间
                     * @return InitiateTime 发起时间
                     */
                    std::string GetInitiateTime() const;

                    /**
                     * 设置发起时间
                     * @param InitiateTime 发起时间
                     */
                    void SetInitiateTime(const std::string& _initiateTime);

                    /**
                     * 判断参数 InitiateTime 是否已赋值
                     * @return InitiateTime 是否已赋值
                     */
                    bool InitiateTimeHasBeenSet() const;

                    /**
                     * 获取完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FinishTime 完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FinishTime 完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取状态
ACCEPTED:已受理
ACCOUNTED:已记账
PAYING:付款中
PAYED:完成付款渠道调用
SUCCEED:已成功
FAILED:已失败
                     * @return Status 状态
ACCEPTED:已受理
ACCOUNTED:已记账
PAYING:付款中
PAYED:完成付款渠道调用
SUCCEED:已成功
FAILED:已失败
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
ACCEPTED:已受理
ACCOUNTED:已记账
PAYING:付款中
PAYED:完成付款渠道调用
SUCCEED:已成功
FAILED:已失败
                     * @param Status 状态
ACCEPTED:已受理
ACCOUNTED:已记账
PAYING:付款中
PAYED:完成付款渠道调用
SUCCEED:已成功
FAILED:已失败
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取状态描述
                     * @return StatusDesc 状态描述
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置状态描述
                     * @param StatusDesc 状态描述
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取提现备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 提现备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置提现备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Remark 提现备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 收入类型
LABOR:劳务所得
OCCASION:偶然所得
                     */
                    std::string m_incomeType;
                    bool m_incomeTypeHasBeenSet;

                    /**
                     * 税前金额
                     */
                    std::string m_amountBeforeTax;
                    bool m_amountBeforeTaxHasBeenSet;

                    /**
                     * 税后金额
                     */
                    std::string m_amountAfterTax;
                    bool m_amountAfterTaxHasBeenSet;

                    /**
                     * 税金
                     */
                    std::string m_tax;
                    bool m_taxHasBeenSet;

                    /**
                     * 外部订单ID
                     */
                    std::string m_outOrderId;
                    bool m_outOrderIdHasBeenSet;

                    /**
                     * 订单ID
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 发起时间
                     */
                    std::string m_initiateTime;
                    bool m_initiateTimeHasBeenSet;

                    /**
                     * 完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * 状态
ACCEPTED:已受理
ACCOUNTED:已记账
PAYING:付款中
PAYED:完成付款渠道调用
SUCCEED:已成功
FAILED:已失败
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 状态描述
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * 提现备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_PAYMENTORDERRESULT_H_
