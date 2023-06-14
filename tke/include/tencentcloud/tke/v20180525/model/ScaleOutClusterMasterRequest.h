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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_SCALEOUTCLUSTERMASTERREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_SCALEOUTCLUSTERMASTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/RunInstancesForNode.h>
#include <tencentcloud/tke/v20180525/model/ExistedInstancesForNode.h>
#include <tencentcloud/tke/v20180525/model/InstanceAdvancedSettings.h>
#include <tencentcloud/tke/v20180525/model/ClusterExtraArgs.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * ScaleOutClusterMaster请求参数结构体
                */
                class ScaleOutClusterMasterRequest : public AbstractModel
                {
                public:
                    ScaleOutClusterMasterRequest();
                    ~ScaleOutClusterMasterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群实例ID
                     * @return ClusterId 集群实例ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群实例ID
                     * @param _clusterId 集群实例ID
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
                     * 获取新建节点参数
                     * @return RunInstancesForNode 新建节点参数
                     * 
                     */
                    std::vector<RunInstancesForNode> GetRunInstancesForNode() const;

                    /**
                     * 设置新建节点参数
                     * @param _runInstancesForNode 新建节点参数
                     * 
                     */
                    void SetRunInstancesForNode(const std::vector<RunInstancesForNode>& _runInstancesForNode);

                    /**
                     * 判断参数 RunInstancesForNode 是否已赋值
                     * @return RunInstancesForNode 是否已赋值
                     * 
                     */
                    bool RunInstancesForNodeHasBeenSet() const;

                    /**
                     * 获取添加已有节点相关参数
                     * @return ExistedInstancesForNode 添加已有节点相关参数
                     * 
                     */
                    std::vector<ExistedInstancesForNode> GetExistedInstancesForNode() const;

                    /**
                     * 设置添加已有节点相关参数
                     * @param _existedInstancesForNode 添加已有节点相关参数
                     * 
                     */
                    void SetExistedInstancesForNode(const std::vector<ExistedInstancesForNode>& _existedInstancesForNode);

                    /**
                     * 判断参数 ExistedInstancesForNode 是否已赋值
                     * @return ExistedInstancesForNode 是否已赋值
                     * 
                     */
                    bool ExistedInstancesForNodeHasBeenSet() const;

                    /**
                     * 获取实例高级设置
                     * @return InstanceAdvancedSettings 实例高级设置
                     * 
                     */
                    InstanceAdvancedSettings GetInstanceAdvancedSettings() const;

                    /**
                     * 设置实例高级设置
                     * @param _instanceAdvancedSettings 实例高级设置
                     * 
                     */
                    void SetInstanceAdvancedSettings(const InstanceAdvancedSettings& _instanceAdvancedSettings);

                    /**
                     * 判断参数 InstanceAdvancedSettings 是否已赋值
                     * @return InstanceAdvancedSettings 是否已赋值
                     * 
                     */
                    bool InstanceAdvancedSettingsHasBeenSet() const;

                    /**
                     * 获取集群master组件自定义参数
                     * @return ExtraArgs 集群master组件自定义参数
                     * 
                     */
                    ClusterExtraArgs GetExtraArgs() const;

                    /**
                     * 设置集群master组件自定义参数
                     * @param _extraArgs 集群master组件自定义参数
                     * 
                     */
                    void SetExtraArgs(const ClusterExtraArgs& _extraArgs);

                    /**
                     * 判断参数 ExtraArgs 是否已赋值
                     * @return ExtraArgs 是否已赋值
                     * 
                     */
                    bool ExtraArgsHasBeenSet() const;

                private:

                    /**
                     * 集群实例ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 新建节点参数
                     */
                    std::vector<RunInstancesForNode> m_runInstancesForNode;
                    bool m_runInstancesForNodeHasBeenSet;

                    /**
                     * 添加已有节点相关参数
                     */
                    std::vector<ExistedInstancesForNode> m_existedInstancesForNode;
                    bool m_existedInstancesForNodeHasBeenSet;

                    /**
                     * 实例高级设置
                     */
                    InstanceAdvancedSettings m_instanceAdvancedSettings;
                    bool m_instanceAdvancedSettingsHasBeenSet;

                    /**
                     * 集群master组件自定义参数
                     */
                    ClusterExtraArgs m_extraArgs;
                    bool m_extraArgsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_SCALEOUTCLUSTERMASTERREQUEST_H_
