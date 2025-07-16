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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYMULTIPATHGATEWAYREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYMULTIPATHGATEWAYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyMultiPathGateway请求参数结构体
                */
                class ModifyMultiPathGatewayRequest : public AbstractModel
                {
                public:
                    ModifyMultiPathGatewayRequest();
                    ~ModifyMultiPathGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID。
                     * @return ZoneId 站点 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID。
                     * @param _zoneId 站点 ID。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取网关 ID。
                     * @return GatewayId 网关 ID。
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关 ID。
                     * @param _gatewayId 网关 ID。
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
                     * 获取网关名称，16 个字符以内，可用字符（a-z,A-Z,0-9,-,_）。
                     * @return GatewayName 网关名称，16 个字符以内，可用字符（a-z,A-Z,0-9,-,_）。
                     * 
                     */
                    std::string GetGatewayName() const;

                    /**
                     * 设置网关名称，16 个字符以内，可用字符（a-z,A-Z,0-9,-,_）。
                     * @param _gatewayName 网关名称，16 个字符以内，可用字符（a-z,A-Z,0-9,-,_）。
                     * 
                     */
                    void SetGatewayName(const std::string& _gatewayName);

                    /**
                     * 判断参数 GatewayName 是否已赋值
                     * @return GatewayName 是否已赋值
                     * 
                     */
                    bool GatewayNameHasBeenSet() const;

                    /**
                     * 获取网关地址，GatewayType 取值为 private（自有网关）可填入进行修改，使用该地址时，请确保该地址已录入腾讯云多通道安全加速网关系统。如未录入，需要在本接口调用前通过工单或者联系架构师把网关 IP 地址提前录入腾讯云多通道安全加速网关系统。
                     * @return GatewayIP 网关地址，GatewayType 取值为 private（自有网关）可填入进行修改，使用该地址时，请确保该地址已录入腾讯云多通道安全加速网关系统。如未录入，需要在本接口调用前通过工单或者联系架构师把网关 IP 地址提前录入腾讯云多通道安全加速网关系统。
                     * 
                     */
                    std::string GetGatewayIP() const;

                    /**
                     * 设置网关地址，GatewayType 取值为 private（自有网关）可填入进行修改，使用该地址时，请确保该地址已录入腾讯云多通道安全加速网关系统。如未录入，需要在本接口调用前通过工单或者联系架构师把网关 IP 地址提前录入腾讯云多通道安全加速网关系统。
                     * @param _gatewayIP 网关地址，GatewayType 取值为 private（自有网关）可填入进行修改，使用该地址时，请确保该地址已录入腾讯云多通道安全加速网关系统。如未录入，需要在本接口调用前通过工单或者联系架构师把网关 IP 地址提前录入腾讯云多通道安全加速网关系统。
                     * 
                     */
                    void SetGatewayIP(const std::string& _gatewayIP);

                    /**
                     * 判断参数 GatewayIP 是否已赋值
                     * @return GatewayIP 是否已赋值
                     * 
                     */
                    bool GatewayIPHasBeenSet() const;

                    /**
                     * 获取网关端口，范围 1～65535（除去 8888 ），只支持修改 GatewayType 取值为 private 的自有网关。
                     * @return GatewayPort 网关端口，范围 1～65535（除去 8888 ），只支持修改 GatewayType 取值为 private 的自有网关。
                     * 
                     */
                    int64_t GetGatewayPort() const;

                    /**
                     * 设置网关端口，范围 1～65535（除去 8888 ），只支持修改 GatewayType 取值为 private 的自有网关。
                     * @param _gatewayPort 网关端口，范围 1～65535（除去 8888 ），只支持修改 GatewayType 取值为 private 的自有网关。
                     * 
                     */
                    void SetGatewayPort(const int64_t& _gatewayPort);

                    /**
                     * 判断参数 GatewayPort 是否已赋值
                     * @return GatewayPort 是否已赋值
                     * 
                     */
                    bool GatewayPortHasBeenSet() const;

                private:

                    /**
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 网关 ID。
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 网关名称，16 个字符以内，可用字符（a-z,A-Z,0-9,-,_）。
                     */
                    std::string m_gatewayName;
                    bool m_gatewayNameHasBeenSet;

                    /**
                     * 网关地址，GatewayType 取值为 private（自有网关）可填入进行修改，使用该地址时，请确保该地址已录入腾讯云多通道安全加速网关系统。如未录入，需要在本接口调用前通过工单或者联系架构师把网关 IP 地址提前录入腾讯云多通道安全加速网关系统。
                     */
                    std::string m_gatewayIP;
                    bool m_gatewayIPHasBeenSet;

                    /**
                     * 网关端口，范围 1～65535（除去 8888 ），只支持修改 GatewayType 取值为 private 的自有网关。
                     */
                    int64_t m_gatewayPort;
                    bool m_gatewayPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYMULTIPATHGATEWAYREQUEST_H_
