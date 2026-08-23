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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_REMOVENODESFROMDBCUSTOMCLUSTERREQUEST_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_REMOVENODESFROMDBCUSTOMCLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbdc/v20201029/model/LoginSettings.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * RemoveNodesFromDBCustomCluster请求参数结构体
                */
                class RemoveNodesFromDBCustomClusterRequest : public AbstractModel
                {
                public:
                    RemoveNodesFromDBCustomClusterRequest();
                    ~RemoveNodesFromDBCustomClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>DB Custom 集群ID</p>
                     * @return ClusterId <p>DB Custom 集群ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>DB Custom 集群ID</p>
                     * @param _clusterId <p>DB Custom 集群ID</p>
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
                     * 获取<p>要下架的 DB Custom 节点ID列表</p>
                     * @return NodeIds <p>要下架的 DB Custom 节点ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetNodeIds() const;

                    /**
                     * 设置<p>要下架的 DB Custom 节点ID列表</p>
                     * @param _nodeIds <p>要下架的 DB Custom 节点ID列表</p>
                     * 
                     */
                    void SetNodeIds(const std::vector<std::string>& _nodeIds);

                    /**
                     * 判断参数 NodeIds 是否已赋值
                     * @return NodeIds 是否已赋值
                     * 
                     */
                    bool NodeIdsHasBeenSet() const;

                    /**
                     * 获取<p>节点的登录参数</p>
                     * @return LoginSettings <p>节点的登录参数</p>
                     * 
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置<p>节点的登录参数</p>
                     * @param _loginSettings <p>节点的登录参数</p>
                     * 
                     */
                    void SetLoginSettings(const LoginSettings& _loginSettings);

                    /**
                     * 判断参数 LoginSettings 是否已赋值
                     * @return LoginSettings 是否已赋值
                     * 
                     */
                    bool LoginSettingsHasBeenSet() const;

                    /**
                     * 获取<p>当节点中还有业务 Pod 在运行，默认会拦截从集群中移除节点的操作。如果该参数为 true，表示强制执行此操作。</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul><p>默认值：false</p>
                     * @return Force <p>当节点中还有业务 Pod 在运行，默认会拦截从集群中移除节点的操作。如果该参数为 true，表示强制执行此操作。</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul><p>默认值：false</p>
                     * 
                     */
                    bool GetForce() const;

                    /**
                     * 设置<p>当节点中还有业务 Pod 在运行，默认会拦截从集群中移除节点的操作。如果该参数为 true，表示强制执行此操作。</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul><p>默认值：false</p>
                     * @param _force <p>当节点中还有业务 Pod 在运行，默认会拦截从集群中移除节点的操作。如果该参数为 true，表示强制执行此操作。</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul><p>默认值：false</p>
                     * 
                     */
                    void SetForce(const bool& _force);

                    /**
                     * 判断参数 Force 是否已赋值
                     * @return Force 是否已赋值
                     * 
                     */
                    bool ForceHasBeenSet() const;

                private:

                    /**
                     * <p>DB Custom 集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>要下架的 DB Custom 节点ID列表</p>
                     */
                    std::vector<std::string> m_nodeIds;
                    bool m_nodeIdsHasBeenSet;

                    /**
                     * <p>节点的登录参数</p>
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * <p>当节点中还有业务 Pod 在运行，默认会拦截从集群中移除节点的操作。如果该参数为 true，表示强制执行此操作。</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul><p>默认值：false</p>
                     */
                    bool m_force;
                    bool m_forceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_REMOVENODESFROMDBCUSTOMCLUSTERREQUEST_H_
