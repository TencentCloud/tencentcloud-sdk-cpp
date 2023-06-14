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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_UNIFIEDCLOUDORDERREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_UNIFIEDCLOUDORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/CloudSubOrder.h>
#include <tencentcloud/cpdp/v20190820/model/CloudSettleInfo.h>
#include <tencentcloud/cpdp/v20190820/model/CloudAttachmentInfo.h>
#include <tencentcloud/cpdp/v20190820/model/CloudGlobalPayTimeInfo.h>
#include <tencentcloud/cpdp/v20190820/model/CloudStoreInfo.h>
#include <tencentcloud/cpdp/v20190820/model/CloudClientInfo.h>
#include <tencentcloud/cpdp/v20190820/model/CloudExternalPromptGroup.h>
#include <tencentcloud/cpdp/v20190820/model/CloudExternalUserInfo.h>
#include <tencentcloud/cpdp/v20190820/model/CloudExternalAttachmentData.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * UnifiedCloudOrder请求参数结构体
                */
                class UnifiedCloudOrderRequest : public AbstractModel
                {
                public:
                    UnifiedCloudOrderRequest();
                    ~UnifiedCloudOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取米大师分配的支付主MidasAppId
                     * @return MidasAppId 米大师分配的支付主MidasAppId
                     * 
                     */
                    std::string GetMidasAppId() const;

                    /**
                     * 设置米大师分配的支付主MidasAppId
                     * @param _midasAppId 米大师分配的支付主MidasAppId
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
                     * 获取用户ID
长度不小于5位，仅支持字母和数字的组合，长度限制以具体接入渠道为准
                     * @return UserId 用户ID
长度不小于5位，仅支持字母和数字的组合，长度限制以具体接入渠道为准
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户ID
长度不小于5位，仅支持字母和数字的组合，长度限制以具体接入渠道为准
                     * @param _userId 用户ID
长度不小于5位，仅支持字母和数字的组合，长度限制以具体接入渠道为准
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
                     * 获取开发者主订单号
支付订单号，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合，长度供参考，部分渠道存在长度更短的情况接入时请联系开发咨询
                     * @return OutTradeNo 开发者主订单号
支付订单号，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合，长度供参考，部分渠道存在长度更短的情况接入时请联系开发咨询
                     * 
                     */
                    std::string GetOutTradeNo() const;

                    /**
                     * 设置开发者主订单号
支付订单号，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合，长度供参考，部分渠道存在长度更短的情况接入时请联系开发咨询
                     * @param _outTradeNo 开发者主订单号
支付订单号，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合，长度供参考，部分渠道存在长度更短的情况接入时请联系开发咨询
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
                     * 获取货币类型
ISO货币代码，CNY
                     * @return CurrencyType 货币类型
ISO货币代码，CNY
                     * 
                     */
                    std::string GetCurrencyType() const;

                    /**
                     * 设置货币类型
ISO货币代码，CNY
                     * @param _currencyType 货币类型
ISO货币代码，CNY
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
                     * 获取商品ID
业务自定义的商品id，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合。
                     * @return ProductId 商品ID
业务自定义的商品id，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合。
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置商品ID
业务自定义的商品id，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合。
                     * @param _productId 商品ID
业务自定义的商品id，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合。
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
                     * 获取商品名称
业务自定义的商品名称，无需URL编码，长度限制以具体所接入渠道为准。
                     * @return ProductName 商品名称
业务自定义的商品名称，无需URL编码，长度限制以具体所接入渠道为准。
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置商品名称
业务自定义的商品名称，无需URL编码，长度限制以具体所接入渠道为准。
                     * @param _productName 商品名称
业务自定义的商品名称，无需URL编码，长度限制以具体所接入渠道为准。
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
                     * 获取商品详情
业务自定义的商品详情，无需URL编码，长度限制以具体所接入渠道为准。
                     * @return ProductDetail 商品详情
业务自定义的商品详情，无需URL编码，长度限制以具体所接入渠道为准。
                     * 
                     */
                    std::string GetProductDetail() const;

                    /**
                     * 设置商品详情
业务自定义的商品详情，无需URL编码，长度限制以具体所接入渠道为准。
                     * @param _productDetail 商品详情
业务自定义的商品详情，无需URL编码，长度限制以具体所接入渠道为准。
                     * 
                     */
                    void SetProductDetail(const std::string& _productDetail);

                    /**
                     * 判断参数 ProductDetail 是否已赋值
                     * @return ProductDetail 是否已赋值
                     * 
                     */
                    bool ProductDetailHasBeenSet() const;

                    /**
                     * 获取原始金额
单位：分，需要注意的是，OriginalAmt>=TotalAmt
                     * @return OriginalAmt 原始金额
单位：分，需要注意的是，OriginalAmt>=TotalAmt
                     * 
                     */
                    int64_t GetOriginalAmt() const;

                    /**
                     * 设置原始金额
单位：分，需要注意的是，OriginalAmt>=TotalAmt
                     * @param _originalAmt 原始金额
单位：分，需要注意的是，OriginalAmt>=TotalAmt
                     * 
                     */
                    void SetOriginalAmt(const int64_t& _originalAmt);

                    /**
                     * 判断参数 OriginalAmt 是否已赋值
                     * @return OriginalAmt 是否已赋值
                     * 
                     */
                    bool OriginalAmtHasBeenSet() const;

                    /**
                     * 获取支付金额
单位：分，需要注意的是，TotalAmt=TotalPlatformIncome+TotalMchIncome。
                     * @return TotalAmt 支付金额
单位：分，需要注意的是，TotalAmt=TotalPlatformIncome+TotalMchIncome。
                     * 
                     */
                    int64_t GetTotalAmt() const;

                    /**
                     * 设置支付金额
单位：分，需要注意的是，TotalAmt=TotalPlatformIncome+TotalMchIncome。
                     * @param _totalAmt 支付金额
单位：分，需要注意的是，TotalAmt=TotalPlatformIncome+TotalMchIncome。
                     * 
                     */
                    void SetTotalAmt(const int64_t& _totalAmt);

                    /**
                     * 判断参数 TotalAmt 是否已赋值
                     * @return TotalAmt 是否已赋值
                     * 
                     */
                    bool TotalAmtHasBeenSet() const;

                    /**
                     * 获取环境类型
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * @return MidasEnvironment 环境类型
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * 
                     */
                    std::string GetMidasEnvironment() const;

                    /**
                     * 设置环境类型
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * @param _midasEnvironment 环境类型
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * 
                     */
                    void SetMidasEnvironment(const std::string& _midasEnvironment);

                    /**
                     * 判断参数 MidasEnvironment 是否已赋值
                     * @return MidasEnvironment 是否已赋值
                     * 
                     */
                    bool MidasEnvironmentHasBeenSet() const;

                    /**
                     * 获取支付SubAppId
米大师计费SubAppId，代表子商户。指定使用该商户的商户号下单时必传。
                     * @return SubAppId 支付SubAppId
米大师计费SubAppId，代表子商户。指定使用该商户的商户号下单时必传。
                     * 
                     */
                    std::string GetSubAppId() const;

                    /**
                     * 设置支付SubAppId
米大师计费SubAppId，代表子商户。指定使用该商户的商户号下单时必传。
                     * @param _subAppId 支付SubAppId
米大师计费SubAppId，代表子商户。指定使用该商户的商户号下单时必传。
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
                     * 获取顶层支付渠道
银行收单:
openbank_ccb: 建设银行
openbank_icbc: 工商银行
openbank_cmb: 招商银行
openbank_ping: 平安银行
openbank_icbc_jft：工商银行聚付通
非银行收单，可以为空
                     * @return RealChannel 顶层支付渠道
银行收单:
openbank_ccb: 建设银行
openbank_icbc: 工商银行
openbank_cmb: 招商银行
openbank_ping: 平安银行
openbank_icbc_jft：工商银行聚付通
非银行收单，可以为空
                     * 
                     */
                    std::string GetRealChannel() const;

                    /**
                     * 设置顶层支付渠道
银行收单:
openbank_ccb: 建设银行
openbank_icbc: 工商银行
openbank_cmb: 招商银行
openbank_ping: 平安银行
openbank_icbc_jft：工商银行聚付通
非银行收单，可以为空
                     * @param _realChannel 顶层支付渠道
银行收单:
openbank_ccb: 建设银行
openbank_icbc: 工商银行
openbank_cmb: 招商银行
openbank_ping: 平安银行
openbank_icbc_jft：工商银行聚付通
非银行收单，可以为空
                     * 
                     */
                    void SetRealChannel(const std::string& _realChannel);

                    /**
                     * 判断参数 RealChannel 是否已赋值
                     * @return RealChannel 是否已赋值
                     * 
                     */
                    bool RealChannelHasBeenSet() const;

                    /**
                     * 获取支付渠道
wechat：微信支付
wechat_ecommerce: 微信电商收付通
open_alipay: 支付宝
open_quickpass: 银联云闪付
icbc_epay: 工银e支付
foreign_cardpay: 外卡支付
icbc_jft_wechat: 工行聚付通-微信
icbc_jft_alipay: 工行聚付通-支付宝
icbc_jft_epay: 工行聚付通-e支付
指定渠道下单时必传
                     * @return Channel 支付渠道
wechat：微信支付
wechat_ecommerce: 微信电商收付通
open_alipay: 支付宝
open_quickpass: 银联云闪付
icbc_epay: 工银e支付
foreign_cardpay: 外卡支付
icbc_jft_wechat: 工行聚付通-微信
icbc_jft_alipay: 工行聚付通-支付宝
icbc_jft_epay: 工行聚付通-e支付
指定渠道下单时必传
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置支付渠道
wechat：微信支付
wechat_ecommerce: 微信电商收付通
open_alipay: 支付宝
open_quickpass: 银联云闪付
icbc_epay: 工银e支付
foreign_cardpay: 外卡支付
icbc_jft_wechat: 工行聚付通-微信
icbc_jft_alipay: 工行聚付通-支付宝
icbc_jft_epay: 工行聚付通-e支付
指定渠道下单时必传
                     * @param _channel 支付渠道
wechat：微信支付
wechat_ecommerce: 微信电商收付通
open_alipay: 支付宝
open_quickpass: 银联云闪付
icbc_epay: 工银e支付
foreign_cardpay: 外卡支付
icbc_jft_wechat: 工行聚付通-微信
icbc_jft_alipay: 工行聚付通-支付宝
icbc_jft_epay: 工行聚付通-e支付
指定渠道下单时必传
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
                     * 获取透传字段
支付成功回调透传给应用，用于开发者透传自定义内容。
                     * @return Metadata 透传字段
支付成功回调透传给应用，用于开发者透传自定义内容。
                     * 
                     */
                    std::string GetMetadata() const;

                    /**
                     * 设置透传字段
支付成功回调透传给应用，用于开发者透传自定义内容。
                     * @param _metadata 透传字段
支付成功回调透传给应用，用于开发者透传自定义内容。
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
                     * 获取数量
购买数量,不传默认为1。
                     * @return Quantity 数量
购买数量,不传默认为1。
                     * 
                     */
                    int64_t GetQuantity() const;

                    /**
                     * 设置数量
购买数量,不传默认为1。
                     * @param _quantity 数量
购买数量,不传默认为1。
                     * 
                     */
                    void SetQuantity(const int64_t& _quantity);

                    /**
                     * 判断参数 Quantity 是否已赋值
                     * @return Quantity 是否已赋值
                     * 
                     */
                    bool QuantityHasBeenSet() const;

                    /**
                     * 获取Web端回调地址
Web端网页回调地址，仅当Web端SDK使用页面跳转方式时有效。
                     * @return CallbackUrl Web端回调地址
Web端网页回调地址，仅当Web端SDK使用页面跳转方式时有效。
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置Web端回调地址
Web端网页回调地址，仅当Web端SDK使用页面跳转方式时有效。
                     * @param _callbackUrl Web端回调地址
Web端网页回调地址，仅当Web端SDK使用页面跳转方式时有效。
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取支付取消地址
                     * @return CancelUrl 支付取消地址
                     * 
                     */
                    std::string GetCancelUrl() const;

                    /**
                     * 设置支付取消地址
                     * @param _cancelUrl 支付取消地址
                     * 
                     */
                    void SetCancelUrl(const std::string& _cancelUrl);

                    /**
                     * 判断参数 CancelUrl 是否已赋值
                     * @return CancelUrl 是否已赋值
                     * 
                     */
                    bool CancelUrlHasBeenSet() const;

                    /**
                     * 获取微信AppId
wechat渠道或wchat_ecommerce渠道可以指定下单时的wxappid。
                     * @return WxAppId 微信AppId
wechat渠道或wchat_ecommerce渠道可以指定下单时的wxappid。
                     * 
                     */
                    std::string GetWxAppId() const;

                    /**
                     * 设置微信AppId
wechat渠道或wchat_ecommerce渠道可以指定下单时的wxappid。
                     * @param _wxAppId 微信AppId
wechat渠道或wchat_ecommerce渠道可以指定下单时的wxappid。
                     * 
                     */
                    void SetWxAppId(const std::string& _wxAppId);

                    /**
                     * 判断参数 WxAppId 是否已赋值
                     * @return WxAppId 是否已赋值
                     * 
                     */
                    bool WxAppIdHasBeenSet() const;

                    /**
                     * 获取微信SubAppId
wechat渠道可以指定下单时的sub_appid。
                     * @return WxSubAppId 微信SubAppId
wechat渠道可以指定下单时的sub_appid。
                     * 
                     */
                    std::string GetWxSubAppId() const;

                    /**
                     * 设置微信SubAppId
wechat渠道可以指定下单时的sub_appid。
                     * @param _wxSubAppId 微信SubAppId
wechat渠道可以指定下单时的sub_appid。
                     * 
                     */
                    void SetWxSubAppId(const std::string& _wxSubAppId);

                    /**
                     * 判断参数 WxSubAppId 是否已赋值
                     * @return WxSubAppId 是否已赋值
                     * 
                     */
                    bool WxSubAppIdHasBeenSet() const;

                    /**
                     * 获取微信公众号/小程序OpenId
微信公众号/小程序支付时为必选，需要传微信下的openid。
                     * @return WxOpenId 微信公众号/小程序OpenId
微信公众号/小程序支付时为必选，需要传微信下的openid。
                     * 
                     */
                    std::string GetWxOpenId() const;

                    /**
                     * 设置微信公众号/小程序OpenId
微信公众号/小程序支付时为必选，需要传微信下的openid。
                     * @param _wxOpenId 微信公众号/小程序OpenId
微信公众号/小程序支付时为必选，需要传微信下的openid。
                     * 
                     */
                    void SetWxOpenId(const std::string& _wxOpenId);

                    /**
                     * 判断参数 WxOpenId 是否已赋值
                     * @return WxOpenId 是否已赋值
                     * 
                     */
                    bool WxOpenIdHasBeenSet() const;

                    /**
                     * 获取微信公众号/小程序SubOpenId
在服务商模式下，微信公众号/小程序支付时wx_sub_openid和wx_openid二选一。
                     * @return WxSubOpenId 微信公众号/小程序SubOpenId
在服务商模式下，微信公众号/小程序支付时wx_sub_openid和wx_openid二选一。
                     * 
                     */
                    std::string GetWxSubOpenId() const;

                    /**
                     * 设置微信公众号/小程序SubOpenId
在服务商模式下，微信公众号/小程序支付时wx_sub_openid和wx_openid二选一。
                     * @param _wxSubOpenId 微信公众号/小程序SubOpenId
在服务商模式下，微信公众号/小程序支付时wx_sub_openid和wx_openid二选一。
                     * 
                     */
                    void SetWxSubOpenId(const std::string& _wxSubOpenId);

                    /**
                     * 判断参数 WxSubOpenId 是否已赋值
                     * @return WxSubOpenId 是否已赋值
                     * 
                     */
                    bool WxSubOpenIdHasBeenSet() const;

                    /**
                     * 获取平台应收金额
单位：分，需要注意的是，TotalAmt=TotalPlatformIncome+TotalMchIncome
                     * @return TotalPlatformIncome 平台应收金额
单位：分，需要注意的是，TotalAmt=TotalPlatformIncome+TotalMchIncome
                     * 
                     */
                    int64_t GetTotalPlatformIncome() const;

                    /**
                     * 设置平台应收金额
单位：分，需要注意的是，TotalAmt=TotalPlatformIncome+TotalMchIncome
                     * @param _totalPlatformIncome 平台应收金额
单位：分，需要注意的是，TotalAmt=TotalPlatformIncome+TotalMchIncome
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
                     * 获取结算应收金额
单位：分，需要注意的是，TotalAmt=TotalPlatformIncome+TotalMchIncome
                     * @return TotalMchIncome 结算应收金额
单位：分，需要注意的是，TotalAmt=TotalPlatformIncome+TotalMchIncome
                     * 
                     */
                    int64_t GetTotalMchIncome() const;

                    /**
                     * 设置结算应收金额
单位：分，需要注意的是，TotalAmt=TotalPlatformIncome+TotalMchIncome
                     * @param _totalMchIncome 结算应收金额
单位：分，需要注意的是，TotalAmt=TotalPlatformIncome+TotalMchIncome
                     * 
                     */
                    void SetTotalMchIncome(const int64_t& _totalMchIncome);

                    /**
                     * 判断参数 TotalMchIncome 是否已赋值
                     * @return TotalMchIncome 是否已赋值
                     * 
                     */
                    bool TotalMchIncomeHasBeenSet() const;

                    /**
                     * 获取子订单列表
格式：子订单号、子应用Id、金额。压缩后最长不可超过32K字节(去除空格，换行，制表符等无意义字符)。
                     * @return SubOrderList 子订单列表
格式：子订单号、子应用Id、金额。压缩后最长不可超过32K字节(去除空格，换行，制表符等无意义字符)。
                     * 
                     */
                    std::vector<CloudSubOrder> GetSubOrderList() const;

                    /**
                     * 设置子订单列表
格式：子订单号、子应用Id、金额。压缩后最长不可超过32K字节(去除空格，换行，制表符等无意义字符)。
                     * @param _subOrderList 子订单列表
格式：子订单号、子应用Id、金额。压缩后最长不可超过32K字节(去除空格，换行，制表符等无意义字符)。
                     * 
                     */
                    void SetSubOrderList(const std::vector<CloudSubOrder>& _subOrderList);

                    /**
                     * 判断参数 SubOrderList 是否已赋值
                     * @return SubOrderList 是否已赋值
                     * 
                     */
                    bool SubOrderListHasBeenSet() const;

                    /**
                     * 获取结算信息
例如是否需要分账、是否需要支付确认等，
注意：如果子单列表中传入了SettleInfo，在主单中不可再传入SettleInfo字段。
                     * @return SettleInfo 结算信息
例如是否需要分账、是否需要支付确认等，
注意：如果子单列表中传入了SettleInfo，在主单中不可再传入SettleInfo字段。
                     * 
                     */
                    CloudSettleInfo GetSettleInfo() const;

                    /**
                     * 设置结算信息
例如是否需要分账、是否需要支付确认等，
注意：如果子单列表中传入了SettleInfo，在主单中不可再传入SettleInfo字段。
                     * @param _settleInfo 结算信息
例如是否需要分账、是否需要支付确认等，
注意：如果子单列表中传入了SettleInfo，在主单中不可再传入SettleInfo字段。
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
例如溢价信息、抵扣信息、积分信息、补贴信息
通过该字段可以实现渠道方的优惠抵扣补贴等营销功能
注意：当传SubOrderList时，请在子单信息中传附加项信息，不要在主单中传该字段。
                     * @return AttachmentInfoList 附加项信息列表
例如溢价信息、抵扣信息、积分信息、补贴信息
通过该字段可以实现渠道方的优惠抵扣补贴等营销功能
注意：当传SubOrderList时，请在子单信息中传附加项信息，不要在主单中传该字段。
                     * 
                     */
                    std::vector<CloudAttachmentInfo> GetAttachmentInfoList() const;

                    /**
                     * 设置附加项信息列表
例如溢价信息、抵扣信息、积分信息、补贴信息
通过该字段可以实现渠道方的优惠抵扣补贴等营销功能
注意：当传SubOrderList时，请在子单信息中传附加项信息，不要在主单中传该字段。
                     * @param _attachmentInfoList 附加项信息列表
例如溢价信息、抵扣信息、积分信息、补贴信息
通过该字段可以实现渠道方的优惠抵扣补贴等营销功能
注意：当传SubOrderList时，请在子单信息中传附加项信息，不要在主单中传该字段。
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
                     * 获取支付通知地址
调用方可通过该字段传入自定义支付通知地址。
                     * @return PaymentNotifyUrl 支付通知地址
调用方可通过该字段传入自定义支付通知地址。
                     * 
                     */
                    std::string GetPaymentNotifyUrl() const;

                    /**
                     * 设置支付通知地址
调用方可通过该字段传入自定义支付通知地址。
                     * @param _paymentNotifyUrl 支付通知地址
调用方可通过该字段传入自定义支付通知地址。
                     * 
                     */
                    void SetPaymentNotifyUrl(const std::string& _paymentNotifyUrl);

                    /**
                     * 判断参数 PaymentNotifyUrl 是否已赋值
                     * @return PaymentNotifyUrl 是否已赋值
                     * 
                     */
                    bool PaymentNotifyUrlHasBeenSet() const;

                    /**
                     * 获取支付场景
需要结合 RealChannel和Channel字段使用可选值:
wechat-app 微信APP支付方式
wechat-mini 微信小程序支付，示例：当 RealChannel=wechat Channel=wechat PayScene=wechat-mini时，内部会直接以小程序方式调用微信统一下单接口。
                     * @return PayScene 支付场景
需要结合 RealChannel和Channel字段使用可选值:
wechat-app 微信APP支付方式
wechat-mini 微信小程序支付，示例：当 RealChannel=wechat Channel=wechat PayScene=wechat-mini时，内部会直接以小程序方式调用微信统一下单接口。
                     * 
                     */
                    std::string GetPayScene() const;

                    /**
                     * 设置支付场景
需要结合 RealChannel和Channel字段使用可选值:
wechat-app 微信APP支付方式
wechat-mini 微信小程序支付，示例：当 RealChannel=wechat Channel=wechat PayScene=wechat-mini时，内部会直接以小程序方式调用微信统一下单接口。
                     * @param _payScene 支付场景
需要结合 RealChannel和Channel字段使用可选值:
wechat-app 微信APP支付方式
wechat-mini 微信小程序支付，示例：当 RealChannel=wechat Channel=wechat PayScene=wechat-mini时，内部会直接以小程序方式调用微信统一下单接口。
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
                     * 获取语言代码
取值请参考[ISO 639-1代码表](https://zh.wikipedia.org/zh-cn/ISO_639-1%E4%BB%A3%E7%A0%81%E8%A1%A8)
                     * @return LocaleCode 语言代码
取值请参考[ISO 639-1代码表](https://zh.wikipedia.org/zh-cn/ISO_639-1%E4%BB%A3%E7%A0%81%E8%A1%A8)
                     * 
                     */
                    std::string GetLocaleCode() const;

                    /**
                     * 设置语言代码
取值请参考[ISO 639-1代码表](https://zh.wikipedia.org/zh-cn/ISO_639-1%E4%BB%A3%E7%A0%81%E8%A1%A8)
                     * @param _localeCode 语言代码
取值请参考[ISO 639-1代码表](https://zh.wikipedia.org/zh-cn/ISO_639-1%E4%BB%A3%E7%A0%81%E8%A1%A8)
                     * 
                     */
                    void SetLocaleCode(const std::string& _localeCode);

                    /**
                     * 判断参数 LocaleCode 是否已赋值
                     * @return LocaleCode 是否已赋值
                     * 
                     */
                    bool LocaleCodeHasBeenSet() const;

                    /**
                     * 获取地区代码
取值请参考[ISO 3166-1二位字母代码表](https://zh.wikipedia.org/zh-cn/ISO_3166-1%E4%BA%8C%E4%BD%8D%E5%AD%97%E6%AF%8D%E4%BB%A3%E7%A0%81#%E6%AD%A3%E5%BC%8F%E5%88%86%E9%85%8D%E4%BB%A3%E7%A0%81)
                     * @return RegionCode 地区代码
取值请参考[ISO 3166-1二位字母代码表](https://zh.wikipedia.org/zh-cn/ISO_3166-1%E4%BA%8C%E4%BD%8D%E5%AD%97%E6%AF%8D%E4%BB%A3%E7%A0%81#%E6%AD%A3%E5%BC%8F%E5%88%86%E9%85%8D%E4%BB%A3%E7%A0%81)
                     * 
                     */
                    std::string GetRegionCode() const;

                    /**
                     * 设置地区代码
取值请参考[ISO 3166-1二位字母代码表](https://zh.wikipedia.org/zh-cn/ISO_3166-1%E4%BA%8C%E4%BD%8D%E5%AD%97%E6%AF%8D%E4%BB%A3%E7%A0%81#%E6%AD%A3%E5%BC%8F%E5%88%86%E9%85%8D%E4%BB%A3%E7%A0%81)
                     * @param _regionCode 地区代码
取值请参考[ISO 3166-1二位字母代码表](https://zh.wikipedia.org/zh-cn/ISO_3166-1%E4%BA%8C%E4%BD%8D%E5%AD%97%E6%AF%8D%E4%BB%A3%E7%A0%81#%E6%AD%A3%E5%BC%8F%E5%88%86%E9%85%8D%E4%BB%A3%E7%A0%81)
                     * 
                     */
                    void SetRegionCode(const std::string& _regionCode);

                    /**
                     * 判断参数 RegionCode 是否已赋值
                     * @return RegionCode 是否已赋值
                     * 
                     */
                    bool RegionCodeHasBeenSet() const;

                    /**
                     * 获取用户IP
请求用户的IP地址，特定的渠道或特定的支付方式，此字段为必填
wechat_ecommerce渠道 - h5支付方式，此字段必填。
                     * @return UserClientIp 用户IP
请求用户的IP地址，特定的渠道或特定的支付方式，此字段为必填
wechat_ecommerce渠道 - h5支付方式，此字段必填。
                     * 
                     */
                    std::string GetUserClientIp() const;

                    /**
                     * 设置用户IP
请求用户的IP地址，特定的渠道或特定的支付方式，此字段为必填
wechat_ecommerce渠道 - h5支付方式，此字段必填。
                     * @param _userClientIp 用户IP
请求用户的IP地址，特定的渠道或特定的支付方式，此字段为必填
wechat_ecommerce渠道 - h5支付方式，此字段必填。
                     * 
                     */
                    void SetUserClientIp(const std::string& _userClientIp);

                    /**
                     * 判断参数 UserClientIp 是否已赋值
                     * @return UserClientIp 是否已赋值
                     * 
                     */
                    bool UserClientIpHasBeenSet() const;

                    /**
                     * 获取渠道订单号生成模式
枚举值。决定请求渠道方时的订单号的生成模式，详情请联系米大师沟通。不指定时默认为由米大师自行生成。
                     * @return ChannelOrderIdMode 渠道订单号生成模式
枚举值。决定请求渠道方时的订单号的生成模式，详情请联系米大师沟通。不指定时默认为由米大师自行生成。
                     * 
                     */
                    std::string GetChannelOrderIdMode() const;

                    /**
                     * 设置渠道订单号生成模式
枚举值。决定请求渠道方时的订单号的生成模式，详情请联系米大师沟通。不指定时默认为由米大师自行生成。
                     * @param _channelOrderIdMode 渠道订单号生成模式
枚举值。决定请求渠道方时的订单号的生成模式，详情请联系米大师沟通。不指定时默认为由米大师自行生成。
                     * 
                     */
                    void SetChannelOrderIdMode(const std::string& _channelOrderIdMode);

                    /**
                     * 判断参数 ChannelOrderIdMode 是否已赋值
                     * @return ChannelOrderIdMode 是否已赋值
                     * 
                     */
                    bool ChannelOrderIdModeHasBeenSet() const;

                    /**
                     * 获取全局支付时间信息
                     * @return GlobalPayTimeInfo 全局支付时间信息
                     * 
                     */
                    CloudGlobalPayTimeInfo GetGlobalPayTimeInfo() const;

                    /**
                     * 设置全局支付时间信息
                     * @param _globalPayTimeInfo 全局支付时间信息
                     * 
                     */
                    void SetGlobalPayTimeInfo(const CloudGlobalPayTimeInfo& _globalPayTimeInfo);

                    /**
                     * 判断参数 GlobalPayTimeInfo 是否已赋值
                     * @return GlobalPayTimeInfo 是否已赋值
                     * 
                     */
                    bool GlobalPayTimeInfoHasBeenSet() const;

                    /**
                     * 获取渠道应用ID取用方式
USE_APPID 使用渠道应用Id;
USE_SUB_APPID 使用子渠道应用Id;
USE_APPID_AND_SUB_APPID 既使用渠道应用Id也使用子渠道应用ID。
                     * @return ChannelAppIdPolicy 渠道应用ID取用方式
USE_APPID 使用渠道应用Id;
USE_SUB_APPID 使用子渠道应用Id;
USE_APPID_AND_SUB_APPID 既使用渠道应用Id也使用子渠道应用ID。
                     * 
                     */
                    std::string GetChannelAppIdPolicy() const;

                    /**
                     * 设置渠道应用ID取用方式
USE_APPID 使用渠道应用Id;
USE_SUB_APPID 使用子渠道应用Id;
USE_APPID_AND_SUB_APPID 既使用渠道应用Id也使用子渠道应用ID。
                     * @param _channelAppIdPolicy 渠道应用ID取用方式
USE_APPID 使用渠道应用Id;
USE_SUB_APPID 使用子渠道应用Id;
USE_APPID_AND_SUB_APPID 既使用渠道应用Id也使用子渠道应用ID。
                     * 
                     */
                    void SetChannelAppIdPolicy(const std::string& _channelAppIdPolicy);

                    /**
                     * 判断参数 ChannelAppIdPolicy 是否已赋值
                     * @return ChannelAppIdPolicy 是否已赋值
                     * 
                     */
                    bool ChannelAppIdPolicyHasBeenSet() const;

                    /**
                     * 获取门店信息
特定的渠道或特定的支付方式，此字段为必填
wechat_ecommerce渠道 - h5支付方式，此字段必填
                     * @return StoreInfo 门店信息
特定的渠道或特定的支付方式，此字段为必填
wechat_ecommerce渠道 - h5支付方式，此字段必填
                     * 
                     */
                    CloudStoreInfo GetStoreInfo() const;

                    /**
                     * 设置门店信息
特定的渠道或特定的支付方式，此字段为必填
wechat_ecommerce渠道 - h5支付方式，此字段必填
                     * @param _storeInfo 门店信息
特定的渠道或特定的支付方式，此字段为必填
wechat_ecommerce渠道 - h5支付方式，此字段必填
                     * 
                     */
                    void SetStoreInfo(const CloudStoreInfo& _storeInfo);

                    /**
                     * 判断参数 StoreInfo 是否已赋值
                     * @return StoreInfo 是否已赋值
                     * 
                     */
                    bool StoreInfoHasBeenSet() const;

                    /**
                     * 获取客户端信息
特定的渠道或特定的支付方式，此字段为必填
wechat_ecommerce渠道 - h5支付方式，此字段必填
                     * @return ClientInfo 客户端信息
特定的渠道或特定的支付方式，此字段为必填
wechat_ecommerce渠道 - h5支付方式，此字段必填
                     * 
                     */
                    CloudClientInfo GetClientInfo() const;

                    /**
                     * 设置客户端信息
特定的渠道或特定的支付方式，此字段为必填
wechat_ecommerce渠道 - h5支付方式，此字段必填
                     * @param _clientInfo 客户端信息
特定的渠道或特定的支付方式，此字段为必填
wechat_ecommerce渠道 - h5支付方式，此字段必填
                     * 
                     */
                    void SetClientInfo(const CloudClientInfo& _clientInfo);

                    /**
                     * 判断参数 ClientInfo 是否已赋值
                     * @return ClientInfo 是否已赋值
                     * 
                     */
                    bool ClientInfoHasBeenSet() const;

                    /**
                     * 获取渠道扩展促销列表
可将各个渠道的促销信息放于该列表。
                     * @return ExternalPromptGroupList 渠道扩展促销列表
可将各个渠道的促销信息放于该列表。
                     * 
                     */
                    std::vector<CloudExternalPromptGroup> GetExternalPromptGroupList() const;

                    /**
                     * 设置渠道扩展促销列表
可将各个渠道的促销信息放于该列表。
                     * @param _externalPromptGroupList 渠道扩展促销列表
可将各个渠道的促销信息放于该列表。
                     * 
                     */
                    void SetExternalPromptGroupList(const std::vector<CloudExternalPromptGroup>& _externalPromptGroupList);

                    /**
                     * 判断参数 ExternalPromptGroupList 是否已赋值
                     * @return ExternalPromptGroupList 是否已赋值
                     * 
                     */
                    bool ExternalPromptGroupListHasBeenSet() const;

                    /**
                     * 获取收单模式
ORDER_RECEIVE_MODE_COMMON - 普通支付
ORDER_RECEIVE_MODE_COMBINE - 合单支付
ORDER_RECEIVE_MODE_V_COMBINE - 虚拟合单支付
若不传入该字段，则会根据是否传入子单来判断是 普通支付 还是 合单支付
                     * @return OrderReceiveMode 收单模式
ORDER_RECEIVE_MODE_COMMON - 普通支付
ORDER_RECEIVE_MODE_COMBINE - 合单支付
ORDER_RECEIVE_MODE_V_COMBINE - 虚拟合单支付
若不传入该字段，则会根据是否传入子单来判断是 普通支付 还是 合单支付
                     * 
                     */
                    std::string GetOrderReceiveMode() const;

                    /**
                     * 设置收单模式
ORDER_RECEIVE_MODE_COMMON - 普通支付
ORDER_RECEIVE_MODE_COMBINE - 合单支付
ORDER_RECEIVE_MODE_V_COMBINE - 虚拟合单支付
若不传入该字段，则会根据是否传入子单来判断是 普通支付 还是 合单支付
                     * @param _orderReceiveMode 收单模式
ORDER_RECEIVE_MODE_COMMON - 普通支付
ORDER_RECEIVE_MODE_COMBINE - 合单支付
ORDER_RECEIVE_MODE_V_COMBINE - 虚拟合单支付
若不传入该字段，则会根据是否传入子单来判断是 普通支付 还是 合单支付
                     * 
                     */
                    void SetOrderReceiveMode(const std::string& _orderReceiveMode);

                    /**
                     * 判断参数 OrderReceiveMode 是否已赋值
                     * @return OrderReceiveMode 是否已赋值
                     * 
                     */
                    bool OrderReceiveModeHasBeenSet() const;

                    /**
                     * 获取渠道方用户信息列表
                     * @return ExternalUserInfoList 渠道方用户信息列表
                     * 
                     */
                    std::vector<CloudExternalUserInfo> GetExternalUserInfoList() const;

                    /**
                     * 设置渠道方用户信息列表
                     * @param _externalUserInfoList 渠道方用户信息列表
                     * 
                     */
                    void SetExternalUserInfoList(const std::vector<CloudExternalUserInfo>& _externalUserInfoList);

                    /**
                     * 判断参数 ExternalUserInfoList 是否已赋值
                     * @return ExternalUserInfoList 是否已赋值
                     * 
                     */
                    bool ExternalUserInfoListHasBeenSet() const;

                    /**
                     * 获取渠道透传数据列表
                     * @return ExternalAttachmentDataList 渠道透传数据列表
                     * 
                     */
                    std::vector<CloudExternalAttachmentData> GetExternalAttachmentDataList() const;

                    /**
                     * 设置渠道透传数据列表
                     * @param _externalAttachmentDataList 渠道透传数据列表
                     * 
                     */
                    void SetExternalAttachmentDataList(const std::vector<CloudExternalAttachmentData>& _externalAttachmentDataList);

                    /**
                     * 判断参数 ExternalAttachmentDataList 是否已赋值
                     * @return ExternalAttachmentDataList 是否已赋值
                     * 
                     */
                    bool ExternalAttachmentDataListHasBeenSet() const;

                private:

                    /**
                     * 米大师分配的支付主MidasAppId
                     */
                    std::string m_midasAppId;
                    bool m_midasAppIdHasBeenSet;

                    /**
                     * 用户ID
长度不小于5位，仅支持字母和数字的组合，长度限制以具体接入渠道为准
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 开发者主订单号
支付订单号，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合，长度供参考，部分渠道存在长度更短的情况接入时请联系开发咨询
                     */
                    std::string m_outTradeNo;
                    bool m_outTradeNoHasBeenSet;

                    /**
                     * 货币类型
ISO货币代码，CNY
                     */
                    std::string m_currencyType;
                    bool m_currencyTypeHasBeenSet;

                    /**
                     * 商品ID
业务自定义的商品id，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合。
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 商品名称
业务自定义的商品名称，无需URL编码，长度限制以具体所接入渠道为准。
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 商品详情
业务自定义的商品详情，无需URL编码，长度限制以具体所接入渠道为准。
                     */
                    std::string m_productDetail;
                    bool m_productDetailHasBeenSet;

                    /**
                     * 原始金额
单位：分，需要注意的是，OriginalAmt>=TotalAmt
                     */
                    int64_t m_originalAmt;
                    bool m_originalAmtHasBeenSet;

                    /**
                     * 支付金额
单位：分，需要注意的是，TotalAmt=TotalPlatformIncome+TotalMchIncome。
                     */
                    int64_t m_totalAmt;
                    bool m_totalAmtHasBeenSet;

                    /**
                     * 环境类型
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     */
                    std::string m_midasEnvironment;
                    bool m_midasEnvironmentHasBeenSet;

                    /**
                     * 支付SubAppId
米大师计费SubAppId，代表子商户。指定使用该商户的商户号下单时必传。
                     */
                    std::string m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 顶层支付渠道
银行收单:
openbank_ccb: 建设银行
openbank_icbc: 工商银行
openbank_cmb: 招商银行
openbank_ping: 平安银行
openbank_icbc_jft：工商银行聚付通
非银行收单，可以为空
                     */
                    std::string m_realChannel;
                    bool m_realChannelHasBeenSet;

                    /**
                     * 支付渠道
wechat：微信支付
wechat_ecommerce: 微信电商收付通
open_alipay: 支付宝
open_quickpass: 银联云闪付
icbc_epay: 工银e支付
foreign_cardpay: 外卡支付
icbc_jft_wechat: 工行聚付通-微信
icbc_jft_alipay: 工行聚付通-支付宝
icbc_jft_epay: 工行聚付通-e支付
指定渠道下单时必传
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * 透传字段
支付成功回调透传给应用，用于开发者透传自定义内容。
                     */
                    std::string m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * 数量
购买数量,不传默认为1。
                     */
                    int64_t m_quantity;
                    bool m_quantityHasBeenSet;

                    /**
                     * Web端回调地址
Web端网页回调地址，仅当Web端SDK使用页面跳转方式时有效。
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 支付取消地址
                     */
                    std::string m_cancelUrl;
                    bool m_cancelUrlHasBeenSet;

                    /**
                     * 微信AppId
wechat渠道或wchat_ecommerce渠道可以指定下单时的wxappid。
                     */
                    std::string m_wxAppId;
                    bool m_wxAppIdHasBeenSet;

                    /**
                     * 微信SubAppId
wechat渠道可以指定下单时的sub_appid。
                     */
                    std::string m_wxSubAppId;
                    bool m_wxSubAppIdHasBeenSet;

                    /**
                     * 微信公众号/小程序OpenId
微信公众号/小程序支付时为必选，需要传微信下的openid。
                     */
                    std::string m_wxOpenId;
                    bool m_wxOpenIdHasBeenSet;

                    /**
                     * 微信公众号/小程序SubOpenId
在服务商模式下，微信公众号/小程序支付时wx_sub_openid和wx_openid二选一。
                     */
                    std::string m_wxSubOpenId;
                    bool m_wxSubOpenIdHasBeenSet;

                    /**
                     * 平台应收金额
单位：分，需要注意的是，TotalAmt=TotalPlatformIncome+TotalMchIncome
                     */
                    int64_t m_totalPlatformIncome;
                    bool m_totalPlatformIncomeHasBeenSet;

                    /**
                     * 结算应收金额
单位：分，需要注意的是，TotalAmt=TotalPlatformIncome+TotalMchIncome
                     */
                    int64_t m_totalMchIncome;
                    bool m_totalMchIncomeHasBeenSet;

                    /**
                     * 子订单列表
格式：子订单号、子应用Id、金额。压缩后最长不可超过32K字节(去除空格，换行，制表符等无意义字符)。
                     */
                    std::vector<CloudSubOrder> m_subOrderList;
                    bool m_subOrderListHasBeenSet;

                    /**
                     * 结算信息
例如是否需要分账、是否需要支付确认等，
注意：如果子单列表中传入了SettleInfo，在主单中不可再传入SettleInfo字段。
                     */
                    CloudSettleInfo m_settleInfo;
                    bool m_settleInfoHasBeenSet;

                    /**
                     * 附加项信息列表
例如溢价信息、抵扣信息、积分信息、补贴信息
通过该字段可以实现渠道方的优惠抵扣补贴等营销功能
注意：当传SubOrderList时，请在子单信息中传附加项信息，不要在主单中传该字段。
                     */
                    std::vector<CloudAttachmentInfo> m_attachmentInfoList;
                    bool m_attachmentInfoListHasBeenSet;

                    /**
                     * 支付通知地址
调用方可通过该字段传入自定义支付通知地址。
                     */
                    std::string m_paymentNotifyUrl;
                    bool m_paymentNotifyUrlHasBeenSet;

                    /**
                     * 支付场景
需要结合 RealChannel和Channel字段使用可选值:
wechat-app 微信APP支付方式
wechat-mini 微信小程序支付，示例：当 RealChannel=wechat Channel=wechat PayScene=wechat-mini时，内部会直接以小程序方式调用微信统一下单接口。
                     */
                    std::string m_payScene;
                    bool m_paySceneHasBeenSet;

                    /**
                     * 语言代码
取值请参考[ISO 639-1代码表](https://zh.wikipedia.org/zh-cn/ISO_639-1%E4%BB%A3%E7%A0%81%E8%A1%A8)
                     */
                    std::string m_localeCode;
                    bool m_localeCodeHasBeenSet;

                    /**
                     * 地区代码
取值请参考[ISO 3166-1二位字母代码表](https://zh.wikipedia.org/zh-cn/ISO_3166-1%E4%BA%8C%E4%BD%8D%E5%AD%97%E6%AF%8D%E4%BB%A3%E7%A0%81#%E6%AD%A3%E5%BC%8F%E5%88%86%E9%85%8D%E4%BB%A3%E7%A0%81)
                     */
                    std::string m_regionCode;
                    bool m_regionCodeHasBeenSet;

                    /**
                     * 用户IP
请求用户的IP地址，特定的渠道或特定的支付方式，此字段为必填
wechat_ecommerce渠道 - h5支付方式，此字段必填。
                     */
                    std::string m_userClientIp;
                    bool m_userClientIpHasBeenSet;

                    /**
                     * 渠道订单号生成模式
枚举值。决定请求渠道方时的订单号的生成模式，详情请联系米大师沟通。不指定时默认为由米大师自行生成。
                     */
                    std::string m_channelOrderIdMode;
                    bool m_channelOrderIdModeHasBeenSet;

                    /**
                     * 全局支付时间信息
                     */
                    CloudGlobalPayTimeInfo m_globalPayTimeInfo;
                    bool m_globalPayTimeInfoHasBeenSet;

                    /**
                     * 渠道应用ID取用方式
USE_APPID 使用渠道应用Id;
USE_SUB_APPID 使用子渠道应用Id;
USE_APPID_AND_SUB_APPID 既使用渠道应用Id也使用子渠道应用ID。
                     */
                    std::string m_channelAppIdPolicy;
                    bool m_channelAppIdPolicyHasBeenSet;

                    /**
                     * 门店信息
特定的渠道或特定的支付方式，此字段为必填
wechat_ecommerce渠道 - h5支付方式，此字段必填
                     */
                    CloudStoreInfo m_storeInfo;
                    bool m_storeInfoHasBeenSet;

                    /**
                     * 客户端信息
特定的渠道或特定的支付方式，此字段为必填
wechat_ecommerce渠道 - h5支付方式，此字段必填
                     */
                    CloudClientInfo m_clientInfo;
                    bool m_clientInfoHasBeenSet;

                    /**
                     * 渠道扩展促销列表
可将各个渠道的促销信息放于该列表。
                     */
                    std::vector<CloudExternalPromptGroup> m_externalPromptGroupList;
                    bool m_externalPromptGroupListHasBeenSet;

                    /**
                     * 收单模式
ORDER_RECEIVE_MODE_COMMON - 普通支付
ORDER_RECEIVE_MODE_COMBINE - 合单支付
ORDER_RECEIVE_MODE_V_COMBINE - 虚拟合单支付
若不传入该字段，则会根据是否传入子单来判断是 普通支付 还是 合单支付
                     */
                    std::string m_orderReceiveMode;
                    bool m_orderReceiveModeHasBeenSet;

                    /**
                     * 渠道方用户信息列表
                     */
                    std::vector<CloudExternalUserInfo> m_externalUserInfoList;
                    bool m_externalUserInfoListHasBeenSet;

                    /**
                     * 渠道透传数据列表
                     */
                    std::vector<CloudExternalAttachmentData> m_externalAttachmentDataList;
                    bool m_externalAttachmentDataListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_UNIFIEDCLOUDORDERREQUEST_H_
