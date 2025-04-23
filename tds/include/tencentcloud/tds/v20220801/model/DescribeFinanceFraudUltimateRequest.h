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
                     * 获取客户端通过SDK获取的设备Token
                     * @return DeviceToken 客户端通过SDK获取的设备Token
                     * 
                     */
                    std::string GetDeviceToken() const;

                    /**
                     * 设置客户端通过SDK获取的设备Token
                     * @param _deviceToken 客户端通过SDK获取的设备Token
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
                     * 获取使用场景。目前仅支持login-登录场景、register-注册场景
                     * @return SceneCode 使用场景。目前仅支持login-登录场景、register-注册场景
                     * 
                     */
                    std::string GetSceneCode() const;

                    /**
                     * 设置使用场景。目前仅支持login-登录场景、register-注册场景
                     * @param _sceneCode 使用场景。目前仅支持login-登录场景、register-注册场景
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
                     * 获取用户唯一标识
                     * @return UserId 用户唯一标识
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户唯一标识
                     * @param _userId 用户唯一标识
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
                     * 获取事件时间戳（毫秒）
                     * @return EventTime 事件时间戳（毫秒）
                     * 
                     */
                    uint64_t GetEventTime() const;

                    /**
                     * 设置事件时间戳（毫秒）
                     * @param _eventTime 事件时间戳（毫秒）
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
                     * 获取事件耗时（毫秒），例如进入登录界面到点击登录按钮耗时
                     * @return ElapsedTime 事件耗时（毫秒），例如进入登录界面到点击登录按钮耗时
                     * 
                     */
                    uint64_t GetElapsedTime() const;

                    /**
                     * 设置事件耗时（毫秒），例如进入登录界面到点击登录按钮耗时
                     * @param _elapsedTime 事件耗时（毫秒），例如进入登录界面到点击登录按钮耗时
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
                     * 获取微信的OpenId
                     * @return WeChatOpenId 微信的OpenId
                     * 
                     */
                    std::string GetWeChatOpenId() const;

                    /**
                     * 设置微信的OpenId
                     * @param _weChatOpenId 微信的OpenId
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
                     * 获取手机号码（注：不需要带国家代码 例如：13430421011）。可以传入原文或MD5
                     * @return PhoneNumber 手机号码（注：不需要带国家代码 例如：13430421011）。可以传入原文或MD5
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置手机号码（注：不需要带国家代码 例如：13430421011）。可以传入原文或MD5
                     * @param _phoneNumber 手机号码（注：不需要带国家代码 例如：13430421011）。可以传入原文或MD5
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
                     * 获取业务客户端IP
                     * @return BizClientIp 业务客户端IP
                     * 
                     */
                    std::string GetBizClientIp() const;

                    /**
                     * 设置业务客户端IP
                     * @param _bizClientIp 业务客户端IP
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
                     * 获取QQ的OpenId
                     * @return QQOpenId QQ的OpenId
                     * 
                     */
                    std::string GetQQOpenId() const;

                    /**
                     * 设置QQ的OpenId
                     * @param _qQOpenId QQ的OpenId
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
                     * 获取数据授权信息
                     * @return DataAuthorization 数据授权信息
                     * 
                     */
                    DataAuthorizationInfo GetDataAuthorization() const;

                    /**
                     * 设置数据授权信息
                     * @param _dataAuthorization 数据授权信息
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
                     * 客户端通过SDK获取的设备Token
                     */
                    std::string m_deviceToken;
                    bool m_deviceTokenHasBeenSet;

                    /**
                     * 使用场景。目前仅支持login-登录场景、register-注册场景
                     */
                    std::string m_sceneCode;
                    bool m_sceneCodeHasBeenSet;

                    /**
                     * 用户唯一标识
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 事件时间戳（毫秒）
                     */
                    uint64_t m_eventTime;
                    bool m_eventTimeHasBeenSet;

                    /**
                     * 事件耗时（毫秒），例如进入登录界面到点击登录按钮耗时
                     */
                    uint64_t m_elapsedTime;
                    bool m_elapsedTimeHasBeenSet;

                    /**
                     * 微信的OpenId
                     */
                    std::string m_weChatOpenId;
                    bool m_weChatOpenIdHasBeenSet;

                    /**
                     * 手机号码（注：不需要带国家代码 例如：13430421011）。可以传入原文或MD5
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * 业务客户端IP
                     */
                    std::string m_bizClientIp;
                    bool m_bizClientIpHasBeenSet;

                    /**
                     * QQ的OpenId
                     */
                    std::string m_qQOpenId;
                    bool m_qQOpenIdHasBeenSet;

                    /**
                     * 数据授权信息
                     */
                    DataAuthorizationInfo m_dataAuthorization;
                    bool m_dataAuthorizationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDS_V20220801_MODEL_DESCRIBEFINANCEFRAUDULTIMATEREQUEST_H_
