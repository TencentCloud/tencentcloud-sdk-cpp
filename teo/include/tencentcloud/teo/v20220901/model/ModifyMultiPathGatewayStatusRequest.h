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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYMULTIPATHGATEWAYSTATUSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYMULTIPATHGATEWAYSTATUSREQUEST_H_

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
                * ModifyMultiPathGatewayStatus请求参数结构体
                */
                class ModifyMultiPathGatewayStatusRequest : public AbstractModel
                {
                public:
                    ModifyMultiPathGatewayStatusRequest();
                    ~ModifyMultiPathGatewayStatusRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取修改网关的启用停用状态，取值有：<li> offline：停用；</li><li> online：启用。</li>
                     * @return GatewayStatus 修改网关的启用停用状态，取值有：<li> offline：停用；</li><li> online：启用。</li>
                     * 
                     */
                    std::string GetGatewayStatus() const;

                    /**
                     * 设置修改网关的启用停用状态，取值有：<li> offline：停用；</li><li> online：启用。</li>
                     * @param _gatewayStatus 修改网关的启用停用状态，取值有：<li> offline：停用；</li><li> online：启用。</li>
                     * 
                     */
                    void SetGatewayStatus(const std::string& _gatewayStatus);

                    /**
                     * 判断参数 GatewayStatus 是否已赋值
                     * @return GatewayStatus 是否已赋值
                     * 
                     */
                    bool GatewayStatusHasBeenSet() const;

                private:

                    /**
                     * 网关 ID。
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 修改网关的启用停用状态，取值有：<li> offline：停用；</li><li> online：启用。</li>
                     */
                    std::string m_gatewayStatus;
                    bool m_gatewayStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYMULTIPATHGATEWAYSTATUSREQUEST_H_
