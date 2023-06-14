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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEBINDCLUSTERSRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEBINDCLUSTERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/BindCluster.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeBindClusters返回参数结构体
                */
                class DescribeBindClustersResponse : public AbstractModel
                {
                public:
                    DescribeBindClustersResponse();
                    ~DescribeBindClustersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取专享集群的数量
                     * @return TotalCount 专享集群的数量
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取专享集群的列表
                     * @return ClusterSet 专享集群的列表
                     * 
                     */
                    std::vector<BindCluster> GetClusterSet() const;

                    /**
                     * 判断参数 ClusterSet 是否已赋值
                     * @return ClusterSet 是否已赋值
                     * 
                     */
                    bool ClusterSetHasBeenSet() const;

                private:

                    /**
                     * 专享集群的数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 专享集群的列表
                     */
                    std::vector<BindCluster> m_clusterSet;
                    bool m_clusterSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEBINDCLUSTERSRESPONSE_H_
