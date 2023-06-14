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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEOPENBANKUNIFIEDORDERREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEOPENBANKUNIFIEDORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/OpenBankSceneInfo.h>
#include <tencentcloud/cpdp/v20190820/model/OpenBankProfitShareInfo.h>
#include <tencentcloud/cpdp/v20190820/model/OpenBankStoreInfo.h>
#include <tencentcloud/cpdp/v20190820/model/OpenBankPayLimitInfo.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * CreateOpenBankUnifiedOrder请求参数结构体
                */
                class CreateOpenBankUnifiedOrderRequest : public AbstractModel
                {
                public:
                    CreateOpenBankUnifiedOrderRequest();
                    ~CreateOpenBankUnifiedOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取渠道商户号。
                     * @return ChannelMerchantId 渠道商户号。
                     * 
                     */
                    std::string GetChannelMerchantId() const;

                    /**
                     * 设置渠道商户号。
                     * @param _channelMerchantId 渠道商户号。
                     * 
                     */
                    void SetChannelMerchantId(const std::string& _channelMerchantId);

                    /**
                     * 判断参数 ChannelMerchantId 是否已赋值
                     * @return ChannelMerchantId 是否已赋值
                     * 
                     */
                    bool ChannelMerchantIdHasBeenSet() const;

                    /**
                     * 获取渠道名称。
                     * @return ChannelName 渠道名称。
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置渠道名称。
                     * @param _channelName 渠道名称。
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取支付产品类型。
被扫（扫码）：SWIPE, 主扫（刷卡）：SCAN, 
H5：WAP, 公众号：PUBLIC, 
APP-SDK：SDK, 小程序：MINI_PROGRAM, 
快捷支付：QUICK, 网银支付：ONLINE_BANK。
                     * @return PayType 支付产品类型。
被扫（扫码）：SWIPE, 主扫（刷卡）：SCAN, 
H5：WAP, 公众号：PUBLIC, 
APP-SDK：SDK, 小程序：MINI_PROGRAM, 
快捷支付：QUICK, 网银支付：ONLINE_BANK。
                     * 
                     */
                    std::string GetPayType() const;

                    /**
                     * 设置支付产品类型。
被扫（扫码）：SWIPE, 主扫（刷卡）：SCAN, 
H5：WAP, 公众号：PUBLIC, 
APP-SDK：SDK, 小程序：MINI_PROGRAM, 
快捷支付：QUICK, 网银支付：ONLINE_BANK。
                     * @param _payType 支付产品类型。
被扫（扫码）：SWIPE, 主扫（刷卡）：SCAN, 
H5：WAP, 公众号：PUBLIC, 
APP-SDK：SDK, 小程序：MINI_PROGRAM, 
快捷支付：QUICK, 网银支付：ONLINE_BANK。
                     * 
                     */
                    void SetPayType(const std::string& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     * 
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取外部商户订单号。
只能是数字、大小写字母，且在同一个接入平台下唯一。
                     * @return OutOrderId 外部商户订单号。
只能是数字、大小写字母，且在同一个接入平台下唯一。
                     * 
                     */
                    std::string GetOutOrderId() const;

                    /**
                     * 设置外部商户订单号。
只能是数字、大小写字母，且在同一个接入平台下唯一。
                     * @param _outOrderId 外部商户订单号。
只能是数字、大小写字母，且在同一个接入平台下唯一。
                     * 
                     */
                    void SetOutOrderId(const std::string& _outOrderId);

                    /**
                     * 判断参数 OutOrderId 是否已赋值
                     * @return OutOrderId 是否已赋值
                     * 
                     */
                    bool OutOrderIdHasBeenSet() const;

                    /**
                     * 获取交易金额，单位分。
                     * @return TotalAmount 交易金额，单位分。
                     * 
                     */
                    int64_t GetTotalAmount() const;

                    /**
                     * 设置交易金额，单位分。
                     * @param _totalAmount 交易金额，单位分。
                     * 
                     */
                    void SetTotalAmount(const int64_t& _totalAmount);

                    /**
                     * 判断参数 TotalAmount 是否已赋值
                     * @return TotalAmount 是否已赋值
                     * 
                     */
                    bool TotalAmountHasBeenSet() const;

                    /**
                     * 获取币种。固定：CNY。
                     * @return Currency 币种。固定：CNY。
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置币种。固定：CNY。
                     * @param _currency 币种。固定：CNY。
                     * 
                     */
                    void SetCurrency(const std::string& _currency);

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     * 
                     */
                    bool CurrencyHasBeenSet() const;

                    /**
                     * 获取渠道子商户号。
                     * @return ChannelSubMerchantId 渠道子商户号。
                     * 
                     */
                    std::string GetChannelSubMerchantId() const;

                    /**
                     * 设置渠道子商户号。
                     * @param _channelSubMerchantId 渠道子商户号。
                     * 
                     */
                    void SetChannelSubMerchantId(const std::string& _channelSubMerchantId);

                    /**
                     * 判断参数 ChannelSubMerchantId 是否已赋值
                     * @return ChannelSubMerchantId 是否已赋值
                     * 
                     */
                    bool ChannelSubMerchantIdHasBeenSet() const;

                    /**
                     * 获取实际支付渠道。没有则无需填写。如
支付宝 ALIPAY
微信支付 WXPAY
银联 UNIONPAY
一般在间连模式下使用。
                     * @return PayChannel 实际支付渠道。没有则无需填写。如
支付宝 ALIPAY
微信支付 WXPAY
银联 UNIONPAY
一般在间连模式下使用。
                     * 
                     */
                    std::string GetPayChannel() const;

                    /**
                     * 设置实际支付渠道。没有则无需填写。如
支付宝 ALIPAY
微信支付 WXPAY
银联 UNIONPAY
一般在间连模式下使用。
                     * @param _payChannel 实际支付渠道。没有则无需填写。如
支付宝 ALIPAY
微信支付 WXPAY
银联 UNIONPAY
一般在间连模式下使用。
                     * 
                     */
                    void SetPayChannel(const std::string& _payChannel);

                    /**
                     * 判断参数 PayChannel 是否已赋值
                     * @return PayChannel 是否已赋值
                     * 
                     */
                    bool PayChannelHasBeenSet() const;

                    /**
                     * 获取设备信息。
                     * @return SceneInfo 设备信息。
                     * 
                     */
                    OpenBankSceneInfo GetSceneInfo() const;

                    /**
                     * 设置设备信息。
                     * @param _sceneInfo 设备信息。
                     * 
                     */
                    void SetSceneInfo(const OpenBankSceneInfo& _sceneInfo);

                    /**
                     * 判断参数 SceneInfo 是否已赋值
                     * @return SceneInfo 是否已赋值
                     * 
                     */
                    bool SceneInfoHasBeenSet() const;

                    /**
                     * 获取分账信息列表。
                     * @return ProfitShareInfoList 分账信息列表。
                     * 
                     */
                    std::vector<OpenBankProfitShareInfo> GetProfitShareInfoList() const;

                    /**
                     * 设置分账信息列表。
                     * @param _profitShareInfoList 分账信息列表。
                     * 
                     */
                    void SetProfitShareInfoList(const std::vector<OpenBankProfitShareInfo>& _profitShareInfoList);

                    /**
                     * 判断参数 ProfitShareInfoList 是否已赋值
                     * @return ProfitShareInfoList 是否已赋值
                     * 
                     */
                    bool ProfitShareInfoListHasBeenSet() const;

                    /**
                     * 获取订单标题。
                     * @return OrderSubject 订单标题。
                     * 
                     */
                    std::string GetOrderSubject() const;

                    /**
                     * 设置订单标题。
                     * @param _orderSubject 订单标题。
                     * 
                     */
                    void SetOrderSubject(const std::string& _orderSubject);

                    /**
                     * 判断参数 OrderSubject 是否已赋值
                     * @return OrderSubject 是否已赋值
                     * 
                     */
                    bool OrderSubjectHasBeenSet() const;

                    /**
                     * 获取商品信息。
                     * @return GoodsDetail 商品信息。
                     * 
                     */
                    std::string GetGoodsDetail() const;

                    /**
                     * 设置商品信息。
                     * @param _goodsDetail 商品信息。
                     * 
                     */
                    void SetGoodsDetail(const std::string& _goodsDetail);

                    /**
                     * 判断参数 GoodsDetail 是否已赋值
                     * @return GoodsDetail 是否已赋值
                     * 
                     */
                    bool GoodsDetailHasBeenSet() const;

                    /**
                     * 获取超时时间。
                     * @return ExpireTime 超时时间。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置超时时间。
                     * @param _expireTime 超时时间。
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取支付成功回调地址。
                     * @return NotifyUrl 支付成功回调地址。
                     * 
                     */
                    std::string GetNotifyUrl() const;

                    /**
                     * 设置支付成功回调地址。
                     * @param _notifyUrl 支付成功回调地址。
                     * 
                     */
                    void SetNotifyUrl(const std::string& _notifyUrl);

                    /**
                     * 判断参数 NotifyUrl 是否已赋值
                     * @return NotifyUrl 是否已赋值
                     * 
                     */
                    bool NotifyUrlHasBeenSet() const;

                    /**
                     * 获取支付成功前端跳转URL。
                     * @return FrontUrl 支付成功前端跳转URL。
                     * 
                     */
                    std::string GetFrontUrl() const;

                    /**
                     * 设置支付成功前端跳转URL。
                     * @param _frontUrl 支付成功前端跳转URL。
                     * 
                     */
                    void SetFrontUrl(const std::string& _frontUrl);

                    /**
                     * 判断参数 FrontUrl 是否已赋值
                     * @return FrontUrl 是否已赋值
                     * 
                     */
                    bool FrontUrlHasBeenSet() const;

                    /**
                     * 获取订单附加信息，查询或者回调的时候原样返回。
                     * @return Attachment 订单附加信息，查询或者回调的时候原样返回。
                     * 
                     */
                    std::string GetAttachment() const;

                    /**
                     * 设置订单附加信息，查询或者回调的时候原样返回。
                     * @param _attachment 订单附加信息，查询或者回调的时候原样返回。
                     * 
                     */
                    void SetAttachment(const std::string& _attachment);

                    /**
                     * 判断参数 Attachment 是否已赋值
                     * @return Attachment 是否已赋值
                     * 
                     */
                    bool AttachmentHasBeenSet() const;

                    /**
                     * 获取第三方渠道扩展字段。见附录-复杂类型。
未作特殊说明，则无需传入。
                     * @return ExternalPaymentData 第三方渠道扩展字段。见附录-复杂类型。
未作特殊说明，则无需传入。
                     * 
                     */
                    std::string GetExternalPaymentData() const;

                    /**
                     * 设置第三方渠道扩展字段。见附录-复杂类型。
未作特殊说明，则无需传入。
                     * @param _externalPaymentData 第三方渠道扩展字段。见附录-复杂类型。
未作特殊说明，则无需传入。
                     * 
                     */
                    void SetExternalPaymentData(const std::string& _externalPaymentData);

                    /**
                     * 判断参数 ExternalPaymentData 是否已赋值
                     * @return ExternalPaymentData 是否已赋值
                     * 
                     */
                    bool ExternalPaymentDataHasBeenSet() const;

                    /**
                     * 获取备注。
                     * @return Remark 备注。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注。
                     * @param _remark 备注。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取门店信息。
                     * @return StoreInfo 门店信息。
                     * 
                     */
                    OpenBankStoreInfo GetStoreInfo() const;

                    /**
                     * 设置门店信息。
                     * @param _storeInfo 门店信息。
                     * 
                     */
                    void SetStoreInfo(const OpenBankStoreInfo& _storeInfo);

                    /**
                     * 判断参数 StoreInfo 是否已赋值
                     * @return StoreInfo 是否已赋值
                     * 
                     */
                    bool StoreInfoHasBeenSet() const;

                    /**
                     * 获取支付限制。
                     * @return PayLimitInfo 支付限制。
                     * 
                     */
                    OpenBankPayLimitInfo GetPayLimitInfo() const;

                    /**
                     * 设置支付限制。
                     * @param _payLimitInfo 支付限制。
                     * 
                     */
                    void SetPayLimitInfo(const OpenBankPayLimitInfo& _payLimitInfo);

                    /**
                     * 判断参数 PayLimitInfo 是否已赋值
                     * @return PayLimitInfo 是否已赋值
                     * 
                     */
                    bool PayLimitInfoHasBeenSet() const;

                    /**
                     * 获取环境类型。
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * @return Environment 环境类型。
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置环境类型。
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * @param _environment 环境类型。
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                private:

                    /**
                     * 渠道商户号。
                     */
                    std::string m_channelMerchantId;
                    bool m_channelMerchantIdHasBeenSet;

                    /**
                     * 渠道名称。
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 支付产品类型。
被扫（扫码）：SWIPE, 主扫（刷卡）：SCAN, 
H5：WAP, 公众号：PUBLIC, 
APP-SDK：SDK, 小程序：MINI_PROGRAM, 
快捷支付：QUICK, 网银支付：ONLINE_BANK。
                     */
                    std::string m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * 外部商户订单号。
只能是数字、大小写字母，且在同一个接入平台下唯一。
                     */
                    std::string m_outOrderId;
                    bool m_outOrderIdHasBeenSet;

                    /**
                     * 交易金额，单位分。
                     */
                    int64_t m_totalAmount;
                    bool m_totalAmountHasBeenSet;

                    /**
                     * 币种。固定：CNY。
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * 渠道子商户号。
                     */
                    std::string m_channelSubMerchantId;
                    bool m_channelSubMerchantIdHasBeenSet;

                    /**
                     * 实际支付渠道。没有则无需填写。如
支付宝 ALIPAY
微信支付 WXPAY
银联 UNIONPAY
一般在间连模式下使用。
                     */
                    std::string m_payChannel;
                    bool m_payChannelHasBeenSet;

                    /**
                     * 设备信息。
                     */
                    OpenBankSceneInfo m_sceneInfo;
                    bool m_sceneInfoHasBeenSet;

                    /**
                     * 分账信息列表。
                     */
                    std::vector<OpenBankProfitShareInfo> m_profitShareInfoList;
                    bool m_profitShareInfoListHasBeenSet;

                    /**
                     * 订单标题。
                     */
                    std::string m_orderSubject;
                    bool m_orderSubjectHasBeenSet;

                    /**
                     * 商品信息。
                     */
                    std::string m_goodsDetail;
                    bool m_goodsDetailHasBeenSet;

                    /**
                     * 超时时间。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 支付成功回调地址。
                     */
                    std::string m_notifyUrl;
                    bool m_notifyUrlHasBeenSet;

                    /**
                     * 支付成功前端跳转URL。
                     */
                    std::string m_frontUrl;
                    bool m_frontUrlHasBeenSet;

                    /**
                     * 订单附加信息，查询或者回调的时候原样返回。
                     */
                    std::string m_attachment;
                    bool m_attachmentHasBeenSet;

                    /**
                     * 第三方渠道扩展字段。见附录-复杂类型。
未作特殊说明，则无需传入。
                     */
                    std::string m_externalPaymentData;
                    bool m_externalPaymentDataHasBeenSet;

                    /**
                     * 备注。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 门店信息。
                     */
                    OpenBankStoreInfo m_storeInfo;
                    bool m_storeInfoHasBeenSet;

                    /**
                     * 支付限制。
                     */
                    OpenBankPayLimitInfo m_payLimitInfo;
                    bool m_payLimitInfoHasBeenSet;

                    /**
                     * 环境类型。
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEOPENBANKUNIFIEDORDERREQUEST_H_
