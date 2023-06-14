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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_CRONSCALEJOB_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_CRONSCALEJOB_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 定时扩缩任务
                */
                class CronScaleJob : public AbstractModel
                {
                public:
                    CronScaleJob();
                    ~CronScaleJob() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cron表达式，标识任务的执行时间，精确到分钟级
                     * @return Schedule Cron表达式，标识任务的执行时间，精确到分钟级
                     * 
                     */
                    std::string GetSchedule() const;

                    /**
                     * 设置Cron表达式，标识任务的执行时间，精确到分钟级
                     * @param _schedule Cron表达式，标识任务的执行时间，精确到分钟级
                     * 
                     */
                    void SetSchedule(const std::string& _schedule);

                    /**
                     * 判断参数 Schedule 是否已赋值
                     * @return Schedule 是否已赋值
                     * 
                     */
                    bool ScheduleHasBeenSet() const;

                    /**
                     * 获取定时任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 定时任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置定时任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 定时任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取目标实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetReplicas 目标实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTargetReplicas() const;

                    /**
                     * 设置目标实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetReplicas 目标实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetReplicas(const int64_t& _targetReplicas);

                    /**
                     * 判断参数 TargetReplicas 是否已赋值
                     * @return TargetReplicas 是否已赋值
                     * 
                     */
                    bool TargetReplicasHasBeenSet() const;

                    /**
                     * 获取目标min
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinReplicas 目标min
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMinReplicas() const;

                    /**
                     * 设置目标min
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _minReplicas 目标min
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMinReplicas(const int64_t& _minReplicas);

                    /**
                     * 判断参数 MinReplicas 是否已赋值
                     * @return MinReplicas 是否已赋值
                     * 
                     */
                    bool MinReplicasHasBeenSet() const;

                    /**
                     * 获取目标max
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxReplicas 目标max
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxReplicas() const;

                    /**
                     * 设置目标max
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxReplicas 目标max
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxReplicas(const int64_t& _maxReplicas);

                    /**
                     * 判断参数 MaxReplicas 是否已赋值
                     * @return MaxReplicas 是否已赋值
                     * 
                     */
                    bool MaxReplicasHasBeenSet() const;

                    /**
                     * 获取例外时间，Cron表达式，在对应时间内不执行任务。最多支持3条。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExcludeDates 例外时间，Cron表达式，在对应时间内不执行任务。最多支持3条。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetExcludeDates() const;

                    /**
                     * 设置例外时间，Cron表达式，在对应时间内不执行任务。最多支持3条。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _excludeDates 例外时间，Cron表达式，在对应时间内不执行任务。最多支持3条。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExcludeDates(const std::vector<std::string>& _excludeDates);

                    /**
                     * 判断参数 ExcludeDates 是否已赋值
                     * @return ExcludeDates 是否已赋值
                     * 
                     */
                    bool ExcludeDatesHasBeenSet() const;

                private:

                    /**
                     * Cron表达式，标识任务的执行时间，精确到分钟级
                     */
                    std::string m_schedule;
                    bool m_scheduleHasBeenSet;

                    /**
                     * 定时任务名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 目标实例数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_targetReplicas;
                    bool m_targetReplicasHasBeenSet;

                    /**
                     * 目标min
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_minReplicas;
                    bool m_minReplicasHasBeenSet;

                    /**
                     * 目标max
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxReplicas;
                    bool m_maxReplicasHasBeenSet;

                    /**
                     * 例外时间，Cron表达式，在对应时间内不执行任务。最多支持3条。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_excludeDates;
                    bool m_excludeDatesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_CRONSCALEJOB_H_
