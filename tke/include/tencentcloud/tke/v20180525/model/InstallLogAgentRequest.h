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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_INSTALLLOGAGENTREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_INSTALLLOGAGENTREQUEST_H_

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
                * InstallLogAgent请求参数结构体
                */
                class InstallLogAgentRequest : public AbstractModel
                {
                public:
                    InstallLogAgentRequest();
                    ~InstallLogAgentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TKE集群ID
                     * @return ClusterId TKE集群ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置TKE集群ID
                     * @param ClusterId TKE集群ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取kubelet根目录
                     * @return KubeletRootDir kubelet根目录
                     */
                    std::string GetKubeletRootDir() const;

                    /**
                     * 设置kubelet根目录
                     * @param KubeletRootDir kubelet根目录
                     */
                    void SetKubeletRootDir(const std::string& _kubeletRootDir);

                    /**
                     * 判断参数 KubeletRootDir 是否已赋值
                     * @return KubeletRootDir 是否已赋值
                     */
                    bool KubeletRootDirHasBeenSet() const;

                private:

                    /**
                     * TKE集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * kubelet根目录
                     */
                    std::string m_kubeletRootDir;
                    bool m_kubeletRootDirHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_INSTALLLOGAGENTREQUEST_H_
