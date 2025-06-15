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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEMASTERCOMPONENTREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEMASTERCOMPONENTREQUEST_H_

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
                * DescribeMasterComponent请求参数结构体
                */
                class DescribeMasterComponentRequest : public AbstractModel
                {
                public:
                    DescribeMasterComponentRequest();
                    ~DescribeMasterComponentRequest() = default;
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
                     * 获取master组件名称，支持kube-apiserver、kube-scheduler、kube-controller-manager
                     * @return Component master组件名称，支持kube-apiserver、kube-scheduler、kube-controller-manager
                     * 
                     */
                    std::string GetComponent() const;

                    /**
                     * 设置master组件名称，支持kube-apiserver、kube-scheduler、kube-controller-manager
                     * @param _component master组件名称，支持kube-apiserver、kube-scheduler、kube-controller-manager
                     * 
                     */
                    void SetComponent(const std::string& _component);

                    /**
                     * 判断参数 Component 是否已赋值
                     * @return Component 是否已赋值
                     * 
                     */
                    bool ComponentHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * master组件名称，支持kube-apiserver、kube-scheduler、kube-controller-manager
                     */
                    std::string m_component;
                    bool m_componentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEMASTERCOMPONENTREQUEST_H_
