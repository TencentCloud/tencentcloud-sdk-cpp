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

#ifndef TENCENTCLOUD_TDS_V20220801_MODEL_DESCRIBEFINANCEFRAUDULTIMATEREQUEST_H_
#define TENCENTCLOUD_TDS_V20220801_MODEL_DESCRIBEFINANCEFRAUDULTIMATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tds/v20220801/model/DataAuthorizationInfo.h>


namespace TencentCloud
{
    namespace Tds
    {
        namespace V20220801
        {
            namespace Model
            {
                /**
                * DescribeFinanceFraudUltimate请求参数结构体
                */
                class DescribeFinanceFraudUltimateRequest : public AbstractModel
                {
                public:
                    DescribeFinanceFraudUltimateRequest();
                    ~DescribeFinanceFraudUltimateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>客户端通过SDK获取的设备Token</p>
                     * @return DeviceToken <p>客户端通过SDK获取的设备Token</p>
                     * 
                     */
                    std::string GetDeviceToken() const;

                    /**
                     * 设置<p>客户端通过SDK获取的设备Token</p>
                     * @param _deviceToken <p>客户端通过SDK获取的设备Token</p>
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
                     * 获取<p>使用场景。目前仅支持login-登录场景、register-注册场景</p>
                     * @return SceneCode <p>使用场景。目前仅支持login-登录场景、register-注册场景</p>
                     * 
                     */
                    std::string GetSceneCode() const;

                    /**
                     * 设置<p>使用场景。目前仅支持login-登录场景、register-注册场景</p>
                     * @param _sceneCode <p>使用场景。目前仅支持login-登录场景、register-注册场景</p>
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
                     * 获取<p>用户唯一标识</p>
                     * @return UserId <p>用户唯一标识</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>用户唯一标识</p>
                     * @param _userId <p>用户唯一标识</p>
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
                     * 获取<p>事件时间戳（毫秒）</p>
                     * @return EventTime <p>事件时间戳（毫秒）</p>
                     * 
                     */
                    uint64_t GetEventTime() const;

                    /**
                     * 设置<p>事件时间戳（毫秒）</p>
                     * @param _eventTime <p>事件时间戳（毫秒）</p>
                     * 
                     */
                    void SetEventTime(const uint64_t& _eventTime);

                    /**
                     * 判断参数 EventTime 是否已赋值
                     * @return EventTime 是否已赋值
                     * 
                     */
                    bool EventTimeHasBeenSet() const;

                    /**
                     * 获取<p>事件耗时（毫秒），例如进入登录界面到点击登录按钮耗时</p>
                     * @return ElapsedTime <p>事件耗时（毫秒），例如进入登录界面到点击登录按钮耗时</p>
                     * 
                     */
                    uint64_t GetElapsedTime() const;

                    /**
                     * 设置<p>事件耗时（毫秒），例如进入登录界面到点击登录按钮耗时</p>
                     * @param _elapsedTime <p>事件耗时（毫秒），例如进入登录界面到点击登录按钮耗时</p>
                     * 
                     */
                    void SetElapsedTime(const uint64_t& _elapsedTime);

                    /**
                     * 判断参数 ElapsedTime 是否已赋值
                     * @return ElapsedTime 是否已赋值
                     * 
                     */
                    bool ElapsedTimeHasBeenSet() const;

                    /**
                     * 获取<p>微信的OpenId</p>
                     * @return WeChatOpenId <p>微信的OpenId</p>
                     * 
                     */
                    std::string GetWeChatOpenId() const;

                    /**
                     * 设置<p>微信的OpenId</p>
                     * @param _weChatOpenId <p>微信的OpenId</p>
                     * 
                     */
                    void SetWeChatOpenId(const std::string& _weChatOpenId);

                    /**
                     * 判断参数 WeChatOpenId 是否已赋值
                     * @return WeChatOpenId 是否已赋值
                     * 
                     */
                    bool WeChatOpenIdHasBeenSet() const;

                    /**
                     * 获取<p>手机号码（注：不需要带国家代码 例如：13430421011）。可以传入原文或MD5</p>
                     * @return PhoneNumber <p>手机号码（注：不需要带国家代码 例如：13430421011）。可以传入原文或MD5</p>
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置<p>手机号码（注：不需要带国家代码 例如：13430421011）。可以传入原文或MD5</p>
                     * @param _phoneNumber <p>手机号码（注：不需要带国家代码 例如：13430421011）。可以传入原文或MD5</p>
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
                     * 获取<p>业务客户端IP</p>
                     * @return BizClientIp <p>业务客户端IP</p>
                     * 
                     */
                    std::string GetBizClientIp() const;

                    /**
                     * 设置<p>业务客户端IP</p>
                     * @param _bizClientIp <p>业务客户端IP</p>
                     * 
                     */
                    void SetBizClientIp(const std::string& _bizClientIp);

                    /**
                     * 判断参数 BizClientIp 是否已赋值
                     * @return BizClientIp 是否已赋值
                     * 
                     */
                    bool BizClientIpHasBeenSet() const;

                    /**
                     * 获取<p>QQ的OpenId</p>
                     * @return QQOpenId <p>QQ的OpenId</p>
                     * 
                     */
                    std::string GetQQOpenId() const;

                    /**
                     * 设置<p>QQ的OpenId</p>
                     * @param _qQOpenId <p>QQ的OpenId</p>
                     * 
                     */
                    void SetQQOpenId(const std::string& _qQOpenId);

                    /**
                     * 判断参数 QQOpenId 是否已赋值
                     * @return QQOpenId 是否已赋值
                     * 
                     */
                    bool QQOpenIdHasBeenSet() const;

                    /**
                     * 获取<p>数据授权信息</p>
                     * @return DataAuthorization <p>数据授权信息</p>
                     * 
                     */
                    DataAuthorizationInfo GetDataAuthorization() const;

                    /**
                     * 设置<p>数据授权信息</p>
                     * @param _dataAuthorization <p>数据授权信息</p>
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
                     * <p>客户端通过SDK获取的设备Token</p>
                     */
                    std::string m_deviceToken;
                    bool m_deviceTokenHasBeenSet;

                    /**
                     * <p>使用场景。目前仅支持login-登录场景、register-注册场景</p>
                     */
                    std::string m_sceneCode;
                    bool m_sceneCodeHasBeenSet;

                    /**
                     * <p>用户唯一标识</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>事件时间戳（毫秒）</p>
                     */
                    uint64_t m_eventTime;
                    bool m_eventTimeHasBeenSet;

                    /**
                     * <p>事件耗时（毫秒），例如进入登录界面到点击登录按钮耗时</p>
                     */
                    uint64_t m_elapsedTime;
                    bool m_elapsedTimeHasBeenSet;

                    /**
                     * <p>微信的OpenId</p>
                     */
                    std::string m_weChatOpenId;
                    bool m_weChatOpenIdHasBeenSet;

                    /**
                     * <p>手机号码（注：不需要带国家代码 例如：13430421011）。可以传入原文或MD5</p>
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * <p>业务客户端IP</p>
                     */
                    std::string m_bizClientIp;
                    bool m_bizClientIpHasBeenSet;

                    /**
                     * <p>QQ的OpenId</p>
                     */
                    std::string m_qQOpenId;
                    bool m_qQOpenIdHasBeenSet;

                    /**
                     * <p>数据授权信息</p>
                     */
                    DataAuthorizationInfo m_dataAuthorization;
                    bool m_dataAuthorizationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDS_V20220801_MODEL_DESCRIBEFINANCEFRAUDULTIMATEREQUEST_H_
