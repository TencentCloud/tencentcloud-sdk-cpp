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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_OUTSUBMERCHANTEXTENSIONINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_OUTSUBMERCHANTEXTENSIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 外部子商户扩展信息
                */
                class OutSubMerchantExtensionInfo : public AbstractModel
                {
                public:
                    OutSubMerchantExtensionInfo();
                    ~OutSubMerchantExtensionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地区代码，国标码
HELIPAY渠道必传
                     * @return RegionCode 地区代码，国标码
HELIPAY渠道必传
                     * 
                     */
                    std::string GetRegionCode() const;

                    /**
                     * 设置地区代码，国标码
HELIPAY渠道必传
                     * @param _regionCode 地区代码，国标码
HELIPAY渠道必传
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
                     * 获取注册地址
                     * @return RegisterAddress 注册地址
                     * 
                     */
                    std::string GetRegisterAddress() const;

                    /**
                     * 设置注册地址
                     * @param _registerAddress 注册地址
                     * 
                     */
                    void SetRegisterAddress(const std::string& _registerAddress);

                    /**
                     * 判断参数 RegisterAddress 是否已赋值
                     * @return RegisterAddress 是否已赋值
                     * 
                     */
                    bool RegisterAddressHasBeenSet() const;

                    /**
                     * 获取通讯地址
HELIPAY渠道必传
                     * @return MailingAddress 通讯地址
HELIPAY渠道必传
                     * 
                     */
                    std::string GetMailingAddress() const;

                    /**
                     * 设置通讯地址
HELIPAY渠道必传
                     * @param _mailingAddress 通讯地址
HELIPAY渠道必传
                     * 
                     */
                    void SetMailingAddress(const std::string& _mailingAddress);

                    /**
                     * 判断参数 MailingAddress 是否已赋值
                     * @return MailingAddress 是否已赋值
                     * 
                     */
                    bool MailingAddressHasBeenSet() const;

                    /**
                     * 获取营业地址/经营地址
                     * @return BusinessAddress 营业地址/经营地址
                     * 
                     */
                    std::string GetBusinessAddress() const;

                    /**
                     * 设置营业地址/经营地址
                     * @param _businessAddress 营业地址/经营地址
                     * 
                     */
                    void SetBusinessAddress(const std::string& _businessAddress);

                    /**
                     * 判断参数 BusinessAddress 是否已赋值
                     * @return BusinessAddress 是否已赋值
                     * 
                     */
                    bool BusinessAddressHasBeenSet() const;

                    /**
                     * 获取客服电话
                     * @return ServicePhone 客服电话
                     * 
                     */
                    std::string GetServicePhone() const;

                    /**
                     * 设置客服电话
                     * @param _servicePhone 客服电话
                     * 
                     */
                    void SetServicePhone(const std::string& _servicePhone);

                    /**
                     * 判断参数 ServicePhone 是否已赋值
                     * @return ServicePhone 是否已赋值
                     * 
                     */
                    bool ServicePhoneHasBeenSet() const;

                    /**
                     * 获取网站url
                     * @return WebSiteUrl 网站url
                     * 
                     */
                    std::string GetWebSiteUrl() const;

                    /**
                     * 设置网站url
                     * @param _webSiteUrl 网站url
                     * 
                     */
                    void SetWebSiteUrl(const std::string& _webSiteUrl);

                    /**
                     * 判断参数 WebSiteUrl 是否已赋值
                     * @return WebSiteUrl 是否已赋值
                     * 
                     */
                    bool WebSiteUrlHasBeenSet() const;

                    /**
                     * 获取邮箱地址
                     * @return EmailAddress 邮箱地址
                     * 
                     */
                    std::string GetEmailAddress() const;

                    /**
                     * 设置邮箱地址
                     * @param _emailAddress 邮箱地址
                     * 
                     */
                    void SetEmailAddress(const std::string& _emailAddress);

                    /**
                     * 判断参数 EmailAddress 是否已赋值
                     * @return EmailAddress 是否已赋值
                     * 
                     */
                    bool EmailAddressHasBeenSet() const;

                private:

                    /**
                     * 地区代码，国标码
HELIPAY渠道必传
                     */
                    std::string m_regionCode;
                    bool m_regionCodeHasBeenSet;

                    /**
                     * 注册地址
                     */
                    std::string m_registerAddress;
                    bool m_registerAddressHasBeenSet;

                    /**
                     * 通讯地址
HELIPAY渠道必传
                     */
                    std::string m_mailingAddress;
                    bool m_mailingAddressHasBeenSet;

                    /**
                     * 营业地址/经营地址
                     */
                    std::string m_businessAddress;
                    bool m_businessAddressHasBeenSet;

                    /**
                     * 客服电话
                     */
                    std::string m_servicePhone;
                    bool m_servicePhoneHasBeenSet;

                    /**
                     * 网站url
                     */
                    std::string m_webSiteUrl;
                    bool m_webSiteUrlHasBeenSet;

                    /**
                     * 邮箱地址
                     */
                    std::string m_emailAddress;
                    bool m_emailAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_OUTSUBMERCHANTEXTENSIONINFO_H_
