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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_MODIFYMODELSERVICEREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_MODIFYMODELSERVICEREQUEST_H_

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
#include <tencentcloud/tione/v20211111/model/CronScaleJob.h>
#include <tencentcloud/tione/v20211111/model/ScheduledAction.h>
#include <tencentcloud/tione/v20211111/model/ServiceLimit.h>
#include <tencentcloud/tione/v20211111/model/VolumeMount.h>
#include <tencentcloud/tione/v20211111/model/ServiceEIP.h>
#include <tencentcloud/tione/v20211111/model/HealthProbe.h>
#include <tencentcloud/tione/v20211111/model/RollingUpdate.h>
#include <tencentcloud/tione/v20211111/model/SidecarSpec.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * ModifyModelService请求参数结构体
                */
                class ModifyModelServiceRequest : public AbstractModel
                {
                public:
                    ModifyModelServiceRequest();
                    ~ModifyModelServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务id
                     * @return ServiceId 服务id
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置服务id
                     * @param _serviceId 服务id
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取模型信息，需要挂载模型时填写
                     * @return ModelInfo 模型信息，需要挂载模型时填写
                     * 
                     */
                    ModelInfo GetModelInfo() const;

                    /**
                     * 设置模型信息，需要挂载模型时填写
                     * @param _modelInfo 模型信息，需要挂载模型时填写
                     * 
                     */
                    void SetModelInfo(const ModelInfo& _modelInfo);

                    /**
                     * 判断参数 ModelInfo 是否已赋值
                     * @return ModelInfo 是否已赋值
                     * 
                     */
                    bool ModelInfoHasBeenSet() const;

                    /**
                     * 获取镜像信息，配置服务运行所需的镜像地址等信息
                     * @return ImageInfo 镜像信息，配置服务运行所需的镜像地址等信息
                     * 
                     */
                    ImageInfo GetImageInfo() const;

                    /**
                     * 设置镜像信息，配置服务运行所需的镜像地址等信息
                     * @param _imageInfo 镜像信息，配置服务运行所需的镜像地址等信息
                     * 
                     */
                    void SetImageInfo(const ImageInfo& _imageInfo);

                    /**
                     * 判断参数 ImageInfo 是否已赋值
                     * @return ImageInfo 是否已赋值
                     * 
                     */
                    bool ImageInfoHasBeenSet() const;

                    /**
                     * 获取环境变量，可选参数，用于配置容器中的环境变量
                     * @return Env 环境变量，可选参数，用于配置容器中的环境变量
                     * 
                     */
                    std::vector<EnvVar> GetEnv() const;

                    /**
                     * 设置环境变量，可选参数，用于配置容器中的环境变量
                     * @param _env 环境变量，可选参数，用于配置容器中的环境变量
                     * 
                     */
                    void SetEnv(const std::vector<EnvVar>& _env);

                    /**
                     * 判断参数 Env 是否已赋值
                     * @return Env 是否已赋值
                     * 
                     */
                    bool EnvHasBeenSet() const;

                    /**
                     * 获取资源描述，指定预付费模式下的cpu,mem,gpu等信息，后付费无需填写
                     * @return Resources 资源描述，指定预付费模式下的cpu,mem,gpu等信息，后付费无需填写
                     * 
                     */
                    ResourceInfo GetResources() const;

                    /**
                     * 设置资源描述，指定预付费模式下的cpu,mem,gpu等信息，后付费无需填写
                     * @param _resources 资源描述，指定预付费模式下的cpu,mem,gpu等信息，后付费无需填写
                     * 
                     */
                    void SetResources(const ResourceInfo& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
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
                     * 
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
                     * @param _instanceType 使用DescribeBillingSpecs接口返回的规格列表中的值，或者参考实例列表:
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
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取扩缩容类型 支持：自动 - "AUTO", 手动 - "MANUAL"
                     * @return ScaleMode 扩缩容类型 支持：自动 - "AUTO", 手动 - "MANUAL"
                     * 
                     */
                    std::string GetScaleMode() const;

                    /**
                     * 设置扩缩容类型 支持：自动 - "AUTO", 手动 - "MANUAL"
                     * @param _scaleMode 扩缩容类型 支持：自动 - "AUTO", 手动 - "MANUAL"
                     * 
                     */
                    void SetScaleMode(const std::string& _scaleMode);

                    /**
                     * 判断参数 ScaleMode 是否已赋值
                     * @return ScaleMode 是否已赋值
                     * 
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
                     * 
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
                     * @param _replicas 实例数量, 不同计费模式和调节模式下对应关系如下
PREPAID 和 POSTPAID_BY_HOUR:
手动调节模式下对应 实例数量
自动调节模式下对应 基于时间的默认策略的实例数量
HYBRID_PAID:
后付费实例手动调节模式下对应 实例数量
后付费实例自动调节模式下对应 时间策略的默认策略的实例数量
                     * 
                     */
                    void SetReplicas(const int64_t& _replicas);

                    /**
                     * 判断参数 Replicas 是否已赋值
                     * @return Replicas 是否已赋值
                     * 
                     */
                    bool ReplicasHasBeenSet() const;

                    /**
                     * 获取自动伸缩信息
                     * @return HorizontalPodAutoscaler 自动伸缩信息
                     * 
                     */
                    HorizontalPodAutoscaler GetHorizontalPodAutoscaler() const;

                    /**
                     * 设置自动伸缩信息
                     * @param _horizontalPodAutoscaler 自动伸缩信息
                     * 
                     */
                    void SetHorizontalPodAutoscaler(const HorizontalPodAutoscaler& _horizontalPodAutoscaler);

                    /**
                     * 判断参数 HorizontalPodAutoscaler 是否已赋值
                     * @return HorizontalPodAutoscaler 是否已赋值
                     * 
                     */
                    bool HorizontalPodAutoscalerHasBeenSet() const;

                    /**
                     * 获取是否开启日志投递，开启后需填写配置投递到指定cls
                     * @return LogEnable 是否开启日志投递，开启后需填写配置投递到指定cls
                     * 
                     */
                    bool GetLogEnable() const;

                    /**
                     * 设置是否开启日志投递，开启后需填写配置投递到指定cls
                     * @param _logEnable 是否开启日志投递，开启后需填写配置投递到指定cls
                     * 
                     */
                    void SetLogEnable(const bool& _logEnable);

                    /**
                     * 判断参数 LogEnable 是否已赋值
                     * @return LogEnable 是否已赋值
                     * 
                     */
                    bool LogEnableHasBeenSet() const;

                    /**
                     * 获取日志配置，需要投递服务日志到指定cls时填写
                     * @return LogConfig 日志配置，需要投递服务日志到指定cls时填写
                     * 
                     */
                    LogConfig GetLogConfig() const;

                    /**
                     * 设置日志配置，需要投递服务日志到指定cls时填写
                     * @param _logConfig 日志配置，需要投递服务日志到指定cls时填写
                     * 
                     */
                    void SetLogConfig(const LogConfig& _logConfig);

                    /**
                     * 判断参数 LogConfig 是否已赋值
                     * @return LogConfig 是否已赋值
                     * 
                     */
                    bool LogConfigHasBeenSet() const;

                    /**
                     * 获取特殊更新行为： "STOP": 停止, "RESUME": 重启, "SCALE": 扩缩容, 存在这些特殊更新行为时，会忽略其他更新字段
                     * @return ServiceAction 特殊更新行为： "STOP": 停止, "RESUME": 重启, "SCALE": 扩缩容, 存在这些特殊更新行为时，会忽略其他更新字段
                     * 
                     */
                    std::string GetServiceAction() const;

                    /**
                     * 设置特殊更新行为： "STOP": 停止, "RESUME": 重启, "SCALE": 扩缩容, 存在这些特殊更新行为时，会忽略其他更新字段
                     * @param _serviceAction 特殊更新行为： "STOP": 停止, "RESUME": 重启, "SCALE": 扩缩容, 存在这些特殊更新行为时，会忽略其他更新字段
                     * 
                     */
                    void SetServiceAction(const std::string& _serviceAction);

                    /**
                     * 判断参数 ServiceAction 是否已赋值
                     * @return ServiceAction 是否已赋值
                     * 
                     */
                    bool ServiceActionHasBeenSet() const;

                    /**
                     * 获取服务的描述
                     * @return ServiceDescription 服务的描述
                     * 
                     */
                    std::string GetServiceDescription() const;

                    /**
                     * 设置服务的描述
                     * @param _serviceDescription 服务的描述
                     * 
                     */
                    void SetServiceDescription(const std::string& _serviceDescription);

                    /**
                     * 判断参数 ServiceDescription 是否已赋值
                     * @return ServiceDescription 是否已赋值
                     * 
                     */
                    bool ServiceDescriptionHasBeenSet() const;

                    /**
                     * 获取自动伸缩策略
                     * @return ScaleStrategy 自动伸缩策略
                     * 
                     */
                    std::string GetScaleStrategy() const;

                    /**
                     * 设置自动伸缩策略
                     * @param _scaleStrategy 自动伸缩策略
                     * 
                     */
                    void SetScaleStrategy(const std::string& _scaleStrategy);

                    /**
                     * 判断参数 ScaleStrategy 是否已赋值
                     * @return ScaleStrategy 是否已赋值
                     * 
                     */
                    bool ScaleStrategyHasBeenSet() const;

                    /**
                     * 获取自动伸缩策略配置 HPA : 通过HPA进行弹性伸缩 CRON 通过定时任务进行伸缩
                     * @return CronScaleJobs 自动伸缩策略配置 HPA : 通过HPA进行弹性伸缩 CRON 通过定时任务进行伸缩
                     * 
                     */
                    std::vector<CronScaleJob> GetCronScaleJobs() const;

                    /**
                     * 设置自动伸缩策略配置 HPA : 通过HPA进行弹性伸缩 CRON 通过定时任务进行伸缩
                     * @param _cronScaleJobs 自动伸缩策略配置 HPA : 通过HPA进行弹性伸缩 CRON 通过定时任务进行伸缩
                     * 
                     */
                    void SetCronScaleJobs(const std::vector<CronScaleJob>& _cronScaleJobs);

                    /**
                     * 判断参数 CronScaleJobs 是否已赋值
                     * @return CronScaleJobs 是否已赋值
                     * 
                     */
                    bool CronScaleJobsHasBeenSet() const;

                    /**
                     * 获取计费模式[HYBRID_PAID]时生效, 用于标识混合计费模式下的预付费实例数, 若不填则默认为1
                     * @return HybridBillingPrepaidReplicas 计费模式[HYBRID_PAID]时生效, 用于标识混合计费模式下的预付费实例数, 若不填则默认为1
                     * 
                     */
                    int64_t GetHybridBillingPrepaidReplicas() const;

                    /**
                     * 设置计费模式[HYBRID_PAID]时生效, 用于标识混合计费模式下的预付费实例数, 若不填则默认为1
                     * @param _hybridBillingPrepaidReplicas 计费模式[HYBRID_PAID]时生效, 用于标识混合计费模式下的预付费实例数, 若不填则默认为1
                     * 
                     */
                    void SetHybridBillingPrepaidReplicas(const int64_t& _hybridBillingPrepaidReplicas);

                    /**
                     * 判断参数 HybridBillingPrepaidReplicas 是否已赋值
                     * @return HybridBillingPrepaidReplicas 是否已赋值
                     * 
                     */
                    bool HybridBillingPrepaidReplicasHasBeenSet() const;

                    /**
                     * 获取是否开启模型的热更新。默认不开启
                     * @return ModelHotUpdateEnable 是否开启模型的热更新。默认不开启
                     * 
                     */
                    bool GetModelHotUpdateEnable() const;

                    /**
                     * 设置是否开启模型的热更新。默认不开启
                     * @param _modelHotUpdateEnable 是否开启模型的热更新。默认不开启
                     * 
                     */
                    void SetModelHotUpdateEnable(const bool& _modelHotUpdateEnable);

                    /**
                     * 判断参数 ModelHotUpdateEnable 是否已赋值
                     * @return ModelHotUpdateEnable 是否已赋值
                     * 
                     */
                    bool ModelHotUpdateEnableHasBeenSet() const;

                    /**
                     * 获取定时停止配置
                     * @return ScheduledAction 定时停止配置
                     * 
                     */
                    ScheduledAction GetScheduledAction() const;

                    /**
                     * 设置定时停止配置
                     * @param _scheduledAction 定时停止配置
                     * 
                     */
                    void SetScheduledAction(const ScheduledAction& _scheduledAction);

                    /**
                     * 判断参数 ScheduledAction 是否已赋值
                     * @return ScheduledAction 是否已赋值
                     * 
                     */
                    bool ScheduledActionHasBeenSet() const;

                    /**
                     * 获取服务限速限流相关配置
                     * @return ServiceLimit 服务限速限流相关配置
                     * 
                     */
                    ServiceLimit GetServiceLimit() const;

                    /**
                     * 设置服务限速限流相关配置
                     * @param _serviceLimit 服务限速限流相关配置
                     * 
                     */
                    void SetServiceLimit(const ServiceLimit& _serviceLimit);

                    /**
                     * 判断参数 ServiceLimit 是否已赋值
                     * @return ServiceLimit 是否已赋值
                     * 
                     */
                    bool ServiceLimitHasBeenSet() const;

                    /**
                     * 获取挂载配置，目前只支持CFS
                     * @return VolumeMount 挂载配置，目前只支持CFS
                     * 
                     */
                    VolumeMount GetVolumeMount() const;

                    /**
                     * 设置挂载配置，目前只支持CFS
                     * @param _volumeMount 挂载配置，目前只支持CFS
                     * 
                     */
                    void SetVolumeMount(const VolumeMount& _volumeMount);

                    /**
                     * 判断参数 VolumeMount 是否已赋值
                     * @return VolumeMount 是否已赋值
                     * 
                     */
                    bool VolumeMountHasBeenSet() const;

                    /**
                     * 获取是否开启模型的加速, 仅对StableDiffusion(动态加速)格式的模型有效。默认不开启
                     * @return ModelTurboEnable 是否开启模型的加速, 仅对StableDiffusion(动态加速)格式的模型有效。默认不开启
                     * 
                     */
                    bool GetModelTurboEnable() const;

                    /**
                     * 设置是否开启模型的加速, 仅对StableDiffusion(动态加速)格式的模型有效。默认不开启
                     * @param _modelTurboEnable 是否开启模型的加速, 仅对StableDiffusion(动态加速)格式的模型有效。默认不开启
                     * 
                     */
                    void SetModelTurboEnable(const bool& _modelTurboEnable);

                    /**
                     * 判断参数 ModelTurboEnable 是否已赋值
                     * @return ModelTurboEnable 是否已赋值
                     * 
                     */
                    bool ModelTurboEnableHasBeenSet() const;

                    /**
                     * 获取服务的启动命令，如遇特殊字符导致配置失败，可使用CommandBase64参数
                     * @return Command 服务的启动命令，如遇特殊字符导致配置失败，可使用CommandBase64参数
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置服务的启动命令，如遇特殊字符导致配置失败，可使用CommandBase64参数
                     * @param _command 服务的启动命令，如遇特殊字符导致配置失败，可使用CommandBase64参数
                     * 
                     */
                    void SetCommand(const std::string& _command);

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     * 
                     */
                    bool CommandHasBeenSet() const;

                    /**
                     * 获取是否开启TIONE内网访问外部，此功能仅支持后付费机型与从TIONE平台购买的预付费机型；使用从CVM选择资源组时此配置不生效。
                     * @return ServiceEIP 是否开启TIONE内网访问外部，此功能仅支持后付费机型与从TIONE平台购买的预付费机型；使用从CVM选择资源组时此配置不生效。
                     * 
                     */
                    ServiceEIP GetServiceEIP() const;

                    /**
                     * 设置是否开启TIONE内网访问外部，此功能仅支持后付费机型与从TIONE平台购买的预付费机型；使用从CVM选择资源组时此配置不生效。
                     * @param _serviceEIP 是否开启TIONE内网访问外部，此功能仅支持后付费机型与从TIONE平台购买的预付费机型；使用从CVM选择资源组时此配置不生效。
                     * 
                     */
                    void SetServiceEIP(const ServiceEIP& _serviceEIP);

                    /**
                     * 判断参数 ServiceEIP 是否已赋值
                     * @return ServiceEIP 是否已赋值
                     * 
                     */
                    bool ServiceEIPHasBeenSet() const;

                    /**
                     * 获取服务的启动命令，以base64格式进行输入，与Command同时配置时，仅当前参数生效
                     * @return CommandBase64 服务的启动命令，以base64格式进行输入，与Command同时配置时，仅当前参数生效
                     * 
                     */
                    std::string GetCommandBase64() const;

                    /**
                     * 设置服务的启动命令，以base64格式进行输入，与Command同时配置时，仅当前参数生效
                     * @param _commandBase64 服务的启动命令，以base64格式进行输入，与Command同时配置时，仅当前参数生效
                     * 
                     */
                    void SetCommandBase64(const std::string& _commandBase64);

                    /**
                     * 判断参数 CommandBase64 是否已赋值
                     * @return CommandBase64 是否已赋值
                     * 
                     */
                    bool CommandBase64HasBeenSet() const;

                    /**
                     * 获取服务端口，仅在非内置镜像时生效，默认8501。不支持输入8501-8510,6006,9092
                     * @return ServicePort 服务端口，仅在非内置镜像时生效，默认8501。不支持输入8501-8510,6006,9092
                     * 
                     */
                    int64_t GetServicePort() const;

                    /**
                     * 设置服务端口，仅在非内置镜像时生效，默认8501。不支持输入8501-8510,6006,9092
                     * @param _servicePort 服务端口，仅在非内置镜像时生效，默认8501。不支持输入8501-8510,6006,9092
                     * 
                     */
                    void SetServicePort(const int64_t& _servicePort);

                    /**
                     * 判断参数 ServicePort 是否已赋值
                     * @return ServicePort 是否已赋值
                     * 
                     */
                    bool ServicePortHasBeenSet() const;

                    /**
                     * 获取单副本下的实例数，仅在部署类型为DIST时生效，默认1
                     * @return InstancePerReplicas 单副本下的实例数，仅在部署类型为DIST时生效，默认1
                     * 
                     */
                    int64_t GetInstancePerReplicas() const;

                    /**
                     * 设置单副本下的实例数，仅在部署类型为DIST时生效，默认1
                     * @param _instancePerReplicas 单副本下的实例数，仅在部署类型为DIST时生效，默认1
                     * 
                     */
                    void SetInstancePerReplicas(const int64_t& _instancePerReplicas);

                    /**
                     * 判断参数 InstancePerReplicas 是否已赋值
                     * @return InstancePerReplicas 是否已赋值
                     * 
                     */
                    bool InstancePerReplicasHasBeenSet() const;

                    /**
                     * 获取30
                     * @return TerminationGracePeriodSeconds 30
                     * 
                     */
                    int64_t GetTerminationGracePeriodSeconds() const;

                    /**
                     * 设置30
                     * @param _terminationGracePeriodSeconds 30
                     * 
                     */
                    void SetTerminationGracePeriodSeconds(const int64_t& _terminationGracePeriodSeconds);

                    /**
                     * 判断参数 TerminationGracePeriodSeconds 是否已赋值
                     * @return TerminationGracePeriodSeconds 是否已赋值
                     * 
                     */
                    bool TerminationGracePeriodSecondsHasBeenSet() const;

                    /**
                     * 获取["sleep","60"]
                     * @return PreStopCommand ["sleep","60"]
                     * 
                     */
                    std::vector<std::string> GetPreStopCommand() const;

                    /**
                     * 设置["sleep","60"]
                     * @param _preStopCommand ["sleep","60"]
                     * 
                     */
                    void SetPreStopCommand(const std::vector<std::string>& _preStopCommand);

                    /**
                     * 判断参数 PreStopCommand 是否已赋值
                     * @return PreStopCommand 是否已赋值
                     * 
                     */
                    bool PreStopCommandHasBeenSet() const;

                    /**
                     * 获取是否启动grpc端口
                     * @return GrpcEnable 是否启动grpc端口
                     * 
                     */
                    bool GetGrpcEnable() const;

                    /**
                     * 设置是否启动grpc端口
                     * @param _grpcEnable 是否启动grpc端口
                     * 
                     */
                    void SetGrpcEnable(const bool& _grpcEnable);

                    /**
                     * 判断参数 GrpcEnable 是否已赋值
                     * @return GrpcEnable 是否已赋值
                     * 
                     */
                    bool GrpcEnableHasBeenSet() const;

                    /**
                     * 获取健康探针
                     * @return HealthProbe 健康探针
                     * 
                     */
                    HealthProbe GetHealthProbe() const;

                    /**
                     * 设置健康探针
                     * @param _healthProbe 健康探针
                     * 
                     */
                    void SetHealthProbe(const HealthProbe& _healthProbe);

                    /**
                     * 判断参数 HealthProbe 是否已赋值
                     * @return HealthProbe 是否已赋值
                     * 
                     */
                    bool HealthProbeHasBeenSet() const;

                    /**
                     * 获取滚动更新策略
                     * @return RollingUpdate 滚动更新策略
                     * 
                     */
                    RollingUpdate GetRollingUpdate() const;

                    /**
                     * 设置滚动更新策略
                     * @param _rollingUpdate 滚动更新策略
                     * 
                     */
                    void SetRollingUpdate(const RollingUpdate& _rollingUpdate);

                    /**
                     * 判断参数 RollingUpdate 是否已赋值
                     * @return RollingUpdate 是否已赋值
                     * 
                     */
                    bool RollingUpdateHasBeenSet() const;

                    /**
                     * 获取sidecar配置
                     * @return Sidecar sidecar配置
                     * 
                     */
                    SidecarSpec GetSidecar() const;

                    /**
                     * 设置sidecar配置
                     * @param _sidecar sidecar配置
                     * 
                     */
                    void SetSidecar(const SidecarSpec& _sidecar);

                    /**
                     * 判断参数 Sidecar 是否已赋值
                     * @return Sidecar 是否已赋值
                     * 
                     */
                    bool SidecarHasBeenSet() const;

                private:

                    /**
                     * 服务id
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

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
                     * 资源描述，指定预付费模式下的cpu,mem,gpu等信息，后付费无需填写
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
                     * 扩缩容类型 支持：自动 - "AUTO", 手动 - "MANUAL"
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
                     * 特殊更新行为： "STOP": 停止, "RESUME": 重启, "SCALE": 扩缩容, 存在这些特殊更新行为时，会忽略其他更新字段
                     */
                    std::string m_serviceAction;
                    bool m_serviceActionHasBeenSet;

                    /**
                     * 服务的描述
                     */
                    std::string m_serviceDescription;
                    bool m_serviceDescriptionHasBeenSet;

                    /**
                     * 自动伸缩策略
                     */
                    std::string m_scaleStrategy;
                    bool m_scaleStrategyHasBeenSet;

                    /**
                     * 自动伸缩策略配置 HPA : 通过HPA进行弹性伸缩 CRON 通过定时任务进行伸缩
                     */
                    std::vector<CronScaleJob> m_cronScaleJobs;
                    bool m_cronScaleJobsHasBeenSet;

                    /**
                     * 计费模式[HYBRID_PAID]时生效, 用于标识混合计费模式下的预付费实例数, 若不填则默认为1
                     */
                    int64_t m_hybridBillingPrepaidReplicas;
                    bool m_hybridBillingPrepaidReplicasHasBeenSet;

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
                     * 服务限速限流相关配置
                     */
                    ServiceLimit m_serviceLimit;
                    bool m_serviceLimitHasBeenSet;

                    /**
                     * 挂载配置，目前只支持CFS
                     */
                    VolumeMount m_volumeMount;
                    bool m_volumeMountHasBeenSet;

                    /**
                     * 是否开启模型的加速, 仅对StableDiffusion(动态加速)格式的模型有效。默认不开启
                     */
                    bool m_modelTurboEnable;
                    bool m_modelTurboEnableHasBeenSet;

                    /**
                     * 服务的启动命令，如遇特殊字符导致配置失败，可使用CommandBase64参数
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * 是否开启TIONE内网访问外部，此功能仅支持后付费机型与从TIONE平台购买的预付费机型；使用从CVM选择资源组时此配置不生效。
                     */
                    ServiceEIP m_serviceEIP;
                    bool m_serviceEIPHasBeenSet;

                    /**
                     * 服务的启动命令，以base64格式进行输入，与Command同时配置时，仅当前参数生效
                     */
                    std::string m_commandBase64;
                    bool m_commandBase64HasBeenSet;

                    /**
                     * 服务端口，仅在非内置镜像时生效，默认8501。不支持输入8501-8510,6006,9092
                     */
                    int64_t m_servicePort;
                    bool m_servicePortHasBeenSet;

                    /**
                     * 单副本下的实例数，仅在部署类型为DIST时生效，默认1
                     */
                    int64_t m_instancePerReplicas;
                    bool m_instancePerReplicasHasBeenSet;

                    /**
                     * 30
                     */
                    int64_t m_terminationGracePeriodSeconds;
                    bool m_terminationGracePeriodSecondsHasBeenSet;

                    /**
                     * ["sleep","60"]
                     */
                    std::vector<std::string> m_preStopCommand;
                    bool m_preStopCommandHasBeenSet;

                    /**
                     * 是否启动grpc端口
                     */
                    bool m_grpcEnable;
                    bool m_grpcEnableHasBeenSet;

                    /**
                     * 健康探针
                     */
                    HealthProbe m_healthProbe;
                    bool m_healthProbeHasBeenSet;

                    /**
                     * 滚动更新策略
                     */
                    RollingUpdate m_rollingUpdate;
                    bool m_rollingUpdateHasBeenSet;

                    /**
                     * sidecar配置
                     */
                    SidecarSpec m_sidecar;
                    bool m_sidecarHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_MODIFYMODELSERVICEREQUEST_H_
