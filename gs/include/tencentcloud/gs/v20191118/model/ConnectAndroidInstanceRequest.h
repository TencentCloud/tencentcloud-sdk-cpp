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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_CONNECTANDROIDINSTANCEREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_CONNECTANDROIDINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * ConnectAndroidInstance请求参数结构体
                */
                class ConnectAndroidInstanceRequest : public AbstractModel
                {
                public:
                    ConnectAndroidInstanceRequest();
                    ~ConnectAndroidInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户Session信息
                     * @return ClientSession 用户Session信息
                     * 
                     */
                    std::string GetClientSession() const;

                    /**
                     * 设置用户Session信息
                     * @param _clientSession 用户Session信息
                     * 
                     */
                    void SetClientSession(const std::string& _clientSession);

                    /**
                     * 判断参数 ClientSession 是否已赋值
                     * @return ClientSession 是否已赋值
                     * 
                     */
                    bool ClientSessionHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return AndroidInstanceId 实例ID
                     * 
                     */
                    std::string GetAndroidInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _androidInstanceId 实例ID
                     * 
                     */
                    void SetAndroidInstanceId(const std::string& _androidInstanceId);

                    /**
                     * 判断参数 AndroidInstanceId 是否已赋值
                     * @return AndroidInstanceId 是否已赋值
                     * 
                     */
                    bool AndroidInstanceIdHasBeenSet() const;

                    /**
                     * 获取用户IP，用户客户端的公网IP，用于选择最佳网络链路
                     * @return UserIp 用户IP，用户客户端的公网IP，用于选择最佳网络链路
                     * 
                     */
                    std::string GetUserIp() const;

                    /**
                     * 设置用户IP，用户客户端的公网IP，用于选择最佳网络链路
                     * @param _userIp 用户IP，用户客户端的公网IP，用于选择最佳网络链路
                     * 
                     */
                    void SetUserIp(const std::string& _userIp);

                    /**
                     * 判断参数 UserIp 是否已赋值
                     * @return UserIp 是否已赋值
                     * 
                     */
                    bool UserIpHasBeenSet() const;

                private:

                    /**
                     * 用户Session信息
                     */
                    std::string m_clientSession;
                    bool m_clientSessionHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_androidInstanceId;
                    bool m_androidInstanceIdHasBeenSet;

                    /**
                     * 用户IP，用户客户端的公网IP，用于选择最佳网络链路
                     */
                    std::string m_userIp;
                    bool m_userIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_CONNECTANDROIDINSTANCEREQUEST_H_
