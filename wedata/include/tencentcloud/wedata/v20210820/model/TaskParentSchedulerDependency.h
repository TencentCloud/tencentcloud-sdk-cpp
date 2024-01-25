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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKPARENTSCHEDULERDEPENDENCY_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKPARENTSCHEDULERDEPENDENCY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 父任务配置
                */
                class TaskParentSchedulerDependency : public AbstractModel
                {
                public:
                    TaskParentSchedulerDependency();
                    ~TaskParentSchedulerDependency() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取父任务ID
                     * @return ParentId 父任务ID
                     * 
                     */
                    std::string GetParentId() const;

                    /**
                     * 设置父任务ID
                     * @param _parentId 父任务ID
                     * 
                     */
                    void SetParentId(const std::string& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取周期类型
                     * @return CycleType 周期类型
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置周期类型
                     * @param _cycleType 周期类型
                     * 
                     */
                    void SetCycleType(const std::string& _cycleType);

                    /**
                     * 判断参数 CycleType 是否已赋值
                     * @return CycleType 是否已赋值
                     * 
                     */
                    bool CycleTypeHasBeenSet() const;

                    /**
                     * 获取周期步长
                     * @return CycleStep 周期步长
                     * 
                     */
                    int64_t GetCycleStep() const;

                    /**
                     * 设置周期步长
                     * @param _cycleStep 周期步长
                     * 
                     */
                    void SetCycleStep(const int64_t& _cycleStep);

                    /**
                     * 判断参数 CycleStep 是否已赋值
                     * @return CycleStep 是否已赋值
                     * 
                     */
                    bool CycleStepHasBeenSet() const;

                    /**
                     * 获取该值不填
                     * @return NormalizedJobStartTime 该值不填
                     * 
                     */
                    std::string GetNormalizedJobStartTime() const;

                    /**
                     * 设置该值不填
                     * @param _normalizedJobStartTime 该值不填
                     * 
                     */
                    void SetNormalizedJobStartTime(const std::string& _normalizedJobStartTime);

                    /**
                     * 判断参数 NormalizedJobStartTime 是否已赋值
                     * @return NormalizedJobStartTime 是否已赋值
                     * 
                     */
                    bool NormalizedJobStartTimeHasBeenSet() const;

                    /**
                     * 获取任务Action
                     * @return TaskAction 任务Action
                     * 
                     */
                    std::string GetTaskAction() const;

                    /**
                     * 设置任务Action
                     * @param _taskAction 任务Action
                     * 
                     */
                    void SetTaskAction(const std::string& _taskAction);

                    /**
                     * 判断参数 TaskAction 是否已赋值
                     * @return TaskAction 是否已赋值
                     * 
                     */
                    bool TaskActionHasBeenSet() const;

                    /**
                     * 获取依赖值
                     * @return SubordinateCyclicConfig 依赖值
                     * 
                     */
                    std::string GetSubordinateCyclicConfig() const;

                    /**
                     * 设置依赖值
                     * @param _subordinateCyclicConfig 依赖值
                     * 
                     */
                    void SetSubordinateCyclicConfig(const std::string& _subordinateCyclicConfig);

                    /**
                     * 判断参数 SubordinateCyclicConfig 是否已赋值
                     * @return SubordinateCyclicConfig 是否已赋值
                     * 
                     */
                    bool SubordinateCyclicConfigHasBeenSet() const;

                    /**
                     * 获取空值策略
                     * @return PollingNullStrategy 空值策略
                     * 
                     */
                    std::string GetPollingNullStrategy() const;

                    /**
                     * 设置空值策略
                     * @param _pollingNullStrategy 空值策略
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
                     * 获取依赖配置类型
                     * @return DependConfType 依赖配置类型
                     * 
                     */
                    std::string GetDependConfType() const;

                    /**
                     * 设置依赖配置类型
                     * @param _dependConfType 依赖配置类型
                     * 
                     */
                    void SetDependConfType(const std::string& _dependConfType);

                    /**
                     * 判断参数 DependConfType 是否已赋值
                     * @return DependConfType 是否已赋值
                     * 
                     */
                    bool DependConfTypeHasBeenSet() const;

                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    std::string GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
                     * 
                     */
                    void SetOffset(const std::string& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取主循环配置
                     * @return MainCyclicConfig 主循环配置
                     * 
                     */
                    std::string GetMainCyclicConfig() const;

                    /**
                     * 设置主循环配置
                     * @param _mainCyclicConfig 主循环配置
                     * 
                     */
                    void SetMainCyclicConfig(const std::string& _mainCyclicConfig);

                    /**
                     * 判断参数 MainCyclicConfig 是否已赋值
                     * @return MainCyclicConfig 是否已赋值
                     * 
                     */
                    bool MainCyclicConfigHasBeenSet() const;

                    /**
                     * 获取延迟时间
                     * @return DelayTime 延迟时间
                     * 
                     */
                    int64_t GetDelayTime() const;

                    /**
                     * 设置延迟时间
                     * @param _delayTime 延迟时间
                     * 
                     */
                    void SetDelayTime(const int64_t& _delayTime);

                    /**
                     * 判断参数 DelayTime 是否已赋值
                     * @return DelayTime 是否已赋值
                     * 
                     */
                    bool DelayTimeHasBeenSet() const;

                    /**
                     * 获取周期类型为小时的时候需要设置当天的开始时间
                     * @return ExecutionStartTime 周期类型为小时的时候需要设置当天的开始时间
                     * 
                     */
                    std::string GetExecutionStartTime() const;

                    /**
                     * 设置周期类型为小时的时候需要设置当天的开始时间
                     * @param _executionStartTime 周期类型为小时的时候需要设置当天的开始时间
                     * 
                     */
                    void SetExecutionStartTime(const std::string& _executionStartTime);

                    /**
                     * 判断参数 ExecutionStartTime 是否已赋值
                     * @return ExecutionStartTime 是否已赋值
                     * 
                     */
                    bool ExecutionStartTimeHasBeenSet() const;

                    /**
                     * 获取周期类型为小时的时候需要设置当天的结束时间
                     * @return ExecutionEndTime 周期类型为小时的时候需要设置当天的结束时间
                     * 
                     */
                    std::string GetExecutionEndTime() const;

                    /**
                     * 设置周期类型为小时的时候需要设置当天的结束时间
                     * @param _executionEndTime 周期类型为小时的时候需要设置当天的结束时间
                     * 
                     */
                    void SetExecutionEndTime(const std::string& _executionEndTime);

                    /**
                     * 判断参数 ExecutionEndTime 是否已赋值
                     * @return ExecutionEndTime 是否已赋值
                     * 
                     */
                    bool ExecutionEndTimeHasBeenSet() const;

                private:

                    /**
                     * 父任务ID
                     */
                    std::string m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 周期类型
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * 周期步长
                     */
                    int64_t m_cycleStep;
                    bool m_cycleStepHasBeenSet;

                    /**
                     * 该值不填
                     */
                    std::string m_normalizedJobStartTime;
                    bool m_normalizedJobStartTimeHasBeenSet;

                    /**
                     * 任务Action
                     */
                    std::string m_taskAction;
                    bool m_taskActionHasBeenSet;

                    /**
                     * 依赖值
                     */
                    std::string m_subordinateCyclicConfig;
                    bool m_subordinateCyclicConfigHasBeenSet;

                    /**
                     * 空值策略
                     */
                    std::string m_pollingNullStrategy;
                    bool m_pollingNullStrategyHasBeenSet;

                    /**
                     * 依赖配置类型
                     */
                    std::string m_dependConfType;
                    bool m_dependConfTypeHasBeenSet;

                    /**
                     * 偏移量
                     */
                    std::string m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 主循环配置
                     */
                    std::string m_mainCyclicConfig;
                    bool m_mainCyclicConfigHasBeenSet;

                    /**
                     * 延迟时间
                     */
                    int64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * 周期类型为小时的时候需要设置当天的开始时间
                     */
                    std::string m_executionStartTime;
                    bool m_executionStartTimeHasBeenSet;

                    /**
                     * 周期类型为小时的时候需要设置当天的结束时间
                     */
                    std::string m_executionEndTime;
                    bool m_executionEndTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKPARENTSCHEDULERDEPENDENCY_H_
