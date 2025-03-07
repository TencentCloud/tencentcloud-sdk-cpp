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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_SERVICECONFIG_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_SERVICECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/Ports.h>
#include <tencentcloud/tsf/v20180326/model/HealthCheckConfig.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 服务配置
                */
                class ServiceConfig : public AbstractModel
                {
                public:
                    ServiceConfig();
                    ~ServiceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务名
                     * @return Name 服务名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置服务名
                     * @param _name 服务名
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
                     * 获取端口信息列表
                     * @return Ports 端口信息列表
                     * 
                     */
                    std::vector<Ports> GetPorts() const;

                    /**
                     * 设置端口信息列表
                     * @param _ports 端口信息列表
                     * 
                     */
                    void SetPorts(const std::vector<Ports>& _ports);

                    /**
                     * 判断参数 Ports 是否已赋值
                     * @return Ports 是否已赋值
                     * 
                     */
                    bool PortsHasBeenSet() const;

                    /**
                     * 获取健康检查配置
                     * @return HealthCheck 健康检查配置
                     * 
                     */
                    HealthCheckConfig GetHealthCheck() const;

                    /**
                     * 设置健康检查配置
                     * @param _healthCheck 健康检查配置
                     * 
                     */
                    void SetHealthCheck(const HealthCheckConfig& _healthCheck);

                    /**
                     * 判断参数 HealthCheck 是否已赋值
                     * @return HealthCheck 是否已赋值
                     * 
                     */
                    bool HealthCheckHasBeenSet() const;

                private:

                    /**
                     * 服务名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 端口信息列表
                     */
                    std::vector<Ports> m_ports;
                    bool m_portsHasBeenSet;

                    /**
                     * 健康检查配置
                     */
                    HealthCheckConfig m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_SERVICECONFIG_H_
