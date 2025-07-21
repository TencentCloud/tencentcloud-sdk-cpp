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

#ifndef TENCENTCLOUD_CTSDB_V20230202_MODEL_DESCRIBECLUSTERSRESPONSE_H_
#define TENCENTCLOUD_CTSDB_V20230202_MODEL_DESCRIBECLUSTERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ctsdb/v20230202/model/Cluster.h>


namespace TencentCloud
{
    namespace Ctsdb
    {
        namespace V20230202
        {
            namespace Model
            {
                /**
                * DescribeClusters返回参数结构体
                */
                class DescribeClustersResponse : public AbstractModel
                {
                public:
                    DescribeClustersResponse();
                    ~DescribeClustersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取当前条件下的总记录数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 当前条件下的总记录数
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

                    /**
                     * 获取符合条件的实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Clusters 符合条件的实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Cluster> GetClusters() const;

                    /**
                     * 判断参数 Clusters 是否已赋值
                     * @return Clusters 是否已赋值
                     * 
                     */
                    bool ClustersHasBeenSet() const;

                private:

                    /**
                     * 当前条件下的总记录数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 符合条件的实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Cluster> m_clusters;
                    bool m_clustersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTSDB_V20230202_MODEL_DESCRIBECLUSTERSRESPONSE_H_
