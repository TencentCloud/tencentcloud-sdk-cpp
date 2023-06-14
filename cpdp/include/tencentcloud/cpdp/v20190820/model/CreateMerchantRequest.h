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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEMERCHANTREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEMERCHANTREQUEST_H_

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
                * CreateMerchant请求参数结构体
                */
                class CreateMerchantRequest : public AbstractModel
                {
                public:
                    CreateMerchantRequest();
                    ~CreateMerchantRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开票平台ID
                     * @return InvoicePlatformId 开票平台ID
                     * 
                     */
                    int64_t GetInvoicePlatformId() const;

                    /**
                     * 设置开票平台ID
                     * @param _invoicePlatformId 开票平台ID
                     * 
                     */
                    void SetInvoicePlatformId(const int64_t& _invoicePlatformId);

                    /**
                     * 判断参数 InvoicePlatformId 是否已赋值
                     * @return InvoicePlatformId 是否已赋值
                     * 
                     */
                    bool InvoicePlatformIdHasBeenSet() const;

                    /**
                     * 获取企业名称
                     * @return TaxpayerName 企业名称
                     * 
                     */
                    std::string GetTaxpayerName() const;

                    /**
                     * 设置企业名称
                     * @param _taxpayerName 企业名称
                     * 
                     */
                    void SetTaxpayerName(const std::string& _taxpayerName);

                    /**
                     * 判断参数 TaxpayerName 是否已赋值
                     * @return TaxpayerName 是否已赋值
                     * 
                     */
                    bool TaxpayerNameHasBeenSet() const;

                    /**
                     * 获取销方纳税人识别号
                     * @return TaxpayerNum 销方纳税人识别号
                     * 
                     */
                    std::string GetTaxpayerNum() const;

                    /**
                     * 设置销方纳税人识别号
                     * @param _taxpayerNum 销方纳税人识别号
                     * 
                     */
                    void SetTaxpayerNum(const std::string& _taxpayerNum);

                    /**
                     * 判断参数 TaxpayerNum 是否已赋值
                     * @return TaxpayerNum 是否已赋值
                     * 
                     */
                    bool TaxpayerNumHasBeenSet() const;

                    /**
                     * 获取注册企业法定代表人名称
                     * @return LegalPersonName 注册企业法定代表人名称
                     * 
                     */
                    std::string GetLegalPersonName() const;

                    /**
                     * 设置注册企业法定代表人名称
                     * @param _legalPersonName 注册企业法定代表人名称
                     * 
                     */
                    void SetLegalPersonName(const std::string& _legalPersonName);

                    /**
                     * 判断参数 LegalPersonName 是否已赋值
                     * @return LegalPersonName 是否已赋值
                     * 
                     */
                    bool LegalPersonNameHasBeenSet() const;

                    /**
                     * 获取联系人
                     * @return ContactsName 联系人
                     * 
                     */
                    std::string GetContactsName() const;

                    /**
                     * 设置联系人
                     * @param _contactsName 联系人
                     * 
                     */
                    void SetContactsName(const std::string& _contactsName);

                    /**
                     * 判断参数 ContactsName 是否已赋值
                     * @return ContactsName 是否已赋值
                     * 
                     */
                    bool ContactsNameHasBeenSet() const;

                    /**
                     * 获取联系人手机号
                     * @return Phone 联系人手机号
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置联系人手机号
                     * @param _phone 联系人手机号
                     * 
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取不包含省市名称的地址
                     * @return Address 不包含省市名称的地址
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置不包含省市名称的地址
                     * @param _address 不包含省市名称的地址
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取地区编码
                     * @return RegionCode 地区编码
                     * 
                     */
                    int64_t GetRegionCode() const;

                    /**
                     * 设置地区编码
                     * @param _regionCode 地区编码
                     * 
                     */
                    void SetRegionCode(const int64_t& _regionCode);

                    /**
                     * 判断参数 RegionCode 是否已赋值
                     * @return RegionCode 是否已赋值
                     * 
                     */
                    bool RegionCodeHasBeenSet() const;

                    /**
                     * 获取市（地区）名称
                     * @return CityName 市（地区）名称
                     * 
                     */
                    std::string GetCityName() const;

                    /**
                     * 设置市（地区）名称
                     * @param _cityName 市（地区）名称
                     * 
                     */
                    void SetCityName(const std::string& _cityName);

                    /**
                     * 判断参数 CityName 是否已赋值
                     * @return CityName 是否已赋值
                     * 
                     */
                    bool CityNameHasBeenSet() const;

                    /**
                     * 获取开票人
                     * @return Drawer 开票人
                     * 
                     */
                    std::string GetDrawer() const;

                    /**
                     * 设置开票人
                     * @param _drawer 开票人
                     * 
                     */
                    void SetDrawer(const std::string& _drawer);

                    /**
                     * 判断参数 Drawer 是否已赋值
                     * @return Drawer 是否已赋值
                     * 
                     */
                    bool DrawerHasBeenSet() const;

                    /**
                     * 获取税务登记证图片（Base64）字符串，需小于 3M
                     * @return TaxRegistrationCertificate 税务登记证图片（Base64）字符串，需小于 3M
                     * 
                     */
                    std::string GetTaxRegistrationCertificate() const;

                    /**
                     * 设置税务登记证图片（Base64）字符串，需小于 3M
                     * @param _taxRegistrationCertificate 税务登记证图片（Base64）字符串，需小于 3M
                     * 
                     */
                    void SetTaxRegistrationCertificate(const std::string& _taxRegistrationCertificate);

                    /**
                     * 判断参数 TaxRegistrationCertificate 是否已赋值
                     * @return TaxRegistrationCertificate 是否已赋值
                     * 
                     */
                    bool TaxRegistrationCertificateHasBeenSet() const;

                    /**
                     * 获取联系人邮箱地址
                     * @return Email 联系人邮箱地址
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置联系人邮箱地址
                     * @param _email 联系人邮箱地址
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取企业电话
                     * @return BusinessMobile 企业电话
                     * 
                     */
                    std::string GetBusinessMobile() const;

                    /**
                     * 设置企业电话
                     * @param _businessMobile 企业电话
                     * 
                     */
                    void SetBusinessMobile(const std::string& _businessMobile);

                    /**
                     * 判断参数 BusinessMobile 是否已赋值
                     * @return BusinessMobile 是否已赋值
                     * 
                     */
                    bool BusinessMobileHasBeenSet() const;

                    /**
                     * 获取银行名称
                     * @return BankName 银行名称
                     * 
                     */
                    std::string GetBankName() const;

                    /**
                     * 设置银行名称
                     * @param _bankName 银行名称
                     * 
                     */
                    void SetBankName(const std::string& _bankName);

                    /**
                     * 判断参数 BankName 是否已赋值
                     * @return BankName 是否已赋值
                     * 
                     */
                    bool BankNameHasBeenSet() const;

                    /**
                     * 获取银行账号
                     * @return BankAccount 银行账号
                     * 
                     */
                    std::string GetBankAccount() const;

                    /**
                     * 设置银行账号
                     * @param _bankAccount 银行账号
                     * 
                     */
                    void SetBankAccount(const std::string& _bankAccount);

                    /**
                     * 判断参数 BankAccount 是否已赋值
                     * @return BankAccount 是否已赋值
                     * 
                     */
                    bool BankAccountHasBeenSet() const;

                    /**
                     * 获取复核人
                     * @return Reviewer 复核人
                     * 
                     */
                    std::string GetReviewer() const;

                    /**
                     * 设置复核人
                     * @param _reviewer 复核人
                     * 
                     */
                    void SetReviewer(const std::string& _reviewer);

                    /**
                     * 判断参数 Reviewer 是否已赋值
                     * @return Reviewer 是否已赋值
                     * 
                     */
                    bool ReviewerHasBeenSet() const;

                    /**
                     * 获取收款人
                     * @return Payee 收款人
                     * 
                     */
                    std::string GetPayee() const;

                    /**
                     * 设置收款人
                     * @param _payee 收款人
                     * 
                     */
                    void SetPayee(const std::string& _payee);

                    /**
                     * 判断参数 Payee 是否已赋值
                     * @return Payee 是否已赋值
                     * 
                     */
                    bool PayeeHasBeenSet() const;

                    /**
                     * 获取注册邀请码
                     * @return RegisterCode 注册邀请码
                     * 
                     */
                    std::string GetRegisterCode() const;

                    /**
                     * 设置注册邀请码
                     * @param _registerCode 注册邀请码
                     * 
                     */
                    void SetRegisterCode(const std::string& _registerCode);

                    /**
                     * 判断参数 RegisterCode 是否已赋值
                     * @return RegisterCode 是否已赋值
                     * 
                     */
                    bool RegisterCodeHasBeenSet() const;

                    /**
                     * 获取不填默认为1，有效状态
0：表示无效；
1:表示有效；
2:表示禁止开蓝票；
3:表示禁止冲红。
                     * @return State 不填默认为1，有效状态
0：表示无效；
1:表示有效；
2:表示禁止开蓝票；
3:表示禁止冲红。
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置不填默认为1，有效状态
0：表示无效；
1:表示有效；
2:表示禁止开蓝票；
3:表示禁止冲红。
                     * @param _state 不填默认为1，有效状态
0：表示无效；
1:表示有效；
2:表示禁止开蓝票；
3:表示禁止冲红。
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取接收推送的消息地址
                     * @return CallbackUrl 接收推送的消息地址
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置接收推送的消息地址
                     * @param _callbackUrl 接收推送的消息地址
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
                     * 获取接入环境。沙箱环境填 sandbox。
                     * @return Profile 接入环境。沙箱环境填 sandbox。
                     * 
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置接入环境。沙箱环境填 sandbox。
                     * @param _profile 接入环境。沙箱环境填 sandbox。
                     * 
                     */
                    void SetProfile(const std::string& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                private:

                    /**
                     * 开票平台ID
                     */
                    int64_t m_invoicePlatformId;
                    bool m_invoicePlatformIdHasBeenSet;

                    /**
                     * 企业名称
                     */
                    std::string m_taxpayerName;
                    bool m_taxpayerNameHasBeenSet;

                    /**
                     * 销方纳税人识别号
                     */
                    std::string m_taxpayerNum;
                    bool m_taxpayerNumHasBeenSet;

                    /**
                     * 注册企业法定代表人名称
                     */
                    std::string m_legalPersonName;
                    bool m_legalPersonNameHasBeenSet;

                    /**
                     * 联系人
                     */
                    std::string m_contactsName;
                    bool m_contactsNameHasBeenSet;

                    /**
                     * 联系人手机号
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 不包含省市名称的地址
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 地区编码
                     */
                    int64_t m_regionCode;
                    bool m_regionCodeHasBeenSet;

                    /**
                     * 市（地区）名称
                     */
                    std::string m_cityName;
                    bool m_cityNameHasBeenSet;

                    /**
                     * 开票人
                     */
                    std::string m_drawer;
                    bool m_drawerHasBeenSet;

                    /**
                     * 税务登记证图片（Base64）字符串，需小于 3M
                     */
                    std::string m_taxRegistrationCertificate;
                    bool m_taxRegistrationCertificateHasBeenSet;

                    /**
                     * 联系人邮箱地址
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 企业电话
                     */
                    std::string m_businessMobile;
                    bool m_businessMobileHasBeenSet;

                    /**
                     * 银行名称
                     */
                    std::string m_bankName;
                    bool m_bankNameHasBeenSet;

                    /**
                     * 银行账号
                     */
                    std::string m_bankAccount;
                    bool m_bankAccountHasBeenSet;

                    /**
                     * 复核人
                     */
                    std::string m_reviewer;
                    bool m_reviewerHasBeenSet;

                    /**
                     * 收款人
                     */
                    std::string m_payee;
                    bool m_payeeHasBeenSet;

                    /**
                     * 注册邀请码
                     */
                    std::string m_registerCode;
                    bool m_registerCodeHasBeenSet;

                    /**
                     * 不填默认为1，有效状态
0：表示无效；
1:表示有效；
2:表示禁止开蓝票；
3:表示禁止冲红。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 接收推送的消息地址
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 接入环境。沙箱环境填 sandbox。
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEMERCHANTREQUEST_H_
