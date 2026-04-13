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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICEINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ImageInfo.h>
#include <tencentcloud/tione/v20211111/model/EnvVar.h>
#include <tencentcloud/tione/v20211111/model/ResourceInfo.h>
#include <tencentcloud/tione/v20211111/model/ModelInfo.h>
#include <tencentcloud/tione/v20211111/model/LogConfig.h>
#include <tencentcloud/tione/v20211111/model/HorizontalPodAutoscaler.h>
#include <tencentcloud/tione/v20211111/model/WorkloadStatus.h>
#include <tencentcloud/tione/v20211111/model/CronScaleJob.h>
#include <tencentcloud/tione/v20211111/model/ScheduledAction.h>
#include <tencentcloud/tione/v20211111/model/Pod.h>
#include <tencentcloud/tione/v20211111/model/ServiceLimit.h>
#include <tencentcloud/tione/v20211111/model/VolumeMount.h>
#include <tencentcloud/tione/v20211111/model/InferCodeInfo.h>
#include <tencentcloud/tione/v20211111/model/ServiceEIP.h>
#include <tencentcloud/tione/v20211111/model/HealthProbe.h>
#include <tencentcloud/tione/v20211111/model/RollingUpdate.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 推理服务在集群中的信息
                */
                class ServiceInfo : public AbstractModel
                {
                public:
                    ServiceInfo();
                    ~ServiceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>期望运行的Pod数量，停止状态是0<br>不同计费模式和调节模式下对应关系如下<br>PREPAID 和 POSTPAID_BY_HOUR:<br>手动调节模式下对应 实例数量<br>自动调节模式下对应 基于时间的默认策略的实例数量<br>HYBRID_PAID:<br>后付费实例手动调节模式下对应 实例数量<br>后付费实例自动调节模式下对应 时间策略的默认策略的实例数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Replicas <p>期望运行的Pod数量，停止状态是0<br>不同计费模式和调节模式下对应关系如下<br>PREPAID 和 POSTPAID_BY_HOUR:<br>手动调节模式下对应 实例数量<br>自动调节模式下对应 基于时间的默认策略的实例数量<br>HYBRID_PAID:<br>后付费实例手动调节模式下对应 实例数量<br>后付费实例自动调节模式下对应 时间策略的默认策略的实例数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetReplicas() const;

                    /**
                     * 设置<p>期望运行的Pod数量，停止状态是0<br>不同计费模式和调节模式下对应关系如下<br>PREPAID 和 POSTPAID_BY_HOUR:<br>手动调节模式下对应 实例数量<br>自动调节模式下对应 基于时间的默认策略的实例数量<br>HYBRID_PAID:<br>后付费实例手动调节模式下对应 实例数量<br>后付费实例自动调节模式下对应 时间策略的默认策略的实例数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _replicas <p>期望运行的Pod数量，停止状态是0<br>不同计费模式和调节模式下对应关系如下<br>PREPAID 和 POSTPAID_BY_HOUR:<br>手动调节模式下对应 实例数量<br>自动调节模式下对应 基于时间的默认策略的实例数量<br>HYBRID_PAID:<br>后付费实例手动调节模式下对应 实例数量<br>后付费实例自动调节模式下对应 时间策略的默认策略的实例数量</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>镜像信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageInfo <p>镜像信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageInfo GetImageInfo() const;

                    /**
                     * 设置<p>镜像信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageInfo <p>镜像信息</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>环境变量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Env <p>环境变量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EnvVar> GetEnv() const;

                    /**
                     * 设置<p>环境变量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _env <p>环境变量</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>资源信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Resources <p>资源信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ResourceInfo GetResources() const;

                    /**
                     * 设置<p>资源信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resources <p>资源信息</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>后付费实例对应的机型规格</p>
                     * @return InstanceType <p>后付费实例对应的机型规格</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>后付费实例对应的机型规格</p>
                     * @param _instanceType <p>后付费实例对应的机型规格</p>
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
                     * 获取<p>模型信息</p>
                     * @return ModelInfo <p>模型信息</p>
                     * 
                     */
                    ModelInfo GetModelInfo() const;

                    /**
                     * 设置<p>模型信息</p>
                     * @param _modelInfo <p>模型信息</p>
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
                     * 获取<p>是否启用日志</p>
                     * @return LogEnable <p>是否启用日志</p>
                     * 
                     */
                    bool GetLogEnable() const;

                    /**
                     * 设置<p>是否启用日志</p>
                     * @param _logEnable <p>是否启用日志</p>
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
                     * 获取<p>日志配置</p>
                     * @return LogConfig <p>日志配置</p>
                     * 
                     */
                    LogConfig GetLogConfig() const;

                    /**
                     * 设置<p>日志配置</p>
                     * @param _logConfig <p>日志配置</p>
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
                     * 获取<p>是否开启鉴权</p>
                     * @return AuthorizationEnable <p>是否开启鉴权</p>
                     * 
                     */
                    bool GetAuthorizationEnable() const;

                    /**
                     * 设置<p>是否开启鉴权</p>
                     * @param _authorizationEnable <p>是否开启鉴权</p>
                     * 
                     */
                    void SetAuthorizationEnable(const bool& _authorizationEnable);

                    /**
                     * 判断参数 AuthorizationEnable 是否已赋值
                     * @return AuthorizationEnable 是否已赋值
                     * 
                     */
                    bool AuthorizationEnableHasBeenSet() const;

                    /**
                     * 获取<p>hpa配置</p>
                     * @return HorizontalPodAutoscaler <p>hpa配置</p>
                     * 
                     */
                    HorizontalPodAutoscaler GetHorizontalPodAutoscaler() const;

                    /**
                     * 设置<p>hpa配置</p>
                     * @param _horizontalPodAutoscaler <p>hpa配置</p>
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
                     * 获取<p>服务的状态描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>服务的状态描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WorkloadStatus GetStatus() const;

                    /**
                     * 设置<p>服务的状态描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>服务的状态描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const WorkloadStatus& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>权重</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Weight <p>权重</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置<p>权重</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weight <p>权重</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取<p>资源总量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceTotal <p>资源总量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ResourceInfo GetResourceTotal() const;

                    /**
                     * 设置<p>资源总量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceTotal <p>资源总量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceTotal(const ResourceInfo& _resourceTotal);

                    /**
                     * 判断参数 ResourceTotal 是否已赋值
                     * @return ResourceTotal 是否已赋值
                     * 
                     */
                    bool ResourceTotalHasBeenSet() const;

                    /**
                     * 获取<p>历史实例数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OldReplicas <p>历史实例数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOldReplicas() const;

                    /**
                     * 设置<p>历史实例数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _oldReplicas <p>历史实例数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOldReplicas(const int64_t& _oldReplicas);

                    /**
                     * 判断参数 OldReplicas 是否已赋值
                     * @return OldReplicas 是否已赋值
                     * 
                     */
                    bool OldReplicasHasBeenSet() const;

                    /**
                     * 获取<p>计费模式[HYBRID_PAID]时生效, 用于标识混合计费模式下的预付费实例数, 若不填则默认为1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HybridBillingPrepaidReplicas <p>计费模式[HYBRID_PAID]时生效, 用于标识混合计费模式下的预付费实例数, 若不填则默认为1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHybridBillingPrepaidReplicas() const;

                    /**
                     * 设置<p>计费模式[HYBRID_PAID]时生效, 用于标识混合计费模式下的预付费实例数, 若不填则默认为1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hybridBillingPrepaidReplicas <p>计费模式[HYBRID_PAID]时生效, 用于标识混合计费模式下的预付费实例数, 若不填则默认为1</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>历史 HYBRID_PAID 时的实例数，用户恢复服务</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OldHybridBillingPrepaidReplicas <p>历史 HYBRID_PAID 时的实例数，用户恢复服务</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOldHybridBillingPrepaidReplicas() const;

                    /**
                     * 设置<p>历史 HYBRID_PAID 时的实例数，用户恢复服务</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _oldHybridBillingPrepaidReplicas <p>历史 HYBRID_PAID 时的实例数，用户恢复服务</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOldHybridBillingPrepaidReplicas(const int64_t& _oldHybridBillingPrepaidReplicas);

                    /**
                     * 判断参数 OldHybridBillingPrepaidReplicas 是否已赋值
                     * @return OldHybridBillingPrepaidReplicas 是否已赋值
                     * 
                     */
                    bool OldHybridBillingPrepaidReplicasHasBeenSet() const;

                    /**
                     * 获取<p>是否开启模型的热更新。默认不开启</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelHotUpdateEnable <p>是否开启模型的热更新。默认不开启</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetModelHotUpdateEnable() const;

                    /**
                     * 设置<p>是否开启模型的热更新。默认不开启</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelHotUpdateEnable <p>是否开启模型的热更新。默认不开启</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>服务的规格别名</p>
                     * @return InstanceAlias <p>服务的规格别名</p>
                     * 
                     */
                    std::string GetInstanceAlias() const;

                    /**
                     * 设置<p>服务的规格别名</p>
                     * @param _instanceAlias <p>服务的规格别名</p>
                     * 
                     */
                    void SetInstanceAlias(const std::string& _instanceAlias);

                    /**
                     * 判断参数 InstanceAlias 是否已赋值
                     * @return InstanceAlias 是否已赋值
                     * 
                     */
                    bool InstanceAliasHasBeenSet() const;

                    /**
                     * 获取<p>实例数量调节方式,默认为手动<br>支持：自动 - &quot;AUTO&quot;, 手动 - &quot;MANUAL&quot;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScaleMode <p>实例数量调节方式,默认为手动<br>支持：自动 - &quot;AUTO&quot;, 手动 - &quot;MANUAL&quot;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScaleMode() const;

                    /**
                     * 设置<p>实例数量调节方式,默认为手动<br>支持：自动 - &quot;AUTO&quot;, 手动 - &quot;MANUAL&quot;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scaleMode <p>实例数量调节方式,默认为手动<br>支持：自动 - &quot;AUTO&quot;, 手动 - &quot;MANUAL&quot;</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>定时伸缩任务</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CronScaleJobs <p>定时伸缩任务</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CronScaleJob> GetCronScaleJobs() const;

                    /**
                     * 设置<p>定时伸缩任务</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cronScaleJobs <p>定时伸缩任务</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>定时伸缩策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScaleStrategy <p>定时伸缩策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScaleStrategy() const;

                    /**
                     * 设置<p>定时伸缩策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scaleStrategy <p>定时伸缩策略</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>定时停止的配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduledAction <p>定时停止的配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ScheduledAction GetScheduledAction() const;

                    /**
                     * 设置<p>定时停止的配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduledAction <p>定时停止的配置</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>实例列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PodList <p>实例列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::vector<std::string> GetPodList() const;

                    /**
                     * 设置<p>实例列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _podList <p>实例列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetPodList(const std::vector<std::string>& _podList);

                    /**
                     * 判断参数 PodList 是否已赋值
                     * @return PodList 是否已赋值
                     * @deprecated
                     */
                    bool PodListHasBeenSet() const;

                    /**
                     * 获取<p>Pod列表信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Pods <p>Pod列表信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    Pod GetPods() const;

                    /**
                     * 设置<p>Pod列表信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pods <p>Pod列表信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetPods(const Pod& _pods);

                    /**
                     * 判断参数 Pods 是否已赋值
                     * @return Pods 是否已赋值
                     * @deprecated
                     */
                    bool PodsHasBeenSet() const;

                    /**
                     * 获取<p>Pod列表信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PodInfos <p>Pod列表信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Pod> GetPodInfos() const;

                    /**
                     * 设置<p>Pod列表信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _podInfos <p>Pod列表信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPodInfos(const std::vector<Pod>& _podInfos);

                    /**
                     * 判断参数 PodInfos 是否已赋值
                     * @return PodInfos 是否已赋值
                     * 
                     */
                    bool PodInfosHasBeenSet() const;

                    /**
                     * 获取<p>服务限速限流相关配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceLimit <p>服务限速限流相关配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ServiceLimit GetServiceLimit() const;

                    /**
                     * 设置<p>服务限速限流相关配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceLimit <p>服务限速限流相关配置</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>是否开启模型的加速, 仅对StableDiffusion(动态加速)格式的模型有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelTurboEnable <p>是否开启模型的加速, 仅对StableDiffusion(动态加速)格式的模型有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetModelTurboEnable() const;

                    /**
                     * 设置<p>是否开启模型的加速, 仅对StableDiffusion(动态加速)格式的模型有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelTurboEnable <p>是否开启模型的加速, 仅对StableDiffusion(动态加速)格式的模型有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>挂载</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VolumeMount <p>挂载</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VolumeMount GetVolumeMount() const;

                    /**
                     * 设置<p>挂载</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _volumeMount <p>挂载</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>推理代码信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InferCodeInfo <p>推理代码信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InferCodeInfo GetInferCodeInfo() const;

                    /**
                     * 设置<p>推理代码信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inferCodeInfo <p>推理代码信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInferCodeInfo(const InferCodeInfo& _inferCodeInfo);

                    /**
                     * 判断参数 InferCodeInfo 是否已赋值
                     * @return InferCodeInfo 是否已赋值
                     * 
                     */
                    bool InferCodeInfoHasBeenSet() const;

                    /**
                     * 获取<p>服务的启动命令</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Command <p>服务的启动命令</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置<p>服务的启动命令</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _command <p>服务的启动命令</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>开启TIONE内网访问外部设置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceEIP <p>开启TIONE内网访问外部设置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ServiceEIP GetServiceEIP() const;

                    /**
                     * 设置<p>开启TIONE内网访问外部设置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceEIP <p>开启TIONE内网访问外部设置</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>服务端口，默认为8501</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServicePort <p>服务端口，默认为8501</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetServicePort() const;

                    /**
                     * 设置<p>服务端口，默认为8501</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _servicePort <p>服务端口，默认为8501</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>是否启用grpc端口</p>
                     * @return GrpcEnable <p>是否启用grpc端口</p>
                     * 
                     */
                    bool GetGrpcEnable() const;

                    /**
                     * 设置<p>是否启用grpc端口</p>
                     * @param _grpcEnable <p>是否启用grpc端口</p>
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
                     * 获取<p>滚动更新配置</p>
                     * @return RollingUpdate <p>滚动更新配置</p>
                     * 
                     */
                    RollingUpdate GetRollingUpdate() const;

                    /**
                     * 设置<p>滚动更新配置</p>
                     * @param _rollingUpdate <p>滚动更新配置</p>
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
                     * 获取<p>单副本下的实例数，仅在部署类型为DIST、ROLE时生效，默认1</p>
                     * @return InstancePerReplicas <p>单副本下的实例数，仅在部署类型为DIST、ROLE时生效，默认1</p>
                     * 
                     */
                    int64_t GetInstancePerReplicas() const;

                    /**
                     * 设置<p>单副本下的实例数，仅在部署类型为DIST、ROLE时生效，默认1</p>
                     * @param _instancePerReplicas <p>单副本下的实例数，仅在部署类型为DIST、ROLE时生效，默认1</p>
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
                     * 获取<p>批量数据盘挂载配置</p>
                     * @return VolumeMounts <p>批量数据盘挂载配置</p>
                     * 
                     */
                    std::vector<VolumeMount> GetVolumeMounts() const;

                    /**
                     * 设置<p>批量数据盘挂载配置</p>
                     * @param _volumeMounts <p>批量数据盘挂载配置</p>
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
                     * 获取<p>服务实际运行的节点数</p>
                     * @return NodeCount <p>服务实际运行的节点数</p>
                     * 
                     */
                    int64_t GetNodeCount() const;

                    /**
                     * 设置<p>服务实际运行的节点数</p>
                     * @param _nodeCount <p>服务实际运行的节点数</p>
                     * 
                     */
                    void SetNodeCount(const int64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                private:

                    /**
                     * <p>期望运行的Pod数量，停止状态是0<br>不同计费模式和调节模式下对应关系如下<br>PREPAID 和 POSTPAID_BY_HOUR:<br>手动调节模式下对应 实例数量<br>自动调节模式下对应 基于时间的默认策略的实例数量<br>HYBRID_PAID:<br>后付费实例手动调节模式下对应 实例数量<br>后付费实例自动调节模式下对应 时间策略的默认策略的实例数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_replicas;
                    bool m_replicasHasBeenSet;

                    /**
                     * <p>镜像信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageInfo m_imageInfo;
                    bool m_imageInfoHasBeenSet;

                    /**
                     * <p>环境变量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EnvVar> m_env;
                    bool m_envHasBeenSet;

                    /**
                     * <p>资源信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ResourceInfo m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * <p>后付费实例对应的机型规格</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>模型信息</p>
                     */
                    ModelInfo m_modelInfo;
                    bool m_modelInfoHasBeenSet;

                    /**
                     * <p>是否启用日志</p>
                     */
                    bool m_logEnable;
                    bool m_logEnableHasBeenSet;

                    /**
                     * <p>日志配置</p>
                     */
                    LogConfig m_logConfig;
                    bool m_logConfigHasBeenSet;

                    /**
                     * <p>是否开启鉴权</p>
                     */
                    bool m_authorizationEnable;
                    bool m_authorizationEnableHasBeenSet;

                    /**
                     * <p>hpa配置</p>
                     */
                    HorizontalPodAutoscaler m_horizontalPodAutoscaler;
                    bool m_horizontalPodAutoscalerHasBeenSet;

                    /**
                     * <p>服务的状态描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WorkloadStatus m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>权重</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * <p>资源总量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ResourceInfo m_resourceTotal;
                    bool m_resourceTotalHasBeenSet;

                    /**
                     * <p>历史实例数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_oldReplicas;
                    bool m_oldReplicasHasBeenSet;

                    /**
                     * <p>计费模式[HYBRID_PAID]时生效, 用于标识混合计费模式下的预付费实例数, 若不填则默认为1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_hybridBillingPrepaidReplicas;
                    bool m_hybridBillingPrepaidReplicasHasBeenSet;

                    /**
                     * <p>历史 HYBRID_PAID 时的实例数，用户恢复服务</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_oldHybridBillingPrepaidReplicas;
                    bool m_oldHybridBillingPrepaidReplicasHasBeenSet;

                    /**
                     * <p>是否开启模型的热更新。默认不开启</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_modelHotUpdateEnable;
                    bool m_modelHotUpdateEnableHasBeenSet;

                    /**
                     * <p>服务的规格别名</p>
                     */
                    std::string m_instanceAlias;
                    bool m_instanceAliasHasBeenSet;

                    /**
                     * <p>实例数量调节方式,默认为手动<br>支持：自动 - &quot;AUTO&quot;, 手动 - &quot;MANUAL&quot;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scaleMode;
                    bool m_scaleModeHasBeenSet;

                    /**
                     * <p>定时伸缩任务</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CronScaleJob> m_cronScaleJobs;
                    bool m_cronScaleJobsHasBeenSet;

                    /**
                     * <p>定时伸缩策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scaleStrategy;
                    bool m_scaleStrategyHasBeenSet;

                    /**
                     * <p>定时停止的配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ScheduledAction m_scheduledAction;
                    bool m_scheduledActionHasBeenSet;

                    /**
                     * <p>实例列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_podList;
                    bool m_podListHasBeenSet;

                    /**
                     * <p>Pod列表信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Pod m_pods;
                    bool m_podsHasBeenSet;

                    /**
                     * <p>Pod列表信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Pod> m_podInfos;
                    bool m_podInfosHasBeenSet;

                    /**
                     * <p>服务限速限流相关配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ServiceLimit m_serviceLimit;
                    bool m_serviceLimitHasBeenSet;

                    /**
                     * <p>是否开启模型的加速, 仅对StableDiffusion(动态加速)格式的模型有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_modelTurboEnable;
                    bool m_modelTurboEnableHasBeenSet;

                    /**
                     * <p>挂载</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VolumeMount m_volumeMount;
                    bool m_volumeMountHasBeenSet;

                    /**
                     * <p>推理代码信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InferCodeInfo m_inferCodeInfo;
                    bool m_inferCodeInfoHasBeenSet;

                    /**
                     * <p>服务的启动命令</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * <p>开启TIONE内网访问外部设置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ServiceEIP m_serviceEIP;
                    bool m_serviceEIPHasBeenSet;

                    /**
                     * <p>服务端口，默认为8501</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_servicePort;
                    bool m_servicePortHasBeenSet;

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
                     * <p>是否启用grpc端口</p>
                     */
                    bool m_grpcEnable;
                    bool m_grpcEnableHasBeenSet;

                    /**
                     * <p>健康探针</p>
                     */
                    HealthProbe m_healthProbe;
                    bool m_healthProbeHasBeenSet;

                    /**
                     * <p>滚动更新配置</p>
                     */
                    RollingUpdate m_rollingUpdate;
                    bool m_rollingUpdateHasBeenSet;

                    /**
                     * <p>单副本下的实例数，仅在部署类型为DIST、ROLE时生效，默认1</p>
                     */
                    int64_t m_instancePerReplicas;
                    bool m_instancePerReplicasHasBeenSet;

                    /**
                     * <p>批量数据盘挂载配置</p>
                     */
                    std::vector<VolumeMount> m_volumeMounts;
                    bool m_volumeMountsHasBeenSet;

                    /**
                     * <p>调度策略 [binpack] 优先占满整机，尽量避免碎卡（默认值）[spread] 优先分散在各个节点，确保服务高可用</p>
                     */
                    std::string m_schedulingStrategy;
                    bool m_schedulingStrategyHasBeenSet;

                    /**
                     * <p>服务实际运行的节点数</p>
                     */
                    int64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICEINFO_H_
