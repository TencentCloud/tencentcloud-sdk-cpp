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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CREATEUSERANDSEALREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CREATEUSERANDSEALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20201222/model/Caller.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * CreateUserAndSeal请求参数结构体
                */
                class CreateUserAndSealRequest : public AbstractModel
                {
                public:
                    CreateUserAndSealRequest();
                    ~CreateUserAndSealRequest() = default;
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
                     * 获取第三方平台唯一标识，要求应用内OpenId唯一
                     * @return OpenId 第三方平台唯一标识，要求应用内OpenId唯一
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置第三方平台唯一标识，要求应用内OpenId唯一
                     * @param _openId 第三方平台唯一标识，要求应用内OpenId唯一
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
                     * 获取用户姓名
                     * @return Name 用户姓名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置用户姓名
                     * @param _name 用户姓名
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
                     * 获取用户证件类型：
1. ID_CARD - 居民身份证
5. HOUSEHOLD_REGISTER - 户口本
6. TEMP_ID_CARD - 临时居民身份证
                     * @return IdCardType 用户证件类型：
1. ID_CARD - 居民身份证
5. HOUSEHOLD_REGISTER - 户口本
6. TEMP_ID_CARD - 临时居民身份证
                     * 
                     */
                    std::string GetIdCardType() const;

                    /**
                     * 设置用户证件类型：
1. ID_CARD - 居民身份证
5. HOUSEHOLD_REGISTER - 户口本
6. TEMP_ID_CARD - 临时居民身份证
                     * @param _idCardType 用户证件类型：
1. ID_CARD - 居民身份证
5. HOUSEHOLD_REGISTER - 户口本
6. TEMP_ID_CARD - 临时居民身份证
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
                     * 获取用户证件号
                     * @return IdCardNumber 用户证件号
                     * 
                     */
                    std::string GetIdCardNumber() const;

                    /**
                     * 设置用户证件号
                     * @param _idCardNumber 用户证件号
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
                     * 获取请求生成个人印章的客户端IP
                     * @return SourceIp 请求生成个人印章的客户端IP
                     * 
                     */
                    std::string GetSourceIp() const;

                    /**
                     * 设置请求生成个人印章的客户端IP
                     * @param _sourceIp 请求生成个人印章的客户端IP
                     * 
                     */
                    void SetSourceIp(const std::string& _sourceIp);

                    /**
                     * 判断参数 SourceIp 是否已赋值
                     * @return SourceIp 是否已赋值
                     * 
                     */
                    bool SourceIpHasBeenSet() const;

                    /**
                     * 获取用户手机号码，不要求唯一
                     * @return Mobile 用户手机号码，不要求唯一
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置用户手机号码，不要求唯一
                     * @param _mobile 用户手机号码，不要求唯一
                     * 
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     * 
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取用户邮箱，不要求唯一
                     * @return Email 用户邮箱，不要求唯一
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置用户邮箱，不要求唯一
                     * @param _email 用户邮箱，不要求唯一
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
                     * 获取默认印章名称
                     * @return SealName 默认印章名称
                     * 
                     */
                    std::string GetSealName() const;

                    /**
                     * 设置默认印章名称
                     * @param _sealName 默认印章名称
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
                     * 获取是否以OpenId作为UserId (为true时将直接以OpenId生成腾讯电子签平台的UserId)
                     * @return UseOpenId 是否以OpenId作为UserId (为true时将直接以OpenId生成腾讯电子签平台的UserId)
                     * 
                     */
                    bool GetUseOpenId() const;

                    /**
                     * 设置是否以OpenId作为UserId (为true时将直接以OpenId生成腾讯电子签平台的UserId)
                     * @param _useOpenId 是否以OpenId作为UserId (为true时将直接以OpenId生成腾讯电子签平台的UserId)
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
                     * 第三方平台唯一标识，要求应用内OpenId唯一
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 用户姓名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 用户证件类型：
1. ID_CARD - 居民身份证
5. HOUSEHOLD_REGISTER - 户口本
6. TEMP_ID_CARD - 临时居民身份证
                     */
                    std::string m_idCardType;
                    bool m_idCardTypeHasBeenSet;

                    /**
                     * 用户证件号
                     */
                    std::string m_idCardNumber;
                    bool m_idCardNumberHasBeenSet;

                    /**
                     * 请求生成个人印章的客户端IP
                     */
                    std::string m_sourceIp;
                    bool m_sourceIpHasBeenSet;

                    /**
                     * 用户手机号码，不要求唯一
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 用户邮箱，不要求唯一
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 默认印章名称
                     */
                    std::string m_sealName;
                    bool m_sealNameHasBeenSet;

                    /**
                     * 是否以OpenId作为UserId (为true时将直接以OpenId生成腾讯电子签平台的UserId)
                     */
                    bool m_useOpenId;
                    bool m_useOpenIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CREATEUSERANDSEALREQUEST_H_
