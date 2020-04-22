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

#ifndef TENCENTCLOUD_TAF_V20200210_MODEL_INPUTDETECTACCOUNTACTIVITY_H_
#define TENCENTCLOUD_TAF_V20200210_MODEL_INPUTDETECTACCOUNTACTIVITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Taf
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 业务入参
                */
                class InputDetectAccountActivity : public AbstractModel
                {
                public:
                    InputDetectAccountActivity();
                    ~InputDetectAccountActivity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户ID值，如微信/QQ openid，或 手机号等（如15912345687）
                     * @return Uid 用户ID值，如微信/QQ openid，或 手机号等（如15912345687）
                     */
                    std::string GetUid() const;

                    /**
                     * 设置用户ID值，如微信/QQ openid，或 手机号等（如15912345687）
                     * @param Uid 用户ID值，如微信/QQ openid，或 手机号等（如15912345687）
                     */
                    void SetUid(const std::string& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取用户账号类型 
1：QQ开放帐号 
2：微信开放账号 
4：手机号 （暂仅支持国内手机号）
10004： 手机号MD5
                     * @return AccountType 用户账号类型 
1：QQ开放帐号 
2：微信开放账号 
4：手机号 （暂仅支持国内手机号）
10004： 手机号MD5
                     */
                    uint64_t GetAccountType() const;

                    /**
                     * 设置用户账号类型 
1：QQ开放帐号 
2：微信开放账号 
4：手机号 （暂仅支持国内手机号）
10004： 手机号MD5
                     * @param AccountType 用户账号类型 
1：QQ开放帐号 
2：微信开放账号 
4：手机号 （暂仅支持国内手机号）
10004： 手机号MD5
                     */
                    void SetAccountType(const uint64_t& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取用户真实外网IP
                     * @return UserIp 用户真实外网IP
                     */
                    std::string GetUserIp() const;

                    /**
                     * 设置用户真实外网IP
                     * @param UserIp 用户真实外网IP
                     */
                    void SetUserIp(const std::string& _userIp);

                    /**
                     * 判断参数 UserIp 是否已赋值
                     * @return UserIp 是否已赋值
                     */
                    bool UserIpHasBeenSet() const;

                    /**
                     * 获取用户操作时间戳，单位秒（格林威治时间精确到秒，如1501590972）
                     * @return PostTime 用户操作时间戳，单位秒（格林威治时间精确到秒，如1501590972）
                     */
                    uint64_t GetPostTime() const;

                    /**
                     * 设置用户操作时间戳，单位秒（格林威治时间精确到秒，如1501590972）
                     * @param PostTime 用户操作时间戳，单位秒（格林威治时间精确到秒，如1501590972）
                     */
                    void SetPostTime(const uint64_t& _postTime);

                    /**
                     * 判断参数 PostTime 是否已赋值
                     * @return PostTime 是否已赋值
                     */
                    bool PostTimeHasBeenSet() const;

                    /**
                     * 获取accountType是QQ或微信开放账号时，该参数必填，表示QQ或微信分配给网站或应用的appId，用来唯一标识网站或应用
                     * @return AppIdU accountType是QQ或微信开放账号时，该参数必填，表示QQ或微信分配给网站或应用的appId，用来唯一标识网站或应用
                     */
                    std::string GetAppIdU() const;

                    /**
                     * 设置accountType是QQ或微信开放账号时，该参数必填，表示QQ或微信分配给网站或应用的appId，用来唯一标识网站或应用
                     * @param AppIdU accountType是QQ或微信开放账号时，该参数必填，表示QQ或微信分配给网站或应用的appId，用来唯一标识网站或应用
                     */
                    void SetAppIdU(const std::string& _appIdU);

                    /**
                     * 判断参数 AppIdU 是否已赋值
                     * @return AppIdU 是否已赋值
                     */
                    bool AppIdUHasBeenSet() const;

                    /**
                     * 获取昵称，UTF-8 编码
                     * @return NickName 昵称，UTF-8 编码
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置昵称，UTF-8 编码
                     * @param NickName 昵称，UTF-8 编码
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取手机号。若 accountType 选4（手机号）、或10004（手机号 MD5），则无需重复填写。否则填入对应的手机号（如15912345687）
                     * @return PhoneNumber 手机号。若 accountType 选4（手机号）、或10004（手机号 MD5），则无需重复填写。否则填入对应的手机号（如15912345687）
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置手机号。若 accountType 选4（手机号）、或10004（手机号 MD5），则无需重复填写。否则填入对应的手机号（如15912345687）
                     * @param PhoneNumber 手机号。若 accountType 选4（手机号）、或10004（手机号 MD5），则无需重复填写。否则填入对应的手机号（如15912345687）
                     */
                    void SetPhoneNumber(const std::string& _phoneNumber);

                    /**
                     * 判断参数 PhoneNumber 是否已赋值
                     * @return PhoneNumber 是否已赋值
                     */
                    bool PhoneNumberHasBeenSet() const;

                    /**
                     * 获取用户邮箱地址（非系统自动生成）
                     * @return EmailAddress 用户邮箱地址（非系统自动生成）
                     */
                    std::string GetEmailAddress() const;

                    /**
                     * 设置用户邮箱地址（非系统自动生成）
                     * @param EmailAddress 用户邮箱地址（非系统自动生成）
                     */
                    void SetEmailAddress(const std::string& _emailAddress);

                    /**
                     * 判断参数 EmailAddress 是否已赋值
                     * @return EmailAddress 是否已赋值
                     */
                    bool EmailAddressHasBeenSet() const;

                    /**
                     * 获取用户 HTTP 请求中的 cookie 进行2次 hash 的值，只要保证相同 cookie 的 hash 值一致即可
                     * @return CookieHash 用户 HTTP 请求中的 cookie 进行2次 hash 的值，只要保证相同 cookie 的 hash 值一致即可
                     */
                    double GetCookieHash() const;

                    /**
                     * 设置用户 HTTP 请求中的 cookie 进行2次 hash 的值，只要保证相同 cookie 的 hash 值一致即可
                     * @param CookieHash 用户 HTTP 请求中的 cookie 进行2次 hash 的值，只要保证相同 cookie 的 hash 值一致即可
                     */
                    void SetCookieHash(const double& _cookieHash);

                    /**
                     * 判断参数 CookieHash 是否已赋值
                     * @return CookieHash 是否已赋值
                     */
                    bool CookieHashHasBeenSet() const;

                    /**
                     * 获取用户HTTP请求的 userAgent
                     * @return UserAgent 用户HTTP请求的 userAgent
                     */
                    std::string GetUserAgent() const;

                    /**
                     * 设置用户HTTP请求的 userAgent
                     * @param UserAgent 用户HTTP请求的 userAgent
                     */
                    void SetUserAgent(const std::string& _userAgent);

                    /**
                     * 判断参数 UserAgent 是否已赋值
                     * @return UserAgent 是否已赋值
                     */
                    bool UserAgentHasBeenSet() const;

                    /**
                     * 获取用户HTTP请求中的 x_forward_for
                     * @return XForwardedFor 用户HTTP请求中的 x_forward_for
                     */
                    std::string GetXForwardedFor() const;

                    /**
                     * 设置用户HTTP请求中的 x_forward_for
                     * @param XForwardedFor 用户HTTP请求中的 x_forward_for
                     */
                    void SetXForwardedFor(const std::string& _xForwardedFor);

                    /**
                     * 判断参数 XForwardedFor 是否已赋值
                     * @return XForwardedFor 是否已赋值
                     */
                    bool XForwardedForHasBeenSet() const;

                    /**
                     * 获取Mac地址或设备唯一标识
                     * @return MacAddress Mac地址或设备唯一标识
                     */
                    std::string GetMacAddress() const;

                    /**
                     * 设置Mac地址或设备唯一标识
                     * @param MacAddress Mac地址或设备唯一标识
                     */
                    void SetMacAddress(const std::string& _macAddress);

                    /**
                     * 判断参数 MacAddress 是否已赋值
                     * @return MacAddress 是否已赋值
                     */
                    bool MacAddressHasBeenSet() const;

                    /**
                     * 获取手机制造商ID，如果手机注册，请带上此信息
                     * @return VendorId 手机制造商ID，如果手机注册，请带上此信息
                     */
                    std::string GetVendorId() const;

                    /**
                     * 设置手机制造商ID，如果手机注册，请带上此信息
                     * @param VendorId 手机制造商ID，如果手机注册，请带上此信息
                     */
                    void SetVendorId(const std::string& _vendorId);

                    /**
                     * 判断参数 VendorId 是否已赋值
                     * @return VendorId 是否已赋值
                     */
                    bool VendorIdHasBeenSet() const;

                    /**
                     * 获取手机设备号
                     * @return Imei 手机设备号
                     */
                    std::string GetImei() const;

                    /**
                     * 设置手机设备号
                     * @param Imei 手机设备号
                     */
                    void SetImei(const std::string& _imei);

                    /**
                     * 判断参数 Imei 是否已赋值
                     * @return Imei 是否已赋值
                     */
                    bool ImeiHasBeenSet() const;

                private:

                    /**
                     * 用户ID值，如微信/QQ openid，或 手机号等（如15912345687）
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * 用户账号类型 
1：QQ开放帐号 
2：微信开放账号 
4：手机号 （暂仅支持国内手机号）
10004： 手机号MD5
                     */
                    uint64_t m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * 用户真实外网IP
                     */
                    std::string m_userIp;
                    bool m_userIpHasBeenSet;

                    /**
                     * 用户操作时间戳，单位秒（格林威治时间精确到秒，如1501590972）
                     */
                    uint64_t m_postTime;
                    bool m_postTimeHasBeenSet;

                    /**
                     * accountType是QQ或微信开放账号时，该参数必填，表示QQ或微信分配给网站或应用的appId，用来唯一标识网站或应用
                     */
                    std::string m_appIdU;
                    bool m_appIdUHasBeenSet;

                    /**
                     * 昵称，UTF-8 编码
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * 手机号。若 accountType 选4（手机号）、或10004（手机号 MD5），则无需重复填写。否则填入对应的手机号（如15912345687）
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * 用户邮箱地址（非系统自动生成）
                     */
                    std::string m_emailAddress;
                    bool m_emailAddressHasBeenSet;

                    /**
                     * 用户 HTTP 请求中的 cookie 进行2次 hash 的值，只要保证相同 cookie 的 hash 值一致即可
                     */
                    double m_cookieHash;
                    bool m_cookieHashHasBeenSet;

                    /**
                     * 用户HTTP请求的 userAgent
                     */
                    std::string m_userAgent;
                    bool m_userAgentHasBeenSet;

                    /**
                     * 用户HTTP请求中的 x_forward_for
                     */
                    std::string m_xForwardedFor;
                    bool m_xForwardedForHasBeenSet;

                    /**
                     * Mac地址或设备唯一标识
                     */
                    std::string m_macAddress;
                    bool m_macAddressHasBeenSet;

                    /**
                     * 手机制造商ID，如果手机注册，请带上此信息
                     */
                    std::string m_vendorId;
                    bool m_vendorIdHasBeenSet;

                    /**
                     * 手机设备号
                     */
                    std::string m_imei;
                    bool m_imeiHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAF_V20200210_MODEL_INPUTDETECTACCOUNTACTIVITY_H_
