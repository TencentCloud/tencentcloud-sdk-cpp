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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CREATESUBORGANIZATIONANDSEALREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CREATESUBORGANIZATIONANDSEALREQUEST_H_

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
                * CreateSubOrganizationAndSeal请求参数结构体
                */
                class CreateSubOrganizationAndSealRequest : public AbstractModel
                {
                public:
                    CreateSubOrganizationAndSealRequest();
                    ~CreateSubOrganizationAndSealRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取调用方信息
                     * @return Caller 调用方信息
                     * 
                     */
                    Caller GetCaller() const;

                    /**
                     * 设置调用方信息
                     * @param _caller 调用方信息
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
                     * 获取机构名称全称
                     * @return Name 机构名称全称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置机构名称全称
                     * @param _name 机构名称全称
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
                     * 获取机构证件号码类型可选值：
1. USCC - 统一社会信用代码
2. BIZREGISTNO - 营业执照注册号
                     * @return IdCardType 机构证件号码类型可选值：
1. USCC - 统一社会信用代码
2. BIZREGISTNO - 营业执照注册号
                     * 
                     */
                    std::string GetIdCardType() const;

                    /**
                     * 设置机构证件号码类型可选值：
1. USCC - 统一社会信用代码
2. BIZREGISTNO - 营业执照注册号
                     * @param _idCardType 机构证件号码类型可选值：
1. USCC - 统一社会信用代码
2. BIZREGISTNO - 营业执照注册号
                     * 
                     */
                    void SetIdCardType(const std::string& _idCardType);

                    /**
                     * 判断参数 IdCardType 是否已赋值
                     * @return IdCardType 是否已赋值
                     * 
                     */
                    bool IdCardTypeHasBeenSet() const;

                    /**
                     * 获取机构证件号码
                     * @return IdCardNumber 机构证件号码
                     * 
                     */
                    std::string GetIdCardNumber() const;

                    /**
                     * 设置机构证件号码
                     * @param _idCardNumber 机构证件号码
                     * 
                     */
                    void SetIdCardNumber(const std::string& _idCardNumber);

                    /**
                     * 判断参数 IdCardNumber 是否已赋值
                     * @return IdCardNumber 是否已赋值
                     * 
                     */
                    bool IdCardNumberHasBeenSet() const;

                    /**
                     * 获取机构类型可选值：
1. ENTERPRISE - 企业
2. INDIVIDUALBIZ - 个体工商户
3. PUBLICINSTITUTION - 政府/事业单位
4. OTHERS - 其他组织
                     * @return OrganizationType 机构类型可选值：
1. ENTERPRISE - 企业
2. INDIVIDUALBIZ - 个体工商户
3. PUBLICINSTITUTION - 政府/事业单位
4. OTHERS - 其他组织
                     * 
                     */
                    std::string GetOrganizationType() const;

                    /**
                     * 设置机构类型可选值：
1. ENTERPRISE - 企业
2. INDIVIDUALBIZ - 个体工商户
3. PUBLICINSTITUTION - 政府/事业单位
4. OTHERS - 其他组织
                     * @param _organizationType 机构类型可选值：
1. ENTERPRISE - 企业
2. INDIVIDUALBIZ - 个体工商户
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
                     * 获取机构法人/经营者证件类型可选值：
1. ID_CARD - 居民身份证
2. PASSPORT - 护照
3. MAINLAND_TRAVEL_PERMIT_FOR_HONGKONG_AND_MACAO_RESIDENTS - 港澳居民来往内地通行证
4. MAINLAND_TRAVEL_PERMIT_FOR_TAIWAN_RESIDENTS - 台湾居民来往大陆通行证
5. HOUSEHOLD_REGISTER - 户口本
6. TEMP_ID_CARD - 临时居民身份证
                     * @return LegalIdCardType 机构法人/经营者证件类型可选值：
1. ID_CARD - 居民身份证
2. PASSPORT - 护照
3. MAINLAND_TRAVEL_PERMIT_FOR_HONGKONG_AND_MACAO_RESIDENTS - 港澳居民来往内地通行证
4. MAINLAND_TRAVEL_PERMIT_FOR_TAIWAN_RESIDENTS - 台湾居民来往大陆通行证
5. HOUSEHOLD_REGISTER - 户口本
6. TEMP_ID_CARD - 临时居民身份证
                     * 
                     */
                    std::string GetLegalIdCardType() const;

                    /**
                     * 设置机构法人/经营者证件类型可选值：
1. ID_CARD - 居民身份证
2. PASSPORT - 护照
3. MAINLAND_TRAVEL_PERMIT_FOR_HONGKONG_AND_MACAO_RESIDENTS - 港澳居民来往内地通行证
4. MAINLAND_TRAVEL_PERMIT_FOR_TAIWAN_RESIDENTS - 台湾居民来往大陆通行证
5. HOUSEHOLD_REGISTER - 户口本
6. TEMP_ID_CARD - 临时居民身份证
                     * @param _legalIdCardType 机构法人/经营者证件类型可选值：
1. ID_CARD - 居民身份证
2. PASSPORT - 护照
3. MAINLAND_TRAVEL_PERMIT_FOR_HONGKONG_AND_MACAO_RESIDENTS - 港澳居民来往内地通行证
4. MAINLAND_TRAVEL_PERMIT_FOR_TAIWAN_RESIDENTS - 台湾居民来往大陆通行证
5. HOUSEHOLD_REGISTER - 户口本
6. TEMP_ID_CARD - 临时居民身份证
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
                     * 获取机构法人/经营者证件号码；
OrganizationType 为 ENTERPRISE时，INDIVIDUALBIZ 时必填，其他情况选填
                     * @return LegalIdCardNumber 机构法人/经营者证件号码；
OrganizationType 为 ENTERPRISE时，INDIVIDUALBIZ 时必填，其他情况选填
                     * 
                     */
                    std::string GetLegalIdCardNumber() const;

                    /**
                     * 设置机构法人/经营者证件号码；
OrganizationType 为 ENTERPRISE时，INDIVIDUALBIZ 时必填，其他情况选填
                     * @param _legalIdCardNumber 机构法人/经营者证件号码；
OrganizationType 为 ENTERPRISE时，INDIVIDUALBIZ 时必填，其他情况选填
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
                     * 获取实名认证的客户端IP/请求生成企业印章的客户端Ip
                     * @return VerifyClientIp 实名认证的客户端IP/请求生成企业印章的客户端Ip
                     * 
                     */
                    std::string GetVerifyClientIp() const;

                    /**
                     * 设置实名认证的客户端IP/请求生成企业印章的客户端Ip
                     * @param _verifyClientIp 实名认证的客户端IP/请求生成企业印章的客户端Ip
                     * 
                     */
                    void SetVerifyClientIp(const std::string& _verifyClientIp);

                    /**
                     * 判断参数 VerifyClientIp 是否已赋值
                     * @return VerifyClientIp 是否已赋值
                     * 
                     */
                    bool VerifyClientIpHasBeenSet() const;

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

                    /**
                     * 获取机构证件文件类型可选值：
1. USCCFILE - 统一社会信用代码证书
2. LICENSEFILE - 营业执照
                     * @return IdCardFileType 机构证件文件类型可选值：
1. USCCFILE - 统一社会信用代码证书
2. LICENSEFILE - 营业执照
                     * 
                     */
                    std::string GetIdCardFileType() const;

                    /**
                     * 设置机构证件文件类型可选值：
1. USCCFILE - 统一社会信用代码证书
2. LICENSEFILE - 营业执照
                     * @param _idCardFileType 机构证件文件类型可选值：
1. USCCFILE - 统一社会信用代码证书
2. LICENSEFILE - 营业执照
                     * 
                     */
                    void SetIdCardFileType(const std::string& _idCardFileType);

                    /**
                     * 判断参数 IdCardFileType 是否已赋值
                     * @return IdCardFileType 是否已赋值
                     * 
                     */
                    bool IdCardFileTypeHasBeenSet() const;

                    /**
                     * 获取机构证件照片文件，base64编码，支持jpg、jpeg、png格式
                     * @return BizLicenseFile 机构证件照片文件，base64编码，支持jpg、jpeg、png格式
                     * 
                     */
                    std::string GetBizLicenseFile() const;

                    /**
                     * 设置机构证件照片文件，base64编码，支持jpg、jpeg、png格式
                     * @param _bizLicenseFile 机构证件照片文件，base64编码，支持jpg、jpeg、png格式
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
                     * 获取实名认证的服务器IP
                     * @return VerifyServerIp 实名认证的服务器IP
                     * 
                     */
                    std::string GetVerifyServerIp() const;

                    /**
                     * 设置实名认证的服务器IP
                     * @param _verifyServerIp 实名认证的服务器IP
                     * 
                     */
                    void SetVerifyServerIp(const std::string& _verifyServerIp);

                    /**
                     * 判断参数 VerifyServerIp 是否已赋值
                     * @return VerifyServerIp 是否已赋值
                     * 
                     */
                    bool VerifyServerIpHasBeenSet() const;

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
                     * 获取电子印章名称
                     * @return SealName 电子印章名称
                     * 
                     */
                    std::string GetSealName() const;

                    /**
                     * 设置电子印章名称
                     * @param _sealName 电子印章名称
                     * 
                     */
                    void SetSealName(const std::string& _sealName);

                    /**
                     * 判断参数 SealName 是否已赋值
                     * @return SealName 是否已赋值
                     * 
                     */
                    bool SealNameHasBeenSet() const;

                    /**
                     * 获取印章类型：默认: CONTRACT
1. OFFICIAL-公章
2. SPECIAL_FINANCIAL-财务专用章
3. CONTRACT-合同专用章
4. LEGAL_REPRESENTATIVE-法定代表人章
5. SPECIAL_NATIONWIDE_INVOICE-发票专用章
6. OTHER-其他
                     * @return SealType 印章类型：默认: CONTRACT
1. OFFICIAL-公章
2. SPECIAL_FINANCIAL-财务专用章
3. CONTRACT-合同专用章
4. LEGAL_REPRESENTATIVE-法定代表人章
5. SPECIAL_NATIONWIDE_INVOICE-发票专用章
6. OTHER-其他
                     * 
                     */
                    std::string GetSealType() const;

                    /**
                     * 设置印章类型：默认: CONTRACT
1. OFFICIAL-公章
2. SPECIAL_FINANCIAL-财务专用章
3. CONTRACT-合同专用章
4. LEGAL_REPRESENTATIVE-法定代表人章
5. SPECIAL_NATIONWIDE_INVOICE-发票专用章
6. OTHER-其他
                     * @param _sealType 印章类型：默认: CONTRACT
1. OFFICIAL-公章
2. SPECIAL_FINANCIAL-财务专用章
3. CONTRACT-合同专用章
4. LEGAL_REPRESENTATIVE-法定代表人章
5. SPECIAL_NATIONWIDE_INVOICE-发票专用章
6. OTHER-其他
                     * 
                     */
                    void SetSealType(const std::string& _sealType);

                    /**
                     * 判断参数 SealType 是否已赋值
                     * @return SealType 是否已赋值
                     * 
                     */
                    bool SealTypeHasBeenSet() const;

                    /**
                     * 获取企业印章横向文字，最多可填8个汉字（可为空，默认为"电子签名专用章"）
                     * @return SealHorizontalText 企业印章横向文字，最多可填8个汉字（可为空，默认为"电子签名专用章"）
                     * 
                     */
                    std::string GetSealHorizontalText() const;

                    /**
                     * 设置企业印章横向文字，最多可填8个汉字（可为空，默认为"电子签名专用章"）
                     * @param _sealHorizontalText 企业印章横向文字，最多可填8个汉字（可为空，默认为"电子签名专用章"）
                     * 
                     */
                    void SetSealHorizontalText(const std::string& _sealHorizontalText);

                    /**
                     * 判断参数 SealHorizontalText 是否已赋值
                     * @return SealHorizontalText 是否已赋值
                     * 
                     */
                    bool SealHorizontalTextHasBeenSet() const;

                    /**
                     * 获取机构在第三方的唯一标识，32位以内标识符
                     * @return OpenId 机构在第三方的唯一标识，32位以内标识符
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置机构在第三方的唯一标识，32位以内标识符
                     * @param _openId 机构在第三方的唯一标识，32位以内标识符
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
                     * 获取是否使用OpenId作为数据主键，如果为true，请确保OpenId在当前应用号唯一
                     * @return UseOpenId 是否使用OpenId作为数据主键，如果为true，请确保OpenId在当前应用号唯一
                     * 
                     */
                    bool GetUseOpenId() const;

                    /**
                     * 设置是否使用OpenId作为数据主键，如果为true，请确保OpenId在当前应用号唯一
                     * @param _useOpenId 是否使用OpenId作为数据主键，如果为true，请确保OpenId在当前应用号唯一
                     * 
                     */
                    void SetUseOpenId(const bool& _useOpenId);

                    /**
                     * 判断参数 UseOpenId 是否已赋值
                     * @return UseOpenId 是否已赋值
                     * 
                     */
                    bool UseOpenIdHasBeenSet() const;

                private:

                    /**
                     * 调用方信息
                     */
                    Caller m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * 机构名称全称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 机构证件号码类型可选值：
1. USCC - 统一社会信用代码
2. BIZREGISTNO - 营业执照注册号
                     */
                    std::string m_idCardType;
                    bool m_idCardTypeHasBeenSet;

                    /**
                     * 机构证件号码
                     */
                    std::string m_idCardNumber;
                    bool m_idCardNumberHasBeenSet;

                    /**
                     * 机构类型可选值：
1. ENTERPRISE - 企业
2. INDIVIDUALBIZ - 个体工商户
3. PUBLICINSTITUTION - 政府/事业单位
4. OTHERS - 其他组织
                     */
                    std::string m_organizationType;
                    bool m_organizationTypeHasBeenSet;

                    /**
                     * 机构法人/经营者姓名
                     */
                    std::string m_legalName;
                    bool m_legalNameHasBeenSet;

                    /**
                     * 机构法人/经营者证件类型可选值：
1. ID_CARD - 居民身份证
2. PASSPORT - 护照
3. MAINLAND_TRAVEL_PERMIT_FOR_HONGKONG_AND_MACAO_RESIDENTS - 港澳居民来往内地通行证
4. MAINLAND_TRAVEL_PERMIT_FOR_TAIWAN_RESIDENTS - 台湾居民来往大陆通行证
5. HOUSEHOLD_REGISTER - 户口本
6. TEMP_ID_CARD - 临时居民身份证
                     */
                    std::string m_legalIdCardType;
                    bool m_legalIdCardTypeHasBeenSet;

                    /**
                     * 机构法人/经营者证件号码；
OrganizationType 为 ENTERPRISE时，INDIVIDUALBIZ 时必填，其他情况选填
                     */
                    std::string m_legalIdCardNumber;
                    bool m_legalIdCardNumberHasBeenSet;

                    /**
                     * 实名认证的客户端IP/请求生成企业印章的客户端Ip
                     */
                    std::string m_verifyClientIp;
                    bool m_verifyClientIpHasBeenSet;

                    /**
                     * 机构电子邮箱
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 机构证件文件类型可选值：
1. USCCFILE - 统一社会信用代码证书
2. LICENSEFILE - 营业执照
                     */
                    std::string m_idCardFileType;
                    bool m_idCardFileTypeHasBeenSet;

                    /**
                     * 机构证件照片文件，base64编码，支持jpg、jpeg、png格式
                     */
                    std::string m_bizLicenseFile;
                    bool m_bizLicenseFileHasBeenSet;

                    /**
                     * 机构证件照片文件名
                     */
                    std::string m_bizLicenseFileName;
                    bool m_bizLicenseFileNameHasBeenSet;

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
                     * 实名认证的服务器IP
                     */
                    std::string m_verifyServerIp;
                    bool m_verifyServerIpHasBeenSet;

                    /**
                     * 企业联系地址
                     */
                    Address m_contactAddress;
                    bool m_contactAddressHasBeenSet;

                    /**
                     * 电子印章名称
                     */
                    std::string m_sealName;
                    bool m_sealNameHasBeenSet;

                    /**
                     * 印章类型：默认: CONTRACT
1. OFFICIAL-公章
2. SPECIAL_FINANCIAL-财务专用章
3. CONTRACT-合同专用章
4. LEGAL_REPRESENTATIVE-法定代表人章
5. SPECIAL_NATIONWIDE_INVOICE-发票专用章
6. OTHER-其他
                     */
                    std::string m_sealType;
                    bool m_sealTypeHasBeenSet;

                    /**
                     * 企业印章横向文字，最多可填8个汉字（可为空，默认为"电子签名专用章"）
                     */
                    std::string m_sealHorizontalText;
                    bool m_sealHorizontalTextHasBeenSet;

                    /**
                     * 机构在第三方的唯一标识，32位以内标识符
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 是否使用OpenId作为数据主键，如果为true，请确保OpenId在当前应用号唯一
                     */
                    bool m_useOpenId;
                    bool m_useOpenIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CREATESUBORGANIZATIONANDSEALREQUEST_H_
