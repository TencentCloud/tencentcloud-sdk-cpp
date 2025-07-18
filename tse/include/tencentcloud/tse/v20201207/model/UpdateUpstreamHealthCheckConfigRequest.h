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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_UPDATEUPSTREAMHEALTHCHECKCONFIGREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_UPDATEUPSTREAMHEALTHCHECKCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/UpstreamHealthCheckConfig.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * UpdateUpstreamHealthCheckConfig请求参数结构体
                */
                class UpdateUpstreamHealthCheckConfigRequest : public AbstractModel
                {
                public:
                    UpdateUpstreamHealthCheckConfigRequest();
                    ~UpdateUpstreamHealthCheckConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网关ID
                     * @return GatewayId 网关ID
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关ID
                     * @param _gatewayId 网关ID
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
                     * 获取网关服务名称
                     * @return Name 网关服务名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置网关服务名称
                     * @param _name 网关服务名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取健康检查配置
                     * @return HealthCheckConfig 健康检查配置
                     * 
                     */
                    UpstreamHealthCheckConfig GetHealthCheckConfig() const;

                    /**
                     * 设置健康检查配置
                     * @param _healthCheckConfig 健康检查配置
                     * 
                     */
                    void SetHealthCheckConfig(const UpstreamHealthCheckConfig& _healthCheckConfig);

                    /**
                     * 判断参数 HealthCheckConfig 是否已赋值
                     * @return HealthCheckConfig 是否已赋值
                     * 
                     */
                    bool HealthCheckConfigHasBeenSet() const;

                private:

                    /**
                     * 网关ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 网关服务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 健康检查配置
                     */
                    UpstreamHealthCheckConfig m_healthCheckConfig;
                    bool m_healthCheckConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_UPDATEUPSTREAMHEALTHCHECKCONFIGREQUEST_H_
