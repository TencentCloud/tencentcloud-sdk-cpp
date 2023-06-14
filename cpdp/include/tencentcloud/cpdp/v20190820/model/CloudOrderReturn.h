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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDORDERRETURN_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDORDERRETURN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/CloudSubOrderReturn.h>
#include <tencentcloud/cpdp/v20190820/model/CloudSettleInfo.h>
#include <tencentcloud/cpdp/v20190820/model/CloudAttachmentInfo.h>
#include <tencentcloud/cpdp/v20190820/model/CloudChannelExternalUserInfo.h>
#include <tencentcloud/cpdp/v20190820/model/CloudExternalPromptGroup.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 返回订单信息
                */
                class CloudOrderReturn : public AbstractModel
                {
                public:
                    CloudOrderReturn();
                    ~CloudOrderReturn() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取米大师分配的支付主MidasAppId
                     * @return AppId 米大师分配的支付主MidasAppId
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置米大师分配的支付主MidasAppId
                     * @param _appId 米大师分配的支付主MidasAppId
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取开发者支付订单号
                     * @return OutTradeNo 开发者支付订单号
                     * 
                     */
                    std::string GetOutTradeNo() const;

                    /**
                     * 设置开发者支付订单号
                     * @param _outTradeNo 开发者支付订单号
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
                     * 获取调用下单接口传进来的子单列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubOrderList 调用下单接口传进来的子单列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CloudSubOrderReturn> GetSubOrderList() const;

                    /**
                     * 设置调用下单接口传进来的子单列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subOrderList 调用下单接口传进来的子单列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubOrderList(const std::vector<CloudSubOrderReturn>& _subOrderList);

                    /**
                     * 判断参数 SubOrderList 是否已赋值
                     * @return SubOrderList 是否已赋值
                     * 
                     */
                    bool SubOrderListHasBeenSet() const;

                    /**
                     * 获取调用下单接口获取的米大师交易订单号
                     * @return TransactionId 调用下单接口获取的米大师交易订单号
                     * 
                     */
                    std::string GetTransactionId() const;

                    /**
                     * 设置调用下单接口获取的米大师交易订单号
                     * @param _transactionId 调用下单接口获取的米大师交易订单号
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
                     * 获取支付渠道
wechat:微信支付
                     * @return Channel 支付渠道
wechat:微信支付
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置支付渠道
wechat:微信支付
                     * @param _channel 支付渠道
wechat:微信支付
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
                     * 获取物品Id
                     * @return ProductId 物品Id
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置物品Id
                     * @param _productId 物品Id
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
                     * 获取发货标识，由开发者在调用下单接口的时候传入
                     * @return Metadata 发货标识，由开发者在调用下单接口的时候传入
                     * 
                     */
                    std::string GetMetadata() const;

                    /**
                     * 设置发货标识，由开发者在调用下单接口的时候传入
                     * @param _metadata 发货标识，由开发者在调用下单接口的时候传入
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
                     * 获取ISO货币代码
                     * @return CurrencyType ISO货币代码
                     * 
                     */
                    std::string GetCurrencyType() const;

                    /**
                     * 设置ISO货币代码
                     * @param _currencyType ISO货币代码
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
                     * 获取订单状态
0:初始状态，获取米大师交易订单成功
1:拉起米大师支付页面成功，用户未支付
2:用户支付成功，正在发货
3:用户支付成功，发货失败
4:用户支付成功，发货成功
5:关单中
6:已关单
                     * @return OrderState 订单状态
0:初始状态，获取米大师交易订单成功
1:拉起米大师支付页面成功，用户未支付
2:用户支付成功，正在发货
3:用户支付成功，发货失败
4:用户支付成功，发货成功
5:关单中
6:已关单
                     * 
                     */
                    std::string GetOrderState() const;

                    /**
                     * 设置订单状态
0:初始状态，获取米大师交易订单成功
1:拉起米大师支付页面成功，用户未支付
2:用户支付成功，正在发货
3:用户支付成功，发货失败
4:用户支付成功，发货成功
5:关单中
6:已关单
                     * @param _orderState 订单状态
0:初始状态，获取米大师交易订单成功
1:拉起米大师支付页面成功，用户未支付
2:用户支付成功，正在发货
3:用户支付成功，发货失败
4:用户支付成功，发货成功
5:关单中
6:已关单
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
                     * 获取下单时间，unix时间戳
                     * @return OrderTime 下单时间，unix时间戳
                     * 
                     */
                    std::string GetOrderTime() const;

                    /**
                     * 设置下单时间，unix时间戳
                     * @param _orderTime 下单时间，unix时间戳
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
                     * 获取支付时间，unix时间戳
                     * @return PayTime 支付时间，unix时间戳
                     * 
                     */
                    std::string GetPayTime() const;

                    /**
                     * 设置支付时间，unix时间戳
                     * @param _payTime 支付时间，unix时间戳
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
                     * 获取米大师内部渠道订单号
                     * @return ChannelOrderId 米大师内部渠道订单号
                     * 
                     */
                    std::string GetChannelOrderId() const;

                    /**
                     * 设置米大师内部渠道订单号
                     * @param _channelOrderId 米大师内部渠道订单号
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
                     * 获取用户支付金额
                     * @return CashAmt 用户支付金额
                     * 
                     */
                    std::string GetCashAmt() const;

                    /**
                     * 设置用户支付金额
                     * @param _cashAmt 用户支付金额
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
                     * 获取结算信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SettleInfo 结算信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CloudSettleInfo GetSettleInfo() const;

                    /**
                     * 设置结算信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _settleInfo 结算信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSettleInfo(const CloudSettleInfo& _settleInfo);

                    /**
                     * 判断参数 SettleInfo 是否已赋值
                     * @return SettleInfo 是否已赋值
                     * 
                     */
                    bool SettleInfoHasBeenSet() const;

                    /**
                     * 获取附加项信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttachmentInfoList 附加项信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CloudAttachmentInfo> GetAttachmentInfoList() const;

                    /**
                     * 设置附加项信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attachmentInfoList 附加项信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttachmentInfoList(const std::vector<CloudAttachmentInfo>& _attachmentInfoList);

                    /**
                     * 判断参数 AttachmentInfoList 是否已赋值
                     * @return AttachmentInfoList 是否已赋值
                     * 
                     */
                    bool AttachmentInfoListHasBeenSet() const;

                    /**
                     * 获取渠道方返回的用户信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelExternalUserInfoList 渠道方返回的用户信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CloudChannelExternalUserInfo> GetChannelExternalUserInfoList() const;

                    /**
                     * 设置渠道方返回的用户信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelExternalUserInfoList 渠道方返回的用户信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChannelExternalUserInfoList(const std::vector<CloudChannelExternalUserInfo>& _channelExternalUserInfoList);

                    /**
                     * 判断参数 ChannelExternalUserInfoList 是否已赋值
                     * @return ChannelExternalUserInfoList 是否已赋值
                     * 
                     */
                    bool ChannelExternalUserInfoListHasBeenSet() const;

                    /**
                     * 获取渠道扩展促销列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalReturnPromptGroupList 渠道扩展促销列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CloudExternalPromptGroup> GetExternalReturnPromptGroupList() const;

                    /**
                     * 设置渠道扩展促销列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _externalReturnPromptGroupList 渠道扩展促销列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExternalReturnPromptGroupList(const std::vector<CloudExternalPromptGroup>& _externalReturnPromptGroupList);

                    /**
                     * 判断参数 ExternalReturnPromptGroupList 是否已赋值
                     * @return ExternalReturnPromptGroupList 是否已赋值
                     * 
                     */
                    bool ExternalReturnPromptGroupListHasBeenSet() const;

                    /**
                     * 获取场景扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SceneInfo 场景扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSceneInfo() const;

                    /**
                     * 设置场景扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sceneInfo 场景扩展信息
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取子应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubAppId 子应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubAppId() const;

                    /**
                     * 设置子应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subAppId 子应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubAppId(const std::string& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取支付场景
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayScene 支付场景
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPayScene() const;

                    /**
                     * 设置支付场景
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payScene 支付场景
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPayScene(const std::string& _payScene);

                    /**
                     * 判断参数 PayScene 是否已赋值
                     * @return PayScene 是否已赋值
                     * 
                     */
                    bool PaySceneHasBeenSet() const;

                    /**
                     * 获取支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentMethod 支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaymentMethod() const;

                    /**
                     * 设置支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paymentMethod 支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPaymentMethod(const std::string& _paymentMethod);

                    /**
                     * 判断参数 PaymentMethod 是否已赋值
                     * @return PaymentMethod 是否已赋值
                     * 
                     */
                    bool PaymentMethodHasBeenSet() const;

                    /**
                     * 获取平台应收金额
单位：分，需要注意的是，TotalAmt=TotalPlatformIncome+TotalMchIncome
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalPlatformIncome 平台应收金额
单位：分，需要注意的是，TotalAmt=TotalPlatformIncome+TotalMchIncome
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalPlatformIncome() const;

                    /**
                     * 设置平台应收金额
单位：分，需要注意的是，TotalAmt=TotalPlatformIncome+TotalMchIncome
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalPlatformIncome 平台应收金额
单位：分，需要注意的是，TotalAmt=TotalPlatformIncome+TotalMchIncome
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalPlatformIncome(const int64_t& _totalPlatformIncome);

                    /**
                     * 判断参数 TotalPlatformIncome 是否已赋值
                     * @return TotalPlatformIncome 是否已赋值
                     * 
                     */
                    bool TotalPlatformIncomeHasBeenSet() const;

                    /**
                     * 获取商户应收金额
单位：分，需要注意的是，TotalAmt=TotalPlatformIncome+TotalMchIncome
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalMchIncome 商户应收金额
单位：分，需要注意的是，TotalAmt=TotalPlatformIncome+TotalMchIncome
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalMchIncome() const;

                    /**
                     * 设置商户应收金额
单位：分，需要注意的是，TotalAmt=TotalPlatformIncome+TotalMchIncome
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalMchIncome 商户应收金额
单位：分，需要注意的是，TotalAmt=TotalPlatformIncome+TotalMchIncome
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalMchIncome(const int64_t& _totalMchIncome);

                    /**
                     * 判断参数 TotalMchIncome 是否已赋值
                     * @return TotalMchIncome 是否已赋值
                     * 
                     */
                    bool TotalMchIncomeHasBeenSet() const;

                private:

                    /**
                     * 米大师分配的支付主MidasAppId
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 开发者支付订单号
                     */
                    std::string m_outTradeNo;
                    bool m_outTradeNoHasBeenSet;

                    /**
                     * 调用下单接口传进来的子单列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CloudSubOrderReturn> m_subOrderList;
                    bool m_subOrderListHasBeenSet;

                    /**
                     * 调用下单接口获取的米大师交易订单号
                     */
                    std::string m_transactionId;
                    bool m_transactionIdHasBeenSet;

                    /**
                     * 用户Id
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 支付渠道
wechat:微信支付
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * 物品Id
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 发货标识，由开发者在调用下单接口的时候传入
                     */
                    std::string m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * ISO货币代码
                     */
                    std::string m_currencyType;
                    bool m_currencyTypeHasBeenSet;

                    /**
                     * 支付金额，单位：分
                     */
                    int64_t m_amt;
                    bool m_amtHasBeenSet;

                    /**
                     * 订单状态
0:初始状态，获取米大师交易订单成功
1:拉起米大师支付页面成功，用户未支付
2:用户支付成功，正在发货
3:用户支付成功，发货失败
4:用户支付成功，发货成功
5:关单中
6:已关单
                     */
                    std::string m_orderState;
                    bool m_orderStateHasBeenSet;

                    /**
                     * 下单时间，unix时间戳
                     */
                    std::string m_orderTime;
                    bool m_orderTimeHasBeenSet;

                    /**
                     * 支付时间，unix时间戳
                     */
                    std::string m_payTime;
                    bool m_payTimeHasBeenSet;

                    /**
                     * 支付回调时间，unix时间戳
                     */
                    std::string m_callBackTime;
                    bool m_callBackTimeHasBeenSet;

                    /**
                     * 支付机构订单号
                     */
                    std::string m_channelExternalOrderId;
                    bool m_channelExternalOrderIdHasBeenSet;

                    /**
                     * 米大师内部渠道订单号
                     */
                    std::string m_channelOrderId;
                    bool m_channelOrderIdHasBeenSet;

                    /**
                     * 是否曾退款
                     */
                    std::string m_refundFlag;
                    bool m_refundFlagHasBeenSet;

                    /**
                     * 用户支付金额
                     */
                    std::string m_cashAmt;
                    bool m_cashAmtHasBeenSet;

                    /**
                     * 抵扣券金额
                     */
                    std::string m_couponAmt;
                    bool m_couponAmtHasBeenSet;

                    /**
                     * 商品名称
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 结算信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CloudSettleInfo m_settleInfo;
                    bool m_settleInfoHasBeenSet;

                    /**
                     * 附加项信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CloudAttachmentInfo> m_attachmentInfoList;
                    bool m_attachmentInfoListHasBeenSet;

                    /**
                     * 渠道方返回的用户信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CloudChannelExternalUserInfo> m_channelExternalUserInfoList;
                    bool m_channelExternalUserInfoListHasBeenSet;

                    /**
                     * 渠道扩展促销列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CloudExternalPromptGroup> m_externalReturnPromptGroupList;
                    bool m_externalReturnPromptGroupListHasBeenSet;

                    /**
                     * 场景扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sceneInfo;
                    bool m_sceneInfoHasBeenSet;

                    /**
                     * 子应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 支付场景
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_payScene;
                    bool m_paySceneHasBeenSet;

                    /**
                     * 支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentMethod;
                    bool m_paymentMethodHasBeenSet;

                    /**
                     * 平台应收金额
单位：分，需要注意的是，TotalAmt=TotalPlatformIncome+TotalMchIncome
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalPlatformIncome;
                    bool m_totalPlatformIncomeHasBeenSet;

                    /**
                     * 商户应收金额
单位：分，需要注意的是，TotalAmt=TotalPlatformIncome+TotalMchIncome
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalMchIncome;
                    bool m_totalMchIncomeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDORDERRETURN_H_
