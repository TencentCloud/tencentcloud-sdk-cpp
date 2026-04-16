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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEORGANIZATIONAUTHURLREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEORGANIZATIONAUTHURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/JumpEvent.h>


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
                     * 获取<p>操作人信息</p>
                     * @return Operator <p>操作人信息</p>
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置<p>操作人信息</p>
                     * @param _operator <p>操作人信息</p>
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
                     * 获取<p>指定授权方式 支持多选:</p><ul><li><strong>2</strong>: 法人授权方式</li><li><strong>5</strong>: 授权书+对公打款方式</li></ul>
                     * @return AuthorizationTypes <p>指定授权方式 支持多选:</p><ul><li><strong>2</strong>: 法人授权方式</li><li><strong>5</strong>: 授权书+对公打款方式</li></ul>
                     * 
                     */
                    std::vector<uint64_t> GetAuthorizationTypes() const;

                    /**
                     * 设置<p>指定授权方式 支持多选:</p><ul><li><strong>2</strong>: 法人授权方式</li><li><strong>5</strong>: 授权书+对公打款方式</li></ul>
                     * @param _authorizationTypes <p>指定授权方式 支持多选:</p><ul><li><strong>2</strong>: 法人授权方式</li><li><strong>5</strong>: 授权书+对公打款方式</li></ul>
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
                     * 获取<p>认证企业名称，请确认该名称与企业营业执照中注册的名称一致。</p><p>注：</p><ol><li><p><code>如果名称中包含英文括号()，请使用中文括号（）代替。</code></p></li><li><p><code>EndPointType=“H5”或者&quot;SHORT_H5&quot;时，该参数必填</code></p></li></ol>
                     * @return OrganizationName <p>认证企业名称，请确认该名称与企业营业执照中注册的名称一致。</p><p>注：</p><ol><li><p><code>如果名称中包含英文括号()，请使用中文括号（）代替。</code></p></li><li><p><code>EndPointType=“H5”或者&quot;SHORT_H5&quot;时，该参数必填</code></p></li></ol>
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置<p>认证企业名称，请确认该名称与企业营业执照中注册的名称一致。</p><p>注：</p><ol><li><p><code>如果名称中包含英文括号()，请使用中文括号（）代替。</code></p></li><li><p><code>EndPointType=“H5”或者&quot;SHORT_H5&quot;时，该参数必填</code></p></li></ol>
                     * @param _organizationName <p>认证企业名称，请确认该名称与企业营业执照中注册的名称一致。</p><p>注：</p><ol><li><p><code>如果名称中包含英文括号()，请使用中文括号（）代替。</code></p></li><li><p><code>EndPointType=“H5”或者&quot;SHORT_H5&quot;时，该参数必填</code></p></li></ol>
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
                     * 获取<p>企业统一社会信用代码</p>
                     * @return UniformSocialCreditCode <p>企业统一社会信用代码</p>
                     * 
                     */
                    std::string GetUniformSocialCreditCode() const;

                    /**
                     * 设置<p>企业统一社会信用代码</p>
                     * @param _uniformSocialCreditCode <p>企业统一社会信用代码</p>
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
                     * 获取<p>企业法人的姓名</p>
                     * @return LegalName <p>企业法人的姓名</p>
                     * 
                     */
                    std::string GetLegalName() const;

                    /**
                     * 设置<p>企业法人的姓名</p>
                     * @param _legalName <p>企业法人的姓名</p>
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
                     * 获取<p><font color="red">即将废弃</font>，入参请使用JumpEvents。<br>认证完成跳回的链接，最长500个字符。</p>
                     * @return AutoJumpUrl <p><font color="red">即将废弃</font>，入参请使用JumpEvents。<br>认证完成跳回的链接，最长500个字符。</p>
                     * 
                     */
                    std::string GetAutoJumpUrl() const;

                    /**
                     * 设置<p><font color="red">即将废弃</font>，入参请使用JumpEvents。<br>认证完成跳回的链接，最长500个字符。</p>
                     * @param _autoJumpUrl <p><font color="red">即将废弃</font>，入参请使用JumpEvents。<br>认证完成跳回的链接，最长500个字符。</p>
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
                     * 获取<p>营业执照企业地址</p>
                     * @return OrganizationAddress <p>营业执照企业地址</p>
                     * 
                     */
                    std::string GetOrganizationAddress() const;

                    /**
                     * 设置<p>营业执照企业地址</p>
                     * @param _organizationAddress <p>营业执照企业地址</p>
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
                     * 获取<p>认证人姓名</p>
                     * @return AdminName <p>认证人姓名</p>
                     * 
                     */
                    std::string GetAdminName() const;

                    /**
                     * 设置<p>认证人姓名</p>
                     * @param _adminName <p>认证人姓名</p>
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
                     * 获取<p>认证人手机号</p>
                     * @return AdminMobile <p>认证人手机号</p>
                     * 
                     */
                    std::string GetAdminMobile() const;

                    /**
                     * 设置<p>认证人手机号</p>
                     * @param _adminMobile <p>认证人手机号</p>
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
                     * 获取<p>认证人身份证号</p>
                     * @return AdminIdCardNumber <p>认证人身份证号</p>
                     * 
                     */
                    std::string GetAdminIdCardNumber() const;

                    /**
                     * 设置<p>认证人身份证号</p>
                     * @param _adminIdCardNumber <p>认证人身份证号</p>
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
                     * 获取<p>认证人证件类型， 支持以下类型</p><ul><li><b>ID_CARD</b> : 中国大陆居民身份证  (默认值)</li><li><b>HONGKONG_AND_MACAO</b>  : 中国港澳居民来往内地通行证</li><li><b>HONGKONG_MACAO_AND_TAIWAN</b>  : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>
                     * @return AdminIdCardType <p>认证人证件类型， 支持以下类型</p><ul><li><b>ID_CARD</b> : 中国大陆居民身份证  (默认值)</li><li><b>HONGKONG_AND_MACAO</b>  : 中国港澳居民来往内地通行证</li><li><b>HONGKONG_MACAO_AND_TAIWAN</b>  : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>
                     * 
                     */
                    std::string GetAdminIdCardType() const;

                    /**
                     * 设置<p>认证人证件类型， 支持以下类型</p><ul><li><b>ID_CARD</b> : 中国大陆居民身份证  (默认值)</li><li><b>HONGKONG_AND_MACAO</b>  : 中国港澳居民来往内地通行证</li><li><b>HONGKONG_MACAO_AND_TAIWAN</b>  : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>
                     * @param _adminIdCardType <p>认证人证件类型， 支持以下类型</p><ul><li><b>ID_CARD</b> : 中国大陆居民身份证  (默认值)</li><li><b>HONGKONG_AND_MACAO</b>  : 中国港澳居民来往内地通行证</li><li><b>HONGKONG_MACAO_AND_TAIWAN</b>  : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>
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
                     * 获取<p>对方打开链接认证时，对方填写的营业执照的社会信用代码是否与接口上传上来的要保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul></p>
                     * @return UniformSocialCreditCodeSame <p>对方打开链接认证时，对方填写的营业执照的社会信用代码是否与接口上传上来的要保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul></p>
                     * 
                     */
                    bool GetUniformSocialCreditCodeSame() const;

                    /**
                     * 设置<p>对方打开链接认证时，对方填写的营业执照的社会信用代码是否与接口上传上来的要保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul></p>
                     * @param _uniformSocialCreditCodeSame <p>对方打开链接认证时，对方填写的营业执照的社会信用代码是否与接口上传上来的要保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul></p>
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
                     * 获取<p>对方打开链接认证时，法人姓名是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul></p><p>p.s. 仅在法人姓名不为空时有效</p>
                     * @return LegalNameSame <p>对方打开链接认证时，法人姓名是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul></p><p>p.s. 仅在法人姓名不为空时有效</p>
                     * 
                     */
                    bool GetLegalNameSame() const;

                    /**
                     * 设置<p>对方打开链接认证时，法人姓名是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul></p><p>p.s. 仅在法人姓名不为空时有效</p>
                     * @param _legalNameSame <p>对方打开链接认证时，法人姓名是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul></p><p>p.s. 仅在法人姓名不为空时有效</p>
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
                     * 获取<p>对方打开链接认证时，认证人姓名是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul></p><p>p.s. 仅在认证人姓名不为空时有效</p>
                     * @return AdminNameSame <p>对方打开链接认证时，认证人姓名是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul></p><p>p.s. 仅在认证人姓名不为空时有效</p>
                     * 
                     */
                    bool GetAdminNameSame() const;

                    /**
                     * 设置<p>对方打开链接认证时，认证人姓名是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul></p><p>p.s. 仅在认证人姓名不为空时有效</p>
                     * @param _adminNameSame <p>对方打开链接认证时，认证人姓名是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul></p><p>p.s. 仅在认证人姓名不为空时有效</p>
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
                     * 获取<p>对方打开链接认证时，认证人居民身份证件号是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul></p><p>p.s. 仅在认证人身份证号不为空时有效</p>
                     * @return AdminIdCardNumberSame <p>对方打开链接认证时，认证人居民身份证件号是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul></p><p>p.s. 仅在认证人身份证号不为空时有效</p>
                     * 
                     */
                    bool GetAdminIdCardNumberSame() const;

                    /**
                     * 设置<p>对方打开链接认证时，认证人居民身份证件号是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul></p><p>p.s. 仅在认证人身份证号不为空时有效</p>
                     * @param _adminIdCardNumberSame <p>对方打开链接认证时，认证人居民身份证件号是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul></p><p>p.s. 仅在认证人身份证号不为空时有效</p>
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
                     * 获取<p>对方打开链接认证时，认证人手机号是否要与接口传递上来的保持一致。</p><ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul><p>p.s. 仅在认证人手机号不为空时有效</p>
                     * @return AdminMobileSame <p>对方打开链接认证时，认证人手机号是否要与接口传递上来的保持一致。</p><ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul><p>p.s. 仅在认证人手机号不为空时有效</p>
                     * 
                     */
                    bool GetAdminMobileSame() const;

                    /**
                     * 设置<p>对方打开链接认证时，认证人手机号是否要与接口传递上来的保持一致。</p><ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul><p>p.s. 仅在认证人手机号不为空时有效</p>
                     * @param _adminMobileSame <p>对方打开链接认证时，认证人手机号是否要与接口传递上来的保持一致。</p><ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul><p>p.s. 仅在认证人手机号不为空时有效</p>
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
                     * 获取<p>对方打开链接认证时，企业名称是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul></p><p>p.s. 仅在企业名称不为空时有效</p>
                     * @return OrganizationNameSame <p>对方打开链接认证时，企业名称是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul></p><p>p.s. 仅在企业名称不为空时有效</p>
                     * 
                     */
                    bool GetOrganizationNameSame() const;

                    /**
                     * 设置<p>对方打开链接认证时，企业名称是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul></p><p>p.s. 仅在企业名称不为空时有效</p>
                     * @param _organizationNameSame <p>对方打开链接认证时，企业名称是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul></p><p>p.s. 仅在企业名称不为空时有效</p>
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
                     * 获取<p>营业执照正面照（支持PNG或JPG格式）需以base64格式提供，且文件大小不得超过5MB。</p>
                     * @return BusinessLicense <p>营业执照正面照（支持PNG或JPG格式）需以base64格式提供，且文件大小不得超过5MB。</p>
                     * 
                     */
                    std::string GetBusinessLicense() const;

                    /**
                     * 设置<p>营业执照正面照（支持PNG或JPG格式）需以base64格式提供，且文件大小不得超过5MB。</p>
                     * @param _businessLicense <p>营业执照正面照（支持PNG或JPG格式）需以base64格式提供，且文件大小不得超过5MB。</p>
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
                     * 获取<p>跳转链接类型：</p><ul><li><b>PC</b>：适用于PC端的认证链接</li><li><b>APP</b>：用于全屏或半屏跳转的小程序链接</li><li><b>SHORT_URL</b>：跳转小程序的链接的短链形式</li><li><b>H5</b>：适用于H5页面的认证链接</li><li><b>SHORT_H5</b>：H5认证链接的短链形式</li></ul>
                     * @return Endpoint <p>跳转链接类型：</p><ul><li><b>PC</b>：适用于PC端的认证链接</li><li><b>APP</b>：用于全屏或半屏跳转的小程序链接</li><li><b>SHORT_URL</b>：跳转小程序的链接的短链形式</li><li><b>H5</b>：适用于H5页面的认证链接</li><li><b>SHORT_H5</b>：H5认证链接的短链形式</li></ul>
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置<p>跳转链接类型：</p><ul><li><b>PC</b>：适用于PC端的认证链接</li><li><b>APP</b>：用于全屏或半屏跳转的小程序链接</li><li><b>SHORT_URL</b>：跳转小程序的链接的短链形式</li><li><b>H5</b>：适用于H5页面的认证链接</li><li><b>SHORT_H5</b>：H5认证链接的短链形式</li></ul>
                     * @param _endpoint <p>跳转链接类型：</p><ul><li><b>PC</b>：适用于PC端的认证链接</li><li><b>APP</b>：用于全屏或半屏跳转的小程序链接</li><li><b>SHORT_URL</b>：跳转小程序的链接的短链形式</li><li><b>H5</b>：适用于H5页面的认证链接</li><li><b>SHORT_H5</b>：H5认证链接的短链形式</li></ul>
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
                     * 获取<p>指定企业初始化引导，现在可以配置如下的选项：</p><p><b>1</b>: 启用此选项后，在企业认证的最终步骤将添加创建印章的引导。如下图的位置<br><img src="https://qcloudimg.tencent-cloud.cn/raw/88e0b45095a5c589de8995462ad755dc.jpg" alt="image"><br><b>2</b>:开通企业授权API签署协议，目前仅支持PC网页端，即Endpoint=PC（该功能需联系电子签客服开通）<br><img src="https://qcloudimg.tencent-cloud.cn/raw/4d40b098acf7c04afd1c451a4f98fc90.png" alt="image"></p><p>枚举值：</p><ul><li>1： 创建印章</li><li>2： 开通企业授权API签署协议</li></ul>
                     * @return Initialization <p>指定企业初始化引导，现在可以配置如下的选项：</p><p><b>1</b>: 启用此选项后，在企业认证的最终步骤将添加创建印章的引导。如下图的位置<br><img src="https://qcloudimg.tencent-cloud.cn/raw/88e0b45095a5c589de8995462ad755dc.jpg" alt="image"><br><b>2</b>:开通企业授权API签署协议，目前仅支持PC网页端，即Endpoint=PC（该功能需联系电子签客服开通）<br><img src="https://qcloudimg.tencent-cloud.cn/raw/4d40b098acf7c04afd1c451a4f98fc90.png" alt="image"></p><p>枚举值：</p><ul><li>1： 创建印章</li><li>2： 开通企业授权API签署协议</li></ul>
                     * 
                     */
                    std::vector<uint64_t> GetInitialization() const;

                    /**
                     * 设置<p>指定企业初始化引导，现在可以配置如下的选项：</p><p><b>1</b>: 启用此选项后，在企业认证的最终步骤将添加创建印章的引导。如下图的位置<br><img src="https://qcloudimg.tencent-cloud.cn/raw/88e0b45095a5c589de8995462ad755dc.jpg" alt="image"><br><b>2</b>:开通企业授权API签署协议，目前仅支持PC网页端，即Endpoint=PC（该功能需联系电子签客服开通）<br><img src="https://qcloudimg.tencent-cloud.cn/raw/4d40b098acf7c04afd1c451a4f98fc90.png" alt="image"></p><p>枚举值：</p><ul><li>1： 创建印章</li><li>2： 开通企业授权API签署协议</li></ul>
                     * @param _initialization <p>指定企业初始化引导，现在可以配置如下的选项：</p><p><b>1</b>: 启用此选项后，在企业认证的最终步骤将添加创建印章的引导。如下图的位置<br><img src="https://qcloudimg.tencent-cloud.cn/raw/88e0b45095a5c589de8995462ad755dc.jpg" alt="image"><br><b>2</b>:开通企业授权API签署协议，目前仅支持PC网页端，即Endpoint=PC（该功能需联系电子签客服开通）<br><img src="https://qcloudimg.tencent-cloud.cn/raw/4d40b098acf7c04afd1c451a4f98fc90.png" alt="image"></p><p>枚举值：</p><ul><li>1： 创建印章</li><li>2： 开通企业授权API签署协议</li></ul>
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
                     * 获取<p>授权书(PNG或JPG或PDF) base64格式, 大小不超过8M 。<br>授权书可以通过接口<a href="https://qian.tencent.com/developers/companyApis/organizations/CreateOrganizationAuthFile">生成企业授权书</a> 来获得。<br>p.s. 如果上传授权书 ，需遵循以下条件 </p><ol><li>超管的信息（超管姓名，超管手机号）必须为必填参数。</li><li>认证方式AuthorizationTypes必须只能是上传授权书方式</li></ol>
                     * @return PowerOfAttorneys <p>授权书(PNG或JPG或PDF) base64格式, 大小不超过8M 。<br>授权书可以通过接口<a href="https://qian.tencent.com/developers/companyApis/organizations/CreateOrganizationAuthFile">生成企业授权书</a> 来获得。<br>p.s. 如果上传授权书 ，需遵循以下条件 </p><ol><li>超管的信息（超管姓名，超管手机号）必须为必填参数。</li><li>认证方式AuthorizationTypes必须只能是上传授权书方式</li></ol>
                     * 
                     */
                    std::vector<std::string> GetPowerOfAttorneys() const;

                    /**
                     * 设置<p>授权书(PNG或JPG或PDF) base64格式, 大小不超过8M 。<br>授权书可以通过接口<a href="https://qian.tencent.com/developers/companyApis/organizations/CreateOrganizationAuthFile">生成企业授权书</a> 来获得。<br>p.s. 如果上传授权书 ，需遵循以下条件 </p><ol><li>超管的信息（超管姓名，超管手机号）必须为必填参数。</li><li>认证方式AuthorizationTypes必须只能是上传授权书方式</li></ol>
                     * @param _powerOfAttorneys <p>授权书(PNG或JPG或PDF) base64格式, 大小不超过8M 。<br>授权书可以通过接口<a href="https://qian.tencent.com/developers/companyApis/organizations/CreateOrganizationAuthFile">生成企业授权书</a> 来获得。<br>p.s. 如果上传授权书 ，需遵循以下条件 </p><ol><li>超管的信息（超管姓名，超管手机号）必须为必填参数。</li><li>认证方式AuthorizationTypes必须只能是上传授权书方式</li></ol>
                     * 
                     */
                    void SetPowerOfAttorneys(const std::vector<std::string>& _powerOfAttorneys);

                    /**
                     * 判断参数 PowerOfAttorneys 是否已赋值
                     * @return PowerOfAttorneys 是否已赋值
                     * 
                     */
                    bool PowerOfAttorneysHasBeenSet() const;

                    /**
                     * 获取<p>调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为 4096长度。</p><p>在. 企业引导企业实名认证后回调中，该字段的信息将原封不动地透传给贵方。回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_staffs" target="_blank">回调通知</a>模块。</p>
                     * @return UserData <p>调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为 4096长度。</p><p>在. 企业引导企业实名认证后回调中，该字段的信息将原封不动地透传给贵方。回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_staffs" target="_blank">回调通知</a>模块。</p>
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置<p>调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为 4096长度。</p><p>在. 企业引导企业实名认证后回调中，该字段的信息将原封不动地透传给贵方。回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_staffs" target="_blank">回调通知</a>模块。</p>
                     * @param _userData <p>调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为 4096长度。</p><p>在. 企业引导企业实名认证后回调中，该字段的信息将原封不动地透传给贵方。回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_staffs" target="_blank">回调通知</a>模块。</p>
                     * 
                     */
                    void SetUserData(const std::string& _userData);

                    /**
                     * 判断参数 UserData 是否已赋值
                     * @return UserData 是否已赋值
                     * 
                     */
                    bool UserDataHasBeenSet() const;

                    /**
                     * 获取<p>组织机构对公打款账号，账户名跟企业名称一致。</p><p>p.s.<br>只有认证方式是授权书+对公打款时才生效。</p>
                     * @return BankAccountNumber <p>组织机构对公打款账号，账户名跟企业名称一致。</p><p>p.s.<br>只有认证方式是授权书+对公打款时才生效。</p>
                     * 
                     */
                    std::string GetBankAccountNumber() const;

                    /**
                     * 设置<p>组织机构对公打款账号，账户名跟企业名称一致。</p><p>p.s.<br>只有认证方式是授权书+对公打款时才生效。</p>
                     * @param _bankAccountNumber <p>组织机构对公打款账号，账户名跟企业名称一致。</p><p>p.s.<br>只有认证方式是授权书+对公打款时才生效。</p>
                     * 
                     */
                    void SetBankAccountNumber(const std::string& _bankAccountNumber);

                    /**
                     * 判断参数 BankAccountNumber 是否已赋值
                     * @return BankAccountNumber 是否已赋值
                     * 
                     */
                    bool BankAccountNumberHasBeenSet() const;

                    /**
                     * 获取<p>对方打开链接认证时，对公打款账号是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul></p><p>p.s. 仅在对公打款不为空时有效</p>
                     * @return BankAccountNumberSame <p>对方打开链接认证时，对公打款账号是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul></p><p>p.s. 仅在对公打款不为空时有效</p>
                     * 
                     */
                    bool GetBankAccountNumberSame() const;

                    /**
                     * 设置<p>对方打开链接认证时，对公打款账号是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul></p><p>p.s. 仅在对公打款不为空时有效</p>
                     * @param _bankAccountNumberSame <p>对方打开链接认证时，对公打款账号是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul></p><p>p.s. 仅在对公打款不为空时有效</p>
                     * 
                     */
                    void SetBankAccountNumberSame(const bool& _bankAccountNumberSame);

                    /**
                     * 判断参数 BankAccountNumberSame 是否已赋值
                     * @return BankAccountNumberSame 是否已赋值
                     * 
                     */
                    bool BankAccountNumberSameHasBeenSet() const;

                    /**
                     * 获取<p>跳转事件，其中包括认证期间收录，授权书审核，企业认证的回跳事件。<br>p.s.<br>Endpoint如果是APP 类型，请传递JumpUrl为<font color="red">&quot;true&quot; </font><br>如果 Endpoint 是 H5 类型，请参考文档跳转电子签H5 </p><p>p.s. 如果Endpoint是 APP，传递的跳转地址无效，不会进行跳转，仅会进行回跳。</p>
                     * @return JumpEvents <p>跳转事件，其中包括认证期间收录，授权书审核，企业认证的回跳事件。<br>p.s.<br>Endpoint如果是APP 类型，请传递JumpUrl为<font color="red">&quot;true&quot; </font><br>如果 Endpoint 是 H5 类型，请参考文档跳转电子签H5 </p><p>p.s. 如果Endpoint是 APP，传递的跳转地址无效，不会进行跳转，仅会进行回跳。</p>
                     * 
                     */
                    std::vector<JumpEvent> GetJumpEvents() const;

                    /**
                     * 设置<p>跳转事件，其中包括认证期间收录，授权书审核，企业认证的回跳事件。<br>p.s.<br>Endpoint如果是APP 类型，请传递JumpUrl为<font color="red">&quot;true&quot; </font><br>如果 Endpoint 是 H5 类型，请参考文档跳转电子签H5 </p><p>p.s. 如果Endpoint是 APP，传递的跳转地址无效，不会进行跳转，仅会进行回跳。</p>
                     * @param _jumpEvents <p>跳转事件，其中包括认证期间收录，授权书审核，企业认证的回跳事件。<br>p.s.<br>Endpoint如果是APP 类型，请传递JumpUrl为<font color="red">&quot;true&quot; </font><br>如果 Endpoint 是 H5 类型，请参考文档跳转电子签H5 </p><p>p.s. 如果Endpoint是 APP，传递的跳转地址无效，不会进行跳转，仅会进行回跳。</p>
                     * 
                     */
                    void SetJumpEvents(const std::vector<JumpEvent>& _jumpEvents);

                    /**
                     * 判断参数 JumpEvents 是否已赋值
                     * @return JumpEvents 是否已赋值
                     * 
                     */
                    bool JumpEventsHasBeenSet() const;

                    /**
                     * 获取<p>企业证照类型：<ul><li> <strong>USCC</strong> :(默认)工商组织营业执照</li><li> <strong>PRACTICELICENSEOFMEDICALINSTITUTION</strong> :医疗机构执业许可证</li><li> <strong>CLINICFILLINGCERTIFICATE</strong> :诊所备案证</li></ul></p><p>注意 ：<br>如果企业证照类型是医疗机构执业许可证或者诊所备案证，则参数设置企业授权方式(AuthorizationTypes)和企业认证方式(AuthorizationMethods)都无效.<br>医疗机构执业许可证和诊所备案证的企业授权方式  仅有授权书的方式。企业认证仅有上传营业执照的方式。</p>
                     * @return OrganizationIdCardType <p>企业证照类型：<ul><li> <strong>USCC</strong> :(默认)工商组织营业执照</li><li> <strong>PRACTICELICENSEOFMEDICALINSTITUTION</strong> :医疗机构执业许可证</li><li> <strong>CLINICFILLINGCERTIFICATE</strong> :诊所备案证</li></ul></p><p>注意 ：<br>如果企业证照类型是医疗机构执业许可证或者诊所备案证，则参数设置企业授权方式(AuthorizationTypes)和企业认证方式(AuthorizationMethods)都无效.<br>医疗机构执业许可证和诊所备案证的企业授权方式  仅有授权书的方式。企业认证仅有上传营业执照的方式。</p>
                     * 
                     */
                    std::string GetOrganizationIdCardType() const;

                    /**
                     * 设置<p>企业证照类型：<ul><li> <strong>USCC</strong> :(默认)工商组织营业执照</li><li> <strong>PRACTICELICENSEOFMEDICALINSTITUTION</strong> :医疗机构执业许可证</li><li> <strong>CLINICFILLINGCERTIFICATE</strong> :诊所备案证</li></ul></p><p>注意 ：<br>如果企业证照类型是医疗机构执业许可证或者诊所备案证，则参数设置企业授权方式(AuthorizationTypes)和企业认证方式(AuthorizationMethods)都无效.<br>医疗机构执业许可证和诊所备案证的企业授权方式  仅有授权书的方式。企业认证仅有上传营业执照的方式。</p>
                     * @param _organizationIdCardType <p>企业证照类型：<ul><li> <strong>USCC</strong> :(默认)工商组织营业执照</li><li> <strong>PRACTICELICENSEOFMEDICALINSTITUTION</strong> :医疗机构执业许可证</li><li> <strong>CLINICFILLINGCERTIFICATE</strong> :诊所备案证</li></ul></p><p>注意 ：<br>如果企业证照类型是医疗机构执业许可证或者诊所备案证，则参数设置企业授权方式(AuthorizationTypes)和企业认证方式(AuthorizationMethods)都无效.<br>医疗机构执业许可证和诊所备案证的企业授权方式  仅有授权书的方式。企业认证仅有上传营业执照的方式。</p>
                     * 
                     */
                    void SetOrganizationIdCardType(const std::string& _organizationIdCardType);

                    /**
                     * 判断参数 OrganizationIdCardType 是否已赋值
                     * @return OrganizationIdCardType 是否已赋值
                     * 
                     */
                    bool OrganizationIdCardTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否允许编辑企业注册时的证照类型</p><p>true:不允许编辑。</p><p>false:允许编辑（默认值）。</p><p>注意：<br>入参中的OrganizationIdCardType值不为空的时候，才可设置为不可编辑。</p>
                     * @return OrganizationIdCardTypeSame <p>是否允许编辑企业注册时的证照类型</p><p>true:不允许编辑。</p><p>false:允许编辑（默认值）。</p><p>注意：<br>入参中的OrganizationIdCardType值不为空的时候，才可设置为不可编辑。</p>
                     * 
                     */
                    bool GetOrganizationIdCardTypeSame() const;

                    /**
                     * 设置<p>是否允许编辑企业注册时的证照类型</p><p>true:不允许编辑。</p><p>false:允许编辑（默认值）。</p><p>注意：<br>入参中的OrganizationIdCardType值不为空的时候，才可设置为不可编辑。</p>
                     * @param _organizationIdCardTypeSame <p>是否允许编辑企业注册时的证照类型</p><p>true:不允许编辑。</p><p>false:允许编辑（默认值）。</p><p>注意：<br>入参中的OrganizationIdCardType值不为空的时候，才可设置为不可编辑。</p>
                     * 
                     */
                    void SetOrganizationIdCardTypeSame(const bool& _organizationIdCardTypeSame);

                    /**
                     * 判断参数 OrganizationIdCardTypeSame 是否已赋值
                     * @return OrganizationIdCardTypeSame 是否已赋值
                     * 
                     */
                    bool OrganizationIdCardTypeSameHasBeenSet() const;

                    /**
                     * 获取<p>指定企业认证的授权方式 支持多选:</p><ul><li><strong>1</strong>: 上传营业执照</li><li><strong>2</strong>: 腾讯云快速认证</li><li><strong>3</strong>: 腾讯商户号授权<font color="red">（仅支持小程序端）</font></li></ul><p>注意：<br>1.如果没有指定，则默认是1,仅有上传营业执照。<br>2.H5 仅支持上传营业执照。</p>
                     * @return AuthorizationMethod <p>指定企业认证的授权方式 支持多选:</p><ul><li><strong>1</strong>: 上传营业执照</li><li><strong>2</strong>: 腾讯云快速认证</li><li><strong>3</strong>: 腾讯商户号授权<font color="red">（仅支持小程序端）</font></li></ul><p>注意：<br>1.如果没有指定，则默认是1,仅有上传营业执照。<br>2.H5 仅支持上传营业执照。</p>
                     * 
                     */
                    std::vector<uint64_t> GetAuthorizationMethod() const;

                    /**
                     * 设置<p>指定企业认证的授权方式 支持多选:</p><ul><li><strong>1</strong>: 上传营业执照</li><li><strong>2</strong>: 腾讯云快速认证</li><li><strong>3</strong>: 腾讯商户号授权<font color="red">（仅支持小程序端）</font></li></ul><p>注意：<br>1.如果没有指定，则默认是1,仅有上传营业执照。<br>2.H5 仅支持上传营业执照。</p>
                     * @param _authorizationMethod <p>指定企业认证的授权方式 支持多选:</p><ul><li><strong>1</strong>: 上传营业执照</li><li><strong>2</strong>: 腾讯云快速认证</li><li><strong>3</strong>: 腾讯商户号授权<font color="red">（仅支持小程序端）</font></li></ul><p>注意：<br>1.如果没有指定，则默认是1,仅有上传营业执照。<br>2.H5 仅支持上传营业执照。</p>
                     * 
                     */
                    void SetAuthorizationMethod(const std::vector<uint64_t>& _authorizationMethod);

                    /**
                     * 判断参数 AuthorizationMethod 是否已赋值
                     * @return AuthorizationMethod 是否已赋值
                     * 
                     */
                    bool AuthorizationMethodHasBeenSet() const;

                private:

                    /**
                     * <p>操作人信息</p>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>指定授权方式 支持多选:</p><ul><li><strong>2</strong>: 法人授权方式</li><li><strong>5</strong>: 授权书+对公打款方式</li></ul>
                     */
                    std::vector<uint64_t> m_authorizationTypes;
                    bool m_authorizationTypesHasBeenSet;

                    /**
                     * <p>认证企业名称，请确认该名称与企业营业执照中注册的名称一致。</p><p>注：</p><ol><li><p><code>如果名称中包含英文括号()，请使用中文括号（）代替。</code></p></li><li><p><code>EndPointType=“H5”或者&quot;SHORT_H5&quot;时，该参数必填</code></p></li></ol>
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * <p>企业统一社会信用代码</p>
                     */
                    std::string m_uniformSocialCreditCode;
                    bool m_uniformSocialCreditCodeHasBeenSet;

                    /**
                     * <p>企业法人的姓名</p>
                     */
                    std::string m_legalName;
                    bool m_legalNameHasBeenSet;

                    /**
                     * <p><font color="red">即将废弃</font>，入参请使用JumpEvents。<br>认证完成跳回的链接，最长500个字符。</p>
                     */
                    std::string m_autoJumpUrl;
                    bool m_autoJumpUrlHasBeenSet;

                    /**
                     * <p>营业执照企业地址</p>
                     */
                    std::string m_organizationAddress;
                    bool m_organizationAddressHasBeenSet;

                    /**
                     * <p>认证人姓名</p>
                     */
                    std::string m_adminName;
                    bool m_adminNameHasBeenSet;

                    /**
                     * <p>认证人手机号</p>
                     */
                    std::string m_adminMobile;
                    bool m_adminMobileHasBeenSet;

                    /**
                     * <p>认证人身份证号</p>
                     */
                    std::string m_adminIdCardNumber;
                    bool m_adminIdCardNumberHasBeenSet;

                    /**
                     * <p>认证人证件类型， 支持以下类型</p><ul><li><b>ID_CARD</b> : 中国大陆居民身份证  (默认值)</li><li><b>HONGKONG_AND_MACAO</b>  : 中国港澳居民来往内地通行证</li><li><b>HONGKONG_MACAO_AND_TAIWAN</b>  : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>
                     */
                    std::string m_adminIdCardType;
                    bool m_adminIdCardTypeHasBeenSet;

                    /**
                     * <p>对方打开链接认证时，对方填写的营业执照的社会信用代码是否与接口上传上来的要保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul></p>
                     */
                    bool m_uniformSocialCreditCodeSame;
                    bool m_uniformSocialCreditCodeSameHasBeenSet;

                    /**
                     * <p>对方打开链接认证时，法人姓名是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul></p><p>p.s. 仅在法人姓名不为空时有效</p>
                     */
                    bool m_legalNameSame;
                    bool m_legalNameSameHasBeenSet;

                    /**
                     * <p>对方打开链接认证时，认证人姓名是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul></p><p>p.s. 仅在认证人姓名不为空时有效</p>
                     */
                    bool m_adminNameSame;
                    bool m_adminNameSameHasBeenSet;

                    /**
                     * <p>对方打开链接认证时，认证人居民身份证件号是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul></p><p>p.s. 仅在认证人身份证号不为空时有效</p>
                     */
                    bool m_adminIdCardNumberSame;
                    bool m_adminIdCardNumberSameHasBeenSet;

                    /**
                     * <p>对方打开链接认证时，认证人手机号是否要与接口传递上来的保持一致。</p><ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul><p>p.s. 仅在认证人手机号不为空时有效</p>
                     */
                    bool m_adminMobileSame;
                    bool m_adminMobileSameHasBeenSet;

                    /**
                     * <p>对方打开链接认证时，企业名称是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul></p><p>p.s. 仅在企业名称不为空时有效</p>
                     */
                    bool m_organizationNameSame;
                    bool m_organizationNameSameHasBeenSet;

                    /**
                     * <p>营业执照正面照（支持PNG或JPG格式）需以base64格式提供，且文件大小不得超过5MB。</p>
                     */
                    std::string m_businessLicense;
                    bool m_businessLicenseHasBeenSet;

                    /**
                     * <p>跳转链接类型：</p><ul><li><b>PC</b>：适用于PC端的认证链接</li><li><b>APP</b>：用于全屏或半屏跳转的小程序链接</li><li><b>SHORT_URL</b>：跳转小程序的链接的短链形式</li><li><b>H5</b>：适用于H5页面的认证链接</li><li><b>SHORT_H5</b>：H5认证链接的短链形式</li></ul>
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * <p>指定企业初始化引导，现在可以配置如下的选项：</p><p><b>1</b>: 启用此选项后，在企业认证的最终步骤将添加创建印章的引导。如下图的位置<br><img src="https://qcloudimg.tencent-cloud.cn/raw/88e0b45095a5c589de8995462ad755dc.jpg" alt="image"><br><b>2</b>:开通企业授权API签署协议，目前仅支持PC网页端，即Endpoint=PC（该功能需联系电子签客服开通）<br><img src="https://qcloudimg.tencent-cloud.cn/raw/4d40b098acf7c04afd1c451a4f98fc90.png" alt="image"></p><p>枚举值：</p><ul><li>1： 创建印章</li><li>2： 开通企业授权API签署协议</li></ul>
                     */
                    std::vector<uint64_t> m_initialization;
                    bool m_initializationHasBeenSet;

                    /**
                     * <p>授权书(PNG或JPG或PDF) base64格式, 大小不超过8M 。<br>授权书可以通过接口<a href="https://qian.tencent.com/developers/companyApis/organizations/CreateOrganizationAuthFile">生成企业授权书</a> 来获得。<br>p.s. 如果上传授权书 ，需遵循以下条件 </p><ol><li>超管的信息（超管姓名，超管手机号）必须为必填参数。</li><li>认证方式AuthorizationTypes必须只能是上传授权书方式</li></ol>
                     */
                    std::vector<std::string> m_powerOfAttorneys;
                    bool m_powerOfAttorneysHasBeenSet;

                    /**
                     * <p>调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为 4096长度。</p><p>在. 企业引导企业实名认证后回调中，该字段的信息将原封不动地透传给贵方。回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_staffs" target="_blank">回调通知</a>模块。</p>
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * <p>组织机构对公打款账号，账户名跟企业名称一致。</p><p>p.s.<br>只有认证方式是授权书+对公打款时才生效。</p>
                     */
                    std::string m_bankAccountNumber;
                    bool m_bankAccountNumberHasBeenSet;

                    /**
                     * <p>对方打开链接认证时，对公打款账号是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul></p><p>p.s. 仅在对公打款不为空时有效</p>
                     */
                    bool m_bankAccountNumberSame;
                    bool m_bankAccountNumberSameHasBeenSet;

                    /**
                     * <p>跳转事件，其中包括认证期间收录，授权书审核，企业认证的回跳事件。<br>p.s.<br>Endpoint如果是APP 类型，请传递JumpUrl为<font color="red">&quot;true&quot; </font><br>如果 Endpoint 是 H5 类型，请参考文档跳转电子签H5 </p><p>p.s. 如果Endpoint是 APP，传递的跳转地址无效，不会进行跳转，仅会进行回跳。</p>
                     */
                    std::vector<JumpEvent> m_jumpEvents;
                    bool m_jumpEventsHasBeenSet;

                    /**
                     * <p>企业证照类型：<ul><li> <strong>USCC</strong> :(默认)工商组织营业执照</li><li> <strong>PRACTICELICENSEOFMEDICALINSTITUTION</strong> :医疗机构执业许可证</li><li> <strong>CLINICFILLINGCERTIFICATE</strong> :诊所备案证</li></ul></p><p>注意 ：<br>如果企业证照类型是医疗机构执业许可证或者诊所备案证，则参数设置企业授权方式(AuthorizationTypes)和企业认证方式(AuthorizationMethods)都无效.<br>医疗机构执业许可证和诊所备案证的企业授权方式  仅有授权书的方式。企业认证仅有上传营业执照的方式。</p>
                     */
                    std::string m_organizationIdCardType;
                    bool m_organizationIdCardTypeHasBeenSet;

                    /**
                     * <p>是否允许编辑企业注册时的证照类型</p><p>true:不允许编辑。</p><p>false:允许编辑（默认值）。</p><p>注意：<br>入参中的OrganizationIdCardType值不为空的时候，才可设置为不可编辑。</p>
                     */
                    bool m_organizationIdCardTypeSame;
                    bool m_organizationIdCardTypeSameHasBeenSet;

                    /**
                     * <p>指定企业认证的授权方式 支持多选:</p><ul><li><strong>1</strong>: 上传营业执照</li><li><strong>2</strong>: 腾讯云快速认证</li><li><strong>3</strong>: 腾讯商户号授权<font color="red">（仅支持小程序端）</font></li></ul><p>注意：<br>1.如果没有指定，则默认是1,仅有上传营业执照。<br>2.H5 仅支持上传营业执照。</p>
                     */
                    std::vector<uint64_t> m_authorizationMethod;
                    bool m_authorizationMethodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEORGANIZATIONAUTHURLREQUEST_H_
