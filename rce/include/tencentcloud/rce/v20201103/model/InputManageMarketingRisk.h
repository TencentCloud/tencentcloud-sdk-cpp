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

#ifndef TENCENTCLOUD_RCE_V20201103_MODEL_INPUTMANAGEMARKETINGRISK_H_
#define TENCENTCLOUD_RCE_V20201103_MODEL_INPUTMANAGEMARKETINGRISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20201103/model/AccountInfo.h>
#include <tencentcloud/rce/v20201103/model/InputDetails.h>
#include <tencentcloud/rce/v20201103/model/SponsorInfo.h>
#include <tencentcloud/rce/v20201103/model/OnlineScamInfo.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20201103
        {
            namespace Model
            {
                /**
                * 全栈式风控引擎入参
                */
                class InputManageMarketingRisk : public AbstractModel
                {
                public:
                    InputManageMarketingRisk();
                    ~InputManageMarketingRisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取账号信息。
                     * @return Account 账号信息。
                     * 
                     */
                    AccountInfo GetAccount() const;

                    /**
                     * 设置账号信息。
                     * @param _account 账号信息。
                     * 
                     */
                    void SetAccount(const AccountInfo& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取场景类型：场景SceneCode, 控制台上新建对应的场景并获取对应的值；
例如：e_register_protection_1521184361
控制台链接：https://console.cloud.tencent.com/rce/risk/sceneroot；
                     * @return SceneCode 场景类型：场景SceneCode, 控制台上新建对应的场景并获取对应的值；
例如：e_register_protection_1521184361
控制台链接：https://console.cloud.tencent.com/rce/risk/sceneroot；
                     * 
                     */
                    std::string GetSceneCode() const;

                    /**
                     * 设置场景类型：场景SceneCode, 控制台上新建对应的场景并获取对应的值；
例如：e_register_protection_1521184361
控制台链接：https://console.cloud.tencent.com/rce/risk/sceneroot；
                     * @param _sceneCode 场景类型：场景SceneCode, 控制台上新建对应的场景并获取对应的值；
例如：e_register_protection_1521184361
控制台链接：https://console.cloud.tencent.com/rce/risk/sceneroot；
                     * 
                     */
                    void SetSceneCode(const std::string& _sceneCode);

                    /**
                     * 判断参数 SceneCode 是否已赋值
                     * @return SceneCode 是否已赋值
                     * 
                     */
                    bool SceneCodeHasBeenSet() const;

                    /**
                     * 获取登录来源的外网IP
                     * @return UserIp 登录来源的外网IP
                     * 
                     */
                    std::string GetUserIp() const;

                    /**
                     * 设置登录来源的外网IP
                     * @param _userIp 登录来源的外网IP
                     * 
                     */
                    void SetUserIp(const std::string& _userIp);

                    /**
                     * 判断参数 UserIp 是否已赋值
                     * @return UserIp 是否已赋值
                     * 
                     */
                    bool UserIpHasBeenSet() const;

                    /**
                     * 获取时间戳
                     * @return PostTime 时间戳
                     * 
                     */
                    uint64_t GetPostTime() const;

                    /**
                     * 设置时间戳
                     * @param _postTime 时间戳
                     * 
                     */
                    void SetPostTime(const uint64_t& _postTime);

                    /**
                     * 判断参数 PostTime 是否已赋值
                     * @return PostTime 是否已赋值
                     * 
                     */
                    bool PostTimeHasBeenSet() const;

                    /**
                     * 获取用户唯一标识。
                     * @return UserId 用户唯一标识。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户唯一标识。
                     * @param _userId 用户唯一标识。
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取设备指纹token。
                     * @return DeviceToken 设备指纹token。
                     * 
                     */
                    std::string GetDeviceToken() const;

                    /**
                     * 设置设备指纹token。
                     * @param _deviceToken 设备指纹token。
                     * 
                     */
                    void SetDeviceToken(const std::string& _deviceToken);

                    /**
                     * 判断参数 DeviceToken 是否已赋值
                     * @return DeviceToken 是否已赋值
                     * 
                     */
                    bool DeviceTokenHasBeenSet() const;

                    /**
                     * 获取设备指纹BusinessId
                     * @return DeviceBusinessId 设备指纹BusinessId
                     * 
                     */
                    int64_t GetDeviceBusinessId() const;

                    /**
                     * 设置设备指纹BusinessId
                     * @param _deviceBusinessId 设备指纹BusinessId
                     * 
                     */
                    void SetDeviceBusinessId(const int64_t& _deviceBusinessId);

                    /**
                     * 判断参数 DeviceBusinessId 是否已赋值
                     * @return DeviceBusinessId 是否已赋值
                     * 
                     */
                    bool DeviceBusinessIdHasBeenSet() const;

                    /**
                     * 获取业务ID。网站或应用在多个业务中使用此服务，通过此ID区分统计数据。
                     * @return BusinessId 业务ID。网站或应用在多个业务中使用此服务，通过此ID区分统计数据。
                     * 
                     */
                    uint64_t GetBusinessId() const;

                    /**
                     * 设置业务ID。网站或应用在多个业务中使用此服务，通过此ID区分统计数据。
                     * @param _businessId 业务ID。网站或应用在多个业务中使用此服务，通过此ID区分统计数据。
                     * 
                     */
                    void SetBusinessId(const uint64_t& _businessId);

                    /**
                     * 判断参数 BusinessId 是否已赋值
                     * @return BusinessId 是否已赋值
                     * 
                     */
                    bool BusinessIdHasBeenSet() const;

                    /**
                     * 获取昵称，UTF-8 编码。
                     * @return Nickname 昵称，UTF-8 编码。
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置昵称，UTF-8 编码。
                     * @param _nickname 昵称，UTF-8 编码。
                     * 
                     */
                    void SetNickname(const std::string& _nickname);

                    /**
                     * 判断参数 Nickname 是否已赋值
                     * @return Nickname 是否已赋值
                     * 
                     */
                    bool NicknameHasBeenSet() const;

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
                     * 获取是否识别设备异常：
0：不识别。
1：识别。
                     * @return CheckDevice 是否识别设备异常：
0：不识别。
1：识别。
                     * 
                     */
                    int64_t GetCheckDevice() const;

                    /**
                     * 设置是否识别设备异常：
0：不识别。
1：识别。
                     * @param _checkDevice 是否识别设备异常：
0：不识别。
1：识别。
                     * 
                     */
                    void SetCheckDevice(const int64_t& _checkDevice);

                    /**
                     * 判断参数 CheckDevice 是否已赋值
                     * @return CheckDevice 是否已赋值
                     * 
                     */
                    bool CheckDeviceHasBeenSet() const;

                    /**
                     * 获取用户HTTP请求中的Cookie进行2次hash的值，只要保证相同Cookie的hash值一致即可。
                     * @return CookieHash 用户HTTP请求中的Cookie进行2次hash的值，只要保证相同Cookie的hash值一致即可。
                     * 
                     */
                    std::string GetCookieHash() const;

                    /**
                     * 设置用户HTTP请求中的Cookie进行2次hash的值，只要保证相同Cookie的hash值一致即可。
                     * @param _cookieHash 用户HTTP请求中的Cookie进行2次hash的值，只要保证相同Cookie的hash值一致即可。
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
                     * 获取用户HTTP请求的Referer值。
                     * @return Referer 用户HTTP请求的Referer值。
                     * 
                     */
                    std::string GetReferer() const;

                    /**
                     * 设置用户HTTP请求的Referer值。
                     * @param _referer 用户HTTP请求的Referer值。
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
                     * 获取用户HTTP请求的User-Agent值。
                     * @return UserAgent 用户HTTP请求的User-Agent值。
                     * 
                     */
                    std::string GetUserAgent() const;

                    /**
                     * 设置用户HTTP请求的User-Agent值。
                     * @param _userAgent 用户HTTP请求的User-Agent值。
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
                     * 获取用户HTTP请求的X-Forwarded-For值。
                     * @return XForwardedFor 用户HTTP请求的X-Forwarded-For值。
                     * 
                     */
                    std::string GetXForwardedFor() const;

                    /**
                     * 设置用户HTTP请求的X-Forwarded-For值。
                     * @param _xForwardedFor 用户HTTP请求的X-Forwarded-For值。
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
                     * 获取MAC地址或设备唯一标识。
                     * @return MacAddress MAC地址或设备唯一标识。
                     * 
                     */
                    std::string GetMacAddress() const;

                    /**
                     * 设置MAC地址或设备唯一标识。
                     * @param _macAddress MAC地址或设备唯一标识。
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
                     * 获取手机制造商ID，如果手机注册，请带上此信息。
                     * @return VendorId 手机制造商ID，如果手机注册，请带上此信息。
                     * 
                     */
                    std::string GetVendorId() const;

                    /**
                     * 设置手机制造商ID，如果手机注册，请带上此信息。
                     * @param _vendorId 手机制造商ID，如果手机注册，请带上此信息。
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
                     * 获取设备类型：
1：Android
2：IOS
                     * @return DeviceType 设备类型：
1：Android
2：IOS
                     * 
                     */
                    int64_t GetDeviceType() const;

                    /**
                     * 设置设备类型：
1：Android
2：IOS
                     * @param _deviceType 设备类型：
1：Android
2：IOS
                     * 
                     */
                    void SetDeviceType(const int64_t& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取详细信息
                     * @return Details 详细信息
                     * 
                     */
                    std::vector<InputDetails> GetDetails() const;

                    /**
                     * 设置详细信息
                     * @param _details 详细信息
                     * 
                     */
                    void SetDetails(const std::vector<InputDetails>& _details);

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     * 
                     */
                    bool DetailsHasBeenSet() const;

                    /**
                     * 获取可选填写。详情请跳转至SponsorInfo查看。
                     * @return Sponsor 可选填写。详情请跳转至SponsorInfo查看。
                     * 
                     */
                    SponsorInfo GetSponsor() const;

                    /**
                     * 设置可选填写。详情请跳转至SponsorInfo查看。
                     * @param _sponsor 可选填写。详情请跳转至SponsorInfo查看。
                     * 
                     */
                    void SetSponsor(const SponsorInfo& _sponsor);

                    /**
                     * 判断参数 Sponsor 是否已赋值
                     * @return Sponsor 是否已赋值
                     * 
                     */
                    bool SponsorHasBeenSet() const;

                    /**
                     * 获取可选填写。详情请跳转至OnlineScamInfo查看。
                     * @return OnlineScam 可选填写。详情请跳转至OnlineScamInfo查看。
                     * 
                     */
                    OnlineScamInfo GetOnlineScam() const;

                    /**
                     * 设置可选填写。详情请跳转至OnlineScamInfo查看。
                     * @param _onlineScam 可选填写。详情请跳转至OnlineScamInfo查看。
                     * 
                     */
                    void SetOnlineScam(const OnlineScamInfo& _onlineScam);

                    /**
                     * 判断参数 OnlineScam 是否已赋值
                     * @return OnlineScam 是否已赋值
                     * 
                     */
                    bool OnlineScamHasBeenSet() const;

                    /**
                     * 获取平台: 1android
                     * @return Platform 平台: 1android
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台: 1android
                     * @param _platform 平台: 1android
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                private:

                    /**
                     * 账号信息。
                     */
                    AccountInfo m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * 场景类型：场景SceneCode, 控制台上新建对应的场景并获取对应的值；
例如：e_register_protection_1521184361
控制台链接：https://console.cloud.tencent.com/rce/risk/sceneroot；
                     */
                    std::string m_sceneCode;
                    bool m_sceneCodeHasBeenSet;

                    /**
                     * 登录来源的外网IP
                     */
                    std::string m_userIp;
                    bool m_userIpHasBeenSet;

                    /**
                     * 时间戳
                     */
                    uint64_t m_postTime;
                    bool m_postTimeHasBeenSet;

                    /**
                     * 用户唯一标识。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 设备指纹token。
                     */
                    std::string m_deviceToken;
                    bool m_deviceTokenHasBeenSet;

                    /**
                     * 设备指纹BusinessId
                     */
                    int64_t m_deviceBusinessId;
                    bool m_deviceBusinessIdHasBeenSet;

                    /**
                     * 业务ID。网站或应用在多个业务中使用此服务，通过此ID区分统计数据。
                     */
                    uint64_t m_businessId;
                    bool m_businessIdHasBeenSet;

                    /**
                     * 昵称，UTF-8 编码。
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * 用户邮箱地址（非系统自动生成）。
                     */
                    std::string m_emailAddress;
                    bool m_emailAddressHasBeenSet;

                    /**
                     * 是否识别设备异常：
0：不识别。
1：识别。
                     */
                    int64_t m_checkDevice;
                    bool m_checkDeviceHasBeenSet;

                    /**
                     * 用户HTTP请求中的Cookie进行2次hash的值，只要保证相同Cookie的hash值一致即可。
                     */
                    std::string m_cookieHash;
                    bool m_cookieHashHasBeenSet;

                    /**
                     * 用户HTTP请求的Referer值。
                     */
                    std::string m_referer;
                    bool m_refererHasBeenSet;

                    /**
                     * 用户HTTP请求的User-Agent值。
                     */
                    std::string m_userAgent;
                    bool m_userAgentHasBeenSet;

                    /**
                     * 用户HTTP请求的X-Forwarded-For值。
                     */
                    std::string m_xForwardedFor;
                    bool m_xForwardedForHasBeenSet;

                    /**
                     * MAC地址或设备唯一标识。
                     */
                    std::string m_macAddress;
                    bool m_macAddressHasBeenSet;

                    /**
                     * 手机制造商ID，如果手机注册，请带上此信息。
                     */
                    std::string m_vendorId;
                    bool m_vendorIdHasBeenSet;

                    /**
                     * 设备类型：
1：Android
2：IOS
                     */
                    int64_t m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 详细信息
                     */
                    std::vector<InputDetails> m_details;
                    bool m_detailsHasBeenSet;

                    /**
                     * 可选填写。详情请跳转至SponsorInfo查看。
                     */
                    SponsorInfo m_sponsor;
                    bool m_sponsorHasBeenSet;

                    /**
                     * 可选填写。详情请跳转至OnlineScamInfo查看。
                     */
                    OnlineScamInfo m_onlineScam;
                    bool m_onlineScamHasBeenSet;

                    /**
                     * 平台: 1android
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_INPUTMANAGEMARKETINGRISK_H_
