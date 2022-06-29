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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBETOPL7ANALYSISDATARESPONSE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBETOPL7ANALYSISDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/TopDataRecord.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeTopL7AnalysisData返回参数结构体
                */
                class DescribeTopL7AnalysisDataResponse : public AbstractModel
                {
                public:
                    DescribeTopL7AnalysisDataResponse();
                    ~DescribeTopL7AnalysisDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取top详细数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data top详细数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TopDataRecord> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取查询维度
                     * @return Type 查询维度
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取查询指标
                     * @return MetricName 查询指标
                     */
                    std::string GetMetricName() const;

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     */
                    bool MetricNameHasBeenSet() const;

                private:

                    /**
                     * top详细数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TopDataRecord> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 查询维度
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 查询指标
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBETOPL7ANALYSISDATARESPONSE_H_
