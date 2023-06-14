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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEOPENBANKPAYMENTORDERREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEOPENBANKPAYMENTORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/OpenBankPayerInfo.h>
#include <tencentcloud/cpdp/v20190820/model/OpenBankPayeeInfo.h>
#include <tencentcloud/cpdp/v20190820/model/OpenBankSceneInfo.h>
#include <tencentcloud/cpdp/v20190820/model/OpenBankGoodsInfo.h>
#include <tencentcloud/cpdp/v20190820/model/OpenBankProfitShareInfo.h>
#include <tencentcloud/cpdp/v20190820/model/OpenBankSettlementRulesInfo.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * CreateOpenBankPaymentOrder请求参数结构体
                */
                class CreateOpenBankPaymentOrderRequest : public AbstractModel
                {
                public:
                    CreateOpenBankPaymentOrderRequest();
                    ~CreateOpenBankPaymentOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云企付渠道商户号。外部接入平台入驻云企付平台后下发。
                     * @return ChannelMerchantId 云企付渠道商户号。外部接入平台入驻云企付平台后下发。
                     * 
                     */
                    std::string GetChannelMerchantId() const;

                    /**
                     * 设置云企付渠道商户号。外部接入平台入驻云企付平台后下发。
                     * @param _channelMerchantId 云企付渠道商户号。外部接入平台入驻云企付平台后下发。
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
                     * 获取渠道名称。详见附录-云企付枚举类说明-ChannelName。
__TENPAY__: 商企付
__WECHAT__: 微信支付
__ALIPAY__: 支付宝
__HUIFU__: 汇付斗拱
                     * @return ChannelName 渠道名称。详见附录-云企付枚举类说明-ChannelName。
__TENPAY__: 商企付
__WECHAT__: 微信支付
__ALIPAY__: 支付宝
__HUIFU__: 汇付斗拱
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置渠道名称。详见附录-云企付枚举类说明-ChannelName。
__TENPAY__: 商企付
__WECHAT__: 微信支付
__ALIPAY__: 支付宝
__HUIFU__: 汇付斗拱
                     * @param _channelName 渠道名称。详见附录-云企付枚举类说明-ChannelName。
__TENPAY__: 商企付
__WECHAT__: 微信支付
__ALIPAY__: 支付宝
__HUIFU__: 汇付斗拱
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
                     * 获取付款方式。详见附录-云企付枚举类说明-PaymentMethod。
__EBANK_PAYMENT__:B2B EBank付款
__OPENBANK_PAYMENT__:B2C  openbank付款
__SAFT_ISV__:支付宝安心发
__TRANS_TO_CHANGE__: 微信支付转账到零钱v2
__TRANS_TO_CHANGE_V3__: 微信支付转账到零钱v3
__ONLINEBANK__: 汇付网银
                     * @return PaymentMethod 付款方式。详见附录-云企付枚举类说明-PaymentMethod。
__EBANK_PAYMENT__:B2B EBank付款
__OPENBANK_PAYMENT__:B2C  openbank付款
__SAFT_ISV__:支付宝安心发
__TRANS_TO_CHANGE__: 微信支付转账到零钱v2
__TRANS_TO_CHANGE_V3__: 微信支付转账到零钱v3
__ONLINEBANK__: 汇付网银
                     * 
                     */
                    std::string GetPaymentMethod() const;

                    /**
                     * 设置付款方式。详见附录-云企付枚举类说明-PaymentMethod。
__EBANK_PAYMENT__:B2B EBank付款
__OPENBANK_PAYMENT__:B2C  openbank付款
__SAFT_ISV__:支付宝安心发
__TRANS_TO_CHANGE__: 微信支付转账到零钱v2
__TRANS_TO_CHANGE_V3__: 微信支付转账到零钱v3
__ONLINEBANK__: 汇付网银
                     * @param _paymentMethod 付款方式。详见附录-云企付枚举类说明-PaymentMethod。
__EBANK_PAYMENT__:B2B EBank付款
__OPENBANK_PAYMENT__:B2C  openbank付款
__SAFT_ISV__:支付宝安心发
__TRANS_TO_CHANGE__: 微信支付转账到零钱v2
__TRANS_TO_CHANGE_V3__: 微信支付转账到零钱v3
__ONLINEBANK__: 汇付网银
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
                     * 获取付款模式。默认直接支付，如
__DIRECT__:直接支付
__FREEZE__:担保支付
                     * @return PaymentMode 付款模式。默认直接支付，如
__DIRECT__:直接支付
__FREEZE__:担保支付
                     * 
                     */
                    std::string GetPaymentMode() const;

                    /**
                     * 设置付款模式。默认直接支付，如
__DIRECT__:直接支付
__FREEZE__:担保支付
                     * @param _paymentMode 付款模式。默认直接支付，如
__DIRECT__:直接支付
__FREEZE__:担保支付
                     * 
                     */
                    void SetPaymentMode(const std::string& _paymentMode);

                    /**
                     * 判断参数 PaymentMode 是否已赋值
                     * @return PaymentMode 是否已赋值
                     * 
                     */
                    bool PaymentModeHasBeenSet() const;

                    /**
                     * 获取外部订单号,只能是数字、大小写字母，且在同一个接入平台下唯一，限定长度40位。
                     * @return OutOrderId 外部订单号,只能是数字、大小写字母，且在同一个接入平台下唯一，限定长度40位。
                     * 
                     */
                    std::string GetOutOrderId() const;

                    /**
                     * 设置外部订单号,只能是数字、大小写字母，且在同一个接入平台下唯一，限定长度40位。
                     * @param _outOrderId 外部订单号,只能是数字、大小写字母，且在同一个接入平台下唯一，限定长度40位。
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
                     * 获取付款金额，单位分。
                     * @return TotalAmount 付款金额，单位分。
                     * 
                     */
                    int64_t GetTotalAmount() const;

                    /**
                     * 设置付款金额，单位分。
                     * @param _totalAmount 付款金额，单位分。
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
                     * 获取固定值CNY。
                     * @return Currency 固定值CNY。
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置固定值CNY。
                     * @param _currency 固定值CNY。
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
                     * 获取付款方信息。
                     * @return PayerInfo 付款方信息。
                     * 
                     */
                    OpenBankPayerInfo GetPayerInfo() const;

                    /**
                     * 设置付款方信息。
                     * @param _payerInfo 付款方信息。
                     * 
                     */
                    void SetPayerInfo(const OpenBankPayerInfo& _payerInfo);

                    /**
                     * 判断参数 PayerInfo 是否已赋值
                     * @return PayerInfo 是否已赋值
                     * 
                     */
                    bool PayerInfoHasBeenSet() const;

                    /**
                     * 获取收款方信息。
                     * @return PayeeInfo 收款方信息。
                     * 
                     */
                    OpenBankPayeeInfo GetPayeeInfo() const;

                    /**
                     * 设置收款方信息。
                     * @param _payeeInfo 收款方信息。
                     * 
                     */
                    void SetPayeeInfo(const OpenBankPayeeInfo& _payeeInfo);

                    /**
                     * 判断参数 PayeeInfo 是否已赋值
                     * @return PayeeInfo 是否已赋值
                     * 
                     */
                    bool PayeeInfoHasBeenSet() const;

                    /**
                     * 获取通知地址，如www.test.com。
                     * @return NotifyUrl 通知地址，如www.test.com。
                     * 
                     */
                    std::string GetNotifyUrl() const;

                    /**
                     * 设置通知地址，如www.test.com。
                     * @param _notifyUrl 通知地址，如www.test.com。
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
                     * 获取订单过期时间，yyyy-MM-dd HH:mm:ss格式。
                     * @return ExpireTime 订单过期时间，yyyy-MM-dd HH:mm:ss格式。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置订单过期时间，yyyy-MM-dd HH:mm:ss格式。
                     * @param _expireTime 订单过期时间，yyyy-MM-dd HH:mm:ss格式。
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
                     * 获取前端成功回调URL。条件可选。
                     * @return FrontUrl 前端成功回调URL。条件可选。
                     * 
                     */
                    std::string GetFrontUrl() const;

                    /**
                     * 设置前端成功回调URL。条件可选。
                     * @param _frontUrl 前端成功回调URL。条件可选。
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
                     * 获取前端刷新 URL。条件可选。
                     * @return RefreshUrl 前端刷新 URL。条件可选。
                     * 
                     */
                    std::string GetRefreshUrl() const;

                    /**
                     * 设置前端刷新 URL。条件可选。
                     * @param _refreshUrl 前端刷新 URL。条件可选。
                     * 
                     */
                    void SetRefreshUrl(const std::string& _refreshUrl);

                    /**
                     * 判断参数 RefreshUrl 是否已赋值
                     * @return RefreshUrl 是否已赋值
                     * 
                     */
                    bool RefreshUrlHasBeenSet() const;

                    /**
                     * 获取设备信息，条件可选。
                     * @return SceneInfo 设备信息，条件可选。
                     * 
                     */
                    OpenBankSceneInfo GetSceneInfo() const;

                    /**
                     * 设置设备信息，条件可选。
                     * @param _sceneInfo 设备信息，条件可选。
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
                     * 获取商品信息，条件可选。
                     * @return GoodsInfo 商品信息，条件可选。
                     * 
                     */
                    OpenBankGoodsInfo GetGoodsInfo() const;

                    /**
                     * 设置商品信息，条件可选。
                     * @param _goodsInfo 商品信息，条件可选。
                     * 
                     */
                    void SetGoodsInfo(const OpenBankGoodsInfo& _goodsInfo);

                    /**
                     * 判断参数 GoodsInfo 是否已赋值
                     * @return GoodsInfo 是否已赋值
                     * 
                     */
                    bool GoodsInfoHasBeenSet() const;

                    /**
                     * 获取附加信息，查询时原样返回。
                     * @return Attachment 附加信息，查询时原样返回。
                     * 
                     */
                    std::string GetAttachment() const;

                    /**
                     * 设置附加信息，查询时原样返回。
                     * @param _attachment 附加信息，查询时原样返回。
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
                     * 获取若不上传，即使用默认值无需分润
__NO_NEED_SHARE__：无需分润；
__SHARE_BY_INFO__：分润时指定金额，此时如果分润信息 ProfitShareInfo为空，只冻结，不分账给其他商户；需要调用解冻接口。
__SHARE_BY_API__：后续调用分润接口决定分润金额
                     * @return ProfitShareFlag 若不上传，即使用默认值无需分润
__NO_NEED_SHARE__：无需分润；
__SHARE_BY_INFO__：分润时指定金额，此时如果分润信息 ProfitShareInfo为空，只冻结，不分账给其他商户；需要调用解冻接口。
__SHARE_BY_API__：后续调用分润接口决定分润金额
                     * 
                     */
                    std::string GetProfitShareFlag() const;

                    /**
                     * 设置若不上传，即使用默认值无需分润
__NO_NEED_SHARE__：无需分润；
__SHARE_BY_INFO__：分润时指定金额，此时如果分润信息 ProfitShareInfo为空，只冻结，不分账给其他商户；需要调用解冻接口。
__SHARE_BY_API__：后续调用分润接口决定分润金额
                     * @param _profitShareFlag 若不上传，即使用默认值无需分润
__NO_NEED_SHARE__：无需分润；
__SHARE_BY_INFO__：分润时指定金额，此时如果分润信息 ProfitShareInfo为空，只冻结，不分账给其他商户；需要调用解冻接口。
__SHARE_BY_API__：后续调用分润接口决定分润金额
                     * 
                     */
                    void SetProfitShareFlag(const std::string& _profitShareFlag);

                    /**
                     * 判断参数 ProfitShareFlag 是否已赋值
                     * @return ProfitShareFlag 是否已赋值
                     * 
                     */
                    bool ProfitShareFlagHasBeenSet() const;

                    /**
                     * 获取分润信息，配合ProfitShareFlag使用。
                     * @return ProfitShareInfoList 分润信息，配合ProfitShareFlag使用。
                     * 
                     */
                    std::vector<OpenBankProfitShareInfo> GetProfitShareInfoList() const;

                    /**
                     * 设置分润信息，配合ProfitShareFlag使用。
                     * @param _profitShareInfoList 分润信息，配合ProfitShareFlag使用。
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
                     * 获取商企付-担保支付（PaymentMode为 FREEZE ）时需设置该参数
                     * @return SettlementRulesInfo 商企付-担保支付（PaymentMode为 FREEZE ）时需设置该参数
                     * 
                     */
                    OpenBankSettlementRulesInfo GetSettlementRulesInfo() const;

                    /**
                     * 设置商企付-担保支付（PaymentMode为 FREEZE ）时需设置该参数
                     * @param _settlementRulesInfo 商企付-担保支付（PaymentMode为 FREEZE ）时需设置该参数
                     * 
                     */
                    void SetSettlementRulesInfo(const OpenBankSettlementRulesInfo& _settlementRulesInfo);

                    /**
                     * 判断参数 SettlementRulesInfo 是否已赋值
                     * @return SettlementRulesInfo 是否已赋值
                     * 
                     */
                    bool SettlementRulesInfoHasBeenSet() const;

                    /**
                     * 获取底层支付渠道特殊字段，若无特殊说明时，可以为空
                     * @return ExternalPaymentData 底层支付渠道特殊字段，若无特殊说明时，可以为空
                     * 
                     */
                    std::string GetExternalPaymentData() const;

                    /**
                     * 设置底层支付渠道特殊字段，若无特殊说明时，可以为空
                     * @param _externalPaymentData 底层支付渠道特殊字段，若无特殊说明时，可以为空
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
                     * 获取备注信息。
                     * @return Remark 备注信息。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注信息。
                     * @param _remark 备注信息。
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
                     * 获取环境类型
__release__:生产环境
__sandbox__:沙箱环境
缺省默认为生产环境
                     * @return Environment 环境类型
__release__:生产环境
__sandbox__:沙箱环境
缺省默认为生产环境
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置环境类型
__release__:生产环境
__sandbox__:沙箱环境
缺省默认为生产环境
                     * @param _environment 环境类型
__release__:生产环境
__sandbox__:沙箱环境
缺省默认为生产环境
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
                     * 云企付渠道商户号。外部接入平台入驻云企付平台后下发。
                     */
                    std::string m_channelMerchantId;
                    bool m_channelMerchantIdHasBeenSet;

                    /**
                     * 渠道名称。详见附录-云企付枚举类说明-ChannelName。
__TENPAY__: 商企付
__WECHAT__: 微信支付
__ALIPAY__: 支付宝
__HUIFU__: 汇付斗拱
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 付款方式。详见附录-云企付枚举类说明-PaymentMethod。
__EBANK_PAYMENT__:B2B EBank付款
__OPENBANK_PAYMENT__:B2C  openbank付款
__SAFT_ISV__:支付宝安心发
__TRANS_TO_CHANGE__: 微信支付转账到零钱v2
__TRANS_TO_CHANGE_V3__: 微信支付转账到零钱v3
__ONLINEBANK__: 汇付网银
                     */
                    std::string m_paymentMethod;
                    bool m_paymentMethodHasBeenSet;

                    /**
                     * 付款模式。默认直接支付，如
__DIRECT__:直接支付
__FREEZE__:担保支付
                     */
                    std::string m_paymentMode;
                    bool m_paymentModeHasBeenSet;

                    /**
                     * 外部订单号,只能是数字、大小写字母，且在同一个接入平台下唯一，限定长度40位。
                     */
                    std::string m_outOrderId;
                    bool m_outOrderIdHasBeenSet;

                    /**
                     * 付款金额，单位分。
                     */
                    int64_t m_totalAmount;
                    bool m_totalAmountHasBeenSet;

                    /**
                     * 固定值CNY。
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * 付款方信息。
                     */
                    OpenBankPayerInfo m_payerInfo;
                    bool m_payerInfoHasBeenSet;

                    /**
                     * 收款方信息。
                     */
                    OpenBankPayeeInfo m_payeeInfo;
                    bool m_payeeInfoHasBeenSet;

                    /**
                     * 通知地址，如www.test.com。
                     */
                    std::string m_notifyUrl;
                    bool m_notifyUrlHasBeenSet;

                    /**
                     * 订单过期时间，yyyy-MM-dd HH:mm:ss格式。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 前端成功回调URL。条件可选。
                     */
                    std::string m_frontUrl;
                    bool m_frontUrlHasBeenSet;

                    /**
                     * 前端刷新 URL。条件可选。
                     */
                    std::string m_refreshUrl;
                    bool m_refreshUrlHasBeenSet;

                    /**
                     * 设备信息，条件可选。
                     */
                    OpenBankSceneInfo m_sceneInfo;
                    bool m_sceneInfoHasBeenSet;

                    /**
                     * 商品信息，条件可选。
                     */
                    OpenBankGoodsInfo m_goodsInfo;
                    bool m_goodsInfoHasBeenSet;

                    /**
                     * 附加信息，查询时原样返回。
                     */
                    std::string m_attachment;
                    bool m_attachmentHasBeenSet;

                    /**
                     * 若不上传，即使用默认值无需分润
__NO_NEED_SHARE__：无需分润；
__SHARE_BY_INFO__：分润时指定金额，此时如果分润信息 ProfitShareInfo为空，只冻结，不分账给其他商户；需要调用解冻接口。
__SHARE_BY_API__：后续调用分润接口决定分润金额
                     */
                    std::string m_profitShareFlag;
                    bool m_profitShareFlagHasBeenSet;

                    /**
                     * 分润信息，配合ProfitShareFlag使用。
                     */
                    std::vector<OpenBankProfitShareInfo> m_profitShareInfoList;
                    bool m_profitShareInfoListHasBeenSet;

                    /**
                     * 商企付-担保支付（PaymentMode为 FREEZE ）时需设置该参数
                     */
                    OpenBankSettlementRulesInfo m_settlementRulesInfo;
                    bool m_settlementRulesInfoHasBeenSet;

                    /**
                     * 底层支付渠道特殊字段，若无特殊说明时，可以为空
                     */
                    std::string m_externalPaymentData;
                    bool m_externalPaymentDataHasBeenSet;

                    /**
                     * 备注信息。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 环境类型
__release__:生产环境
__sandbox__:沙箱环境
缺省默认为生产环境
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEOPENBANKPAYMENTORDERREQUEST_H_
