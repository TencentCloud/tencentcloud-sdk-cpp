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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYMCPSERVERSTATUSREQUEST_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYMCPSERVERSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * ModifyCloudNativeAPIGatewayMCPServerStatus请求参数结构体
                */
                class ModifyCloudNativeAPIGatewayMCPServerStatusRequest : public AbstractModel
                {
                public:
                    ModifyCloudNativeAPIGatewayMCPServerStatusRequest();
                    ~ModifyCloudNativeAPIGatewayMCPServerStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例 ID</p>
                     * @return GatewayId <p>实例 ID</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置<p>实例 ID</p>
                     * @param _gatewayId <p>实例 ID</p>
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取<p>mcp server id</p>
                     * @return ServerId <p>mcp server id</p>
                     * 
                     */
                    std::string GetServerId() const;

                    /**
                     * 设置<p>mcp server id</p>
                     * @param _serverId <p>mcp server id</p>
                     * 
                     */
                    void SetServerId(const std::string& _serverId);

                    /**
                     * 判断参数 ServerId 是否已赋值
                     * @return ServerId 是否已赋值
                     * 
                     */
                    bool ServerIdHasBeenSet() const;

                    /**
                     * 获取<p>mcp server状态</p><p>枚举值：</p><ul><li>Online： 上线</li><li>Offline： 下线</li></ul>
                     * @return Status <p>mcp server状态</p><p>枚举值：</p><ul><li>Online： 上线</li><li>Offline： 下线</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>mcp server状态</p><p>枚举值：</p><ul><li>Online： 上线</li><li>Offline： 下线</li></ul>
                     * @param _status <p>mcp server状态</p><p>枚举值：</p><ul><li>Online： 上线</li><li>Offline： 下线</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>mcp server id</p>
                     */
                    std::string m_serverId;
                    bool m_serverIdHasBeenSet;

                    /**
                     * <p>mcp server状态</p><p>枚举值：</p><ul><li>Online： 上线</li><li>Offline： 下线</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYMCPSERVERSTATUSREQUEST_H_
