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

#ifndef TENCENTCLOUD_AA_V20200224_MODEL_INPUTMANAGEMARKETINGRISK_H_
#define TENCENTCLOUD_AA_V20200224_MODEL_INPUTMANAGEMARKETINGRISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/aa/v20200224/model/AccountInfo.h>
#include <tencentcloud/aa/v20200224/model/CrowdAntiRushInfo.h>
#include <tencentcloud/aa/v20200224/model/InputDetails.h>


namespace TencentCloud
{
    namespace Aa
    {
        namespace V20200224
        {
            namespace Model
            {
                /**
                * 营销风控入参
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
                     */
                    AccountInfo GetAccount() const;

                    /**
                     * 设置账号信息。
                     * @param Account 账号信息。
                     */
                    void SetAccount(const AccountInfo& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取登录来源的外网IP
                     * @return UserIp 登录来源的外网IP
                     */
                    std::string GetUserIp() const;

                    /**
                     * 设置登录来源的外网IP
                     * @param UserIp 登录来源的外网IP
                     */
                    void SetUserIp(const std::string& _userIp);

                    /**
                     * 判断参数 UserIp 是否已赋值
                     * @return UserIp 是否已赋值
                     */
                    bool UserIpHasBeenSet() const;

                    /**
                     * 获取用户操作时间戳，单位秒（格林威治时间精确到秒，如1501590972）。
                     * @return PostTime 用户操作时间戳，单位秒（格林威治时间精确到秒，如1501590972）。
                     */
                    uint64_t GetPostTime() const;

                    /**
                     * 设置用户操作时间戳，单位秒（格林威治时间精确到秒，如1501590972）。
                     * @param PostTime 用户操作时间戳，单位秒（格林威治时间精确到秒，如1501590972）。
                     */
                    void SetPostTime(const uint64_t& _postTime);

                    /**
                     * 判断参数 PostTime 是否已赋值
                     * @return PostTime 是否已赋值
                     */
                    bool PostTimeHasBeenSet() const;

                    /**
                     * 获取场景类型。(后续不再支持，请使用SceneCode字段)
1：活动防刷
2：登录保护
3：注册保护
4：活动防刷高级版（网赚）
                     * @return SceneType 场景类型。(后续不再支持，请使用SceneCode字段)
1：活动防刷
2：登录保护
3：注册保护
4：活动防刷高级版（网赚）
                     */
                    int64_t GetSceneType() const;

                    /**
                     * 设置场景类型。(后续不再支持，请使用SceneCode字段)
1：活动防刷
2：登录保护
3：注册保护
4：活动防刷高级版（网赚）
                     * @param SceneType 场景类型。(后续不再支持，请使用SceneCode字段)
1：活动防刷
2：登录保护
3：注册保护
4：活动防刷高级版（网赚）
                     */
                    void SetSceneType(const int64_t& _sceneType);

                    /**
                     * 判断参数 SceneType 是否已赋值
                     * @return SceneType 是否已赋值
                     */
                    bool SceneTypeHasBeenSet() const;

                    /**
                     * 获取用户唯一标识。
                     * @return UserId 用户唯一标识。
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户唯一标识。
                     * @param UserId 用户唯一标识。
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取设备指纹token。
                     * @return DeviceToken 设备指纹token。
                     */
                    std::string GetDeviceToken() const;

                    /**
                     * 设置设备指纹token。
                     * @param DeviceToken 设备指纹token。
                     */
                    void SetDeviceToken(const std::string& _deviceToken);

                    /**
                     * 判断参数 DeviceToken 是否已赋值
                     * @return DeviceToken 是否已赋值
                     */
                    bool DeviceTokenHasBeenSet() const;

                    /**
                     * 获取设备指纹BusinessId
                     * @return DeviceBusinessId 设备指纹BusinessId
                     */
                    int64_t GetDeviceBusinessId() const;

                    /**
                     * 设置设备指纹BusinessId
                     * @param DeviceBusinessId 设备指纹BusinessId
                     */
                    void SetDeviceBusinessId(const int64_t& _deviceBusinessId);

                    /**
                     * 判断参数 DeviceBusinessId 是否已赋值
                     * @return DeviceBusinessId 是否已赋值
                     */
                    bool DeviceBusinessIdHasBeenSet() const;

                    /**
                     * 获取业务ID。网站或应用在多个业务中使用此服务，通过此ID区分统计数据。
                     * @return BusinessId 业务ID。网站或应用在多个业务中使用此服务，通过此ID区分统计数据。
                     */
                    uint64_t GetBusinessId() const;

                    /**
                     * 设置业务ID。网站或应用在多个业务中使用此服务，通过此ID区分统计数据。
                     * @param BusinessId 业务ID。网站或应用在多个业务中使用此服务，通过此ID区分统计数据。
                     */
                    void SetBusinessId(const uint64_t& _businessId);

                    /**
                     * 判断参数 BusinessId 是否已赋值
                     * @return BusinessId 是否已赋值
                     */
                    bool BusinessIdHasBeenSet() const;

                    /**
                     * 获取昵称，UTF-8 编码。
                     * @return Nickname 昵称，UTF-8 编码。
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置昵称，UTF-8 编码。
                     * @param Nickname 昵称，UTF-8 编码。
                     */
                    void SetNickname(const std::string& _nickname);

                    /**
                     * 判断参数 Nickname 是否已赋值
                     * @return Nickname 是否已赋值
                     */
                    bool NicknameHasBeenSet() const;

                    /**
                     * 获取用户邮箱地址（非系统自动生成）。
                     * @return EmailAddress 用户邮箱地址（非系统自动生成）。
                     */
                    std::string GetEmailAddress() const;

                    /**
                     * 设置用户邮箱地址（非系统自动生成）。
                     * @param EmailAddress 用户邮箱地址（非系统自动生成）。
                     */
                    void SetEmailAddress(const std::string& _emailAddress);

                    /**
                     * 判断参数 EmailAddress 是否已赋值
                     * @return EmailAddress 是否已赋值
                     */
                    bool EmailAddressHasBeenSet() const;

                    /**
                     * 获取是否识别设备异常：
0：不识别。
1：识别。
                     * @return CheckDevice 是否识别设备异常：
0：不识别。
1：识别。
                     */
                    int64_t GetCheckDevice() const;

                    /**
                     * 设置是否识别设备异常：
0：不识别。
1：识别。
                     * @param CheckDevice 是否识别设备异常：
0：不识别。
1：识别。
                     */
                    void SetCheckDevice(const int64_t& _checkDevice);

                    /**
                     * 判断参数 CheckDevice 是否已赋值
                     * @return CheckDevice 是否已赋值
                     */
                    bool CheckDeviceHasBeenSet() const;

                    /**
                     * 获取用户HTTP请求中的Cookie进行2次hash的值，只要保证相同Cookie的hash值一致即可。
                     * @return CookieHash 用户HTTP请求中的Cookie进行2次hash的值，只要保证相同Cookie的hash值一致即可。
                     */
                    std::string GetCookieHash() const;

                    /**
                     * 设置用户HTTP请求中的Cookie进行2次hash的值，只要保证相同Cookie的hash值一致即可。
                     * @param CookieHash 用户HTTP请求中的Cookie进行2次hash的值，只要保证相同Cookie的hash值一致即可。
                     */
                    void SetCookieHash(const std::string& _cookieHash);

                    /**
                     * 判断参数 CookieHash 是否已赋值
                     * @return CookieHash 是否已赋值
                     */
                    bool CookieHashHasBeenSet() const;

                    /**
                     * 获取用户HTTP请求的Referer值。
                     * @return Referer 用户HTTP请求的Referer值。
                     */
                    std::string GetReferer() const;

                    /**
                     * 设置用户HTTP请求的Referer值。
                     * @param Referer 用户HTTP请求的Referer值。
                     */
                    void SetReferer(const std::string& _referer);

                    /**
                     * 判断参数 Referer 是否已赋值
                     * @return Referer 是否已赋值
                     */
                    bool RefererHasBeenSet() const;

                    /**
                     * 获取用户HTTP请求的User-Agent值。
                     * @return UserAgent 用户HTTP请求的User-Agent值。
                     */
                    std::string GetUserAgent() const;

                    /**
                     * 设置用户HTTP请求的User-Agent值。
                     * @param UserAgent 用户HTTP请求的User-Agent值。
                     */
                    void SetUserAgent(const std::string& _userAgent);

                    /**
                     * 判断参数 UserAgent 是否已赋值
                     * @return UserAgent 是否已赋值
                     */
                    bool UserAgentHasBeenSet() const;

                    /**
                     * 获取用户HTTP请求的X-Forwarded-For值。
                     * @return XForwardedFor 用户HTTP请求的X-Forwarded-For值。
                     */
                    std::string GetXForwardedFor() const;

                    /**
                     * 设置用户HTTP请求的X-Forwarded-For值。
                     * @param XForwardedFor 用户HTTP请求的X-Forwarded-For值。
                     */
                    void SetXForwardedFor(const std::string& _xForwardedFor);

                    /**
                     * 判断参数 XForwardedFor 是否已赋值
                     * @return XForwardedFor 是否已赋值
                     */
                    bool XForwardedForHasBeenSet() const;

                    /**
                     * 获取MAC地址或设备唯一标识。
                     * @return MacAddress MAC地址或设备唯一标识。
                     */
                    std::string GetMacAddress() const;

                    /**
                     * 设置MAC地址或设备唯一标识。
                     * @param MacAddress MAC地址或设备唯一标识。
                     */
                    void SetMacAddress(const std::string& _macAddress);

                    /**
                     * 判断参数 MacAddress 是否已赋值
                     * @return MacAddress 是否已赋值
                     */
                    bool MacAddressHasBeenSet() const;

                    /**
                     * 获取网赚防刷相关信息。SceneType为4时填写。
                     * @return CrowdAntiRush 网赚防刷相关信息。SceneType为4时填写。
                     */
                    CrowdAntiRushInfo GetCrowdAntiRush() const;

                    /**
                     * 设置网赚防刷相关信息。SceneType为4时填写。
                     * @param CrowdAntiRush 网赚防刷相关信息。SceneType为4时填写。
                     */
                    void SetCrowdAntiRush(const CrowdAntiRushInfo& _crowdAntiRush);

                    /**
                     * 判断参数 CrowdAntiRush 是否已赋值
                     * @return CrowdAntiRush 是否已赋值
                     */
                    bool CrowdAntiRushHasBeenSet() const;

                    /**
                     * 获取场景Code，控制台上获取
                     * @return SceneCode 场景Code，控制台上获取
                     */
                    std::string GetSceneCode() const;

                    /**
                     * 设置场景Code，控制台上获取
                     * @param SceneCode 场景Code，控制台上获取
                     */
                    void SetSceneCode(const std::string& _sceneCode);

                    /**
                     * 判断参数 SceneCode 是否已赋值
                     * @return SceneCode 是否已赋值
                     */
                    bool SceneCodeHasBeenSet() const;

                    /**
                     * 获取详细信息
                     * @return Details 详细信息
                     */
                    std::vector<InputDetails> GetDetails() const;

                    /**
                     * 设置详细信息
                     * @param Details 详细信息
                     */
                    void SetDetails(const std::vector<InputDetails>& _details);

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     */
                    bool DetailsHasBeenSet() const;

                    /**
                     * 获取设备类型：
1：Android
2：IOS
                     * @return DeviceType 设备类型：
1：Android
2：IOS
                     */
                    int64_t GetDeviceType() const;

                    /**
                     * 设置设备类型：
1：Android
2：IOS
                     * @param DeviceType 设备类型：
1：Android
2：IOS
                     */
                    void SetDeviceType(const int64_t& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     */
                    bool DeviceTypeHasBeenSet() const;

                private:

                    /**
                     * 账号信息。
                     */
                    AccountInfo m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * 登录来源的外网IP
                     */
                    std::string m_userIp;
                    bool m_userIpHasBeenSet;

                    /**
                     * 用户操作时间戳，单位秒（格林威治时间精确到秒，如1501590972）。
                     */
                    uint64_t m_postTime;
                    bool m_postTimeHasBeenSet;

                    /**
                     * 场景类型。(后续不再支持，请使用SceneCode字段)
1：活动防刷
2：登录保护
3：注册保护
4：活动防刷高级版（网赚）
                     */
                    int64_t m_sceneType;
                    bool m_sceneTypeHasBeenSet;

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
                     * 网赚防刷相关信息。SceneType为4时填写。
                     */
                    CrowdAntiRushInfo m_crowdAntiRush;
                    bool m_crowdAntiRushHasBeenSet;

                    /**
                     * 场景Code，控制台上获取
                     */
                    std::string m_sceneCode;
                    bool m_sceneCodeHasBeenSet;

                    /**
                     * 详细信息
                     */
                    std::vector<InputDetails> m_details;
                    bool m_detailsHasBeenSet;

                    /**
                     * 设备类型：
1：Android
2：IOS
                     */
                    int64_t m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AA_V20200224_MODEL_INPUTMANAGEMARKETINGRISK_H_
