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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_TRAININGJOBSPEC_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_TRAININGJOBSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/CheckpointMountInfo.h>
#include <tencentcloud/dlc/v20210125/model/DatasetMount.h>
#include <tencentcloud/dlc/v20210125/model/Tag.h>
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
                * 训练作业配置
                */
                class TrainingJobSpec : public AbstractModel
                {
                public:
                    TrainingJobSpec();
                    ~TrainingJobSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>训练作业配置 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpecId <p>训练作业配置 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSpecId() const;

                    /**
                     * 设置<p>训练作业配置 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _specId <p>训练作业配置 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>训练作业配置名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpecName <p>训练作业配置名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置<p>训练作业配置名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _specName <p>训练作业配置名称</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>配置描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>配置描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>配置描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>配置描述</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>提交模式（LAB / CUSTOM_CODE / POST_TRAINING / UNKNOWN）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Kind <p>提交模式（LAB / CUSTOM_CODE / POST_TRAINING / UNKNOWN）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置<p>提交模式（LAB / CUSTOM_CODE / POST_TRAINING / UNKNOWN）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kind <p>提交模式（LAB / CUSTOM_CODE / POST_TRAINING / UNKNOWN）</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>启动命令</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Entrypoint <p>启动命令</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEntrypoint() const;

                    /**
                     * 设置<p>启动命令</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _entrypoint <p>启动命令</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>镜像地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Image <p>镜像地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置<p>镜像地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _image <p>镜像地址</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>镜像拉取类型（BuiltIn / Custom / CustomCcr）</p>
                     * @return ImagePullType <p>镜像拉取类型（BuiltIn / Custom / CustomCcr）</p>
                     * 
                     */
                    std::string GetImagePullType() const;

                    /**
                     * 设置<p>镜像拉取类型（BuiltIn / Custom / CustomCcr）</p>
                     * @param _imagePullType <p>镜像拉取类型（BuiltIn / Custom / CustomCcr）</p>
                     * 
                     */
                    void SetImagePullType(const std::string& _imagePullType);

                    /**
                     * 判断参数 ImagePullType 是否已赋值
                     * @return ImagePullType 是否已赋值
                     * 
                     */
                    bool ImagePullTypeHasBeenSet() const;

                    /**
                     * 获取<p>镜像拉取策略（Always / IfNotPresent / Never）</p>
                     * @return ImagePullPolicy <p>镜像拉取策略（Always / IfNotPresent / Never）</p>
                     * 
                     */
                    std::string GetImagePullPolicy() const;

                    /**
                     * 设置<p>镜像拉取策略（Always / IfNotPresent / Never）</p>
                     * @param _imagePullPolicy <p>镜像拉取策略（Always / IfNotPresent / Never）</p>
                     * 
                     */
                    void SetImagePullPolicy(const std::string& _imagePullPolicy);

                    /**
                     * 判断参数 ImagePullPolicy 是否已赋值
                     * @return ImagePullPolicy 是否已赋值
                     * 
                     */
                    bool ImagePullPolicyHasBeenSet() const;

                    /**
                     * 获取<p>代码包 COS URL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CodePackageUrl <p>代码包 COS URL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCodePackageUrl() const;

                    /**
                     * 设置<p>代码包 COS URL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _codePackageUrl <p>代码包 COS URL</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>Ray runtime_env 配置 JSON</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuntimeEnv <p>Ray runtime_env 配置 JSON</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuntimeEnv() const;

                    /**
                     * 设置<p>Ray runtime_env 配置 JSON</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runtimeEnv <p>Ray runtime_env 配置 JSON</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>资源配置模板 ID</p>
                     * @return ResourceConfigId <p>资源配置模板 ID</p>
                     * 
                     */
                    std::string GetResourceConfigId() const;

                    /**
                     * 设置<p>资源配置模板 ID</p>
                     * @param _resourceConfigId <p>资源配置模板 ID</p>
                     * 
                     */
                    void SetResourceConfigId(const std::string& _resourceConfigId);

                    /**
                     * 判断参数 ResourceConfigId 是否已赋值
                     * @return ResourceConfigId 是否已赋值
                     * 
                     */
                    bool ResourceConfigIdHasBeenSet() const;

                    /**
                     * 获取<p>资源配置 JSON</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceConfig <p>资源配置 JSON</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceConfig() const;

                    /**
                     * 设置<p>资源配置 JSON</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceConfig <p>资源配置 JSON</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>资源分区 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourcePartitionId <p>资源分区 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourcePartitionId() const;

                    /**
                     * 设置<p>资源分区 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourcePartitionId <p>资源分区 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Queue <p>队列名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQueue() const;

                    /**
                     * 设置<p>队列名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queue <p>队列名称</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>Checkpoint 挂载摘要</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckpointMountInfo <p>Checkpoint 挂载摘要</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CheckpointMountInfo GetCheckpointMountInfo() const;

                    /**
                     * 设置<p>Checkpoint 挂载摘要</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _checkpointMountInfo <p>Checkpoint 挂载摘要</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>存储卷挂载配置 JSON</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Catalog <p>存储卷挂载配置 JSON</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置<p>存储卷挂载配置 JSON</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _catalog <p>存储卷挂载配置 JSON</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Creator <p>创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置<p>创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creator <p>创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创建时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>创建时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>更新时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime <p>更新时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime <p>更新时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>关联实例总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceCount <p>关联实例总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置<p>关联实例总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceCount <p>关联实例总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取<p>是否存在运行中实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HasRunningInstances <p>是否存在运行中实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetHasRunningInstances() const;

                    /**
                     * 设置<p>是否存在运行中实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hasRunningInstances <p>是否存在运行中实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHasRunningInstances(const bool& _hasRunningInstances);

                    /**
                     * 判断参数 HasRunningInstances 是否已赋值
                     * @return HasRunningInstances 是否已赋值
                     * 
                     */
                    bool HasRunningInstancesHasBeenSet() const;

                    /**
                     * 获取<p>作业优先级（1-9，数字越大优先级越高）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Priority <p>作业优先级（1-9，数字越大优先级越高）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置<p>作业优先级（1-9，数字越大优先级越高）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _priority <p>作业优先级（1-9，数字越大优先级越高）</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>提交时 MLflow 配置 JSON（含 MlFlowMode / MlFlowTrackingUri 等）</p>
                     * @return MlFlowConfig <p>提交时 MLflow 配置 JSON（含 MlFlowMode / MlFlowTrackingUri 等）</p>
                     * 
                     */
                    std::string GetMlFlowConfig() const;

                    /**
                     * 设置<p>提交时 MLflow 配置 JSON（含 MlFlowMode / MlFlowTrackingUri 等）</p>
                     * @param _mlFlowConfig <p>提交时 MLflow 配置 JSON（含 MlFlowMode / MlFlowTrackingUri 等）</p>
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
                     * 获取<p>产出模型名称（用于后续模型注册）</p>
                     * @return OutputModelName <p>产出模型名称（用于后续模型注册）</p>
                     * 
                     */
                    std::string GetOutputModelName() const;

                    /**
                     * 设置<p>产出模型名称（用于后续模型注册）</p>
                     * @param _outputModelName <p>产出模型名称（用于后续模型注册）</p>
                     * 
                     */
                    void SetOutputModelName(const std::string& _outputModelName);

                    /**
                     * 判断参数 OutputModelName 是否已赋值
                     * @return OutputModelName 是否已赋值
                     * 
                     */
                    bool OutputModelNameHasBeenSet() const;

                    /**
                     * 获取<p>训练模式：sft / dpo / cpt / grpo（仅 POST_TRAINING 有值）</p>
                     * @return Mode <p>训练模式：sft / dpo / cpt / grpo（仅 POST_TRAINING 有值）</p>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>训练模式：sft / dpo / cpt / grpo（仅 POST_TRAINING 有值）</p>
                     * @param _mode <p>训练模式：sft / dpo / cpt / grpo（仅 POST_TRAINING 有值）</p>
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
                     * 获取<p>基础模型 modelUid（仅 POST_TRAINING 有值）</p>
                     * @return BaseModelUid <p>基础模型 modelUid（仅 POST_TRAINING 有值）</p>
                     * 
                     */
                    std::string GetBaseModelUid() const;

                    /**
                     * 设置<p>基础模型 modelUid（仅 POST_TRAINING 有值）</p>
                     * @param _baseModelUid <p>基础模型 modelUid（仅 POST_TRAINING 有值）</p>
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
                     * 获取<p>提交时的数据集挂载列表（List&lt;DatasetMount&gt;，仅详情返回）</p>
                     * @return Datasets <p>提交时的数据集挂载列表（List&lt;DatasetMount&gt;，仅详情返回）</p>
                     * 
                     */
                    std::vector<DatasetMount> GetDatasets() const;

                    /**
                     * 设置<p>提交时的数据集挂载列表（List&lt;DatasetMount&gt;，仅详情返回）</p>
                     * @param _datasets <p>提交时的数据集挂载列表（List&lt;DatasetMount&gt;，仅详情返回）</p>
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
                     * 获取<p>提交时的 Checkpoint 产出配置（仅详情返回）</p>
                     * @return LastInstanceStatus <p>提交时的 Checkpoint 产出配置（仅详情返回）</p>
                     * 
                     */
                    std::string GetLastInstanceStatus() const;

                    /**
                     * 设置<p>提交时的 Checkpoint 产出配置（仅详情返回）</p>
                     * @param _lastInstanceStatus <p>提交时的 Checkpoint 产出配置（仅详情返回）</p>
                     * 
                     */
                    void SetLastInstanceStatus(const std::string& _lastInstanceStatus);

                    /**
                     * 判断参数 LastInstanceStatus 是否已赋值
                     * @return LastInstanceStatus 是否已赋值
                     * 
                     */
                    bool LastInstanceStatusHasBeenSet() const;

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
                     * 获取<p>提交时的 Checkpoint 产出配置（仅详情返回）</p>
                     * @return Checkpoint <p>提交时的 Checkpoint 产出配置（仅详情返回）</p>
                     * 
                     */
                    CheckpointConfig GetCheckpoint() const;

                    /**
                     * 设置<p>提交时的 Checkpoint 产出配置（仅详情返回）</p>
                     * @param _checkpoint <p>提交时的 Checkpoint 产出配置（仅详情返回）</p>
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
                     * 获取<p>提交时的调优参数（仅 POST_TRAINING，仅详情返回）</p>
                     * @return TuningParams <p>提交时的调优参数（仅 POST_TRAINING，仅详情返回）</p>
                     * 
                     */
                    TrainingTuningParams GetTuningParams() const;

                    /**
                     * 设置<p>提交时的调优参数（仅 POST_TRAINING，仅详情返回）</p>
                     * @param _tuningParams <p>提交时的调优参数（仅 POST_TRAINING，仅详情返回）</p>
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
                     * 获取<p>提交时的断点续训意图声明（仅详情返回）</p>
                     * @return ResumeTraining <p>提交时的断点续训意图声明（仅详情返回）</p>
                     * 
                     */
                    bool GetResumeTraining() const;

                    /**
                     * 设置<p>提交时的断点续训意图声明（仅详情返回）</p>
                     * @param _resumeTraining <p>提交时的断点续训意图声明（仅详情返回）</p>
                     * 
                     */
                    void SetResumeTraining(const bool& _resumeTraining);

                    /**
                     * 判断参数 ResumeTraining 是否已赋值
                     * @return ResumeTraining 是否已赋值
                     * 
                     */
                    bool ResumeTrainingHasBeenSet() const;

                    /**
                     * 获取<p>高级参数 JSON（透传给 Neutrino advanced_options）</p>
                     * @return AdvancedOptions <p>高级参数 JSON（透传给 Neutrino advanced_options）</p>
                     * 
                     */
                    std::string GetAdvancedOptions() const;

                    /**
                     * 设置<p>高级参数 JSON（透传给 Neutrino advanced_options）</p>
                     * @param _advancedOptions <p>高级参数 JSON（透传给 Neutrino advanced_options）</p>
                     * 
                     */
                    void SetAdvancedOptions(const std::string& _advancedOptions);

                    /**
                     * 判断参数 AdvancedOptions 是否已赋值
                     * @return AdvancedOptions 是否已赋值
                     * 
                     */
                    bool AdvancedOptionsHasBeenSet() const;

                private:

                    /**
                     * <p>训练作业配置 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_specId;
                    bool m_specIdHasBeenSet;

                    /**
                     * <p>训练作业配置名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * <p>配置描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>提交模式（LAB / CUSTOM_CODE / POST_TRAINING / UNKNOWN）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * <p>启动命令</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_entrypoint;
                    bool m_entrypointHasBeenSet;

                    /**
                     * <p>镜像地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * <p>镜像拉取类型（BuiltIn / Custom / CustomCcr）</p>
                     */
                    std::string m_imagePullType;
                    bool m_imagePullTypeHasBeenSet;

                    /**
                     * <p>镜像拉取策略（Always / IfNotPresent / Never）</p>
                     */
                    std::string m_imagePullPolicy;
                    bool m_imagePullPolicyHasBeenSet;

                    /**
                     * <p>代码包 COS URL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_codePackageUrl;
                    bool m_codePackageUrlHasBeenSet;

                    /**
                     * <p>Ray runtime_env 配置 JSON</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runtimeEnv;
                    bool m_runtimeEnvHasBeenSet;

                    /**
                     * <p>资源配置模板 ID</p>
                     */
                    std::string m_resourceConfigId;
                    bool m_resourceConfigIdHasBeenSet;

                    /**
                     * <p>资源配置 JSON</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceConfig;
                    bool m_resourceConfigHasBeenSet;

                    /**
                     * <p>资源分区 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_queue;
                    bool m_queueHasBeenSet;

                    /**
                     * <p>Checkpoint 挂载摘要</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CheckpointMountInfo m_checkpointMountInfo;
                    bool m_checkpointMountInfoHasBeenSet;

                    /**
                     * <p>存储卷挂载配置 JSON</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * <p>创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * <p>创建时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>关联实例总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * <p>是否存在运行中实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_hasRunningInstances;
                    bool m_hasRunningInstancesHasBeenSet;

                    /**
                     * <p>作业优先级（1-9，数字越大优先级越高）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * <p>提交时 MLflow 配置 JSON（含 MlFlowMode / MlFlowTrackingUri 等）</p>
                     */
                    std::string m_mlFlowConfig;
                    bool m_mlFlowConfigHasBeenSet;

                    /**
                     * <p>产出模型名称（用于后续模型注册）</p>
                     */
                    std::string m_outputModelName;
                    bool m_outputModelNameHasBeenSet;

                    /**
                     * <p>训练模式：sft / dpo / cpt / grpo（仅 POST_TRAINING 有值）</p>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>基础模型 modelUid（仅 POST_TRAINING 有值）</p>
                     */
                    std::string m_baseModelUid;
                    bool m_baseModelUidHasBeenSet;

                    /**
                     * <p>基础模型名称（仅 POST_TRAINING 有值）</p>
                     */
                    std::string m_baseModelName;
                    bool m_baseModelNameHasBeenSet;

                    /**
                     * <p>提交时的数据集挂载列表（List&lt;DatasetMount&gt;，仅详情返回）</p>
                     */
                    std::vector<DatasetMount> m_datasets;
                    bool m_datasetsHasBeenSet;

                    /**
                     * <p>提交时的 Checkpoint 产出配置（仅详情返回）</p>
                     */
                    std::string m_lastInstanceStatus;
                    bool m_lastInstanceStatusHasBeenSet;

                    /**
                     * <p>标签列表（TagKey-TagValue）</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>提交时的 Checkpoint 产出配置（仅详情返回）</p>
                     */
                    CheckpointConfig m_checkpoint;
                    bool m_checkpointHasBeenSet;

                    /**
                     * <p>提交时的调优参数（仅 POST_TRAINING，仅详情返回）</p>
                     */
                    TrainingTuningParams m_tuningParams;
                    bool m_tuningParamsHasBeenSet;

                    /**
                     * <p>提交时的断点续训意图声明（仅详情返回）</p>
                     */
                    bool m_resumeTraining;
                    bool m_resumeTrainingHasBeenSet;

                    /**
                     * <p>高级参数 JSON（透传给 Neutrino advanced_options）</p>
                     */
                    std::string m_advancedOptions;
                    bool m_advancedOptionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_TRAININGJOBSPEC_H_
