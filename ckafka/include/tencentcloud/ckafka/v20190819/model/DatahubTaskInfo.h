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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DATAHUBTASKINFO_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DATAHUBTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/DatahubResource.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Datahub任务信息
                */
                class DatahubTaskInfo : public AbstractModel
                {
                public:
                    DatahubTaskInfo();
                    ~DatahubTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务Id
                     * @return TaskId 任务Id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务Id
                     * @param _taskId 任务Id
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
                     * 获取任务名称
                     * @return TaskName 任务名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
                     * @param _taskName 任务名称
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
                     * 获取任务类型，SOURCE数据接入，SINK数据流出
                     * @return TaskType 任务类型，SOURCE数据接入，SINK数据流出
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型，SOURCE数据接入，SINK数据流出
                     * @param _taskType 任务类型，SOURCE数据接入，SINK数据流出
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取状态，-1创建失败，0创建中，1运行中，2删除中，3已删除，4删除失败，5暂停中，6已暂停，7暂停失败，8恢复中，9恢复失败
                     * @return Status 状态，-1创建失败，0创建中，1运行中，2删除中，3已删除，4删除失败，5暂停中，6已暂停，7暂停失败，8恢复中，9恢复失败
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态，-1创建失败，0创建中，1运行中，2删除中，3已删除，4删除失败，5暂停中，6已暂停，7暂停失败，8恢复中，9恢复失败
                     * @param _status 状态，-1创建失败，0创建中，1运行中，2删除中，3已删除，4删除失败，5暂停中，6已暂停，7暂停失败，8恢复中，9恢复失败
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取数据源
                     * @return SourceResource 数据源
                     * 
                     */
                    DatahubResource GetSourceResource() const;

                    /**
                     * 设置数据源
                     * @param _sourceResource 数据源
                     * 
                     */
                    void SetSourceResource(const DatahubResource& _sourceResource);

                    /**
                     * 判断参数 SourceResource 是否已赋值
                     * @return SourceResource 是否已赋值
                     * 
                     */
                    bool SourceResourceHasBeenSet() const;

                    /**
                     * 获取数据目标
                     * @return TargetResource 数据目标
                     * 
                     */
                    DatahubResource GetTargetResource() const;

                    /**
                     * 设置数据目标
                     * @param _targetResource 数据目标
                     * 
                     */
                    void SetTargetResource(const DatahubResource& _targetResource);

                    /**
                     * 判断参数 TargetResource 是否已赋值
                     * @return TargetResource 是否已赋值
                     * 
                     */
                    bool TargetResourceHasBeenSet() const;

                    /**
                     * 获取任务创建时间
                     * @return CreateTime 任务创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务创建时间
                     * @param _createTime 任务创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取异常信息
                     * @return ErrorMessage 异常信息
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置异常信息
                     * @param _errorMessage 异常信息
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取创建进度百分比
                     * @return TaskProgress 创建进度百分比
                     * 
                     */
                    double GetTaskProgress() const;

                    /**
                     * 设置创建进度百分比
                     * @param _taskProgress 创建进度百分比
                     * 
                     */
                    void SetTaskProgress(const double& _taskProgress);

                    /**
                     * 判断参数 TaskProgress 是否已赋值
                     * @return TaskProgress 是否已赋值
                     * 
                     */
                    bool TaskProgressHasBeenSet() const;

                    /**
                     * 获取任务当前处于的步骤
                     * @return TaskCurrentStep 任务当前处于的步骤
                     * 
                     */
                    std::string GetTaskCurrentStep() const;

                    /**
                     * 设置任务当前处于的步骤
                     * @param _taskCurrentStep 任务当前处于的步骤
                     * 
                     */
                    void SetTaskCurrentStep(const std::string& _taskCurrentStep);

                    /**
                     * 判断参数 TaskCurrentStep 是否已赋值
                     * @return TaskCurrentStep 是否已赋值
                     * 
                     */
                    bool TaskCurrentStepHasBeenSet() const;

                    /**
                     * 获取Datahub转储Id
                     * @return DatahubId Datahub转储Id
                     * 
                     */
                    std::string GetDatahubId() const;

                    /**
                     * 设置Datahub转储Id
                     * @param _datahubId Datahub转储Id
                     * 
                     */
                    void SetDatahubId(const std::string& _datahubId);

                    /**
                     * 判断参数 DatahubId 是否已赋值
                     * @return DatahubId 是否已赋值
                     * 
                     */
                    bool DatahubIdHasBeenSet() const;

                    /**
                     * 获取步骤列表
                     * @return StepList 步骤列表
                     * 
                     */
                    std::vector<std::string> GetStepList() const;

                    /**
                     * 设置步骤列表
                     * @param _stepList 步骤列表
                     * 
                     */
                    void SetStepList(const std::vector<std::string>& _stepList);

                    /**
                     * 判断参数 StepList 是否已赋值
                     * @return StepList 是否已赋值
                     * 
                     */
                    bool StepListHasBeenSet() const;

                    /**
                     * 获取任务描述信息
                     * @return Description 任务描述信息
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置任务描述信息
                     * @param _description 任务描述信息
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 任务Id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 任务类型，SOURCE数据接入，SINK数据流出
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 状态，-1创建失败，0创建中，1运行中，2删除中，3已删除，4删除失败，5暂停中，6已暂停，7暂停失败，8恢复中，9恢复失败
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 数据源
                     */
                    DatahubResource m_sourceResource;
                    bool m_sourceResourceHasBeenSet;

                    /**
                     * 数据目标
                     */
                    DatahubResource m_targetResource;
                    bool m_targetResourceHasBeenSet;

                    /**
                     * 任务创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 异常信息
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * 创建进度百分比
                     */
                    double m_taskProgress;
                    bool m_taskProgressHasBeenSet;

                    /**
                     * 任务当前处于的步骤
                     */
                    std::string m_taskCurrentStep;
                    bool m_taskCurrentStepHasBeenSet;

                    /**
                     * Datahub转储Id
                     */
                    std::string m_datahubId;
                    bool m_datahubIdHasBeenSet;

                    /**
                     * 步骤列表
                     */
                    std::vector<std::string> m_stepList;
                    bool m_stepListHasBeenSet;

                    /**
                     * 任务描述信息
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DATAHUBTASKINFO_H_
