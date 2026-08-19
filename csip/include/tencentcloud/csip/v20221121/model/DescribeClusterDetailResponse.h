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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERDETAILRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ClusterListItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeClusterDetail返回参数结构体
                */
                class DescribeClusterDetailResponse : public AbstractModel
                {
                public:
                    DescribeClusterDetailResponse();
                    ~DescribeClusterDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群基础信息</p>
                     * @return ClusterBaseInfo <p>集群基础信息</p>
                     * 
                     */
                    ClusterListItem GetClusterBaseInfo() const;

                    /**
                     * 判断参数 ClusterBaseInfo 是否已赋值
                     * @return ClusterBaseInfo 是否已赋值
                     * 
                     */
                    bool ClusterBaseInfoHasBeenSet() const;

                    /**
                     * 获取<p>运行时组件</p>
                     * @return RuntimeComponent <p>运行时组件</p>
                     * 
                     */
                    std::string GetRuntimeComponent() const;

                    /**
                     * 判断参数 RuntimeComponent 是否已赋值
                     * @return RuntimeComponent 是否已赋值
                     * 
                     */
                    bool RuntimeComponentHasBeenSet() const;

                    /**
                     * 获取<p>master ip</p>
                     * @return MasterIP <p>master ip</p>
                     * 
                     */
                    std::string GetMasterIP() const;

                    /**
                     * 判断参数 MasterIP 是否已赋值
                     * @return MasterIP 是否已赋值
                     * 
                     */
                    bool MasterIPHasBeenSet() const;

                    /**
                     * 获取<p>节点数</p>
                     * @return NodeCount <p>节点数</p>
                     * 
                     */
                    uint64_t GetNodeCount() const;

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取<p>命名空间数</p>
                     * @return NamespaceCount <p>命名空间数</p>
                     * 
                     */
                    uint64_t GetNamespaceCount() const;

                    /**
                     * 判断参数 NamespaceCount 是否已赋值
                     * @return NamespaceCount 是否已赋值
                     * 
                     */
                    bool NamespaceCountHasBeenSet() const;

                    /**
                     * 获取<p>pod数</p>
                     * @return PodCount <p>pod数</p>
                     * 
                     */
                    uint64_t GetPodCount() const;

                    /**
                     * 判断参数 PodCount 是否已赋值
                     * @return PodCount 是否已赋值
                     * 
                     */
                    bool PodCountHasBeenSet() const;

                    /**
                     * 获取<p>容器数</p>
                     * @return ContainerCount <p>容器数</p>
                     * 
                     */
                    uint64_t GetContainerCount() const;

                    /**
                     * 判断参数 ContainerCount 是否已赋值
                     * @return ContainerCount 是否已赋值
                     * 
                     */
                    bool ContainerCountHasBeenSet() const;

                    /**
                     * 获取<p>service数</p>
                     * @return ServiceCount <p>service数</p>
                     * 
                     */
                    uint64_t GetServiceCount() const;

                    /**
                     * 判断参数 ServiceCount 是否已赋值
                     * @return ServiceCount 是否已赋值
                     * 
                     */
                    bool ServiceCountHasBeenSet() const;

                    /**
                     * 获取<p>ingress数</p>
                     * @return IngressCount <p>ingress数</p>
                     * 
                     */
                    uint64_t GetIngressCount() const;

                    /**
                     * 判断参数 IngressCount 是否已赋值
                     * @return IngressCount 是否已赋值
                     * 
                     */
                    bool IngressCountHasBeenSet() const;

                    /**
                     * 获取<p>镜像数</p>
                     * @return ImageCount <p>镜像数</p>
                     * 
                     */
                    uint64_t GetImageCount() const;

                    /**
                     * 判断参数 ImageCount 是否已赋值
                     * @return ImageCount 是否已赋值
                     * 
                     */
                    bool ImageCountHasBeenSet() const;

                    /**
                     * 获取<p>系统组件数量</p>
                     * @return SystemComponentCount <p>系统组件数量</p>
                     * 
                     */
                    uint64_t GetSystemComponentCount() const;

                    /**
                     * 判断参数 SystemComponentCount 是否已赋值
                     * @return SystemComponentCount 是否已赋值
                     * 
                     */
                    bool SystemComponentCountHasBeenSet() const;

                private:

                    /**
                     * <p>集群基础信息</p>
                     */
                    ClusterListItem m_clusterBaseInfo;
                    bool m_clusterBaseInfoHasBeenSet;

                    /**
                     * <p>运行时组件</p>
                     */
                    std::string m_runtimeComponent;
                    bool m_runtimeComponentHasBeenSet;

                    /**
                     * <p>master ip</p>
                     */
                    std::string m_masterIP;
                    bool m_masterIPHasBeenSet;

                    /**
                     * <p>节点数</p>
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * <p>命名空间数</p>
                     */
                    uint64_t m_namespaceCount;
                    bool m_namespaceCountHasBeenSet;

                    /**
                     * <p>pod数</p>
                     */
                    uint64_t m_podCount;
                    bool m_podCountHasBeenSet;

                    /**
                     * <p>容器数</p>
                     */
                    uint64_t m_containerCount;
                    bool m_containerCountHasBeenSet;

                    /**
                     * <p>service数</p>
                     */
                    uint64_t m_serviceCount;
                    bool m_serviceCountHasBeenSet;

                    /**
                     * <p>ingress数</p>
                     */
                    uint64_t m_ingressCount;
                    bool m_ingressCountHasBeenSet;

                    /**
                     * <p>镜像数</p>
                     */
                    uint64_t m_imageCount;
                    bool m_imageCountHasBeenSet;

                    /**
                     * <p>系统组件数量</p>
                     */
                    uint64_t m_systemComponentCount;
                    bool m_systemComponentCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERDETAILRESPONSE_H_
