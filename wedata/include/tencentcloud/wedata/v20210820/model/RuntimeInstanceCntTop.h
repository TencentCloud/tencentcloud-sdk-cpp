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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RUNTIMEINSTANCECNTTOP_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RUNTIMEINSTANCECNTTOP_H_

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
                * 指定时间窗口实例耗时排行
                */
                class RuntimeInstanceCntTop : public AbstractModel
                {
                public:
                    RuntimeInstanceCntTop();
                    ~RuntimeInstanceCntTop() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskName 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskName 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InCharge 责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInCharge() const;

                    /**
                     * 设置责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inCharge 责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInCharge(const std::string& _inCharge);

                    /**
                     * 判断参数 InCharge 是否已赋值
                     * @return InCharge 是否已赋值
                     * 
                     */
                    bool InChargeHasBeenSet() const;

                    /**
                     * 获取任务周期类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleUnit 任务周期类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCycleUnit() const;

                    /**
                     * 设置任务周期类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycleUnit 任务周期类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCycleUnit(const std::string& _cycleUnit);

                    /**
                     * 判断参数 CycleUnit 是否已赋值
                     * @return CycleUnit 是否已赋值
                     * 
                     */
                    bool CycleUnitHasBeenSet() const;

                    /**
                     * 获取实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return State 实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _state 实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取耗时
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunTime 耗时
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRunTime() const;

                    /**
                     * 设置耗时
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runTime 耗时
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunTime(const uint64_t& _runTime);

                    /**
                     * 判断参数 RunTime 是否已赋值
                     * @return RunTime 是否已赋值
                     * 
                     */
                    bool RunTimeHasBeenSet() const;

                    /**
                     * 获取实例运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurRunTime 实例运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCurRunTime() const;

                    /**
                     * 设置实例运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _curRunTime 实例运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCurRunTime(const std::string& _curRunTime);

                    /**
                     * 判断参数 CurRunTime 是否已赋值
                     * @return CurRunTime 是否已赋值
                     * 
                     */
                    bool CurRunTimeHasBeenSet() const;

                private:

                    /**
                     * 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 责任人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inCharge;
                    bool m_inChargeHasBeenSet;

                    /**
                     * 任务周期类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cycleUnit;
                    bool m_cycleUnitHasBeenSet;

                    /**
                     * 实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 耗时
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_runTime;
                    bool m_runTimeHasBeenSet;

                    /**
                     * 实例运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_curRunTime;
                    bool m_curRunTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RUNTIMEINSTANCECNTTOP_H_
