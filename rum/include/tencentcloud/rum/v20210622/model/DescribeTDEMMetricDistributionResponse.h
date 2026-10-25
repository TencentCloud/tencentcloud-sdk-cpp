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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMMETRICDISTRIBUTIONRESPONSE_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMMETRICDISTRIBUTIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/MetricDistributionItem.h>
#include <tencentcloud/rum/v20210622/model/MetricDistributionBatchItem.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeTDEMMetricDistribution返回参数结构体
                */
                class DescribeTDEMMetricDistributionResponse : public AbstractModel
                {
                public:
                    DescribeTDEMMetricDistributionResponse();
                    ~DescribeTDEMMetricDistributionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>单查分布桶</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Items <p>单查分布桶</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MetricDistributionItem> GetItems() const;

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取<p>单查合计，批量为空时省略</p>
                     * @return Total <p>单查合计，批量为空时省略</p>
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取<p>批量结果，Queries 非空时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Results <p>批量结果，Queries 非空时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MetricDistributionBatchItem> GetResults() const;

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     * 
                     */
                    bool ResultsHasBeenSet() const;

                private:

                    /**
                     * <p>单查分布桶</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MetricDistributionItem> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * <p>单查合计，批量为空时省略</p>
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * <p>批量结果，Queries 非空时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MetricDistributionBatchItem> m_results;
                    bool m_resultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMMETRICDISTRIBUTIONRESPONSE_H_
