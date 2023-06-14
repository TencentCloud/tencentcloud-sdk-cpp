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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_MODIFYSUBORGANIZATIONINFOREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_MODIFYSUBORGANIZATIONINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20201222/model/Caller.h>
#include <tencentcloud/essbasic/v20201222/model/Address.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * ModifySubOrganizationInfo请求参数结构体
                */
                class ModifySubOrganizationInfoRequest : public AbstractModel
                {
                public:
                    ModifySubOrganizationInfoRequest();
                    ~ModifySubOrganizationInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取调用方信息，该接口 SubOrganizationId 字段与 OpenId 字段二者至少需要传入一个，全部传入时则使用 SubOrganizationId 信息
                     * @return Caller 调用方信息，该接口 SubOrganizationId 字段与 OpenId 字段二者至少需要传入一个，全部传入时则使用 SubOrganizationId 信息
                     * 
                     */
                    Caller GetCaller() const;

                    /**
                     * 设置调用方信息，该接口 SubOrganizationId 字段与 OpenId 字段二者至少需要传入一个，全部传入时则使用 SubOrganizationId 信息
                     * @param _caller 调用方信息，该接口 SubOrganizationId 字段与 OpenId 字段二者至少需要传入一个，全部传入时则使用 SubOrganizationId 信息
                     * 
                     */
                    void SetCaller(const Caller& _caller);

                    /**
                     * 判断参数 Caller 是否已赋值
                     * @return Caller 是否已赋值
                     * 
                     */
                    bool CallerHasBeenSet() const;

                    /**
                     * 获取机构在第三方的唯一标识，32位定长字符串，与 Caller 中 SubOrgnizationId 二者至少需要传入一个，全部传入时则使用 SubOrganizationId 信息
                     * @return OpenId 机构在第三方的唯一标识，32位定长字符串，与 Caller 中 SubOrgnizationId 二者至少需要传入一个，全部传入时则使用 SubOrganizationId 信息
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置机构在第三方的唯一标识，32位定长字符串，与 Caller 中 SubOrgnizationId 二者至少需要传入一个，全部传入时则使用 SubOrganizationId 信息
                     * @param _openId 机构在第三方的唯一标识，32位定长字符串，与 Caller 中 SubOrgnizationId 二者至少需要传入一个，全部传入时则使用 SubOrganizationId 信息
                     * 
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     * 
                     */
                    bool OpenIdHasBeenSet() const;

                    /**
                     * 获取机构名称全称，修改后机构状态将变为未实名，需要调用实名接口重新实名。
                     * @return Name 机构名称全称，修改后机构状态将变为未实名，需要调用实名接口重新实名。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置机构名称全称，修改后机构状态将变为未实名，需要调用实名接口重新实名。
                     * @param _name 机构名称全称，修改后机构状态将变为未实名，需要调用实名接口重新实名。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取机构类型可选值：
1. ENTERPRISE - 企业；
2. INDIVIDUALBIZ - 个体工商户；
3. PUBLICINSTITUTION - 政府/事业单位
4. OTHERS - 其他组织
                     * @return OrganizationType 机构类型可选值：
1. ENTERPRISE - 企业；
2. INDIVIDUALBIZ - 个体工商户；
3. PUBLICINSTITUTION - 政府/事业单位
4. OTHERS - 其他组织
                     * 
                     */
                    std::string GetOrganizationType() const;

                    /**
                     * 设置机构类型可选值：
1. ENTERPRISE - 企业；
2. INDIVIDUALBIZ - 个体工商户；
3. PUBLICINSTITUTION - 政府/事业单位
4. OTHERS - 其他组织
                     * @param _organizationType 机构类型可选值：
1. ENTERPRISE - 企业；
2. INDIVIDUALBIZ - 个体工商户；
3. PUBLICINSTITUTION - 政府/事业单位
4. OTHERS - 其他组织
                     * 
                     */
                    void SetOrganizationType(const std::string& _organizationType);

                    /**
                     * 判断参数 OrganizationType 是否已赋值
                     * @return OrganizationType 是否已赋值
                     * 
                     */
                    bool OrganizationTypeHasBeenSet() const;

                    /**
                     * 获取机构证件照片文件，base64编码。支持jpg，jpeg，png格式；如果传值，则重新上传文件后，机构状态将变为未实名，需要调用实名接口重新实名。
                     * @return BizLicenseFile 机构证件照片文件，base64编码。支持jpg，jpeg，png格式；如果传值，则重新上传文件后，机构状态将变为未实名，需要调用实名接口重新实名。
                     * 
                     */
                    std::string GetBizLicenseFile() const;

                    /**
                     * 设置机构证件照片文件，base64编码。支持jpg，jpeg，png格式；如果传值，则重新上传文件后，机构状态将变为未实名，需要调用实名接口重新实名。
                     * @param _bizLicenseFile 机构证件照片文件，base64编码。支持jpg，jpeg，png格式；如果传值，则重新上传文件后，机构状态将变为未实名，需要调用实名接口重新实名。
                     * 
                     */
                    void SetBizLicenseFile(const std::string& _bizLicenseFile);

                    /**
                     * 判断参数 BizLicenseFile 是否已赋值
                     * @return BizLicenseFile 是否已赋值
                     * 
                     */
                    bool BizLicenseFileHasBeenSet() const;

                    /**
                     * 获取机构证件照片文件名
                     * @return BizLicenseFileName 机构证件照片文件名
                     * 
                     */
                    std::string GetBizLicenseFileName() const;

                    /**
                     * 设置机构证件照片文件名
                     * @param _bizLicenseFileName 机构证件照片文件名
                     * 
                     */
                    void SetBizLicenseFileName(const std::string& _bizLicenseFileName);

                    /**
                     * 判断参数 BizLicenseFileName 是否已赋值
                     * @return BizLicenseFileName 是否已赋值
                     * 
                     */
                    bool BizLicenseFileNameHasBeenSet() const;

                    /**
                     * 获取机构法人/经营者姓名
                     * @return LegalName 机构法人/经营者姓名
                     * 
                     */
                    std::string GetLegalName() const;

                    /**
                     * 设置机构法人/经营者姓名
                     * @param _legalName 机构法人/经营者姓名
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
                     * 获取机构法人/经营者证件类型，可选值：ID_CARD - 居民身份证。OrganizationType 为 ENTERPRISE、INDIVIDUALBIZ 时，此项必填，其他情况选填。
                     * @return LegalIdCardType 机构法人/经营者证件类型，可选值：ID_CARD - 居民身份证。OrganizationType 为 ENTERPRISE、INDIVIDUALBIZ 时，此项必填，其他情况选填。
                     * 
                     */
                    std::string GetLegalIdCardType() const;

                    /**
                     * 设置机构法人/经营者证件类型，可选值：ID_CARD - 居民身份证。OrganizationType 为 ENTERPRISE、INDIVIDUALBIZ 时，此项必填，其他情况选填。
                     * @param _legalIdCardType 机构法人/经营者证件类型，可选值：ID_CARD - 居民身份证。OrganizationType 为 ENTERPRISE、INDIVIDUALBIZ 时，此项必填，其他情况选填。
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
                     * 获取机构法人/经营者证件号码。OrganizationType 为 ENTERPRISE、INDIVIDUALBIZ 时，此项必填，其他情况选填
                     * @return LegalIdCardNumber 机构法人/经营者证件号码。OrganizationType 为 ENTERPRISE、INDIVIDUALBIZ 时，此项必填，其他情况选填
                     * 
                     */
                    std::string GetLegalIdCardNumber() const;

                    /**
                     * 设置机构法人/经营者证件号码。OrganizationType 为 ENTERPRISE、INDIVIDUALBIZ 时，此项必填，其他情况选填
                     * @param _legalIdCardNumber 机构法人/经营者证件号码。OrganizationType 为 ENTERPRISE、INDIVIDUALBIZ 时，此项必填，其他情况选填
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
                     * 获取机构法人/经营者/联系人手机号码
                     * @return LegalMobile 机构法人/经营者/联系人手机号码
                     * 
                     */
                    std::string GetLegalMobile() const;

                    /**
                     * 设置机构法人/经营者/联系人手机号码
                     * @param _legalMobile 机构法人/经营者/联系人手机号码
                     * 
                     */
                    void SetLegalMobile(const std::string& _legalMobile);

                    /**
                     * 判断参数 LegalMobile 是否已赋值
                     * @return LegalMobile 是否已赋值
                     * 
                     */
                    bool LegalMobileHasBeenSet() const;

                    /**
                     * 获取组织联系人姓名
                     * @return ContactName 组织联系人姓名
                     * 
                     */
                    std::string GetContactName() const;

                    /**
                     * 设置组织联系人姓名
                     * @param _contactName 组织联系人姓名
                     * 
                     */
                    void SetContactName(const std::string& _contactName);

                    /**
                     * 判断参数 ContactName 是否已赋值
                     * @return ContactName 是否已赋值
                     * 
                     */
                    bool ContactNameHasBeenSet() const;

                    /**
                     * 获取企业联系地址
                     * @return ContactAddress 企业联系地址
                     * 
                     */
                    Address GetContactAddress() const;

                    /**
                     * 设置企业联系地址
                     * @param _contactAddress 企业联系地址
                     * 
                     */
                    void SetContactAddress(const Address& _contactAddress);

                    /**
                     * 判断参数 ContactAddress 是否已赋值
                     * @return ContactAddress 是否已赋值
                     * 
                     */
                    bool ContactAddressHasBeenSet() const;

                    /**
                     * 获取机构电子邮箱
                     * @return Email 机构电子邮箱
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置机构电子邮箱
                     * @param _email 机构电子邮箱
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                private:

                    /**
                     * 调用方信息，该接口 SubOrganizationId 字段与 OpenId 字段二者至少需要传入一个，全部传入时则使用 SubOrganizationId 信息
                     */
                    Caller m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * 机构在第三方的唯一标识，32位定长字符串，与 Caller 中 SubOrgnizationId 二者至少需要传入一个，全部传入时则使用 SubOrganizationId 信息
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 机构名称全称，修改后机构状态将变为未实名，需要调用实名接口重新实名。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 机构类型可选值：
1. ENTERPRISE - 企业；
2. INDIVIDUALBIZ - 个体工商户；
3. PUBLICINSTITUTION - 政府/事业单位
4. OTHERS - 其他组织
                     */
                    std::string m_organizationType;
                    bool m_organizationTypeHasBeenSet;

                    /**
                     * 机构证件照片文件，base64编码。支持jpg，jpeg，png格式；如果传值，则重新上传文件后，机构状态将变为未实名，需要调用实名接口重新实名。
                     */
                    std::string m_bizLicenseFile;
                    bool m_bizLicenseFileHasBeenSet;

                    /**
                     * 机构证件照片文件名
                     */
                    std::string m_bizLicenseFileName;
                    bool m_bizLicenseFileNameHasBeenSet;

                    /**
                     * 机构法人/经营者姓名
                     */
                    std::string m_legalName;
                    bool m_legalNameHasBeenSet;

                    /**
                     * 机构法人/经营者证件类型，可选值：ID_CARD - 居民身份证。OrganizationType 为 ENTERPRISE、INDIVIDUALBIZ 时，此项必填，其他情况选填。
                     */
                    std::string m_legalIdCardType;
                    bool m_legalIdCardTypeHasBeenSet;

                    /**
                     * 机构法人/经营者证件号码。OrganizationType 为 ENTERPRISE、INDIVIDUALBIZ 时，此项必填，其他情况选填
                     */
                    std::string m_legalIdCardNumber;
                    bool m_legalIdCardNumberHasBeenSet;

                    /**
                     * 机构法人/经营者/联系人手机号码
                     */
                    std::string m_legalMobile;
                    bool m_legalMobileHasBeenSet;

                    /**
                     * 组织联系人姓名
                     */
                    std::string m_contactName;
                    bool m_contactNameHasBeenSet;

                    /**
                     * 企业联系地址
                     */
                    Address m_contactAddress;
                    bool m_contactAddressHasBeenSet;

                    /**
                     * 机构电子邮箱
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_MODIFYSUBORGANIZATIONINFOREQUEST_H_
