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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_CREATESESSIONREQUEST_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_CREATESESSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            namespace Model
            {
                /**
                * CreateSession请求参数结构体
                */
                class CreateSessionRequest : public AbstractModel
                {
                public:
                    CreateSessionRequest();
                    ~CreateSessionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取唯一用户身份标识，由业务方自定义，平台不予理解。（可根据业务需要决定使用用户的唯一身份标识或是使用时间戳随机生成；在用户重连时应保持UserId不变）
                     * @return UserId 唯一用户身份标识，由业务方自定义，平台不予理解。（可根据业务需要决定使用用户的唯一身份标识或是使用时间戳随机生成；在用户重连时应保持UserId不变）
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置唯一用户身份标识，由业务方自定义，平台不予理解。（可根据业务需要决定使用用户的唯一身份标识或是使用时间戳随机生成；在用户重连时应保持UserId不变）
                     * @param UserId 唯一用户身份标识，由业务方自定义，平台不予理解。（可根据业务需要决定使用用户的唯一身份标识或是使用时间戳随机生成；在用户重连时应保持UserId不变）
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取用户IP，用户客户端的公网IP，用于就近调度
                     * @return UserIp 用户IP，用户客户端的公网IP，用于就近调度
                     */
                    std::string GetUserIp() const;

                    /**
                     * 设置用户IP，用户客户端的公网IP，用于就近调度
                     * @param UserIp 用户IP，用户客户端的公网IP，用于就近调度
                     */
                    void SetUserIp(const std::string& _userIp);

                    /**
                     * 判断参数 UserIp 是否已赋值
                     * @return UserIp 是否已赋值
                     */
                    bool UserIpHasBeenSet() const;

                    /**
                     * 获取客户端session信息，从SDK请求中获得。特殊的，当 RunMode 参数为 RunWithoutClient 时，该字段可以为空
                     * @return ClientSession 客户端session信息，从SDK请求中获得。特殊的，当 RunMode 参数为 RunWithoutClient 时，该字段可以为空
                     */
                    std::string GetClientSession() const;

                    /**
                     * 设置客户端session信息，从SDK请求中获得。特殊的，当 RunMode 参数为 RunWithoutClient 时，该字段可以为空
                     * @param ClientSession 客户端session信息，从SDK请求中获得。特殊的，当 RunMode 参数为 RunWithoutClient 时，该字段可以为空
                     */
                    void SetClientSession(const std::string& _clientSession);

                    /**
                     * 判断参数 ClientSession 是否已赋值
                     * @return ClientSession 是否已赋值
                     */
                    bool ClientSessionHasBeenSet() const;

                    /**
                     * 获取云端运行模式。
RunWithoutClient：允许无客户端连接的情况下仍保持云端 App 运行
默认值（空）：要求必须有客户端连接才会保持云端 App 运行。
                     * @return RunMode 云端运行模式。
RunWithoutClient：允许无客户端连接的情况下仍保持云端 App 运行
默认值（空）：要求必须有客户端连接才会保持云端 App 运行。
                     */
                    std::string GetRunMode() const;

                    /**
                     * 设置云端运行模式。
RunWithoutClient：允许无客户端连接的情况下仍保持云端 App 运行
默认值（空）：要求必须有客户端连接才会保持云端 App 运行。
                     * @param RunMode 云端运行模式。
RunWithoutClient：允许无客户端连接的情况下仍保持云端 App 运行
默认值（空）：要求必须有客户端连接才会保持云端 App 运行。
                     */
                    void SetRunMode(const std::string& _runMode);

                    /**
                     * 判断参数 RunMode 是否已赋值
                     * @return RunMode 是否已赋值
                     */
                    bool RunModeHasBeenSet() const;

                    /**
                     * 获取【多人互动】房主用户ID，在多人互动模式下为必填字段。
如果该用户是房主，HostUserId需要和UserId保持一致；
如果该用户非房主，HostUserId需要填写房主的HostUserId。
                     * @return HostUserId 【多人互动】房主用户ID，在多人互动模式下为必填字段。
如果该用户是房主，HostUserId需要和UserId保持一致；
如果该用户非房主，HostUserId需要填写房主的HostUserId。
                     */
                    std::string GetHostUserId() const;

                    /**
                     * 设置【多人互动】房主用户ID，在多人互动模式下为必填字段。
如果该用户是房主，HostUserId需要和UserId保持一致；
如果该用户非房主，HostUserId需要填写房主的HostUserId。
                     * @param HostUserId 【多人互动】房主用户ID，在多人互动模式下为必填字段。
如果该用户是房主，HostUserId需要和UserId保持一致；
如果该用户非房主，HostUserId需要填写房主的HostUserId。
                     */
                    void SetHostUserId(const std::string& _hostUserId);

                    /**
                     * 判断参数 HostUserId 是否已赋值
                     * @return HostUserId 是否已赋值
                     */
                    bool HostUserIdHasBeenSet() const;

                    /**
                     * 获取【多人互动】角色。
Player：玩家（可通过键鼠等操作应用）
Viewer：观察者（只能观看，无法操作）
                     * @return Role 【多人互动】角色。
Player：玩家（可通过键鼠等操作应用）
Viewer：观察者（只能观看，无法操作）
                     */
                    std::string GetRole() const;

                    /**
                     * 设置【多人互动】角色。
Player：玩家（可通过键鼠等操作应用）
Viewer：观察者（只能观看，无法操作）
                     * @param Role 【多人互动】角色。
Player：玩家（可通过键鼠等操作应用）
Viewer：观察者（只能观看，无法操作）
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     */
                    bool RoleHasBeenSet() const;

                private:

                    /**
                     * 唯一用户身份标识，由业务方自定义，平台不予理解。（可根据业务需要决定使用用户的唯一身份标识或是使用时间戳随机生成；在用户重连时应保持UserId不变）
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户IP，用户客户端的公网IP，用于就近调度
                     */
                    std::string m_userIp;
                    bool m_userIpHasBeenSet;

                    /**
                     * 客户端session信息，从SDK请求中获得。特殊的，当 RunMode 参数为 RunWithoutClient 时，该字段可以为空
                     */
                    std::string m_clientSession;
                    bool m_clientSessionHasBeenSet;

                    /**
                     * 云端运行模式。
RunWithoutClient：允许无客户端连接的情况下仍保持云端 App 运行
默认值（空）：要求必须有客户端连接才会保持云端 App 运行。
                     */
                    std::string m_runMode;
                    bool m_runModeHasBeenSet;

                    /**
                     * 【多人互动】房主用户ID，在多人互动模式下为必填字段。
如果该用户是房主，HostUserId需要和UserId保持一致；
如果该用户非房主，HostUserId需要填写房主的HostUserId。
                     */
                    std::string m_hostUserId;
                    bool m_hostUserIdHasBeenSet;

                    /**
                     * 【多人互动】角色。
Player：玩家（可通过键鼠等操作应用）
Viewer：观察者（只能观看，无法操作）
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_CREATESESSIONREQUEST_H_
