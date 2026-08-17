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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATEINFERENCESERVICEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATEINFERENCESERVICEREQUEST_H_

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
                * CreateInferenceService请求参数结构体
                */
                class CreateInferenceServiceRequest : public AbstractModel
                {
                public:
                    CreateInferenceServiceRequest();
                    ~CreateInferenceServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>推理服务名称</p>
                     * @return Name <p>推理服务名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>推理服务名称</p>
                     * @param _name <p>推理服务名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>模型 UID（业务级唯一标识）</p>
                     * @return ModelUid <p>模型 UID（业务级唯一标识）</p>
                     * 
                     */
                    std::string GetModelUid() const;

                    /**
                     * 设置<p>模型 UID（业务级唯一标识）</p>
                     * @param _modelUid <p>模型 UID（业务级唯一标识）</p>
                     * 
                     */
                    void SetModelUid(const std::string& _modelUid);

                    /**
                     * 判断参数 ModelUid 是否已赋值
                     * @return ModelUid 是否已赋值
                     * 
                     */
                    bool ModelUidHasBeenSet() const;

                    /**
                     * 获取<p>推理引擎（vllm / xgboost）</p>
                     * @return Engine <p>推理引擎（vllm / xgboost）</p>
                     * 
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置<p>推理引擎（vllm / xgboost）</p>
                     * @param _engine <p>推理引擎（vllm / xgboost）</p>
                     * 
                     */
                    void SetEngine(const std::string& _engine);

                    /**
                     * 判断参数 Engine 是否已赋值
                     * @return Engine 是否已赋值
                     * 
                     */
                    bool EngineHasBeenSet() const;

                    /**
                     * 获取<p>副本数</p>
                     * @return Replicas <p>副本数</p>
                     * 
                     */
                    int64_t GetReplicas() const;

                    /**
                     * 设置<p>副本数</p>
                     * @param _replicas <p>副本数</p>
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
                     * 获取<p>资源分区 ID（目标 K8s 集群分区）</p>
                     * @return ResourcePartitionId <p>资源分区 ID（目标 K8s 集群分区）</p>
                     * 
                     */
                    std::string GetResourcePartitionId() const;

                    /**
                     * 设置<p>资源分区 ID（目标 K8s 集群分区）</p>
                     * @param _resourcePartitionId <p>资源分区 ID（目标 K8s 集群分区）</p>
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
                     * 获取<p>Ray Serve 部署镜像</p>
                     * @return Image <p>Ray Serve 部署镜像</p>
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置<p>Ray Serve 部署镜像</p>
                     * @param _image <p>Ray Serve 部署镜像</p>
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
                     * 获取<p>模型标识符（OpenAI 兼容 API 中的 model 字段）</p>
                     * @return ModelIdentifier <p>模型标识符（OpenAI 兼容 API 中的 model 字段）</p>
                     * 
                     */
                    std::string GetModelIdentifier() const;

                    /**
                     * 设置<p>模型标识符（OpenAI 兼容 API 中的 model 字段）</p>
                     * @param _modelIdentifier <p>模型标识符（OpenAI 兼容 API 中的 model 字段）</p>
                     * 
                     */
                    void SetModelIdentifier(const std::string& _modelIdentifier);

                    /**
                     * 判断参数 ModelIdentifier 是否已赋值
                     * @return ModelIdentifier 是否已赋值
                     * 
                     */
                    bool ModelIdentifierHasBeenSet() const;

                    /**
                     * 获取<p>队列名（K8s namespace）</p>
                     * @return Queue <p>队列名（K8s namespace）</p>
                     * 
                     */
                    std::string GetQueue() const;

                    /**
                     * 设置<p>队列名（K8s namespace）</p>
                     * @param _queue <p>队列名（K8s namespace）</p>
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
                     * 获取<p>部署名称（可选，未提供时自动生成）</p>
                     * @return DeploymentName <p>部署名称（可选，未提供时自动生成）</p>
                     * 
                     */
                    std::string GetDeploymentName() const;

                    /**
                     * 设置<p>部署名称（可选，未提供时自动生成）</p>
                     * @param _deploymentName <p>部署名称（可选，未提供时自动生成）</p>
                     * 
                     */
                    void SetDeploymentName(const std::string& _deploymentName);

                    /**
                     * 判断参数 DeploymentName 是否已赋值
                     * @return DeploymentName 是否已赋值
                     * 
                     */
                    bool DeploymentNameHasBeenSet() const;

                    /**
                     * 获取<p>模型版本（如 v1, v2），未提供时使用最新版本</p>
                     * @return ModelVersion <p>模型版本（如 v1, v2），未提供时使用最新版本</p>
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置<p>模型版本（如 v1, v2），未提供时使用最新版本</p>
                     * @param _modelVersion <p>模型版本（如 v1, v2），未提供时使用最新版本</p>
                     * 
                     */
                    void SetModelVersion(const std::string& _modelVersion);

                    /**
                     * 判断参数 ModelVersion 是否已赋值
                     * @return ModelVersion 是否已赋值
                     * 
                     */
                    bool ModelVersionHasBeenSet() const;

                    /**
                     * 获取<p>ray head 是否开始高可用（是否申请 redis 实例用于 head 连接）</p>
                     * @return HeadHighAvailabilityEnabled <p>ray head 是否开始高可用（是否申请 redis 实例用于 head 连接）</p>
                     * 
                     */
                    bool GetHeadHighAvailabilityEnabled() const;

                    /**
                     * 设置<p>ray head 是否开始高可用（是否申请 redis 实例用于 head 连接）</p>
                     * @param _headHighAvailabilityEnabled <p>ray head 是否开始高可用（是否申请 redis 实例用于 head 连接）</p>
                     * 
                     */
                    void SetHeadHighAvailabilityEnabled(const bool& _headHighAvailabilityEnabled);

                    /**
                     * 判断参数 HeadHighAvailabilityEnabled 是否已赋值
                     * @return HeadHighAvailabilityEnabled 是否已赋值
                     * 
                     */
                    bool HeadHighAvailabilityEnabledHasBeenSet() const;

                    /**
                     * 获取<p>高级参数（JSON 字符串，可选）</p>
                     * @return AdvancedParams <p>高级参数（JSON 字符串，可选）</p>
                     * 
                     */
                    std::string GetAdvancedParams() const;

                    /**
                     * 设置<p>高级参数（JSON 字符串，可选）</p>
                     * @param _advancedParams <p>高级参数（JSON 字符串，可选）</p>
                     * 
                     */
                    void SetAdvancedParams(const std::string& _advancedParams);

                    /**
                     * 判断参数 AdvancedParams 是否已赋值
                     * @return AdvancedParams 是否已赋值
                     * 
                     */
                    bool AdvancedParamsHasBeenSet() const;

                    /**
                     * 获取<p>镜像拉取策略（默认 IfNotPresent）</p>
                     * @return ImagePullPolicy <p>镜像拉取策略（默认 IfNotPresent）</p>
                     * 
                     */
                    std::string GetImagePullPolicy() const;

                    /**
                     * 设置<p>镜像拉取策略（默认 IfNotPresent）</p>
                     * @param _imagePullPolicy <p>镜像拉取策略（默认 IfNotPresent）</p>
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
                     * 获取<p>是否启用弹性伸缩</p>
                     * @return AutoscalingEnabled <p>是否启用弹性伸缩</p>
                     * 
                     */
                    bool GetAutoscalingEnabled() const;

                    /**
                     * 设置<p>是否启用弹性伸缩</p>
                     * @param _autoscalingEnabled <p>是否启用弹性伸缩</p>
                     * 
                     */
                    void SetAutoscalingEnabled(const bool& _autoscalingEnabled);

                    /**
                     * 判断参数 AutoscalingEnabled 是否已赋值
                     * @return AutoscalingEnabled 是否已赋值
                     * 
                     */
                    bool AutoscalingEnabledHasBeenSet() const;

                    /**
                     * 获取<p>最小副本数（启用弹性伸缩时生效，0 表示缩容到 0）</p>
                     * @return MinReplicas <p>最小副本数（启用弹性伸缩时生效，0 表示缩容到 0）</p>
                     * 
                     */
                    int64_t GetMinReplicas() const;

                    /**
                     * 设置<p>最小副本数（启用弹性伸缩时生效，0 表示缩容到 0）</p>
                     * @param _minReplicas <p>最小副本数（启用弹性伸缩时生效，0 表示缩容到 0）</p>
                     * 
                     */
                    void SetMinReplicas(const int64_t& _minReplicas);

                    /**
                     * 判断参数 MinReplicas 是否已赋值
                     * @return MinReplicas 是否已赋值
                     * 
                     */
                    bool MinReplicasHasBeenSet() const;

                    /**
                     * 获取<p>最大副本数（启用弹性伸缩时生效）</p>
                     * @return MaxReplicas <p>最大副本数（启用弹性伸缩时生效）</p>
                     * 
                     */
                    int64_t GetMaxReplicas() const;

                    /**
                     * 设置<p>最大副本数（启用弹性伸缩时生效）</p>
                     * @param _maxReplicas <p>最大副本数（启用弹性伸缩时生效）</p>
                     * 
                     */
                    void SetMaxReplicas(const int64_t& _maxReplicas);

                    /**
                     * 判断参数 MaxReplicas 是否已赋值
                     * @return MaxReplicas 是否已赋值
                     * 
                     */
                    bool MaxReplicasHasBeenSet() const;

                    /**
                     * 获取<p>Autoscaler 配置（JSON 字符串）</p>
                     * @return AutoscalerOptions <p>Autoscaler 配置（JSON 字符串）</p>
                     * 
                     */
                    std::string GetAutoscalerOptions() const;

                    /**
                     * 设置<p>Autoscaler 配置（JSON 字符串）</p>
                     * @param _autoscalerOptions <p>Autoscaler 配置（JSON 字符串）</p>
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
                     * 获取<p>ApiKeyIds</p>
                     * @return ApiKeyIds <p>ApiKeyIds</p>
                     * 
                     */
                    std::vector<std::string> GetApiKeyIds() const;

                    /**
                     * 设置<p>ApiKeyIds</p>
                     * @param _apiKeyIds <p>ApiKeyIds</p>
                     * 
                     */
                    void SetApiKeyIds(const std::vector<std::string>& _apiKeyIds);

                    /**
                     * 判断参数 ApiKeyIds 是否已赋值
                     * @return ApiKeyIds 是否已赋值
                     * 
                     */
                    bool ApiKeyIdsHasBeenSet() const;

                    /**
                     * 获取<p>AdvancedOptions 高级参数 JSON 字符串（可选），扁平 KV 结构，作用于 K8s RayService CR YAML 字段级</p>
                     * @return AdvancedOptions <p>AdvancedOptions 高级参数 JSON 字符串（可选），扁平 KV 结构，作用于 K8s RayService CR YAML 字段级</p>
                     * 
                     */
                    std::string GetAdvancedOptions() const;

                    /**
                     * 设置<p>AdvancedOptions 高级参数 JSON 字符串（可选），扁平 KV 结构，作用于 K8s RayService CR YAML 字段级</p>
                     * @param _advancedOptions <p>AdvancedOptions 高级参数 JSON 字符串（可选），扁平 KV 结构，作用于 K8s RayService CR YAML 字段级</p>
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
                     * 获取<p>系统标签列表（TagKey-TagValue）</p>
                     * @return ResourceTags <p>系统标签列表（TagKey-TagValue）</p>
                     * 
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 设置<p>系统标签列表（TagKey-TagValue）</p>
                     * @param _resourceTags <p>系统标签列表（TagKey-TagValue）</p>
                     * 
                     */
                    void SetResourceTags(const std::vector<Tag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取<p>自定义RayServe提交</p>
                     * @return IsCustom <p>自定义RayServe提交</p>
                     * 
                     */
                    bool GetIsCustom() const;

                    /**
                     * 设置<p>自定义RayServe提交</p>
                     * @param _isCustom <p>自定义RayServe提交</p>
                     * 
                     */
                    void SetIsCustom(const bool& _isCustom);

                    /**
                     * 判断参数 IsCustom 是否已赋值
                     * @return IsCustom 是否已赋值
                     * 
                     */
                    bool IsCustomHasBeenSet() const;

                    /**
                     * 获取<p>python runtime env</p>
                     * @return RuntimeEnv <p>python runtime env</p>
                     * 
                     */
                    std::string GetRuntimeEnv() const;

                    /**
                     * 设置<p>python runtime env</p>
                     * @param _runtimeEnv <p>python runtime env</p>
                     * 
                     */
                    void SetRuntimeEnv(const std::string& _runtimeEnv);

                    /**
                     * 判断参数 RuntimeEnv 是否已赋值
                     * @return RuntimeEnv 是否已赋值
                     * 
                     */
                    bool RuntimeEnvHasBeenSet() const;

                private:

                    /**
                     * <p>推理服务名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>模型 UID（业务级唯一标识）</p>
                     */
                    std::string m_modelUid;
                    bool m_modelUidHasBeenSet;

                    /**
                     * <p>推理引擎（vllm / xgboost）</p>
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * <p>副本数</p>
                     */
                    int64_t m_replicas;
                    bool m_replicasHasBeenSet;

                    /**
                     * <p>资源分区 ID（目标 K8s 集群分区）</p>
                     */
                    std::string m_resourcePartitionId;
                    bool m_resourcePartitionIdHasBeenSet;

                    /**
                     * <p>Ray Serve 部署镜像</p>
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * <p>模型标识符（OpenAI 兼容 API 中的 model 字段）</p>
                     */
                    std::string m_modelIdentifier;
                    bool m_modelIdentifierHasBeenSet;

                    /**
                     * <p>队列名（K8s namespace）</p>
                     */
                    std::string m_queue;
                    bool m_queueHasBeenSet;

                    /**
                     * <p>部署名称（可选，未提供时自动生成）</p>
                     */
                    std::string m_deploymentName;
                    bool m_deploymentNameHasBeenSet;

                    /**
                     * <p>模型版本（如 v1, v2），未提供时使用最新版本</p>
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * <p>ray head 是否开始高可用（是否申请 redis 实例用于 head 连接）</p>
                     */
                    bool m_headHighAvailabilityEnabled;
                    bool m_headHighAvailabilityEnabledHasBeenSet;

                    /**
                     * <p>高级参数（JSON 字符串，可选）</p>
                     */
                    std::string m_advancedParams;
                    bool m_advancedParamsHasBeenSet;

                    /**
                     * <p>镜像拉取策略（默认 IfNotPresent）</p>
                     */
                    std::string m_imagePullPolicy;
                    bool m_imagePullPolicyHasBeenSet;

                    /**
                     * <p>是否启用弹性伸缩</p>
                     */
                    bool m_autoscalingEnabled;
                    bool m_autoscalingEnabledHasBeenSet;

                    /**
                     * <p>最小副本数（启用弹性伸缩时生效，0 表示缩容到 0）</p>
                     */
                    int64_t m_minReplicas;
                    bool m_minReplicasHasBeenSet;

                    /**
                     * <p>最大副本数（启用弹性伸缩时生效）</p>
                     */
                    int64_t m_maxReplicas;
                    bool m_maxReplicasHasBeenSet;

                    /**
                     * <p>Autoscaler 配置（JSON 字符串）</p>
                     */
                    std::string m_autoscalerOptions;
                    bool m_autoscalerOptionsHasBeenSet;

                    /**
                     * <p>ApiKeyIds</p>
                     */
                    std::vector<std::string> m_apiKeyIds;
                    bool m_apiKeyIdsHasBeenSet;

                    /**
                     * <p>AdvancedOptions 高级参数 JSON 字符串（可选），扁平 KV 结构，作用于 K8s RayService CR YAML 字段级</p>
                     */
                    std::string m_advancedOptions;
                    bool m_advancedOptionsHasBeenSet;

                    /**
                     * <p>系统标签列表（TagKey-TagValue）</p>
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>自定义RayServe提交</p>
                     */
                    bool m_isCustom;
                    bool m_isCustomHasBeenSet;

                    /**
                     * <p>python runtime env</p>
                     */
                    std::string m_runtimeEnv;
                    bool m_runtimeEnvHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATEINFERENCESERVICEREQUEST_H_
