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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_UPDATEEDGECLUSTERVERSIONREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_UPDATEEDGECLUSTERVERSIONREQUEST_H_

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
                * UpdateEdgeClusterVersion请求参数结构体
                */
                class UpdateEdgeClusterVersionRequest : public AbstractModel
                {
                public:
                    UpdateEdgeClusterVersionRequest();
                    ~UpdateEdgeClusterVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群 Id
                     * @return ClusterId 集群 Id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群 Id
                     * @param _clusterId 集群 Id
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
                     * 获取需要升级到的版本
                     * @return EdgeVersion 需要升级到的版本
                     * 
                     */
                    std::string GetEdgeVersion() const;

                    /**
                     * 设置需要升级到的版本
                     * @param _edgeVersion 需要升级到的版本
                     * 
                     */
                    void SetEdgeVersion(const std::string& _edgeVersion);

                    /**
                     * 判断参数 EdgeVersion 是否已赋值
                     * @return EdgeVersion 是否已赋值
                     * 
                     */
                    bool EdgeVersionHasBeenSet() const;

                    /**
                     * 获取自定义边缘组件镜像仓库前缀
                     * @return RegistryPrefix 自定义边缘组件镜像仓库前缀
                     * 
                     */
                    std::string GetRegistryPrefix() const;

                    /**
                     * 设置自定义边缘组件镜像仓库前缀
                     * @param _registryPrefix 自定义边缘组件镜像仓库前缀
                     * 
                     */
                    void SetRegistryPrefix(const std::string& _registryPrefix);

                    /**
                     * 判断参数 RegistryPrefix 是否已赋值
                     * @return RegistryPrefix 是否已赋值
                     * 
                     */
                    bool RegistryPrefixHasBeenSet() const;

                    /**
                     * 获取是否跳过预检查阶段
                     * @return SkipPreCheck 是否跳过预检查阶段
                     * 
                     */
                    bool GetSkipPreCheck() const;

                    /**
                     * 设置是否跳过预检查阶段
                     * @param _skipPreCheck 是否跳过预检查阶段
                     * 
                     */
                    void SetSkipPreCheck(const bool& _skipPreCheck);

                    /**
                     * 判断参数 SkipPreCheck 是否已赋值
                     * @return SkipPreCheck 是否已赋值
                     * 
                     */
                    bool SkipPreCheckHasBeenSet() const;

                private:

                    /**
                     * 集群 Id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 需要升级到的版本
                     */
                    std::string m_edgeVersion;
                    bool m_edgeVersionHasBeenSet;

                    /**
                     * 自定义边缘组件镜像仓库前缀
                     */
                    std::string m_registryPrefix;
                    bool m_registryPrefixHasBeenSet;

                    /**
                     * 是否跳过预检查阶段
                     */
                    bool m_skipPreCheck;
                    bool m_skipPreCheckHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_UPDATEEDGECLUSTERVERSIONREQUEST_H_
