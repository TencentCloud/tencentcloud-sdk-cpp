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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERRUNTIMECONFIGREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERRUNTIMECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/RuntimeConfig.h>
#include <tencentcloud/tke/v20180525/model/NodePoolRuntime.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * ModifyClusterRuntimeConfig请求参数结构体
                */
                class ModifyClusterRuntimeConfigRequest : public AbstractModel
                {
                public:
                    ModifyClusterRuntimeConfigRequest();
                    ~ModifyClusterRuntimeConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID，必填
                     * @return ClusterId 集群ID，必填
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID，必填
                     * @param _clusterId 集群ID，必填
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
                     * 获取当需要修改运行时版本是根据另外的K8S版本获取时，需填写。例如升级校验有冲突后修改场景
                     * @return DstK8SVersion 当需要修改运行时版本是根据另外的K8S版本获取时，需填写。例如升级校验有冲突后修改场景
                     * 
                     */
                    std::string GetDstK8SVersion() const;

                    /**
                     * 设置当需要修改运行时版本是根据另外的K8S版本获取时，需填写。例如升级校验有冲突后修改场景
                     * @param _dstK8SVersion 当需要修改运行时版本是根据另外的K8S版本获取时，需填写。例如升级校验有冲突后修改场景
                     * 
                     */
                    void SetDstK8SVersion(const std::string& _dstK8SVersion);

                    /**
                     * 判断参数 DstK8SVersion 是否已赋值
                     * @return DstK8SVersion 是否已赋值
                     * 
                     */
                    bool DstK8SVersionHasBeenSet() const;

                    /**
                     * 获取需要修改集群运行时时填写
                     * @return ClusterRuntimeConfig 需要修改集群运行时时填写
                     * 
                     */
                    RuntimeConfig GetClusterRuntimeConfig() const;

                    /**
                     * 设置需要修改集群运行时时填写
                     * @param _clusterRuntimeConfig 需要修改集群运行时时填写
                     * 
                     */
                    void SetClusterRuntimeConfig(const RuntimeConfig& _clusterRuntimeConfig);

                    /**
                     * 判断参数 ClusterRuntimeConfig 是否已赋值
                     * @return ClusterRuntimeConfig 是否已赋值
                     * 
                     */
                    bool ClusterRuntimeConfigHasBeenSet() const;

                    /**
                     * 获取需要修改节点池运行时时，填需要修改的部分
                     * @return NodePoolRuntimeConfig 需要修改节点池运行时时，填需要修改的部分
                     * 
                     */
                    std::vector<NodePoolRuntime> GetNodePoolRuntimeConfig() const;

                    /**
                     * 设置需要修改节点池运行时时，填需要修改的部分
                     * @param _nodePoolRuntimeConfig 需要修改节点池运行时时，填需要修改的部分
                     * 
                     */
                    void SetNodePoolRuntimeConfig(const std::vector<NodePoolRuntime>& _nodePoolRuntimeConfig);

                    /**
                     * 判断参数 NodePoolRuntimeConfig 是否已赋值
                     * @return NodePoolRuntimeConfig 是否已赋值
                     * 
                     */
                    bool NodePoolRuntimeConfigHasBeenSet() const;

                private:

                    /**
                     * 集群ID，必填
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 当需要修改运行时版本是根据另外的K8S版本获取时，需填写。例如升级校验有冲突后修改场景
                     */
                    std::string m_dstK8SVersion;
                    bool m_dstK8SVersionHasBeenSet;

                    /**
                     * 需要修改集群运行时时填写
                     */
                    RuntimeConfig m_clusterRuntimeConfig;
                    bool m_clusterRuntimeConfigHasBeenSet;

                    /**
                     * 需要修改节点池运行时时，填需要修改的部分
                     */
                    std::vector<NodePoolRuntime> m_nodePoolRuntimeConfig;
                    bool m_nodePoolRuntimeConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERRUNTIMECONFIGREQUEST_H_
