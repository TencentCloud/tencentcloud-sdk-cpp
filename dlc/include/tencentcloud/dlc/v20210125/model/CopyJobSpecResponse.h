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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_COPYJOBSPECRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_COPYJOBSPECRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Tag.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CopyJobSpec返回参数结构体
                */
                class CopyJobSpecResponse : public AbstractModel
                {
                public:
                    CopyJobSpecResponse();
                    ~CopyJobSpecResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>配置ID</p>
                     * @return Id <p>配置ID</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>配置名称</p>
                     * @return Name <p>配置名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>配置描述</p>
                     * @return Description <p>配置描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>入口命令</p>
                     * @return Entrypoint <p>入口命令</p>
                     * 
                     */
                    std::string GetEntrypoint() const;

                    /**
                     * 判断参数 Entrypoint 是否已赋值
                     * @return Entrypoint 是否已赋值
                     * 
                     */
                    bool EntrypointHasBeenSet() const;

                    /**
                     * 获取<p>镜像地址</p>
                     * @return Image <p>镜像地址</p>
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取<p>镜像拉取类型（Builtin: 内置, Custom: 自定义）</p>
                     * @return ImagePullType <p>镜像拉取类型（Builtin: 内置, Custom: 自定义）</p>
                     * 
                     */
                    std::string GetImagePullType() const;

                    /**
                     * 判断参数 ImagePullType 是否已赋值
                     * @return ImagePullType 是否已赋值
                     * 
                     */
                    bool ImagePullTypeHasBeenSet() const;

                    /**
                     * 获取<p>镜像拉取策略</p>
                     * @return ImagePullPolicy <p>镜像拉取策略</p>
                     * 
                     */
                    std::string GetImagePullPolicy() const;

                    /**
                     * 判断参数 ImagePullPolicy 是否已赋值
                     * @return ImagePullPolicy 是否已赋值
                     * 
                     */
                    bool ImagePullPolicyHasBeenSet() const;

                    /**
                     * 获取<p>资源配置(JSON)</p>
                     * @return ResourceConfig <p>资源配置(JSON)</p>
                     * 
                     */
                    std::string GetResourceConfig() const;

                    /**
                     * 判断参数 ResourceConfig 是否已赋值
                     * @return ResourceConfig 是否已赋值
                     * 
                     */
                    bool ResourceConfigHasBeenSet() const;

                    /**
                     * 获取<p>运行时环境配置(JSON)</p>
                     * @return RuntimeEnv <p>运行时环境配置(JSON)</p>
                     * 
                     */
                    std::string GetRuntimeEnv() const;

                    /**
                     * 判断参数 RuntimeEnv 是否已赋值
                     * @return RuntimeEnv 是否已赋值
                     * 
                     */
                    bool RuntimeEnvHasBeenSet() const;

                    /**
                     * 获取<p>存储卷和挂载卷配置(JSON)</p>
                     * @return Catalog <p>存储卷和挂载卷配置(JSON)</p>
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 判断参数 Catalog 是否已赋值
                     * @return Catalog 是否已赋值
                     * 
                     */
                    bool CatalogHasBeenSet() const;

                    /**
                     * 获取<p>弹性伸缩配置(JSON)</p>
                     * @return AutoscalerOptions <p>弹性伸缩配置(JSON)</p>
                     * 
                     */
                    std::string GetAutoscalerOptions() const;

                    /**
                     * 判断参数 AutoscalerOptions 是否已赋值
                     * @return AutoscalerOptions 是否已赋值
                     * 
                     */
                    bool AutoscalerOptionsHasBeenSet() const;

                    /**
                     * 获取<p>资源配置ID</p>
                     * @return ResourceConfigId <p>资源配置ID</p>
                     * 
                     */
                    std::string GetResourceConfigId() const;

                    /**
                     * 判断参数 ResourceConfigId 是否已赋值
                     * @return ResourceConfigId 是否已赋值
                     * 
                     */
                    bool ResourceConfigIdHasBeenSet() const;

                    /**
                     * 获取<p>资源配置模板是否变更</p>
                     * @return ResourceConfigChanged <p>资源配置模板是否变更</p>
                     * 
                     */
                    bool GetResourceConfigChanged() const;

                    /**
                     * 判断参数 ResourceConfigChanged 是否已赋值
                     * @return ResourceConfigChanged 是否已赋值
                     * 
                     */
                    bool ResourceConfigChangedHasBeenSet() const;

                    /**
                     * 获取<p>默认资源分区ID</p>
                     * @return ResourcePartitionId <p>默认资源分区ID</p>
                     * 
                     */
                    std::string GetResourcePartitionId() const;

                    /**
                     * 判断参数 ResourcePartitionId 是否已赋值
                     * @return ResourcePartitionId 是否已赋值
                     * 
                     */
                    bool ResourcePartitionIdHasBeenSet() const;

                    /**
                     * 获取<p>默认资源分区名称</p>
                     * @return ResourcePartitionName <p>默认资源分区名称</p>
                     * 
                     */
                    std::string GetResourcePartitionName() const;

                    /**
                     * 判断参数 ResourcePartitionName 是否已赋值
                     * @return ResourcePartitionName 是否已赋值
                     * 
                     */
                    bool ResourcePartitionNameHasBeenSet() const;

                    /**
                     * 获取<p>默认队列名称</p>
                     * @return Queue <p>默认队列名称</p>
                     * 
                     */
                    std::string GetQueue() const;

                    /**
                     * 判断参数 Queue 是否已赋值
                     * @return Queue 是否已赋值
                     * 
                     */
                    bool QueueHasBeenSet() const;

                    /**
                     * 获取<p>作业包URL</p>
                     * @return JobPackage <p>作业包URL</p>
                     * 
                     */
                    std::string GetJobPackage() const;

                    /**
                     * 判断参数 JobPackage 是否已赋值
                     * @return JobPackage 是否已赋值
                     * 
                     */
                    bool JobPackageHasBeenSet() const;

                    /**
                     * 获取<p>作业包名称</p>
                     * @return JobPackageName <p>作业包名称</p>
                     * 
                     */
                    std::string GetJobPackageName() const;

                    /**
                     * 判断参数 JobPackageName 是否已赋值
                     * @return JobPackageName 是否已赋值
                     * 
                     */
                    bool JobPackageNameHasBeenSet() const;

                    /**
                     * 获取<p>应用ID</p>
                     * @return AppId <p>应用ID</p>
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>创建者UIN</p>
                     * @return Uin <p>创建者UIN</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>该配置产生的作业实例数量</p>
                     * @return JobInstanceCount <p>该配置产生的作业实例数量</p>
                     * 
                     */
                    int64_t GetJobInstanceCount() const;

                    /**
                     * 判断参数 JobInstanceCount 是否已赋值
                     * @return JobInstanceCount 是否已赋值
                     * 
                     */
                    bool JobInstanceCountHasBeenSet() const;

                    /**
                     * 获取<p>是否有运行中的作业实例</p>
                     * @return HasRunningJobs <p>是否有运行中的作业实例</p>
                     * 
                     */
                    bool GetHasRunningJobs() const;

                    /**
                     * 判断参数 HasRunningJobs 是否已赋值
                     * @return HasRunningJobs 是否已赋值
                     * 
                     */
                    bool HasRunningJobsHasBeenSet() const;

                    /**
                     * 获取<p>高级参数配置，json类型</p>
                     * @return AdvancedOptions <p>高级参数配置，json类型</p>
                     * 
                     */
                    std::string GetAdvancedOptions() const;

                    /**
                     * 判断参数 AdvancedOptions 是否已赋值
                     * @return AdvancedOptions 是否已赋值
                     * 
                     */
                    bool AdvancedOptionsHasBeenSet() const;

                    /**
                     * 获取<p>默认计算组名称（与 ClusterGroup 等价，新调用方使用 GroupId）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupId <p>默认计算组名称（与 ClusterGroup 等价，新调用方使用 GroupId）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取<p>默认集群 ID（与 GroupId 互斥）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId <p>默认集群 ID（与 GroupId 互斥）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>作业优先级（1-9，数字越大优先级越高）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Priority <p>作业优先级（1-9，数字越大优先级越高）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取<p>标签列表（TagKey-TagValue），用于将资源与腾讯云标签系统中的标签绑定</p>
                     * @return Tags <p>标签列表（TagKey-TagValue），用于将资源与腾讯云标签系统中的标签绑定</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>集群分派策略</p><p>枚举值：</p><ul><li>RANDOM： 随机分配</li><li>NULL： 无</li></ul>
                     * @return DispatchStrategy <p>集群分派策略</p><p>枚举值：</p><ul><li>RANDOM： 随机分配</li><li>NULL： 无</li></ul>
                     * 
                     */
                    std::string GetDispatchStrategy() const;

                    /**
                     * 判断参数 DispatchStrategy 是否已赋值
                     * @return DispatchStrategy 是否已赋值
                     * 
                     */
                    bool DispatchStrategyHasBeenSet() const;

                    /**
                     * 获取<p>作业提交目标：GROUP（按计算组分派）/ CLUSTER（指定集群）/ SERVERLESS（按 Serverless 拉起）</p><p>枚举值：</p><ul><li>GROUP： 按计算组分派</li><li>CLUSTER： 指定集群</li><li>SERVERLESS： 按 Serverless 拉起</li></ul>
                     * @return SubmissionTarget <p>作业提交目标：GROUP（按计算组分派）/ CLUSTER（指定集群）/ SERVERLESS（按 Serverless 拉起）</p><p>枚举值：</p><ul><li>GROUP： 按计算组分派</li><li>CLUSTER： 指定集群</li><li>SERVERLESS： 按 Serverless 拉起</li></ul>
                     * 
                     */
                    std::string GetSubmissionTarget() const;

                    /**
                     * 判断参数 SubmissionTarget 是否已赋值
                     * @return SubmissionTarget 是否已赋值
                     * 
                     */
                    bool SubmissionTargetHasBeenSet() const;

                    /**
                     * 获取<p>集群组名称</p>
                     * @return GroupName <p>集群组名称</p>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取<p>集群名称</p>
                     * @return ClusterName <p>集群名称</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                private:

                    /**
                     * <p>配置ID</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>配置名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>配置描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>入口命令</p>
                     */
                    std::string m_entrypoint;
                    bool m_entrypointHasBeenSet;

                    /**
                     * <p>镜像地址</p>
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * <p>镜像拉取类型（Builtin: 内置, Custom: 自定义）</p>
                     */
                    std::string m_imagePullType;
                    bool m_imagePullTypeHasBeenSet;

                    /**
                     * <p>镜像拉取策略</p>
                     */
                    std::string m_imagePullPolicy;
                    bool m_imagePullPolicyHasBeenSet;

                    /**
                     * <p>资源配置(JSON)</p>
                     */
                    std::string m_resourceConfig;
                    bool m_resourceConfigHasBeenSet;

                    /**
                     * <p>运行时环境配置(JSON)</p>
                     */
                    std::string m_runtimeEnv;
                    bool m_runtimeEnvHasBeenSet;

                    /**
                     * <p>存储卷和挂载卷配置(JSON)</p>
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * <p>弹性伸缩配置(JSON)</p>
                     */
                    std::string m_autoscalerOptions;
                    bool m_autoscalerOptionsHasBeenSet;

                    /**
                     * <p>资源配置ID</p>
                     */
                    std::string m_resourceConfigId;
                    bool m_resourceConfigIdHasBeenSet;

                    /**
                     * <p>资源配置模板是否变更</p>
                     */
                    bool m_resourceConfigChanged;
                    bool m_resourceConfigChangedHasBeenSet;

                    /**
                     * <p>默认资源分区ID</p>
                     */
                    std::string m_resourcePartitionId;
                    bool m_resourcePartitionIdHasBeenSet;

                    /**
                     * <p>默认资源分区名称</p>
                     */
                    std::string m_resourcePartitionName;
                    bool m_resourcePartitionNameHasBeenSet;

                    /**
                     * <p>默认队列名称</p>
                     */
                    std::string m_queue;
                    bool m_queueHasBeenSet;

                    /**
                     * <p>作业包URL</p>
                     */
                    std::string m_jobPackage;
                    bool m_jobPackageHasBeenSet;

                    /**
                     * <p>作业包名称</p>
                     */
                    std::string m_jobPackageName;
                    bool m_jobPackageNameHasBeenSet;

                    /**
                     * <p>应用ID</p>
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>创建者UIN</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>该配置产生的作业实例数量</p>
                     */
                    int64_t m_jobInstanceCount;
                    bool m_jobInstanceCountHasBeenSet;

                    /**
                     * <p>是否有运行中的作业实例</p>
                     */
                    bool m_hasRunningJobs;
                    bool m_hasRunningJobsHasBeenSet;

                    /**
                     * <p>高级参数配置，json类型</p>
                     */
                    std::string m_advancedOptions;
                    bool m_advancedOptionsHasBeenSet;

                    /**
                     * <p>默认计算组名称（与 ClusterGroup 等价，新调用方使用 GroupId）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>默认集群 ID（与 GroupId 互斥）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>作业优先级（1-9，数字越大优先级越高）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * <p>标签列表（TagKey-TagValue），用于将资源与腾讯云标签系统中的标签绑定</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>集群分派策略</p><p>枚举值：</p><ul><li>RANDOM： 随机分配</li><li>NULL： 无</li></ul>
                     */
                    std::string m_dispatchStrategy;
                    bool m_dispatchStrategyHasBeenSet;

                    /**
                     * <p>作业提交目标：GROUP（按计算组分派）/ CLUSTER（指定集群）/ SERVERLESS（按 Serverless 拉起）</p><p>枚举值：</p><ul><li>GROUP： 按计算组分派</li><li>CLUSTER： 指定集群</li><li>SERVERLESS： 按 Serverless 拉起</li></ul>
                     */
                    std::string m_submissionTarget;
                    bool m_submissionTargetHasBeenSet;

                    /**
                     * <p>集群组名称</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>集群名称</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_COPYJOBSPECRESPONSE_H_
