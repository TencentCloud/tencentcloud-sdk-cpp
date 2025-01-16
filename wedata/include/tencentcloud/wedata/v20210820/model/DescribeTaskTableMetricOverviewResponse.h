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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKTABLEMETRICOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKTABLEMETRICOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskTableMetricInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeTaskTableMetricOverview返回参数结构体
                */
                class DescribeTaskTableMetricOverviewResponse : public AbstractModel
                {
                public:
                    DescribeTaskTableMetricOverviewResponse();
                    ~DescribeTaskTableMetricOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取表粒度指标集合
                     * @return TaskTableMetricInfos 表粒度指标集合
                     * 
                     */
                    std::vector<TaskTableMetricInfo> GetTaskTableMetricInfos() const;

                    /**
                     * 判断参数 TaskTableMetricInfos 是否已赋值
                     * @return TaskTableMetricInfos 是否已赋值
                     * 
                     */
                    bool TaskTableMetricInfosHasBeenSet() const;

                    /**
                     * 获取总数
                     * @return TotalCount 总数
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
                     * 获取返回列表类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetricType 返回列表类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMetricType() const;

                    /**
                     * 判断参数 MetricType 是否已赋值
                     * @return MetricType 是否已赋值
                     * 
                     */
                    bool MetricTypeHasBeenSet() const;

                private:

                    /**
                     * 表粒度指标集合
                     */
                    std::vector<TaskTableMetricInfo> m_taskTableMetricInfos;
                    bool m_taskTableMetricInfosHasBeenSet;

                    /**
                     * 总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 返回列表类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metricType;
                    bool m_metricTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKTABLEMETRICOVERVIEWRESPONSE_H_
