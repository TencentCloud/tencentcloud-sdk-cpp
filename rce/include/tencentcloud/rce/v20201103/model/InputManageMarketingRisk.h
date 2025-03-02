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
#include <tencentcloud/rce/v20201103/model/DataAuthorizationInfo.h>


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
                     * 获取用户账号类型；默认开通QQOpenId、手机号MD5权限；如果需要使用微信OpenId入参，则需要"提交工单"或联系对接人进行资格审核，审核通过后方可正常使用微信开放账号。
1：QQ开放账号
2：微信开放账号
10004：手机号MD5，中国大陆11位手机号进行MD5加密，取32位小写值
10005：手机号SHA256，中国大陆11位手机号进行SHA256加密，取64位小写值
                     * @return Account 用户账号类型；默认开通QQOpenId、手机号MD5权限；如果需要使用微信OpenId入参，则需要"提交工单"或联系对接人进行资格审核，审核通过后方可正常使用微信开放账号。
1：QQ开放账号
2：微信开放账号
10004：手机号MD5，中国大陆11位手机号进行MD5加密，取32位小写值
10005：手机号SHA256，中国大陆11位手机号进行SHA256加密，取64位小写值
                     * 
                     */
                    AccountInfo GetAccount() const;

                    /**
                     * 设置用户账号类型；默认开通QQOpenId、手机号MD5权限；如果需要使用微信OpenId入参，则需要"提交工单"或联系对接人进行资格审核，审核通过后方可正常使用微信开放账号。
1：QQ开放账号
2：微信开放账号
10004：手机号MD5，中国大陆11位手机号进行MD5加密，取32位小写值
10005：手机号SHA256，中国大陆11位手机号进行SHA256加密，取64位小写值
                     * @param _account 用户账号类型；默认开通QQOpenId、手机号MD5权限；如果需要使用微信OpenId入参，则需要"提交工单"或联系对接人进行资格审核，审核通过后方可正常使用微信开放账号。
1：QQ开放账号
2：微信开放账号
10004：手机号MD5，中国大陆11位手机号进行MD5加密，取32位小写值
10005：手机号SHA256，中国大陆11位手机号进行SHA256加密，取64位小写值
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
                     * 获取场景码，用于识别和区分不同的业务场景，可在控制台上新建和管理
控制台链接：https://console.cloud.tencent.com/rce/risk/strategy/scene-root
活动防刷默认场景码：e_activity_antirush 
登录保护默认场景码：e_login_protection
注册保护默认场景码：e_register_protection
                     * @return SceneCode 场景码，用于识别和区分不同的业务场景，可在控制台上新建和管理
控制台链接：https://console.cloud.tencent.com/rce/risk/strategy/scene-root
活动防刷默认场景码：e_activity_antirush 
登录保护默认场景码：e_login_protection
注册保护默认场景码：e_register_protection
                     * 
                     */
                    std::string GetSceneCode() const;

                    /**
                     * 设置场景码，用于识别和区分不同的业务场景，可在控制台上新建和管理
控制台链接：https://console.cloud.tencent.com/rce/risk/strategy/scene-root
活动防刷默认场景码：e_activity_antirush 
登录保护默认场景码：e_login_protection
注册保护默认场景码：e_register_protection
                     * @param _sceneCode 场景码，用于识别和区分不同的业务场景，可在控制台上新建和管理
控制台链接：https://console.cloud.tencent.com/rce/risk/strategy/scene-root
活动防刷默认场景码：e_activity_antirush 
登录保护默认场景码：e_login_protection
注册保护默认场景码：e_register_protection
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
                     * 获取用户外网ip（传入用户非外网ip会影响判断结果）。
                     * @return UserIp 用户外网ip（传入用户非外网ip会影响判断结果）。
                     * 
                     */
                    std::string GetUserIp() const;

                    /**
                     * 设置用户外网ip（传入用户非外网ip会影响判断结果）。
                     * @param _userIp 用户外网ip（传入用户非外网ip会影响判断结果）。
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
                     * 获取用户操作时间戳，精确到秒。
                     * @return PostTime 用户操作时间戳，精确到秒。
                     * 
                     */
                    uint64_t GetPostTime() const;

                    /**
                     * 设置用户操作时间戳，精确到秒。
                     * @param _postTime 用户操作时间戳，精确到秒。
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
                     * 获取业务平台用户唯一标识，支持自定义。
                     * @return UserId 业务平台用户唯一标识，支持自定义。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置业务平台用户唯一标识，支持自定义。
                     * @param _userId 业务平台用户唯一标识，支持自定义。
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
                     * 获取设备指纹DeviceToken值，集成设备指纹后获取；如果集成了相应的设备指纹，该字段必填。
                     * @return DeviceToken 设备指纹DeviceToken值，集成设备指纹后获取；如果集成了相应的设备指纹，该字段必填。
                     * 
                     */
                    std::string GetDeviceToken() const;

                    /**
                     * 设置设备指纹DeviceToken值，集成设备指纹后获取；如果集成了相应的设备指纹，该字段必填。
                     * @param _deviceToken 设备指纹DeviceToken值，集成设备指纹后获取；如果集成了相应的设备指纹，该字段必填。
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
                     * 获取设备指纹 BusinessId。
                     * @return DeviceBusinessId 设备指纹 BusinessId。
                     * 
                     */
                    int64_t GetDeviceBusinessId() const;

                    /**
                     * 设置设备指纹 BusinessId。
                     * @param _deviceBusinessId 设备指纹 BusinessId。
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
                     * 获取用户邮箱地址。
                     * @return EmailAddress 用户邮箱地址。
                     * 
                     */
                    std::string GetEmailAddress() const;

                    /**
                     * 设置用户邮箱地址。
                     * @param _emailAddress 用户邮箱地址。
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
                     * 获取设备类型(已不推荐使用)。
                     * @return DeviceType 设备类型(已不推荐使用)。
                     * 
                     */
                    int64_t GetDeviceType() const;

                    /**
                     * 设置设备类型(已不推荐使用)。
                     * @param _deviceType 设备类型(已不推荐使用)。
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
                     * 获取扩展字段。
                     * @return Details 扩展字段。
                     * 
                     */
                    std::vector<InputDetails> GetDetails() const;

                    /**
                     * 设置扩展字段。
                     * @param _details 扩展字段。
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
                     * 获取邀请助力场景相关信息。
                     * @return Sponsor 邀请助力场景相关信息。
                     * 
                     */
                    SponsorInfo GetSponsor() const;

                    /**
                     * 设置邀请助力场景相关信息。
                     * @param _sponsor 邀请助力场景相关信息。
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
                     * 获取详情请跳转至OnlineScamInfo查看。
                     * @return OnlineScam 详情请跳转至OnlineScamInfo查看。
                     * 
                     */
                    OnlineScamInfo GetOnlineScam() const;

                    /**
                     * 设置详情请跳转至OnlineScamInfo查看。
                     * @param _onlineScam 详情请跳转至OnlineScamInfo查看。
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
                     * 获取1：Android
2：iOS
3：H5
4：小程序
                     * @return Platform 1：Android
2：iOS
3：H5
4：小程序
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置1：Android
2：iOS
3：H5
4：小程序
                     * @param _platform 1：Android
2：iOS
3：H5
4：小程序
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取数据授权信息。
                     * @return DataAuthorization 数据授权信息。
                     * 
                     */
                    DataAuthorizationInfo GetDataAuthorization() const;

                    /**
                     * 设置数据授权信息。
                     * @param _dataAuthorization 数据授权信息。
                     * 
                     */
                    void SetDataAuthorization(const DataAuthorizationInfo& _dataAuthorization);

                    /**
                     * 判断参数 DataAuthorization 是否已赋值
                     * @return DataAuthorization 是否已赋值
                     * 
                     */
                    bool DataAuthorizationHasBeenSet() const;

                private:

                    /**
                     * 用户账号类型；默认开通QQOpenId、手机号MD5权限；如果需要使用微信OpenId入参，则需要"提交工单"或联系对接人进行资格审核，审核通过后方可正常使用微信开放账号。
1：QQ开放账号
2：微信开放账号
10004：手机号MD5，中国大陆11位手机号进行MD5加密，取32位小写值
10005：手机号SHA256，中国大陆11位手机号进行SHA256加密，取64位小写值
                     */
                    AccountInfo m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * 场景码，用于识别和区分不同的业务场景，可在控制台上新建和管理
控制台链接：https://console.cloud.tencent.com/rce/risk/strategy/scene-root
活动防刷默认场景码：e_activity_antirush 
登录保护默认场景码：e_login_protection
注册保护默认场景码：e_register_protection
                     */
                    std::string m_sceneCode;
                    bool m_sceneCodeHasBeenSet;

                    /**
                     * 用户外网ip（传入用户非外网ip会影响判断结果）。
                     */
                    std::string m_userIp;
                    bool m_userIpHasBeenSet;

                    /**
                     * 用户操作时间戳，精确到秒。
                     */
                    uint64_t m_postTime;
                    bool m_postTimeHasBeenSet;

                    /**
                     * 业务平台用户唯一标识，支持自定义。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 设备指纹DeviceToken值，集成设备指纹后获取；如果集成了相应的设备指纹，该字段必填。
                     */
                    std::string m_deviceToken;
                    bool m_deviceTokenHasBeenSet;

                    /**
                     * 设备指纹 BusinessId。
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
                     * 用户邮箱地址。
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
                     * 设备类型(已不推荐使用)。
                     */
                    int64_t m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 扩展字段。
                     */
                    std::vector<InputDetails> m_details;
                    bool m_detailsHasBeenSet;

                    /**
                     * 邀请助力场景相关信息。
                     */
                    SponsorInfo m_sponsor;
                    bool m_sponsorHasBeenSet;

                    /**
                     * 详情请跳转至OnlineScamInfo查看。
                     */
                    OnlineScamInfo m_onlineScam;
                    bool m_onlineScamHasBeenSet;

                    /**
                     * 1：Android
2：iOS
3：H5
4：小程序
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 数据授权信息。
                     */
                    DataAuthorizationInfo m_dataAuthorization;
                    bool m_dataAuthorizationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_INPUTMANAGEMARKETINGRISK_H_
