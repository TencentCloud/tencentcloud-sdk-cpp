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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEEXCLUSIVECLUSTERSRESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEEXCLUSIVECLUSTERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/Cluster.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeExclusiveClusters返回参数结构体
                */
                class DescribeExclusiveClustersResponse : public AbstractModel
                {
                public:
                    DescribeExclusiveClustersResponse();
                    ~DescribeExclusiveClustersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群列表。
                     * @return ClusterSet 集群列表。
                     * 
                     */
                    std::vector<Cluster> GetClusterSet() const;

                    /**
                     * 判断参数 ClusterSet 是否已赋值
                     * @return ClusterSet 是否已赋值
                     * 
                     */
                    bool ClusterSetHasBeenSet() const;

                    /**
                     * 获取集群总数量。
                     * @return TotalCount 集群总数量。
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
                     * 集群列表。
                     */
                    std::vector<Cluster> m_clusterSet;
                    bool m_clusterSetHasBeenSet;

                    /**
                     * 集群总数量。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEEXCLUSIVECLUSTERSRESPONSE_H_
