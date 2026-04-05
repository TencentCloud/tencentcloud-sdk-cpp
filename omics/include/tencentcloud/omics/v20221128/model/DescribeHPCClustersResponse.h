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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_DESCRIBEHPCCLUSTERSRESPONSE_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_DESCRIBEHPCCLUSTERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/omics/v20221128/model/HPCCluster.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * DescribeHPCClusters返回参数结构体
                */
                class DescribeHPCClustersResponse : public AbstractModel
                {
                public:
                    DescribeHPCClustersResponse();
                    ~DescribeHPCClustersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取HPC集群。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Clusters HPC集群。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<HPCCluster> GetClusters() const;

                    /**
                     * 判断参数 Clusters 是否已赋值
                     * @return Clusters 是否已赋值
                     * 
                     */
                    bool ClustersHasBeenSet() const;

                    /**
                     * 获取符合条件的数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 符合条件的数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * HPC集群。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<HPCCluster> m_clusters;
                    bool m_clustersHasBeenSet;

                    /**
                     * 符合条件的数量。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_DESCRIBEHPCCLUSTERSRESPONSE_H_
