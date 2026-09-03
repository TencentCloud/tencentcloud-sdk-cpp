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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_ADDDEPLOYMENTREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_ADDDEPLOYMENTREQUEST_H_

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
                * AddDeployment请求参数结构体
                */
                class AddDeploymentRequest : public AbstractModel
                {
                public:
                    AddDeploymentRequest();
                    ~AddDeploymentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ServiceId</p>
                     * @return ServiceId <p>ServiceId</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>ServiceId</p>
                     * @param _serviceId <p>ServiceId</p>
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
                     * 获取<p>部署名称</p>
                     * @return DeploymentName <p>部署名称</p>
                     * 
                     */
                    std::string GetDeploymentName() const;

                    /**
                     * 设置<p>部署名称</p>
                     * @param _deploymentName <p>部署名称</p>
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
                     * 获取<p>是否开启 ray head 高可用</p>
                     * @return HeadHighAvailabilityEnabled <p>是否开启 ray head 高可用</p>
                     * 
                     */
                    bool GetHeadHighAvailabilityEnabled() const;

                    /**
                     * 设置<p>是否开启 ray head 高可用</p>
                     * @param _headHighAvailabilityEnabled <p>是否开启 ray head 高可用</p>
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
                     * 获取<p>高级参数</p>
                     * @return AdvancedOptions <p>高级参数</p>
                     * 
                     */
                    std::string GetAdvancedOptions() const;

                    /**
                     * 设置<p>高级参数</p>
                     * @param _advancedOptions <p>高级参数</p>
                     * 
                     */
                    void SetAdvancedOptions(const std::string& _advancedOptions);

                    /**
                     * 判断参数 AdvancedOptions 是否已赋值
                     * @return AdvancedOptions 是否已赋值
                     * 
                     */
                    bool AdvancedOptionsHasBeenSet() const;

                private:

                    /**
                     * <p>ServiceId</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>部署名称</p>
                     */
                    std::string m_deploymentName;
                    bool m_deploymentNameHasBeenSet;

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
                     * <p>模型版本（如 v1, v2），未提供时使用最新版本</p>
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * <p>是否开启 ray head 高可用</p>
                     */
                    bool m_headHighAvailabilityEnabled;
                    bool m_headHighAvailabilityEnabledHasBeenSet;

                    /**
                     * <p>高级参数（JSON 字符串，可选）</p>
                     */
                    std::string m_advancedParams;
                    bool m_advancedParamsHasBeenSet;

                    /**
                     * <p>队列名（K8s namespace）</p>
                     */
                    std::string m_queue;
                    bool m_queueHasBeenSet;

                    /**
                     * <p>是否启用弹性伸缩</p>
                     */
                    bool m_autoscalingEnabled;
                    bool m_autoscalingEnabledHasBeenSet;

                    /**
                     * <p>镜像名称</p>
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * <p>高级参数</p>
                     */
                    std::string m_advancedOptions;
                    bool m_advancedOptionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_ADDDEPLOYMENTREQUEST_H_
