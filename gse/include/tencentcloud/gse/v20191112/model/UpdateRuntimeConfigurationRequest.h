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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_UPDATERUNTIMECONFIGURATIONREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_UPDATERUNTIMECONFIGURATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/RuntimeConfiguration.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * UpdateRuntimeConfiguration请求参数结构体
                */
                class UpdateRuntimeConfigurationRequest : public AbstractModel
                {
                public:
                    UpdateRuntimeConfigurationRequest();
                    ~UpdateRuntimeConfigurationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务器舰队Id
                     * @return FleetId 服务器舰队Id
                     * 
                     */
                    std::string GetFleetId() const;

                    /**
                     * 设置服务器舰队Id
                     * @param _fleetId 服务器舰队Id
                     * 
                     */
                    void SetFleetId(const std::string& _fleetId);

                    /**
                     * 判断参数 FleetId 是否已赋值
                     * @return FleetId 是否已赋值
                     * 
                     */
                    bool FleetIdHasBeenSet() const;

                    /**
                     * 获取服务器舰队配置
                     * @return RuntimeConfiguration 服务器舰队配置
                     * 
                     */
                    RuntimeConfiguration GetRuntimeConfiguration() const;

                    /**
                     * 设置服务器舰队配置
                     * @param _runtimeConfiguration 服务器舰队配置
                     * 
                     */
                    void SetRuntimeConfiguration(const RuntimeConfiguration& _runtimeConfiguration);

                    /**
                     * 判断参数 RuntimeConfiguration 是否已赋值
                     * @return RuntimeConfiguration 是否已赋值
                     * 
                     */
                    bool RuntimeConfigurationHasBeenSet() const;

                private:

                    /**
                     * 服务器舰队Id
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

                    /**
                     * 服务器舰队配置
                     */
                    RuntimeConfiguration m_runtimeConfiguration;
                    bool m_runtimeConfigurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_UPDATERUNTIMECONFIGURATIONREQUEST_H_
