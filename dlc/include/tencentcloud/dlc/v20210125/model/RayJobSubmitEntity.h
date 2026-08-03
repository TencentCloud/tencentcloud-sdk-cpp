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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_RAYJOBSUBMITENTITY_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_RAYJOBSUBMITENTITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Ray任务提交实体
                */
                class RayJobSubmitEntity : public AbstractModel
                {
                public:
                    RayJobSubmitEntity();
                    ~RayJobSubmitEntity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务ID</p>
                     * @return Id <p>任务ID</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>任务ID</p>
                     * @param _id <p>任务ID</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>所属资源分区ID</p>
                     * @return ResourcePartitionId <p>所属资源分区ID</p>
                     * 
                     */
                    std::string GetResourcePartitionId() const;

                    /**
                     * 设置<p>所属资源分区ID</p>
                     * @param _resourcePartitionId <p>所属资源分区ID</p>
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
                     * 获取<p>默认资源分区名称</p>
                     * @return ResourcePartitionName <p>默认资源分区名称</p>
                     * 
                     */
                    std::string GetResourcePartitionName() const;

                    /**
                     * 设置<p>默认资源分区名称</p>
                     * @param _resourcePartitionName <p>默认资源分区名称</p>
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
                     * 获取<p>所属队列名称</p>
                     * @return Queue <p>所属队列名称</p>
                     * 
                     */
                    std::string GetQueue() const;

                    /**
                     * 设置<p>所属队列名称</p>
                     * @param _queue <p>所属队列名称</p>
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
                     * 获取<p>任务状态</p>
                     * @return Status <p>任务状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>任务状态</p>
                     * @param _status <p>任务状态</p>
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
                     * 获取<p>应用ID</p>
                     * @return AppId <p>应用ID</p>
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>应用ID</p>
                     * @param _appId <p>应用ID</p>
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>用户主账号UIN</p>
                     * @return Uin <p>用户主账号UIN</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>用户主账号UIN</p>
                     * @param _uin <p>用户主账号UIN</p>
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>子用户UIN</p>
                     * @return SubAccountUin <p>子用户UIN</p>
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置<p>子用户UIN</p>
                     * @param _subAccountUin <p>子用户UIN</p>
                     * 
                     */
                    void SetSubAccountUin(const std::string& _subAccountUin);

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     * 
                     */
                    bool SubAccountUinHasBeenSet() const;

                    /**
                     * 获取<p>子用户名称（由聚合层通过 CAM 接口回填）</p>
                     * @return SubAccountName <p>子用户名称（由聚合层通过 CAM 接口回填）</p>
                     * 
                     */
                    std::string GetSubAccountName() const;

                    /**
                     * 设置<p>子用户名称（由聚合层通过 CAM 接口回填）</p>
                     * @param _subAccountName <p>子用户名称（由聚合层通过 CAM 接口回填）</p>
                     * 
                     */
                    void SetSubAccountName(const std::string& _subAccountName);

                    /**
                     * 判断参数 SubAccountName 是否已赋值
                     * @return SubAccountName 是否已赋值
                     * 
                     */
                    bool SubAccountNameHasBeenSet() const;

                    /**
                     * 获取<p>历史记录链接</p>
                     * @return HistoryUrl <p>历史记录链接</p>
                     * 
                     */
                    std::string GetHistoryUrl() const;

                    /**
                     * 设置<p>历史记录链接</p>
                     * @param _historyUrl <p>历史记录链接</p>
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
                     * 获取<p>运行时间(ms)</p>
                     * @return RunningTime <p>运行时间(ms)</p>
                     * 
                     */
                    int64_t GetRunningTime() const;

                    /**
                     * 设置<p>运行时间(ms)</p>
                     * @param _runningTime <p>运行时间(ms)</p>
                     * 
                     */
                    void SetRunningTime(const int64_t& _runningTime);

                    /**
                     * 判断参数 RunningTime 是否已赋值
                     * @return RunningTime 是否已赋值
                     * 
                     */
                    bool RunningTimeHasBeenSet() const;

                    /**
                     * 获取<p>完成时间</p>
                     * @return FinishTime <p>完成时间</p>
                     * 
                     */
                    uint64_t GetFinishTime() const;

                    /**
                     * 设置<p>完成时间</p>
                     * @param _finishTime <p>完成时间</p>
                     * 
                     */
                    void SetFinishTime(const uint64_t& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>失败原因/错误信息</p>
                     * @return ErrorMessage <p>失败原因/错误信息</p>
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置<p>失败原因/错误信息</p>
                     * @param _errorMessage <p>失败原因/错误信息</p>
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
                     * 获取<p>运行时环境配置(JSON)</p>
                     * @return RuntimeEnv <p>运行时环境配置(JSON)</p>
                     * 
                     */
                    std::string GetRuntimeEnv() const;

                    /**
                     * 设置<p>运行时环境配置(JSON)</p>
                     * @param _runtimeEnv <p>运行时环境配置(JSON)</p>
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
                     * 获取<p>镜像地址</p>
                     * @return Image <p>镜像地址</p>
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置<p>镜像地址</p>
                     * @param _image <p>镜像地址</p>
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
                     * 获取<p>资源配置(JSON)</p>
                     * @return ResourceConfig <p>资源配置(JSON)</p>
                     * 
                     */
                    std::string GetResourceConfig() const;

                    /**
                     * 设置<p>资源配置(JSON)</p>
                     * @param _resourceConfig <p>资源配置(JSON)</p>
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
                     * 获取<p>存储卷和挂载卷配置(JSON)</p>
                     * @return Catalog <p>存储卷和挂载卷配置(JSON)</p>
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置<p>存储卷和挂载卷配置(JSON)</p>
                     * @param _catalog <p>存储卷和挂载卷配置(JSON)</p>
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
                     * 获取<p>镜像拉取策略</p>
                     * @return ImagePullPolicy <p>镜像拉取策略</p>
                     * 
                     */
                    std::string GetImagePullPolicy() const;

                    /**
                     * 设置<p>镜像拉取策略</p>
                     * @param _imagePullPolicy <p>镜像拉取策略</p>
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
                     * 获取<p>弹性伸缩配置(JSON)</p>
                     * @return AutoscalerOptions <p>弹性伸缩配置(JSON)</p>
                     * 
                     */
                    std::string GetAutoscalerOptions() const;

                    /**
                     * 设置<p>弹性伸缩配置(JSON)</p>
                     * @param _autoscalerOptions <p>弹性伸缩配置(JSON)</p>
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
                     * 获取<p>来源配置ID</p>
                     * @return SpecId <p>来源配置ID</p>
                     * 
                     */
                    std::string GetSpecId() const;

                    /**
                     * 设置<p>来源配置ID</p>
                     * @param _specId <p>来源配置ID</p>
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
                     * 获取<p>来源配置名称</p>
                     * @return SpecName <p>来源配置名称</p>
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置<p>来源配置名称</p>
                     * @param _specName <p>来源配置名称</p>
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
                     * 获取<p>作业来源（如 RAY_JOB / RAY_SERVE / 平台直提交等）</p>
                     * @return JobSource <p>作业来源（如 RAY_JOB / RAY_SERVE / 平台直提交等）</p>
                     * 
                     */
                    std::string GetJobSource() const;

                    /**
                     * 设置<p>作业来源（如 RAY_JOB / RAY_SERVE / 平台直提交等）</p>
                     * @param _jobSource <p>作业来源（如 RAY_JOB / RAY_SERVE / 平台直提交等）</p>
                     * 
                     */
                    void SetJobSource(const std::string& _jobSource);

                    /**
                     * 判断参数 JobSource 是否已赋值
                     * @return JobSource 是否已赋值
                     * 
                     */
                    bool JobSourceHasBeenSet() const;

                private:

                    /**
                     * <p>任务ID</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>所属资源分区ID</p>
                     */
                    std::string m_resourcePartitionId;
                    bool m_resourcePartitionIdHasBeenSet;

                    /**
                     * <p>默认资源分区名称</p>
                     */
                    std::string m_resourcePartitionName;
                    bool m_resourcePartitionNameHasBeenSet;

                    /**
                     * <p>所属队列名称</p>
                     */
                    std::string m_queue;
                    bool m_queueHasBeenSet;

                    /**
                     * <p>任务状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>入口命令</p>
                     */
                    std::string m_entrypoint;
                    bool m_entrypointHasBeenSet;

                    /**
                     * <p>任务名称</p>
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * <p>应用ID</p>
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>用户主账号UIN</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>子用户UIN</p>
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                    /**
                     * <p>子用户名称（由聚合层通过 CAM 接口回填）</p>
                     */
                    std::string m_subAccountName;
                    bool m_subAccountNameHasBeenSet;

                    /**
                     * <p>历史记录链接</p>
                     */
                    std::string m_historyUrl;
                    bool m_historyUrlHasBeenSet;

                    /**
                     * <p>运行时间(ms)</p>
                     */
                    int64_t m_runningTime;
                    bool m_runningTimeHasBeenSet;

                    /**
                     * <p>完成时间</p>
                     */
                    uint64_t m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>失败原因/错误信息</p>
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * <p>运行时环境配置(JSON)</p>
                     */
                    std::string m_runtimeEnv;
                    bool m_runtimeEnvHasBeenSet;

                    /**
                     * <p>镜像地址</p>
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * <p>资源配置(JSON)</p>
                     */
                    std::string m_resourceConfig;
                    bool m_resourceConfigHasBeenSet;

                    /**
                     * <p>存储卷和挂载卷配置(JSON)</p>
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * <p>镜像拉取策略</p>
                     */
                    std::string m_imagePullPolicy;
                    bool m_imagePullPolicyHasBeenSet;

                    /**
                     * <p>弹性伸缩配置(JSON)</p>
                     */
                    std::string m_autoscalerOptions;
                    bool m_autoscalerOptionsHasBeenSet;

                    /**
                     * <p>来源配置ID</p>
                     */
                    std::string m_specId;
                    bool m_specIdHasBeenSet;

                    /**
                     * <p>来源配置名称</p>
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * <p>高级参数，JSON 字符串（透传到 Neutrino）</p>
                     */
                    std::string m_advancedOptions;
                    bool m_advancedOptionsHasBeenSet;

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
                     * <p>作业来源（如 RAY_JOB / RAY_SERVE / 平台直提交等）</p>
                     */
                    std::string m_jobSource;
                    bool m_jobSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_RAYJOBSUBMITENTITY_H_
