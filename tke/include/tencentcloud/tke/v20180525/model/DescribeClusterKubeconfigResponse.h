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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERKUBECONFIGRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERKUBECONFIGRESPONSE_H_

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
                * DescribeClusterKubeconfig返回参数结构体
                */
                class DescribeClusterKubeconfigResponse : public AbstractModel
                {
                public:
                    DescribeClusterKubeconfigResponse();
                    ~DescribeClusterKubeconfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取子账户kubeconfig文件，可用于直接访问集群kube-apiserver
                     * @return Kubeconfig 子账户kubeconfig文件，可用于直接访问集群kube-apiserver
                     */
                    std::string GetKubeconfig() const;

                    /**
                     * 判断参数 Kubeconfig 是否已赋值
                     * @return Kubeconfig 是否已赋值
                     */
                    bool KubeconfigHasBeenSet() const;

                private:

                    /**
                     * 子账户kubeconfig文件，可用于直接访问集群kube-apiserver
                     */
                    std::string m_kubeconfig;
                    bool m_kubeconfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERKUBECONFIGRESPONSE_H_
