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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_CREATEMODELSERVICEREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_CREATEMODELSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ModelInfo.h>
#include <tencentcloud/tione/v20211111/model/ImageInfo.h>
#include <tencentcloud/tione/v20211111/model/EnvVar.h>
#include <tencentcloud/tione/v20211111/model/ResourceInfo.h>
#include <tencentcloud/tione/v20211111/model/HorizontalPodAutoscaler.h>
#include <tencentcloud/tione/v20211111/model/LogConfig.h>
#include <tencentcloud/tione/v20211111/model/Tag.h>
#include <tencentcloud/tione/v20211111/model/CronScaleJob.h>
#include <tencentcloud/tione/v20211111/model/ScheduledAction.h>
#include <tencentcloud/tione/v20211111/model/VolumeMount.h>
#include <tencentcloud/tione/v20211111/model/ServiceLimit.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * CreateModelService请求参数结构体
                */
                class CreateModelServiceRequest : public AbstractModel
                {
                public:
                    CreateModelServiceRequest();
                    ~CreateModelServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取新增版本时需要填写
                     * @return ServiceGroupId 新增版本时需要填写
                     */
                    std::string GetServiceGroupId() const;

                    /**
                     * 设置新增版本时需要填写
                     * @param ServiceGroupId 新增版本时需要填写
                     */
                    void SetServiceGroupId(const std::string& _serviceGroupId);

                    /**
                     * 判断参数 ServiceGroupId 是否已赋值
                     * @return ServiceGroupId 是否已赋值
                     */
                    bool ServiceGroupIdHasBeenSet() const;

                    /**
                     * 获取不超过60个字，仅支持英文、数字、下划线"_"、短横"-"，只能以英文、数字开头
                     * @return ServiceGroupName 不超过60个字，仅支持英文、数字、下划线"_"、短横"-"，只能以英文、数字开头
                     */
                    std::string GetServiceGroupName() const;

                    /**
                     * 设置不超过60个字，仅支持英文、数字、下划线"_"、短横"-"，只能以英文、数字开头
                     * @param ServiceGroupName 不超过60个字，仅支持英文、数字、下划线"_"、短横"-"，只能以英文、数字开头
                     */
                    void SetServiceGroupName(const std::string& _serviceGroupName);

                    /**
                     * 判断参数 ServiceGroupName 是否已赋值
                     * @return ServiceGroupName 是否已赋值
                     */
                    bool ServiceGroupNameHasBeenSet() const;

                    /**
                     * 获取模型服务的描述
                     * @return ServiceDescription 模型服务的描述
                     */
                    std::string GetServiceDescription() const;

                    /**
                     * 设置模型服务的描述
                     * @param ServiceDescription 模型服务的描述
                     */
                    void SetServiceDescription(const std::string& _serviceDescription);

                    /**
                     * 判断参数 ServiceDescription 是否已赋值
                     * @return ServiceDescription 是否已赋值
                     */
                    bool ServiceDescriptionHasBeenSet() const;

                    /**
                     * 获取付费模式,有 PREPAID （包年包月）和 POSTPAID_BY_HOUR（按量付费）
                     * @return ChargeType 付费模式,有 PREPAID （包年包月）和 POSTPAID_BY_HOUR（按量付费）
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置付费模式,有 PREPAID （包年包月）和 POSTPAID_BY_HOUR（按量付费）
                     * @param ChargeType 付费模式,有 PREPAID （包年包月）和 POSTPAID_BY_HOUR（按量付费）
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取预付费模式下所属的资源组id，同服务组下唯一
                     * @return ResourceGroupId 预付费模式下所属的资源组id，同服务组下唯一
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置预付费模式下所属的资源组id，同服务组下唯一
                     * @param ResourceGroupId 预付费模式下所属的资源组id，同服务组下唯一
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取模型信息，需要挂载模型时填写
                     * @return ModelInfo 模型信息，需要挂载模型时填写
                     */
                    ModelInfo GetModelInfo() const;

                    /**
                     * 设置模型信息，需要挂载模型时填写
                     * @param ModelInfo 模型信息，需要挂载模型时填写
                     */
                    void SetModelInfo(const ModelInfo& _modelInfo);

                    /**
                     * 判断参数 ModelInfo 是否已赋值
                     * @return ModelInfo 是否已赋值
                     */
                    bool ModelInfoHasBeenSet() const;

                    /**
                     * 获取镜像信息，配置服务运行所需的镜像地址等信息
                     * @return ImageInfo 镜像信息，配置服务运行所需的镜像地址等信息
                     */
                    ImageInfo GetImageInfo() const;

                    /**
                     * 设置镜像信息，配置服务运行所需的镜像地址等信息
                     * @param ImageInfo 镜像信息，配置服务运行所需的镜像地址等信息
                     */
                    void SetImageInfo(const ImageInfo& _imageInfo);

                    /**
                     * 判断参数 ImageInfo 是否已赋值
                     * @return ImageInfo 是否已赋值
                     */
                    bool ImageInfoHasBeenSet() const;

                    /**
                     * 获取环境变量，可选参数，用于配置容器中的环境变量
                     * @return Env 环境变量，可选参数，用于配置容器中的环境变量
                     */
                    std::vector<EnvVar> GetEnv() const;

                    /**
                     * 设置环境变量，可选参数，用于配置容器中的环境变量
                     * @param Env 环境变量，可选参数，用于配置容器中的环境变量
                     */
                    void SetEnv(const std::vector<EnvVar>& _env);

                    /**
                     * 判断参数 Env 是否已赋值
                     * @return Env 是否已赋值
                     */
                    bool EnvHasBeenSet() const;

                    /**
                     * 获取资源描述，指定包年包月模式下的cpu,mem,gpu等信息，后付费无需填写
                     * @return Resources 资源描述，指定包年包月模式下的cpu,mem,gpu等信息，后付费无需填写
                     */
                    ResourceInfo GetResources() const;

                    /**
                     * 设置资源描述，指定包年包月模式下的cpu,mem,gpu等信息，后付费无需填写
                     * @param Resources 资源描述，指定包年包月模式下的cpu,mem,gpu等信息，后付费无需填写
                     */
                    void SetResources(const ResourceInfo& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取使用DescribeBillingSpecs接口返回的规格列表中的值，或者参考实例列表:
TI.S.MEDIUM.POST	2C4G
TI.S.LARGE.POST	4C8G
TI.S.2XLARGE16.POST	8C16G
TI.S.2XLARGE32.POST	8C32G
TI.S.4XLARGE32.POST	16C32G
TI.S.4XLARGE64.POST	16C64G
TI.S.6XLARGE48.POST	24C48G
TI.S.6XLARGE96.POST	24C96G
TI.S.8XLARGE64.POST	32C64G
TI.S.8XLARGE128.POST 32C128G
TI.GN7.LARGE20.POST	4C20G T4*1/4
TI.GN7.2XLARGE40.POST	10C40G T4*1/2
TI.GN7.2XLARGE32.POST	8C32G T4*1
TI.GN7.5XLARGE80.POST	20C80G T4*1
TI.GN7.8XLARGE128.POST	32C128G T4*1
TI.GN7.10XLARGE160.POST	40C160G T4*2
TI.GN7.20XLARGE320.POST	80C320G T4*4
                     * @return InstanceType 使用DescribeBillingSpecs接口返回的规格列表中的值，或者参考实例列表:
TI.S.MEDIUM.POST	2C4G
TI.S.LARGE.POST	4C8G
TI.S.2XLARGE16.POST	8C16G
TI.S.2XLARGE32.POST	8C32G
TI.S.4XLARGE32.POST	16C32G
TI.S.4XLARGE64.POST	16C64G
TI.S.6XLARGE48.POST	24C48G
TI.S.6XLARGE96.POST	24C96G
TI.S.8XLARGE64.POST	32C64G
TI.S.8XLARGE128.POST 32C128G
TI.GN7.LARGE20.POST	4C20G T4*1/4
TI.GN7.2XLARGE40.POST	10C40G T4*1/2
TI.GN7.2XLARGE32.POST	8C32G T4*1
TI.GN7.5XLARGE80.POST	20C80G T4*1
TI.GN7.8XLARGE128.POST	32C128G T4*1
TI.GN7.10XLARGE160.POST	40C160G T4*2
TI.GN7.20XLARGE320.POST	80C320G T4*4
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置使用DescribeBillingSpecs接口返回的规格列表中的值，或者参考实例列表:
TI.S.MEDIUM.POST	2C4G
TI.S.LARGE.POST	4C8G
TI.S.2XLARGE16.POST	8C16G
TI.S.2XLARGE32.POST	8C32G
TI.S.4XLARGE32.POST	16C32G
TI.S.4XLARGE64.POST	16C64G
TI.S.6XLARGE48.POST	24C48G
TI.S.6XLARGE96.POST	24C96G
TI.S.8XLARGE64.POST	32C64G
TI.S.8XLARGE128.POST 32C128G
TI.GN7.LARGE20.POST	4C20G T4*1/4
TI.GN7.2XLARGE40.POST	10C40G T4*1/2
TI.GN7.2XLARGE32.POST	8C32G T4*1
TI.GN7.5XLARGE80.POST	20C80G T4*1
TI.GN7.8XLARGE128.POST	32C128G T4*1
TI.GN7.10XLARGE160.POST	40C160G T4*2
TI.GN7.20XLARGE320.POST	80C320G T4*4
                     * @param InstanceType 使用DescribeBillingSpecs接口返回的规格列表中的值，或者参考实例列表:
TI.S.MEDIUM.POST	2C4G
TI.S.LARGE.POST	4C8G
TI.S.2XLARGE16.POST	8C16G
TI.S.2XLARGE32.POST	8C32G
TI.S.4XLARGE32.POST	16C32G
TI.S.4XLARGE64.POST	16C64G
TI.S.6XLARGE48.POST	24C48G
TI.S.6XLARGE96.POST	24C96G
TI.S.8XLARGE64.POST	32C64G
TI.S.8XLARGE128.POST 32C128G
TI.GN7.LARGE20.POST	4C20G T4*1/4
TI.GN7.2XLARGE40.POST	10C40G T4*1/2
TI.GN7.2XLARGE32.POST	8C32G T4*1
TI.GN7.5XLARGE80.POST	20C80G T4*1
TI.GN7.8XLARGE128.POST	32C128G T4*1
TI.GN7.10XLARGE160.POST	40C160G T4*2
TI.GN7.20XLARGE320.POST	80C320G T4*4
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取扩缩容类型 支持：自动 - "AUTO", 手动 - "MANUAL",默认为MANUAL
                     * @return ScaleMode 扩缩容类型 支持：自动 - "AUTO", 手动 - "MANUAL",默认为MANUAL
                     */
                    std::string GetScaleMode() const;

                    /**
                     * 设置扩缩容类型 支持：自动 - "AUTO", 手动 - "MANUAL",默认为MANUAL
                     * @param ScaleMode 扩缩容类型 支持：自动 - "AUTO", 手动 - "MANUAL",默认为MANUAL
                     */
                    void SetScaleMode(const std::string& _scaleMode);

                    /**
                     * 判断参数 ScaleMode 是否已赋值
                     * @return ScaleMode 是否已赋值
                     */
                    bool ScaleModeHasBeenSet() const;

                    /**
                     * 获取实例数量, 不同计费模式和调节模式下对应关系如下
PREPAID 和 POSTPAID_BY_HOUR:
手动调节模式下对应 实例数量
自动调节模式下对应 基于时间的默认策略的实例数量
HYBRID_PAID:
后付费实例手动调节模式下对应 实例数量
后付费实例自动调节模式下对应 时间策略的默认策略的实例数量
                     * @return Replicas 实例数量, 不同计费模式和调节模式下对应关系如下
PREPAID 和 POSTPAID_BY_HOUR:
手动调节模式下对应 实例数量
自动调节模式下对应 基于时间的默认策略的实例数量
HYBRID_PAID:
后付费实例手动调节模式下对应 实例数量
后付费实例自动调节模式下对应 时间策略的默认策略的实例数量
                     */
                    int64_t GetReplicas() const;

                    /**
                     * 设置实例数量, 不同计费模式和调节模式下对应关系如下
PREPAID 和 POSTPAID_BY_HOUR:
手动调节模式下对应 实例数量
自动调节模式下对应 基于时间的默认策略的实例数量
HYBRID_PAID:
后付费实例手动调节模式下对应 实例数量
后付费实例自动调节模式下对应 时间策略的默认策略的实例数量
                     * @param Replicas 实例数量, 不同计费模式和调节模式下对应关系如下
PREPAID 和 POSTPAID_BY_HOUR:
手动调节模式下对应 实例数量
自动调节模式下对应 基于时间的默认策略的实例数量
HYBRID_PAID:
后付费实例手动调节模式下对应 实例数量
后付费实例自动调节模式下对应 时间策略的默认策略的实例数量
                     */
                    void SetReplicas(const int64_t& _replicas);

                    /**
                     * 判断参数 Replicas 是否已赋值
                     * @return Replicas 是否已赋值
                     */
                    bool ReplicasHasBeenSet() const;

                    /**
                     * 获取自动伸缩信息
                     * @return HorizontalPodAutoscaler 自动伸缩信息
                     */
                    HorizontalPodAutoscaler GetHorizontalPodAutoscaler() const;

                    /**
                     * 设置自动伸缩信息
                     * @param HorizontalPodAutoscaler 自动伸缩信息
                     */
                    void SetHorizontalPodAutoscaler(const HorizontalPodAutoscaler& _horizontalPodAutoscaler);

                    /**
                     * 判断参数 HorizontalPodAutoscaler 是否已赋值
                     * @return HorizontalPodAutoscaler 是否已赋值
                     */
                    bool HorizontalPodAutoscalerHasBeenSet() const;

                    /**
                     * 获取是否开启日志投递，开启后需填写配置投递到指定cls
                     * @return LogEnable 是否开启日志投递，开启后需填写配置投递到指定cls
                     */
                    bool GetLogEnable() const;

                    /**
                     * 设置是否开启日志投递，开启后需填写配置投递到指定cls
                     * @param LogEnable 是否开启日志投递，开启后需填写配置投递到指定cls
                     */
                    void SetLogEnable(const bool& _logEnable);

                    /**
                     * 判断参数 LogEnable 是否已赋值
                     * @return LogEnable 是否已赋值
                     */
                    bool LogEnableHasBeenSet() const;

                    /**
                     * 获取日志配置，需要投递服务日志到指定cls时填写
                     * @return LogConfig 日志配置，需要投递服务日志到指定cls时填写
                     */
                    LogConfig GetLogConfig() const;

                    /**
                     * 设置日志配置，需要投递服务日志到指定cls时填写
                     * @param LogConfig 日志配置，需要投递服务日志到指定cls时填写
                     */
                    void SetLogConfig(const LogConfig& _logConfig);

                    /**
                     * 判断参数 LogConfig 是否已赋值
                     * @return LogConfig 是否已赋值
                     */
                    bool LogConfigHasBeenSet() const;

                    /**
                     * 获取是否开启接口鉴权，开启后自动生成token信息，访问需要token鉴权
                     * @return AuthorizationEnable 是否开启接口鉴权，开启后自动生成token信息，访问需要token鉴权
                     */
                    bool GetAuthorizationEnable() const;

                    /**
                     * 设置是否开启接口鉴权，开启后自动生成token信息，访问需要token鉴权
                     * @param AuthorizationEnable 是否开启接口鉴权，开启后自动生成token信息，访问需要token鉴权
                     */
                    void SetAuthorizationEnable(const bool& _authorizationEnable);

                    /**
                     * 判断参数 AuthorizationEnable 是否已赋值
                     * @return AuthorizationEnable 是否已赋值
                     */
                    bool AuthorizationEnableHasBeenSet() const;

                    /**
                     * 获取腾讯云标签
                     * @return Tags 腾讯云标签
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置腾讯云标签
                     * @param Tags 腾讯云标签
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取是否新增版本
                     * @return NewVersion 是否新增版本
                     */
                    bool GetNewVersion() const;

                    /**
                     * 设置是否新增版本
                     * @param NewVersion 是否新增版本
                     */
                    void SetNewVersion(const bool& _newVersion);

                    /**
                     * 判断参数 NewVersion 是否已赋值
                     * @return NewVersion 是否已赋值
                     */
                    bool NewVersionHasBeenSet() const;

                    /**
                     * 获取定时任务配置，使用定时策略时填写
                     * @return CronScaleJobs 定时任务配置，使用定时策略时填写
                     */
                    std::vector<CronScaleJob> GetCronScaleJobs() const;

                    /**
                     * 设置定时任务配置，使用定时策略时填写
                     * @param CronScaleJobs 定时任务配置，使用定时策略时填写
                     */
                    void SetCronScaleJobs(const std::vector<CronScaleJob>& _cronScaleJobs);

                    /**
                     * 判断参数 CronScaleJobs 是否已赋值
                     * @return CronScaleJobs 是否已赋值
                     */
                    bool CronScaleJobsHasBeenSet() const;

                    /**
                     * 获取自动伸缩策略配置 HPA : 通过HPA进行弹性伸缩 CRON 通过定时任务进行伸缩
                     * @return ScaleStrategy 自动伸缩策略配置 HPA : 通过HPA进行弹性伸缩 CRON 通过定时任务进行伸缩
                     */
                    std::string GetScaleStrategy() const;

                    /**
                     * 设置自动伸缩策略配置 HPA : 通过HPA进行弹性伸缩 CRON 通过定时任务进行伸缩
                     * @param ScaleStrategy 自动伸缩策略配置 HPA : 通过HPA进行弹性伸缩 CRON 通过定时任务进行伸缩
                     */
                    void SetScaleStrategy(const std::string& _scaleStrategy);

                    /**
                     * 判断参数 ScaleStrategy 是否已赋值
                     * @return ScaleStrategy 是否已赋值
                     */
                    bool ScaleStrategyHasBeenSet() const;

                    /**
                     * 获取计费模式[HYBRID_PAID]时生效, 用于标识混合计费模式下的预付费实例数
                     * @return HybridBillingPrepaidReplicas 计费模式[HYBRID_PAID]时生效, 用于标识混合计费模式下的预付费实例数
                     */
                    int64_t GetHybridBillingPrepaidReplicas() const;

                    /**
                     * 设置计费模式[HYBRID_PAID]时生效, 用于标识混合计费模式下的预付费实例数
                     * @param HybridBillingPrepaidReplicas 计费模式[HYBRID_PAID]时生效, 用于标识混合计费模式下的预付费实例数
                     */
                    void SetHybridBillingPrepaidReplicas(const int64_t& _hybridBillingPrepaidReplicas);

                    /**
                     * 判断参数 HybridBillingPrepaidReplicas 是否已赋值
                     * @return HybridBillingPrepaidReplicas 是否已赋值
                     */
                    bool HybridBillingPrepaidReplicasHasBeenSet() const;

                    /**
                     * 获取[AUTO_ML 自动学习，自动学习正式发布 AUTO_ML_FORMAL, DEFAULT 默认]
                     * @return CreateSource [AUTO_ML 自动学习，自动学习正式发布 AUTO_ML_FORMAL, DEFAULT 默认]
                     */
                    std::string GetCreateSource() const;

                    /**
                     * 设置[AUTO_ML 自动学习，自动学习正式发布 AUTO_ML_FORMAL, DEFAULT 默认]
                     * @param CreateSource [AUTO_ML 自动学习，自动学习正式发布 AUTO_ML_FORMAL, DEFAULT 默认]
                     */
                    void SetCreateSource(const std::string& _createSource);

                    /**
                     * 判断参数 CreateSource 是否已赋值
                     * @return CreateSource 是否已赋值
                     */
                    bool CreateSourceHasBeenSet() const;

                    /**
                     * 获取是否开启模型的热更新。默认不开启
                     * @return ModelHotUpdateEnable 是否开启模型的热更新。默认不开启
                     */
                    bool GetModelHotUpdateEnable() const;

                    /**
                     * 设置是否开启模型的热更新。默认不开启
                     * @param ModelHotUpdateEnable 是否开启模型的热更新。默认不开启
                     */
                    void SetModelHotUpdateEnable(const bool& _modelHotUpdateEnable);

                    /**
                     * 判断参数 ModelHotUpdateEnable 是否已赋值
                     * @return ModelHotUpdateEnable 是否已赋值
                     */
                    bool ModelHotUpdateEnableHasBeenSet() const;

                    /**
                     * 获取定时停止配置
                     * @return ScheduledAction 定时停止配置
                     */
                    ScheduledAction GetScheduledAction() const;

                    /**
                     * 设置定时停止配置
                     * @param ScheduledAction 定时停止配置
                     */
                    void SetScheduledAction(const ScheduledAction& _scheduledAction);

                    /**
                     * 判断参数 ScheduledAction 是否已赋值
                     * @return ScheduledAction 是否已赋值
                     */
                    bool ScheduledActionHasBeenSet() const;

                    /**
                     * 获取挂载配置，目前只支持CFS
                     * @return VolumeMount 挂载配置，目前只支持CFS
                     */
                    VolumeMount GetVolumeMount() const;

                    /**
                     * 设置挂载配置，目前只支持CFS
                     * @param VolumeMount 挂载配置，目前只支持CFS
                     */
                    void SetVolumeMount(const VolumeMount& _volumeMount);

                    /**
                     * 判断参数 VolumeMount 是否已赋值
                     * @return VolumeMount 是否已赋值
                     */
                    bool VolumeMountHasBeenSet() const;

                    /**
                     * 获取服务限速限流相关配置
                     * @return ServiceLimit 服务限速限流相关配置
                     */
                    ServiceLimit GetServiceLimit() const;

                    /**
                     * 设置服务限速限流相关配置
                     * @param ServiceLimit 服务限速限流相关配置
                     */
                    void SetServiceLimit(const ServiceLimit& _serviceLimit);

                    /**
                     * 判断参数 ServiceLimit 是否已赋值
                     * @return ServiceLimit 是否已赋值
                     */
                    bool ServiceLimitHasBeenSet() const;

                    /**
                     * 获取回调地址，用于回调创建服务状态信息，回调格式&内容详情见：[TI-ONE 接口回调说明](https://cloud.tencent.com/document/product/851/84292)
                     * @return CallbackUrl 回调地址，用于回调创建服务状态信息，回调格式&内容详情见：[TI-ONE 接口回调说明](https://cloud.tencent.com/document/product/851/84292)
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置回调地址，用于回调创建服务状态信息，回调格式&内容详情见：[TI-ONE 接口回调说明](https://cloud.tencent.com/document/product/851/84292)
                     * @param CallbackUrl 回调地址，用于回调创建服务状态信息，回调格式&内容详情见：[TI-ONE 接口回调说明](https://cloud.tencent.com/document/product/851/84292)
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     */
                    bool CallbackUrlHasBeenSet() const;

                private:

                    /**
                     * 新增版本时需要填写
                     */
                    std::string m_serviceGroupId;
                    bool m_serviceGroupIdHasBeenSet;

                    /**
                     * 不超过60个字，仅支持英文、数字、下划线"_"、短横"-"，只能以英文、数字开头
                     */
                    std::string m_serviceGroupName;
                    bool m_serviceGroupNameHasBeenSet;

                    /**
                     * 模型服务的描述
                     */
                    std::string m_serviceDescription;
                    bool m_serviceDescriptionHasBeenSet;

                    /**
                     * 付费模式,有 PREPAID （包年包月）和 POSTPAID_BY_HOUR（按量付费）
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 预付费模式下所属的资源组id，同服务组下唯一
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * 模型信息，需要挂载模型时填写
                     */
                    ModelInfo m_modelInfo;
                    bool m_modelInfoHasBeenSet;

                    /**
                     * 镜像信息，配置服务运行所需的镜像地址等信息
                     */
                    ImageInfo m_imageInfo;
                    bool m_imageInfoHasBeenSet;

                    /**
                     * 环境变量，可选参数，用于配置容器中的环境变量
                     */
                    std::vector<EnvVar> m_env;
                    bool m_envHasBeenSet;

                    /**
                     * 资源描述，指定包年包月模式下的cpu,mem,gpu等信息，后付费无需填写
                     */
                    ResourceInfo m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * 使用DescribeBillingSpecs接口返回的规格列表中的值，或者参考实例列表:
TI.S.MEDIUM.POST	2C4G
TI.S.LARGE.POST	4C8G
TI.S.2XLARGE16.POST	8C16G
TI.S.2XLARGE32.POST	8C32G
TI.S.4XLARGE32.POST	16C32G
TI.S.4XLARGE64.POST	16C64G
TI.S.6XLARGE48.POST	24C48G
TI.S.6XLARGE96.POST	24C96G
TI.S.8XLARGE64.POST	32C64G
TI.S.8XLARGE128.POST 32C128G
TI.GN7.LARGE20.POST	4C20G T4*1/4
TI.GN7.2XLARGE40.POST	10C40G T4*1/2
TI.GN7.2XLARGE32.POST	8C32G T4*1
TI.GN7.5XLARGE80.POST	20C80G T4*1
TI.GN7.8XLARGE128.POST	32C128G T4*1
TI.GN7.10XLARGE160.POST	40C160G T4*2
TI.GN7.20XLARGE320.POST	80C320G T4*4
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 扩缩容类型 支持：自动 - "AUTO", 手动 - "MANUAL",默认为MANUAL
                     */
                    std::string m_scaleMode;
                    bool m_scaleModeHasBeenSet;

                    /**
                     * 实例数量, 不同计费模式和调节模式下对应关系如下
PREPAID 和 POSTPAID_BY_HOUR:
手动调节模式下对应 实例数量
自动调节模式下对应 基于时间的默认策略的实例数量
HYBRID_PAID:
后付费实例手动调节模式下对应 实例数量
后付费实例自动调节模式下对应 时间策略的默认策略的实例数量
                     */
                    int64_t m_replicas;
                    bool m_replicasHasBeenSet;

                    /**
                     * 自动伸缩信息
                     */
                    HorizontalPodAutoscaler m_horizontalPodAutoscaler;
                    bool m_horizontalPodAutoscalerHasBeenSet;

                    /**
                     * 是否开启日志投递，开启后需填写配置投递到指定cls
                     */
                    bool m_logEnable;
                    bool m_logEnableHasBeenSet;

                    /**
                     * 日志配置，需要投递服务日志到指定cls时填写
                     */
                    LogConfig m_logConfig;
                    bool m_logConfigHasBeenSet;

                    /**
                     * 是否开启接口鉴权，开启后自动生成token信息，访问需要token鉴权
                     */
                    bool m_authorizationEnable;
                    bool m_authorizationEnableHasBeenSet;

                    /**
                     * 腾讯云标签
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 是否新增版本
                     */
                    bool m_newVersion;
                    bool m_newVersionHasBeenSet;

                    /**
                     * 定时任务配置，使用定时策略时填写
                     */
                    std::vector<CronScaleJob> m_cronScaleJobs;
                    bool m_cronScaleJobsHasBeenSet;

                    /**
                     * 自动伸缩策略配置 HPA : 通过HPA进行弹性伸缩 CRON 通过定时任务进行伸缩
                     */
                    std::string m_scaleStrategy;
                    bool m_scaleStrategyHasBeenSet;

                    /**
                     * 计费模式[HYBRID_PAID]时生效, 用于标识混合计费模式下的预付费实例数
                     */
                    int64_t m_hybridBillingPrepaidReplicas;
                    bool m_hybridBillingPrepaidReplicasHasBeenSet;

                    /**
                     * [AUTO_ML 自动学习，自动学习正式发布 AUTO_ML_FORMAL, DEFAULT 默认]
                     */
                    std::string m_createSource;
                    bool m_createSourceHasBeenSet;

                    /**
                     * 是否开启模型的热更新。默认不开启
                     */
                    bool m_modelHotUpdateEnable;
                    bool m_modelHotUpdateEnableHasBeenSet;

                    /**
                     * 定时停止配置
                     */
                    ScheduledAction m_scheduledAction;
                    bool m_scheduledActionHasBeenSet;

                    /**
                     * 挂载配置，目前只支持CFS
                     */
                    VolumeMount m_volumeMount;
                    bool m_volumeMountHasBeenSet;

                    /**
                     * 服务限速限流相关配置
                     */
                    ServiceLimit m_serviceLimit;
                    bool m_serviceLimitHasBeenSet;

                    /**
                     * 回调地址，用于回调创建服务状态信息，回调格式&内容详情见：[TI-ONE 接口回调说明](https://cloud.tencent.com/document/product/851/84292)
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_CREATEMODELSERVICEREQUEST_H_
