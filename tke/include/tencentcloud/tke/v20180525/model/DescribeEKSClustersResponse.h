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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEKSCLUSTERSRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEKSCLUSTERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/EksCluster.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeEKSClusters返回参数结构体
                */
                class DescribeEKSClustersResponse : public AbstractModel
                {
                public:
                    DescribeEKSClustersResponse();
                    ~DescribeEKSClustersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群总个数
                     * @return TotalCount 集群总个数
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
                     * 获取集群信息列表
                     * @return Clusters 集群信息列表
                     * 
                     */
                    std::vector<EksCluster> GetClusters() const;

                    /**
                     * 判断参数 Clusters 是否已赋值
                     * @return Clusters 是否已赋值
                     * 
                     */
                    bool ClustersHasBeenSet() const;

                private:

                    /**
                     * 集群总个数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 集群信息列表
                     */
                    std::vector<EksCluster> m_clusters;
                    bool m_clustersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEKSCLUSTERSRESPONSE_H_
