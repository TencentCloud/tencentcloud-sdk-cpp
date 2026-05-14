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
                     * 获取<p>用户账号类型；默认开通QQOpenId、手机号MD5权限；如果需要使用微信OpenId入参，则需要&quot;提交工单&quot;或联系对接人进行资格审核，审核通过后方可正常使用微信开放账号。<br>1：QQ开放账号<br>2：微信开放账号<br>10004：手机号MD5，中国大陆11位手机号进行MD5加密，取32位小写值<br>10005：手机号SHA256，中国大陆11位手机号进行SHA256加密，取64位小写值</p>
                     * @return Account <p>用户账号类型；默认开通QQOpenId、手机号MD5权限；如果需要使用微信OpenId入参，则需要&quot;提交工单&quot;或联系对接人进行资格审核，审核通过后方可正常使用微信开放账号。<br>1：QQ开放账号<br>2：微信开放账号<br>10004：手机号MD5，中国大陆11位手机号进行MD5加密，取32位小写值<br>10005：手机号SHA256，中国大陆11位手机号进行SHA256加密，取64位小写值</p>
                     * 
                     */
                    AccountInfo GetAccount() const;

                    /**
                     * 设置<p>用户账号类型；默认开通QQOpenId、手机号MD5权限；如果需要使用微信OpenId入参，则需要&quot;提交工单&quot;或联系对接人进行资格审核，审核通过后方可正常使用微信开放账号。<br>1：QQ开放账号<br>2：微信开放账号<br>10004：手机号MD5，中国大陆11位手机号进行MD5加密，取32位小写值<br>10005：手机号SHA256，中国大陆11位手机号进行SHA256加密，取64位小写值</p>
                     * @param _account <p>用户账号类型；默认开通QQOpenId、手机号MD5权限；如果需要使用微信OpenId入参，则需要&quot;提交工单&quot;或联系对接人进行资格审核，审核通过后方可正常使用微信开放账号。<br>1：QQ开放账号<br>2：微信开放账号<br>10004：手机号MD5，中国大陆11位手机号进行MD5加密，取32位小写值<br>10005：手机号SHA256，中国大陆11位手机号进行SHA256加密，取64位小写值</p>
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
                     * 获取<p>场景码，用于识别和区分不同的业务场景，可在控制台上新建和管理<br>控制台链接：https://console.cloud.tencent.com/rce/risk/strategy/scene-root<br>活动防刷默认场景码：e_activity_antirush<br>登录保护默认场景码：e_login_protection<br>注册保护默认场景码：e_register_protection</p>
                     * @return SceneCode <p>场景码，用于识别和区分不同的业务场景，可在控制台上新建和管理<br>控制台链接：https://console.cloud.tencent.com/rce/risk/strategy/scene-root<br>活动防刷默认场景码：e_activity_antirush<br>登录保护默认场景码：e_login_protection<br>注册保护默认场景码：e_register_protection</p>
                     * 
                     */
                    std::string GetSceneCode() const;

                    /**
                     * 设置<p>场景码，用于识别和区分不同的业务场景，可在控制台上新建和管理<br>控制台链接：https://console.cloud.tencent.com/rce/risk/strategy/scene-root<br>活动防刷默认场景码：e_activity_antirush<br>登录保护默认场景码：e_login_protection<br>注册保护默认场景码：e_register_protection</p>
                     * @param _sceneCode <p>场景码，用于识别和区分不同的业务场景，可在控制台上新建和管理<br>控制台链接：https://console.cloud.tencent.com/rce/risk/strategy/scene-root<br>活动防刷默认场景码：e_activity_antirush<br>登录保护默认场景码：e_login_protection<br>注册保护默认场景码：e_register_protection</p>
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
                     * 获取<p>用户外网ip（传入用户非外网ip会影响判断结果）。</p>
                     * @return UserIp <p>用户外网ip（传入用户非外网ip会影响判断结果）。</p>
                     * 
                     */
                    std::string GetUserIp() const;

                    /**
                     * 设置<p>用户外网ip（传入用户非外网ip会影响判断结果）。</p>
                     * @param _userIp <p>用户外网ip（传入用户非外网ip会影响判断结果）。</p>
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
                     * 获取<p>用户操作时间戳，精确到秒。</p>
                     * @return PostTime <p>用户操作时间戳，精确到秒。</p>
                     * 
                     */
                    uint64_t GetPostTime() const;

                    /**
                     * 设置<p>用户操作时间戳，精确到秒。</p>
                     * @param _postTime <p>用户操作时间戳，精确到秒。</p>
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
                     * 获取<p>业务平台用户唯一标识，支持自定义。</p>
                     * @return UserId <p>业务平台用户唯一标识，支持自定义。</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>业务平台用户唯一标识，支持自定义。</p>
                     * @param _userId <p>业务平台用户唯一标识，支持自定义。</p>
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
                     * 获取<p>设备指纹DeviceToken值，集成设备指纹后获取；如果集成了相应的设备指纹，该字段必填。</p>
                     * @return DeviceToken <p>设备指纹DeviceToken值，集成设备指纹后获取；如果集成了相应的设备指纹，该字段必填。</p>
                     * 
                     */
                    std::string GetDeviceToken() const;

                    /**
                     * 设置<p>设备指纹DeviceToken值，集成设备指纹后获取；如果集成了相应的设备指纹，该字段必填。</p>
                     * @param _deviceToken <p>设备指纹DeviceToken值，集成设备指纹后获取；如果集成了相应的设备指纹，该字段必填。</p>
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
                     * 获取<p>设备指纹 BusinessId。</p>
                     * @return DeviceBusinessId <p>设备指纹 BusinessId。</p>
                     * 
                     */
                    int64_t GetDeviceBusinessId() const;

                    /**
                     * 设置<p>设备指纹 BusinessId。</p>
                     * @param _deviceBusinessId <p>设备指纹 BusinessId。</p>
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
                     * 获取<p>业务ID。网站或应用在多个业务中使用此服务，通过此ID区分统计数据。</p>
                     * @return BusinessId <p>业务ID。网站或应用在多个业务中使用此服务，通过此ID区分统计数据。</p>
                     * 
                     */
                    uint64_t GetBusinessId() const;

                    /**
                     * 设置<p>业务ID。网站或应用在多个业务中使用此服务，通过此ID区分统计数据。</p>
                     * @param _businessId <p>业务ID。网站或应用在多个业务中使用此服务，通过此ID区分统计数据。</p>
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
                     * 获取<p>昵称，UTF-8 编码。</p>
                     * @return Nickname <p>昵称，UTF-8 编码。</p>
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置<p>昵称，UTF-8 编码。</p>
                     * @param _nickname <p>昵称，UTF-8 编码。</p>
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
                     * 获取<p>用户邮箱地址。</p>
                     * @return EmailAddress <p>用户邮箱地址。</p>
                     * 
                     */
                    std::string GetEmailAddress() const;

                    /**
                     * 设置<p>用户邮箱地址。</p>
                     * @param _emailAddress <p>用户邮箱地址。</p>
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
                     * 获取<p>是否识别设备异常：<br>0：不识别。<br>1：识别。</p>
                     * @return CheckDevice <p>是否识别设备异常：<br>0：不识别。<br>1：识别。</p>
                     * 
                     */
                    int64_t GetCheckDevice() const;

                    /**
                     * 设置<p>是否识别设备异常：<br>0：不识别。<br>1：识别。</p>
                     * @param _checkDevice <p>是否识别设备异常：<br>0：不识别。<br>1：识别。</p>
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
                     * 获取<p>用户HTTP请求中的Cookie进行2次hash的值，只要保证相同Cookie的hash值一致即可。</p>
                     * @return CookieHash <p>用户HTTP请求中的Cookie进行2次hash的值，只要保证相同Cookie的hash值一致即可。</p>
                     * 
                     */
                    std::string GetCookieHash() const;

                    /**
                     * 设置<p>用户HTTP请求中的Cookie进行2次hash的值，只要保证相同Cookie的hash值一致即可。</p>
                     * @param _cookieHash <p>用户HTTP请求中的Cookie进行2次hash的值，只要保证相同Cookie的hash值一致即可。</p>
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
                     * 获取<p>用户HTTP请求的Referer值。</p>
                     * @return Referer <p>用户HTTP请求的Referer值。</p>
                     * 
                     */
                    std::string GetReferer() const;

                    /**
                     * 设置<p>用户HTTP请求的Referer值。</p>
                     * @param _referer <p>用户HTTP请求的Referer值。</p>
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
                     * 获取<p>用户HTTP请求的User-Agent值。</p>
                     * @return UserAgent <p>用户HTTP请求的User-Agent值。</p>
                     * 
                     */
                    std::string GetUserAgent() const;

                    /**
                     * 设置<p>用户HTTP请求的User-Agent值。</p>
                     * @param _userAgent <p>用户HTTP请求的User-Agent值。</p>
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
                     * 获取<p>用户HTTP请求的X-Forwarded-For值。</p>
                     * @return XForwardedFor <p>用户HTTP请求的X-Forwarded-For值。</p>
                     * 
                     */
                    std::string GetXForwardedFor() const;

                    /**
                     * 设置<p>用户HTTP请求的X-Forwarded-For值。</p>
                     * @param _xForwardedFor <p>用户HTTP请求的X-Forwarded-For值。</p>
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
                     * 获取<p>MAC地址或设备唯一标识。</p>
                     * @return MacAddress <p>MAC地址或设备唯一标识。</p>
                     * 
                     */
                    std::string GetMacAddress() const;

                    /**
                     * 设置<p>MAC地址或设备唯一标识。</p>
                     * @param _macAddress <p>MAC地址或设备唯一标识。</p>
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
                     * 获取<p>手机制造商ID，如果手机注册，请带上此信息。</p>
                     * @return VendorId <p>手机制造商ID，如果手机注册，请带上此信息。</p>
                     * 
                     */
                    std::string GetVendorId() const;

                    /**
                     * 设置<p>手机制造商ID，如果手机注册，请带上此信息。</p>
                     * @param _vendorId <p>手机制造商ID，如果手机注册，请带上此信息。</p>
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
                     * 获取<p>设备类型(已不推荐使用)。</p>
                     * @return DeviceType <p>设备类型(已不推荐使用)。</p>
                     * 
                     */
                    int64_t GetDeviceType() const;

                    /**
                     * 设置<p>设备类型(已不推荐使用)。</p>
                     * @param _deviceType <p>设备类型(已不推荐使用)。</p>
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
                     * 获取<p>扩展字段。</p>
                     * @return Details <p>扩展字段。</p>
                     * 
                     */
                    std::vector<InputDetails> GetDetails() const;

                    /**
                     * 设置<p>扩展字段。</p>
                     * @param _details <p>扩展字段。</p>
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
                     * 获取<p>邀请助力场景相关信息。</p>
                     * @return Sponsor <p>邀请助力场景相关信息。</p>
                     * 
                     */
                    SponsorInfo GetSponsor() const;

                    /**
                     * 设置<p>邀请助力场景相关信息。</p>
                     * @param _sponsor <p>邀请助力场景相关信息。</p>
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
                     * 获取<p>详情请跳转至OnlineScamInfo查看。</p>
                     * @return OnlineScam <p>详情请跳转至OnlineScamInfo查看。</p>
                     * 
                     */
                    OnlineScamInfo GetOnlineScam() const;

                    /**
                     * 设置<p>详情请跳转至OnlineScamInfo查看。</p>
                     * @param _onlineScam <p>详情请跳转至OnlineScamInfo查看。</p>
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
                     * 获取<p>1：Android<br>2：iOS<br>3：H5<br>4：小程序<br>5：鸿蒙</p>
                     * @return Platform <p>1：Android<br>2：iOS<br>3：H5<br>4：小程序<br>5：鸿蒙</p>
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置<p>1：Android<br>2：iOS<br>3：H5<br>4：小程序<br>5：鸿蒙</p>
                     * @param _platform <p>1：Android<br>2：iOS<br>3：H5<br>4：小程序<br>5：鸿蒙</p>
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
                     * 获取<p>数据授权信息。<br>注意：新接入通用业务欺诈保护（RCE）服务的客户该字段【必传】。</p>
                     * @return DataAuthorization <p>数据授权信息。<br>注意：新接入通用业务欺诈保护（RCE）服务的客户该字段【必传】。</p>
                     * 
                     */
                    DataAuthorizationInfo GetDataAuthorization() const;

                    /**
                     * 设置<p>数据授权信息。<br>注意：新接入通用业务欺诈保护（RCE）服务的客户该字段【必传】。</p>
                     * @param _dataAuthorization <p>数据授权信息。<br>注意：新接入通用业务欺诈保护（RCE）服务的客户该字段【必传】。</p>
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
                     * <p>用户账号类型；默认开通QQOpenId、手机号MD5权限；如果需要使用微信OpenId入参，则需要&quot;提交工单&quot;或联系对接人进行资格审核，审核通过后方可正常使用微信开放账号。<br>1：QQ开放账号<br>2：微信开放账号<br>10004：手机号MD5，中国大陆11位手机号进行MD5加密，取32位小写值<br>10005：手机号SHA256，中国大陆11位手机号进行SHA256加密，取64位小写值</p>
                     */
                    AccountInfo m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * <p>场景码，用于识别和区分不同的业务场景，可在控制台上新建和管理<br>控制台链接：https://console.cloud.tencent.com/rce/risk/strategy/scene-root<br>活动防刷默认场景码：e_activity_antirush<br>登录保护默认场景码：e_login_protection<br>注册保护默认场景码：e_register_protection</p>
                     */
                    std::string m_sceneCode;
                    bool m_sceneCodeHasBeenSet;

                    /**
                     * <p>用户外网ip（传入用户非外网ip会影响判断结果）。</p>
                     */
                    std::string m_userIp;
                    bool m_userIpHasBeenSet;

                    /**
                     * <p>用户操作时间戳，精确到秒。</p>
                     */
                    uint64_t m_postTime;
                    bool m_postTimeHasBeenSet;

                    /**
                     * <p>业务平台用户唯一标识，支持自定义。</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>设备指纹DeviceToken值，集成设备指纹后获取；如果集成了相应的设备指纹，该字段必填。</p>
                     */
                    std::string m_deviceToken;
                    bool m_deviceTokenHasBeenSet;

                    /**
                     * <p>设备指纹 BusinessId。</p>
                     */
                    int64_t m_deviceBusinessId;
                    bool m_deviceBusinessIdHasBeenSet;

                    /**
                     * <p>业务ID。网站或应用在多个业务中使用此服务，通过此ID区分统计数据。</p>
                     */
                    uint64_t m_businessId;
                    bool m_businessIdHasBeenSet;

                    /**
                     * <p>昵称，UTF-8 编码。</p>
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * <p>用户邮箱地址。</p>
                     */
                    std::string m_emailAddress;
                    bool m_emailAddressHasBeenSet;

                    /**
                     * <p>是否识别设备异常：<br>0：不识别。<br>1：识别。</p>
                     */
                    int64_t m_checkDevice;
                    bool m_checkDeviceHasBeenSet;

                    /**
                     * <p>用户HTTP请求中的Cookie进行2次hash的值，只要保证相同Cookie的hash值一致即可。</p>
                     */
                    std::string m_cookieHash;
                    bool m_cookieHashHasBeenSet;

                    /**
                     * <p>用户HTTP请求的Referer值。</p>
                     */
                    std::string m_referer;
                    bool m_refererHasBeenSet;

                    /**
                     * <p>用户HTTP请求的User-Agent值。</p>
                     */
                    std::string m_userAgent;
                    bool m_userAgentHasBeenSet;

                    /**
                     * <p>用户HTTP请求的X-Forwarded-For值。</p>
                     */
                    std::string m_xForwardedFor;
                    bool m_xForwardedForHasBeenSet;

                    /**
                     * <p>MAC地址或设备唯一标识。</p>
                     */
                    std::string m_macAddress;
                    bool m_macAddressHasBeenSet;

                    /**
                     * <p>手机制造商ID，如果手机注册，请带上此信息。</p>
                     */
                    std::string m_vendorId;
                    bool m_vendorIdHasBeenSet;

                    /**
                     * <p>设备类型(已不推荐使用)。</p>
                     */
                    int64_t m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * <p>扩展字段。</p>
                     */
                    std::vector<InputDetails> m_details;
                    bool m_detailsHasBeenSet;

                    /**
                     * <p>邀请助力场景相关信息。</p>
                     */
                    SponsorInfo m_sponsor;
                    bool m_sponsorHasBeenSet;

                    /**
                     * <p>详情请跳转至OnlineScamInfo查看。</p>
                     */
                    OnlineScamInfo m_onlineScam;
                    bool m_onlineScamHasBeenSet;

                    /**
                     * <p>1：Android<br>2：iOS<br>3：H5<br>4：小程序<br>5：鸿蒙</p>
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * <p>数据授权信息。<br>注意：新接入通用业务欺诈保护（RCE）服务的客户该字段【必传】。</p>
                     */
                    DataAuthorizationInfo m_dataAuthorization;
                    bool m_dataAuthorizationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_INPUTMANAGEMARKETINGRISK_H_
