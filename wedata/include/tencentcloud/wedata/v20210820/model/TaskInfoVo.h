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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKINFOVO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKINFOVO_H_

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
                * 任务信息
                */
                class TaskInfoVo : public AbstractModel
                {
                public:
                    TaskInfoVo();
                    ~TaskInfoVo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取租户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppID 租户id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppID() const;

                    /**
                     * 设置租户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appID 租户id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppID(const std::string& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId 任务id
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
                     * 获取任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskName 任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskName 任务名
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
                     * 获取主账号id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OnwerUid 主账号id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOnwerUid() const;

                    /**
                     * 设置主账号id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _onwerUid 主账号id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOnwerUid(const std::string& _onwerUid);

                    /**
                     * 判断参数 OnwerUid 是否已赋值
                     * @return OnwerUid 是否已赋值
                     * 
                     */
                    bool OnwerUidHasBeenSet() const;

                    /**
                     * 获取负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InChargeId 负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInChargeId() const;

                    /**
                     * 设置负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inChargeId 负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInChargeId(const std::string& _inChargeId);

                    /**
                     * 判断参数 InChargeId 是否已赋值
                     * @return InChargeId 是否已赋值
                     * 
                     */
                    bool InChargeIdHasBeenSet() const;

                    /**
                     * 获取实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取jobId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobId jobId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置jobId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobId jobId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取引擎类型，DLC、EMR
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineType 引擎类型，DLC、EMR
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置引擎类型，DLC、EMR
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineType 引擎类型，DLC、EMR
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                    /**
                     * 获取引擎名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineName 引擎名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngineName() const;

                    /**
                     * 设置引擎名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineName 引擎名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngineName(const std::string& _engineName);

                    /**
                     * 判断参数 EngineName 是否已赋值
                     * @return EngineName 是否已赋值
                     * 
                     */
                    bool EngineNameHasBeenSet() const;

                    /**
                     * 获取引擎子类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineSubType 引擎子类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngineSubType() const;

                    /**
                     * 设置引擎子类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineSubType 引擎子类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngineSubType(const std::string& _engineSubType);

                    /**
                     * 判断参数 EngineSubType 是否已赋值
                     * @return EngineSubType 是否已赋值
                     * 
                     */
                    bool EngineSubTypeHasBeenSet() const;

                    /**
                     * 获取引擎taskId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineTaskId 引擎taskId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngineTaskId() const;

                    /**
                     * 设置引擎taskId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineTaskId 引擎taskId
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
                     * 获取引擎执行用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineExeUser 引擎执行用户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngineExeUser() const;

                    /**
                     * 设置引擎执行用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineExeUser 引擎执行用户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngineExeUser(const std::string& _engineExeUser);

                    /**
                     * 判断参数 EngineExeUser 是否已赋值
                     * @return EngineExeUser 是否已赋值
                     * 
                     */
                    bool EngineExeUserHasBeenSet() const;

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
                     * 获取数据来源,DATA_INTEGRATION、DATA_EXPLORATION、DATA_QUALITY、OM_CENTER等
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductSource 数据来源,DATA_INTEGRATION、DATA_EXPLORATION、DATA_QUALITY、OM_CENTER等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductSource() const;

                    /**
                     * 设置数据来源,DATA_INTEGRATION、DATA_EXPLORATION、DATA_QUALITY、OM_CENTER等
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productSource 数据来源,DATA_INTEGRATION、DATA_EXPLORATION、DATA_QUALITY、OM_CENTER等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductSource(const std::string& _productSource);

                    /**
                     * 判断参数 ProductSource 是否已赋值
                     * @return ProductSource 是否已赋值
                     * 
                     */
                    bool ProductSourceHasBeenSet() const;

                private:

                    /**
                     * 租户id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 任务类型id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * 主账号id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_onwerUid;
                    bool m_onwerUidHasBeenSet;

                    /**
                     * 负责人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inChargeId;
                    bool m_inChargeIdHasBeenSet;

                    /**
                     * 实例id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * jobId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 引擎类型，DLC、EMR
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * 引擎名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineName;
                    bool m_engineNameHasBeenSet;

                    /**
                     * 引擎子类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineSubType;
                    bool m_engineSubTypeHasBeenSet;

                    /**
                     * 引擎taskId
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
                     * 引擎执行用户
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineExeUser;
                    bool m_engineExeUserHasBeenSet;

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
                     * 数据来源,DATA_INTEGRATION、DATA_EXPLORATION、DATA_QUALITY、OM_CENTER等
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productSource;
                    bool m_productSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKINFOVO_H_
