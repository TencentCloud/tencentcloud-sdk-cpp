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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYGATEWAYVERSIONTRAFFICREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYGATEWAYVERSIONTRAFFICREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/GatewayVersionItem.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * ModifyGatewayVersionTraffic请求参数结构体
                */
                class ModifyGatewayVersionTrafficRequest : public AbstractModel
                {
                public:
                    ModifyGatewayVersionTrafficRequest();
                    ~ModifyGatewayVersionTrafficRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境id
                     * @return EnvId 环境id
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境id
                     * @param _envId 环境id
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取网关id
                     * @return GatewayId 网关id
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关id
                     * @param _gatewayId 网关id
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
                     * 获取网关版本流量比例信息
                     * @return VersionsWeight 网关版本流量比例信息
                     * 
                     */
                    std::vector<GatewayVersionItem> GetVersionsWeight() const;

                    /**
                     * 设置网关版本流量比例信息
                     * @param _versionsWeight 网关版本流量比例信息
                     * 
                     */
                    void SetVersionsWeight(const std::vector<GatewayVersionItem>& _versionsWeight);

                    /**
                     * 判断参数 VersionsWeight 是否已赋值
                     * @return VersionsWeight 是否已赋值
                     * 
                     */
                    bool VersionsWeightHasBeenSet() const;

                private:

                    /**
                     * 环境id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 网关id
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 网关版本流量比例信息
                     */
                    std::vector<GatewayVersionItem> m_versionsWeight;
                    bool m_versionsWeightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYGATEWAYVERSIONTRAFFICREQUEST_H_
