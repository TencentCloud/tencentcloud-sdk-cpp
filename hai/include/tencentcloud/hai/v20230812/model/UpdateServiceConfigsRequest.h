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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_UPDATESERVICECONFIGSREQUEST_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_UPDATESERVICECONFIGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hai/v20230812/model/DeploymentConfig.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * UpdateServiceConfigs请求参数结构体
                */
                class UpdateServiceConfigsRequest : public AbstractModel
                {
                public:
                    UpdateServiceConfigsRequest();
                    ~UpdateServiceConfigsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>服务ID</p>
                     * @return ServiceId <p>服务ID</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>服务ID</p>
                     * @param _serviceId <p>服务ID</p>
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取<p>期望副本数</p>
                     * @return TargetReplicas <p>期望副本数</p>
                     * 
                     */
                    int64_t GetTargetReplicas() const;

                    /**
                     * 设置<p>期望副本数</p>
                     * @param _targetReplicas <p>期望副本数</p>
                     * 
                     */
                    void SetTargetReplicas(const int64_t& _targetReplicas);

                    /**
                     * 判断参数 TargetReplicas 是否已赋值
                     * @return TargetReplicas 是否已赋值
                     * 
                     */
                    bool TargetReplicasHasBeenSet() const;

                    /**
                     * 获取<p>启动参数、环境变量等参数</p>
                     * @return DeploymentConfigs <p>启动参数、环境变量等参数</p>
                     * 
                     */
                    std::vector<DeploymentConfig> GetDeploymentConfigs() const;

                    /**
                     * 设置<p>启动参数、环境变量等参数</p>
                     * @param _deploymentConfigs <p>启动参数、环境变量等参数</p>
                     * 
                     */
                    void SetDeploymentConfigs(const std::vector<DeploymentConfig>& _deploymentConfigs);

                    /**
                     * 判断参数 DeploymentConfigs 是否已赋值
                     * @return DeploymentConfigs 是否已赋值
                     * 
                     */
                    bool DeploymentConfigsHasBeenSet() const;

                private:

                    /**
                     * <p>服务ID</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>期望副本数</p>
                     */
                    int64_t m_targetReplicas;
                    bool m_targetReplicasHasBeenSet;

                    /**
                     * <p>启动参数、环境变量等参数</p>
                     */
                    std::vector<DeploymentConfig> m_deploymentConfigs;
                    bool m_deploymentConfigsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_UPDATESERVICECONFIGSREQUEST_H_
