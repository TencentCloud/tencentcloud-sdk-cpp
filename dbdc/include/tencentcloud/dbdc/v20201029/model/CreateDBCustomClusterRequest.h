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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_CREATEDBCUSTOMCLUSTERREQUEST_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_CREATEDBCUSTOMCLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbdc/v20201029/model/ContainerNetwork.h>
#include <tencentcloud/dbdc/v20201029/model/ApiServerNetwork.h>
#include <tencentcloud/dbdc/v20201029/model/Tag.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * CreateDBCustomCluster请求参数结构体
                */
                class CreateDBCustomClusterRequest : public AbstractModel
                {
                public:
                    CreateDBCustomClusterRequest();
                    ~CreateDBCustomClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>容器网络，在此集群的所有 POD 与此网络连通</p>
                     * @return ContainerNetwork <p>容器网络，在此集群的所有 POD 与此网络连通</p>
                     * 
                     */
                    ContainerNetwork GetContainerNetwork() const;

                    /**
                     * 设置<p>容器网络，在此集群的所有 POD 与此网络连通</p>
                     * @param _containerNetwork <p>容器网络，在此集群的所有 POD 与此网络连通</p>
                     * 
                     */
                    void SetContainerNetwork(const ContainerNetwork& _containerNetwork);

                    /**
                     * 判断参数 ContainerNetwork 是否已赋值
                     * @return ContainerNetwork 是否已赋值
                     * 
                     */
                    bool ContainerNetworkHasBeenSet() const;

                    /**
                     * 获取<p>集群名称</p><p>入参限制：最长128个字符，只能为中文，英文，下划线。</p>
                     * @return ClusterName <p>集群名称</p><p>入参限制：最长128个字符，只能为中文，英文，下划线。</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>集群名称</p><p>入参限制：最长128个字符，只能为中文，英文，下划线。</p>
                     * @param _clusterName <p>集群名称</p><p>入参限制：最长128个字符，只能为中文，英文，下划线。</p>
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取<p>集群的API Server的网络信息</p><p>入参限制：必须为此账号下拥有的网络地址，可以与容器网络保持一致。</p>
                     * @return ApiServerNetwork <p>集群的API Server的网络信息</p><p>入参限制：必须为此账号下拥有的网络地址，可以与容器网络保持一致。</p>
                     * 
                     */
                    ApiServerNetwork GetApiServerNetwork() const;

                    /**
                     * 设置<p>集群的API Server的网络信息</p><p>入参限制：必须为此账号下拥有的网络地址，可以与容器网络保持一致。</p>
                     * @param _apiServerNetwork <p>集群的API Server的网络信息</p><p>入参限制：必须为此账号下拥有的网络地址，可以与容器网络保持一致。</p>
                     * 
                     */
                    void SetApiServerNetwork(const ApiServerNetwork& _apiServerNetwork);

                    /**
                     * 判断参数 ApiServerNetwork 是否已赋值
                     * @return ApiServerNetwork 是否已赋值
                     * 
                     */
                    bool ApiServerNetworkHasBeenSet() const;

                    /**
                     * 获取<p>集群描述</p>
                     * @return ClusterDescription <p>集群描述</p>
                     * 
                     */
                    std::string GetClusterDescription() const;

                    /**
                     * 设置<p>集群描述</p>
                     * @param _clusterDescription <p>集群描述</p>
                     * 
                     */
                    void SetClusterDescription(const std::string& _clusterDescription);

                    /**
                     * 判断参数 ClusterDescription 是否已赋值
                     * @return ClusterDescription 是否已赋值
                     * 
                     */
                    bool ClusterDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>集群标签</p>
                     * @return Tags <p>集群标签</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>集群标签</p>
                     * @param _tags <p>集群标签</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>客户端Token</p>
                     * @return ClientToken <p>客户端Token</p>
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置<p>客户端Token</p>
                     * @param _clientToken <p>客户端Token</p>
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                private:

                    /**
                     * <p>容器网络，在此集群的所有 POD 与此网络连通</p>
                     */
                    ContainerNetwork m_containerNetwork;
                    bool m_containerNetworkHasBeenSet;

                    /**
                     * <p>集群名称</p><p>入参限制：最长128个字符，只能为中文，英文，下划线。</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>集群的API Server的网络信息</p><p>入参限制：必须为此账号下拥有的网络地址，可以与容器网络保持一致。</p>
                     */
                    ApiServerNetwork m_apiServerNetwork;
                    bool m_apiServerNetworkHasBeenSet;

                    /**
                     * <p>集群描述</p>
                     */
                    std::string m_clusterDescription;
                    bool m_clusterDescriptionHasBeenSet;

                    /**
                     * <p>集群标签</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>客户端Token</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_CREATEDBCUSTOMCLUSTERREQUEST_H_
