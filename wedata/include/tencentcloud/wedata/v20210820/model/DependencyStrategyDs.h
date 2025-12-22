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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DEPENDENCYSTRATEGYDS_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DEPENDENCYSTRATEGYDS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/DependencyConfigTimeoutDTO.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 依赖配置策略
                */
                class DependencyStrategyDs : public AbstractModel
                {
                public:
                    DependencyStrategyDs();
                    ~DependencyStrategyDs() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取等待上游任务实例策略：EXECUTING（执行）；WAITING（等待）

注意：此字段可能返回 null，表示取不到有效值。
                     * @return PollingNullStrategy 等待上游任务实例策略：EXECUTING（执行）；WAITING（等待）

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPollingNullStrategy() const;

                    /**
                     * 设置等待上游任务实例策略：EXECUTING（执行）；WAITING（等待）

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pollingNullStrategy 等待上游任务实例策略：EXECUTING（执行）；WAITING（等待）

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPollingNullStrategy(const std::string& _pollingNullStrategy);

                    /**
                     * 判断参数 PollingNullStrategy 是否已赋值
                     * @return PollingNullStrategy 是否已赋值
                     * 
                     */
                    bool PollingNullStrategyHasBeenSet() const;

                    /**
                     * 获取仅当PollingNullStrategy为EXECUTING时才需要填本字段，List类型：NOT_EXIST（默认，在分钟依赖分钟/小时依赖小时的情况下，父实例不在下游实例调度时间范围内）；PARENT_EXPIRED（父实例失败）；PARENT_TIMEOUT（父实例超时）。以上场景满足任一条件即可通过该父任务实例依赖判断，除以上场景外均需等待父实例。

注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskDependencyExecutingStrategies 仅当PollingNullStrategy为EXECUTING时才需要填本字段，List类型：NOT_EXIST（默认，在分钟依赖分钟/小时依赖小时的情况下，父实例不在下游实例调度时间范围内）；PARENT_EXPIRED（父实例失败）；PARENT_TIMEOUT（父实例超时）。以上场景满足任一条件即可通过该父任务实例依赖判断，除以上场景外均需等待父实例。

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTaskDependencyExecutingStrategies() const;

                    /**
                     * 设置仅当PollingNullStrategy为EXECUTING时才需要填本字段，List类型：NOT_EXIST（默认，在分钟依赖分钟/小时依赖小时的情况下，父实例不在下游实例调度时间范围内）；PARENT_EXPIRED（父实例失败）；PARENT_TIMEOUT（父实例超时）。以上场景满足任一条件即可通过该父任务实例依赖判断，除以上场景外均需等待父实例。

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskDependencyExecutingStrategies 仅当PollingNullStrategy为EXECUTING时才需要填本字段，List类型：NOT_EXIST（默认，在分钟依赖分钟/小时依赖小时的情况下，父实例不在下游实例调度时间范围内）；PARENT_EXPIRED（父实例失败）；PARENT_TIMEOUT（父实例超时）。以上场景满足任一条件即可通过该父任务实例依赖判断，除以上场景外均需等待父实例。

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskDependencyExecutingStrategies(const std::vector<std::string>& _taskDependencyExecutingStrategies);

                    /**
                     * 判断参数 TaskDependencyExecutingStrategies 是否已赋值
                     * @return TaskDependencyExecutingStrategies 是否已赋值
                     * 
                     */
                    bool TaskDependencyExecutingStrategiesHasBeenSet() const;

                    /**
                     * 获取仅当TaskDependencyExecutingStrategies中包含PARENT_TIMEOUT时才需要填本字段，下游任务依赖父实例执行超时时间，单位：分钟。

注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskDependencyExecutingTimeoutValue 仅当TaskDependencyExecutingStrategies中包含PARENT_TIMEOUT时才需要填本字段，下游任务依赖父实例执行超时时间，单位：分钟。

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTaskDependencyExecutingTimeoutValue() const;

                    /**
                     * 设置仅当TaskDependencyExecutingStrategies中包含PARENT_TIMEOUT时才需要填本字段，下游任务依赖父实例执行超时时间，单位：分钟。

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskDependencyExecutingTimeoutValue 仅当TaskDependencyExecutingStrategies中包含PARENT_TIMEOUT时才需要填本字段，下游任务依赖父实例执行超时时间，单位：分钟。

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskDependencyExecutingTimeoutValue(const int64_t& _taskDependencyExecutingTimeoutValue);

                    /**
                     * 判断参数 TaskDependencyExecutingTimeoutValue 是否已赋值
                     * @return TaskDependencyExecutingTimeoutValue 是否已赋值
                     * 
                     */
                    bool TaskDependencyExecutingTimeoutValueHasBeenSet() const;

                    /**
                     * 获取超时依赖策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependencyConfigTimeoutTypeList 超时依赖策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DependencyConfigTimeoutDTO> GetDependencyConfigTimeoutTypeList() const;

                    /**
                     * 设置超时依赖策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependencyConfigTimeoutTypeList 超时依赖策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDependencyConfigTimeoutTypeList(const std::vector<DependencyConfigTimeoutDTO>& _dependencyConfigTimeoutTypeList);

                    /**
                     * 判断参数 DependencyConfigTimeoutTypeList 是否已赋值
                     * @return DependencyConfigTimeoutTypeList 是否已赋值
                     * 
                     */
                    bool DependencyConfigTimeoutTypeListHasBeenSet() const;

                private:

                    /**
                     * 等待上游任务实例策略：EXECUTING（执行）；WAITING（等待）

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pollingNullStrategy;
                    bool m_pollingNullStrategyHasBeenSet;

                    /**
                     * 仅当PollingNullStrategy为EXECUTING时才需要填本字段，List类型：NOT_EXIST（默认，在分钟依赖分钟/小时依赖小时的情况下，父实例不在下游实例调度时间范围内）；PARENT_EXPIRED（父实例失败）；PARENT_TIMEOUT（父实例超时）。以上场景满足任一条件即可通过该父任务实例依赖判断，除以上场景外均需等待父实例。

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_taskDependencyExecutingStrategies;
                    bool m_taskDependencyExecutingStrategiesHasBeenSet;

                    /**
                     * 仅当TaskDependencyExecutingStrategies中包含PARENT_TIMEOUT时才需要填本字段，下游任务依赖父实例执行超时时间，单位：分钟。

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_taskDependencyExecutingTimeoutValue;
                    bool m_taskDependencyExecutingTimeoutValueHasBeenSet;

                    /**
                     * 超时依赖策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DependencyConfigTimeoutDTO> m_dependencyConfigTimeoutTypeList;
                    bool m_dependencyConfigTimeoutTypeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DEPENDENCYSTRATEGYDS_H_
