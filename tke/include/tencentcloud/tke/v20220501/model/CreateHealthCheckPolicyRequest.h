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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_CREATEHEALTHCHECKPOLICYREQUEST_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_CREATEHEALTHCHECKPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20220501/model/HealthCheckPolicy.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * CreateHealthCheckPolicy请求参数结构体
                */
                class CreateHealthCheckPolicyRequest : public AbstractModel
                {
                public:
                    CreateHealthCheckPolicyRequest();
                    ~CreateHealthCheckPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取健康检测策略
                     * @return HealthCheckPolicy 健康检测策略
                     * 
                     */
                    HealthCheckPolicy GetHealthCheckPolicy() const;

                    /**
                     * 设置健康检测策略
                     * @param _healthCheckPolicy 健康检测策略
                     * 
                     */
                    void SetHealthCheckPolicy(const HealthCheckPolicy& _healthCheckPolicy);

                    /**
                     * 判断参数 HealthCheckPolicy 是否已赋值
                     * @return HealthCheckPolicy 是否已赋值
                     * 
                     */
                    bool HealthCheckPolicyHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 健康检测策略
                     */
                    HealthCheckPolicy m_healthCheckPolicy;
                    bool m_healthCheckPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_CREATEHEALTHCHECKPOLICYREQUEST_H_
