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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYTRAININGJOBSPECREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYTRAININGJOBSPECREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/MlFlowConfig.h>
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
                * ModifyTrainingJobSpec请求参数结构体
                */
                class ModifyTrainingJobSpecRequest : public AbstractModel
                {
                public:
                    ModifyTrainingJobSpecRequest();
                    ~ModifyTrainingJobSpecRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>配置 ID</p>
                     * @return SpecId <p>配置 ID</p>
                     * 
                     */
                    std::string GetSpecId() const;

                    /**
                     * 设置<p>配置 ID</p>
                     * @param _specId <p>配置 ID</p>
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
                     * 获取<p>配置名称（不传则不更新）</p>
                     * @return SpecName <p>配置名称（不传则不更新）</p>
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置<p>配置名称（不传则不更新）</p>
                     * @param _specName <p>配置名称（不传则不更新）</p>
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
                     * 获取<p>配置描述（不传则不更新）</p>
                     * @return Description <p>配置描述（不传则不更新）</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>配置描述（不传则不更新）</p>
                     * @param _description <p>配置描述（不传则不更新）</p>
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
                     * 获取<p>启动命令（不传则不更新）</p>
                     * @return Entrypoint <p>启动命令（不传则不更新）</p>
                     * 
                     */
                    std::string GetEntrypoint() const;

                    /**
                     * 设置<p>启动命令（不传则不更新）</p>
                     * @param _entrypoint <p>启动命令（不传则不更新）</p>
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
                     * 获取<p>镜像地址（不传则不更新）</p>
                     * @return Image <p>镜像地址（不传则不更新）</p>
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置<p>镜像地址（不传则不更新）</p>
                     * @param _image <p>镜像地址（不传则不更新）</p>
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
                     * 获取<p>镜像拉取类型（BuiltIn / Custom / CustomCcr，不传则不更新）</p>
                     * @return ImagePullType <p>镜像拉取类型（BuiltIn / Custom / CustomCcr，不传则不更新）</p>
                     * 
                     */
                    std::string GetImagePullType() const;

                    /**
                     * 设置<p>镜像拉取类型（BuiltIn / Custom / CustomCcr，不传则不更新）</p>
                     * @param _imagePullType <p>镜像拉取类型（BuiltIn / Custom / CustomCcr，不传则不更新）</p>
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
                     * 获取<p>镜像拉取策略（Always / IfNotPresent / Never，不传则不更新）</p>
                     * @return ImagePullPolicy <p>镜像拉取策略（Always / IfNotPresent / Never，不传则不更新）</p>
                     * 
                     */
                    std::string GetImagePullPolicy() const;

                    /**
                     * 设置<p>镜像拉取策略（Always / IfNotPresent / Never，不传则不更新）</p>
                     * @param _imagePullPolicy <p>镜像拉取策略（Always / IfNotPresent / Never，不传则不更新）</p>
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
                     * 获取<p>代码包 COS URL（不传则不更新）</p>
                     * @return CodePackageUrl <p>代码包 COS URL（不传则不更新）</p>
                     * 
                     */
                    std::string GetCodePackageUrl() const;

                    /**
                     * 设置<p>代码包 COS URL（不传则不更新）</p>
                     * @param _codePackageUrl <p>代码包 COS URL（不传则不更新）</p>
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
                     * 获取<p>运行时环境配置 JSON（不传则不更新）</p>
                     * @return RuntimeEnv <p>运行时环境配置 JSON（不传则不更新）</p>
                     * 
                     */
                    std::string GetRuntimeEnv() const;

                    /**
                     * 设置<p>运行时环境配置 JSON（不传则不更新）</p>
                     * @param _runtimeEnv <p>运行时环境配置 JSON（不传则不更新）</p>
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
                     * 获取<p>资源配置模板 ID（可选）</p>
                     * @return ResourceConfigId <p>资源配置模板 ID（可选）</p>
                     * 
                     */
                    std::string GetResourceConfigId() const;

                    /**
                     * 设置<p>资源配置模板 ID（可选）</p>
                     * @param _resourceConfigId <p>资源配置模板 ID（可选）</p>
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
                     * 获取<p>资源配置 JSON（不传则不更新）</p>
                     * @return ResourceConfig <p>资源配置 JSON（不传则不更新）</p>
                     * 
                     */
                    std::string GetResourceConfig() const;

                    /**
                     * 设置<p>资源配置 JSON（不传则不更新）</p>
                     * @param _resourceConfig <p>资源配置 JSON（不传则不更新）</p>
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
                     * 获取<p>资源分区 ID（不传则不更新）</p>
                     * @return ResourcePartitionId <p>资源分区 ID（不传则不更新）</p>
                     * 
                     */
                    std::string GetResourcePartitionId() const;

                    /**
                     * 设置<p>资源分区 ID（不传则不更新）</p>
                     * @param _resourcePartitionId <p>资源分区 ID（不传则不更新）</p>
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
                     * 获取<p>队列名称（不传则不更新）</p>
                     * @return Queue <p>队列名称（不传则不更新）</p>
                     * 
                     */
                    std::string GetQueue() const;

                    /**
                     * 设置<p>队列名称（不传则不更新）</p>
                     * @param _queue <p>队列名称（不传则不更新）</p>
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
                     * 获取<p>存储卷挂载配置 JSON（不传则不更新）</p>
                     * @return Catalog <p>存储卷挂载配置 JSON（不传则不更新）</p>
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置<p>存储卷挂载配置 JSON（不传则不更新）</p>
                     * @param _catalog <p>存储卷挂载配置 JSON（不传则不更新）</p>
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
                     * 获取<p>作业优先级 1-9（不传则不更新）</p>
                     * @return Priority <p>作业优先级 1-9（不传则不更新）</p>
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置<p>作业优先级 1-9（不传则不更新）</p>
                     * @param _priority <p>作业优先级 1-9（不传则不更新）</p>
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
                     * 获取<p>高级参数 JSON（不传则不更新）</p>
                     * @return AdvancedOptions <p>高级参数 JSON（不传则不更新）</p>
                     * 
                     */
                    std::string GetAdvancedOptions() const;

                    /**
                     * 设置<p>高级参数 JSON（不传则不更新）</p>
                     * @param _advancedOptions <p>高级参数 JSON（不传则不更新）</p>
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
                     * 获取<p>MlFlow 实验追踪配置（不传则不更新）</p>
                     * @return MlFlowConfig <p>MlFlow 实验追踪配置（不传则不更新）</p>
                     * 
                     */
                    MlFlowConfig GetMlFlowConfig() const;

                    /**
                     * 设置<p>MlFlow 实验追踪配置（不传则不更新）</p>
                     * @param _mlFlowConfig <p>MlFlow 实验追踪配置（不传则不更新）</p>
                     * 
                     */
                    void SetMlFlowConfig(const MlFlowConfig& _mlFlowConfig);

                    /**
                     * 判断参数 MlFlowConfig 是否已赋值
                     * @return MlFlowConfig 是否已赋值
                     * 
                     */
                    bool MlFlowConfigHasBeenSet() const;

                    /**
                     * 获取<p>标签列表（TagKey-TagValue），null 不修改，空数组清空，非空全量替换</p>
                     * @return Tags <p>标签列表（TagKey-TagValue），null 不修改，空数组清空，非空全量替换</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签列表（TagKey-TagValue），null 不修改，空数组清空，非空全量替换</p>
                     * @param _tags <p>标签列表（TagKey-TagValue），null 不修改，空数组清空，非空全量替换</p>
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
                     * 获取<p>基础模型ID（用于模型挂载）</p>
                     * @return BaseModelUid <p>基础模型ID（用于模型挂载）</p>
                     * 
                     */
                    std::string GetBaseModelUid() const;

                    /**
                     * 设置<p>基础模型ID（用于模型挂载）</p>
                     * @param _baseModelUid <p>基础模型ID（用于模型挂载）</p>
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
                     * 获取<p>输出模型名（用于产出模型自动注册）</p>
                     * @return OutputModelName <p>输出模型名（用于产出模型自动注册）</p>
                     * 
                     */
                    std::string GetOutputModelName() const;

                    /**
                     * 设置<p>输出模型名（用于产出模型自动注册）</p>
                     * @param _outputModelName <p>输出模型名（用于产出模型自动注册）</p>
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
                     * 获取<p>数据集挂载列表（整体替换，不传则不更新）</p>
                     * @return Datasets <p>数据集挂载列表（整体替换，不传则不更新）</p>
                     * 
                     */
                    std::vector<DatasetMount> GetDatasets() const;

                    /**
                     * 设置<p>数据集挂载列表（整体替换，不传则不更新）</p>
                     * @param _datasets <p>数据集挂载列表（整体替换，不传则不更新）</p>
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
                     * 获取<p>Checkpoint 产出配置（整体替换，不传则不更新）</p>
                     * @return Checkpoint <p>Checkpoint 产出配置（整体替换，不传则不更新）</p>
                     * 
                     */
                    CheckpointConfig GetCheckpoint() const;

                    /**
                     * 设置<p>Checkpoint 产出配置（整体替换，不传则不更新）</p>
                     * @param _checkpoint <p>Checkpoint 产出配置（整体替换，不传则不更新）</p>
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
                     * 获取<p>是否启用断点续训（创建时的意图声明；实际续训由实例级「断点续训」按钮触发，不传则不更新）</p>
                     * @return ResumeTraining <p>是否启用断点续训（创建时的意图声明；实际续训由实例级「断点续训」按钮触发，不传则不更新）</p>
                     * 
                     */
                    bool GetResumeTraining() const;

                    /**
                     * 设置<p>是否启用断点续训（创建时的意图声明；实际续训由实例级「断点续训」按钮触发，不传则不更新）</p>
                     * @param _resumeTraining <p>是否启用断点续训（创建时的意图声明；实际续训由实例级「断点续训」按钮触发，不传则不更新）</p>
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
                     * 获取<p>调优参数（整体替换，未填字段回模板默认值；不传则不更新；仅 POST_TRAINING）</p>
                     * @return TuningParams <p>调优参数（整体替换，未填字段回模板默认值；不传则不更新；仅 POST_TRAINING）</p>
                     * 
                     */
                    TrainingTuningParams GetTuningParams() const;

                    /**
                     * 设置<p>调优参数（整体替换，未填字段回模板默认值；不传则不更新；仅 POST_TRAINING）</p>
                     * @param _tuningParams <p>调优参数（整体替换，未填字段回模板默认值；不传则不更新；仅 POST_TRAINING）</p>
                     * 
                     */
                    void SetTuningParams(const TrainingTuningParams& _tuningParams);

                    /**
                     * 判断参数 TuningParams 是否已赋值
                     * @return TuningParams 是否已赋值
                     * 
                     */
                    bool TuningParamsHasBeenSet() const;

                private:

                    /**
                     * <p>配置 ID</p>
                     */
                    std::string m_specId;
                    bool m_specIdHasBeenSet;

                    /**
                     * <p>配置名称（不传则不更新）</p>
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * <p>配置描述（不传则不更新）</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>启动命令（不传则不更新）</p>
                     */
                    std::string m_entrypoint;
                    bool m_entrypointHasBeenSet;

                    /**
                     * <p>镜像地址（不传则不更新）</p>
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * <p>镜像拉取类型（BuiltIn / Custom / CustomCcr，不传则不更新）</p>
                     */
                    std::string m_imagePullType;
                    bool m_imagePullTypeHasBeenSet;

                    /**
                     * <p>镜像拉取策略（Always / IfNotPresent / Never，不传则不更新）</p>
                     */
                    std::string m_imagePullPolicy;
                    bool m_imagePullPolicyHasBeenSet;

                    /**
                     * <p>代码包 COS URL（不传则不更新）</p>
                     */
                    std::string m_codePackageUrl;
                    bool m_codePackageUrlHasBeenSet;

                    /**
                     * <p>运行时环境配置 JSON（不传则不更新）</p>
                     */
                    std::string m_runtimeEnv;
                    bool m_runtimeEnvHasBeenSet;

                    /**
                     * <p>资源配置模板 ID（可选）</p>
                     */
                    std::string m_resourceConfigId;
                    bool m_resourceConfigIdHasBeenSet;

                    /**
                     * <p>资源配置 JSON（不传则不更新）</p>
                     */
                    std::string m_resourceConfig;
                    bool m_resourceConfigHasBeenSet;

                    /**
                     * <p>资源分区 ID（不传则不更新）</p>
                     */
                    std::string m_resourcePartitionId;
                    bool m_resourcePartitionIdHasBeenSet;

                    /**
                     * <p>队列名称（不传则不更新）</p>
                     */
                    std::string m_queue;
                    bool m_queueHasBeenSet;

                    /**
                     * <p>存储卷挂载配置 JSON（不传则不更新）</p>
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * <p>作业优先级 1-9（不传则不更新）</p>
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * <p>高级参数 JSON（不传则不更新）</p>
                     */
                    std::string m_advancedOptions;
                    bool m_advancedOptionsHasBeenSet;

                    /**
                     * <p>MlFlow 实验追踪配置（不传则不更新）</p>
                     */
                    MlFlowConfig m_mlFlowConfig;
                    bool m_mlFlowConfigHasBeenSet;

                    /**
                     * <p>标签列表（TagKey-TagValue），null 不修改，空数组清空，非空全量替换</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>基础模型ID（用于模型挂载）</p>
                     */
                    std::string m_baseModelUid;
                    bool m_baseModelUidHasBeenSet;

                    /**
                     * <p>输出模型名（用于产出模型自动注册）</p>
                     */
                    std::string m_outputModelName;
                    bool m_outputModelNameHasBeenSet;

                    /**
                     * <p>训练模式：sft / dpo / cpt / grpo（仅 POST_TRAINING 有值）</p>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>数据集挂载列表（整体替换，不传则不更新）</p>
                     */
                    std::vector<DatasetMount> m_datasets;
                    bool m_datasetsHasBeenSet;

                    /**
                     * <p>Checkpoint 产出配置（整体替换，不传则不更新）</p>
                     */
                    CheckpointConfig m_checkpoint;
                    bool m_checkpointHasBeenSet;

                    /**
                     * <p>是否启用断点续训（创建时的意图声明；实际续训由实例级「断点续训」按钮触发，不传则不更新）</p>
                     */
                    bool m_resumeTraining;
                    bool m_resumeTrainingHasBeenSet;

                    /**
                     * <p>调优参数（整体替换，未填字段回模板默认值；不传则不更新；仅 POST_TRAINING）</p>
                     */
                    TrainingTuningParams m_tuningParams;
                    bool m_tuningParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYTRAININGJOBSPECREQUEST_H_
