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

<ul>
<li><strong>2</strong>: 法人授权方式</li>
<li><strong>5</strong>: 授权书+对公打款方式</li>
</ul>
                     * @return AuthorizationTypes 指定授权方式 支持多选:

<ul>
<li><strong>2</strong>: 法人授权方式</li>
<li><strong>5</strong>: 授权书+对公打款方式</li>
</ul>
                     * 
                     */
                    std::vector<uint64_t> GetAuthorizationTypes() const;

                    /**
                     * 设置指定授权方式 支持多选:

<ul>
<li><strong>2</strong>: 法人授权方式</li>
<li><strong>5</strong>: 授权书+对公打款方式</li>
</ul>
                     * @param _authorizationTypes 指定授权方式 支持多选:

<ul>
<li><strong>2</strong>: 法人授权方式</li>
<li><strong>5</strong>: 授权书+对公打款方式</li>
</ul>
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
                     * 获取认证企业名称，请确认该名称与企业营业执照中注册的名称一致。

注：

1. `如果名称中包含英文括号()，请使用中文括号（）代替。`

2. `EndPointType=“H5”或者"SHORT_H5"时，该参数必填`

                     * @return OrganizationName 认证企业名称，请确认该名称与企业营业执照中注册的名称一致。

注：

1. `如果名称中包含英文括号()，请使用中文括号（）代替。`

2. `EndPointType=“H5”或者"SHORT_H5"时，该参数必填`

                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置认证企业名称，请确认该名称与企业营业执照中注册的名称一致。

注：

1. `如果名称中包含英文括号()，请使用中文括号（）代替。`

2. `EndPointType=“H5”或者"SHORT_H5"时，该参数必填`

                     * @param _organizationName 认证企业名称，请确认该名称与企业营业执照中注册的名称一致。

注：

1. `如果名称中包含英文括号()，请使用中文括号（）代替。`

2. `EndPointType=“H5”或者"SHORT_H5"时，该参数必填`

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
                     * 获取企业法人的姓名
                     * @return LegalName 企业法人的姓名
                     * 
                     */
                    std::string GetLegalName() const;

                    /**
                     * 设置企业法人的姓名
                     * @param _legalName 企业法人的姓名
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
                     * 获取认证完成跳回的链接，最长500个字符
                     * @return AutoJumpUrl 认证完成跳回的链接，最长500个字符
                     * 
                     */
                    std::string GetAutoJumpUrl() const;

                    /**
                     * 设置认证完成跳回的链接，最长500个字符
                     * @param _autoJumpUrl 认证完成跳回的链接，最长500个字符
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
                     * @return OrganizationAddress 营业执照企业地址
                     * 
                     */
                    std::string GetOrganizationAddress() const;

                    /**
                     * 设置营业执照企业地址
                     * @param _organizationAddress 营业执照企业地址
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
                     * 获取认证人证件类型， 支持以下类型
<ul><li><b>ID_CARD</b> : 中国大陆居民身份证  (默认值)</li>
<li><b>HONGKONG_AND_MACAO</b>  : 中国港澳居民来往内地通行证</li>
<li><b>HONGKONG_MACAO_AND_TAIWAN</b>  : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>

                     * @return AdminIdCardType 认证人证件类型， 支持以下类型
<ul><li><b>ID_CARD</b> : 中国大陆居民身份证  (默认值)</li>
<li><b>HONGKONG_AND_MACAO</b>  : 中国港澳居民来往内地通行证</li>
<li><b>HONGKONG_MACAO_AND_TAIWAN</b>  : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>

                     * 
                     */
                    std::string GetAdminIdCardType() const;

                    /**
                     * 设置认证人证件类型， 支持以下类型
<ul><li><b>ID_CARD</b> : 中国大陆居民身份证  (默认值)</li>
<li><b>HONGKONG_AND_MACAO</b>  : 中国港澳居民来往内地通行证</li>
<li><b>HONGKONG_MACAO_AND_TAIWAN</b>  : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>

                     * @param _adminIdCardType 认证人证件类型， 支持以下类型
<ul><li><b>ID_CARD</b> : 中国大陆居民身份证  (默认值)</li>
<li><b>HONGKONG_AND_MACAO</b>  : 中国港澳居民来往内地通行证</li>
<li><b>HONGKONG_MACAO_AND_TAIWAN</b>  : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>

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
                     * 获取对方打开链接认证时，对方填写的营业执照的社会信用代码是否与接口上传上来的要保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>
                     * @return UniformSocialCreditCodeSame 对方打开链接认证时，对方填写的营业执照的社会信用代码是否与接口上传上来的要保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>
                     * 
                     */
                    bool GetUniformSocialCreditCodeSame() const;

                    /**
                     * 设置对方打开链接认证时，对方填写的营业执照的社会信用代码是否与接口上传上来的要保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>
                     * @param _uniformSocialCreditCodeSame 对方打开链接认证时，对方填写的营业执照的社会信用代码是否与接口上传上来的要保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>
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
                     * 获取对方打开链接认证时，法人姓名是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>

p.s. 仅在法人姓名不为空时有效
                     * @return LegalNameSame 对方打开链接认证时，法人姓名是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>

p.s. 仅在法人姓名不为空时有效
                     * 
                     */
                    bool GetLegalNameSame() const;

                    /**
                     * 设置对方打开链接认证时，法人姓名是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>

p.s. 仅在法人姓名不为空时有效
                     * @param _legalNameSame 对方打开链接认证时，法人姓名是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>

p.s. 仅在法人姓名不为空时有效
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
                     * 获取对方打开链接认证时，认证人姓名是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>

p.s. 仅在认证人姓名不为空时有效
                     * @return AdminNameSame 对方打开链接认证时，认证人姓名是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>

p.s. 仅在认证人姓名不为空时有效
                     * 
                     */
                    bool GetAdminNameSame() const;

                    /**
                     * 设置对方打开链接认证时，认证人姓名是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>

p.s. 仅在认证人姓名不为空时有效
                     * @param _adminNameSame 对方打开链接认证时，认证人姓名是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>

p.s. 仅在认证人姓名不为空时有效
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
                     * 获取对方打开链接认证时，认证人居民身份证件号是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>

p.s. 仅在认证人身份证号不为空时有效

                     * @return AdminIdCardNumberSame 对方打开链接认证时，认证人居民身份证件号是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>

p.s. 仅在认证人身份证号不为空时有效

                     * 
                     */
                    bool GetAdminIdCardNumberSame() const;

                    /**
                     * 设置对方打开链接认证时，认证人居民身份证件号是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>

p.s. 仅在认证人身份证号不为空时有效

                     * @param _adminIdCardNumberSame 对方打开链接认证时，认证人居民身份证件号是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>

p.s. 仅在认证人身份证号不为空时有效

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
                     * 获取对方打开链接认证时，认证人手机号是否要与接口传递上来的保持一致。<ul>
<li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li>
<li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li>
</ul>

p.s. 仅在认证人手机号不为空时有效
                     * @return AdminMobileSame 对方打开链接认证时，认证人手机号是否要与接口传递上来的保持一致。<ul>
<li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li>
<li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li>
</ul>

p.s. 仅在认证人手机号不为空时有效
                     * 
                     */
                    bool GetAdminMobileSame() const;

                    /**
                     * 设置对方打开链接认证时，认证人手机号是否要与接口传递上来的保持一致。<ul>
<li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li>
<li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li>
</ul>

p.s. 仅在认证人手机号不为空时有效
                     * @param _adminMobileSame 对方打开链接认证时，认证人手机号是否要与接口传递上来的保持一致。<ul>
<li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li>
<li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li>
</ul>

p.s. 仅在认证人手机号不为空时有效
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
                     * 获取对方打开链接认证时，企业名称是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>


p.s. 仅在企业名称不为空时有效
                     * @return OrganizationNameSame 对方打开链接认证时，企业名称是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>


p.s. 仅在企业名称不为空时有效
                     * 
                     */
                    bool GetOrganizationNameSame() const;

                    /**
                     * 设置对方打开链接认证时，企业名称是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>


p.s. 仅在企业名称不为空时有效
                     * @param _organizationNameSame 对方打开链接认证时，企业名称是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>


p.s. 仅在企业名称不为空时有效
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
                     * 获取营业执照正面照（支持PNG或JPG格式）需以base64格式提供，且文件大小不得超过5MB。
                     * @return BusinessLicense 营业执照正面照（支持PNG或JPG格式）需以base64格式提供，且文件大小不得超过5MB。
                     * 
                     */
                    std::string GetBusinessLicense() const;

                    /**
                     * 设置营业执照正面照（支持PNG或JPG格式）需以base64格式提供，且文件大小不得超过5MB。
                     * @param _businessLicense 营业执照正面照（支持PNG或JPG格式）需以base64格式提供，且文件大小不得超过5MB。
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

<ul>
<li><b>PC</b>：适用于PC端的认证链接</li>
<li><b>APP</b>：用于全屏或半屏跳转的小程序链接</li>
<li><b>SHORT_URL</b>：跳转小程序的链接的短链形式</li>
<li><b>H5</b>：适用于H5页面的认证链接</li>
<li><b>SHORT_H5</b>：H5认证链接的短链形式</li>
</ul>

                     * @return Endpoint 跳转链接类型：

<ul>
<li><b>PC</b>：适用于PC端的认证链接</li>
<li><b>APP</b>：用于全屏或半屏跳转的小程序链接</li>
<li><b>SHORT_URL</b>：跳转小程序的链接的短链形式</li>
<li><b>H5</b>：适用于H5页面的认证链接</li>
<li><b>SHORT_H5</b>：H5认证链接的短链形式</li>
</ul>

                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置跳转链接类型：

<ul>
<li><b>PC</b>：适用于PC端的认证链接</li>
<li><b>APP</b>：用于全屏或半屏跳转的小程序链接</li>
<li><b>SHORT_URL</b>：跳转小程序的链接的短链形式</li>
<li><b>H5</b>：适用于H5页面的认证链接</li>
<li><b>SHORT_H5</b>：H5认证链接的短链形式</li>
</ul>

                     * @param _endpoint 跳转链接类型：

<ul>
<li><b>PC</b>：适用于PC端的认证链接</li>
<li><b>APP</b>：用于全屏或半屏跳转的小程序链接</li>
<li><b>SHORT_URL</b>：跳转小程序的链接的短链形式</li>
<li><b>H5</b>：适用于H5页面的认证链接</li>
<li><b>SHORT_H5</b>：H5认证链接的短链形式</li>
</ul>

                     * 
                     */
                    void SetEndpoint(const std::string& _endpoint);

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     * 
                     */
                    bool EndpointHasBeenSet() const;

                    /**
                     * 获取指定企业初始化引导，现在可以配置如下的选项：

<b>1</b>: 启用此选项后，在企业认证的最终步骤将添加创建印章的引导。如下图的位置
![image](https://qcloudimg.tencent-cloud.cn/raw/88e0b45095a5c589de8995462ad755dc.jpg)
                     * @return Initialization 指定企业初始化引导，现在可以配置如下的选项：

<b>1</b>: 启用此选项后，在企业认证的最终步骤将添加创建印章的引导。如下图的位置
![image](https://qcloudimg.tencent-cloud.cn/raw/88e0b45095a5c589de8995462ad755dc.jpg)
                     * 
                     */
                    std::vector<uint64_t> GetInitialization() const;

                    /**
                     * 设置指定企业初始化引导，现在可以配置如下的选项：

<b>1</b>: 启用此选项后，在企业认证的最终步骤将添加创建印章的引导。如下图的位置
![image](https://qcloudimg.tencent-cloud.cn/raw/88e0b45095a5c589de8995462ad755dc.jpg)
                     * @param _initialization 指定企业初始化引导，现在可以配置如下的选项：

<b>1</b>: 启用此选项后，在企业认证的最终步骤将添加创建印章的引导。如下图的位置
![image](https://qcloudimg.tencent-cloud.cn/raw/88e0b45095a5c589de8995462ad755dc.jpg)
                     * 
                     */
                    void SetInitialization(const std::vector<uint64_t>& _initialization);

                    /**
                     * 判断参数 Initialization 是否已赋值
                     * @return Initialization 是否已赋值
                     * 
                     */
                    bool InitializationHasBeenSet() const;

                    /**
                     * 获取授权书(PNG或JPG或PDF) base64格式, 大小不超过8M 。 
授权书可以通过接口[生成企业授权书](https://qian.tencent.com/developers/companyApis/organizations/CreateOrganizationAuthFile) 来获得。
p.s. 如果上传授权书 ，需遵循以下条件 
1.  超管的信息（超管姓名，超管手机号）必须为必填参数。
2.  认证方式AuthorizationTypes必须只能是上传授权书方式 
                     * @return PowerOfAttorneys 授权书(PNG或JPG或PDF) base64格式, 大小不超过8M 。 
授权书可以通过接口[生成企业授权书](https://qian.tencent.com/developers/companyApis/organizations/CreateOrganizationAuthFile) 来获得。
p.s. 如果上传授权书 ，需遵循以下条件 
1.  超管的信息（超管姓名，超管手机号）必须为必填参数。
2.  认证方式AuthorizationTypes必须只能是上传授权书方式 
                     * 
                     */
                    std::vector<std::string> GetPowerOfAttorneys() const;

                    /**
                     * 设置授权书(PNG或JPG或PDF) base64格式, 大小不超过8M 。 
授权书可以通过接口[生成企业授权书](https://qian.tencent.com/developers/companyApis/organizations/CreateOrganizationAuthFile) 来获得。
p.s. 如果上传授权书 ，需遵循以下条件 
1.  超管的信息（超管姓名，超管手机号）必须为必填参数。
2.  认证方式AuthorizationTypes必须只能是上传授权书方式 
                     * @param _powerOfAttorneys 授权书(PNG或JPG或PDF) base64格式, 大小不超过8M 。 
授权书可以通过接口[生成企业授权书](https://qian.tencent.com/developers/companyApis/organizations/CreateOrganizationAuthFile) 来获得。
p.s. 如果上传授权书 ，需遵循以下条件 
1.  超管的信息（超管姓名，超管手机号）必须为必填参数。
2.  认证方式AuthorizationTypes必须只能是上传授权书方式 
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
                     * 操作人信息
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 指定授权方式 支持多选:

<ul>
<li><strong>2</strong>: 法人授权方式</li>
<li><strong>5</strong>: 授权书+对公打款方式</li>
</ul>
                     */
                    std::vector<uint64_t> m_authorizationTypes;
                    bool m_authorizationTypesHasBeenSet;

                    /**
                     * 认证企业名称，请确认该名称与企业营业执照中注册的名称一致。

注：

1. `如果名称中包含英文括号()，请使用中文括号（）代替。`

2. `EndPointType=“H5”或者"SHORT_H5"时，该参数必填`

                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * 企业统一社会信用代码
                     */
                    std::string m_uniformSocialCreditCode;
                    bool m_uniformSocialCreditCodeHasBeenSet;

                    /**
                     * 企业法人的姓名
                     */
                    std::string m_legalName;
                    bool m_legalNameHasBeenSet;

                    /**
                     * 认证完成跳回的链接，最长500个字符
                     */
                    std::string m_autoJumpUrl;
                    bool m_autoJumpUrlHasBeenSet;

                    /**
                     * 营业执照企业地址
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
                     * 认证人证件类型， 支持以下类型
<ul><li><b>ID_CARD</b> : 中国大陆居民身份证  (默认值)</li>
<li><b>HONGKONG_AND_MACAO</b>  : 中国港澳居民来往内地通行证</li>
<li><b>HONGKONG_MACAO_AND_TAIWAN</b>  : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>

                     */
                    std::string m_adminIdCardType;
                    bool m_adminIdCardTypeHasBeenSet;

                    /**
                     * 对方打开链接认证时，对方填写的营业执照的社会信用代码是否与接口上传上来的要保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>
                     */
                    bool m_uniformSocialCreditCodeSame;
                    bool m_uniformSocialCreditCodeSameHasBeenSet;

                    /**
                     * 对方打开链接认证时，法人姓名是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>

p.s. 仅在法人姓名不为空时有效
                     */
                    bool m_legalNameSame;
                    bool m_legalNameSameHasBeenSet;

                    /**
                     * 对方打开链接认证时，认证人姓名是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>

p.s. 仅在认证人姓名不为空时有效
                     */
                    bool m_adminNameSame;
                    bool m_adminNameSameHasBeenSet;

                    /**
                     * 对方打开链接认证时，认证人居民身份证件号是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>

p.s. 仅在认证人身份证号不为空时有效

                     */
                    bool m_adminIdCardNumberSame;
                    bool m_adminIdCardNumberSameHasBeenSet;

                    /**
                     * 对方打开链接认证时，认证人手机号是否要与接口传递上来的保持一致。<ul>
<li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li>
<li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li>
</ul>

p.s. 仅在认证人手机号不为空时有效
                     */
                    bool m_adminMobileSame;
                    bool m_adminMobileSameHasBeenSet;

                    /**
                     * 对方打开链接认证时，企业名称是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>


p.s. 仅在企业名称不为空时有效
                     */
                    bool m_organizationNameSame;
                    bool m_organizationNameSameHasBeenSet;

                    /**
                     * 营业执照正面照（支持PNG或JPG格式）需以base64格式提供，且文件大小不得超过5MB。
                     */
                    std::string m_businessLicense;
                    bool m_businessLicenseHasBeenSet;

                    /**
                     * 跳转链接类型：

<ul>
<li><b>PC</b>：适用于PC端的认证链接</li>
<li><b>APP</b>：用于全屏或半屏跳转的小程序链接</li>
<li><b>SHORT_URL</b>：跳转小程序的链接的短链形式</li>
<li><b>H5</b>：适用于H5页面的认证链接</li>
<li><b>SHORT_H5</b>：H5认证链接的短链形式</li>
</ul>

                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * 指定企业初始化引导，现在可以配置如下的选项：

<b>1</b>: 启用此选项后，在企业认证的最终步骤将添加创建印章的引导。如下图的位置
![image](https://qcloudimg.tencent-cloud.cn/raw/88e0b45095a5c589de8995462ad755dc.jpg)
                     */
                    std::vector<uint64_t> m_initialization;
                    bool m_initializationHasBeenSet;

                    /**
                     * 授权书(PNG或JPG或PDF) base64格式, 大小不超过8M 。 
授权书可以通过接口[生成企业授权书](https://qian.tencent.com/developers/companyApis/organizations/CreateOrganizationAuthFile) 来获得。
p.s. 如果上传授权书 ，需遵循以下条件 
1.  超管的信息（超管姓名，超管手机号）必须为必填参数。
2.  认证方式AuthorizationTypes必须只能是上传授权书方式 
                     */
                    std::vector<std::string> m_powerOfAttorneys;
                    bool m_powerOfAttorneysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEORGANIZATIONAUTHURLREQUEST_H_
