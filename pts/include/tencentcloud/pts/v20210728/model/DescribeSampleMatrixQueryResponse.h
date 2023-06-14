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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESAMPLEMATRIXQUERYRESPONSE_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESAMPLEMATRIXQUERYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/CustomSampleMatrix.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * DescribeSampleMatrixQuery返回参数结构体
                */
                class DescribeSampleMatrixQueryResponse : public AbstractModel
                {
                public:
                    DescribeSampleMatrixQueryResponse();
                    ~DescribeSampleMatrixQueryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取指标矩阵
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetricSampleMatrix 指标矩阵
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CustomSampleMatrix GetMetricSampleMatrix() const;

                    /**
                     * 判断参数 MetricSampleMatrix 是否已赋值
                     * @return MetricSampleMatrix 是否已赋值
                     * 
                     */
                    bool MetricSampleMatrixHasBeenSet() const;

                private:

                    /**
                     * 指标矩阵
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CustomSampleMatrix m_metricSampleMatrix;
                    bool m_metricSampleMatrixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESAMPLEMATRIXQUERYRESPONSE_H_
