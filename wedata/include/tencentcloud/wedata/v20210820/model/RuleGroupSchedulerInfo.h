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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUPSCHEDULERINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUPSCHEDULERINFO_H_

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
                * 规则组调度信息
                */
                class RuleGroupSchedulerInfo : public AbstractModel
                {
                public:
                    RuleGroupSchedulerInfo();
                    ~RuleGroupSchedulerInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 规则组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置规则组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 规则组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取1:未配置 2:关联生产调度 3:离线周期检测
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonitorType 1:未配置 2:关联生产调度 3:离线周期检测
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMonitorType() const;

                    /**
                     * 设置1:未配置 2:关联生产调度 3:离线周期检测
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _monitorType 1:未配置 2:关联生产调度 3:离线周期检测
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMonitorType(const int64_t& _monitorType);

                    /**
                     * 判断参数 MonitorType 是否已赋值
                     * @return MonitorType 是否已赋值
                     * 
                     */
                    bool MonitorTypeHasBeenSet() const;

                    /**
                     * 获取开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 开始时间
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 结束时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取循环类型简写
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleType 循环类型简写
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置循环类型简写
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycleType 循环类型简写
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取循环步长
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleStep 循环步长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCycleStep() const;

                    /**
                     * 设置循环步长
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycleStep 循环步长
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取循环类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleDesc 循环类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCycleDesc() const;

                    /**
                     * 设置循环类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycleDesc 循环类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCycleDesc(const std::string& _cycleDesc);

                    /**
                     * 判断参数 CycleDesc 是否已赋值
                     * @return CycleDesc 是否已赋值
                     * 
                     */
                    bool CycleDescHasBeenSet() const;

                    /**
                     * 获取离线周期检测下指定时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskAction 离线周期检测下指定时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskAction() const;

                    /**
                     * 设置离线周期检测下指定时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskAction 离线周期检测下指定时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取离线周期检测下延迟时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DelayTime 离线周期检测下延迟时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDelayTime() const;

                    /**
                     * 设置离线周期检测下延迟时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _delayTime 离线周期检测下延迟时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取离线周期检测下注册到任务调度的任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleTaskId 离线周期检测下注册到任务调度的任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCycleTaskId() const;

                    /**
                     * 设置离线周期检测下注册到任务调度的任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycleTaskId 离线周期检测下注册到任务调度的任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCycleTaskId(const std::string& _cycleTaskId);

                    /**
                     * 判断参数 CycleTaskId 是否已赋值
                     * @return CycleTaskId 是否已赋值
                     * 
                     */
                    bool CycleTaskIdHasBeenSet() const;

                    /**
                     * 获取关联生产调度下关联的任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssociateTaskIds 关联生产调度下关联的任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAssociateTaskIds() const;

                    /**
                     * 设置关联生产调度下关联的任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _associateTaskIds 关联生产调度下关联的任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssociateTaskIds(const std::vector<std::string>& _associateTaskIds);

                    /**
                     * 判断参数 AssociateTaskIds 是否已赋值
                     * @return AssociateTaskIds 是否已赋值
                     * 
                     */
                    bool AssociateTaskIdsHasBeenSet() const;

                private:

                    /**
                     * 规则组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 1:未配置 2:关联生产调度 3:离线周期检测
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 循环类型简写
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * 循环步长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cycleStep;
                    bool m_cycleStepHasBeenSet;

                    /**
                     * 循环类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cycleDesc;
                    bool m_cycleDescHasBeenSet;

                    /**
                     * 离线周期检测下指定时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskAction;
                    bool m_taskActionHasBeenSet;

                    /**
                     * 离线周期检测下延迟时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * 离线周期检测下注册到任务调度的任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cycleTaskId;
                    bool m_cycleTaskIdHasBeenSet;

                    /**
                     * 关联生产调度下关联的任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_associateTaskIds;
                    bool m_associateTaskIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUPSCHEDULERINFO_H_
