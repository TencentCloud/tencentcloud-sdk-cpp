/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
                     * 获取<p>组织机构名称。<br>请确认该名称与企业营业执照中注册的名称一致。<br>如果名称中包含英文括号()，请使用中文括号（）代替。</p>
                     * @return OrganizationName <p>组织机构名称。<br>请确认该名称与企业营业执照中注册的名称一致。<br>如果名称中包含英文括号()，请使用中文括号（）代替。</p>
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置<p>组织机构名称。<br>请确认该名称与企业营业执照中注册的名称一致。<br>如果名称中包含英文括号()，请使用中文括号（）代替。</p>
                     * @param _organizationName <p>组织机构名称。<br>请确认该名称与企业营业执照中注册的名称一致。<br>如果名称中包含英文括号()，请使用中文括号（）代替。</p>
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
                     * 获取<p>组织机构企业统一社会信用代码。<br>请确认该企业统一社会信用代码与企业营业执照中注册的统一社会信用代码一致。</p>
                     * @return UniformSocialCreditCode <p>组织机构企业统一社会信用代码。<br>请确认该企业统一社会信用代码与企业营业执照中注册的统一社会信用代码一致。</p>
                     * 
                     */
                    std::string GetUniformSocialCreditCode() const;

                    /**
                     * 设置<p>组织机构企业统一社会信用代码。<br>请确认该企业统一社会信用代码与企业营业执照中注册的统一社会信用代码一致。</p>
                     * @param _uniformSocialCreditCode <p>组织机构企业统一社会信用代码。<br>请确认该企业统一社会信用代码与企业营业执照中注册的统一社会信用代码一致。</p>
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
                     * 获取<p>组织机构法人的姓名。<br>请确认该企业统一社会信用代码与企业营业执照中注册的法人姓名一致。</p>
                     * @return LegalName <p>组织机构法人的姓名。<br>请确认该企业统一社会信用代码与企业营业执照中注册的法人姓名一致。</p>
                     * 
                     */
                    std::string GetLegalName() const;

                    /**
                     * 设置<p>组织机构法人的姓名。<br>请确认该企业统一社会信用代码与企业营业执照中注册的法人姓名一致。</p>
                     * @param _legalName <p>组织机构法人的姓名。<br>请确认该企业统一社会信用代码与企业营业执照中注册的法人姓名一致。</p>
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
                     * 获取<p>组织机构法人的证件类型</p><p>枚举值：</p><ul><li>居民身份证： 中国大陆居民身份证</li></ul>
                     * @return LegalIdCardType <p>组织机构法人的证件类型</p><p>枚举值：</p><ul><li>居民身份证： 中国大陆居民身份证</li></ul>
                     * 
                     */
                    std::string GetLegalIdCardType() const;

                    /**
                     * 设置<p>组织机构法人的证件类型</p><p>枚举值：</p><ul><li>居民身份证： 中国大陆居民身份证</li></ul>
                     * @param _legalIdCardType <p>组织机构法人的证件类型</p><p>枚举值：</p><ul><li>居民身份证： 中国大陆居民身份证</li></ul>
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
                     * 获取<p>组织机构法人的证件号码</p>
                     * @return LegalIdCardNumber <p>组织机构法人的证件号码</p>
                     * 
                     */
                    std::string GetLegalIdCardNumber() const;

                    /**
                     * 设置<p>组织机构法人的证件号码</p>
                     * @param _legalIdCardNumber <p>组织机构法人的证件号码</p>
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
                     * 获取<p>组织机构超管姓名。</p>
                     * @return AdminName <p>组织机构超管姓名。</p>
                     * 
                     */
                    std::string GetAdminName() const;

                    /**
                     * 设置<p>组织机构超管姓名。</p>
                     * @param _adminName <p>组织机构超管姓名。</p>
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
                     * 获取<p>组织机构超管手机号。</p>
                     * @return AdminMobile <p>组织机构超管手机号。</p>
                     * 
                     */
                    std::string GetAdminMobile() const;

                    /**
                     * 设置<p>组织机构超管手机号。</p>
                     * @param _adminMobile <p>组织机构超管手机号。</p>
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
                     * 获取<p>组织机构超管证件类型</p><p>枚举值：</p><ul><li>居民身份证： 中国大陆居民身份证</li></ul>
                     * @return AdminIdCardType <p>组织机构超管证件类型</p><p>枚举值：</p><ul><li>居民身份证： 中国大陆居民身份证</li></ul>
                     * 
                     */
                    std::string GetAdminIdCardType() const;

                    /**
                     * 设置<p>组织机构超管证件类型</p><p>枚举值：</p><ul><li>居民身份证： 中国大陆居民身份证</li></ul>
                     * @param _adminIdCardType <p>组织机构超管证件类型</p><p>枚举值：</p><ul><li>居民身份证： 中国大陆居民身份证</li></ul>
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
                     * 获取<p>组织机构超管证件号码</p>
                     * @return AdminIdCardNumber <p>组织机构超管证件号码</p>
                     * 
                     */
                    std::string GetAdminIdCardNumber() const;

                    /**
                     * 设置<p>组织机构超管证件号码</p>
                     * @param _adminIdCardNumber <p>组织机构超管证件号码</p>
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
                     * 获取<p>原超管姓名</p>
                     * @return OldAdminName <p>原超管姓名</p>
                     * 
                     */
                    std::string GetOldAdminName() const;

                    /**
                     * 设置<p>原超管姓名</p>
                     * @param _oldAdminName <p>原超管姓名</p>
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
                     * 获取<p>原超管手机号</p>
                     * @return OldAdminMobile <p>原超管手机号</p>
                     * 
                     */
                    std::string GetOldAdminMobile() const;

                    /**
                     * 设置<p>原超管手机号</p>
                     * @param _oldAdminMobile <p>原超管手机号</p>
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
                     * 获取<p>原超管证件类型</p><p>枚举值：</p><ul><li>居民身份证： 中国大陆居民身份证</li></ul>
                     * @return OldAdminIdCardType <p>原超管证件类型</p><p>枚举值：</p><ul><li>居民身份证： 中国大陆居民身份证</li></ul>
                     * 
                     */
                    std::string GetOldAdminIdCardType() const;

                    /**
                     * 设置<p>原超管证件类型</p><p>枚举值：</p><ul><li>居民身份证： 中国大陆居民身份证</li></ul>
                     * @param _oldAdminIdCardType <p>原超管证件类型</p><p>枚举值：</p><ul><li>居民身份证： 中国大陆居民身份证</li></ul>
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
                     * 获取<p>原超管证件号码</p>
                     * @return OldAdminIdCardNumber <p>原超管证件号码</p>
                     * 
                     */
                    std::string GetOldAdminIdCardNumber() const;

                    /**
                     * 设置<p>原超管证件号码</p>
                     * @param _oldAdminIdCardNumber <p>原超管证件号码</p>
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
                     * <p>组织机构名称。<br>请确认该名称与企业营业执照中注册的名称一致。<br>如果名称中包含英文括号()，请使用中文括号（）代替。</p>
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * <p>组织机构企业统一社会信用代码。<br>请确认该企业统一社会信用代码与企业营业执照中注册的统一社会信用代码一致。</p>
                     */
                    std::string m_uniformSocialCreditCode;
                    bool m_uniformSocialCreditCodeHasBeenSet;

                    /**
                     * <p>组织机构法人的姓名。<br>请确认该企业统一社会信用代码与企业营业执照中注册的法人姓名一致。</p>
                     */
                    std::string m_legalName;
                    bool m_legalNameHasBeenSet;

                    /**
                     * <p>组织机构法人的证件类型</p><p>枚举值：</p><ul><li>居民身份证： 中国大陆居民身份证</li></ul>
                     */
                    std::string m_legalIdCardType;
                    bool m_legalIdCardTypeHasBeenSet;

                    /**
                     * <p>组织机构法人的证件号码</p>
                     */
                    std::string m_legalIdCardNumber;
                    bool m_legalIdCardNumberHasBeenSet;

                    /**
                     * <p>组织机构超管姓名。</p>
                     */
                    std::string m_adminName;
                    bool m_adminNameHasBeenSet;

                    /**
                     * <p>组织机构超管手机号。</p>
                     */
                    std::string m_adminMobile;
                    bool m_adminMobileHasBeenSet;

                    /**
                     * <p>组织机构超管证件类型</p><p>枚举值：</p><ul><li>居民身份证： 中国大陆居民身份证</li></ul>
                     */
                    std::string m_adminIdCardType;
                    bool m_adminIdCardTypeHasBeenSet;

                    /**
                     * <p>组织机构超管证件号码</p>
                     */
                    std::string m_adminIdCardNumber;
                    bool m_adminIdCardNumberHasBeenSet;

                    /**
                     * <p>原超管姓名</p>
                     */
                    std::string m_oldAdminName;
                    bool m_oldAdminNameHasBeenSet;

                    /**
                     * <p>原超管手机号</p>
                     */
                    std::string m_oldAdminMobile;
                    bool m_oldAdminMobileHasBeenSet;

                    /**
                     * <p>原超管证件类型</p><p>枚举值：</p><ul><li>居民身份证： 中国大陆居民身份证</li></ul>
                     */
                    std::string m_oldAdminIdCardType;
                    bool m_oldAdminIdCardTypeHasBeenSet;

                    /**
                     * <p>原超管证件号码</p>
                     */
                    std::string m_oldAdminIdCardNumber;
                    bool m_oldAdminIdCardNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_ORGANIZATIONCOMMONINFO_H_
