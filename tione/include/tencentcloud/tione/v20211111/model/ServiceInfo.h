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
                     * 获取期望运行的Pod数量，停止状态是0
不同计费模式和调节模式下对应关系如下
PREPAID 和 POSTPAID_BY_HOUR:
手动调节模式下对应 实例数量
自动调节模式下对应 基于时间的默认策略的实例数量
HYBRID_PAID:
后付费实例手动调节模式下对应 实例数量
后付费实例自动调节模式下对应 时间策略的默认策略的实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Replicas 期望运行的Pod数量，停止状态是0
不同计费模式和调节模式下对应关系如下
PREPAID 和 POSTPAID_BY_HOUR:
手动调节模式下对应 实例数量
自动调节模式下对应 基于时间的默认策略的实例数量
HYBRID_PAID:
后付费实例手动调节模式下对应 实例数量
后付费实例自动调节模式下对应 时间策略的默认策略的实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetReplicas() const;

                    /**
                     * 设置期望运行的Pod数量，停止状态是0
不同计费模式和调节模式下对应关系如下
PREPAID 和 POSTPAID_BY_HOUR:
手动调节模式下对应 实例数量
自动调节模式下对应 基于时间的默认策略的实例数量
HYBRID_PAID:
后付费实例手动调节模式下对应 实例数量
后付费实例自动调节模式下对应 时间策略的默认策略的实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _replicas 期望运行的Pod数量，停止状态是0
不同计费模式和调节模式下对应关系如下
PREPAID 和 POSTPAID_BY_HOUR:
手动调节模式下对应 实例数量
自动调节模式下对应 基于时间的默认策略的实例数量
HYBRID_PAID:
后付费实例手动调节模式下对应 实例数量
后付费实例自动调节模式下对应 时间策略的默认策略的实例数量
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
                     * 获取镜像信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageInfo 镜像信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageInfo GetImageInfo() const;

                    /**
                     * 设置镜像信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageInfo 镜像信息
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
                     * 获取环境变量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Env 环境变量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EnvVar> GetEnv() const;

                    /**
                     * 设置环境变量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _env 环境变量
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
                     * 获取资源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Resources 资源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ResourceInfo GetResources() const;

                    /**
                     * 设置资源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resources 资源信息
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
                     * 获取后付费实例对应的机型规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceType 后付费实例对应的机型规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置后付费实例对应的机型规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceType 后付费实例对应的机型规格
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取模型信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelInfo 模型信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ModelInfo GetModelInfo() const;

                    /**
                     * 设置模型信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelInfo 模型信息
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否启用日志
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogEnable 是否启用日志
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetLogEnable() const;

                    /**
                     * 设置是否启用日志
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logEnable 是否启用日志
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取日志配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogConfig 日志配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LogConfig GetLogConfig() const;

                    /**
                     * 设置日志配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logConfig 日志配置
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否开启鉴权
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthorizationEnable 是否开启鉴权
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAuthorizationEnable() const;

                    /**
                     * 设置是否开启鉴权
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authorizationEnable 是否开启鉴权
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取hpa配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HorizontalPodAutoscaler hpa配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HorizontalPodAutoscaler GetHorizontalPodAutoscaler() const;

                    /**
                     * 设置hpa配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _horizontalPodAutoscaler hpa配置
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取服务的状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 服务的状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WorkloadStatus GetStatus() const;

                    /**
                     * 设置服务的状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 服务的状态描述
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
                     * 获取权重
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Weight 权重
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置权重
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weight 权重
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
                     * 获取资源总量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceTotal 资源总量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ResourceInfo GetResourceTotal() const;

                    /**
                     * 设置资源总量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceTotal 资源总量
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
                     * 获取历史实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OldReplicas 历史实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOldReplicas() const;

                    /**
                     * 设置历史实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _oldReplicas 历史实例数
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
                     * 获取计费模式[HYBRID_PAID]时生效, 用于标识混合计费模式下的预付费实例数, 若不填则默认为1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HybridBillingPrepaidReplicas 计费模式[HYBRID_PAID]时生效, 用于标识混合计费模式下的预付费实例数, 若不填则默认为1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHybridBillingPrepaidReplicas() const;

                    /**
                     * 设置计费模式[HYBRID_PAID]时生效, 用于标识混合计费模式下的预付费实例数, 若不填则默认为1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hybridBillingPrepaidReplicas 计费模式[HYBRID_PAID]时生效, 用于标识混合计费模式下的预付费实例数, 若不填则默认为1
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
                     * 获取历史 HYBRID_PAID 时的实例数，用户恢复服务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OldHybridBillingPrepaidReplicas 历史 HYBRID_PAID 时的实例数，用户恢复服务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOldHybridBillingPrepaidReplicas() const;

                    /**
                     * 设置历史 HYBRID_PAID 时的实例数，用户恢复服务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _oldHybridBillingPrepaidReplicas 历史 HYBRID_PAID 时的实例数，用户恢复服务
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
                     * 获取是否开启模型的热更新。默认不开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelHotUpdateEnable 是否开启模型的热更新。默认不开启
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetModelHotUpdateEnable() const;

                    /**
                     * 设置是否开启模型的热更新。默认不开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelHotUpdateEnable 是否开启模型的热更新。默认不开启
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
                     * 获取服务的规格别名
                     * @return InstanceAlias 服务的规格别名
                     * 
                     */
                    std::string GetInstanceAlias() const;

                    /**
                     * 设置服务的规格别名
                     * @param _instanceAlias 服务的规格别名
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
                     * 获取实例数量调节方式,默认为手动
支持：自动 - "AUTO", 手动 - "MANUAL"
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScaleMode 实例数量调节方式,默认为手动
支持：自动 - "AUTO", 手动 - "MANUAL"
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScaleMode() const;

                    /**
                     * 设置实例数量调节方式,默认为手动
支持：自动 - "AUTO", 手动 - "MANUAL"
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scaleMode 实例数量调节方式,默认为手动
支持：自动 - "AUTO", 手动 - "MANUAL"
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
                     * 获取定时伸缩任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CronScaleJobs 定时伸缩任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CronScaleJob> GetCronScaleJobs() const;

                    /**
                     * 设置定时伸缩任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cronScaleJobs 定时伸缩任务
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
                     * 获取定时伸缩策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScaleStrategy 定时伸缩策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScaleStrategy() const;

                    /**
                     * 设置定时伸缩策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scaleStrategy 定时伸缩策略
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
                     * 获取定时停止的配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduledAction 定时停止的配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ScheduledAction GetScheduledAction() const;

                    /**
                     * 设置定时停止的配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduledAction 定时停止的配置
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
                     * 获取实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PodList 实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::vector<std::string> GetPodList() const;

                    /**
                     * 设置实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _podList 实例列表
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
                     * 获取Pod列表信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Pods Pod列表信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    Pod GetPods() const;

                    /**
                     * 设置Pod列表信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pods Pod列表信息
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
                     * 获取Pod列表信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PodInfos Pod列表信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Pod> GetPodInfos() const;

                    /**
                     * 设置Pod列表信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _podInfos Pod列表信息
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
                     * 获取服务限速限流相关配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceLimit 服务限速限流相关配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ServiceLimit GetServiceLimit() const;

                    /**
                     * 设置服务限速限流相关配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceLimit 服务限速限流相关配置
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
                     * 获取是否开启模型的加速, 仅对StableDiffusion(动态加速)格式的模型有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelTurboEnable 是否开启模型的加速, 仅对StableDiffusion(动态加速)格式的模型有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetModelTurboEnable() const;

                    /**
                     * 设置是否开启模型的加速, 仅对StableDiffusion(动态加速)格式的模型有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelTurboEnable 是否开启模型的加速, 仅对StableDiffusion(动态加速)格式的模型有效。
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
                     * 获取挂载
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VolumeMount 挂载
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VolumeMount GetVolumeMount() const;

                    /**
                     * 设置挂载
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _volumeMount 挂载
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
                     * 获取推理代码信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InferCodeInfo 推理代码信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InferCodeInfo GetInferCodeInfo() const;

                    /**
                     * 设置推理代码信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inferCodeInfo 推理代码信息
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
                     * 获取服务的启动命令
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Command 服务的启动命令
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置服务的启动命令
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _command 服务的启动命令
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
                     * 获取开启TIONE内网访问外部设置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceEIP 开启TIONE内网访问外部设置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ServiceEIP GetServiceEIP() const;

                    /**
                     * 设置开启TIONE内网访问外部设置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceEIP 开启TIONE内网访问外部设置
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
                     * 获取服务端口，默认为8501
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServicePort 服务端口，默认为8501
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetServicePort() const;

                    /**
                     * 设置服务端口，默认为8501
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _servicePort 服务端口，默认为8501
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
                     * 获取服务的优雅退出时限。单位为秒，默认值为30，最小为1
                     * @return TerminationGracePeriodSeconds 服务的优雅退出时限。单位为秒，默认值为30，最小为1
                     * 
                     */
                    int64_t GetTerminationGracePeriodSeconds() const;

                    /**
                     * 设置服务的优雅退出时限。单位为秒，默认值为30，最小为1
                     * @param _terminationGracePeriodSeconds 服务的优雅退出时限。单位为秒，默认值为30，最小为1
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
                     * 获取服务实例停止前执行的命令，执行完毕或执行时间超过优雅退出时限后实例结束
                     * @return PreStopCommand 服务实例停止前执行的命令，执行完毕或执行时间超过优雅退出时限后实例结束
                     * 
                     */
                    std::vector<std::string> GetPreStopCommand() const;

                    /**
                     * 设置服务实例停止前执行的命令，执行完毕或执行时间超过优雅退出时限后实例结束
                     * @param _preStopCommand 服务实例停止前执行的命令，执行完毕或执行时间超过优雅退出时限后实例结束
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
                     * 获取是否启用grpc端口
                     * @return GrpcEnable 是否启用grpc端口
                     * 
                     */
                    bool GetGrpcEnable() const;

                    /**
                     * 设置是否启用grpc端口
                     * @param _grpcEnable 是否启用grpc端口
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
                     * 获取滚动更新配置
                     * @return RollingUpdate 滚动更新配置
                     * 
                     */
                    RollingUpdate GetRollingUpdate() const;

                    /**
                     * 设置滚动更新配置
                     * @param _rollingUpdate 滚动更新配置
                     * 
                     */
                    void SetRollingUpdate(const RollingUpdate& _rollingUpdate);

                    /**
                     * 判断参数 RollingUpdate 是否已赋值
                     * @return RollingUpdate 是否已赋值
                     * 
                     */
                    bool RollingUpdateHasBeenSet() const;

                private:

                    /**
                     * 期望运行的Pod数量，停止状态是0
不同计费模式和调节模式下对应关系如下
PREPAID 和 POSTPAID_BY_HOUR:
手动调节模式下对应 实例数量
自动调节模式下对应 基于时间的默认策略的实例数量
HYBRID_PAID:
后付费实例手动调节模式下对应 实例数量
后付费实例自动调节模式下对应 时间策略的默认策略的实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_replicas;
                    bool m_replicasHasBeenSet;

                    /**
                     * 镜像信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageInfo m_imageInfo;
                    bool m_imageInfoHasBeenSet;

                    /**
                     * 环境变量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EnvVar> m_env;
                    bool m_envHasBeenSet;

                    /**
                     * 资源信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ResourceInfo m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * 后付费实例对应的机型规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 模型信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ModelInfo m_modelInfo;
                    bool m_modelInfoHasBeenSet;

                    /**
                     * 是否启用日志
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_logEnable;
                    bool m_logEnableHasBeenSet;

                    /**
                     * 日志配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LogConfig m_logConfig;
                    bool m_logConfigHasBeenSet;

                    /**
                     * 是否开启鉴权
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_authorizationEnable;
                    bool m_authorizationEnableHasBeenSet;

                    /**
                     * hpa配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HorizontalPodAutoscaler m_horizontalPodAutoscaler;
                    bool m_horizontalPodAutoscalerHasBeenSet;

                    /**
                     * 服务的状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WorkloadStatus m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 权重
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 资源总量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ResourceInfo m_resourceTotal;
                    bool m_resourceTotalHasBeenSet;

                    /**
                     * 历史实例数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_oldReplicas;
                    bool m_oldReplicasHasBeenSet;

                    /**
                     * 计费模式[HYBRID_PAID]时生效, 用于标识混合计费模式下的预付费实例数, 若不填则默认为1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_hybridBillingPrepaidReplicas;
                    bool m_hybridBillingPrepaidReplicasHasBeenSet;

                    /**
                     * 历史 HYBRID_PAID 时的实例数，用户恢复服务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_oldHybridBillingPrepaidReplicas;
                    bool m_oldHybridBillingPrepaidReplicasHasBeenSet;

                    /**
                     * 是否开启模型的热更新。默认不开启
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_modelHotUpdateEnable;
                    bool m_modelHotUpdateEnableHasBeenSet;

                    /**
                     * 服务的规格别名
                     */
                    std::string m_instanceAlias;
                    bool m_instanceAliasHasBeenSet;

                    /**
                     * 实例数量调节方式,默认为手动
支持：自动 - "AUTO", 手动 - "MANUAL"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scaleMode;
                    bool m_scaleModeHasBeenSet;

                    /**
                     * 定时伸缩任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CronScaleJob> m_cronScaleJobs;
                    bool m_cronScaleJobsHasBeenSet;

                    /**
                     * 定时伸缩策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scaleStrategy;
                    bool m_scaleStrategyHasBeenSet;

                    /**
                     * 定时停止的配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ScheduledAction m_scheduledAction;
                    bool m_scheduledActionHasBeenSet;

                    /**
                     * 实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_podList;
                    bool m_podListHasBeenSet;

                    /**
                     * Pod列表信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Pod m_pods;
                    bool m_podsHasBeenSet;

                    /**
                     * Pod列表信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Pod> m_podInfos;
                    bool m_podInfosHasBeenSet;

                    /**
                     * 服务限速限流相关配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ServiceLimit m_serviceLimit;
                    bool m_serviceLimitHasBeenSet;

                    /**
                     * 是否开启模型的加速, 仅对StableDiffusion(动态加速)格式的模型有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_modelTurboEnable;
                    bool m_modelTurboEnableHasBeenSet;

                    /**
                     * 挂载
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VolumeMount m_volumeMount;
                    bool m_volumeMountHasBeenSet;

                    /**
                     * 推理代码信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InferCodeInfo m_inferCodeInfo;
                    bool m_inferCodeInfoHasBeenSet;

                    /**
                     * 服务的启动命令
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * 开启TIONE内网访问外部设置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ServiceEIP m_serviceEIP;
                    bool m_serviceEIPHasBeenSet;

                    /**
                     * 服务端口，默认为8501
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_servicePort;
                    bool m_servicePortHasBeenSet;

                    /**
                     * 服务的优雅退出时限。单位为秒，默认值为30，最小为1
                     */
                    int64_t m_terminationGracePeriodSeconds;
                    bool m_terminationGracePeriodSecondsHasBeenSet;

                    /**
                     * 服务实例停止前执行的命令，执行完毕或执行时间超过优雅退出时限后实例结束
                     */
                    std::vector<std::string> m_preStopCommand;
                    bool m_preStopCommandHasBeenSet;

                    /**
                     * 是否启用grpc端口
                     */
                    bool m_grpcEnable;
                    bool m_grpcEnableHasBeenSet;

                    /**
                     * 健康探针
                     */
                    HealthProbe m_healthProbe;
                    bool m_healthProbeHasBeenSet;

                    /**
                     * 滚动更新配置
                     */
                    RollingUpdate m_rollingUpdate;
                    bool m_rollingUpdateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICEINFO_H_
