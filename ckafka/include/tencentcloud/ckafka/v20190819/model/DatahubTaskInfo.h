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
                     * 获取<p>任务Id</p>
                     * @return TaskId <p>任务Id</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务Id</p>
                     * @param _taskId <p>任务Id</p>
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
                     * 获取<p>任务名称</p>
                     * @return TaskName <p>任务名称</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>任务名称</p>
                     * @param _taskName <p>任务名称</p>
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
                     * 获取<p>任务类型，SOURCE数据接入，SINK数据流出</p>
                     * @return TaskType <p>任务类型，SOURCE数据接入，SINK数据流出</p>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置<p>任务类型，SOURCE数据接入，SINK数据流出</p>
                     * @param _taskType <p>任务类型，SOURCE数据接入，SINK数据流出</p>
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
                     * 获取<p>状态，-1创建失败，0创建中，1运行中，2删除中，3已删除，4删除失败，5暂停中，6已暂停，7暂停失败，8恢复中，9恢复失败</p>
                     * @return Status <p>状态，-1创建失败，0创建中，1运行中，2删除中，3已删除，4删除失败，5暂停中，6已暂停，7暂停失败，8恢复中，9恢复失败</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>状态，-1创建失败，0创建中，1运行中，2删除中，3已删除，4删除失败，5暂停中，6已暂停，7暂停失败，8恢复中，9恢复失败</p>
                     * @param _status <p>状态，-1创建失败，0创建中，1运行中，2删除中，3已删除，4删除失败，5暂停中，6已暂停，7暂停失败，8恢复中，9恢复失败</p>
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
                     * 获取<p>数据源</p>
                     * @return SourceResource <p>数据源</p>
                     * 
                     */
                    DatahubResource GetSourceResource() const;

                    /**
                     * 设置<p>数据源</p>
                     * @param _sourceResource <p>数据源</p>
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
                     * 获取<p>数据目标</p>
                     * @return TargetResource <p>数据目标</p>
                     * 
                     */
                    DatahubResource GetTargetResource() const;

                    /**
                     * 设置<p>数据目标</p>
                     * @param _targetResource <p>数据目标</p>
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
                     * 获取<p>任务创建时间</p>
                     * @return CreateTime <p>任务创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>任务创建时间</p>
                     * @param _createTime <p>任务创建时间</p>
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
                     * 获取<p>异常信息</p>
                     * @return ErrorMessage <p>异常信息</p>
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置<p>异常信息</p>
                     * @param _errorMessage <p>异常信息</p>
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
                     * 获取<p>创建进度百分比</p>
                     * @return TaskProgress <p>创建进度百分比</p>
                     * 
                     */
                    double GetTaskProgress() const;

                    /**
                     * 设置<p>创建进度百分比</p>
                     * @param _taskProgress <p>创建进度百分比</p>
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
                     * 获取<p>任务当前处于的步骤</p>
                     * @return TaskCurrentStep <p>任务当前处于的步骤</p>
                     * 
                     */
                    std::string GetTaskCurrentStep() const;

                    /**
                     * 设置<p>任务当前处于的步骤</p>
                     * @param _taskCurrentStep <p>任务当前处于的步骤</p>
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
                     * 获取<p>Datahub转储Id</p>
                     * @return DatahubId <p>Datahub转储Id</p>
                     * 
                     */
                    std::string GetDatahubId() const;

                    /**
                     * 设置<p>Datahub转储Id</p>
                     * @param _datahubId <p>Datahub转储Id</p>
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
                     * 获取<p>步骤列表</p>
                     * @return StepList <p>步骤列表</p>
                     * 
                     */
                    std::vector<std::string> GetStepList() const;

                    /**
                     * 设置<p>步骤列表</p>
                     * @param _stepList <p>步骤列表</p>
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
                     * 获取<p>任务描述信息</p>
                     * @return Description <p>任务描述信息</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>任务描述信息</p>
                     * @param _description <p>任务描述信息</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>任务并发数</p><p>默认值：1</p>
                     * @return TaskMax <p>任务并发数</p><p>默认值：1</p>
                     * 
                     */
                    int64_t GetTaskMax() const;

                    /**
                     * 设置<p>任务并发数</p><p>默认值：1</p>
                     * @param _taskMax <p>任务并发数</p><p>默认值：1</p>
                     * 
                     */
                    void SetTaskMax(const int64_t& _taskMax);

                    /**
                     * 判断参数 TaskMax 是否已赋值
                     * @return TaskMax 是否已赋值
                     * 
                     */
                    bool TaskMaxHasBeenSet() const;

                    /**
                     * 获取<p>任务同步限流值,单位MB/s</p><p>默认值：20MB/s</p>
                     * @return SyncThrottleLimit <p>任务同步限流值,单位MB/s</p><p>默认值：20MB/s</p>
                     * 
                     */
                    int64_t GetSyncThrottleLimit() const;

                    /**
                     * 设置<p>任务同步限流值,单位MB/s</p><p>默认值：20MB/s</p>
                     * @param _syncThrottleLimit <p>任务同步限流值,单位MB/s</p><p>默认值：20MB/s</p>
                     * 
                     */
                    void SetSyncThrottleLimit(const int64_t& _syncThrottleLimit);

                    /**
                     * 判断参数 SyncThrottleLimit 是否已赋值
                     * @return SyncThrottleLimit 是否已赋值
                     * 
                     */
                    bool SyncThrottleLimitHasBeenSet() const;

                    /**
                     * 获取<p>任务是否自动扩容标识</p><p>枚举值：</p><ul><li>true： 自动扩容</li><li>false： 手动扩容</li></ul><p>默认值：true</p>
                     * @return AutoExpandFlag <p>任务是否自动扩容标识</p><p>枚举值：</p><ul><li>true： 自动扩容</li><li>false： 手动扩容</li></ul><p>默认值：true</p>
                     * 
                     */
                    bool GetAutoExpandFlag() const;

                    /**
                     * 设置<p>任务是否自动扩容标识</p><p>枚举值：</p><ul><li>true： 自动扩容</li><li>false： 手动扩容</li></ul><p>默认值：true</p>
                     * @param _autoExpandFlag <p>任务是否自动扩容标识</p><p>枚举值：</p><ul><li>true： 自动扩容</li><li>false： 手动扩容</li></ul><p>默认值：true</p>
                     * 
                     */
                    void SetAutoExpandFlag(const bool& _autoExpandFlag);

                    /**
                     * 判断参数 AutoExpandFlag 是否已赋值
                     * @return AutoExpandFlag 是否已赋值
                     * 
                     */
                    bool AutoExpandFlagHasBeenSet() const;

                private:

                    /**
                     * <p>任务Id</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务名称</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>任务类型，SOURCE数据接入，SINK数据流出</p>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>状态，-1创建失败，0创建中，1运行中，2删除中，3已删除，4删除失败，5暂停中，6已暂停，7暂停失败，8恢复中，9恢复失败</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>数据源</p>
                     */
                    DatahubResource m_sourceResource;
                    bool m_sourceResourceHasBeenSet;

                    /**
                     * <p>数据目标</p>
                     */
                    DatahubResource m_targetResource;
                    bool m_targetResourceHasBeenSet;

                    /**
                     * <p>任务创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>异常信息</p>
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * <p>创建进度百分比</p>
                     */
                    double m_taskProgress;
                    bool m_taskProgressHasBeenSet;

                    /**
                     * <p>任务当前处于的步骤</p>
                     */
                    std::string m_taskCurrentStep;
                    bool m_taskCurrentStepHasBeenSet;

                    /**
                     * <p>Datahub转储Id</p>
                     */
                    std::string m_datahubId;
                    bool m_datahubIdHasBeenSet;

                    /**
                     * <p>步骤列表</p>
                     */
                    std::vector<std::string> m_stepList;
                    bool m_stepListHasBeenSet;

                    /**
                     * <p>任务描述信息</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>任务并发数</p><p>默认值：1</p>
                     */
                    int64_t m_taskMax;
                    bool m_taskMaxHasBeenSet;

                    /**
                     * <p>任务同步限流值,单位MB/s</p><p>默认值：20MB/s</p>
                     */
                    int64_t m_syncThrottleLimit;
                    bool m_syncThrottleLimitHasBeenSet;

                    /**
                     * <p>任务是否自动扩容标识</p><p>枚举值：</p><ul><li>true： 自动扩容</li><li>false： 手动扩容</li></ul><p>默认值：true</p>
                     */
                    bool m_autoExpandFlag;
                    bool m_autoExpandFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DATAHUBTASKINFO_H_
