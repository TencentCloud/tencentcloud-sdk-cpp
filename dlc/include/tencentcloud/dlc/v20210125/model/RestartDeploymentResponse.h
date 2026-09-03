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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_RESTARTDEPLOYMENTRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_RESTARTDEPLOYMENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * RestartDeployment返回参数结构体
                */
                class RestartDeploymentResponse : public AbstractModel
                {
                public:
                    RestartDeploymentResponse();
                    ~RestartDeploymentResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>DeploymentId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeploymentId <p>DeploymentId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeploymentId() const;

                    /**
                     * 判断参数 DeploymentId 是否已赋值
                     * @return DeploymentId 是否已赋值
                     * 
                     */
                    bool DeploymentIdHasBeenSet() const;

                    /**
                     * 获取<p>部署名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>部署名称</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>关联的服务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceId <p>关联的服务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取<p>部署使用的模型版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelVersion <p>部署使用的模型版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 判断参数 ModelVersion 是否已赋值
                     * @return ModelVersion 是否已赋值
                     * 
                     */
                    bool ModelVersionHasBeenSet() const;

                    /**
                     * 获取<p>部署状态（Running/Stopped/Deploying/Failed）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>部署状态（Running/Stopped/Deploying/Failed）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>推理引擎（vLLM/SGLang 等）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Engine <p>推理引擎（vLLM/SGLang 等）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngine() const;

                    /**
                     * 判断参数 Engine 是否已赋值
                     * @return Engine 是否已赋值
                     * 
                     */
                    bool EngineHasBeenSet() const;

                    /**
                     * 获取<p>期望副本数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Replicas <p>期望副本数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetReplicas() const;

                    /**
                     * 判断参数 Replicas 是否已赋值
                     * @return Replicas 是否已赋值
                     * 
                     */
                    bool ReplicasHasBeenSet() const;

                    /**
                     * 获取<p>可用副本数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AvailableReplicas <p>可用副本数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAvailableReplicas() const;

                    /**
                     * 判断参数 AvailableReplicas 是否已赋值
                     * @return AvailableReplicas 是否已赋值
                     * 
                     */
                    bool AvailableReplicasHasBeenSet() const;

                    /**
                     * 获取<p>资源配置（JSON 字符串）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceConfig <p>资源配置（JSON 字符串）</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>高级参数（JSON 字符串）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdvancedParams <p>高级参数（JSON 字符串）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAdvancedParams() const;

                    /**
                     * 判断参数 AdvancedParams 是否已赋值
                     * @return AdvancedParams 是否已赋值
                     * 
                     */
                    bool AdvancedParamsHasBeenSet() const;

                    /**
                     * 获取<p>是否开启自动伸缩</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoscalingEnabled <p>是否开启自动伸缩</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAutoscalingEnabled() const;

                    /**
                     * 判断参数 AutoscalingEnabled 是否已赋值
                     * @return AutoscalingEnabled 是否已赋值
                     * 
                     */
                    bool AutoscalingEnabledHasBeenSet() const;

                    /**
                     * 获取<p>最小副本数（自动伸缩时使用）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinReplicas <p>最小副本数（自动伸缩时使用）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMinReplicas() const;

                    /**
                     * 判断参数 MinReplicas 是否已赋值
                     * @return MinReplicas 是否已赋值
                     * 
                     */
                    bool MinReplicasHasBeenSet() const;

                    /**
                     * 获取<p>最大副本数（自动伸缩时使用）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxReplicas <p>最大副本数（自动伸缩时使用）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxReplicas() const;

                    /**
                     * 判断参数 MaxReplicas 是否已赋值
                     * @return MaxReplicas 是否已赋值
                     * 
                     */
                    bool MaxReplicasHasBeenSet() const;

                    /**
                     * 获取<p>模型存储配置（Catalog JSON，记录模型 COS 挂载信息）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelStorageConfig <p>模型存储配置（Catalog JSON，记录模型 COS 挂载信息）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelStorageConfig() const;

                    /**
                     * 判断参数 ModelStorageConfig 是否已赋值
                     * @return ModelStorageConfig 是否已赋值
                     * 
                     */
                    bool ModelStorageConfigHasBeenSet() const;

                    /**
                     * 获取<p>AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId <p>AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>Uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uin <p>Uin</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>创建时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创建时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreateTime() const;

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
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Neutrino Serve ID (RayService CR name)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NeutrinoServeId <p>Neutrino Serve ID (RayService CR name)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNeutrinoServeId() const;

                    /**
                     * 判断参数 NeutrinoServeId 是否已赋值
                     * @return NeutrinoServeId 是否已赋值
                     * 
                     */
                    bool NeutrinoServeIdHasBeenSet() const;

                    /**
                     * 获取<p>资源分区 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourcePartitionId <p>资源分区 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>资源队列名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Queue <p>资源队列名称</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>SubAccountUin</p>
                     * @return SubAccountUin <p>SubAccountUin</p>
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     * 
                     */
                    bool SubAccountUinHasBeenSet() const;

                    /**
                     * 获取<p>ray head 是否开启高可用</p>
                     * @return HeadHighAvailabilityEnabled <p>ray head 是否开启高可用</p>
                     * 
                     */
                    bool GetHeadHighAvailabilityEnabled() const;

                    /**
                     * 判断参数 HeadHighAvailabilityEnabled 是否已赋值
                     * @return HeadHighAvailabilityEnabled 是否已赋值
                     * 
                     */
                    bool HeadHighAvailabilityEnabledHasBeenSet() const;

                    /**
                     * 获取<p>镜像名称</p>
                     * @return Image <p>镜像名称</p>
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
                     * 获取<p>资源分区名称</p>
                     * @return ResourcePartitionName <p>资源分区名称</p>
                     * 
                     */
                    std::string GetResourcePartitionName() const;

                    /**
                     * 判断参数 ResourcePartitionName 是否已赋值
                     * @return ResourcePartitionName 是否已赋值
                     * 
                     */
                    bool ResourcePartitionNameHasBeenSet() const;

                private:

                    /**
                     * <p>DeploymentId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deploymentId;
                    bool m_deploymentIdHasBeenSet;

                    /**
                     * <p>部署名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>关联的服务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>部署使用的模型版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * <p>部署状态（Running/Stopped/Deploying/Failed）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>推理引擎（vLLM/SGLang 等）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * <p>期望副本数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_replicas;
                    bool m_replicasHasBeenSet;

                    /**
                     * <p>可用副本数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_availableReplicas;
                    bool m_availableReplicasHasBeenSet;

                    /**
                     * <p>资源配置（JSON 字符串）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceConfig;
                    bool m_resourceConfigHasBeenSet;

                    /**
                     * <p>高级参数（JSON 字符串）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_advancedParams;
                    bool m_advancedParamsHasBeenSet;

                    /**
                     * <p>是否开启自动伸缩</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_autoscalingEnabled;
                    bool m_autoscalingEnabledHasBeenSet;

                    /**
                     * <p>最小副本数（自动伸缩时使用）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_minReplicas;
                    bool m_minReplicasHasBeenSet;

                    /**
                     * <p>最大副本数（自动伸缩时使用）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxReplicas;
                    bool m_maxReplicasHasBeenSet;

                    /**
                     * <p>模型存储配置（Catalog JSON，记录模型 COS 挂载信息）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelStorageConfig;
                    bool m_modelStorageConfigHasBeenSet;

                    /**
                     * <p>AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

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
                     * <p>Neutrino Serve ID (RayService CR name)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_neutrinoServeId;
                    bool m_neutrinoServeIdHasBeenSet;

                    /**
                     * <p>资源分区 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourcePartitionId;
                    bool m_resourcePartitionIdHasBeenSet;

                    /**
                     * <p>资源队列名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_queue;
                    bool m_queueHasBeenSet;

                    /**
                     * <p>SubAccountUin</p>
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                    /**
                     * <p>ray head 是否开启高可用</p>
                     */
                    bool m_headHighAvailabilityEnabled;
                    bool m_headHighAvailabilityEnabledHasBeenSet;

                    /**
                     * <p>镜像名称</p>
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * <p>资源分区名称</p>
                     */
                    std::string m_resourcePartitionName;
                    bool m_resourcePartitionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_RESTARTDEPLOYMENTRESPONSE_H_
