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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_RESULTS_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_RESULTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssa/v20180608/model/AssetTypeStatistic.h>
#include <tencentcloud/ssa/v20180608/model/MappingResult.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 测绘结果
                */
                class Results : public AbstractModel
                {
                public:
                    Results();
                    ~Results() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取测绘类型统计
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Statistics 测绘类型统计
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AssetTypeStatistic> GetStatistics() const;

                    /**
                     * 设置测绘类型统计
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statistics 测绘类型统计
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatistics(const std::vector<AssetTypeStatistic>& _statistics);

                    /**
                     * 判断参数 Statistics 是否已赋值
                     * @return Statistics 是否已赋值
                     * 
                     */
                    bool StatisticsHasBeenSet() const;

                    /**
                     * 获取测绘结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Result 测绘结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MappingResult> GetResult() const;

                    /**
                     * 设置测绘结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _result 测绘结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResult(const std::vector<MappingResult>& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取测绘任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskCount 测绘任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTaskCount() const;

                    /**
                     * 设置测绘任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskCount 测绘任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskCount(const uint64_t& _taskCount);

                    /**
                     * 判断参数 TaskCount 是否已赋值
                     * @return TaskCount 是否已赋值
                     * 
                     */
                    bool TaskCountHasBeenSet() const;

                    /**
                     * 获取最大测绘任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskMaxCount 最大测绘任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTaskMaxCount() const;

                    /**
                     * 设置最大测绘任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskMaxCount 最大测绘任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskMaxCount(const uint64_t& _taskMaxCount);

                    /**
                     * 判断参数 TaskMaxCount 是否已赋值
                     * @return TaskMaxCount 是否已赋值
                     * 
                     */
                    bool TaskMaxCountHasBeenSet() const;

                private:

                    /**
                     * 测绘类型统计
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AssetTypeStatistic> m_statistics;
                    bool m_statisticsHasBeenSet;

                    /**
                     * 测绘结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MappingResult> m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 测绘任务数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_taskCount;
                    bool m_taskCountHasBeenSet;

                    /**
                     * 最大测绘任务数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_taskMaxCount;
                    bool m_taskMaxCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_RESULTS_H_
