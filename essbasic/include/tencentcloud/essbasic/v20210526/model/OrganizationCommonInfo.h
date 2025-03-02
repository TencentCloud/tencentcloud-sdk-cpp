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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_ORGANIZATIONCOMMONINFO_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_ORGANIZATIONCOMMONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 企业认证信息参数， 需要保证这些参数跟营业执照中的信息一致。
                */
                class OrganizationCommonInfo : public AbstractModel
                {
                public:
                    OrganizationCommonInfo();
                    ~OrganizationCommonInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取组织机构名称。
请确认该名称与企业营业执照中注册的名称一致。
如果名称中包含英文括号()，请使用中文括号（）代替。
                     * @return OrganizationName 组织机构名称。
请确认该名称与企业营业执照中注册的名称一致。
如果名称中包含英文括号()，请使用中文括号（）代替。
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置组织机构名称。
请确认该名称与企业营业执照中注册的名称一致。
如果名称中包含英文括号()，请使用中文括号（）代替。
                     * @param _organizationName 组织机构名称。
请确认该名称与企业营业执照中注册的名称一致。
如果名称中包含英文括号()，请使用中文括号（）代替。
                     * 
                     */
                    void SetOrganizationName(const std::string& _organizationName);

                    /**
                     * 判断参数 OrganizationName 是否已赋值
                     * @return OrganizationName 是否已赋值
                     * 
                     */
                    bool OrganizationNameHasBeenSet() const;

                    /**
                     * 获取组织机构企业统一社会信用代码。
请确认该企业统一社会信用代码与企业营业执照中注册的统一社会信用代码一致。
                     * @return UniformSocialCreditCode 组织机构企业统一社会信用代码。
请确认该企业统一社会信用代码与企业营业执照中注册的统一社会信用代码一致。
                     * 
                     */
                    std::string GetUniformSocialCreditCode() const;

                    /**
                     * 设置组织机构企业统一社会信用代码。
请确认该企业统一社会信用代码与企业营业执照中注册的统一社会信用代码一致。
                     * @param _uniformSocialCreditCode 组织机构企业统一社会信用代码。
请确认该企业统一社会信用代码与企业营业执照中注册的统一社会信用代码一致。
                     * 
                     */
                    void SetUniformSocialCreditCode(const std::string& _uniformSocialCreditCode);

                    /**
                     * 判断参数 UniformSocialCreditCode 是否已赋值
                     * @return UniformSocialCreditCode 是否已赋值
                     * 
                     */
                    bool UniformSocialCreditCodeHasBeenSet() const;

                    /**
                     * 获取组织机构法人的姓名。
请确认该企业统一社会信用代码与企业营业执照中注册的法人姓名一致。
                     * @return LegalName 组织机构法人的姓名。
请确认该企业统一社会信用代码与企业营业执照中注册的法人姓名一致。
                     * 
                     */
                    std::string GetLegalName() const;

                    /**
                     * 设置组织机构法人的姓名。
请确认该企业统一社会信用代码与企业营业执照中注册的法人姓名一致。
                     * @param _legalName 组织机构法人的姓名。
请确认该企业统一社会信用代码与企业营业执照中注册的法人姓名一致。
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
                     * 获取组织机构法人的证件类型
                     * @return LegalIdCardType 组织机构法人的证件类型
                     * 
                     */
                    std::string GetLegalIdCardType() const;

                    /**
                     * 设置组织机构法人的证件类型
                     * @param _legalIdCardType 组织机构法人的证件类型
                     * 
                     */
                    void SetLegalIdCardType(const std::string& _legalIdCardType);

                    /**
                     * 判断参数 LegalIdCardType 是否已赋值
                     * @return LegalIdCardType 是否已赋值
                     * 
                     */
                    bool LegalIdCardTypeHasBeenSet() const;

                    /**
                     * 获取组织机构法人的证件号码
                     * @return LegalIdCardNumber 组织机构法人的证件号码
                     * 
                     */
                    std::string GetLegalIdCardNumber() const;

                    /**
                     * 设置组织机构法人的证件号码
                     * @param _legalIdCardNumber 组织机构法人的证件号码
                     * 
                     */
                    void SetLegalIdCardNumber(const std::string& _legalIdCardNumber);

                    /**
                     * 判断参数 LegalIdCardNumber 是否已赋值
                     * @return LegalIdCardNumber 是否已赋值
                     * 
                     */
                    bool LegalIdCardNumberHasBeenSet() const;

                    /**
                     * 获取组织机构超管姓名。

                     * @return AdminName 组织机构超管姓名。

                     * 
                     */
                    std::string GetAdminName() const;

                    /**
                     * 设置组织机构超管姓名。

                     * @param _adminName 组织机构超管姓名。

                     * 
                     */
                    void SetAdminName(const std::string& _adminName);

                    /**
                     * 判断参数 AdminName 是否已赋值
                     * @return AdminName 是否已赋值
                     * 
                     */
                    bool AdminNameHasBeenSet() const;

                    /**
                     * 获取组织机构超管手机号。

                     * @return AdminMobile 组织机构超管手机号。

                     * 
                     */
                    std::string GetAdminMobile() const;

                    /**
                     * 设置组织机构超管手机号。

                     * @param _adminMobile 组织机构超管手机号。

                     * 
                     */
                    void SetAdminMobile(const std::string& _adminMobile);

                    /**
                     * 判断参数 AdminMobile 是否已赋值
                     * @return AdminMobile 是否已赋值
                     * 
                     */
                    bool AdminMobileHasBeenSet() const;

                    /**
                     * 获取组织机构超管证件类型

                     * @return AdminIdCardType 组织机构超管证件类型

                     * 
                     */
                    std::string GetAdminIdCardType() const;

                    /**
                     * 设置组织机构超管证件类型

                     * @param _adminIdCardType 组织机构超管证件类型

                     * 
                     */
                    void SetAdminIdCardType(const std::string& _adminIdCardType);

                    /**
                     * 判断参数 AdminIdCardType 是否已赋值
                     * @return AdminIdCardType 是否已赋值
                     * 
                     */
                    bool AdminIdCardTypeHasBeenSet() const;

                    /**
                     * 获取组织机构超管证件号码

                     * @return AdminIdCardNumber 组织机构超管证件号码

                     * 
                     */
                    std::string GetAdminIdCardNumber() const;

                    /**
                     * 设置组织机构超管证件号码

                     * @param _adminIdCardNumber 组织机构超管证件号码

                     * 
                     */
                    void SetAdminIdCardNumber(const std::string& _adminIdCardNumber);

                    /**
                     * 判断参数 AdminIdCardNumber 是否已赋值
                     * @return AdminIdCardNumber 是否已赋值
                     * 
                     */
                    bool AdminIdCardNumberHasBeenSet() const;

                    /**
                     * 获取原超管姓名
                     * @return OldAdminName 原超管姓名
                     * 
                     */
                    std::string GetOldAdminName() const;

                    /**
                     * 设置原超管姓名
                     * @param _oldAdminName 原超管姓名
                     * 
                     */
                    void SetOldAdminName(const std::string& _oldAdminName);

                    /**
                     * 判断参数 OldAdminName 是否已赋值
                     * @return OldAdminName 是否已赋值
                     * 
                     */
                    bool OldAdminNameHasBeenSet() const;

                    /**
                     * 获取原超管手机号
                     * @return OldAdminMobile 原超管手机号
                     * 
                     */
                    std::string GetOldAdminMobile() const;

                    /**
                     * 设置原超管手机号
                     * @param _oldAdminMobile 原超管手机号
                     * 
                     */
                    void SetOldAdminMobile(const std::string& _oldAdminMobile);

                    /**
                     * 判断参数 OldAdminMobile 是否已赋值
                     * @return OldAdminMobile 是否已赋值
                     * 
                     */
                    bool OldAdminMobileHasBeenSet() const;

                    /**
                     * 获取原超管证件类型
                     * @return OldAdminIdCardType 原超管证件类型
                     * 
                     */
                    std::string GetOldAdminIdCardType() const;

                    /**
                     * 设置原超管证件类型
                     * @param _oldAdminIdCardType 原超管证件类型
                     * 
                     */
                    void SetOldAdminIdCardType(const std::string& _oldAdminIdCardType);

                    /**
                     * 判断参数 OldAdminIdCardType 是否已赋值
                     * @return OldAdminIdCardType 是否已赋值
                     * 
                     */
                    bool OldAdminIdCardTypeHasBeenSet() const;

                    /**
                     * 获取原超管证件号码
                     * @return OldAdminIdCardNumber 原超管证件号码
                     * 
                     */
                    std::string GetOldAdminIdCardNumber() const;

                    /**
                     * 设置原超管证件号码
                     * @param _oldAdminIdCardNumber 原超管证件号码
                     * 
                     */
                    void SetOldAdminIdCardNumber(const std::string& _oldAdminIdCardNumber);

                    /**
                     * 判断参数 OldAdminIdCardNumber 是否已赋值
                     * @return OldAdminIdCardNumber 是否已赋值
                     * 
                     */
                    bool OldAdminIdCardNumberHasBeenSet() const;

                private:

                    /**
                     * 组织机构名称。
请确认该名称与企业营业执照中注册的名称一致。
如果名称中包含英文括号()，请使用中文括号（）代替。
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * 组织机构企业统一社会信用代码。
请确认该企业统一社会信用代码与企业营业执照中注册的统一社会信用代码一致。
                     */
                    std::string m_uniformSocialCreditCode;
                    bool m_uniformSocialCreditCodeHasBeenSet;

                    /**
                     * 组织机构法人的姓名。
请确认该企业统一社会信用代码与企业营业执照中注册的法人姓名一致。
                     */
                    std::string m_legalName;
                    bool m_legalNameHasBeenSet;

                    /**
                     * 组织机构法人的证件类型
                     */
                    std::string m_legalIdCardType;
                    bool m_legalIdCardTypeHasBeenSet;

                    /**
                     * 组织机构法人的证件号码
                     */
                    std::string m_legalIdCardNumber;
                    bool m_legalIdCardNumberHasBeenSet;

                    /**
                     * 组织机构超管姓名。

                     */
                    std::string m_adminName;
                    bool m_adminNameHasBeenSet;

                    /**
                     * 组织机构超管手机号。

                     */
                    std::string m_adminMobile;
                    bool m_adminMobileHasBeenSet;

                    /**
                     * 组织机构超管证件类型

                     */
                    std::string m_adminIdCardType;
                    bool m_adminIdCardTypeHasBeenSet;

                    /**
                     * 组织机构超管证件号码

                     */
                    std::string m_adminIdCardNumber;
                    bool m_adminIdCardNumberHasBeenSet;

                    /**
                     * 原超管姓名
                     */
                    std::string m_oldAdminName;
                    bool m_oldAdminNameHasBeenSet;

                    /**
                     * 原超管手机号
                     */
                    std::string m_oldAdminMobile;
                    bool m_oldAdminMobileHasBeenSet;

                    /**
                     * 原超管证件类型
                     */
                    std::string m_oldAdminIdCardType;
                    bool m_oldAdminIdCardTypeHasBeenSet;

                    /**
                     * 原超管证件号码
                     */
                    std::string m_oldAdminIdCardNumber;
                    bool m_oldAdminIdCardNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_ORGANIZATIONCOMMONINFO_H_
