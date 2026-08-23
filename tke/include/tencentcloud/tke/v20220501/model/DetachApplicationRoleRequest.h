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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_DETACHAPPLICATIONROLEREQUEST_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_DETACHAPPLICATIONROLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * DetachApplicationRole请求参数结构体
                */
                class DetachApplicationRoleRequest : public AbstractModel
                {
                public:
                    DetachApplicationRoleRequest();
                    ~DetachApplicationRoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群 ID</p>
                     * @return ClusterId <p>集群 ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群 ID</p>
                     * @param _clusterId <p>集群 ID</p>
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
                     * 获取<p>解绑的 CVM 实例列表</p>
                     * @return Instances <p>解绑的 CVM 实例列表</p>
                     * 
                     */
                    std::vector<std::string> GetInstances() const;

                    /**
                     * 设置<p>解绑的 CVM 实例列表</p>
                     * @param _instances <p>解绑的 CVM 实例列表</p>
                     * 
                     */
                    void SetInstances(const std::vector<std::string>& _instances);

                    /**
                     * 判断参数 Instances 是否已赋值
                     * @return Instances 是否已赋值
                     * 
                     */
                    bool InstancesHasBeenSet() const;

                private:

                    /**
                     * <p>集群 ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>解绑的 CVM 实例列表</p>
                     */
                    std::vector<std::string> m_instances;
                    bool m_instancesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_DETACHAPPLICATIONROLEREQUEST_H_
