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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_EDGEAVAILABLEEXTRAARGS_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_EDGEAVAILABLEEXTRAARGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/EdgeArgsFlag.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 边缘容器集群可用的自定义参数
                */
                class EdgeAvailableExtraArgs : public AbstractModel
                {
                public:
                    EdgeAvailableExtraArgs();
                    ~EdgeAvailableExtraArgs() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取kube-apiserver可用的自定义参数
                     * @return KubeAPIServer kube-apiserver可用的自定义参数
                     * 
                     */
                    std::vector<EdgeArgsFlag> GetKubeAPIServer() const;

                    /**
                     * 设置kube-apiserver可用的自定义参数
                     * @param _kubeAPIServer kube-apiserver可用的自定义参数
                     * 
                     */
                    void SetKubeAPIServer(const std::vector<EdgeArgsFlag>& _kubeAPIServer);

                    /**
                     * 判断参数 KubeAPIServer 是否已赋值
                     * @return KubeAPIServer 是否已赋值
                     * 
                     */
                    bool KubeAPIServerHasBeenSet() const;

                    /**
                     * 获取kube-controller-manager可用的自定义参数
                     * @return KubeControllerManager kube-controller-manager可用的自定义参数
                     * 
                     */
                    std::vector<EdgeArgsFlag> GetKubeControllerManager() const;

                    /**
                     * 设置kube-controller-manager可用的自定义参数
                     * @param _kubeControllerManager kube-controller-manager可用的自定义参数
                     * 
                     */
                    void SetKubeControllerManager(const std::vector<EdgeArgsFlag>& _kubeControllerManager);

                    /**
                     * 判断参数 KubeControllerManager 是否已赋值
                     * @return KubeControllerManager 是否已赋值
                     * 
                     */
                    bool KubeControllerManagerHasBeenSet() const;

                    /**
                     * 获取kube-scheduler可用的自定义参数
                     * @return KubeScheduler kube-scheduler可用的自定义参数
                     * 
                     */
                    std::vector<EdgeArgsFlag> GetKubeScheduler() const;

                    /**
                     * 设置kube-scheduler可用的自定义参数
                     * @param _kubeScheduler kube-scheduler可用的自定义参数
                     * 
                     */
                    void SetKubeScheduler(const std::vector<EdgeArgsFlag>& _kubeScheduler);

                    /**
                     * 判断参数 KubeScheduler 是否已赋值
                     * @return KubeScheduler 是否已赋值
                     * 
                     */
                    bool KubeSchedulerHasBeenSet() const;

                    /**
                     * 获取kubelet可用的自定义参数
                     * @return Kubelet kubelet可用的自定义参数
                     * 
                     */
                    std::vector<EdgeArgsFlag> GetKubelet() const;

                    /**
                     * 设置kubelet可用的自定义参数
                     * @param _kubelet kubelet可用的自定义参数
                     * 
                     */
                    void SetKubelet(const std::vector<EdgeArgsFlag>& _kubelet);

                    /**
                     * 判断参数 Kubelet 是否已赋值
                     * @return Kubelet 是否已赋值
                     * 
                     */
                    bool KubeletHasBeenSet() const;

                private:

                    /**
                     * kube-apiserver可用的自定义参数
                     */
                    std::vector<EdgeArgsFlag> m_kubeAPIServer;
                    bool m_kubeAPIServerHasBeenSet;

                    /**
                     * kube-controller-manager可用的自定义参数
                     */
                    std::vector<EdgeArgsFlag> m_kubeControllerManager;
                    bool m_kubeControllerManagerHasBeenSet;

                    /**
                     * kube-scheduler可用的自定义参数
                     */
                    std::vector<EdgeArgsFlag> m_kubeScheduler;
                    bool m_kubeSchedulerHasBeenSet;

                    /**
                     * kubelet可用的自定义参数
                     */
                    std::vector<EdgeArgsFlag> m_kubelet;
                    bool m_kubeletHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_EDGEAVAILABLEEXTRAARGS_H_
