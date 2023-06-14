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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYCLOUDREFUNDORDERRESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYCLOUDREFUNDORDERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/CloudSubRefundItem.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * QueryCloudRefundOrder返回参数结构体
                */
                class QueryCloudRefundOrderResponse : public AbstractModel
                {
                public:
                    QueryCloudRefundOrderResponse();
                    ~QueryCloudRefundOrderResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取该笔退款订单对应的UnifiedOrder下单时传入的OutTradeNo
                     * @return OutTradeNo 该笔退款订单对应的UnifiedOrder下单时传入的OutTradeNo
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
                     * 获取该笔退款订单对应的支付成功后支付机构返回的支付订单号
                     * @return ChannelExternalOrderId 该笔退款订单对应的支付成功后支付机构返回的支付订单号
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
                     * 获取该笔退款订单退款后支付机构返回的退款单号
                     * @return ChannelExternalRefundId 该笔退款订单退款后支付机构返回的退款单号
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
                     * 获取内部请求微信支付、银行等支付机构的订单号
                     * @return ChannelOrderId 内部请求微信支付、银行等支付机构的订单号
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
                     * 获取请求退款时传的退款ID后查询退款时传的RefundId
                     * @return RefundId 请求退款时传的退款ID后查询退款时传的RefundId
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
                     * 获取被使用的RefundId，业务可忽略该字段
                     * @return UsedRefundId 被使用的RefundId，业务可忽略该字段
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
                     * 获取退款总金额
                     * @return TotalRefundAmt 退款总金额
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
                     * 获取ISO货币代码
                     * @return CurrencyType ISO货币代码
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
                     * 获取退款状态码，退款提交成功后返回
1:退款中
2:退款成功
3:退款失败
                     * @return State 退款状态码，退款提交成功后返回
1:退款中
2:退款成功
3:退款失败
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
                     * 获取子单退款信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubRefundList 子单退款信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CloudSubRefundItem> GetSubRefundList() const;

                    /**
                     * 判断参数 SubRefundList 是否已赋值
                     * @return SubRefundList 是否已赋值
                     * 
                     */
                    bool SubRefundListHasBeenSet() const;

                    /**
                     * 获取透传字段，退款成功回调透传给应用，用于开发者透传自定义内容
                     * @return Metadata 透传字段，退款成功回调透传给应用，用于开发者透传自定义内容
                     * 
                     */
                    std::string GetMetadata() const;

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                    /**
                     * 获取米大师分配的支付主MidasAppId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId 米大师分配的支付主MidasAppId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取该笔退款订单退款后内部返回的退款单号
                     * @return ChannelRefundId 该笔退款订单退款后内部返回的退款单号
                     * 
                     */
                    std::string GetChannelRefundId() const;

                    /**
                     * 判断参数 ChannelRefundId 是否已赋值
                     * @return ChannelRefundId 是否已赋值
                     * 
                     */
                    bool ChannelRefundIdHasBeenSet() const;

                private:

                    /**
                     * 该笔退款订单对应的UnifiedOrder下单时传入的OutTradeNo
                     */
                    std::string m_outTradeNo;
                    bool m_outTradeNoHasBeenSet;

                    /**
                     * 该笔退款订单对应的支付成功后支付机构返回的支付订单号
                     */
                    std::string m_channelExternalOrderId;
                    bool m_channelExternalOrderIdHasBeenSet;

                    /**
                     * 该笔退款订单退款后支付机构返回的退款单号
                     */
                    std::string m_channelExternalRefundId;
                    bool m_channelExternalRefundIdHasBeenSet;

                    /**
                     * 内部请求微信支付、银行等支付机构的订单号
                     */
                    std::string m_channelOrderId;
                    bool m_channelOrderIdHasBeenSet;

                    /**
                     * 请求退款时传的退款ID后查询退款时传的RefundId
                     */
                    std::string m_refundId;
                    bool m_refundIdHasBeenSet;

                    /**
                     * 被使用的RefundId，业务可忽略该字段
                     */
                    std::string m_usedRefundId;
                    bool m_usedRefundIdHasBeenSet;

                    /**
                     * 退款总金额
                     */
                    int64_t m_totalRefundAmt;
                    bool m_totalRefundAmtHasBeenSet;

                    /**
                     * ISO货币代码
                     */
                    std::string m_currencyType;
                    bool m_currencyTypeHasBeenSet;

                    /**
                     * 退款状态码，退款提交成功后返回
1:退款中
2:退款成功
3:退款失败
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 子单退款信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CloudSubRefundItem> m_subRefundList;
                    bool m_subRefundListHasBeenSet;

                    /**
                     * 透传字段，退款成功回调透传给应用，用于开发者透传自定义内容
                     */
                    std::string m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * 米大师分配的支付主MidasAppId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 该笔退款订单退款后内部返回的退款单号
                     */
                    std::string m_channelRefundId;
                    bool m_channelRefundIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYCLOUDREFUNDORDERRESPONSE_H_
