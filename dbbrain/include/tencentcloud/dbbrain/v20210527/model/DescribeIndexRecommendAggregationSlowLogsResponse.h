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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEINDEXRECOMMENDAGGREGATIONSLOWLOGSRESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEINDEXRECOMMENDAGGREGATIONSLOWLOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/Aggregation.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeIndexRecommendAggregationSlowLogs返回参数结构体
                */
                class DescribeIndexRecommendAggregationSlowLogsResponse : public AbstractModel
                {
                public:
                    DescribeIndexRecommendAggregationSlowLogsResponse();
                    ~DescribeIndexRecommendAggregationSlowLogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询实例慢查询聚合结果。
                     * @return Aggregation 查询实例慢查询聚合结果。
                     * 
                     */
                    Aggregation GetAggregation() const;

                    /**
                     * 判断参数 Aggregation 是否已赋值
                     * @return Aggregation 是否已赋值
                     * 
                     */
                    bool AggregationHasBeenSet() const;

                private:

                    /**
                     * 查询实例慢查询聚合结果。
                     */
                    Aggregation m_aggregation;
                    bool m_aggregationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEINDEXRECOMMENDAGGREGATIONSLOWLOGSRESPONSE_H_
