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
                     * 获取<p>服务id</p>
                     * @return ServiceId <p>服务id</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>服务id</p>
                     * @param _serviceId <p>服务id</p>
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
                     * 获取<p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     * @return TiProjectId <p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     * 
                     */
                    std::string GetTiProjectId() const;

                    /**
                     * 设置<p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     * @param _tiProjectId <p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     * 
                     */
                    void SetTiProjectId(const std::string& _tiProjectId);

                    /**
                     * 判断参数 TiProjectId 是否已赋值
                     * @return TiProjectId 是否已赋值
                     * 
                     */
                    bool TiProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>模型信息，需要挂载模型时填写</p>
                     * @return ModelInfo <p>模型信息，需要挂载模型时填写</p>
                     * 
                     */
                    ModelInfo GetModelInfo() const;

                    /**
                     * 设置<p>模型信息，需要挂载模型时填写</p>
                     * @param _modelInfo <p>模型信息，需要挂载模型时填写</p>
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
                     * 获取<p>镜像信息，配置服务运行所需的镜像地址等信息</p>
                     * @return ImageInfo <p>镜像信息，配置服务运行所需的镜像地址等信息</p>
                     * 
                     */
                    ImageInfo GetImageInfo() const;

                    /**
                     * 设置<p>镜像信息，配置服务运行所需的镜像地址等信息</p>
                     * @param _imageInfo <p>镜像信息，配置服务运行所需的镜像地址等信息</p>
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
                     * 获取<p>环境变量，可选参数，用于配置容器中的环境变量</p>
                     * @return Env <p>环境变量，可选参数，用于配置容器中的环境变量</p>
                     * 
                     */
                    std::vector<EnvVar> GetEnv() const;

                    /**
                     * 设置<p>环境变量，可选参数，用于配置容器中的环境变量</p>
                     * @param _env <p>环境变量，可选参数，用于配置容器中的环境变量</p>
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
                     * 获取<p>资源描述，指定预付费模式下的cpu,mem,gpu等信息，后付费无需填写</p>
                     * @return Resources <p>资源描述，指定预付费模式下的cpu,mem,gpu等信息，后付费无需填写</p>
                     * 
                     */
                    ResourceInfo GetResources() const;

                    /**
                     * 设置<p>资源描述，指定预付费模式下的cpu,mem,gpu等信息，后付费无需填写</p>
                     * @param _resources <p>资源描述，指定预付费模式下的cpu,mem,gpu等信息，后付费无需填写</p>
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
                     * 获取<p>使用DescribeBillingSpecs接口返回的规格列表中的值，或者参考实例列表:<br>TI.S.MEDIUM.POST    2C4G<br>TI.S.LARGE.POST    4C8G<br>TI.S.2XLARGE16.POST    8C16G<br>TI.S.2XLARGE32.POST    8C32G<br>TI.S.4XLARGE32.POST    16C32G<br>TI.S.4XLARGE64.POST    16C64G<br>TI.S.6XLARGE48.POST    24C48G<br>TI.S.6XLARGE96.POST    24C96G<br>TI.S.8XLARGE64.POST    32C64G<br>TI.S.8XLARGE128.POST 32C128G<br>TI.GN7.LARGE20.POST    4C20G T4<em>1/4<br>TI.GN7.2XLARGE40.POST    10C40G T4</em>1/2<br>TI.GN7.2XLARGE32.POST    8C32G T4<em>1<br>TI.GN7.5XLARGE80.POST    20C80G T4</em>1<br>TI.GN7.8XLARGE128.POST    32C128G T4<em>1<br>TI.GN7.10XLARGE160.POST    40C160G T4</em>2<br>TI.GN7.20XLARGE320.POST    80C320G T4*4</p>
                     * @return InstanceType <p>使用DescribeBillingSpecs接口返回的规格列表中的值，或者参考实例列表:<br>TI.S.MEDIUM.POST    2C4G<br>TI.S.LARGE.POST    4C8G<br>TI.S.2XLARGE16.POST    8C16G<br>TI.S.2XLARGE32.POST    8C32G<br>TI.S.4XLARGE32.POST    16C32G<br>TI.S.4XLARGE64.POST    16C64G<br>TI.S.6XLARGE48.POST    24C48G<br>TI.S.6XLARGE96.POST    24C96G<br>TI.S.8XLARGE64.POST    32C64G<br>TI.S.8XLARGE128.POST 32C128G<br>TI.GN7.LARGE20.POST    4C20G T4<em>1/4<br>TI.GN7.2XLARGE40.POST    10C40G T4</em>1/2<br>TI.GN7.2XLARGE32.POST    8C32G T4<em>1<br>TI.GN7.5XLARGE80.POST    20C80G T4</em>1<br>TI.GN7.8XLARGE128.POST    32C128G T4<em>1<br>TI.GN7.10XLARGE160.POST    40C160G T4</em>2<br>TI.GN7.20XLARGE320.POST    80C320G T4*4</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>使用DescribeBillingSpecs接口返回的规格列表中的值，或者参考实例列表:<br>TI.S.MEDIUM.POST    2C4G<br>TI.S.LARGE.POST    4C8G<br>TI.S.2XLARGE16.POST    8C16G<br>TI.S.2XLARGE32.POST    8C32G<br>TI.S.4XLARGE32.POST    16C32G<br>TI.S.4XLARGE64.POST    16C64G<br>TI.S.6XLARGE48.POST    24C48G<br>TI.S.6XLARGE96.POST    24C96G<br>TI.S.8XLARGE64.POST    32C64G<br>TI.S.8XLARGE128.POST 32C128G<br>TI.GN7.LARGE20.POST    4C20G T4<em>1/4<br>TI.GN7.2XLARGE40.POST    10C40G T4</em>1/2<br>TI.GN7.2XLARGE32.POST    8C32G T4<em>1<br>TI.GN7.5XLARGE80.POST    20C80G T4</em>1<br>TI.GN7.8XLARGE128.POST    32C128G T4<em>1<br>TI.GN7.10XLARGE160.POST    40C160G T4</em>2<br>TI.GN7.20XLARGE320.POST    80C320G T4*4</p>
                     * @param _instanceType <p>使用DescribeBillingSpecs接口返回的规格列表中的值，或者参考实例列表:<br>TI.S.MEDIUM.POST    2C4G<br>TI.S.LARGE.POST    4C8G<br>TI.S.2XLARGE16.POST    8C16G<br>TI.S.2XLARGE32.POST    8C32G<br>TI.S.4XLARGE32.POST    16C32G<br>TI.S.4XLARGE64.POST    16C64G<br>TI.S.6XLARGE48.POST    24C48G<br>TI.S.6XLARGE96.POST    24C96G<br>TI.S.8XLARGE64.POST    32C64G<br>TI.S.8XLARGE128.POST 32C128G<br>TI.GN7.LARGE20.POST    4C20G T4<em>1/4<br>TI.GN7.2XLARGE40.POST    10C40G T4</em>1/2<br>TI.GN7.2XLARGE32.POST    8C32G T4<em>1<br>TI.GN7.5XLARGE80.POST    20C80G T4</em>1<br>TI.GN7.8XLARGE128.POST    32C128G T4<em>1<br>TI.GN7.10XLARGE160.POST    40C160G T4</em>2<br>TI.GN7.20XLARGE320.POST    80C320G T4*4</p>
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
                     * 获取<p>扩缩容类型 支持：自动 - &quot;AUTO&quot;, 手动 - &quot;MANUAL&quot;</p>
                     * @return ScaleMode <p>扩缩容类型 支持：自动 - &quot;AUTO&quot;, 手动 - &quot;MANUAL&quot;</p>
                     * 
                     */
                    std::string GetScaleMode() const;

                    /**
                     * 设置<p>扩缩容类型 支持：自动 - &quot;AUTO&quot;, 手动 - &quot;MANUAL&quot;</p>
                     * @param _scaleMode <p>扩缩容类型 支持：自动 - &quot;AUTO&quot;, 手动 - &quot;MANUAL&quot;</p>
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
                     * 获取<p>实例数量, 不同计费模式和调节模式下对应关系如下<br>PREPAID 和 POSTPAID_BY_HOUR:<br>手动调节模式下对应 实例数量<br>自动调节模式下对应 基于时间的默认策略的实例数量<br>HYBRID_PAID:<br>后付费实例手动调节模式下对应 实例数量<br>后付费实例自动调节模式下对应 时间策略的默认策略的实例数量</p>
                     * @return Replicas <p>实例数量, 不同计费模式和调节模式下对应关系如下<br>PREPAID 和 POSTPAID_BY_HOUR:<br>手动调节模式下对应 实例数量<br>自动调节模式下对应 基于时间的默认策略的实例数量<br>HYBRID_PAID:<br>后付费实例手动调节模式下对应 实例数量<br>后付费实例自动调节模式下对应 时间策略的默认策略的实例数量</p>
                     * 
                     */
                    int64_t GetReplicas() const;

                    /**
                     * 设置<p>实例数量, 不同计费模式和调节模式下对应关系如下<br>PREPAID 和 POSTPAID_BY_HOUR:<br>手动调节模式下对应 实例数量<br>自动调节模式下对应 基于时间的默认策略的实例数量<br>HYBRID_PAID:<br>后付费实例手动调节模式下对应 实例数量<br>后付费实例自动调节模式下对应 时间策略的默认策略的实例数量</p>
                     * @param _replicas <p>实例数量, 不同计费模式和调节模式下对应关系如下<br>PREPAID 和 POSTPAID_BY_HOUR:<br>手动调节模式下对应 实例数量<br>自动调节模式下对应 基于时间的默认策略的实例数量<br>HYBRID_PAID:<br>后付费实例手动调节模式下对应 实例数量<br>后付费实例自动调节模式下对应 时间策略的默认策略的实例数量</p>
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
                     * 获取<p>自动伸缩信息</p>
                     * @return HorizontalPodAutoscaler <p>自动伸缩信息</p>
                     * 
                     */
                    HorizontalPodAutoscaler GetHorizontalPodAutoscaler() const;

                    /**
                     * 设置<p>自动伸缩信息</p>
                     * @param _horizontalPodAutoscaler <p>自动伸缩信息</p>
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
                     * 获取<p>是否开启日志投递，开启后需填写配置投递到指定cls</p>
                     * @return LogEnable <p>是否开启日志投递，开启后需填写配置投递到指定cls</p>
                     * 
                     */
                    bool GetLogEnable() const;

                    /**
                     * 设置<p>是否开启日志投递，开启后需填写配置投递到指定cls</p>
                     * @param _logEnable <p>是否开启日志投递，开启后需填写配置投递到指定cls</p>
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
                     * 获取<p>日志配置，需要投递服务日志到指定cls时填写</p>
                     * @return LogConfig <p>日志配置，需要投递服务日志到指定cls时填写</p>
                     * 
                     */
                    LogConfig GetLogConfig() const;

                    /**
                     * 设置<p>日志配置，需要投递服务日志到指定cls时填写</p>
                     * @param _logConfig <p>日志配置，需要投递服务日志到指定cls时填写</p>
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
                     * 获取<p>特殊更新行为： &quot;STOP&quot;: 停止, &quot;RESUME&quot;: 重启, &quot;SCALE&quot;: 扩缩容, 存在这些特殊更新行为时，会忽略其他更新字段</p>
                     * @return ServiceAction <p>特殊更新行为： &quot;STOP&quot;: 停止, &quot;RESUME&quot;: 重启, &quot;SCALE&quot;: 扩缩容, 存在这些特殊更新行为时，会忽略其他更新字段</p>
                     * 
                     */
                    std::string GetServiceAction() const;

                    /**
                     * 设置<p>特殊更新行为： &quot;STOP&quot;: 停止, &quot;RESUME&quot;: 重启, &quot;SCALE&quot;: 扩缩容, 存在这些特殊更新行为时，会忽略其他更新字段</p>
                     * @param _serviceAction <p>特殊更新行为： &quot;STOP&quot;: 停止, &quot;RESUME&quot;: 重启, &quot;SCALE&quot;: 扩缩容, 存在这些特殊更新行为时，会忽略其他更新字段</p>
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
                     * 获取<p>服务的描述</p>
                     * @return ServiceDescription <p>服务的描述</p>
                     * 
                     */
                    std::string GetServiceDescription() const;

                    /**
                     * 设置<p>服务的描述</p>
                     * @param _serviceDescription <p>服务的描述</p>
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
                     * 获取<p>自动伸缩策略</p>
                     * @return ScaleStrategy <p>自动伸缩策略</p>
                     * 
                     */
                    std::string GetScaleStrategy() const;

                    /**
                     * 设置<p>自动伸缩策略</p>
                     * @param _scaleStrategy <p>自动伸缩策略</p>
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
                     * 获取<p>自动伸缩策略配置 HPA : 通过HPA进行弹性伸缩 CRON 通过定时任务进行伸缩</p>
                     * @return CronScaleJobs <p>自动伸缩策略配置 HPA : 通过HPA进行弹性伸缩 CRON 通过定时任务进行伸缩</p>
                     * 
                     */
                    std::vector<CronScaleJob> GetCronScaleJobs() const;

                    /**
                     * 设置<p>自动伸缩策略配置 HPA : 通过HPA进行弹性伸缩 CRON 通过定时任务进行伸缩</p>
                     * @param _cronScaleJobs <p>自动伸缩策略配置 HPA : 通过HPA进行弹性伸缩 CRON 通过定时任务进行伸缩</p>
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
                     * 获取<p>计费模式[HYBRID_PAID]时生效, 用于标识混合计费模式下的预付费实例数, 若不填则默认为1</p>
                     * @return HybridBillingPrepaidReplicas <p>计费模式[HYBRID_PAID]时生效, 用于标识混合计费模式下的预付费实例数, 若不填则默认为1</p>
                     * 
                     */
                    int64_t GetHybridBillingPrepaidReplicas() const;

                    /**
                     * 设置<p>计费模式[HYBRID_PAID]时生效, 用于标识混合计费模式下的预付费实例数, 若不填则默认为1</p>
                     * @param _hybridBillingPrepaidReplicas <p>计费模式[HYBRID_PAID]时生效, 用于标识混合计费模式下的预付费实例数, 若不填则默认为1</p>
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
                     * 获取<p>是否开启模型的热更新。默认不开启</p>
                     * @return ModelHotUpdateEnable <p>是否开启模型的热更新。默认不开启</p>
                     * 
                     */
                    bool GetModelHotUpdateEnable() const;

                    /**
                     * 设置<p>是否开启模型的热更新。默认不开启</p>
                     * @param _modelHotUpdateEnable <p>是否开启模型的热更新。默认不开启</p>
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
                     * 获取<p>定时停止配置</p>
                     * @return ScheduledAction <p>定时停止配置</p>
                     * 
                     */
                    ScheduledAction GetScheduledAction() const;

                    /**
                     * 设置<p>定时停止配置</p>
                     * @param _scheduledAction <p>定时停止配置</p>
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
                     * 获取<p>服务限速限流相关配置</p>
                     * @return ServiceLimit <p>服务限速限流相关配置</p>
                     * 
                     */
                    ServiceLimit GetServiceLimit() const;

                    /**
                     * 设置<p>服务限速限流相关配置</p>
                     * @param _serviceLimit <p>服务限速限流相关配置</p>
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
                     * 获取<p>挂载配置，目前只支持CFS</p>
                     * @return VolumeMount <p>挂载配置，目前只支持CFS</p>
                     * 
                     */
                    VolumeMount GetVolumeMount() const;

                    /**
                     * 设置<p>挂载配置，目前只支持CFS</p>
                     * @param _volumeMount <p>挂载配置，目前只支持CFS</p>
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
                     * 获取<p>是否开启模型的加速, 仅对StableDiffusion(动态加速)格式的模型有效。默认不开启</p>
                     * @return ModelTurboEnable <p>是否开启模型的加速, 仅对StableDiffusion(动态加速)格式的模型有效。默认不开启</p>
                     * 
                     */
                    bool GetModelTurboEnable() const;

                    /**
                     * 设置<p>是否开启模型的加速, 仅对StableDiffusion(动态加速)格式的模型有效。默认不开启</p>
                     * @param _modelTurboEnable <p>是否开启模型的加速, 仅对StableDiffusion(动态加速)格式的模型有效。默认不开启</p>
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
                     * 获取<p>服务的启动命令，如遇特殊字符导致配置失败，可使用CommandBase64参数</p>
                     * @return Command <p>服务的启动命令，如遇特殊字符导致配置失败，可使用CommandBase64参数</p>
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置<p>服务的启动命令，如遇特殊字符导致配置失败，可使用CommandBase64参数</p>
                     * @param _command <p>服务的启动命令，如遇特殊字符导致配置失败，可使用CommandBase64参数</p>
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
                     * 获取<p>是否开启TIONE内网访问外部，此功能仅支持后付费机型与从TIONE平台购买的预付费机型；使用从CVM选择资源组时此配置不生效。</p>
                     * @return ServiceEIP <p>是否开启TIONE内网访问外部，此功能仅支持后付费机型与从TIONE平台购买的预付费机型；使用从CVM选择资源组时此配置不生效。</p>
                     * 
                     */
                    ServiceEIP GetServiceEIP() const;

                    /**
                     * 设置<p>是否开启TIONE内网访问外部，此功能仅支持后付费机型与从TIONE平台购买的预付费机型；使用从CVM选择资源组时此配置不生效。</p>
                     * @param _serviceEIP <p>是否开启TIONE内网访问外部，此功能仅支持后付费机型与从TIONE平台购买的预付费机型；使用从CVM选择资源组时此配置不生效。</p>
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
                     * 获取<p>服务的启动命令，以base64格式进行输入，与Command同时配置时，仅当前参数生效</p>
                     * @return CommandBase64 <p>服务的启动命令，以base64格式进行输入，与Command同时配置时，仅当前参数生效</p>
                     * 
                     */
                    std::string GetCommandBase64() const;

                    /**
                     * 设置<p>服务的启动命令，以base64格式进行输入，与Command同时配置时，仅当前参数生效</p>
                     * @param _commandBase64 <p>服务的启动命令，以base64格式进行输入，与Command同时配置时，仅当前参数生效</p>
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
                     * 获取<p>服务端口，仅在非内置镜像时生效，默认8501。不支持输入8501-8510,6006,9092</p>
                     * @return ServicePort <p>服务端口，仅在非内置镜像时生效，默认8501。不支持输入8501-8510,6006,9092</p>
                     * 
                     */
                    int64_t GetServicePort() const;

                    /**
                     * 设置<p>服务端口，仅在非内置镜像时生效，默认8501。不支持输入8501-8510,6006,9092</p>
                     * @param _servicePort <p>服务端口，仅在非内置镜像时生效，默认8501。不支持输入8501-8510,6006,9092</p>
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
                     * 获取<p>单副本下的实例数，仅在部署类型为DIST时生效，默认1</p>
                     * @return InstancePerReplicas <p>单副本下的实例数，仅在部署类型为DIST时生效，默认1</p>
                     * 
                     */
                    int64_t GetInstancePerReplicas() const;

                    /**
                     * 设置<p>单副本下的实例数，仅在部署类型为DIST时生效，默认1</p>
                     * @param _instancePerReplicas <p>单副本下的实例数，仅在部署类型为DIST时生效，默认1</p>
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
                     * 获取<p>服务的优雅退出时限。单位为秒，默认值为30，最小为1</p>
                     * @return TerminationGracePeriodSeconds <p>服务的优雅退出时限。单位为秒，默认值为30，最小为1</p>
                     * 
                     */
                    int64_t GetTerminationGracePeriodSeconds() const;

                    /**
                     * 设置<p>服务的优雅退出时限。单位为秒，默认值为30，最小为1</p>
                     * @param _terminationGracePeriodSeconds <p>服务的优雅退出时限。单位为秒，默认值为30，最小为1</p>
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
                     * 获取<p>服务实例停止前执行的命令，执行完毕或执行时间超过优雅退出时限后实例结束</p>
                     * @return PreStopCommand <p>服务实例停止前执行的命令，执行完毕或执行时间超过优雅退出时限后实例结束</p>
                     * 
                     */
                    std::vector<std::string> GetPreStopCommand() const;

                    /**
                     * 设置<p>服务实例停止前执行的命令，执行完毕或执行时间超过优雅退出时限后实例结束</p>
                     * @param _preStopCommand <p>服务实例停止前执行的命令，执行完毕或执行时间超过优雅退出时限后实例结束</p>
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
                     * 获取<p>是否启动grpc端口</p>
                     * @return GrpcEnable <p>是否启动grpc端口</p>
                     * 
                     */
                    bool GetGrpcEnable() const;

                    /**
                     * 设置<p>是否启动grpc端口</p>
                     * @param _grpcEnable <p>是否启动grpc端口</p>
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
                     * 获取<p>健康探针</p>
                     * @return HealthProbe <p>健康探针</p>
                     * 
                     */
                    HealthProbe GetHealthProbe() const;

                    /**
                     * 设置<p>健康探针</p>
                     * @param _healthProbe <p>健康探针</p>
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
                     * 获取<p>滚动更新策略</p>
                     * @return RollingUpdate <p>滚动更新策略</p>
                     * 
                     */
                    RollingUpdate GetRollingUpdate() const;

                    /**
                     * 设置<p>滚动更新策略</p>
                     * @param _rollingUpdate <p>滚动更新策略</p>
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
                     * 获取<p>sidecar配置</p>
                     * @return Sidecar <p>sidecar配置</p>
                     * 
                     */
                    SidecarSpec GetSidecar() const;

                    /**
                     * 设置<p>sidecar配置</p>
                     * @param _sidecar <p>sidecar配置</p>
                     * 
                     */
                    void SetSidecar(const SidecarSpec& _sidecar);

                    /**
                     * 判断参数 Sidecar 是否已赋值
                     * @return Sidecar 是否已赋值
                     * 
                     */
                    bool SidecarHasBeenSet() const;

                    /**
                     * 获取<p>资源组 id</p>
                     * @return ResourceGroupId <p>资源组 id</p>
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置<p>资源组 id</p>
                     * @param _resourceGroupId <p>资源组 id</p>
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>数据盘批量挂载配置，当前仅支持CFS，仅针对“模型来源-腾讯云存储、模型来源-腾讯云容器镜像、模型来源-资源组、模型来源-数据源”。</p>
                     * @return VolumeMounts <p>数据盘批量挂载配置，当前仅支持CFS，仅针对“模型来源-腾讯云存储、模型来源-腾讯云容器镜像、模型来源-资源组、模型来源-数据源”。</p>
                     * 
                     */
                    std::vector<VolumeMount> GetVolumeMounts() const;

                    /**
                     * 设置<p>数据盘批量挂载配置，当前仅支持CFS，仅针对“模型来源-腾讯云存储、模型来源-腾讯云容器镜像、模型来源-资源组、模型来源-数据源”。</p>
                     * @param _volumeMounts <p>数据盘批量挂载配置，当前仅支持CFS，仅针对“模型来源-腾讯云存储、模型来源-腾讯云容器镜像、模型来源-资源组、模型来源-数据源”。</p>
                     * 
                     */
                    void SetVolumeMounts(const std::vector<VolumeMount>& _volumeMounts);

                    /**
                     * 判断参数 VolumeMounts 是否已赋值
                     * @return VolumeMounts 是否已赋值
                     * 
                     */
                    bool VolumeMountsHasBeenSet() const;

                    /**
                     * 获取<p>调度策略 [binpack] 优先占满整机，尽量避免碎卡（默认值）[spread] 优先分散在各个节点，确保服务高可用</p>
                     * @return SchedulingStrategy <p>调度策略 [binpack] 优先占满整机，尽量避免碎卡（默认值）[spread] 优先分散在各个节点，确保服务高可用</p>
                     * 
                     */
                    std::string GetSchedulingStrategy() const;

                    /**
                     * 设置<p>调度策略 [binpack] 优先占满整机，尽量避免碎卡（默认值）[spread] 优先分散在各个节点，确保服务高可用</p>
                     * @param _schedulingStrategy <p>调度策略 [binpack] 优先占满整机，尽量避免碎卡（默认值）[spread] 优先分散在各个节点，确保服务高可用</p>
                     * 
                     */
                    void SetSchedulingStrategy(const std::string& _schedulingStrategy);

                    /**
                     * 判断参数 SchedulingStrategy 是否已赋值
                     * @return SchedulingStrategy 是否已赋值
                     * 
                     */
                    bool SchedulingStrategyHasBeenSet() const;

                    /**
                     * 获取<p>目标工作空间，不为0则进行迁移，源服务只允许在默认空间</p>
                     * @return TargetProjectId <p>目标工作空间，不为0则进行迁移，源服务只允许在默认空间</p>
                     * 
                     */
                    int64_t GetTargetProjectId() const;

                    /**
                     * 设置<p>目标工作空间，不为0则进行迁移，源服务只允许在默认空间</p>
                     * @param _targetProjectId <p>目标工作空间，不为0则进行迁移，源服务只允许在默认空间</p>
                     * 
                     */
                    void SetTargetProjectId(const int64_t& _targetProjectId);

                    /**
                     * 判断参数 TargetProjectId 是否已赋值
                     * @return TargetProjectId 是否已赋值
                     * 
                     */
                    bool TargetProjectIdHasBeenSet() const;

                private:

                    /**
                     * <p>服务id</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     */
                    std::string m_tiProjectId;
                    bool m_tiProjectIdHasBeenSet;

                    /**
                     * <p>模型信息，需要挂载模型时填写</p>
                     */
                    ModelInfo m_modelInfo;
                    bool m_modelInfoHasBeenSet;

                    /**
                     * <p>镜像信息，配置服务运行所需的镜像地址等信息</p>
                     */
                    ImageInfo m_imageInfo;
                    bool m_imageInfoHasBeenSet;

                    /**
                     * <p>环境变量，可选参数，用于配置容器中的环境变量</p>
                     */
                    std::vector<EnvVar> m_env;
                    bool m_envHasBeenSet;

                    /**
                     * <p>资源描述，指定预付费模式下的cpu,mem,gpu等信息，后付费无需填写</p>
                     */
                    ResourceInfo m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * <p>使用DescribeBillingSpecs接口返回的规格列表中的值，或者参考实例列表:<br>TI.S.MEDIUM.POST    2C4G<br>TI.S.LARGE.POST    4C8G<br>TI.S.2XLARGE16.POST    8C16G<br>TI.S.2XLARGE32.POST    8C32G<br>TI.S.4XLARGE32.POST    16C32G<br>TI.S.4XLARGE64.POST    16C64G<br>TI.S.6XLARGE48.POST    24C48G<br>TI.S.6XLARGE96.POST    24C96G<br>TI.S.8XLARGE64.POST    32C64G<br>TI.S.8XLARGE128.POST 32C128G<br>TI.GN7.LARGE20.POST    4C20G T4<em>1/4<br>TI.GN7.2XLARGE40.POST    10C40G T4</em>1/2<br>TI.GN7.2XLARGE32.POST    8C32G T4<em>1<br>TI.GN7.5XLARGE80.POST    20C80G T4</em>1<br>TI.GN7.8XLARGE128.POST    32C128G T4<em>1<br>TI.GN7.10XLARGE160.POST    40C160G T4</em>2<br>TI.GN7.20XLARGE320.POST    80C320G T4*4</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>扩缩容类型 支持：自动 - &quot;AUTO&quot;, 手动 - &quot;MANUAL&quot;</p>
                     */
                    std::string m_scaleMode;
                    bool m_scaleModeHasBeenSet;

                    /**
                     * <p>实例数量, 不同计费模式和调节模式下对应关系如下<br>PREPAID 和 POSTPAID_BY_HOUR:<br>手动调节模式下对应 实例数量<br>自动调节模式下对应 基于时间的默认策略的实例数量<br>HYBRID_PAID:<br>后付费实例手动调节模式下对应 实例数量<br>后付费实例自动调节模式下对应 时间策略的默认策略的实例数量</p>
                     */
                    int64_t m_replicas;
                    bool m_replicasHasBeenSet;

                    /**
                     * <p>自动伸缩信息</p>
                     */
                    HorizontalPodAutoscaler m_horizontalPodAutoscaler;
                    bool m_horizontalPodAutoscalerHasBeenSet;

                    /**
                     * <p>是否开启日志投递，开启后需填写配置投递到指定cls</p>
                     */
                    bool m_logEnable;
                    bool m_logEnableHasBeenSet;

                    /**
                     * <p>日志配置，需要投递服务日志到指定cls时填写</p>
                     */
                    LogConfig m_logConfig;
                    bool m_logConfigHasBeenSet;

                    /**
                     * <p>特殊更新行为： &quot;STOP&quot;: 停止, &quot;RESUME&quot;: 重启, &quot;SCALE&quot;: 扩缩容, 存在这些特殊更新行为时，会忽略其他更新字段</p>
                     */
                    std::string m_serviceAction;
                    bool m_serviceActionHasBeenSet;

                    /**
                     * <p>服务的描述</p>
                     */
                    std::string m_serviceDescription;
                    bool m_serviceDescriptionHasBeenSet;

                    /**
                     * <p>自动伸缩策略</p>
                     */
                    std::string m_scaleStrategy;
                    bool m_scaleStrategyHasBeenSet;

                    /**
                     * <p>自动伸缩策略配置 HPA : 通过HPA进行弹性伸缩 CRON 通过定时任务进行伸缩</p>
                     */
                    std::vector<CronScaleJob> m_cronScaleJobs;
                    bool m_cronScaleJobsHasBeenSet;

                    /**
                     * <p>计费模式[HYBRID_PAID]时生效, 用于标识混合计费模式下的预付费实例数, 若不填则默认为1</p>
                     */
                    int64_t m_hybridBillingPrepaidReplicas;
                    bool m_hybridBillingPrepaidReplicasHasBeenSet;

                    /**
                     * <p>是否开启模型的热更新。默认不开启</p>
                     */
                    bool m_modelHotUpdateEnable;
                    bool m_modelHotUpdateEnableHasBeenSet;

                    /**
                     * <p>定时停止配置</p>
                     */
                    ScheduledAction m_scheduledAction;
                    bool m_scheduledActionHasBeenSet;

                    /**
                     * <p>服务限速限流相关配置</p>
                     */
                    ServiceLimit m_serviceLimit;
                    bool m_serviceLimitHasBeenSet;

                    /**
                     * <p>挂载配置，目前只支持CFS</p>
                     */
                    VolumeMount m_volumeMount;
                    bool m_volumeMountHasBeenSet;

                    /**
                     * <p>是否开启模型的加速, 仅对StableDiffusion(动态加速)格式的模型有效。默认不开启</p>
                     */
                    bool m_modelTurboEnable;
                    bool m_modelTurboEnableHasBeenSet;

                    /**
                     * <p>服务的启动命令，如遇特殊字符导致配置失败，可使用CommandBase64参数</p>
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * <p>是否开启TIONE内网访问外部，此功能仅支持后付费机型与从TIONE平台购买的预付费机型；使用从CVM选择资源组时此配置不生效。</p>
                     */
                    ServiceEIP m_serviceEIP;
                    bool m_serviceEIPHasBeenSet;

                    /**
                     * <p>服务的启动命令，以base64格式进行输入，与Command同时配置时，仅当前参数生效</p>
                     */
                    std::string m_commandBase64;
                    bool m_commandBase64HasBeenSet;

                    /**
                     * <p>服务端口，仅在非内置镜像时生效，默认8501。不支持输入8501-8510,6006,9092</p>
                     */
                    int64_t m_servicePort;
                    bool m_servicePortHasBeenSet;

                    /**
                     * <p>单副本下的实例数，仅在部署类型为DIST时生效，默认1</p>
                     */
                    int64_t m_instancePerReplicas;
                    bool m_instancePerReplicasHasBeenSet;

                    /**
                     * <p>服务的优雅退出时限。单位为秒，默认值为30，最小为1</p>
                     */
                    int64_t m_terminationGracePeriodSeconds;
                    bool m_terminationGracePeriodSecondsHasBeenSet;

                    /**
                     * <p>服务实例停止前执行的命令，执行完毕或执行时间超过优雅退出时限后实例结束</p>
                     */
                    std::vector<std::string> m_preStopCommand;
                    bool m_preStopCommandHasBeenSet;

                    /**
                     * <p>是否启动grpc端口</p>
                     */
                    bool m_grpcEnable;
                    bool m_grpcEnableHasBeenSet;

                    /**
                     * <p>健康探针</p>
                     */
                    HealthProbe m_healthProbe;
                    bool m_healthProbeHasBeenSet;

                    /**
                     * <p>滚动更新策略</p>
                     */
                    RollingUpdate m_rollingUpdate;
                    bool m_rollingUpdateHasBeenSet;

                    /**
                     * <p>sidecar配置</p>
                     */
                    SidecarSpec m_sidecar;
                    bool m_sidecarHasBeenSet;

                    /**
                     * <p>资源组 id</p>
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * <p>数据盘批量挂载配置，当前仅支持CFS，仅针对“模型来源-腾讯云存储、模型来源-腾讯云容器镜像、模型来源-资源组、模型来源-数据源”。</p>
                     */
                    std::vector<VolumeMount> m_volumeMounts;
                    bool m_volumeMountsHasBeenSet;

                    /**
                     * <p>调度策略 [binpack] 优先占满整机，尽量避免碎卡（默认值）[spread] 优先分散在各个节点，确保服务高可用</p>
                     */
                    std::string m_schedulingStrategy;
                    bool m_schedulingStrategyHasBeenSet;

                    /**
                     * <p>目标工作空间，不为0则进行迁移，源服务只允许在默认空间</p>
                     */
                    int64_t m_targetProjectId;
                    bool m_targetProjectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_MODIFYMODELSERVICEREQUEST_H_
