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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_TKEMETA_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_TKEMETA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * tke资源元数据
                */
                class TkeMeta : public AbstractModel
                {
                public:
                    TkeMeta();
                    ~TkeMeta() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>地域</p>
                     * @return Region <p>地域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域</p>
                     * @param _region <p>地域</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>集群ID</p>
                     * @return ClusterID <p>集群ID</p>
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置<p>集群ID</p>
                     * @param _clusterID <p>集群ID</p>
                     * 
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取<p>pod name</p>
                     * @return PodName <p>pod name</p>
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置<p>pod name</p>
                     * @param _podName <p>pod name</p>
                     * 
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取<p>命名空间</p>
                     * @return Namespace <p>命名空间</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>命名空间</p>
                     * @param _namespace <p>命名空间</p>
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取<p>工作负载</p>
                     * @return Deployment <p>工作负载</p>
                     * 
                     */
                    std::string GetDeployment() const;

                    /**
                     * 设置<p>工作负载</p>
                     * @param _deployment <p>工作负载</p>
                     * 
                     */
                    void SetDeployment(const std::string& _deployment);

                    /**
                     * 判断参数 Deployment 是否已赋值
                     * @return Deployment 是否已赋值
                     * 
                     */
                    bool DeploymentHasBeenSet() const;

                    /**
                     * 获取<p>pod ip</p>
                     * @return PodIP <p>pod ip</p>
                     * 
                     */
                    std::string GetPodIP() const;

                    /**
                     * 设置<p>pod ip</p>
                     * @param _podIP <p>pod ip</p>
                     * 
                     */
                    void SetPodIP(const std::string& _podIP);

                    /**
                     * 判断参数 PodIP 是否已赋值
                     * @return PodIP 是否已赋值
                     * 
                     */
                    bool PodIPHasBeenSet() const;

                    /**
                     * 获取<p>node ip</p>
                     * @return NodeIP <p>node ip</p>
                     * 
                     */
                    std::string GetNodeIP() const;

                    /**
                     * 设置<p>node ip</p>
                     * @param _nodeIP <p>node ip</p>
                     * 
                     */
                    void SetNodeIP(const std::string& _nodeIP);

                    /**
                     * 判断参数 NodeIP 是否已赋值
                     * @return NodeIP 是否已赋值
                     * 
                     */
                    bool NodeIPHasBeenSet() const;

                private:

                    /**
                     * <p>地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * <p>pod name</p>
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * <p>命名空间</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>工作负载</p>
                     */
                    std::string m_deployment;
                    bool m_deploymentHasBeenSet;

                    /**
                     * <p>pod ip</p>
                     */
                    std::string m_podIP;
                    bool m_podIPHasBeenSet;

                    /**
                     * <p>node ip</p>
                     */
                    std::string m_nodeIP;
                    bool m_nodeIPHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_TKEMETA_H_
