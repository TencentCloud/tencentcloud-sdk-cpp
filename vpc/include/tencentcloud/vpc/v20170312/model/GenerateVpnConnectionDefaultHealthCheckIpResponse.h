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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_GENERATEVPNCONNECTIONDEFAULTHEALTHCHECKIPRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_GENERATEVPNCONNECTIONDEFAULTHEALTHCHECKIPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * GenerateVpnConnectionDefaultHealthCheckIp返回参数结构体
                */
                class GenerateVpnConnectionDefaultHealthCheckIpResponse : public AbstractModel
                {
                public:
                    GenerateVpnConnectionDefaultHealthCheckIpResponse();
                    ~GenerateVpnConnectionDefaultHealthCheckIpResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取VPN通道健康检查本端ip
                     * @return HealthCheckLocalIp VPN通道健康检查本端ip
                     * 
                     */
                    std::string GetHealthCheckLocalIp() const;

                    /**
                     * 判断参数 HealthCheckLocalIp 是否已赋值
                     * @return HealthCheckLocalIp 是否已赋值
                     * 
                     */
                    bool HealthCheckLocalIpHasBeenSet() const;

                    /**
                     * 获取VPN通道健康检查对端ip
                     * @return HealthCheckRemoteIp VPN通道健康检查对端ip
                     * 
                     */
                    std::string GetHealthCheckRemoteIp() const;

                    /**
                     * 判断参数 HealthCheckRemoteIp 是否已赋值
                     * @return HealthCheckRemoteIp 是否已赋值
                     * 
                     */
                    bool HealthCheckRemoteIpHasBeenSet() const;

                private:

                    /**
                     * VPN通道健康检查本端ip
                     */
                    std::string m_healthCheckLocalIp;
                    bool m_healthCheckLocalIpHasBeenSet;

                    /**
                     * VPN通道健康检查对端ip
                     */
                    std::string m_healthCheckRemoteIp;
                    bool m_healthCheckRemoteIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_GENERATEVPNCONNECTIONDEFAULTHEALTHCHECKIPRESPONSE_H_
