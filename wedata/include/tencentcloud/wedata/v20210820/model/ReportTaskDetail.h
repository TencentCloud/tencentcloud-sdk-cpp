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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_REPORTTASKDETAIL_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_REPORTTASKDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/EngineTaskInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 上报任务详情
                */
                class ReportTaskDetail : public AbstractModel
                {
                public:
                    ReportTaskDetail();
                    ~ReportTaskDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取引擎任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineTaskId 引擎任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngineTaskId() const;

                    /**
                     * 设置引擎任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineTaskId 引擎任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngineTaskId(const std::string& _engineTaskId);

                    /**
                     * 判断参数 EngineTaskId 是否已赋值
                     * @return EngineTaskId 是否已赋值
                     * 
                     */
                    bool EngineTaskIdHasBeenSet() const;

                    /**
                     * 获取引擎执行状态，枚举
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineExeStatus 引擎执行状态，枚举
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngineExeStatus() const;

                    /**
                     * 设置引擎执行状态，枚举
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineExeStatus 引擎执行状态，枚举
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngineExeStatus(const std::string& _engineExeStatus);

                    /**
                     * 判断参数 EngineExeStatus 是否已赋值
                     * @return EngineExeStatus 是否已赋值
                     * 
                     */
                    bool EngineExeStatusHasBeenSet() const;

                    /**
                     * 获取引擎执行开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineExeStartTime 引擎执行开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngineExeStartTime() const;

                    /**
                     * 设置引擎执行开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineExeStartTime 引擎执行开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngineExeStartTime(const std::string& _engineExeStartTime);

                    /**
                     * 判断参数 EngineExeStartTime 是否已赋值
                     * @return EngineExeStartTime 是否已赋值
                     * 
                     */
                    bool EngineExeStartTimeHasBeenSet() const;

                    /**
                     * 获取引擎执行结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineExeEndTime 引擎执行结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngineExeEndTime() const;

                    /**
                     * 设置引擎执行结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineExeEndTime 引擎执行结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngineExeEndTime(const std::string& _engineExeEndTime);

                    /**
                     * 判断参数 EngineExeEndTime 是否已赋值
                     * @return EngineExeEndTime 是否已赋值
                     * 
                     */
                    bool EngineExeEndTimeHasBeenSet() const;

                    /**
                     * 获取任务类型id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskTypeId 任务类型id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTaskTypeId() const;

                    /**
                     * 设置任务类型id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskTypeId 任务类型id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskTypeId(const uint64_t& _taskTypeId);

                    /**
                     * 判断参数 TaskTypeId 是否已赋值
                     * @return TaskTypeId 是否已赋值
                     * 
                     */
                    bool TaskTypeIdHasBeenSet() const;

                    /**
                     * 获取业务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BusinessInfo 业务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBusinessInfo() const;

                    /**
                     * 设置业务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _businessInfo 业务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBusinessInfo(const std::string& _businessInfo);

                    /**
                     * 判断参数 BusinessInfo 是否已赋值
                     * @return BusinessInfo 是否已赋值
                     * 
                     */
                    bool BusinessInfoHasBeenSet() const;

                    /**
                     * 获取引擎任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineTaskInfo 引擎任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EngineTaskInfo GetEngineTaskInfo() const;

                    /**
                     * 设置引擎任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineTaskInfo 引擎任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngineTaskInfo(const EngineTaskInfo& _engineTaskInfo);

                    /**
                     * 判断参数 EngineTaskInfo 是否已赋值
                     * @return EngineTaskInfo 是否已赋值
                     * 
                     */
                    bool EngineTaskInfoHasBeenSet() const;

                private:

                    /**
                     * 引擎任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineTaskId;
                    bool m_engineTaskIdHasBeenSet;

                    /**
                     * 引擎执行状态，枚举
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineExeStatus;
                    bool m_engineExeStatusHasBeenSet;

                    /**
                     * 引擎执行开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineExeStartTime;
                    bool m_engineExeStartTimeHasBeenSet;

                    /**
                     * 引擎执行结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineExeEndTime;
                    bool m_engineExeEndTimeHasBeenSet;

                    /**
                     * 任务类型id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * 业务信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_businessInfo;
                    bool m_businessInfoHasBeenSet;

                    /**
                     * 引擎任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EngineTaskInfo m_engineTaskInfo;
                    bool m_engineTaskInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_REPORTTASKDETAIL_H_
