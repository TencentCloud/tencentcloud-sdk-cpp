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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ResourceDeleteOption.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DeleteCluster请求参数结构体
                */
                class DeleteClusterRequest : public AbstractModel
                {
                public:
                    DeleteClusterRequest();
                    ~DeleteClusterRequest() = default;
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
                     * 获取集群实例删除时的策略：terminate（销毁实例，仅支持按量计费云主机实例） retain （仅移除，保留实例）
                     * @return InstanceDeleteMode 集群实例删除时的策略：terminate（销毁实例，仅支持按量计费云主机实例） retain （仅移除，保留实例）
                     * 
                     */
                    std::string GetInstanceDeleteMode() const;

                    /**
                     * 设置集群实例删除时的策略：terminate（销毁实例，仅支持按量计费云主机实例） retain （仅移除，保留实例）
                     * @param _instanceDeleteMode 集群实例删除时的策略：terminate（销毁实例，仅支持按量计费云主机实例） retain （仅移除，保留实例）
                     * 
                     */
                    void SetInstanceDeleteMode(const std::string& _instanceDeleteMode);

                    /**
                     * 判断参数 InstanceDeleteMode 是否已赋值
                     * @return InstanceDeleteMode 是否已赋值
                     * 
                     */
                    bool InstanceDeleteModeHasBeenSet() const;

                    /**
                     * 获取集群删除时资源的删除策略，目前支持CBS（默认保留CBS）
                     * @return ResourceDeleteOptions 集群删除时资源的删除策略，目前支持CBS（默认保留CBS）
                     * 
                     */
                    std::vector<ResourceDeleteOption> GetResourceDeleteOptions() const;

                    /**
                     * 设置集群删除时资源的删除策略，目前支持CBS（默认保留CBS）
                     * @param _resourceDeleteOptions 集群删除时资源的删除策略，目前支持CBS（默认保留CBS）
                     * 
                     */
                    void SetResourceDeleteOptions(const std::vector<ResourceDeleteOption>& _resourceDeleteOptions);

                    /**
                     * 判断参数 ResourceDeleteOptions 是否已赋值
                     * @return ResourceDeleteOptions 是否已赋值
                     * 
                     */
                    bool ResourceDeleteOptionsHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群实例删除时的策略：terminate（销毁实例，仅支持按量计费云主机实例） retain （仅移除，保留实例）
                     */
                    std::string m_instanceDeleteMode;
                    bool m_instanceDeleteModeHasBeenSet;

                    /**
                     * 集群删除时资源的删除策略，目前支持CBS（默认保留CBS）
                     */
                    std::vector<ResourceDeleteOption> m_resourceDeleteOptions;
                    bool m_resourceDeleteOptionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERREQUEST_H_
