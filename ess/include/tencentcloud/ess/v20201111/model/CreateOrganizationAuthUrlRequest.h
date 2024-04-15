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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEORGANIZATIONAUTHURLREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEORGANIZATIONAUTHURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateOrganizationAuthUrl请求参数结构体
                */
                class CreateOrganizationAuthUrlRequest : public AbstractModel
                {
                public:
                    CreateOrganizationAuthUrlRequest();
                    ~CreateOrganizationAuthUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取操作人信息
                     * @return Operator 操作人信息
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作人信息
                     * @param _operator 操作人信息
                     * 
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取指定授权方式 支持多选:
1-上传授权书方式
2- 法人授权方式
3- 法人身份认证方式
                     * @return AuthorizationTypes 指定授权方式 支持多选:
1-上传授权书方式
2- 法人授权方式
3- 法人身份认证方式
                     * 
                     */
                    std::vector<uint64_t> GetAuthorizationTypes() const;

                    /**
                     * 设置指定授权方式 支持多选:
1-上传授权书方式
2- 法人授权方式
3- 法人身份认证方式
                     * @param _authorizationTypes 指定授权方式 支持多选:
1-上传授权书方式
2- 法人授权方式
3- 法人身份认证方式
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
                     * 获取企业名称
EndPointType=“H5”或者"SHORT_H5"时，该参数必填

                     * @return OrganizationName 企业名称
EndPointType=“H5”或者"SHORT_H5"时，该参数必填

                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置企业名称
EndPointType=“H5”或者"SHORT_H5"时，该参数必填

                     * @param _organizationName 企业名称
EndPointType=“H5”或者"SHORT_H5"时，该参数必填

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
                     * 获取企业统一社会信用代码
                     * @return UniformSocialCreditCode 企业统一社会信用代码
                     * 
                     */
                    std::string GetUniformSocialCreditCode() const;

                    /**
                     * 设置企业统一社会信用代码
                     * @param _uniformSocialCreditCode 企业统一社会信用代码
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
                     * 获取法人姓名
                     * @return LegalName 法人姓名
                     * 
                     */
                    std::string GetLegalName() const;

                    /**
                     * 设置法人姓名
                     * @param _legalName 法人姓名
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
                     * 获取认证完成跳转链接
                     * @return AutoJumpUrl 认证完成跳转链接
                     * 
                     */
                    std::string GetAutoJumpUrl() const;

                    /**
                     * 设置认证完成跳转链接
                     * @param _autoJumpUrl 认证完成跳转链接
                     * 
                     */
                    void SetAutoJumpUrl(const std::string& _autoJumpUrl);

                    /**
                     * 判断参数 AutoJumpUrl 是否已赋值
                     * @return AutoJumpUrl 是否已赋值
                     * 
                     */
                    bool AutoJumpUrlHasBeenSet() const;

                    /**
                     * 获取营业执照企业地址
示例：xx省xx市xx县/区xx街道
                     * @return OrganizationAddress 营业执照企业地址
示例：xx省xx市xx县/区xx街道
                     * 
                     */
                    std::string GetOrganizationAddress() const;

                    /**
                     * 设置营业执照企业地址
示例：xx省xx市xx县/区xx街道
                     * @param _organizationAddress 营业执照企业地址
示例：xx省xx市xx县/区xx街道
                     * 
                     */
                    void SetOrganizationAddress(const std::string& _organizationAddress);

                    /**
                     * 判断参数 OrganizationAddress 是否已赋值
                     * @return OrganizationAddress 是否已赋值
                     * 
                     */
                    bool OrganizationAddressHasBeenSet() const;

                    /**
                     * 获取认证人姓名
                     * @return AdminName 认证人姓名
                     * 
                     */
                    std::string GetAdminName() const;

                    /**
                     * 设置认证人姓名
                     * @param _adminName 认证人姓名
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
                     * 获取认证人手机号
                     * @return AdminMobile 认证人手机号
                     * 
                     */
                    std::string GetAdminMobile() const;

                    /**
                     * 设置认证人手机号
                     * @param _adminMobile 认证人手机号
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
                     * 获取认证人身份证号
                     * @return AdminIdCardNumber 认证人身份证号
                     * 
                     */
                    std::string GetAdminIdCardNumber() const;

                    /**
                     * 设置认证人身份证号
                     * @param _adminIdCardNumber 认证人身份证号
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
<ul><li>ID_CARD : 居民身份证  (默认值)</li>
<li>HONGKONG_AND_MACAO : 港澳居民来往内地通行证</li>
<li>HONGKONG_MACAO_AND_TAIWAN : 港澳台居民居住证(格式同居民身份证)</li></ul>

                     * @return AdminIdCardType 认证人证件类型
支持以下类型
<ul><li>ID_CARD : 居民身份证  (默认值)</li>
<li>HONGKONG_AND_MACAO : 港澳居民来往内地通行证</li>
<li>HONGKONG_MACAO_AND_TAIWAN : 港澳台居民居住证(格式同居民身份证)</li></ul>

                     * 
                     */
                    std::string GetAdminIdCardType() const;

                    /**
                     * 设置认证人证件类型
支持以下类型
<ul><li>ID_CARD : 居民身份证  (默认值)</li>
<li>HONGKONG_AND_MACAO : 港澳居民来往内地通行证</li>
<li>HONGKONG_MACAO_AND_TAIWAN : 港澳台居民居住证(格式同居民身份证)</li></ul>

                     * @param _adminIdCardType 认证人证件类型
支持以下类型
<ul><li>ID_CARD : 居民身份证  (默认值)</li>
<li>HONGKONG_AND_MACAO : 港澳居民来往内地通行证</li>
<li>HONGKONG_MACAO_AND_TAIWAN : 港澳台居民居住证(格式同居民身份证)</li></ul>

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
                     * 获取营业执照的社会信用代码保持一致
false 关闭-默认
true 开启
                     * @return UniformSocialCreditCodeSame 营业执照的社会信用代码保持一致
false 关闭-默认
true 开启
                     * 
                     */
                    bool GetUniformSocialCreditCodeSame() const;

                    /**
                     * 设置营业执照的社会信用代码保持一致
false 关闭-默认
true 开启
                     * @param _uniformSocialCreditCodeSame 营业执照的社会信用代码保持一致
false 关闭-默认
true 开启
                     * 
                     */
                    void SetUniformSocialCreditCodeSame(const bool& _uniformSocialCreditCodeSame);

                    /**
                     * 判断参数 UniformSocialCreditCodeSame 是否已赋值
                     * @return UniformSocialCreditCodeSame 是否已赋值
                     * 
                     */
                    bool UniformSocialCreditCodeSameHasBeenSet() const;

                    /**
                     * 获取法人姓名保持一致
false 关闭-默认
true 开启
                     * @return LegalNameSame 法人姓名保持一致
false 关闭-默认
true 开启
                     * 
                     */
                    bool GetLegalNameSame() const;

                    /**
                     * 设置法人姓名保持一致
false 关闭-默认
true 开启
                     * @param _legalNameSame 法人姓名保持一致
false 关闭-默认
true 开启
                     * 
                     */
                    void SetLegalNameSame(const bool& _legalNameSame);

                    /**
                     * 判断参数 LegalNameSame 是否已赋值
                     * @return LegalNameSame 是否已赋值
                     * 
                     */
                    bool LegalNameSameHasBeenSet() const;

                    /**
                     * 获取认证人姓名一致
false 关闭-默认
true 开启
注意：
开启后在认证过程前会校验拦截
                     * @return AdminNameSame 认证人姓名一致
false 关闭-默认
true 开启
注意：
开启后在认证过程前会校验拦截
                     * 
                     */
                    bool GetAdminNameSame() const;

                    /**
                     * 设置认证人姓名一致
false 关闭-默认
true 开启
注意：
开启后在认证过程前会校验拦截
                     * @param _adminNameSame 认证人姓名一致
false 关闭-默认
true 开启
注意：
开启后在认证过程前会校验拦截
                     * 
                     */
                    void SetAdminNameSame(const bool& _adminNameSame);

                    /**
                     * 判断参数 AdminNameSame 是否已赋值
                     * @return AdminNameSame 是否已赋值
                     * 
                     */
                    bool AdminNameSameHasBeenSet() const;

                    /**
                     * 获取认证人居民身份证件号一致
false 关闭-默认
true 开启
注意：
开启后在认证过程前会校验拦截
                     * @return AdminIdCardNumberSame 认证人居民身份证件号一致
false 关闭-默认
true 开启
注意：
开启后在认证过程前会校验拦截
                     * 
                     */
                    bool GetAdminIdCardNumberSame() const;

                    /**
                     * 设置认证人居民身份证件号一致
false 关闭-默认
true 开启
注意：
开启后在认证过程前会校验拦截
                     * @param _adminIdCardNumberSame 认证人居民身份证件号一致
false 关闭-默认
true 开启
注意：
开启后在认证过程前会校验拦截
                     * 
                     */
                    void SetAdminIdCardNumberSame(const bool& _adminIdCardNumberSame);

                    /**
                     * 判断参数 AdminIdCardNumberSame 是否已赋值
                     * @return AdminIdCardNumberSame 是否已赋值
                     * 
                     */
                    bool AdminIdCardNumberSameHasBeenSet() const;

                    /**
                     * 获取认证人手机号一致
false 关闭-默认
true 开启
注意：
开启后在认证过程前会校验拦截
                     * @return AdminMobileSame 认证人手机号一致
false 关闭-默认
true 开启
注意：
开启后在认证过程前会校验拦截
                     * 
                     */
                    bool GetAdminMobileSame() const;

                    /**
                     * 设置认证人手机号一致
false 关闭-默认
true 开启
注意：
开启后在认证过程前会校验拦截
                     * @param _adminMobileSame 认证人手机号一致
false 关闭-默认
true 开启
注意：
开启后在认证过程前会校验拦截
                     * 
                     */
                    void SetAdminMobileSame(const bool& _adminMobileSame);

                    /**
                     * 判断参数 AdminMobileSame 是否已赋值
                     * @return AdminMobileSame 是否已赋值
                     * 
                     */
                    bool AdminMobileSameHasBeenSet() const;

                    /**
                     * 获取企业名称保持一致
false 关闭-默认
true 开启
                     * @return OrganizationNameSame 企业名称保持一致
false 关闭-默认
true 开启
                     * 
                     */
                    bool GetOrganizationNameSame() const;

                    /**
                     * 设置企业名称保持一致
false 关闭-默认
true 开启
                     * @param _organizationNameSame 企业名称保持一致
false 关闭-默认
true 开启
                     * 
                     */
                    void SetOrganizationNameSame(const bool& _organizationNameSame);

                    /**
                     * 判断参数 OrganizationNameSame 是否已赋值
                     * @return OrganizationNameSame 是否已赋值
                     * 
                     */
                    bool OrganizationNameSameHasBeenSet() const;

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
                     * 获取跳转链接类型：
"PC"-PC端认证链接 
"APP"-全屏或半屏跳转小程序链接
“H5”-H5页面认证链接 "SHORT_H5"- H5认证短链
"SHORT_URL"- 跳转小程序短链	
                     * @return Endpoint 跳转链接类型：
"PC"-PC端认证链接 
"APP"-全屏或半屏跳转小程序链接
“H5”-H5页面认证链接 "SHORT_H5"- H5认证短链
"SHORT_URL"- 跳转小程序短链	
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置跳转链接类型：
"PC"-PC端认证链接 
"APP"-全屏或半屏跳转小程序链接
“H5”-H5页面认证链接 "SHORT_H5"- H5认证短链
"SHORT_URL"- 跳转小程序短链	
                     * @param _endpoint 跳转链接类型：
"PC"-PC端认证链接 
"APP"-全屏或半屏跳转小程序链接
“H5”-H5页面认证链接 "SHORT_H5"- H5认证短链
"SHORT_URL"- 跳转小程序短链	
                     * 
                     */
                    void SetEndpoint(const std::string& _endpoint);

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     * 
                     */
                    bool EndpointHasBeenSet() const;

                private:

                    /**
                     * 操作人信息
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 指定授权方式 支持多选:
1-上传授权书方式
2- 法人授权方式
3- 法人身份认证方式
                     */
                    std::vector<uint64_t> m_authorizationTypes;
                    bool m_authorizationTypesHasBeenSet;

                    /**
                     * 企业名称
EndPointType=“H5”或者"SHORT_H5"时，该参数必填

                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * 企业统一社会信用代码
                     */
                    std::string m_uniformSocialCreditCode;
                    bool m_uniformSocialCreditCodeHasBeenSet;

                    /**
                     * 法人姓名
                     */
                    std::string m_legalName;
                    bool m_legalNameHasBeenSet;

                    /**
                     * 认证完成跳转链接
                     */
                    std::string m_autoJumpUrl;
                    bool m_autoJumpUrlHasBeenSet;

                    /**
                     * 营业执照企业地址
示例：xx省xx市xx县/区xx街道
                     */
                    std::string m_organizationAddress;
                    bool m_organizationAddressHasBeenSet;

                    /**
                     * 认证人姓名
                     */
                    std::string m_adminName;
                    bool m_adminNameHasBeenSet;

                    /**
                     * 认证人手机号
                     */
                    std::string m_adminMobile;
                    bool m_adminMobileHasBeenSet;

                    /**
                     * 认证人身份证号
                     */
                    std::string m_adminIdCardNumber;
                    bool m_adminIdCardNumberHasBeenSet;

                    /**
                     * 认证人证件类型
支持以下类型
<ul><li>ID_CARD : 居民身份证  (默认值)</li>
<li>HONGKONG_AND_MACAO : 港澳居民来往内地通行证</li>
<li>HONGKONG_MACAO_AND_TAIWAN : 港澳台居民居住证(格式同居民身份证)</li></ul>

                     */
                    std::string m_adminIdCardType;
                    bool m_adminIdCardTypeHasBeenSet;

                    /**
                     * 营业执照的社会信用代码保持一致
false 关闭-默认
true 开启
                     */
                    bool m_uniformSocialCreditCodeSame;
                    bool m_uniformSocialCreditCodeSameHasBeenSet;

                    /**
                     * 法人姓名保持一致
false 关闭-默认
true 开启
                     */
                    bool m_legalNameSame;
                    bool m_legalNameSameHasBeenSet;

                    /**
                     * 认证人姓名一致
false 关闭-默认
true 开启
注意：
开启后在认证过程前会校验拦截
                     */
                    bool m_adminNameSame;
                    bool m_adminNameSameHasBeenSet;

                    /**
                     * 认证人居民身份证件号一致
false 关闭-默认
true 开启
注意：
开启后在认证过程前会校验拦截
                     */
                    bool m_adminIdCardNumberSame;
                    bool m_adminIdCardNumberSameHasBeenSet;

                    /**
                     * 认证人手机号一致
false 关闭-默认
true 开启
注意：
开启后在认证过程前会校验拦截
                     */
                    bool m_adminMobileSame;
                    bool m_adminMobileSameHasBeenSet;

                    /**
                     * 企业名称保持一致
false 关闭-默认
true 开启
                     */
                    bool m_organizationNameSame;
                    bool m_organizationNameSameHasBeenSet;

                    /**
                     * 营业执照正面照(PNG或JPG) base64格式, 大小不超过5M
                     */
                    std::string m_businessLicense;
                    bool m_businessLicenseHasBeenSet;

                    /**
                     * 跳转链接类型：
"PC"-PC端认证链接 
"APP"-全屏或半屏跳转小程序链接
“H5”-H5页面认证链接 "SHORT_H5"- H5认证短链
"SHORT_URL"- 跳转小程序短链	
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEORGANIZATIONAUTHURLREQUEST_H_
