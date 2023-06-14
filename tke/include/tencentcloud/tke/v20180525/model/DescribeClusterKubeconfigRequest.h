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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERKUBECONFIGREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERKUBECONFIGREQUEST_H_

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
                * DescribeClusterKubeconfig请求参数结构体
                */
                class DescribeClusterKubeconfigRequest : public AbstractModel
                {
                public:
                    DescribeClusterKubeconfigRequest();
                    ~DescribeClusterKubeconfigRequest() = default;
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
                     * 获取默认false 获取内网，是否获取外网访问的kubeconfig
                     * @return IsExtranet 默认false 获取内网，是否获取外网访问的kubeconfig
                     * 
                     */
                    bool GetIsExtranet() const;

                    /**
                     * 设置默认false 获取内网，是否获取外网访问的kubeconfig
                     * @param _isExtranet 默认false 获取内网，是否获取外网访问的kubeconfig
                     * 
                     */
                    void SetIsExtranet(const bool& _isExtranet);

                    /**
                     * 判断参数 IsExtranet 是否已赋值
                     * @return IsExtranet 是否已赋值
                     * 
                     */
                    bool IsExtranetHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 默认false 获取内网，是否获取外网访问的kubeconfig
                     */
                    bool m_isExtranet;
                    bool m_isExtranetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERKUBECONFIGREQUEST_H_
