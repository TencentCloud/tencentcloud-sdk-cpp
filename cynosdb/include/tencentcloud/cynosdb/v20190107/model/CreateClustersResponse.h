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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATECLUSTERSRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATECLUSTERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * CreateClusters返回参数结构体
                */
                class CreateClustersResponse : public AbstractModel
                {
                public:
                    CreateClustersResponse();
                    ~CreateClustersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>冻结流水ID</p>
                     * @return TranId <p>冻结流水ID</p>
                     * 
                     */
                    std::string GetTranId() const;

                    /**
                     * 判断参数 TranId 是否已赋值
                     * @return TranId 是否已赋值
                     * 
                     */
                    bool TranIdHasBeenSet() const;

                    /**
                     * 获取<p>订单号</p>
                     * @return DealNames <p>订单号</p>
                     * 
                     */
                    std::vector<std::string> GetDealNames() const;

                    /**
                     * 判断参数 DealNames 是否已赋值
                     * @return DealNames 是否已赋值
                     * 
                     */
                    bool DealNamesHasBeenSet() const;

                    /**
                     * 获取<p>资源ID列表（该字段已不再维护，请使用dealNames字段查询接口DescribeResourcesByDealName获取资源ID）</p>
                     * @return ResourceIds <p>资源ID列表（该字段已不再维护，请使用dealNames字段查询接口DescribeResourcesByDealName获取资源ID）</p>
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取<p>集群ID列表（该字段已不再维护，请使用dealNames字段查询接口DescribeResourcesByDealName获取集群ID）</p>
                     * @return ClusterIds <p>集群ID列表（该字段已不再维护，请使用dealNames字段查询接口DescribeResourcesByDealName获取集群ID）</p>
                     * 
                     */
                    std::vector<std::string> GetClusterIds() const;

                    /**
                     * 判断参数 ClusterIds 是否已赋值
                     * @return ClusterIds 是否已赋值
                     * 
                     */
                    bool ClusterIdsHasBeenSet() const;

                    /**
                     * 获取<p>大订单号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BigDealIds <p>大订单号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetBigDealIds() const;

                    /**
                     * 判断参数 BigDealIds 是否已赋值
                     * @return BigDealIds 是否已赋值
                     * 
                     */
                    bool BigDealIdsHasBeenSet() const;

                private:

                    /**
                     * <p>冻结流水ID</p>
                     */
                    std::string m_tranId;
                    bool m_tranIdHasBeenSet;

                    /**
                     * <p>订单号</p>
                     */
                    std::vector<std::string> m_dealNames;
                    bool m_dealNamesHasBeenSet;

                    /**
                     * <p>资源ID列表（该字段已不再维护，请使用dealNames字段查询接口DescribeResourcesByDealName获取资源ID）</p>
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * <p>集群ID列表（该字段已不再维护，请使用dealNames字段查询接口DescribeResourcesByDealName获取集群ID）</p>
                     */
                    std::vector<std::string> m_clusterIds;
                    bool m_clusterIdsHasBeenSet;

                    /**
                     * <p>大订单号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_bigDealIds;
                    bool m_bigDealIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATECLUSTERSRESPONSE_H_
