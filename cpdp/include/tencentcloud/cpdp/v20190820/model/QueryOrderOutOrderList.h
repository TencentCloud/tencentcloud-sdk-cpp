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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYORDEROUTORDERLIST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYORDEROUTORDERLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/QueryOrderOutSubOrderList.h>
#include <tencentcloud/cpdp/v20190820/model/OldChannelExternalUserInfo.h>
#include <tencentcloud/cpdp/v20190820/model/OldAttachmentInfo.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 查询订单接口的出参，订单列表
                */
                class QueryOrderOutOrderList : public AbstractModel
                {
                public:
                    QueryOrderOutOrderList();
                    ~QueryOrderOutOrderList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取聚鑫分配的支付主MidasAppId
                     * @return MidasAppId 聚鑫分配的支付主MidasAppId
                     * 
                     */
                    std::string GetMidasAppId() const;

                    /**
                     * 设置聚鑫分配的支付主MidasAppId
                     * @param _midasAppId 聚鑫分配的支付主MidasAppId
                     * 
                     */
                    void SetMidasAppId(const std::string& _midasAppId);

                    /**
                     * 判断参数 MidasAppId 是否已赋值
                     * @return MidasAppId 是否已赋值
                     * 
                     */
                    bool MidasAppIdHasBeenSet() const;

                    /**
                     * 获取支付金额，单位：分
                     * @return Amt 支付金额，单位：分
                     * 
                     */
                    int64_t GetAmt() const;

                    /**
                     * 设置支付金额，单位：分
                     * @param _amt 支付金额，单位：分
                     * 
                     */
                    void SetAmt(const int64_t& _amt);

                    /**
                     * 判断参数 Amt 是否已赋值
                     * @return Amt 是否已赋值
                     * 
                     */
                    bool AmtHasBeenSet() const;

                    /**
                     * 获取用户Id
                     * @return UserId 用户Id
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户Id
                     * @param _userId 用户Id
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取现金支付金额
                     * @return CashAmt 现金支付金额
                     * 
                     */
                    std::string GetCashAmt() const;

                    /**
                     * 设置现金支付金额
                     * @param _cashAmt 现金支付金额
                     * 
                     */
                    void SetCashAmt(const std::string& _cashAmt);

                    /**
                     * 判断参数 CashAmt 是否已赋值
                     * @return CashAmt 是否已赋值
                     * 
                     */
                    bool CashAmtHasBeenSet() const;

                    /**
                     * 获取发货标识，由业务在调用聚鑫下单 接口的时候下发
                     * @return Metadata 发货标识，由业务在调用聚鑫下单 接口的时候下发
                     * 
                     */
                    std::string GetMetadata() const;

                    /**
                     * 设置发货标识，由业务在调用聚鑫下单 接口的时候下发
                     * @param _metadata 发货标识，由业务在调用聚鑫下单 接口的时候下发
                     * 
                     */
                    void SetMetadata(const std::string& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                    /**
                     * 获取支付时间unix时间戳
                     * @return PayTime 支付时间unix时间戳
                     * 
                     */
                    std::string GetPayTime() const;

                    /**
                     * 设置支付时间unix时间戳
                     * @param _payTime 支付时间unix时间戳
                     * 
                     */
                    void SetPayTime(const std::string& _payTime);

                    /**
                     * 判断参数 PayTime 是否已赋值
                     * @return PayTime 是否已赋值
                     * 
                     */
                    bool PayTimeHasBeenSet() const;

                    /**
                     * 获取抵扣券金额
                     * @return CouponAmt 抵扣券金额
                     * 
                     */
                    std::string GetCouponAmt() const;

                    /**
                     * 设置抵扣券金额
                     * @param _couponAmt 抵扣券金额
                     * 
                     */
                    void SetCouponAmt(const std::string& _couponAmt);

                    /**
                     * 判断参数 CouponAmt 是否已赋值
                     * @return CouponAmt 是否已赋值
                     * 
                     */
                    bool CouponAmtHasBeenSet() const;

                    /**
                     * 获取下单时间unix时间戳
                     * @return OrderTime 下单时间unix时间戳
                     * 
                     */
                    std::string GetOrderTime() const;

                    /**
                     * 设置下单时间unix时间戳
                     * @param _orderTime 下单时间unix时间戳
                     * 
                     */
                    void SetOrderTime(const std::string& _orderTime);

                    /**
                     * 判断参数 OrderTime 是否已赋值
                     * @return OrderTime 是否已赋值
                     * 
                     */
                    bool OrderTimeHasBeenSet() const;

                    /**
                     * 获取物品id
                     * @return ProductId 物品id
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置物品id
                     * @param _productId 物品id
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取高速场景信息
                     * @return SceneInfo 高速场景信息
                     * 
                     */
                    std::string GetSceneInfo() const;

                    /**
                     * 设置高速场景信息
                     * @param _sceneInfo 高速场景信息
                     * 
                     */
                    void SetSceneInfo(const std::string& _sceneInfo);

                    /**
                     * 判断参数 SceneInfo 是否已赋值
                     * @return SceneInfo 是否已赋值
                     * 
                     */
                    bool SceneInfoHasBeenSet() const;

                    /**
                     * 获取当前订单的订单状态 
0：初始状态，获取聚鑫交易订单成功；  
1：拉起聚鑫支付页面成功，用户未 支付；
2：用户支付成功，正在发货；
3：用户支付成功，发货失败；
4：用户支付成功，发货成功；
5：聚鑫支付页面正在失效中；
6：聚鑫支付页面已经失效；
                     * @return OrderState 当前订单的订单状态 
0：初始状态，获取聚鑫交易订单成功；  
1：拉起聚鑫支付页面成功，用户未 支付；
2：用户支付成功，正在发货；
3：用户支付成功，发货失败；
4：用户支付成功，发货成功；
5：聚鑫支付页面正在失效中；
6：聚鑫支付页面已经失效；
                     * 
                     */
                    std::string GetOrderState() const;

                    /**
                     * 设置当前订单的订单状态 
0：初始状态，获取聚鑫交易订单成功；  
1：拉起聚鑫支付页面成功，用户未 支付；
2：用户支付成功，正在发货；
3：用户支付成功，发货失败；
4：用户支付成功，发货成功；
5：聚鑫支付页面正在失效中；
6：聚鑫支付页面已经失效；
                     * @param _orderState 当前订单的订单状态 
0：初始状态，获取聚鑫交易订单成功；  
1：拉起聚鑫支付页面成功，用户未 支付；
2：用户支付成功，正在发货；
3：用户支付成功，发货失败；
4：用户支付成功，发货成功；
5：聚鑫支付页面正在失效中；
6：聚鑫支付页面已经失效；
                     * 
                     */
                    void SetOrderState(const std::string& _orderState);

                    /**
                     * 判断参数 OrderState 是否已赋值
                     * @return OrderState 是否已赋值
                     * 
                     */
                    bool OrderStateHasBeenSet() const;

                    /**
                     * 获取支付渠道：wechat：微信支付;
qqwallet：QQ钱包;
bank：网银
                     * @return Channel 支付渠道：wechat：微信支付;
qqwallet：QQ钱包;
bank：网银
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置支付渠道：wechat：微信支付;
qqwallet：QQ钱包;
bank：网银
                     * @param _channel 支付渠道：wechat：微信支付;
qqwallet：QQ钱包;
bank：网银
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取是否曾退款
                     * @return RefundFlag 是否曾退款
                     * 
                     */
                    std::string GetRefundFlag() const;

                    /**
                     * 设置是否曾退款
                     * @param _refundFlag 是否曾退款
                     * 
                     */
                    void SetRefundFlag(const std::string& _refundFlag);

                    /**
                     * 判断参数 RefundFlag 是否已赋值
                     * @return RefundFlag 是否已赋值
                     * 
                     */
                    bool RefundFlagHasBeenSet() const;

                    /**
                     * 获取务支付订单号
                     * @return OutTradeNo 务支付订单号
                     * 
                     */
                    std::string GetOutTradeNo() const;

                    /**
                     * 设置务支付订单号
                     * @param _outTradeNo 务支付订单号
                     * 
                     */
                    void SetOutTradeNo(const std::string& _outTradeNo);

                    /**
                     * 判断参数 OutTradeNo 是否已赋值
                     * @return OutTradeNo 是否已赋值
                     * 
                     */
                    bool OutTradeNoHasBeenSet() const;

                    /**
                     * 获取商品名称
                     * @return ProductName 商品名称
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置商品名称
                     * @param _productName 商品名称
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取支付回调时间，unix时间戳
                     * @return CallBackTime 支付回调时间，unix时间戳
                     * 
                     */
                    std::string GetCallBackTime() const;

                    /**
                     * 设置支付回调时间，unix时间戳
                     * @param _callBackTime 支付回调时间，unix时间戳
                     * 
                     */
                    void SetCallBackTime(const std::string& _callBackTime);

                    /**
                     * 判断参数 CallBackTime 是否已赋值
                     * @return CallBackTime 是否已赋值
                     * 
                     */
                    bool CallBackTimeHasBeenSet() const;

                    /**
                     * 获取ISO 货币代码，CNY
                     * @return CurrencyType ISO 货币代码，CNY
                     * 
                     */
                    std::string GetCurrencyType() const;

                    /**
                     * 设置ISO 货币代码，CNY
                     * @param _currencyType ISO 货币代码，CNY
                     * 
                     */
                    void SetCurrencyType(const std::string& _currencyType);

                    /**
                     * 判断参数 CurrencyType 是否已赋值
                     * @return CurrencyType 是否已赋值
                     * 
                     */
                    bool CurrencyTypeHasBeenSet() const;

                    /**
                     * 获取微校场景账户Id
                     * @return AcctSubAppId 微校场景账户Id
                     * 
                     */
                    std::string GetAcctSubAppId() const;

                    /**
                     * 设置微校场景账户Id
                     * @param _acctSubAppId 微校场景账户Id
                     * 
                     */
                    void SetAcctSubAppId(const std::string& _acctSubAppId);

                    /**
                     * 判断参数 AcctSubAppId 是否已赋值
                     * @return AcctSubAppId 是否已赋值
                     * 
                     */
                    bool AcctSubAppIdHasBeenSet() const;

                    /**
                     * 获取调用下单接口获取的聚鑫交易订单
                     * @return TransactionId 调用下单接口获取的聚鑫交易订单
                     * 
                     */
                    std::string GetTransactionId() const;

                    /**
                     * 设置调用下单接口获取的聚鑫交易订单
                     * @param _transactionId 调用下单接口获取的聚鑫交易订单
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
                     * 获取聚鑫内部渠道订单号
                     * @return ChannelOrderId 聚鑫内部渠道订单号
                     * 
                     */
                    std::string GetChannelOrderId() const;

                    /**
                     * 设置聚鑫内部渠道订单号
                     * @param _channelOrderId 聚鑫内部渠道订单号
                     * 
                     */
                    void SetChannelOrderId(const std::string& _channelOrderId);

                    /**
                     * 判断参数 ChannelOrderId 是否已赋值
                     * @return ChannelOrderId 是否已赋值
                     * 
                     */
                    bool ChannelOrderIdHasBeenSet() const;

                    /**
                     * 获取调用下单接口传进来的 SubOutTradeNoList
                     * @return SubOrderList 调用下单接口传进来的 SubOutTradeNoList
                     * 
                     */
                    std::vector<QueryOrderOutSubOrderList> GetSubOrderList() const;

                    /**
                     * 设置调用下单接口传进来的 SubOutTradeNoList
                     * @param _subOrderList 调用下单接口传进来的 SubOutTradeNoList
                     * 
                     */
                    void SetSubOrderList(const std::vector<QueryOrderOutSubOrderList>& _subOrderList);

                    /**
                     * 判断参数 SubOrderList 是否已赋值
                     * @return SubOrderList 是否已赋值
                     * 
                     */
                    bool SubOrderListHasBeenSet() const;

                    /**
                     * 获取支付机构订单号
                     * @return ChannelExternalOrderId 支付机构订单号
                     * 
                     */
                    std::string GetChannelExternalOrderId() const;

                    /**
                     * 设置支付机构订单号
                     * @param _channelExternalOrderId 支付机构订单号
                     * 
                     */
                    void SetChannelExternalOrderId(const std::string& _channelExternalOrderId);

                    /**
                     * 判断参数 ChannelExternalOrderId 是否已赋值
                     * @return ChannelExternalOrderId 是否已赋值
                     * 
                     */
                    bool ChannelExternalOrderIdHasBeenSet() const;

                    /**
                     * 获取主单核销状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SettleCheck 主单核销状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSettleCheck() const;

                    /**
                     * 设置主单核销状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _settleCheck 主单核销状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSettleCheck(const int64_t& _settleCheck);

                    /**
                     * 判断参数 SettleCheck 是否已赋值
                     * @return SettleCheck 是否已赋值
                     * 
                     */
                    bool SettleCheckHasBeenSet() const;

                    /**
                     * 获取渠道方用户信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelExternalUserInfoList 渠道方用户信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<OldChannelExternalUserInfo> GetChannelExternalUserInfoList() const;

                    /**
                     * 设置渠道方用户信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelExternalUserInfoList 渠道方用户信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChannelExternalUserInfoList(const std::vector<OldChannelExternalUserInfo>& _channelExternalUserInfoList);

                    /**
                     * 判断参数 ChannelExternalUserInfoList 是否已赋值
                     * @return ChannelExternalUserInfoList 是否已赋值
                     * 
                     */
                    bool ChannelExternalUserInfoListHasBeenSet() const;

                    /**
                     * 获取附加项信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttachmentInfoList 附加项信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<OldAttachmentInfo> GetAttachmentInfoList() const;

                    /**
                     * 设置附加项信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attachmentInfoList 附加项信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttachmentInfoList(const std::vector<OldAttachmentInfo>& _attachmentInfoList);

                    /**
                     * 判断参数 AttachmentInfoList 是否已赋值
                     * @return AttachmentInfoList 是否已赋值
                     * 
                     */
                    bool AttachmentInfoListHasBeenSet() const;

                private:

                    /**
                     * 聚鑫分配的支付主MidasAppId
                     */
                    std::string m_midasAppId;
                    bool m_midasAppIdHasBeenSet;

                    /**
                     * 支付金额，单位：分
                     */
                    int64_t m_amt;
                    bool m_amtHasBeenSet;

                    /**
                     * 用户Id
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 现金支付金额
                     */
                    std::string m_cashAmt;
                    bool m_cashAmtHasBeenSet;

                    /**
                     * 发货标识，由业务在调用聚鑫下单 接口的时候下发
                     */
                    std::string m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * 支付时间unix时间戳
                     */
                    std::string m_payTime;
                    bool m_payTimeHasBeenSet;

                    /**
                     * 抵扣券金额
                     */
                    std::string m_couponAmt;
                    bool m_couponAmtHasBeenSet;

                    /**
                     * 下单时间unix时间戳
                     */
                    std::string m_orderTime;
                    bool m_orderTimeHasBeenSet;

                    /**
                     * 物品id
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 高速场景信息
                     */
                    std::string m_sceneInfo;
                    bool m_sceneInfoHasBeenSet;

                    /**
                     * 当前订单的订单状态 
0：初始状态，获取聚鑫交易订单成功；  
1：拉起聚鑫支付页面成功，用户未 支付；
2：用户支付成功，正在发货；
3：用户支付成功，发货失败；
4：用户支付成功，发货成功；
5：聚鑫支付页面正在失效中；
6：聚鑫支付页面已经失效；
                     */
                    std::string m_orderState;
                    bool m_orderStateHasBeenSet;

                    /**
                     * 支付渠道：wechat：微信支付;
qqwallet：QQ钱包;
bank：网银
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * 是否曾退款
                     */
                    std::string m_refundFlag;
                    bool m_refundFlagHasBeenSet;

                    /**
                     * 务支付订单号
                     */
                    std::string m_outTradeNo;
                    bool m_outTradeNoHasBeenSet;

                    /**
                     * 商品名称
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 支付回调时间，unix时间戳
                     */
                    std::string m_callBackTime;
                    bool m_callBackTimeHasBeenSet;

                    /**
                     * ISO 货币代码，CNY
                     */
                    std::string m_currencyType;
                    bool m_currencyTypeHasBeenSet;

                    /**
                     * 微校场景账户Id
                     */
                    std::string m_acctSubAppId;
                    bool m_acctSubAppIdHasBeenSet;

                    /**
                     * 调用下单接口获取的聚鑫交易订单
                     */
                    std::string m_transactionId;
                    bool m_transactionIdHasBeenSet;

                    /**
                     * 聚鑫内部渠道订单号
                     */
                    std::string m_channelOrderId;
                    bool m_channelOrderIdHasBeenSet;

                    /**
                     * 调用下单接口传进来的 SubOutTradeNoList
                     */
                    std::vector<QueryOrderOutSubOrderList> m_subOrderList;
                    bool m_subOrderListHasBeenSet;

                    /**
                     * 支付机构订单号
                     */
                    std::string m_channelExternalOrderId;
                    bool m_channelExternalOrderIdHasBeenSet;

                    /**
                     * 主单核销状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_settleCheck;
                    bool m_settleCheckHasBeenSet;

                    /**
                     * 渠道方用户信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OldChannelExternalUserInfo> m_channelExternalUserInfoList;
                    bool m_channelExternalUserInfoListHasBeenSet;

                    /**
                     * 附加项信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OldAttachmentInfo> m_attachmentInfoList;
                    bool m_attachmentInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYORDEROUTORDERLIST_H_
