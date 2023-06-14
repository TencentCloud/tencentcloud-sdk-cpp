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

#ifndef TENCENTCLOUD_SMH_V20210712_MODEL_VERIFYSMSCODEREQUEST_H_
#define TENCENTCLOUD_SMH_V20210712_MODEL_VERIFYSMSCODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Smh
    {
        namespace V20210712
        {
            namespace Model
            {
                /**
                * VerifySmsCode请求参数结构体
                */
                class VerifySmsCodeRequest : public AbstractModel
                {
                public:
                    VerifySmsCodeRequest();
                    ~VerifySmsCodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取验证码目的，当前支持换绑超级管理员账号，BindSuperAdmin；体验版企业升级验证ChannelUpdateVerify，等
                     * @return Purpose 验证码目的，当前支持换绑超级管理员账号，BindSuperAdmin；体验版企业升级验证ChannelUpdateVerify，等
                     * 
                     */
                    std::string GetPurpose() const;

                    /**
                     * 设置验证码目的，当前支持换绑超级管理员账号，BindSuperAdmin；体验版企业升级验证ChannelUpdateVerify，等
                     * @param _purpose 验证码目的，当前支持换绑超级管理员账号，BindSuperAdmin；体验版企业升级验证ChannelUpdateVerify，等
                     * 
                     */
                    void SetPurpose(const std::string& _purpose);

                    /**
                     * 判断参数 Purpose 是否已赋值
                     * @return Purpose 是否已赋值
                     * 
                     */
                    bool PurposeHasBeenSet() const;

                    /**
                     * 获取将作为超级管理员账号的手机号码
                     * @return PhoneNumber 将作为超级管理员账号的手机号码
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置将作为超级管理员账号的手机号码
                     * @param _phoneNumber 将作为超级管理员账号的手机号码
                     * 
                     */
                    void SetPhoneNumber(const std::string& _phoneNumber);

                    /**
                     * 判断参数 PhoneNumber 是否已赋值
                     * @return PhoneNumber 是否已赋值
                     * 
                     */
                    bool PhoneNumberHasBeenSet() const;

                    /**
                     * 获取短信验证码
                     * @return Code 短信验证码
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置短信验证码
                     * @param _code 短信验证码
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取官方云盘实例 ID
                     * @return InstanceId 官方云盘实例 ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置官方云盘实例 ID
                     * @param _instanceId 官方云盘实例 ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取将作为超级管理员账号的手机号码的国家代码。默认为 +86。
                     * @return CountryCode 将作为超级管理员账号的手机号码的国家代码。默认为 +86。
                     * 
                     */
                    std::string GetCountryCode() const;

                    /**
                     * 设置将作为超级管理员账号的手机号码的国家代码。默认为 +86。
                     * @param _countryCode 将作为超级管理员账号的手机号码的国家代码。默认为 +86。
                     * 
                     */
                    void SetCountryCode(const std::string& _countryCode);

                    /**
                     * 判断参数 CountryCode 是否已赋值
                     * @return CountryCode 是否已赋值
                     * 
                     */
                    bool CountryCodeHasBeenSet() const;

                private:

                    /**
                     * 验证码目的，当前支持换绑超级管理员账号，BindSuperAdmin；体验版企业升级验证ChannelUpdateVerify，等
                     */
                    std::string m_purpose;
                    bool m_purposeHasBeenSet;

                    /**
                     * 将作为超级管理员账号的手机号码
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * 短信验证码
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 官方云盘实例 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 将作为超级管理员账号的手机号码的国家代码。默认为 +86。
                     */
                    std::string m_countryCode;
                    bool m_countryCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMH_V20210712_MODEL_VERIFYSMSCODEREQUEST_H_
