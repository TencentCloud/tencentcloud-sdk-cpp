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

#ifndef TENCENTCLOUD_LP_V20200224_MODEL_QUERYLOGINPROTECTIONREQUEST_H_
#define TENCENTCLOUD_LP_V20200224_MODEL_QUERYLOGINPROTECTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lp
    {
        namespace V20200224
        {
            namespace Model
            {
                /**
                * QueryLoginProtection请求参数结构体
                */
                class QueryLoginProtectionRequest : public AbstractModel
                {
                public:
                    QueryLoginProtectionRequest();
                    ~QueryLoginProtectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取登录来源的外网 IP。
                     * @return LoginIp 登录来源的外网 IP。
                     * 
                     */
                    std::string GetLoginIp() const;

                    /**
                     * 设置登录来源的外网 IP。
                     * @param _loginIp 登录来源的外网 IP。
                     * 
                     */
                    void SetLoginIp(const std::string& _loginIp);

                    /**
                     * 判断参数 LoginIp 是否已赋值
                     * @return LoginIp 是否已赋值
                     * 
                     */
                    bool LoginIpHasBeenSet() const;

                    /**
                     * 获取用户 ID 不同的 accountType 对应不同的用户 ID。如果是 QQ，则填入对应的 openid，微信用户则填入对应的 openid/unionid，手机号则填入对应真实用户手机号（如13123456789）。
                     * @return Uid 用户 ID 不同的 accountType 对应不同的用户 ID。如果是 QQ，则填入对应的 openid，微信用户则填入对应的 openid/unionid，手机号则填入对应真实用户手机号（如13123456789）。
                     * 
                     */
                    std::string GetUid() const;

                    /**
                     * 设置用户 ID 不同的 accountType 对应不同的用户 ID。如果是 QQ，则填入对应的 openid，微信用户则填入对应的 openid/unionid，手机号则填入对应真实用户手机号（如13123456789）。
                     * @param _uid 用户 ID 不同的 accountType 对应不同的用户 ID。如果是 QQ，则填入对应的 openid，微信用户则填入对应的 openid/unionid，手机号则填入对应真实用户手机号（如13123456789）。
                     * 
                     */
                    void SetUid(const std::string& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取登录时间戳，单位：秒。
                     * @return LoginTime 登录时间戳，单位：秒。
                     * 
                     */
                    std::string GetLoginTime() const;

                    /**
                     * 设置登录时间戳，单位：秒。
                     * @param _loginTime 登录时间戳，单位：秒。
                     * 
                     */
                    void SetLoginTime(const std::string& _loginTime);

                    /**
                     * 判断参数 LoginTime 是否已赋值
                     * @return LoginTime 是否已赋值
                     * 
                     */
                    bool LoginTimeHasBeenSet() const;

                    /**
                     * 获取用户账号类型（QQ 开放帐号、微信开放账号需要 提交工单 由腾讯云进行资格审核）：
1：QQ 开放帐号。
2：微信开放账号。
4：手机号。
0：其他。
10004：手机号 MD5。
                     * @return AccountType 用户账号类型（QQ 开放帐号、微信开放账号需要 提交工单 由腾讯云进行资格审核）：
1：QQ 开放帐号。
2：微信开放账号。
4：手机号。
0：其他。
10004：手机号 MD5。
                     * 
                     */
                    std::string GetAccountType() const;

                    /**
                     * 设置用户账号类型（QQ 开放帐号、微信开放账号需要 提交工单 由腾讯云进行资格审核）：
1：QQ 开放帐号。
2：微信开放账号。
4：手机号。
0：其他。
10004：手机号 MD5。
                     * @param _accountType 用户账号类型（QQ 开放帐号、微信开放账号需要 提交工单 由腾讯云进行资格审核）：
1：QQ 开放帐号。
2：微信开放账号。
4：手机号。
0：其他。
10004：手机号 MD5。
                     * 
                     */
                    void SetAccountType(const std::string& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取accountType 是 QQ 或微信开放账号时，该参数必填，表示 QQ 或微信分配给网站或应用的 AppID，用来唯一标识网站或应用。
                     * @return AppIdU accountType 是 QQ 或微信开放账号时，该参数必填，表示 QQ 或微信分配给网站或应用的 AppID，用来唯一标识网站或应用。
                     * 
                     */
                    std::string GetAppIdU() const;

                    /**
                     * 设置accountType 是 QQ 或微信开放账号时，该参数必填，表示 QQ 或微信分配给网站或应用的 AppID，用来唯一标识网站或应用。
                     * @param _appIdU accountType 是 QQ 或微信开放账号时，该参数必填，表示 QQ 或微信分配给网站或应用的 AppID，用来唯一标识网站或应用。
                     * 
                     */
                    void SetAppIdU(const std::string& _appIdU);

                    /**
                     * 判断参数 AppIdU 是否已赋值
                     * @return AppIdU 是否已赋值
                     * 
                     */
                    bool AppIdUHasBeenSet() const;

                    /**
                     * 获取accountType 是 QQ 或微信开放账号时，用于标识 QQ 或微信用户登录后关联业务自身的账号 ID。
                     * @return AssociateAccount accountType 是 QQ 或微信开放账号时，用于标识 QQ 或微信用户登录后关联业务自身的账号 ID。
                     * 
                     */
                    std::string GetAssociateAccount() const;

                    /**
                     * 设置accountType 是 QQ 或微信开放账号时，用于标识 QQ 或微信用户登录后关联业务自身的账号 ID。
                     * @param _associateAccount accountType 是 QQ 或微信开放账号时，用于标识 QQ 或微信用户登录后关联业务自身的账号 ID。
                     * 
                     */
                    void SetAssociateAccount(const std::string& _associateAccount);

                    /**
                     * 判断参数 AssociateAccount 是否已赋值
                     * @return AssociateAccount 是否已赋值
                     * 
                     */
                    bool AssociateAccountHasBeenSet() const;

                    /**
                     * 获取昵称，UTF-8 编码。
                     * @return NickName 昵称，UTF-8 编码。
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置昵称，UTF-8 编码。
                     * @param _nickName 昵称，UTF-8 编码。
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取手机号：国家代码-手机号， 如0086-15912345687（0086前不需要+号）。
                     * @return PhoneNumber 手机号：国家代码-手机号， 如0086-15912345687（0086前不需要+号）。
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置手机号：国家代码-手机号， 如0086-15912345687（0086前不需要+号）。
                     * @param _phoneNumber 手机号：国家代码-手机号， 如0086-15912345687（0086前不需要+号）。
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
                     * 获取用户邮箱地址（非系统自动生成）。
                     * @return EmailAddress 用户邮箱地址（非系统自动生成）。
                     * 
                     */
                    std::string GetEmailAddress() const;

                    /**
                     * 设置用户邮箱地址（非系统自动生成）。
                     * @param _emailAddress 用户邮箱地址（非系统自动生成）。
                     * 
                     */
                    void SetEmailAddress(const std::string& _emailAddress);

                    /**
                     * 判断参数 EmailAddress 是否已赋值
                     * @return EmailAddress 是否已赋值
                     * 
                     */
                    bool EmailAddressHasBeenSet() const;

                    /**
                     * 获取注册来源的外网 IP。
                     * @return RegisterTime 注册来源的外网 IP。
                     * 
                     */
                    std::string GetRegisterTime() const;

                    /**
                     * 设置注册来源的外网 IP。
                     * @param _registerTime 注册来源的外网 IP。
                     * 
                     */
                    void SetRegisterTime(const std::string& _registerTime);

                    /**
                     * 判断参数 RegisterTime 是否已赋值
                     * @return RegisterTime 是否已赋值
                     * 
                     */
                    bool RegisterTimeHasBeenSet() const;

                    /**
                     * 获取地址。
                     * @return Address 地址。
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置地址。
                     * @param _address 地址。
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
                     * 获取用户 HTTP 请求中的 cookie 进行2次 hash 的值，只要保证相同 cookie 的 hash 值一致即可。
                     * @return CookieHash 用户 HTTP 请求中的 cookie 进行2次 hash 的值，只要保证相同 cookie 的 hash 值一致即可。
                     * 
                     */
                    std::string GetCookieHash() const;

                    /**
                     * 设置用户 HTTP 请求中的 cookie 进行2次 hash 的值，只要保证相同 cookie 的 hash 值一致即可。
                     * @param _cookieHash 用户 HTTP 请求中的 cookie 进行2次 hash 的值，只要保证相同 cookie 的 hash 值一致即可。
                     * 
                     */
                    void SetCookieHash(const std::string& _cookieHash);

                    /**
                     * 判断参数 CookieHash 是否已赋值
                     * @return CookieHash 是否已赋值
                     * 
                     */
                    bool CookieHashHasBeenSet() const;

                    /**
                     * 获取登录来源：
0：其他
1：PC 网页
2：移动页面
3：App
4：微信公众号
                     * @return LoginSource 登录来源：
0：其他
1：PC 网页
2：移动页面
3：App
4：微信公众号
                     * 
                     */
                    std::string GetLoginSource() const;

                    /**
                     * 设置登录来源：
0：其他
1：PC 网页
2：移动页面
3：App
4：微信公众号
                     * @param _loginSource 登录来源：
0：其他
1：PC 网页
2：移动页面
3：App
4：微信公众号
                     * 
                     */
                    void SetLoginSource(const std::string& _loginSource);

                    /**
                     * 判断参数 LoginSource 是否已赋值
                     * @return LoginSource 是否已赋值
                     * 
                     */
                    bool LoginSourceHasBeenSet() const;

                    /**
                     * 获取登录方式：
0：其他
1：手动帐号密码输入
2：动态短信密码登录
3：二维码扫描登录
                     * @return LoginType 登录方式：
0：其他
1：手动帐号密码输入
2：动态短信密码登录
3：二维码扫描登录
                     * 
                     */
                    std::string GetLoginType() const;

                    /**
                     * 设置登录方式：
0：其他
1：手动帐号密码输入
2：动态短信密码登录
3：二维码扫描登录
                     * @param _loginType 登录方式：
0：其他
1：手动帐号密码输入
2：动态短信密码登录
3：二维码扫描登录
                     * 
                     */
                    void SetLoginType(const std::string& _loginType);

                    /**
                     * 判断参数 LoginType 是否已赋值
                     * @return LoginType 是否已赋值
                     * 
                     */
                    bool LoginTypeHasBeenSet() const;

                    /**
                     * 获取用户 HTTP 请求的 referer 值。
                     * @return Referer 用户 HTTP 请求的 referer 值。
                     * 
                     */
                    std::string GetReferer() const;

                    /**
                     * 设置用户 HTTP 请求的 referer 值。
                     * @param _referer 用户 HTTP 请求的 referer 值。
                     * 
                     */
                    void SetReferer(const std::string& _referer);

                    /**
                     * 判断参数 Referer 是否已赋值
                     * @return Referer 是否已赋值
                     * 
                     */
                    bool RefererHasBeenSet() const;

                    /**
                     * 获取登录成功后跳转页面。
                     * @return JumpUrl 登录成功后跳转页面。
                     * 
                     */
                    std::string GetJumpUrl() const;

                    /**
                     * 设置登录成功后跳转页面。
                     * @param _jumpUrl 登录成功后跳转页面。
                     * 
                     */
                    void SetJumpUrl(const std::string& _jumpUrl);

                    /**
                     * 判断参数 JumpUrl 是否已赋值
                     * @return JumpUrl 是否已赋值
                     * 
                     */
                    bool JumpUrlHasBeenSet() const;

                    /**
                     * 获取用户 HTTP 请求的 userAgent。
                     * @return UserAgent 用户 HTTP 请求的 userAgent。
                     * 
                     */
                    std::string GetUserAgent() const;

                    /**
                     * 设置用户 HTTP 请求的 userAgent。
                     * @param _userAgent 用户 HTTP 请求的 userAgent。
                     * 
                     */
                    void SetUserAgent(const std::string& _userAgent);

                    /**
                     * 判断参数 UserAgent 是否已赋值
                     * @return UserAgent 是否已赋值
                     * 
                     */
                    bool UserAgentHasBeenSet() const;

                    /**
                     * 获取用户 HTTP 请求中的 x_forward_for。
                     * @return XForwardedFor 用户 HTTP 请求中的 x_forward_for。
                     * 
                     */
                    std::string GetXForwardedFor() const;

                    /**
                     * 设置用户 HTTP 请求中的 x_forward_for。
                     * @param _xForwardedFor 用户 HTTP 请求中的 x_forward_for。
                     * 
                     */
                    void SetXForwardedFor(const std::string& _xForwardedFor);

                    /**
                     * 判断参数 XForwardedFor 是否已赋值
                     * @return XForwardedFor 是否已赋值
                     * 
                     */
                    bool XForwardedForHasBeenSet() const;

                    /**
                     * 获取用户操作过程中鼠标单击次数。
                     * @return MouseClickCount 用户操作过程中鼠标单击次数。
                     * 
                     */
                    std::string GetMouseClickCount() const;

                    /**
                     * 设置用户操作过程中鼠标单击次数。
                     * @param _mouseClickCount 用户操作过程中鼠标单击次数。
                     * 
                     */
                    void SetMouseClickCount(const std::string& _mouseClickCount);

                    /**
                     * 判断参数 MouseClickCount 是否已赋值
                     * @return MouseClickCount 是否已赋值
                     * 
                     */
                    bool MouseClickCountHasBeenSet() const;

                    /**
                     * 获取用户操作过程中键盘单击次数。
                     * @return KeyboardClickCount 用户操作过程中键盘单击次数。
                     * 
                     */
                    std::string GetKeyboardClickCount() const;

                    /**
                     * 设置用户操作过程中键盘单击次数。
                     * @param _keyboardClickCount 用户操作过程中键盘单击次数。
                     * 
                     */
                    void SetKeyboardClickCount(const std::string& _keyboardClickCount);

                    /**
                     * 判断参数 KeyboardClickCount 是否已赋值
                     * @return KeyboardClickCount 是否已赋值
                     * 
                     */
                    bool KeyboardClickCountHasBeenSet() const;

                    /**
                     * 获取注册结果：
0：失败
1：成功
                     * @return Result 注册结果：
0：失败
1：成功
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置注册结果：
0：失败
1：成功
                     * @param _result 注册结果：
0：失败
1：成功
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取失败原因：
0：其他
1：参数错误
2：帐号冲突
3：验证错误
                     * @return Reason 失败原因：
0：其他
1：参数错误
2：帐号冲突
3：验证错误
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置失败原因：
0：其他
1：参数错误
2：帐号冲突
3：验证错误
                     * @param _reason 失败原因：
0：其他
1：参数错误
2：帐号冲突
3：验证错误
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取登录耗时，单位：秒。
                     * @return LoginSpend 登录耗时，单位：秒。
                     * 
                     */
                    std::string GetLoginSpend() const;

                    /**
                     * 设置登录耗时，单位：秒。
                     * @param _loginSpend 登录耗时，单位：秒。
                     * 
                     */
                    void SetLoginSpend(const std::string& _loginSpend);

                    /**
                     * 判断参数 LoginSpend 是否已赋值
                     * @return LoginSpend 是否已赋值
                     * 
                     */
                    bool LoginSpendHasBeenSet() const;

                    /**
                     * 获取MAC 地址或设备唯一标识。
                     * @return MacAddress MAC 地址或设备唯一标识。
                     * 
                     */
                    std::string GetMacAddress() const;

                    /**
                     * 设置MAC 地址或设备唯一标识。
                     * @param _macAddress MAC 地址或设备唯一标识。
                     * 
                     */
                    void SetMacAddress(const std::string& _macAddress);

                    /**
                     * 判断参数 MacAddress 是否已赋值
                     * @return MacAddress 是否已赋值
                     * 
                     */
                    bool MacAddressHasBeenSet() const;

                    /**
                     * 获取手机制造商 ID，如果手机注册，请带上此信息。
                     * @return VendorId 手机制造商 ID，如果手机注册，请带上此信息。
                     * 
                     */
                    std::string GetVendorId() const;

                    /**
                     * 设置手机制造商 ID，如果手机注册，请带上此信息。
                     * @param _vendorId 手机制造商 ID，如果手机注册，请带上此信息。
                     * 
                     */
                    void SetVendorId(const std::string& _vendorId);

                    /**
                     * 判断参数 VendorId 是否已赋值
                     * @return VendorId 是否已赋值
                     * 
                     */
                    bool VendorIdHasBeenSet() const;

                    /**
                     * 获取App 客户端版本。
                     * @return AppVersion App 客户端版本。
                     * 
                     */
                    std::string GetAppVersion() const;

                    /**
                     * 设置App 客户端版本。
                     * @param _appVersion App 客户端版本。
                     * 
                     */
                    void SetAppVersion(const std::string& _appVersion);

                    /**
                     * 判断参数 AppVersion 是否已赋值
                     * @return AppVersion 是否已赋值
                     * 
                     */
                    bool AppVersionHasBeenSet() const;

                    /**
                     * 获取手机设备号。
                     * @return Imei 手机设备号。
                     * 
                     */
                    std::string GetImei() const;

                    /**
                     * 设置手机设备号。
                     * @param _imei 手机设备号。
                     * 
                     */
                    void SetImei(const std::string& _imei);

                    /**
                     * 判断参数 Imei 是否已赋值
                     * @return Imei 是否已赋值
                     * 
                     */
                    bool ImeiHasBeenSet() const;

                    /**
                     * 获取业务 ID 网站或应用在多个业务中使用此服务，通过此 ID 区分统计数据。
                     * @return BusinessId 业务 ID 网站或应用在多个业务中使用此服务，通过此 ID 区分统计数据。
                     * 
                     */
                    std::string GetBusinessId() const;

                    /**
                     * 设置业务 ID 网站或应用在多个业务中使用此服务，通过此 ID 区分统计数据。
                     * @param _businessId 业务 ID 网站或应用在多个业务中使用此服务，通过此 ID 区分统计数据。
                     * 
                     */
                    void SetBusinessId(const std::string& _businessId);

                    /**
                     * 判断参数 BusinessId 是否已赋值
                     * @return BusinessId 是否已赋值
                     * 
                     */
                    bool BusinessIdHasBeenSet() const;

                    /**
                     * 获取1：微信公众号
2：微信小程序
                     * @return WxSubType 1：微信公众号
2：微信小程序
                     * 
                     */
                    std::string GetWxSubType() const;

                    /**
                     * 设置1：微信公众号
2：微信小程序
                     * @param _wxSubType 1：微信公众号
2：微信小程序
                     * 
                     */
                    void SetWxSubType(const std::string& _wxSubType);

                    /**
                     * 判断参数 WxSubType 是否已赋值
                     * @return WxSubType 是否已赋值
                     * 
                     */
                    bool WxSubTypeHasBeenSet() const;

                    /**
                     * 获取Token 签名随机数，微信小程序必填，建议16个字符。
                     * @return RandNum Token 签名随机数，微信小程序必填，建议16个字符。
                     * 
                     */
                    std::string GetRandNum() const;

                    /**
                     * 设置Token 签名随机数，微信小程序必填，建议16个字符。
                     * @param _randNum Token 签名随机数，微信小程序必填，建议16个字符。
                     * 
                     */
                    void SetRandNum(const std::string& _randNum);

                    /**
                     * 判断参数 RandNum 是否已赋值
                     * @return RandNum 是否已赋值
                     * 
                     */
                    bool RandNumHasBeenSet() const;

                    /**
                     * 获取如果是微信小程序，该字段为以 ssesion_key 为 key 去签名随机数radnNum得到的值（hmac_sha256 签名算法）。
如果是微信公众号或第三方登录，则为授权的 access_token（注意：不是普通 access_token，具体看 微信官方文档）。
                     * @return WxToken 如果是微信小程序，该字段为以 ssesion_key 为 key 去签名随机数radnNum得到的值（hmac_sha256 签名算法）。
如果是微信公众号或第三方登录，则为授权的 access_token（注意：不是普通 access_token，具体看 微信官方文档）。
                     * 
                     */
                    std::string GetWxToken() const;

                    /**
                     * 设置如果是微信小程序，该字段为以 ssesion_key 为 key 去签名随机数radnNum得到的值（hmac_sha256 签名算法）。
如果是微信公众号或第三方登录，则为授权的 access_token（注意：不是普通 access_token，具体看 微信官方文档）。
                     * @param _wxToken 如果是微信小程序，该字段为以 ssesion_key 为 key 去签名随机数radnNum得到的值（hmac_sha256 签名算法）。
如果是微信公众号或第三方登录，则为授权的 access_token（注意：不是普通 access_token，具体看 微信官方文档）。
                     * 
                     */
                    void SetWxToken(const std::string& _wxToken);

                    /**
                     * 判断参数 WxToken 是否已赋值
                     * @return WxToken 是否已赋值
                     * 
                     */
                    bool WxTokenHasBeenSet() const;

                private:

                    /**
                     * 登录来源的外网 IP。
                     */
                    std::string m_loginIp;
                    bool m_loginIpHasBeenSet;

                    /**
                     * 用户 ID 不同的 accountType 对应不同的用户 ID。如果是 QQ，则填入对应的 openid，微信用户则填入对应的 openid/unionid，手机号则填入对应真实用户手机号（如13123456789）。
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * 登录时间戳，单位：秒。
                     */
                    std::string m_loginTime;
                    bool m_loginTimeHasBeenSet;

                    /**
                     * 用户账号类型（QQ 开放帐号、微信开放账号需要 提交工单 由腾讯云进行资格审核）：
1：QQ 开放帐号。
2：微信开放账号。
4：手机号。
0：其他。
10004：手机号 MD5。
                     */
                    std::string m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * accountType 是 QQ 或微信开放账号时，该参数必填，表示 QQ 或微信分配给网站或应用的 AppID，用来唯一标识网站或应用。
                     */
                    std::string m_appIdU;
                    bool m_appIdUHasBeenSet;

                    /**
                     * accountType 是 QQ 或微信开放账号时，用于标识 QQ 或微信用户登录后关联业务自身的账号 ID。
                     */
                    std::string m_associateAccount;
                    bool m_associateAccountHasBeenSet;

                    /**
                     * 昵称，UTF-8 编码。
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * 手机号：国家代码-手机号， 如0086-15912345687（0086前不需要+号）。
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * 用户邮箱地址（非系统自动生成）。
                     */
                    std::string m_emailAddress;
                    bool m_emailAddressHasBeenSet;

                    /**
                     * 注册来源的外网 IP。
                     */
                    std::string m_registerTime;
                    bool m_registerTimeHasBeenSet;

                    /**
                     * 地址。
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 用户 HTTP 请求中的 cookie 进行2次 hash 的值，只要保证相同 cookie 的 hash 值一致即可。
                     */
                    std::string m_cookieHash;
                    bool m_cookieHashHasBeenSet;

                    /**
                     * 登录来源：
0：其他
1：PC 网页
2：移动页面
3：App
4：微信公众号
                     */
                    std::string m_loginSource;
                    bool m_loginSourceHasBeenSet;

                    /**
                     * 登录方式：
0：其他
1：手动帐号密码输入
2：动态短信密码登录
3：二维码扫描登录
                     */
                    std::string m_loginType;
                    bool m_loginTypeHasBeenSet;

                    /**
                     * 用户 HTTP 请求的 referer 值。
                     */
                    std::string m_referer;
                    bool m_refererHasBeenSet;

                    /**
                     * 登录成功后跳转页面。
                     */
                    std::string m_jumpUrl;
                    bool m_jumpUrlHasBeenSet;

                    /**
                     * 用户 HTTP 请求的 userAgent。
                     */
                    std::string m_userAgent;
                    bool m_userAgentHasBeenSet;

                    /**
                     * 用户 HTTP 请求中的 x_forward_for。
                     */
                    std::string m_xForwardedFor;
                    bool m_xForwardedForHasBeenSet;

                    /**
                     * 用户操作过程中鼠标单击次数。
                     */
                    std::string m_mouseClickCount;
                    bool m_mouseClickCountHasBeenSet;

                    /**
                     * 用户操作过程中键盘单击次数。
                     */
                    std::string m_keyboardClickCount;
                    bool m_keyboardClickCountHasBeenSet;

                    /**
                     * 注册结果：
0：失败
1：成功
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 失败原因：
0：其他
1：参数错误
2：帐号冲突
3：验证错误
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 登录耗时，单位：秒。
                     */
                    std::string m_loginSpend;
                    bool m_loginSpendHasBeenSet;

                    /**
                     * MAC 地址或设备唯一标识。
                     */
                    std::string m_macAddress;
                    bool m_macAddressHasBeenSet;

                    /**
                     * 手机制造商 ID，如果手机注册，请带上此信息。
                     */
                    std::string m_vendorId;
                    bool m_vendorIdHasBeenSet;

                    /**
                     * App 客户端版本。
                     */
                    std::string m_appVersion;
                    bool m_appVersionHasBeenSet;

                    /**
                     * 手机设备号。
                     */
                    std::string m_imei;
                    bool m_imeiHasBeenSet;

                    /**
                     * 业务 ID 网站或应用在多个业务中使用此服务，通过此 ID 区分统计数据。
                     */
                    std::string m_businessId;
                    bool m_businessIdHasBeenSet;

                    /**
                     * 1：微信公众号
2：微信小程序
                     */
                    std::string m_wxSubType;
                    bool m_wxSubTypeHasBeenSet;

                    /**
                     * Token 签名随机数，微信小程序必填，建议16个字符。
                     */
                    std::string m_randNum;
                    bool m_randNumHasBeenSet;

                    /**
                     * 如果是微信小程序，该字段为以 ssesion_key 为 key 去签名随机数radnNum得到的值（hmac_sha256 签名算法）。
如果是微信公众号或第三方登录，则为授权的 access_token（注意：不是普通 access_token，具体看 微信官方文档）。
                     */
                    std::string m_wxToken;
                    bool m_wxTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LP_V20200224_MODEL_QUERYLOGINPROTECTIONREQUEST_H_
