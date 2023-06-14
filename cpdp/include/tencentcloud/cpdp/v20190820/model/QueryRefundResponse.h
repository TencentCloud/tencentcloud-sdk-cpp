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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYREFUNDRESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYREFUNDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/OldSubRefund.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * QueryRefund返回参数结构体
                */
                class QueryRefundResponse : public AbstractModel
                {
                public:
                    QueryRefundResponse();
                    ~QueryRefundResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取退款状态码，退款提交成功后返回  1：退款中；  2：退款成功；  3：退款失败。
                     * @return State 退款状态码，退款提交成功后返回  1：退款中；  2：退款成功；  3：退款失败。
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取支付机构订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelExternalOrderId 支付机构订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelExternalOrderId() const;

                    /**
                     * 判断参数 ChannelExternalOrderId 是否已赋值
                     * @return ChannelExternalOrderId 是否已赋值
                     * 
                     */
                    bool ChannelExternalOrderIdHasBeenSet() const;

                    /**
                     * 获取支付机构退款单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelExternalRefundId 支付机构退款单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelExternalRefundId() const;

                    /**
                     * 判断参数 ChannelExternalRefundId 是否已赋值
                     * @return ChannelExternalRefundId 是否已赋值
                     * 
                     */
                    bool ChannelExternalRefundIdHasBeenSet() const;

                    /**
                     * 获取渠道订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelOrderId 渠道订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelOrderId() const;

                    /**
                     * 判断参数 ChannelOrderId 是否已赋值
                     * @return ChannelOrderId 是否已赋值
                     * 
                     */
                    bool ChannelOrderIdHasBeenSet() const;

                    /**
                     * 获取退款总金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalRefundAmt 退款总金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalRefundAmt() const;

                    /**
                     * 判断参数 TotalRefundAmt 是否已赋值
                     * @return TotalRefundAmt 是否已赋值
                     * 
                     */
                    bool TotalRefundAmtHasBeenSet() const;

                    /**
                     * 获取货币类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurrencyType 货币类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCurrencyType() const;

                    /**
                     * 判断参数 CurrencyType 是否已赋值
                     * @return CurrencyType 是否已赋值
                     * 
                     */
                    bool CurrencyTypeHasBeenSet() const;

                    /**
                     * 获取外部订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutTradeNo 外部订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutTradeNo() const;

                    /**
                     * 判断参数 OutTradeNo 是否已赋值
                     * @return OutTradeNo 是否已赋值
                     * 
                     */
                    bool OutTradeNoHasBeenSet() const;

                    /**
                     * 获取退款订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RefundId 退款订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRefundId() const;

                    /**
                     * 判断参数 RefundId 是否已赋值
                     * @return RefundId 是否已赋值
                     * 
                     */
                    bool RefundIdHasBeenSet() const;

                    /**
                     * 获取聚鑫分配的支付主MidasAppId
                     * @return MidasAppId 聚鑫分配的支付主MidasAppId
                     * 
                     */
                    std::string GetMidasAppId() const;

                    /**
                     * 判断参数 MidasAppId 是否已赋值
                     * @return MidasAppId 是否已赋值
                     * 
                     */
                    bool MidasAppIdHasBeenSet() const;

                    /**
                     * 获取指定退款订单号。与RefundId的区别是，UsedRefundId不会再做修饰，而RefundId则可能在查询退款处理时做了如添加前缀等的修饰
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsedRefundId 指定退款订单号。与RefundId的区别是，UsedRefundId不会再做修饰，而RefundId则可能在查询退款处理时做了如添加前缀等的修饰
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUsedRefundId() const;

                    /**
                     * 判断参数 UsedRefundId 是否已赋值
                     * @return UsedRefundId 是否已赋值
                     * 
                     */
                    bool UsedRefundIdHasBeenSet() const;

                    /**
                     * 获取子单退款信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubRefundList 子单退款信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<OldSubRefund> GetSubRefundList() const;

                    /**
                     * 判断参数 SubRefundList 是否已赋值
                     * @return SubRefundList 是否已赋值
                     * 
                     */
                    bool SubRefundListHasBeenSet() const;

                private:

                    /**
                     * 退款状态码，退款提交成功后返回  1：退款中；  2：退款成功；  3：退款失败。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 支付机构订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelExternalOrderId;
                    bool m_channelExternalOrderIdHasBeenSet;

                    /**
                     * 支付机构退款单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelExternalRefundId;
                    bool m_channelExternalRefundIdHasBeenSet;

                    /**
                     * 渠道订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelOrderId;
                    bool m_channelOrderIdHasBeenSet;

                    /**
                     * 退款总金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalRefundAmt;
                    bool m_totalRefundAmtHasBeenSet;

                    /**
                     * 货币类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_currencyType;
                    bool m_currencyTypeHasBeenSet;

                    /**
                     * 外部订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outTradeNo;
                    bool m_outTradeNoHasBeenSet;

                    /**
                     * 退款订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_refundId;
                    bool m_refundIdHasBeenSet;

                    /**
                     * 聚鑫分配的支付主MidasAppId
                     */
                    std::string m_midasAppId;
                    bool m_midasAppIdHasBeenSet;

                    /**
                     * 指定退款订单号。与RefundId的区别是，UsedRefundId不会再做修饰，而RefundId则可能在查询退款处理时做了如添加前缀等的修饰
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_usedRefundId;
                    bool m_usedRefundIdHasBeenSet;

                    /**
                     * 子单退款信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OldSubRefund> m_subRefundList;
                    bool m_subRefundListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYREFUNDRESPONSE_H_
