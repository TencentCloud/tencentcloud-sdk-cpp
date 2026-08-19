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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINECLUSTERASSET_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINECLUSTERASSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 基线集群资产。
                */
                class BaselineClusterAsset : public AbstractModel
                {
                public:
                    BaselineClusterAsset();
                    ~BaselineClusterAsset() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>集群 ID。</p>
                     * @return ClusterID <p>集群 ID。</p>
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置<p>集群 ID。</p>
                     * @param _clusterID <p>集群 ID。</p>
                     * 
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取<p>集群名称。</p>
                     * @return ClusterName <p>集群名称。</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>集群名称。</p>
                     * @param _clusterName <p>集群名称。</p>
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
                     * 获取<p>集群类型。</p>
                     * @return ClusterType <p>集群类型。</p>
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置<p>集群类型。</p>
                     * @param _clusterType <p>集群类型。</p>
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取<p>集群节点总数。</p>
                     * @return NodeCount <p>集群节点总数。</p>
                     * 
                     */
                    uint64_t GetNodeCount() const;

                    /**
                     * 设置<p>集群节点总数。</p>
                     * @param _nodeCount <p>集群节点总数。</p>
                     * 
                     */
                    void SetNodeCount(const uint64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取<p>集群在线节点数。</p>
                     * @return OnlineNodeCount <p>集群在线节点数。</p>
                     * 
                     */
                    uint64_t GetOnlineNodeCount() const;

                    /**
                     * 设置<p>集群在线节点数。</p>
                     * @param _onlineNodeCount <p>集群在线节点数。</p>
                     * 
                     */
                    void SetOnlineNodeCount(const uint64_t& _onlineNodeCount);

                    /**
                     * 判断参数 OnlineNodeCount 是否已赋值
                     * @return OnlineNodeCount 是否已赋值
                     * 
                     */
                    bool OnlineNodeCountHasBeenSet() const;

                    /**
                     * 获取<p>集群所属租户 Appid。</p>
                     * @return Appid <p>集群所属租户 Appid。</p>
                     * 
                     */
                    uint64_t GetAppid() const;

                    /**
                     * 设置<p>集群所属租户 Appid。</p>
                     * @param _appid <p>集群所属租户 Appid。</p>
                     * 
                     */
                    void SetAppid(const uint64_t& _appid);

                    /**
                     * 判断参数 Appid 是否已赋值
                     * @return Appid 是否已赋值
                     * 
                     */
                    bool AppidHasBeenSet() const;

                    /**
                     * 获取<p>集群子资产名称（Pod名/Node名/Container名/Namespace名；CLUSTER 类型时为集群名）。</p>
                     * @return AssetName <p>集群子资产名称（Pod名/Node名/Container名/Namespace名；CLUSTER 类型时为集群名）。</p>
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置<p>集群子资产名称（Pod名/Node名/Container名/Namespace名；CLUSTER 类型时为集群名）。</p>
                     * @param _assetName <p>集群子资产名称（Pod名/Node名/Container名/Namespace名；CLUSTER 类型时为集群名）。</p>
                     * 
                     */
                    void SetAssetName(const std::string& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                private:

                    /**
                     * <p>集群 ID。</p>
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * <p>集群名称。</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>集群类型。</p>
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * <p>集群节点总数。</p>
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * <p>集群在线节点数。</p>
                     */
                    uint64_t m_onlineNodeCount;
                    bool m_onlineNodeCountHasBeenSet;

                    /**
                     * <p>集群所属租户 Appid。</p>
                     */
                    uint64_t m_appid;
                    bool m_appidHasBeenSet;

                    /**
                     * <p>集群子资产名称（Pod名/Node名/Container名/Namespace名；CLUSTER 类型时为集群名）。</p>
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINECLUSTERASSET_H_
