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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTEREXTRAARGS_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTEREXTRAARGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 集群master自定义参数
                */
                class ClusterExtraArgs : public AbstractModel
                {
                public:
                    ClusterExtraArgs();
                    ~ClusterExtraArgs() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取etcd自定义参数，只支持独立集群
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Etcd etcd自定义参数，只支持独立集群
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetEtcd() const;

                    /**
                     * 设置etcd自定义参数，只支持独立集群
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _etcd etcd自定义参数，只支持独立集群
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEtcd(const std::vector<std::string>& _etcd);

                    /**
                     * 判断参数 Etcd 是否已赋值
                     * @return Etcd 是否已赋值
                     * 
                     */
                    bool EtcdHasBeenSet() const;

                    /**
                     * 获取kube-apiserver自定义参数，参数格式为["k1=v1", "k1=v2"]， 例如["max-requests-inflight=500","feature-gates=PodShareProcessNamespace=true,DynamicKubeletConfig=true"]
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KubeAPIServer kube-apiserver自定义参数，参数格式为["k1=v1", "k1=v2"]， 例如["max-requests-inflight=500","feature-gates=PodShareProcessNamespace=true,DynamicKubeletConfig=true"]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetKubeAPIServer() const;

                    /**
                     * 设置kube-apiserver自定义参数，参数格式为["k1=v1", "k1=v2"]， 例如["max-requests-inflight=500","feature-gates=PodShareProcessNamespace=true,DynamicKubeletConfig=true"]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kubeAPIServer kube-apiserver自定义参数，参数格式为["k1=v1", "k1=v2"]， 例如["max-requests-inflight=500","feature-gates=PodShareProcessNamespace=true,DynamicKubeletConfig=true"]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKubeAPIServer(const std::vector<std::string>& _kubeAPIServer);

                    /**
                     * 判断参数 KubeAPIServer 是否已赋值
                     * @return KubeAPIServer 是否已赋值
                     * 
                     */
                    bool KubeAPIServerHasBeenSet() const;

                    /**
                     * 获取kube-controller-manager自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KubeControllerManager kube-controller-manager自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetKubeControllerManager() const;

                    /**
                     * 设置kube-controller-manager自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kubeControllerManager kube-controller-manager自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKubeControllerManager(const std::vector<std::string>& _kubeControllerManager);

                    /**
                     * 判断参数 KubeControllerManager 是否已赋值
                     * @return KubeControllerManager 是否已赋值
                     * 
                     */
                    bool KubeControllerManagerHasBeenSet() const;

                    /**
                     * 获取kube-scheduler自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KubeScheduler kube-scheduler自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetKubeScheduler() const;

                    /**
                     * 设置kube-scheduler自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kubeScheduler kube-scheduler自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKubeScheduler(const std::vector<std::string>& _kubeScheduler);

                    /**
                     * 判断参数 KubeScheduler 是否已赋值
                     * @return KubeScheduler 是否已赋值
                     * 
                     */
                    bool KubeSchedulerHasBeenSet() const;

                private:

                    /**
                     * etcd自定义参数，只支持独立集群
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_etcd;
                    bool m_etcdHasBeenSet;

                    /**
                     * kube-apiserver自定义参数，参数格式为["k1=v1", "k1=v2"]， 例如["max-requests-inflight=500","feature-gates=PodShareProcessNamespace=true,DynamicKubeletConfig=true"]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_kubeAPIServer;
                    bool m_kubeAPIServerHasBeenSet;

                    /**
                     * kube-controller-manager自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_kubeControllerManager;
                    bool m_kubeControllerManagerHasBeenSet;

                    /**
                     * kube-scheduler自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_kubeScheduler;
                    bool m_kubeSchedulerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTEREXTRAARGS_H_
