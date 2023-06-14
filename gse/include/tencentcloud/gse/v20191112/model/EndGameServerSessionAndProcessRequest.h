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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_ENDGAMESERVERSESSIONANDPROCESSREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_ENDGAMESERVERSESSIONANDPROCESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * EndGameServerSessionAndProcess请求参数结构体
                */
                class EndGameServerSessionAndProcessRequest : public AbstractModel
                {
                public:
                    EndGameServerSessionAndProcessRequest();
                    ~EndGameServerSessionAndProcessRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取游戏服务器会话ID，如果传入游戏服务器会话ID，结束对应进程以及游戏服务器会话和玩家会话。
                     * @return GameServerSessionId 游戏服务器会话ID，如果传入游戏服务器会话ID，结束对应进程以及游戏服务器会话和玩家会话。
                     * 
                     */
                    std::string GetGameServerSessionId() const;

                    /**
                     * 设置游戏服务器会话ID，如果传入游戏服务器会话ID，结束对应进程以及游戏服务器会话和玩家会话。
                     * @param _gameServerSessionId 游戏服务器会话ID，如果传入游戏服务器会话ID，结束对应进程以及游戏服务器会话和玩家会话。
                     * 
                     */
                    void SetGameServerSessionId(const std::string& _gameServerSessionId);

                    /**
                     * 判断参数 GameServerSessionId 是否已赋值
                     * @return GameServerSessionId 是否已赋值
                     * 
                     */
                    bool GameServerSessionIdHasBeenSet() const;

                    /**
                     * 获取CVM的公网IP地址，需同时传入IpAddress和Port，结束IpAddress和Port对应的进程以及游戏服务器会话（如果存在）和玩家会话（如果存在），单独传入IpAddress不生效。
                     * @return IpAddress CVM的公网IP地址，需同时传入IpAddress和Port，结束IpAddress和Port对应的进程以及游戏服务器会话（如果存在）和玩家会话（如果存在），单独传入IpAddress不生效。
                     * 
                     */
                    std::string GetIpAddress() const;

                    /**
                     * 设置CVM的公网IP地址，需同时传入IpAddress和Port，结束IpAddress和Port对应的进程以及游戏服务器会话（如果存在）和玩家会话（如果存在），单独传入IpAddress不生效。
                     * @param _ipAddress CVM的公网IP地址，需同时传入IpAddress和Port，结束IpAddress和Port对应的进程以及游戏服务器会话（如果存在）和玩家会话（如果存在），单独传入IpAddress不生效。
                     * 
                     */
                    void SetIpAddress(const std::string& _ipAddress);

                    /**
                     * 判断参数 IpAddress 是否已赋值
                     * @return IpAddress 是否已赋值
                     * 
                     */
                    bool IpAddressHasBeenSet() const;

                    /**
                     * 获取端口号，取值范围1025-60000，需同时传入IpAddress和Port，结束IpAddress和Port对应的进程以及游戏服务器会话（如果存在）和玩家会话（如果存在），单独传入Port不生效。
                     * @return Port 端口号，取值范围1025-60000，需同时传入IpAddress和Port，结束IpAddress和Port对应的进程以及游戏服务器会话（如果存在）和玩家会话（如果存在），单独传入Port不生效。
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置端口号，取值范围1025-60000，需同时传入IpAddress和Port，结束IpAddress和Port对应的进程以及游戏服务器会话（如果存在）和玩家会话（如果存在），单独传入Port不生效。
                     * @param _port 端口号，取值范围1025-60000，需同时传入IpAddress和Port，结束IpAddress和Port对应的进程以及游戏服务器会话（如果存在）和玩家会话（如果存在），单独传入Port不生效。
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                private:

                    /**
                     * 游戏服务器会话ID，如果传入游戏服务器会话ID，结束对应进程以及游戏服务器会话和玩家会话。
                     */
                    std::string m_gameServerSessionId;
                    bool m_gameServerSessionIdHasBeenSet;

                    /**
                     * CVM的公网IP地址，需同时传入IpAddress和Port，结束IpAddress和Port对应的进程以及游戏服务器会话（如果存在）和玩家会话（如果存在），单独传入IpAddress不生效。
                     */
                    std::string m_ipAddress;
                    bool m_ipAddressHasBeenSet;

                    /**
                     * 端口号，取值范围1025-60000，需同时传入IpAddress和Port，结束IpAddress和Port对应的进程以及游戏服务器会话（如果存在）和玩家会话（如果存在），单独传入Port不生效。
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_ENDGAMESERVERSESSIONANDPROCESSREQUEST_H_
