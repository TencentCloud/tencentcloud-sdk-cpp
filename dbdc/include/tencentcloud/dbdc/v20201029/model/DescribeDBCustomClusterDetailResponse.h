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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEDBCUSTOMCLUSTERDETAILRESPONSE_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEDBCUSTOMCLUSTERDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbdc/v20201029/model/Tag.h>
#include <tencentcloud/dbdc/v20201029/model/ApiServerNetwork.h>
#include <tencentcloud/dbdc/v20201029/model/ContainerNetwork.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * DescribeDBCustomClusterDetail返回参数结构体
                */
                class DescribeDBCustomClusterDetailResponse : public AbstractModel
                {
                public:
                    DescribeDBCustomClusterDetailResponse();
                    ~DescribeDBCustomClusterDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群ID</p>
                     * @return ClusterId <p>集群ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>集群名称</p>
                     * @return ClusterName <p>集群名称</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取<p>集群描述</p>
                     * @return ClusterDescription <p>集群描述</p>
                     * 
                     */
                    std::string GetClusterDescription() const;

                    /**
                     * 判断参数 ClusterDescription 是否已赋值
                     * @return ClusterDescription 是否已赋值
                     * 
                     */
                    bool ClusterDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>集群所属地域</p><p>枚举值：</p><ul><li>ap-shanghai： 上海地域</li><li>ap-nanjing： 南京地域</li></ul>
                     * @return Region <p>集群所属地域</p><p>枚举值：</p><ul><li>ap-shanghai： 上海地域</li><li>ap-nanjing： 南京地域</li></ul>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>DB Custom 集群状态</p><p>枚举值：</p><ul><li>Creating： 创建中</li><li>Running： 运行中</li><li>Destroying： 销毁中</li><li>Initializing： 初始化中</li></ul>
                     * @return ClusterStatus <p>DB Custom 集群状态</p><p>枚举值：</p><ul><li>Creating： 创建中</li><li>Running： 运行中</li><li>Destroying： 销毁中</li><li>Initializing： 初始化中</li></ul>
                     * 
                     */
                    std::string GetClusterStatus() const;

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     * 
                     */
                    bool ClusterStatusHasBeenSet() const;

                    /**
                     * 获取<p>集群版本</p><p>枚举值：</p><ul><li>1.34.1： 集群版本1.34.1</li></ul><p>默认值：1.34.1</p>
                     * @return ClusterVersion <p>集群版本</p><p>枚举值：</p><ul><li>1.34.1： 集群版本1.34.1</li></ul><p>默认值：1.34.1</p>
                     * 
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 判断参数 ClusterVersion 是否已赋值
                     * @return ClusterVersion 是否已赋值
                     * 
                     */
                    bool ClusterVersionHasBeenSet() const;

                    /**
                     * 获取<p>集群下的节点数量</p>
                     * @return ClusterNodeNum <p>集群下的节点数量</p>
                     * 
                     */
                    int64_t GetClusterNodeNum() const;

                    /**
                     * 判断参数 ClusterNodeNum 是否已赋值
                     * @return ClusterNodeNum 是否已赋值
                     * 
                     */
                    bool ClusterNodeNumHasBeenSet() const;

                    /**
                     * 获取<p>集群规模</p>
                     * @return ClusterLevel <p>集群规模</p>
                     * 
                     */
                    std::string GetClusterLevel() const;

                    /**
                     * 判断参数 ClusterLevel 是否已赋值
                     * @return ClusterLevel 是否已赋值
                     * 
                     */
                    bool ClusterLevelHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreatedTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>集群标签信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>集群标签信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>集群的API Server的网络信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiServerNetwork <p>集群的API Server的网络信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ApiServerNetwork GetApiServerNetwork() const;

                    /**
                     * 判断参数 ApiServerNetwork 是否已赋值
                     * @return ApiServerNetwork 是否已赋值
                     * 
                     */
                    bool ApiServerNetworkHasBeenSet() const;

                    /**
                     * 获取<p>容器网络，在此集群中的所有Pod将与此网络连通</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContainerNetwork <p>容器网络，在此集群中的所有Pod将与此网络连通</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ContainerNetwork GetContainerNetwork() const;

                    /**
                     * 判断参数 ContainerNetwork 是否已赋值
                     * @return ContainerNetwork 是否已赋值
                     * 
                     */
                    bool ContainerNetworkHasBeenSet() const;

                private:

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>集群名称</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>集群描述</p>
                     */
                    std::string m_clusterDescription;
                    bool m_clusterDescriptionHasBeenSet;

                    /**
                     * <p>集群所属地域</p><p>枚举值：</p><ul><li>ap-shanghai： 上海地域</li><li>ap-nanjing： 南京地域</li></ul>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>DB Custom 集群状态</p><p>枚举值：</p><ul><li>Creating： 创建中</li><li>Running： 运行中</li><li>Destroying： 销毁中</li><li>Initializing： 初始化中</li></ul>
                     */
                    std::string m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * <p>集群版本</p><p>枚举值：</p><ul><li>1.34.1： 集群版本1.34.1</li></ul><p>默认值：1.34.1</p>
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * <p>集群下的节点数量</p>
                     */
                    int64_t m_clusterNodeNum;
                    bool m_clusterNodeNumHasBeenSet;

                    /**
                     * <p>集群规模</p>
                     */
                    std::string m_clusterLevel;
                    bool m_clusterLevelHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>集群标签信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>集群的API Server的网络信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ApiServerNetwork m_apiServerNetwork;
                    bool m_apiServerNetworkHasBeenSet;

                    /**
                     * <p>容器网络，在此集群中的所有Pod将与此网络连通</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ContainerNetwork m_containerNetwork;
                    bool m_containerNetworkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEDBCUSTOMCLUSTERDETAILRESPONSE_H_
