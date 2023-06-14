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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEOPENBANKSUBMERCHANTRATECONFIGUREREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEOPENBANKSUBMERCHANTRATECONFIGUREREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/FeeRangInfo.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * CreateOpenBankSubMerchantRateConfigure请求参数结构体
                */
                class CreateOpenBankSubMerchantRateConfigureRequest : public AbstractModel
                {
                public:
                    CreateOpenBankSubMerchantRateConfigureRequest();
                    ~CreateOpenBankSubMerchantRateConfigureRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取渠道进件序列号。
填写子商户进件返回的渠道进件编号。
                     * @return ChannelRegistrationNo 渠道进件序列号。
填写子商户进件返回的渠道进件编号。
                     * 
                     */
                    std::string GetChannelRegistrationNo() const;

                    /**
                     * 设置渠道进件序列号。
填写子商户进件返回的渠道进件编号。
                     * @param _channelRegistrationNo 渠道进件序列号。
填写子商户进件返回的渠道进件编号。
                     * 
                     */
                    void SetChannelRegistrationNo(const std::string& _channelRegistrationNo);

                    /**
                     * 判断参数 ChannelRegistrationNo 是否已赋值
                     * @return ChannelRegistrationNo 是否已赋值
                     * 
                     */
                    bool ChannelRegistrationNoHasBeenSet() const;

                    /**
                     * 获取外部产品费率申请序列号。
                     * @return OutProductFeeNo 外部产品费率申请序列号。
                     * 
                     */
                    std::string GetOutProductFeeNo() const;

                    /**
                     * 设置外部产品费率申请序列号。
                     * @param _outProductFeeNo 外部产品费率申请序列号。
                     * 
                     */
                    void SetOutProductFeeNo(const std::string& _outProductFeeNo);

                    /**
                     * 判断参数 OutProductFeeNo 是否已赋值
                     * @return OutProductFeeNo 是否已赋值
                     * 
                     */
                    bool OutProductFeeNoHasBeenSet() const;

                    /**
                     * 获取渠道商户ID。
                     * @return ChannelMerchantId 渠道商户ID。
                     * 
                     */
                    std::string GetChannelMerchantId() const;

                    /**
                     * 设置渠道商户ID。
                     * @param _channelMerchantId 渠道商户ID。
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
                     * 获取渠道子商户ID。
                     * @return ChannelSubMerchantId 渠道子商户ID。
                     * 
                     */
                    std::string GetChannelSubMerchantId() const;

                    /**
                     * 设置渠道子商户ID。
                     * @param _channelSubMerchantId 渠道子商户ID。
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
                     * 获取渠道名称。详见附录-云企付枚举类说明-ChannelName。
                     * @return ChannelName 渠道名称。详见附录-云企付枚举类说明-ChannelName。
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置渠道名称。详见附录-云企付枚举类说明-ChannelName。
                     * @param _channelName 渠道名称。详见附录-云企付枚举类说明-ChannelName。
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
                     * 获取支付类型。
SWIPE:刷卡
SCAN:扫码
WAP:WAP
PUBLIC:公众号支付
SDK:SDK
MINI_PROGRAM:小程序
注意：HELIPAY渠道传SDK。
                     * @return PayType 支付类型。
SWIPE:刷卡
SCAN:扫码
WAP:WAP
PUBLIC:公众号支付
SDK:SDK
MINI_PROGRAM:小程序
注意：HELIPAY渠道传SDK。
                     * 
                     */
                    std::string GetPayType() const;

                    /**
                     * 设置支付类型。
SWIPE:刷卡
SCAN:扫码
WAP:WAP
PUBLIC:公众号支付
SDK:SDK
MINI_PROGRAM:小程序
注意：HELIPAY渠道传SDK。
                     * @param _payType 支付类型。
SWIPE:刷卡
SCAN:扫码
WAP:WAP
PUBLIC:公众号支付
SDK:SDK
MINI_PROGRAM:小程序
注意：HELIPAY渠道传SDK。
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
                     * 获取支付渠道。
ALIPAY：支付宝 
WXPAY：微信支付 
UNIONPAY：银联
                     * @return PayChannel 支付渠道。
ALIPAY：支付宝 
WXPAY：微信支付 
UNIONPAY：银联
                     * 
                     */
                    std::string GetPayChannel() const;

                    /**
                     * 设置支付渠道。
ALIPAY：支付宝 
WXPAY：微信支付 
UNIONPAY：银联
                     * @param _payChannel 支付渠道。
ALIPAY：支付宝 
WXPAY：微信支付 
UNIONPAY：银联
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
                     * 获取计费模式。
SINGLE：按单笔金额计费
RATIO：按单笔费率计费 
RANGE：按分段区间计费
                     * @return FeeMode 计费模式。
SINGLE：按单笔金额计费
RATIO：按单笔费率计费 
RANGE：按分段区间计费
                     * 
                     */
                    std::string GetFeeMode() const;

                    /**
                     * 设置计费模式。
SINGLE：按单笔金额计费
RATIO：按单笔费率计费 
RANGE：按分段区间计费
                     * @param _feeMode 计费模式。
SINGLE：按单笔金额计费
RATIO：按单笔费率计费 
RANGE：按分段区间计费
                     * 
                     */
                    void SetFeeMode(const std::string& _feeMode);

                    /**
                     * 判断参数 FeeMode 是否已赋值
                     * @return FeeMode 是否已赋值
                     * 
                     */
                    bool FeeModeHasBeenSet() const;

                    /**
                     * 获取费用值，单位（0.01%或分）。
                     * @return FeeValue 费用值，单位（0.01%或分）。
                     * 
                     */
                    uint64_t GetFeeValue() const;

                    /**
                     * 设置费用值，单位（0.01%或分）。
                     * @param _feeValue 费用值，单位（0.01%或分）。
                     * 
                     */
                    void SetFeeValue(const uint64_t& _feeValue);

                    /**
                     * 判断参数 FeeValue 是否已赋值
                     * @return FeeValue 是否已赋值
                     * 
                     */
                    bool FeeValueHasBeenSet() const;

                    /**
                     * 获取支付方式。详见附录-云企付枚举类说明-PaymentMethod。
HELIPAY渠道不需要传入。
                     * @return PaymentMethod 支付方式。详见附录-云企付枚举类说明-PaymentMethod。
HELIPAY渠道不需要传入。
                     * 
                     */
                    std::string GetPaymentMethod() const;

                    /**
                     * 设置支付方式。详见附录-云企付枚举类说明-PaymentMethod。
HELIPAY渠道不需要传入。
                     * @param _paymentMethod 支付方式。详见附录-云企付枚举类说明-PaymentMethod。
HELIPAY渠道不需要传入。
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
                     * 获取最低收费金额，单位（分）。
                     * @return MinFee 最低收费金额，单位（分）。
                     * 
                     */
                    uint64_t GetMinFee() const;

                    /**
                     * 设置最低收费金额，单位（分）。
                     * @param _minFee 最低收费金额，单位（分）。
                     * 
                     */
                    void SetMinFee(const uint64_t& _minFee);

                    /**
                     * 判断参数 MinFee 是否已赋值
                     * @return MinFee 是否已赋值
                     * 
                     */
                    bool MinFeeHasBeenSet() const;

                    /**
                     * 获取最高收费金额，单位（分）。
                     * @return MaxFee 最高收费金额，单位（分）。
                     * 
                     */
                    uint64_t GetMaxFee() const;

                    /**
                     * 设置最高收费金额，单位（分）。
                     * @param _maxFee 最高收费金额，单位（分）。
                     * 
                     */
                    void SetMaxFee(const uint64_t& _maxFee);

                    /**
                     * 判断参数 MaxFee 是否已赋值
                     * @return MaxFee 是否已赋值
                     * 
                     */
                    bool MaxFeeHasBeenSet() const;

                    /**
                     * 获取通知地址。
                     * @return NotifyUrl 通知地址。
                     * 
                     */
                    std::string GetNotifyUrl() const;

                    /**
                     * 设置通知地址。
                     * @param _notifyUrl 通知地址。
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
                     * 获取分段计费区间列表。
                     * @return FeeRangeList 分段计费区间列表。
                     * 
                     */
                    std::vector<FeeRangInfo> GetFeeRangeList() const;

                    /**
                     * 设置分段计费区间列表。
                     * @param _feeRangeList 分段计费区间列表。
                     * 
                     */
                    void SetFeeRangeList(const std::vector<FeeRangInfo>& _feeRangeList);

                    /**
                     * 判断参数 FeeRangeList 是否已赋值
                     * @return FeeRangeList 是否已赋值
                     * 
                     */
                    bool FeeRangeListHasBeenSet() const;

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
                     * 渠道进件序列号。
填写子商户进件返回的渠道进件编号。
                     */
                    std::string m_channelRegistrationNo;
                    bool m_channelRegistrationNoHasBeenSet;

                    /**
                     * 外部产品费率申请序列号。
                     */
                    std::string m_outProductFeeNo;
                    bool m_outProductFeeNoHasBeenSet;

                    /**
                     * 渠道商户ID。
                     */
                    std::string m_channelMerchantId;
                    bool m_channelMerchantIdHasBeenSet;

                    /**
                     * 渠道子商户ID。
                     */
                    std::string m_channelSubMerchantId;
                    bool m_channelSubMerchantIdHasBeenSet;

                    /**
                     * 渠道名称。详见附录-云企付枚举类说明-ChannelName。
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 支付类型。
SWIPE:刷卡
SCAN:扫码
WAP:WAP
PUBLIC:公众号支付
SDK:SDK
MINI_PROGRAM:小程序
注意：HELIPAY渠道传SDK。
                     */
                    std::string m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * 支付渠道。
ALIPAY：支付宝 
WXPAY：微信支付 
UNIONPAY：银联
                     */
                    std::string m_payChannel;
                    bool m_payChannelHasBeenSet;

                    /**
                     * 计费模式。
SINGLE：按单笔金额计费
RATIO：按单笔费率计费 
RANGE：按分段区间计费
                     */
                    std::string m_feeMode;
                    bool m_feeModeHasBeenSet;

                    /**
                     * 费用值，单位（0.01%或分）。
                     */
                    uint64_t m_feeValue;
                    bool m_feeValueHasBeenSet;

                    /**
                     * 支付方式。详见附录-云企付枚举类说明-PaymentMethod。
HELIPAY渠道不需要传入。
                     */
                    std::string m_paymentMethod;
                    bool m_paymentMethodHasBeenSet;

                    /**
                     * 最低收费金额，单位（分）。
                     */
                    uint64_t m_minFee;
                    bool m_minFeeHasBeenSet;

                    /**
                     * 最高收费金额，单位（分）。
                     */
                    uint64_t m_maxFee;
                    bool m_maxFeeHasBeenSet;

                    /**
                     * 通知地址。
                     */
                    std::string m_notifyUrl;
                    bool m_notifyUrlHasBeenSet;

                    /**
                     * 分段计费区间列表。
                     */
                    std::vector<FeeRangInfo> m_feeRangeList;
                    bool m_feeRangeListHasBeenSet;

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

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEOPENBANKSUBMERCHANTRATECONFIGUREREQUEST_H_
