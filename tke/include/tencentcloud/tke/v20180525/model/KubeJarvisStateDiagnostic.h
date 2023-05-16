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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_KUBEJARVISSTATEDIAGNOSTIC_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_KUBEJARVISSTATEDIAGNOSTIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/KubeJarvisStateCatalogue.h>
#include <tencentcloud/tke/v20180525/model/KubeJarvisStateResultsItem.h>
#include <tencentcloud/tke/v20180525/model/KubeJarvisStateStatistic.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 集群巡检诊断结果
                */
                class KubeJarvisStateDiagnostic : public AbstractModel
                {
                public:
                    KubeJarvisStateDiagnostic();
                    ~KubeJarvisStateDiagnostic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取诊断开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 诊断开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置诊断开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StartTime 诊断开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取诊断结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 诊断结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置诊断结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EndTime 诊断结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取诊断目录
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Catalogues 诊断目录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KubeJarvisStateCatalogue> GetCatalogues() const;

                    /**
                     * 设置诊断目录
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Catalogues 诊断目录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCatalogues(const std::vector<KubeJarvisStateCatalogue>& _catalogues);

                    /**
                     * 判断参数 Catalogues 是否已赋值
                     * @return Catalogues 是否已赋值
                     */
                    bool CataloguesHasBeenSet() const;

                    /**
                     * 获取诊断类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 诊断类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetType() const;

                    /**
                     * 设置诊断类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Type 诊断类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取诊断名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 诊断名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置诊断名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 诊断名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取诊断描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Desc 诊断描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置诊断描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Desc 诊断描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取诊断结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Results 诊断结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KubeJarvisStateResultsItem> GetResults() const;

                    /**
                     * 设置诊断结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Results 诊断结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResults(const std::vector<KubeJarvisStateResultsItem>& _results);

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     */
                    bool ResultsHasBeenSet() const;

                    /**
                     * 获取诊断结果统计
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Statistics 诊断结果统计
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KubeJarvisStateStatistic> GetStatistics() const;

                    /**
                     * 设置诊断结果统计
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Statistics 诊断结果统计
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatistics(const std::vector<KubeJarvisStateStatistic>& _statistics);

                    /**
                     * 判断参数 Statistics 是否已赋值
                     * @return Statistics 是否已赋值
                     */
                    bool StatisticsHasBeenSet() const;

                private:

                    /**
                     * 诊断开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 诊断结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 诊断目录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KubeJarvisStateCatalogue> m_catalogues;
                    bool m_cataloguesHasBeenSet;

                    /**
                     * 诊断类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 诊断名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 诊断描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 诊断结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KubeJarvisStateResultsItem> m_results;
                    bool m_resultsHasBeenSet;

                    /**
                     * 诊断结果统计
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KubeJarvisStateStatistic> m_statistics;
                    bool m_statisticsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_KUBEJARVISSTATEDIAGNOSTIC_H_
