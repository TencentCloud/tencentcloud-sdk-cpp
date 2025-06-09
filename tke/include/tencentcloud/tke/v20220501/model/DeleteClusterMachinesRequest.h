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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_DELETECLUSTERMACHINESREQUEST_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_DELETECLUSTERMACHINESREQUEST_H_

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
                * DeleteClusterMachines请求参数结构体
                */
                class DeleteClusterMachinesRequest : public AbstractModel
                {
                public:
                    DeleteClusterMachinesRequest();
                    ~DeleteClusterMachinesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群 ID
                     * @return ClusterId 集群 ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群 ID
                     * @param _clusterId 集群 ID
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
                     * 获取节点名列表
                     * @return MachineNames 节点名列表
                     * 
                     */
                    std::vector<std::string> GetMachineNames() const;

                    /**
                     * 设置节点名列表
                     * @param _machineNames 节点名列表
                     * 
                     */
                    void SetMachineNames(const std::vector<std::string>& _machineNames);

                    /**
                     * 判断参数 MachineNames 是否已赋值
                     * @return MachineNames 是否已赋值
                     * 
                     */
                    bool MachineNamesHasBeenSet() const;

                    /**
                     * 获取删除节点时是否缩容节点池，true为缩容
                     * @return EnableScaleDown 删除节点时是否缩容节点池，true为缩容
                     * 
                     */
                    bool GetEnableScaleDown() const;

                    /**
                     * 设置删除节点时是否缩容节点池，true为缩容
                     * @param _enableScaleDown 删除节点时是否缩容节点池，true为缩容
                     * 
                     */
                    void SetEnableScaleDown(const bool& _enableScaleDown);

                    /**
                     * 判断参数 EnableScaleDown 是否已赋值
                     * @return EnableScaleDown 是否已赋值
                     * 
                     */
                    bool EnableScaleDownHasBeenSet() const;

                    /**
                     * 获取集群实例删除时的策略：terminate（销毁实例，仅支持按量计费云主机实例）retain（仅移除，保留实例）
                     * @return InstanceDeleteMode 集群实例删除时的策略：terminate（销毁实例，仅支持按量计费云主机实例）retain（仅移除，保留实例）
                     * 
                     */
                    std::string GetInstanceDeleteMode() const;

                    /**
                     * 设置集群实例删除时的策略：terminate（销毁实例，仅支持按量计费云主机实例）retain（仅移除，保留实例）
                     * @param _instanceDeleteMode 集群实例删除时的策略：terminate（销毁实例，仅支持按量计费云主机实例）retain（仅移除，保留实例）
                     * 
                     */
                    void SetInstanceDeleteMode(const std::string& _instanceDeleteMode);

                    /**
                     * 判断参数 InstanceDeleteMode 是否已赋值
                     * @return InstanceDeleteMode 是否已赋值
                     * 
                     */
                    bool InstanceDeleteModeHasBeenSet() const;

                private:

                    /**
                     * 集群 ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 节点名列表
                     */
                    std::vector<std::string> m_machineNames;
                    bool m_machineNamesHasBeenSet;

                    /**
                     * 删除节点时是否缩容节点池，true为缩容
                     */
                    bool m_enableScaleDown;
                    bool m_enableScaleDownHasBeenSet;

                    /**
                     * 集群实例删除时的策略：terminate（销毁实例，仅支持按量计费云主机实例）retain（仅移除，保留实例）
                     */
                    std::string m_instanceDeleteMode;
                    bool m_instanceDeleteModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_DELETECLUSTERMACHINESREQUEST_H_
