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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_SUBMITRAYJOBREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_SUBMITRAYJOBREQUEST_H_

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
                * SubmitRayJob请求参数结构体
                */
                class SubmitRayJobRequest : public AbstractModel
                {
                public:
                    SubmitRayJobRequest();
                    ~SubmitRayJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>入口命令</p>
                     * @return Entrypoint <p>入口命令</p>
                     * 
                     */
                    std::string GetEntrypoint() const;

                    /**
                     * 设置<p>入口命令</p>
                     * @param _entrypoint <p>入口命令</p>
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
                     * 获取<p>集群ID</p>
                     * @return ClusterId <p>集群ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID</p>
                     * @param _clusterId <p>集群ID</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>资源分区ID</p>
                     * @return ResourcePartitionId <p>资源分区ID</p>
                     * 
                     */
                    std::string GetResourcePartitionId() const;

                    /**
                     * 设置<p>资源分区ID</p>
                     * @param _resourcePartitionId <p>资源分区ID</p>
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
                     * 获取<p>任务名称</p>
                     * @return JobName <p>任务名称</p>
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置<p>任务名称</p>
                     * @param _jobName <p>任务名称</p>
                     * 
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取<p>运行时环境</p>
                     * @return RuntimeEnv <p>运行时环境</p>
                     * 
                     */
                    std::string GetRuntimeEnv() const;

                    /**
                     * 设置<p>运行时环境</p>
                     * @param _runtimeEnv <p>运行时环境</p>
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
                     * 获取<p>镜像名称</p>
                     * @return Image <p>镜像名称</p>
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置<p>镜像名称</p>
                     * @param _image <p>镜像名称</p>
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
                     * 获取<p>镜像拉取策略（Always, IfNotPresent, Never）</p>
                     * @return ImagePullPolicy <p>镜像拉取策略（Always, IfNotPresent, Never）</p>
                     * 
                     */
                    std::string GetImagePullPolicy() const;

                    /**
                     * 设置<p>镜像拉取策略（Always, IfNotPresent, Never）</p>
                     * @param _imagePullPolicy <p>镜像拉取策略（Always, IfNotPresent, Never）</p>
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
                     * 获取<p>镜像拉取类型（BuiltIn: 内置, Custom: 自定义-TCR, CustomCcr: 自定义-CCR）</p>
                     * @return ImagePullType <p>镜像拉取类型（BuiltIn: 内置, Custom: 自定义-TCR, CustomCcr: 自定义-CCR）</p>
                     * 
                     */
                    std::string GetImagePullType() const;

                    /**
                     * 设置<p>镜像拉取类型（BuiltIn: 内置, Custom: 自定义-TCR, CustomCcr: 自定义-CCR）</p>
                     * @param _imagePullType <p>镜像拉取类型（BuiltIn: 内置, Custom: 自定义-TCR, CustomCcr: 自定义-CCR）</p>
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
                     * 获取<p>资源配置</p>
                     * @return ResourceConfig <p>资源配置</p>
                     * 
                     */
                    std::string GetResourceConfig() const;

                    /**
                     * 设置<p>资源配置</p>
                     * @param _resourceConfig <p>资源配置</p>
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
                     * 获取<p>目录</p>
                     * @return Catalog <p>目录</p>
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置<p>目录</p>
                     * @param _catalog <p>目录</p>
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
                     * 获取<p>弹性伸缩配置</p>
                     * @return AutoscalerOptions <p>弹性伸缩配置</p>
                     * 
                     */
                    std::string GetAutoscalerOptions() const;

                    /**
                     * 设置<p>弹性伸缩配置</p>
                     * @param _autoscalerOptions <p>弹性伸缩配置</p>
                     * 
                     */
                    void SetAutoscalerOptions(const std::string& _autoscalerOptions);

                    /**
                     * 判断参数 AutoscalerOptions 是否已赋值
                     * @return AutoscalerOptions 是否已赋值
                     * 
                     */
                    bool AutoscalerOptionsHasBeenSet() const;

                    /**
                     * 获取<p>高级参数，JSON 字符串（透传到 Neutrino）</p>
                     * @return AdvancedOptions <p>高级参数，JSON 字符串（透传到 Neutrino）</p>
                     * 
                     */
                    std::string GetAdvancedOptions() const;

                    /**
                     * 设置<p>高级参数，JSON 字符串（透传到 Neutrino）</p>
                     * @param _advancedOptions <p>高级参数，JSON 字符串（透传到 Neutrino）</p>
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
                     * 获取<p>计算组ID；与 ClusterId 互斥。组成员展开为候选集群后由 neutrino 侧路由</p>
                     * @return GroupId <p>计算组ID；与 ClusterId 互斥。组成员展开为候选集群后由 neutrino 侧路由</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>计算组ID；与 ClusterId 互斥。组成员展开为候选集群后由 neutrino 侧路由</p>
                     * @param _groupId <p>计算组ID；与 ClusterId 互斥。组成员展开为候选集群后由 neutrino 侧路由</p>
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取<p>集群分派策略，本期仅支持 RANDOM；大小写不敏感</p>
                     * @return DispatchStrategy <p>集群分派策略，本期仅支持 RANDOM；大小写不敏感</p>
                     * 
                     */
                    std::string GetDispatchStrategy() const;

                    /**
                     * 设置<p>集群分派策略，本期仅支持 RANDOM；大小写不敏感</p>
                     * @param _dispatchStrategy <p>集群分派策略，本期仅支持 RANDOM；大小写不敏感</p>
                     * 
                     */
                    void SetDispatchStrategy(const std::string& _dispatchStrategy);

                    /**
                     * 判断参数 DispatchStrategy 是否已赋值
                     * @return DispatchStrategy 是否已赋值
                     * 
                     */
                    bool DispatchStrategyHasBeenSet() const;

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
                     * 获取<p>标签列表（TagKey-TagValue），用于将资源与腾讯云标签系统中的标签绑定</p>
                     * @return Tags <p>标签列表（TagKey-TagValue），用于将资源与腾讯云标签系统中的标签绑定</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签列表（TagKey-TagValue），用于将资源与腾讯云标签系统中的标签绑定</p>
                     * @param _tags <p>标签列表（TagKey-TagValue），用于将资源与腾讯云标签系统中的标签绑定</p>
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
                     * 获取<p>作业包 URL</p>
                     * @return JobPackage <p>作业包 URL</p>
                     * 
                     */
                    std::string GetJobPackage() const;

                    /**
                     * 设置<p>作业包 URL</p>
                     * @param _jobPackage <p>作业包 URL</p>
                     * 
                     */
                    void SetJobPackage(const std::string& _jobPackage);

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
                     * 设置<p>作业包名称</p>
                     * @param _jobPackageName <p>作业包名称</p>
                     * 
                     */
                    void SetJobPackageName(const std::string& _jobPackageName);

                    /**
                     * 判断参数 JobPackageName 是否已赋值
                     * @return JobPackageName 是否已赋值
                     * 
                     */
                    bool JobPackageNameHasBeenSet() const;

                    /**
                     * 获取<p>作业包来源类型（Local: 本地上传, Cos: 用户自有 COS 桶地址）；缺省时按 Local 处理</p>
                     * @return JobPackageSource <p>作业包来源类型（Local: 本地上传, Cos: 用户自有 COS 桶地址）；缺省时按 Local 处理</p>
                     * 
                     */
                    std::string GetJobPackageSource() const;

                    /**
                     * 设置<p>作业包来源类型（Local: 本地上传, Cos: 用户自有 COS 桶地址）；缺省时按 Local 处理</p>
                     * @param _jobPackageSource <p>作业包来源类型（Local: 本地上传, Cos: 用户自有 COS 桶地址）；缺省时按 Local 处理</p>
                     * 
                     */
                    void SetJobPackageSource(const std::string& _jobPackageSource);

                    /**
                     * 判断参数 JobPackageSource 是否已赋值
                     * @return JobPackageSource 是否已赋值
                     * 
                     */
                    bool JobPackageSourceHasBeenSet() const;

                    /**
                     * 获取<p>业务来源标识，只为调用上下文，不落盘 JobSpec</p>
                     * @return JobSource <p>业务来源标识，只为调用上下文，不落盘 JobSpec</p>
                     * 
                     */
                    std::string GetJobSource() const;

                    /**
                     * 设置<p>业务来源标识，只为调用上下文，不落盘 JobSpec</p>
                     * @param _jobSource <p>业务来源标识，只为调用上下文，不落盘 JobSpec</p>
                     * 
                     */
                    void SetJobSource(const std::string& _jobSource);

                    /**
                     * 判断参数 JobSource 是否已赋值
                     * @return JobSource 是否已赋值
                     * 
                     */
                    bool JobSourceHasBeenSet() const;

                    /**
                     * 获取<p>外部工作流引擎业务键 flowId</p>
                     * @return FlowId <p>外部工作流引擎业务键 flowId</p>
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置<p>外部工作流引擎业务键 flowId</p>
                     * @param _flowId <p>外部工作流引擎业务键 flowId</p>
                     * 
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取<p>外部工作流引擎业务键 executionId</p>
                     * @return ExecutionId <p>外部工作流引擎业务键 executionId</p>
                     * 
                     */
                    std::string GetExecutionId() const;

                    /**
                     * 设置<p>外部工作流引擎业务键 executionId</p>
                     * @param _executionId <p>外部工作流引擎业务键 executionId</p>
                     * 
                     */
                    void SetExecutionId(const std::string& _executionId);

                    /**
                     * 判断参数 ExecutionId 是否已赋值
                     * @return ExecutionId 是否已赋值
                     * 
                     */
                    bool ExecutionIdHasBeenSet() const;

                    /**
                     * 获取<p>用户网络配置 JSON 字符串</p>
                     * @return NetworkConfig <p>用户网络配置 JSON 字符串</p>
                     * 
                     */
                    std::string GetNetworkConfig() const;

                    /**
                     * 设置<p>用户网络配置 JSON 字符串</p>
                     * @param _networkConfig <p>用户网络配置 JSON 字符串</p>
                     * 
                     */
                    void SetNetworkConfig(const std::string& _networkConfig);

                    /**
                     * 判断参数 NetworkConfig 是否已赋值
                     * @return NetworkConfig 是否已赋值
                     * 
                     */
                    bool NetworkConfigHasBeenSet() const;

                private:

                    /**
                     * <p>入口命令</p>
                     */
                    std::string m_entrypoint;
                    bool m_entrypointHasBeenSet;

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>资源分区ID</p>
                     */
                    std::string m_resourcePartitionId;
                    bool m_resourcePartitionIdHasBeenSet;

                    /**
                     * <p>队列名称</p>
                     */
                    std::string m_queue;
                    bool m_queueHasBeenSet;

                    /**
                     * <p>任务名称</p>
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * <p>运行时环境</p>
                     */
                    std::string m_runtimeEnv;
                    bool m_runtimeEnvHasBeenSet;

                    /**
                     * <p>镜像名称</p>
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * <p>镜像拉取策略（Always, IfNotPresent, Never）</p>
                     */
                    std::string m_imagePullPolicy;
                    bool m_imagePullPolicyHasBeenSet;

                    /**
                     * <p>镜像拉取类型（BuiltIn: 内置, Custom: 自定义-TCR, CustomCcr: 自定义-CCR）</p>
                     */
                    std::string m_imagePullType;
                    bool m_imagePullTypeHasBeenSet;

                    /**
                     * <p>资源配置</p>
                     */
                    std::string m_resourceConfig;
                    bool m_resourceConfigHasBeenSet;

                    /**
                     * <p>目录</p>
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * <p>弹性伸缩配置</p>
                     */
                    std::string m_autoscalerOptions;
                    bool m_autoscalerOptionsHasBeenSet;

                    /**
                     * <p>高级参数，JSON 字符串（透传到 Neutrino）</p>
                     */
                    std::string m_advancedOptions;
                    bool m_advancedOptionsHasBeenSet;

                    /**
                     * <p>计算组ID；与 ClusterId 互斥。组成员展开为候选集群后由 neutrino 侧路由</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>集群分派策略，本期仅支持 RANDOM；大小写不敏感</p>
                     */
                    std::string m_dispatchStrategy;
                    bool m_dispatchStrategyHasBeenSet;

                    /**
                     * <p>作业优先级（1-9，数字越大优先级越高）</p>
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * <p>标签列表（TagKey-TagValue），用于将资源与腾讯云标签系统中的标签绑定</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>作业包 URL</p>
                     */
                    std::string m_jobPackage;
                    bool m_jobPackageHasBeenSet;

                    /**
                     * <p>作业包名称</p>
                     */
                    std::string m_jobPackageName;
                    bool m_jobPackageNameHasBeenSet;

                    /**
                     * <p>作业包来源类型（Local: 本地上传, Cos: 用户自有 COS 桶地址）；缺省时按 Local 处理</p>
                     */
                    std::string m_jobPackageSource;
                    bool m_jobPackageSourceHasBeenSet;

                    /**
                     * <p>业务来源标识，只为调用上下文，不落盘 JobSpec</p>
                     */
                    std::string m_jobSource;
                    bool m_jobSourceHasBeenSet;

                    /**
                     * <p>外部工作流引擎业务键 flowId</p>
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * <p>外部工作流引擎业务键 executionId</p>
                     */
                    std::string m_executionId;
                    bool m_executionIdHasBeenSet;

                    /**
                     * <p>用户网络配置 JSON 字符串</p>
                     */
                    std::string m_networkConfig;
                    bool m_networkConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_SUBMITRAYJOBREQUEST_H_
