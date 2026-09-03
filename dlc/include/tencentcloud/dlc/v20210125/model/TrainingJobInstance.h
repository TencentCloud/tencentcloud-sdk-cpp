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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_TRAININGJOBINSTANCE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_TRAININGJOBINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/CheckpointMountInfo.h>
#include <tencentcloud/dlc/v20210125/model/Tag.h>
#include <tencentcloud/dlc/v20210125/model/DatasetMount.h>
#include <tencentcloud/dlc/v20210125/model/CheckpointConfig.h>
#include <tencentcloud/dlc/v20210125/model/TrainingTuningParams.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 训练作业实例详情
                */
                class TrainingJobInstance : public AbstractModel
                {
                public:
                    TrainingJobInstance();
                    ~TrainingJobInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例 ID（即 RayJob UUID）</p>
                     * @return InstanceId <p>实例 ID（即 RayJob UUID）</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID（即 RayJob UUID）</p>
                     * @param _instanceId <p>实例 ID（即 RayJob UUID）</p>
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
                     * 获取<p>关联配置 ID</p>
                     * @return SpecId <p>关联配置 ID</p>
                     * 
                     */
                    std::string GetSpecId() const;

                    /**
                     * 设置<p>关联配置 ID</p>
                     * @param _specId <p>关联配置 ID</p>
                     * 
                     */
                    void SetSpecId(const std::string& _specId);

                    /**
                     * 判断参数 SpecId 是否已赋值
                     * @return SpecId 是否已赋值
                     * 
                     */
                    bool SpecIdHasBeenSet() const;

                    /**
                     * 获取<p>配置名称</p>
                     * @return SpecName <p>配置名称</p>
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置<p>配置名称</p>
                     * @param _specName <p>配置名称</p>
                     * 
                     */
                    void SetSpecName(const std::string& _specName);

                    /**
                     * 判断参数 SpecName 是否已赋值
                     * @return SpecName 是否已赋值
                     * 
                     */
                    bool SpecNameHasBeenSet() const;

                    /**
                     * 获取<p>作业优先级（1-9，数字越大优先级越高）</p>
                     * @return Priority <p>作业优先级（1-9，数字越大优先级越高）</p>
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置<p>作业优先级（1-9，数字越大优先级越高）</p>
                     * @param _priority <p>作业优先级（1-9，数字越大优先级越高）</p>
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取<p>综合状态</p>
                     * @return Status <p>综合状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>综合状态</p>
                     * @param _status <p>综合状态</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>错误信息</p>
                     * @return ErrorMessage <p>错误信息</p>
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置<p>错误信息</p>
                     * @param _errorMessage <p>错误信息</p>
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
                     * 获取<p>RayJob 实际启动时间（毫秒）</p>
                     * @return JobCreateTime <p>RayJob 实际启动时间（毫秒）</p>
                     * 
                     */
                    int64_t GetJobCreateTime() const;

                    /**
                     * 设置<p>RayJob 实际启动时间（毫秒）</p>
                     * @param _jobCreateTime <p>RayJob 实际启动时间（毫秒）</p>
                     * 
                     */
                    void SetJobCreateTime(const int64_t& _jobCreateTime);

                    /**
                     * 判断参数 JobCreateTime 是否已赋值
                     * @return JobCreateTime 是否已赋值
                     * 
                     */
                    bool JobCreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>RayJob 运行时长（毫秒）</p>
                     * @return JobRunningTime <p>RayJob 运行时长（毫秒）</p>
                     * 
                     */
                    int64_t GetJobRunningTime() const;

                    /**
                     * 设置<p>RayJob 运行时长（毫秒）</p>
                     * @param _jobRunningTime <p>RayJob 运行时长（毫秒）</p>
                     * 
                     */
                    void SetJobRunningTime(const int64_t& _jobRunningTime);

                    /**
                     * 判断参数 JobRunningTime 是否已赋值
                     * @return JobRunningTime 是否已赋值
                     * 
                     */
                    bool JobRunningTimeHasBeenSet() const;

                    /**
                     * 获取<p>Ray Dashboard History 链接</p>
                     * @return HistoryUrl <p>Ray Dashboard History 链接</p>
                     * 
                     */
                    std::string GetHistoryUrl() const;

                    /**
                     * 设置<p>Ray Dashboard History 链接</p>
                     * @param _historyUrl <p>Ray Dashboard History 链接</p>
                     * 
                     */
                    void SetHistoryUrl(const std::string& _historyUrl);

                    /**
                     * 判断参数 HistoryUrl 是否已赋值
                     * @return HistoryUrl 是否已赋值
                     * 
                     */
                    bool HistoryUrlHasBeenSet() const;

                    /**
                     * 获取<p>创建人</p>
                     * @return Creator <p>创建人</p>
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置<p>创建人</p>
                     * @param _creator <p>创建人</p>
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取<p>创建时间（毫秒时间戳）</p>
                     * @return CreateTime <p>创建时间（毫秒时间戳）</p>
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间（毫秒时间戳）</p>
                     * @param _createTime <p>创建时间（毫秒时间戳）</p>
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>资源分区 ID</p>
                     * @return ResourcePartitionId <p>资源分区 ID</p>
                     * 
                     */
                    std::string GetResourcePartitionId() const;

                    /**
                     * 设置<p>资源分区 ID</p>
                     * @param _resourcePartitionId <p>资源分区 ID</p>
                     * 
                     */
                    void SetResourcePartitionId(const std::string& _resourcePartitionId);

                    /**
                     * 判断参数 ResourcePartitionId 是否已赋值
                     * @return ResourcePartitionId 是否已赋值
                     * 
                     */
                    bool ResourcePartitionIdHasBeenSet() const;

                    /**
                     * 获取<p>资源分区名称</p>
                     * @return ResourcePartitionName <p>资源分区名称</p>
                     * 
                     */
                    std::string GetResourcePartitionName() const;

                    /**
                     * 设置<p>资源分区名称</p>
                     * @param _resourcePartitionName <p>资源分区名称</p>
                     * 
                     */
                    void SetResourcePartitionName(const std::string& _resourcePartitionName);

                    /**
                     * 判断参数 ResourcePartitionName 是否已赋值
                     * @return ResourcePartitionName 是否已赋值
                     * 
                     */
                    bool ResourcePartitionNameHasBeenSet() const;

                    /**
                     * 获取<p>队列名称</p>
                     * @return Queue <p>队列名称</p>
                     * 
                     */
                    std::string GetQueue() const;

                    /**
                     * 设置<p>队列名称</p>
                     * @param _queue <p>队列名称</p>
                     * 
                     */
                    void SetQueue(const std::string& _queue);

                    /**
                     * 判断参数 Queue 是否已赋值
                     * @return Queue 是否已赋值
                     * 
                     */
                    bool QueueHasBeenSet() const;

                    /**
                     * 获取<p>提交时 runtime_env JSON</p>
                     * @return RuntimeEnv <p>提交时 runtime_env JSON</p>
                     * 
                     */
                    std::string GetRuntimeEnv() const;

                    /**
                     * 设置<p>提交时 runtime_env JSON</p>
                     * @param _runtimeEnv <p>提交时 runtime_env JSON</p>
                     * 
                     */
                    void SetRuntimeEnv(const std::string& _runtimeEnv);

                    /**
                     * 判断参数 RuntimeEnv 是否已赋值
                     * @return RuntimeEnv 是否已赋值
                     * 
                     */
                    bool RuntimeEnvHasBeenSet() const;

                    /**
                     * 获取<p>提交时 entrypoint</p>
                     * @return Entrypoint <p>提交时 entrypoint</p>
                     * 
                     */
                    std::string GetEntrypoint() const;

                    /**
                     * 设置<p>提交时 entrypoint</p>
                     * @param _entrypoint <p>提交时 entrypoint</p>
                     * 
                     */
                    void SetEntrypoint(const std::string& _entrypoint);

                    /**
                     * 判断参数 Entrypoint 是否已赋值
                     * @return Entrypoint 是否已赋值
                     * 
                     */
                    bool EntrypointHasBeenSet() const;

                    /**
                     * 获取<p>提交时镜像</p>
                     * @return Image <p>提交时镜像</p>
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置<p>提交时镜像</p>
                     * @param _image <p>提交时镜像</p>
                     * 
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取<p>提交时资源配置 JSON</p>
                     * @return ResourceConfig <p>提交时资源配置 JSON</p>
                     * 
                     */
                    std::string GetResourceConfig() const;

                    /**
                     * 设置<p>提交时资源配置 JSON</p>
                     * @param _resourceConfig <p>提交时资源配置 JSON</p>
                     * 
                     */
                    void SetResourceConfig(const std::string& _resourceConfig);

                    /**
                     * 判断参数 ResourceConfig 是否已赋值
                     * @return ResourceConfig 是否已赋值
                     * 
                     */
                    bool ResourceConfigHasBeenSet() const;

                    /**
                     * 获取<p>提交时存储卷挂载配置 JSON</p>
                     * @return Catalog <p>提交时存储卷挂载配置 JSON</p>
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置<p>提交时存储卷挂载配置 JSON</p>
                     * @param _catalog <p>提交时存储卷挂载配置 JSON</p>
                     * 
                     */
                    void SetCatalog(const std::string& _catalog);

                    /**
                     * 判断参数 Catalog 是否已赋值
                     * @return Catalog 是否已赋值
                     * 
                     */
                    bool CatalogHasBeenSet() const;

                    /**
                     * 获取<p>提交时高级参数 JSON</p>
                     * @return AdvancedOptions <p>提交时高级参数 JSON</p>
                     * 
                     */
                    std::string GetAdvancedOptions() const;

                    /**
                     * 设置<p>提交时高级参数 JSON</p>
                     * @param _advancedOptions <p>提交时高级参数 JSON</p>
                     * 
                     */
                    void SetAdvancedOptions(const std::string& _advancedOptions);

                    /**
                     * 判断参数 AdvancedOptions 是否已赋值
                     * @return AdvancedOptions 是否已赋值
                     * 
                     */
                    bool AdvancedOptionsHasBeenSet() const;

                    /**
                     * 获取<p>训练子类型快照（LAB / CUSTOM_CODE / POST_TRAINING）</p>
                     * @return Kind <p>训练子类型快照（LAB / CUSTOM_CODE / POST_TRAINING）</p>
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置<p>训练子类型快照（LAB / CUSTOM_CODE / POST_TRAINING）</p>
                     * @param _kind <p>训练子类型快照（LAB / CUSTOM_CODE / POST_TRAINING）</p>
                     * 
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取<p>提交时代码包 URL</p>
                     * @return CodePackageUrl <p>提交时代码包 URL</p>
                     * 
                     */
                    std::string GetCodePackageUrl() const;

                    /**
                     * 设置<p>提交时代码包 URL</p>
                     * @param _codePackageUrl <p>提交时代码包 URL</p>
                     * 
                     */
                    void SetCodePackageUrl(const std::string& _codePackageUrl);

                    /**
                     * 判断参数 CodePackageUrl 是否已赋值
                     * @return CodePackageUrl 是否已赋值
                     * 
                     */
                    bool CodePackageUrlHasBeenSet() const;

                    /**
                     * 获取<p>提交时 MLflow 配置 JSON</p>
                     * @return MlFlowConfig <p>提交时 MLflow 配置 JSON</p>
                     * 
                     */
                    std::string GetMlFlowConfig() const;

                    /**
                     * 设置<p>提交时 MLflow 配置 JSON</p>
                     * @param _mlFlowConfig <p>提交时 MLflow 配置 JSON</p>
                     * 
                     */
                    void SetMlFlowConfig(const std::string& _mlFlowConfig);

                    /**
                     * 判断参数 MlFlowConfig 是否已赋值
                     * @return MlFlowConfig 是否已赋值
                     * 
                     */
                    bool MlFlowConfigHasBeenSet() const;

                    /**
                     * 获取<p>Checkpoint 挂载摘要（实例级）</p>
                     * @return CheckpointMountInfo <p>Checkpoint 挂载摘要（实例级）</p>
                     * 
                     */
                    CheckpointMountInfo GetCheckpointMountInfo() const;

                    /**
                     * 设置<p>Checkpoint 挂载摘要（实例级）</p>
                     * @param _checkpointMountInfo <p>Checkpoint 挂载摘要（实例级）</p>
                     * 
                     */
                    void SetCheckpointMountInfo(const CheckpointMountInfo& _checkpointMountInfo);

                    /**
                     * 判断参数 CheckpointMountInfo 是否已赋值
                     * @return CheckpointMountInfo 是否已赋值
                     * 
                     */
                    bool CheckpointMountInfoHasBeenSet() const;

                    /**
                     * 获取<p>训练方式（sft / dpo / cpt / grpo），仅 POST_TRAINING 有值</p>
                     * @return Mode <p>训练方式（sft / dpo / cpt / grpo），仅 POST_TRAINING 有值</p>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>训练方式（sft / dpo / cpt / grpo），仅 POST_TRAINING 有值</p>
                     * @param _mode <p>训练方式（sft / dpo / cpt / grpo），仅 POST_TRAINING 有值</p>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取<p>基础模型 modelUid（仅 POST_TRAINING 有值，用于关联推理模型仓库）</p>
                     * @return BaseModelUid <p>基础模型 modelUid（仅 POST_TRAINING 有值，用于关联推理模型仓库）</p>
                     * 
                     */
                    std::string GetBaseModelUid() const;

                    /**
                     * 设置<p>基础模型 modelUid（仅 POST_TRAINING 有值，用于关联推理模型仓库）</p>
                     * @param _baseModelUid <p>基础模型 modelUid（仅 POST_TRAINING 有值，用于关联推理模型仓库）</p>
                     * 
                     */
                    void SetBaseModelUid(const std::string& _baseModelUid);

                    /**
                     * 判断参数 BaseModelUid 是否已赋值
                     * @return BaseModelUid 是否已赋值
                     * 
                     */
                    bool BaseModelUidHasBeenSet() const;

                    /**
                     * 获取<p>基础模型名称（仅 POST_TRAINING 有值）</p>
                     * @return BaseModelName <p>基础模型名称（仅 POST_TRAINING 有值）</p>
                     * 
                     */
                    std::string GetBaseModelName() const;

                    /**
                     * 设置<p>基础模型名称（仅 POST_TRAINING 有值）</p>
                     * @param _baseModelName <p>基础模型名称（仅 POST_TRAINING 有值）</p>
                     * 
                     */
                    void SetBaseModelName(const std::string& _baseModelName);

                    /**
                     * 判断参数 BaseModelName 是否已赋值
                     * @return BaseModelName 是否已赋值
                     * 
                     */
                    bool BaseModelNameHasBeenSet() const;

                    /**
                     * 获取<p>标签列表（TagKey-TagValue）</p>
                     * @return Tags <p>标签列表（TagKey-TagValue）</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签列表（TagKey-TagValue）</p>
                     * @param _tags <p>标签列表（TagKey-TagValue）</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>创建实例时的数据集挂载列表快照（List&lt;DatasetMount&gt;，仅详情返回）</p>
                     * @return Datasets <p>创建实例时的数据集挂载列表快照（List&lt;DatasetMount&gt;，仅详情返回）</p>
                     * 
                     */
                    std::vector<DatasetMount> GetDatasets() const;

                    /**
                     * 设置<p>创建实例时的数据集挂载列表快照（List&lt;DatasetMount&gt;，仅详情返回）</p>
                     * @param _datasets <p>创建实例时的数据集挂载列表快照（List&lt;DatasetMount&gt;，仅详情返回）</p>
                     * 
                     */
                    void SetDatasets(const std::vector<DatasetMount>& _datasets);

                    /**
                     * 判断参数 Datasets 是否已赋值
                     * @return Datasets 是否已赋值
                     * 
                     */
                    bool DatasetsHasBeenSet() const;

                    /**
                     * 获取<p>创建实例时的 Checkpoint 产出配置快照（仅详情返回）</p>
                     * @return Checkpoint <p>创建实例时的 Checkpoint 产出配置快照（仅详情返回）</p>
                     * 
                     */
                    CheckpointConfig GetCheckpoint() const;

                    /**
                     * 设置<p>创建实例时的 Checkpoint 产出配置快照（仅详情返回）</p>
                     * @param _checkpoint <p>创建实例时的 Checkpoint 产出配置快照（仅详情返回）</p>
                     * 
                     */
                    void SetCheckpoint(const CheckpointConfig& _checkpoint);

                    /**
                     * 判断参数 Checkpoint 是否已赋值
                     * @return Checkpoint 是否已赋值
                     * 
                     */
                    bool CheckpointHasBeenSet() const;

                    /**
                     * 获取<p>创建实例时的调优参数快照（仅 POST_TRAINING，仅详情返回）</p>
                     * @return TuningParams <p>创建实例时的调优参数快照（仅 POST_TRAINING，仅详情返回）</p>
                     * 
                     */
                    TrainingTuningParams GetTuningParams() const;

                    /**
                     * 设置<p>创建实例时的调优参数快照（仅 POST_TRAINING，仅详情返回）</p>
                     * @param _tuningParams <p>创建实例时的调优参数快照（仅 POST_TRAINING，仅详情返回）</p>
                     * 
                     */
                    void SetTuningParams(const TrainingTuningParams& _tuningParams);

                    /**
                     * 判断参数 TuningParams 是否已赋值
                     * @return TuningParams 是否已赋值
                     * 
                     */
                    bool TuningParamsHasBeenSet() const;

                    /**
                     * 获取<p>创建实例时的断点续训意图声明快照（仅详情返回）</p>
                     * @return ResumeTraining <p>创建实例时的断点续训意图声明快照（仅详情返回）</p>
                     * 
                     */
                    bool GetResumeTraining() const;

                    /**
                     * 设置<p>创建实例时的断点续训意图声明快照（仅详情返回）</p>
                     * @param _resumeTraining <p>创建实例时的断点续训意图声明快照（仅详情返回）</p>
                     * 
                     */
                    void SetResumeTraining(const bool& _resumeTraining);

                    /**
                     * 判断参数 ResumeTraining 是否已赋值
                     * @return ResumeTraining 是否已赋值
                     * 
                     */
                    bool ResumeTrainingHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID（即 RayJob UUID）</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>关联配置 ID</p>
                     */
                    std::string m_specId;
                    bool m_specIdHasBeenSet;

                    /**
                     * <p>配置名称</p>
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * <p>作业优先级（1-9，数字越大优先级越高）</p>
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * <p>综合状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>错误信息</p>
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * <p>RayJob 实际启动时间（毫秒）</p>
                     */
                    int64_t m_jobCreateTime;
                    bool m_jobCreateTimeHasBeenSet;

                    /**
                     * <p>RayJob 运行时长（毫秒）</p>
                     */
                    int64_t m_jobRunningTime;
                    bool m_jobRunningTimeHasBeenSet;

                    /**
                     * <p>Ray Dashboard History 链接</p>
                     */
                    std::string m_historyUrl;
                    bool m_historyUrlHasBeenSet;

                    /**
                     * <p>创建人</p>
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * <p>创建时间（毫秒时间戳）</p>
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>资源分区 ID</p>
                     */
                    std::string m_resourcePartitionId;
                    bool m_resourcePartitionIdHasBeenSet;

                    /**
                     * <p>资源分区名称</p>
                     */
                    std::string m_resourcePartitionName;
                    bool m_resourcePartitionNameHasBeenSet;

                    /**
                     * <p>队列名称</p>
                     */
                    std::string m_queue;
                    bool m_queueHasBeenSet;

                    /**
                     * <p>提交时 runtime_env JSON</p>
                     */
                    std::string m_runtimeEnv;
                    bool m_runtimeEnvHasBeenSet;

                    /**
                     * <p>提交时 entrypoint</p>
                     */
                    std::string m_entrypoint;
                    bool m_entrypointHasBeenSet;

                    /**
                     * <p>提交时镜像</p>
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * <p>提交时资源配置 JSON</p>
                     */
                    std::string m_resourceConfig;
                    bool m_resourceConfigHasBeenSet;

                    /**
                     * <p>提交时存储卷挂载配置 JSON</p>
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * <p>提交时高级参数 JSON</p>
                     */
                    std::string m_advancedOptions;
                    bool m_advancedOptionsHasBeenSet;

                    /**
                     * <p>训练子类型快照（LAB / CUSTOM_CODE / POST_TRAINING）</p>
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * <p>提交时代码包 URL</p>
                     */
                    std::string m_codePackageUrl;
                    bool m_codePackageUrlHasBeenSet;

                    /**
                     * <p>提交时 MLflow 配置 JSON</p>
                     */
                    std::string m_mlFlowConfig;
                    bool m_mlFlowConfigHasBeenSet;

                    /**
                     * <p>Checkpoint 挂载摘要（实例级）</p>
                     */
                    CheckpointMountInfo m_checkpointMountInfo;
                    bool m_checkpointMountInfoHasBeenSet;

                    /**
                     * <p>训练方式（sft / dpo / cpt / grpo），仅 POST_TRAINING 有值</p>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>基础模型 modelUid（仅 POST_TRAINING 有值，用于关联推理模型仓库）</p>
                     */
                    std::string m_baseModelUid;
                    bool m_baseModelUidHasBeenSet;

                    /**
                     * <p>基础模型名称（仅 POST_TRAINING 有值）</p>
                     */
                    std::string m_baseModelName;
                    bool m_baseModelNameHasBeenSet;

                    /**
                     * <p>标签列表（TagKey-TagValue）</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>创建实例时的数据集挂载列表快照（List&lt;DatasetMount&gt;，仅详情返回）</p>
                     */
                    std::vector<DatasetMount> m_datasets;
                    bool m_datasetsHasBeenSet;

                    /**
                     * <p>创建实例时的 Checkpoint 产出配置快照（仅详情返回）</p>
                     */
                    CheckpointConfig m_checkpoint;
                    bool m_checkpointHasBeenSet;

                    /**
                     * <p>创建实例时的调优参数快照（仅 POST_TRAINING，仅详情返回）</p>
                     */
                    TrainingTuningParams m_tuningParams;
                    bool m_tuningParamsHasBeenSet;

                    /**
                     * <p>创建实例时的断点续训意图声明快照（仅详情返回）</p>
                     */
                    bool m_resumeTraining;
                    bool m_resumeTrainingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_TRAININGJOBINSTANCE_H_
