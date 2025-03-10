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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEDGECLUSTERUPGRADEINFORESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEDGECLUSTERUPGRADEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeEdgeClusterUpgradeInfo返回参数结构体
                */
                class DescribeEdgeClusterUpgradeInfoResponse : public AbstractModel
                {
                public:
                    DescribeEdgeClusterUpgradeInfoResponse();
                    ~DescribeEdgeClusterUpgradeInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取可升级的集群组件及其版本
                     * @return ComponentVersion 可升级的集群组件及其版本
                     * 
                     */
                    std::string GetComponentVersion() const;

                    /**
                     * 判断参数 ComponentVersion 是否已赋值
                     * @return ComponentVersion 是否已赋值
                     * 
                     */
                    bool ComponentVersionHasBeenSet() const;

                    /**
                     * 获取边缘集群当前版本
                     * @return EdgeVersionCurrent 边缘集群当前版本
                     * 
                     */
                    std::string GetEdgeVersionCurrent() const;

                    /**
                     * 判断参数 EdgeVersionCurrent 是否已赋值
                     * @return EdgeVersionCurrent 是否已赋值
                     * 
                     */
                    bool EdgeVersionCurrentHasBeenSet() const;

                    /**
                     * 获取边缘组件镜像仓库地址前缀，包含域名和命名空间
                     * @return RegistryPrefix 边缘组件镜像仓库地址前缀，包含域名和命名空间
                     * 
                     */
                    std::string GetRegistryPrefix() const;

                    /**
                     * 判断参数 RegistryPrefix 是否已赋值
                     * @return RegistryPrefix 是否已赋值
                     * 
                     */
                    bool RegistryPrefixHasBeenSet() const;

                    /**
                     * 获取集群升级状态，可能值：running、updating、failed
                     * @return ClusterUpgradeStatus 集群升级状态，可能值：running、updating、failed
                     * 
                     */
                    std::string GetClusterUpgradeStatus() const;

                    /**
                     * 判断参数 ClusterUpgradeStatus 是否已赋值
                     * @return ClusterUpgradeStatus 是否已赋值
                     * 
                     */
                    bool ClusterUpgradeStatusHasBeenSet() const;

                    /**
                     * 获取集群升级中状态或者失败原因
                     * @return ClusterUpgradeStatusReason 集群升级中状态或者失败原因
                     * 
                     */
                    std::string GetClusterUpgradeStatusReason() const;

                    /**
                     * 判断参数 ClusterUpgradeStatusReason 是否已赋值
                     * @return ClusterUpgradeStatusReason 是否已赋值
                     * 
                     */
                    bool ClusterUpgradeStatusReasonHasBeenSet() const;

                private:

                    /**
                     * 可升级的集群组件及其版本
                     */
                    std::string m_componentVersion;
                    bool m_componentVersionHasBeenSet;

                    /**
                     * 边缘集群当前版本
                     */
                    std::string m_edgeVersionCurrent;
                    bool m_edgeVersionCurrentHasBeenSet;

                    /**
                     * 边缘组件镜像仓库地址前缀，包含域名和命名空间
                     */
                    std::string m_registryPrefix;
                    bool m_registryPrefixHasBeenSet;

                    /**
                     * 集群升级状态，可能值：running、updating、failed
                     */
                    std::string m_clusterUpgradeStatus;
                    bool m_clusterUpgradeStatusHasBeenSet;

                    /**
                     * 集群升级中状态或者失败原因
                     */
                    std::string m_clusterUpgradeStatusReason;
                    bool m_clusterUpgradeStatusReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEDGECLUSTERUPGRADEINFORESPONSE_H_
