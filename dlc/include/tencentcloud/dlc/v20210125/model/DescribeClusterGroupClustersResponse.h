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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBECLUSTERGROUPCLUSTERSRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBECLUSTERGROUPCLUSTERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/RayClusterEntity.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeClusterGroupClusters返回参数结构体
                */
                class DescribeClusterGroupClustersResponse : public AbstractModel
                {
                public:
                    DescribeClusterGroupClustersResponse();
                    ~DescribeClusterGroupClustersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>活跃 cluster 总数</p>
                     * @return Count <p>活跃 cluster 总数</p>
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取<p>前 N 个样例</p>
                     * @return SampleClusters <p>前 N 个样例</p>
                     * 
                     */
                    std::vector<RayClusterEntity> GetSampleClusters() const;

                    /**
                     * 判断参数 SampleClusters 是否已赋值
                     * @return SampleClusters 是否已赋值
                     * 
                     */
                    bool SampleClustersHasBeenSet() const;

                private:

                    /**
                     * <p>活跃 cluster 总数</p>
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * <p>前 N 个样例</p>
                     */
                    std::vector<RayClusterEntity> m_sampleClusters;
                    bool m_sampleClustersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBECLUSTERGROUPCLUSTERSRESPONSE_H_
