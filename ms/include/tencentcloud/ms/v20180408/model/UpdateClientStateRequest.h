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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_UPDATECLIENTSTATEREQUEST_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_UPDATECLIENTSTATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * UpdateClientState请求参数结构体
                */
                class UpdateClientStateRequest : public AbstractModel
                {
                public:
                    UpdateClientStateRequest();
                    ~UpdateClientStateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Client Id
                     * @return ClientId Client Id
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置Client Id
                     * @param _clientId Client Id
                     * 
                     */
                    void SetClientId(const std::string& _clientId);

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取Ip addr
                     * @return Ip Ip addr
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Ip addr
                     * @param _ip Ip addr
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取内部分组
                     * @return Internal 内部分组
                     * 
                     */
                    int64_t GetInternal() const;

                    /**
                     * 设置内部分组
                     * @param _internal 内部分组
                     * 
                     */
                    void SetInternal(const int64_t& _internal);

                    /**
                     * 判断参数 Internal 是否已赋值
                     * @return Internal 是否已赋值
                     * 
                     */
                    bool InternalHasBeenSet() const;

                    /**
                     * 获取Client  Version
                     * @return ServerVersion Client  Version
                     * 
                     */
                    std::string GetServerVersion() const;

                    /**
                     * 设置Client  Version
                     * @param _serverVersion Client  Version
                     * 
                     */
                    void SetServerVersion(const std::string& _serverVersion);

                    /**
                     * 判断参数 ServerVersion 是否已赋值
                     * @return ServerVersion 是否已赋值
                     * 
                     */
                    bool ServerVersionHasBeenSet() const;

                    /**
                     * 获取主机
                     * @return Hostname 主机
                     * 
                     */
                    std::string GetHostname() const;

                    /**
                     * 设置主机
                     * @param _hostname 主机
                     * 
                     */
                    void SetHostname(const std::string& _hostname);

                    /**
                     * 判断参数 Hostname 是否已赋值
                     * @return Hostname 是否已赋值
                     * 
                     */
                    bool HostnameHasBeenSet() const;

                    /**
                     * 获取系统
                     * @return Os 系统
                     * 
                     */
                    std::string GetOs() const;

                    /**
                     * 设置系统
                     * @param _os 系统
                     * 
                     */
                    void SetOs(const std::string& _os);

                    /**
                     * 判断参数 Os 是否已赋值
                     * @return Os 是否已赋值
                     * 
                     */
                    bool OsHasBeenSet() const;

                private:

                    /**
                     * Client Id
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * Ip addr
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 内部分组
                     */
                    int64_t m_internal;
                    bool m_internalHasBeenSet;

                    /**
                     * Client  Version
                     */
                    std::string m_serverVersion;
                    bool m_serverVersionHasBeenSet;

                    /**
                     * 主机
                     */
                    std::string m_hostname;
                    bool m_hostnameHasBeenSet;

                    /**
                     * 系统
                     */
                    std::string m_os;
                    bool m_osHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_UPDATECLIENTSTATEREQUEST_H_
