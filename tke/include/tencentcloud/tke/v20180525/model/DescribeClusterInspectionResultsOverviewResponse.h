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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERINSPECTIONRESULTSOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERINSPECTIONRESULTSOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/KubeJarvisStateStatistic.h>
#include <tencentcloud/tke/v20180525/model/KubeJarvisStateDiagnosticOverview.h>
#include <tencentcloud/tke/v20180525/model/KubeJarvisStateInspectionOverview.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeClusterInspectionResultsOverview返回参数结构体
                */
                class DescribeClusterInspectionResultsOverviewResponse : public AbstractModel
                {
                public:
                    DescribeClusterInspectionResultsOverviewResponse();
                    ~DescribeClusterInspectionResultsOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取诊断结果统计
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Statistics 诊断结果统计
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KubeJarvisStateStatistic> GetStatistics() const;

                    /**
                     * 判断参数 Statistics 是否已赋值
                     * @return Statistics 是否已赋值
                     * 
                     */
                    bool StatisticsHasBeenSet() const;

                    /**
                     * 获取诊断结果概览
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Diagnostics 诊断结果概览
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KubeJarvisStateDiagnosticOverview> GetDiagnostics() const;

                    /**
                     * 判断参数 Diagnostics 是否已赋值
                     * @return Diagnostics 是否已赋值
                     * 
                     */
                    bool DiagnosticsHasBeenSet() const;

                    /**
                     * 获取集群诊断结果概览
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InspectionOverview 集群诊断结果概览
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KubeJarvisStateInspectionOverview> GetInspectionOverview() const;

                    /**
                     * 判断参数 InspectionOverview 是否已赋值
                     * @return InspectionOverview 是否已赋值
                     * 
                     */
                    bool InspectionOverviewHasBeenSet() const;

                private:

                    /**
                     * 诊断结果统计
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KubeJarvisStateStatistic> m_statistics;
                    bool m_statisticsHasBeenSet;

                    /**
                     * 诊断结果概览
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KubeJarvisStateDiagnosticOverview> m_diagnostics;
                    bool m_diagnosticsHasBeenSet;

                    /**
                     * 集群诊断结果概览
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KubeJarvisStateInspectionOverview> m_inspectionOverview;
                    bool m_inspectionOverviewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERINSPECTIONRESULTSOVERVIEWRESPONSE_H_
