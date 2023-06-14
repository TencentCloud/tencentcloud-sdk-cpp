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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEOPENBANKEXTERNALSUBMERCHANTREGISTRATIONREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEOPENBANKEXTERNALSUBMERCHANTREGISTRATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateOpenBankExternalSubMerchantRegistration请求参数结构体
                */
                class CreateOpenBankExternalSubMerchantRegistrationRequest : public AbstractModel
                {
                public:
                    CreateOpenBankExternalSubMerchantRegistrationRequest();
                    ~CreateOpenBankExternalSubMerchantRegistrationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取外部进件序列号。
                     * @return OutRegistrationNo 外部进件序列号。
                     * 
                     */
                    std::string GetOutRegistrationNo() const;

                    /**
                     * 设置外部进件序列号。
                     * @param _outRegistrationNo 外部进件序列号。
                     * 
                     */
                    void SetOutRegistrationNo(const std::string& _outRegistrationNo);

                    /**
                     * 判断参数 OutRegistrationNo 是否已赋值
                     * @return OutRegistrationNo 是否已赋值
                     * 
                     */
                    bool OutRegistrationNoHasBeenSet() const;

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
                     * 获取外部子商户ID,平台侧商户唯一ID。
                     * @return OutSubMerchantId 外部子商户ID,平台侧商户唯一ID。
                     * 
                     */
                    std::string GetOutSubMerchantId() const;

                    /**
                     * 设置外部子商户ID,平台侧商户唯一ID。
                     * @param _outSubMerchantId 外部子商户ID,平台侧商户唯一ID。
                     * 
                     */
                    void SetOutSubMerchantId(const std::string& _outSubMerchantId);

                    /**
                     * 判断参数 OutSubMerchantId 是否已赋值
                     * @return OutSubMerchantId 是否已赋值
                     * 
                     */
                    bool OutSubMerchantIdHasBeenSet() const;

                    /**
                     * 获取渠道名称。详见附录-云企付枚举类说明-ChannelName。
__TENPAY__: 商企付
__WECHAT__: 微信支付
__ALIPAY__: 支付宝
                     * @return ChannelName 渠道名称。详见附录-云企付枚举类说明-ChannelName。
__TENPAY__: 商企付
__WECHAT__: 微信支付
__ALIPAY__: 支付宝
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置渠道名称。详见附录-云企付枚举类说明-ChannelName。
__TENPAY__: 商企付
__WECHAT__: 微信支付
__ALIPAY__: 支付宝
                     * @param _channelName 渠道名称。详见附录-云企付枚举类说明-ChannelName。
__TENPAY__: 商企付
__WECHAT__: 微信支付
__ALIPAY__: 支付宝
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
                     * 获取支付方式。详见附录-云企付枚举类说明-PaymentMethod。
__EBANK_PAYMENT__: ebank支付
__OPENBANK_PAYMENT__: openbank支付
                     * @return PaymentMethod 支付方式。详见附录-云企付枚举类说明-PaymentMethod。
__EBANK_PAYMENT__: ebank支付
__OPENBANK_PAYMENT__: openbank支付
                     * 
                     */
                    std::string GetPaymentMethod() const;

                    /**
                     * 设置支付方式。详见附录-云企付枚举类说明-PaymentMethod。
__EBANK_PAYMENT__: ebank支付
__OPENBANK_PAYMENT__: openbank支付
                     * @param _paymentMethod 支付方式。详见附录-云企付枚举类说明-PaymentMethod。
__EBANK_PAYMENT__: ebank支付
__OPENBANK_PAYMENT__: openbank支付
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
                     * 获取社会信用代码。
                     * @return BusinessLicenseNumber 社会信用代码。
                     * 
                     */
                    std::string GetBusinessLicenseNumber() const;

                    /**
                     * 设置社会信用代码。
                     * @param _businessLicenseNumber 社会信用代码。
                     * 
                     */
                    void SetBusinessLicenseNumber(const std::string& _businessLicenseNumber);

                    /**
                     * 判断参数 BusinessLicenseNumber 是否已赋值
                     * @return BusinessLicenseNumber 是否已赋值
                     * 
                     */
                    bool BusinessLicenseNumberHasBeenSet() const;

                    /**
                     * 获取外部子商户名称。
                     * @return OutSubMerchantName 外部子商户名称。
                     * 
                     */
                    std::string GetOutSubMerchantName() const;

                    /**
                     * 设置外部子商户名称。
                     * @param _outSubMerchantName 外部子商户名称。
                     * 
                     */
                    void SetOutSubMerchantName(const std::string& _outSubMerchantName);

                    /**
                     * 判断参数 OutSubMerchantName 是否已赋值
                     * @return OutSubMerchantName 是否已赋值
                     * 
                     */
                    bool OutSubMerchantNameHasBeenSet() const;

                    /**
                     * 获取法人姓名。
                     * @return LegalName 法人姓名。
                     * 
                     */
                    std::string GetLegalName() const;

                    /**
                     * 设置法人姓名。
                     * @param _legalName 法人姓名。
                     * 
                     */
                    void SetLegalName(const std::string& _legalName);

                    /**
                     * 判断参数 LegalName 是否已赋值
                     * @return LegalName 是否已赋值
                     * 
                     */
                    bool LegalNameHasBeenSet() const;

                    /**
                     * 获取外部子商户简称。
                     * @return OutSubMerchantShortName 外部子商户简称。
                     * 
                     */
                    std::string GetOutSubMerchantShortName() const;

                    /**
                     * 设置外部子商户简称。
                     * @param _outSubMerchantShortName 外部子商户简称。
                     * 
                     */
                    void SetOutSubMerchantShortName(const std::string& _outSubMerchantShortName);

                    /**
                     * 判断参数 OutSubMerchantShortName 是否已赋值
                     * @return OutSubMerchantShortName 是否已赋值
                     * 
                     */
                    bool OutSubMerchantShortNameHasBeenSet() const;

                    /**
                     * 获取外部子商户描述。
                     * @return OutSubMerchantDescription 外部子商户描述。
                     * 
                     */
                    std::string GetOutSubMerchantDescription() const;

                    /**
                     * 设置外部子商户描述。
                     * @param _outSubMerchantDescription 外部子商户描述。
                     * 
                     */
                    void SetOutSubMerchantDescription(const std::string& _outSubMerchantDescription);

                    /**
                     * 判断参数 OutSubMerchantDescription 是否已赋值
                     * @return OutSubMerchantDescription 是否已赋值
                     * 
                     */
                    bool OutSubMerchantDescriptionHasBeenSet() const;

                    /**
                     * 获取第三方子商户进件信息，为JSON格式字符串。详情见附录-复杂类型。
                     * @return ExternalSubMerchantRegistrationData 第三方子商户进件信息，为JSON格式字符串。详情见附录-复杂类型。
                     * 
                     */
                    std::string GetExternalSubMerchantRegistrationData() const;

                    /**
                     * 设置第三方子商户进件信息，为JSON格式字符串。详情见附录-复杂类型。
                     * @param _externalSubMerchantRegistrationData 第三方子商户进件信息，为JSON格式字符串。详情见附录-复杂类型。
                     * 
                     */
                    void SetExternalSubMerchantRegistrationData(const std::string& _externalSubMerchantRegistrationData);

                    /**
                     * 判断参数 ExternalSubMerchantRegistrationData 是否已赋值
                     * @return ExternalSubMerchantRegistrationData 是否已赋值
                     * 
                     */
                    bool ExternalSubMerchantRegistrationDataHasBeenSet() const;

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
                     * 外部进件序列号。
                     */
                    std::string m_outRegistrationNo;
                    bool m_outRegistrationNoHasBeenSet;

                    /**
                     * 渠道商户ID。
                     */
                    std::string m_channelMerchantId;
                    bool m_channelMerchantIdHasBeenSet;

                    /**
                     * 外部子商户ID,平台侧商户唯一ID。
                     */
                    std::string m_outSubMerchantId;
                    bool m_outSubMerchantIdHasBeenSet;

                    /**
                     * 渠道名称。详见附录-云企付枚举类说明-ChannelName。
__TENPAY__: 商企付
__WECHAT__: 微信支付
__ALIPAY__: 支付宝
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 支付方式。详见附录-云企付枚举类说明-PaymentMethod。
__EBANK_PAYMENT__: ebank支付
__OPENBANK_PAYMENT__: openbank支付
                     */
                    std::string m_paymentMethod;
                    bool m_paymentMethodHasBeenSet;

                    /**
                     * 社会信用代码。
                     */
                    std::string m_businessLicenseNumber;
                    bool m_businessLicenseNumberHasBeenSet;

                    /**
                     * 外部子商户名称。
                     */
                    std::string m_outSubMerchantName;
                    bool m_outSubMerchantNameHasBeenSet;

                    /**
                     * 法人姓名。
                     */
                    std::string m_legalName;
                    bool m_legalNameHasBeenSet;

                    /**
                     * 外部子商户简称。
                     */
                    std::string m_outSubMerchantShortName;
                    bool m_outSubMerchantShortNameHasBeenSet;

                    /**
                     * 外部子商户描述。
                     */
                    std::string m_outSubMerchantDescription;
                    bool m_outSubMerchantDescriptionHasBeenSet;

                    /**
                     * 第三方子商户进件信息，为JSON格式字符串。详情见附录-复杂类型。
                     */
                    std::string m_externalSubMerchantRegistrationData;
                    bool m_externalSubMerchantRegistrationDataHasBeenSet;

                    /**
                     * 通知地址。
                     */
                    std::string m_notifyUrl;
                    bool m_notifyUrlHasBeenSet;

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

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEOPENBANKEXTERNALSUBMERCHANTREGISTRATIONREQUEST_H_
