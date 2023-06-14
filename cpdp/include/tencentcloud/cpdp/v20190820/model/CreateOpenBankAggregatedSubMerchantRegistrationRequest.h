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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEOPENBANKAGGREGATEDSUBMERCHANTREGISTRATIONREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEOPENBANKAGGREGATEDSUBMERCHANTREGISTRATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/LegalPersonInfo.h>
#include <tencentcloud/cpdp/v20190820/model/BusinessLicenseInfo.h>
#include <tencentcloud/cpdp/v20190820/model/NaturalPersonInfo.h>
#include <tencentcloud/cpdp/v20190820/model/SettleInfo.h>
#include <tencentcloud/cpdp/v20190820/model/OutSubMerchantExtensionInfo.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * CreateOpenBankAggregatedSubMerchantRegistration请求参数结构体
                */
                class CreateOpenBankAggregatedSubMerchantRegistrationRequest : public AbstractModel
                {
                public:
                    CreateOpenBankAggregatedSubMerchantRegistrationRequest();
                    ~CreateOpenBankAggregatedSubMerchantRegistrationRequest() = default;
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
                     * 获取外部子商户ID。
                     * @return OutSubMerchantId 外部子商户ID。
                     * 
                     */
                    std::string GetOutSubMerchantId() const;

                    /**
                     * 设置外部子商户ID。
                     * @param _outSubMerchantId 外部子商户ID。
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
TENPAY: 商企付
WECHAT: 微信支付
ALIPAY: 支付宝
HELIPAY:合利宝
                     * @return ChannelName 渠道名称。详见附录-云企付枚举类说明-ChannelName。
TENPAY: 商企付
WECHAT: 微信支付
ALIPAY: 支付宝
HELIPAY:合利宝
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置渠道名称。详见附录-云企付枚举类说明-ChannelName。
TENPAY: 商企付
WECHAT: 微信支付
ALIPAY: 支付宝
HELIPAY:合利宝
                     * @param _channelName 渠道名称。详见附录-云企付枚举类说明-ChannelName。
TENPAY: 商企付
WECHAT: 微信支付
ALIPAY: 支付宝
HELIPAY:合利宝
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
                     * 获取外部子商户类型。
ENTERPRISE：企业商户 
INSTITUTION：事业单位商户 
INDIVIDUALBISS：个体工商户 
PERSON：个人商户(小微商户) 
SUBJECT_TYPE_OTHERS：其他组织
                     * @return OutSubMerchantType 外部子商户类型。
ENTERPRISE：企业商户 
INSTITUTION：事业单位商户 
INDIVIDUALBISS：个体工商户 
PERSON：个人商户(小微商户) 
SUBJECT_TYPE_OTHERS：其他组织
                     * 
                     */
                    std::string GetOutSubMerchantType() const;

                    /**
                     * 设置外部子商户类型。
ENTERPRISE：企业商户 
INSTITUTION：事业单位商户 
INDIVIDUALBISS：个体工商户 
PERSON：个人商户(小微商户) 
SUBJECT_TYPE_OTHERS：其他组织
                     * @param _outSubMerchantType 外部子商户类型。
ENTERPRISE：企业商户 
INSTITUTION：事业单位商户 
INDIVIDUALBISS：个体工商户 
PERSON：个人商户(小微商户) 
SUBJECT_TYPE_OTHERS：其他组织
                     * 
                     */
                    void SetOutSubMerchantType(const std::string& _outSubMerchantType);

                    /**
                     * 判断参数 OutSubMerchantType 是否已赋值
                     * @return OutSubMerchantType 是否已赋值
                     * 
                     */
                    bool OutSubMerchantTypeHasBeenSet() const;

                    /**
                     * 获取外部子商户名称。
HELIPAY渠道(长度不能小于5大于150)。
                     * @return OutSubMerchantName 外部子商户名称。
HELIPAY渠道(长度不能小于5大于150)。
                     * 
                     */
                    std::string GetOutSubMerchantName() const;

                    /**
                     * 设置外部子商户名称。
HELIPAY渠道(长度不能小于5大于150)。
                     * @param _outSubMerchantName 外部子商户名称。
HELIPAY渠道(长度不能小于5大于150)。
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
                     * 获取商户法人代表信息。
                     * @return LegalPersonInfo 商户法人代表信息。
                     * 
                     */
                    LegalPersonInfo GetLegalPersonInfo() const;

                    /**
                     * 设置商户法人代表信息。
                     * @param _legalPersonInfo 商户法人代表信息。
                     * 
                     */
                    void SetLegalPersonInfo(const LegalPersonInfo& _legalPersonInfo);

                    /**
                     * 判断参数 LegalPersonInfo 是否已赋值
                     * @return LegalPersonInfo 是否已赋值
                     * 
                     */
                    bool LegalPersonInfoHasBeenSet() const;

                    /**
                     * 获取营业证件信息。
                     * @return BusinessLicenseInfo 营业证件信息。
                     * 
                     */
                    BusinessLicenseInfo GetBusinessLicenseInfo() const;

                    /**
                     * 设置营业证件信息。
                     * @param _businessLicenseInfo 营业证件信息。
                     * 
                     */
                    void SetBusinessLicenseInfo(const BusinessLicenseInfo& _businessLicenseInfo);

                    /**
                     * 判断参数 BusinessLicenseInfo 是否已赋值
                     * @return BusinessLicenseInfo 是否已赋值
                     * 
                     */
                    bool BusinessLicenseInfoHasBeenSet() const;

                    /**
                     * 获取支付渠道子商户进件信息。
json字符串，详情见附录-复杂类型-InterConnectionSubMerchantData。
                     * @return InterConnectionSubMerchantData 支付渠道子商户进件信息。
json字符串，详情见附录-复杂类型-InterConnectionSubMerchantData。
                     * 
                     */
                    std::string GetInterConnectionSubMerchantData() const;

                    /**
                     * 设置支付渠道子商户进件信息。
json字符串，详情见附录-复杂类型-InterConnectionSubMerchantData。
                     * @param _interConnectionSubMerchantData 支付渠道子商户进件信息。
json字符串，详情见附录-复杂类型-InterConnectionSubMerchantData。
                     * 
                     */
                    void SetInterConnectionSubMerchantData(const std::string& _interConnectionSubMerchantData);

                    /**
                     * 判断参数 InterConnectionSubMerchantData 是否已赋值
                     * @return InterConnectionSubMerchantData 是否已赋值
                     * 
                     */
                    bool InterConnectionSubMerchantDataHasBeenSet() const;

                    /**
                     * 获取支付方式。详见附录-云企付枚举类说明-PaymentMethod。
合利宝渠道不需要传。
                     * @return PaymentMethod 支付方式。详见附录-云企付枚举类说明-PaymentMethod。
合利宝渠道不需要传。
                     * 
                     */
                    std::string GetPaymentMethod() const;

                    /**
                     * 设置支付方式。详见附录-云企付枚举类说明-PaymentMethod。
合利宝渠道不需要传。
                     * @param _paymentMethod 支付方式。详见附录-云企付枚举类说明-PaymentMethod。
合利宝渠道不需要传。
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
                     * 获取外部子商户简称。
HELIPAY渠道必传(长度不能小于2大于20)。
                     * @return OutSubMerchantShortName 外部子商户简称。
HELIPAY渠道必传(长度不能小于2大于20)。
                     * 
                     */
                    std::string GetOutSubMerchantShortName() const;

                    /**
                     * 设置外部子商户简称。
HELIPAY渠道必传(长度不能小于2大于20)。
                     * @param _outSubMerchantShortName 外部子商户简称。
HELIPAY渠道必传(长度不能小于2大于20)。
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
                     * 获取相关自然人信息列表。
HELIPAY渠道必传业务联系人。
                     * @return NaturalPersonList 相关自然人信息列表。
HELIPAY渠道必传业务联系人。
                     * 
                     */
                    std::vector<NaturalPersonInfo> GetNaturalPersonList() const;

                    /**
                     * 设置相关自然人信息列表。
HELIPAY渠道必传业务联系人。
                     * @param _naturalPersonList 相关自然人信息列表。
HELIPAY渠道必传业务联系人。
                     * 
                     */
                    void SetNaturalPersonList(const std::vector<NaturalPersonInfo>& _naturalPersonList);

                    /**
                     * 判断参数 NaturalPersonList 是否已赋值
                     * @return NaturalPersonList 是否已赋值
                     * 
                     */
                    bool NaturalPersonListHasBeenSet() const;

                    /**
                     * 获取商户结算信息。
HELIPAY渠道必传。
                     * @return SettleInfo 商户结算信息。
HELIPAY渠道必传。
                     * 
                     */
                    SettleInfo GetSettleInfo() const;

                    /**
                     * 设置商户结算信息。
HELIPAY渠道必传。
                     * @param _settleInfo 商户结算信息。
HELIPAY渠道必传。
                     * 
                     */
                    void SetSettleInfo(const SettleInfo& _settleInfo);

                    /**
                     * 判断参数 SettleInfo 是否已赋值
                     * @return SettleInfo 是否已赋值
                     * 
                     */
                    bool SettleInfoHasBeenSet() const;

                    /**
                     * 获取外部子商户其他公用扩展信息。
HELIPAY渠道必传。
                     * @return OutSubMerchantExtensionInfo 外部子商户其他公用扩展信息。
HELIPAY渠道必传。
                     * 
                     */
                    OutSubMerchantExtensionInfo GetOutSubMerchantExtensionInfo() const;

                    /**
                     * 设置外部子商户其他公用扩展信息。
HELIPAY渠道必传。
                     * @param _outSubMerchantExtensionInfo 外部子商户其他公用扩展信息。
HELIPAY渠道必传。
                     * 
                     */
                    void SetOutSubMerchantExtensionInfo(const OutSubMerchantExtensionInfo& _outSubMerchantExtensionInfo);

                    /**
                     * 判断参数 OutSubMerchantExtensionInfo 是否已赋值
                     * @return OutSubMerchantExtensionInfo 是否已赋值
                     * 
                     */
                    bool OutSubMerchantExtensionInfoHasBeenSet() const;

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
                     * 外部子商户ID。
                     */
                    std::string m_outSubMerchantId;
                    bool m_outSubMerchantIdHasBeenSet;

                    /**
                     * 渠道名称。详见附录-云企付枚举类说明-ChannelName。
TENPAY: 商企付
WECHAT: 微信支付
ALIPAY: 支付宝
HELIPAY:合利宝
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 外部子商户类型。
ENTERPRISE：企业商户 
INSTITUTION：事业单位商户 
INDIVIDUALBISS：个体工商户 
PERSON：个人商户(小微商户) 
SUBJECT_TYPE_OTHERS：其他组织
                     */
                    std::string m_outSubMerchantType;
                    bool m_outSubMerchantTypeHasBeenSet;

                    /**
                     * 外部子商户名称。
HELIPAY渠道(长度不能小于5大于150)。
                     */
                    std::string m_outSubMerchantName;
                    bool m_outSubMerchantNameHasBeenSet;

                    /**
                     * 商户法人代表信息。
                     */
                    LegalPersonInfo m_legalPersonInfo;
                    bool m_legalPersonInfoHasBeenSet;

                    /**
                     * 营业证件信息。
                     */
                    BusinessLicenseInfo m_businessLicenseInfo;
                    bool m_businessLicenseInfoHasBeenSet;

                    /**
                     * 支付渠道子商户进件信息。
json字符串，详情见附录-复杂类型-InterConnectionSubMerchantData。
                     */
                    std::string m_interConnectionSubMerchantData;
                    bool m_interConnectionSubMerchantDataHasBeenSet;

                    /**
                     * 支付方式。详见附录-云企付枚举类说明-PaymentMethod。
合利宝渠道不需要传。
                     */
                    std::string m_paymentMethod;
                    bool m_paymentMethodHasBeenSet;

                    /**
                     * 外部子商户简称。
HELIPAY渠道必传(长度不能小于2大于20)。
                     */
                    std::string m_outSubMerchantShortName;
                    bool m_outSubMerchantShortNameHasBeenSet;

                    /**
                     * 外部子商户描述。
                     */
                    std::string m_outSubMerchantDescription;
                    bool m_outSubMerchantDescriptionHasBeenSet;

                    /**
                     * 通知地址。
                     */
                    std::string m_notifyUrl;
                    bool m_notifyUrlHasBeenSet;

                    /**
                     * 相关自然人信息列表。
HELIPAY渠道必传业务联系人。
                     */
                    std::vector<NaturalPersonInfo> m_naturalPersonList;
                    bool m_naturalPersonListHasBeenSet;

                    /**
                     * 商户结算信息。
HELIPAY渠道必传。
                     */
                    SettleInfo m_settleInfo;
                    bool m_settleInfoHasBeenSet;

                    /**
                     * 外部子商户其他公用扩展信息。
HELIPAY渠道必传。
                     */
                    OutSubMerchantExtensionInfo m_outSubMerchantExtensionInfo;
                    bool m_outSubMerchantExtensionInfoHasBeenSet;

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

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEOPENBANKAGGREGATEDSUBMERCHANTREGISTRATIONREQUEST_H_
