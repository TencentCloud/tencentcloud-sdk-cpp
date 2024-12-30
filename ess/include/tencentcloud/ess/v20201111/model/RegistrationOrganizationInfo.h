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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_REGISTRATIONORGANIZATIONINFO_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_REGISTRATIONORGANIZATIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 企业认证信息参数， 需要保证这些参数跟营业执照中的信息一致。
                */
                class RegistrationOrganizationInfo : public AbstractModel
                {
                public:
                    RegistrationOrganizationInfo();
                    ~RegistrationOrganizationInfo() = default;
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
                     * 获取组织机构企业注册地址。
请确认该企业注册地址与企业营业执照中注册的地址一致。
                     * @return Address 组织机构企业注册地址。
请确认该企业注册地址与企业营业执照中注册的地址一致。
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置组织机构企业注册地址。
请确认该企业注册地址与企业营业执照中注册的地址一致。
                     * @param _address 组织机构企业注册地址。
请确认该企业注册地址与企业营业执照中注册的地址一致。
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
                     * 获取组织机构超管姓名。
在注册流程中，必须是超管本人进行操作。
如果法人做为超管管理组织机构,超管姓名就是法人姓名
如果入参中传递超管授权书PowerOfAttorneys，则此参数为必填参数。
                     * @return AdminName 组织机构超管姓名。
在注册流程中，必须是超管本人进行操作。
如果法人做为超管管理组织机构,超管姓名就是法人姓名
如果入参中传递超管授权书PowerOfAttorneys，则此参数为必填参数。
                     * 
                     */
                    std::string GetAdminName() const;

                    /**
                     * 设置组织机构超管姓名。
在注册流程中，必须是超管本人进行操作。
如果法人做为超管管理组织机构,超管姓名就是法人姓名
如果入参中传递超管授权书PowerOfAttorneys，则此参数为必填参数。
                     * @param _adminName 组织机构超管姓名。
在注册流程中，必须是超管本人进行操作。
如果法人做为超管管理组织机构,超管姓名就是法人姓名
如果入参中传递超管授权书PowerOfAttorneys，则此参数为必填参数。
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
在注册流程中，这个手机号必须跟操作人在电子签注册的个人手机号一致。
如果入参中传递超管授权书PowerOfAttorneys，则此参数为必填参数
                     * @return AdminMobile 组织机构超管手机号。
在注册流程中，这个手机号必须跟操作人在电子签注册的个人手机号一致。
如果入参中传递超管授权书PowerOfAttorneys，则此参数为必填参数
                     * 
                     */
                    std::string GetAdminMobile() const;

                    /**
                     * 设置组织机构超管手机号。
在注册流程中，这个手机号必须跟操作人在电子签注册的个人手机号一致。
如果入参中传递超管授权书PowerOfAttorneys，则此参数为必填参数
                     * @param _adminMobile 组织机构超管手机号。
在注册流程中，这个手机号必须跟操作人在电子签注册的个人手机号一致。
如果入参中传递超管授权书PowerOfAttorneys，则此参数为必填参数
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
                     * 获取可选的此企业允许的授权方式, 可以设置的方式有:
1：上传授权书
2：法人授权超管
5：授权书+对公打款


注:
`1. 当前仅支持一种认证方式`
`2. 如果当前的企业类型是政府/事业单位, 则只支持上传授权书+对公打款`
`3. 如果当前操作人是法人,则是法人认证`
                     * @return AuthorizationTypes 可选的此企业允许的授权方式, 可以设置的方式有:
1：上传授权书
2：法人授权超管
5：授权书+对公打款


注:
`1. 当前仅支持一种认证方式`
`2. 如果当前的企业类型是政府/事业单位, 则只支持上传授权书+对公打款`
`3. 如果当前操作人是法人,则是法人认证`
                     * 
                     */
                    std::vector<uint64_t> GetAuthorizationTypes() const;

                    /**
                     * 设置可选的此企业允许的授权方式, 可以设置的方式有:
1：上传授权书
2：法人授权超管
5：授权书+对公打款


注:
`1. 当前仅支持一种认证方式`
`2. 如果当前的企业类型是政府/事业单位, 则只支持上传授权书+对公打款`
`3. 如果当前操作人是法人,则是法人认证`
                     * @param _authorizationTypes 可选的此企业允许的授权方式, 可以设置的方式有:
1：上传授权书
2：法人授权超管
5：授权书+对公打款


注:
`1. 当前仅支持一种认证方式`
`2. 如果当前的企业类型是政府/事业单位, 则只支持上传授权书+对公打款`
`3. 如果当前操作人是法人,则是法人认证`
                     * 
                     */
                    void SetAuthorizationTypes(const std::vector<uint64_t>& _authorizationTypes);

                    /**
                     * 判断参数 AuthorizationTypes 是否已赋值
                     * @return AuthorizationTypes 是否已赋值
                     * 
                     */
                    bool AuthorizationTypesHasBeenSet() const;

                    /**
                     * 获取认证人身份证号，如果入参中传递超管授权书PowerOfAttorneys，则此参数为必填参数

                     * @return AdminIdCardNumber 认证人身份证号，如果入参中传递超管授权书PowerOfAttorneys，则此参数为必填参数

                     * 
                     */
                    std::string GetAdminIdCardNumber() const;

                    /**
                     * 设置认证人身份证号，如果入参中传递超管授权书PowerOfAttorneys，则此参数为必填参数

                     * @param _adminIdCardNumber 认证人身份证号，如果入参中传递超管授权书PowerOfAttorneys，则此参数为必填参数

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
                     * 获取认证人证件类型 
支持以下类型
<ul><li>ID_CARD : 中国大陆居民身份证  (默认值)</li>
<li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li>
<li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>

                     * @return AdminIdCardType 认证人证件类型 
支持以下类型
<ul><li>ID_CARD : 中国大陆居民身份证  (默认值)</li>
<li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li>
<li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>

                     * 
                     */
                    std::string GetAdminIdCardType() const;

                    /**
                     * 设置认证人证件类型 
支持以下类型
<ul><li>ID_CARD : 中国大陆居民身份证  (默认值)</li>
<li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li>
<li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>

                     * @param _adminIdCardType 认证人证件类型 
支持以下类型
<ul><li>ID_CARD : 中国大陆居民身份证  (默认值)</li>
<li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li>
<li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>

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
                     * 获取营业执照正面照(PNG或JPG) base64格式, 大小不超过5M
                     * @return BusinessLicense 营业执照正面照(PNG或JPG) base64格式, 大小不超过5M
                     * 
                     */
                    std::string GetBusinessLicense() const;

                    /**
                     * 设置营业执照正面照(PNG或JPG) base64格式, 大小不超过5M
                     * @param _businessLicense 营业执照正面照(PNG或JPG) base64格式, 大小不超过5M
                     * 
                     */
                    void SetBusinessLicense(const std::string& _businessLicense);

                    /**
                     * 判断参数 BusinessLicense 是否已赋值
                     * @return BusinessLicense 是否已赋值
                     * 
                     */
                    bool BusinessLicenseHasBeenSet() const;

                    /**
                     * 获取授权书(PNG或JPG或PDF) base64格式, 大小不超过8M 。
p.s. 如果上传授权书 ，需遵循以下条件
1. 超管的信息（超管姓名，超管手机号）必须为必填参数。
2. 超管的个人身份必须在电子签已经实名。
2. 认证方式AuthorizationTypes必须只能是上传授权书方式 

                     * @return PowerOfAttorneys 授权书(PNG或JPG或PDF) base64格式, 大小不超过8M 。
p.s. 如果上传授权书 ，需遵循以下条件
1. 超管的信息（超管姓名，超管手机号）必须为必填参数。
2. 超管的个人身份必须在电子签已经实名。
2. 认证方式AuthorizationTypes必须只能是上传授权书方式 

                     * 
                     */
                    std::vector<std::string> GetPowerOfAttorneys() const;

                    /**
                     * 设置授权书(PNG或JPG或PDF) base64格式, 大小不超过8M 。
p.s. 如果上传授权书 ，需遵循以下条件
1. 超管的信息（超管姓名，超管手机号）必须为必填参数。
2. 超管的个人身份必须在电子签已经实名。
2. 认证方式AuthorizationTypes必须只能是上传授权书方式 

                     * @param _powerOfAttorneys 授权书(PNG或JPG或PDF) base64格式, 大小不超过8M 。
p.s. 如果上传授权书 ，需遵循以下条件
1. 超管的信息（超管姓名，超管手机号）必须为必填参数。
2. 超管的个人身份必须在电子签已经实名。
2. 认证方式AuthorizationTypes必须只能是上传授权书方式 

                     * 
                     */
                    void SetPowerOfAttorneys(const std::vector<std::string>& _powerOfAttorneys);

                    /**
                     * 判断参数 PowerOfAttorneys 是否已赋值
                     * @return PowerOfAttorneys 是否已赋值
                     * 
                     */
                    bool PowerOfAttorneysHasBeenSet() const;

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
                     * 组织机构企业注册地址。
请确认该企业注册地址与企业营业执照中注册的地址一致。
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 组织机构超管姓名。
在注册流程中，必须是超管本人进行操作。
如果法人做为超管管理组织机构,超管姓名就是法人姓名
如果入参中传递超管授权书PowerOfAttorneys，则此参数为必填参数。
                     */
                    std::string m_adminName;
                    bool m_adminNameHasBeenSet;

                    /**
                     * 组织机构超管手机号。
在注册流程中，这个手机号必须跟操作人在电子签注册的个人手机号一致。
如果入参中传递超管授权书PowerOfAttorneys，则此参数为必填参数
                     */
                    std::string m_adminMobile;
                    bool m_adminMobileHasBeenSet;

                    /**
                     * 可选的此企业允许的授权方式, 可以设置的方式有:
1：上传授权书
2：法人授权超管
5：授权书+对公打款


注:
`1. 当前仅支持一种认证方式`
`2. 如果当前的企业类型是政府/事业单位, 则只支持上传授权书+对公打款`
`3. 如果当前操作人是法人,则是法人认证`
                     */
                    std::vector<uint64_t> m_authorizationTypes;
                    bool m_authorizationTypesHasBeenSet;

                    /**
                     * 认证人身份证号，如果入参中传递超管授权书PowerOfAttorneys，则此参数为必填参数

                     */
                    std::string m_adminIdCardNumber;
                    bool m_adminIdCardNumberHasBeenSet;

                    /**
                     * 认证人证件类型 
支持以下类型
<ul><li>ID_CARD : 中国大陆居民身份证  (默认值)</li>
<li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li>
<li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>

                     */
                    std::string m_adminIdCardType;
                    bool m_adminIdCardTypeHasBeenSet;

                    /**
                     * 营业执照正面照(PNG或JPG) base64格式, 大小不超过5M
                     */
                    std::string m_businessLicense;
                    bool m_businessLicenseHasBeenSet;

                    /**
                     * 授权书(PNG或JPG或PDF) base64格式, 大小不超过8M 。
p.s. 如果上传授权书 ，需遵循以下条件
1. 超管的信息（超管姓名，超管手机号）必须为必填参数。
2. 超管的个人身份必须在电子签已经实名。
2. 认证方式AuthorizationTypes必须只能是上传授权书方式 

                     */
                    std::vector<std::string> m_powerOfAttorneys;
                    bool m_powerOfAttorneysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_REGISTRATIONORGANIZATIONINFO_H_
