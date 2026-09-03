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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DEPLOYMENTINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DEPLOYMENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 部署信息
                */
                class DeploymentInfo : public AbstractModel
                {
                public:
                    DeploymentInfo();
                    ~DeploymentInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>部署 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeploymentId <p>部署 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeploymentId() const;

                    /**
                     * 设置<p>部署 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deploymentId <p>部署 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeploymentId(const std::string& _deploymentId);

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
                     * 设置<p>部署名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>部署名称</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>关联的服务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceId <p>关联的服务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>关联的服务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceId <p>关联的服务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>部署使用的模型版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelVersion <p>部署使用的模型版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置<p>部署使用的模型版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelVersion <p>部署使用的模型版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>部署状态（Running/Stopped/Deploying/Failed）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>部署状态（Running/Stopped/Deploying/Failed）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>部署状态（Running/Stopped/Deploying/Failed）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>部署状态（Running/Stopped/Deploying/Failed）</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>推理引擎（vLLM/SGLang 等）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Engine <p>推理引擎（vLLM/SGLang 等）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置<p>推理引擎（vLLM/SGLang 等）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engine <p>推理引擎（vLLM/SGLang 等）</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>期望副本数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Replicas <p>期望副本数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetReplicas() const;

                    /**
                     * 设置<p>期望副本数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _replicas <p>期望副本数</p>
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
                     * 获取<p>可用副本数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AvailableReplicas <p>可用副本数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAvailableReplicas() const;

                    /**
                     * 设置<p>可用副本数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _availableReplicas <p>可用副本数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAvailableReplicas(const int64_t& _availableReplicas);

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
                     * 设置<p>资源配置（JSON 字符串）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceConfig <p>资源配置（JSON 字符串）</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>ray head 是否开启高可用</p>
                     * @return HeadHighAvailabilityEnabled <p>ray head 是否开启高可用</p>
                     * 
                     */
                    bool GetHeadHighAvailabilityEnabled() const;

                    /**
                     * 设置<p>ray head 是否开启高可用</p>
                     * @param _headHighAvailabilityEnabled <p>ray head 是否开启高可用</p>
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
                     * 获取<p>高级参数（JSON 字符串）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdvancedParams <p>高级参数（JSON 字符串）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAdvancedParams() const;

                    /**
                     * 设置<p>高级参数（JSON 字符串）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _advancedParams <p>高级参数（JSON 字符串）</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>是否开启自动伸缩</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoscalingEnabled <p>是否开启自动伸缩</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAutoscalingEnabled() const;

                    /**
                     * 设置<p>是否开启自动伸缩</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoscalingEnabled <p>是否开启自动伸缩</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>模型存储配置（Catalog JSON，记录模型 COS 挂载信息）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelStorageConfig <p>模型存储配置（Catalog JSON，记录模型 COS 挂载信息）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelStorageConfig() const;

                    /**
                     * 设置<p>模型存储配置（Catalog JSON，记录模型 COS 挂载信息）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelStorageConfig <p>模型存储配置（Catalog JSON，记录模型 COS 挂载信息）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelStorageConfig(const std::string& _modelStorageConfig);

                    /**
                     * 判断参数 ModelStorageConfig 是否已赋值
                     * @return ModelStorageConfig 是否已赋值
                     * 
                     */
                    bool ModelStorageConfigHasBeenSet() const;

                    /**
                     * 获取<p>创建时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创建时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>创建时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

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
                     * 设置<p>更新时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime <p>更新时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

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
                     * 设置<p>Neutrino Serve ID (RayService CR name)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _neutrinoServeId <p>Neutrino Serve ID (RayService CR name)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNeutrinoServeId(const std::string& _neutrinoServeId);

                    /**
                     * 判断参数 NeutrinoServeId 是否已赋值
                     * @return NeutrinoServeId 是否已赋值
                     * 
                     */
                    bool NeutrinoServeIdHasBeenSet() const;

                    /**
                     * 获取<p>Ray Dashboard 访问地址（通过 Ingress 代理，仅 Running 状态的部署有值）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RayDashboardUrl <p>Ray Dashboard 访问地址（通过 Ingress 代理，仅 Running 状态的部署有值）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRayDashboardUrl() const;

                    /**
                     * 设置<p>Ray Dashboard 访问地址（通过 Ingress 代理，仅 Running 状态的部署有值）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rayDashboardUrl <p>Ray Dashboard 访问地址（通过 Ingress 代理，仅 Running 状态的部署有值）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRayDashboardUrl(const std::string& _rayDashboardUrl);

                    /**
                     * 判断参数 RayDashboardUrl 是否已赋值
                     * @return RayDashboardUrl 是否已赋值
                     * 
                     */
                    bool RayDashboardUrlHasBeenSet() const;

                    /**
                     * 获取<p>资源分区 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourcePartitionId <p>资源分区 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourcePartitionId() const;

                    /**
                     * 设置<p>资源分区 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourcePartitionId <p>资源分区 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>资源队列名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Queue <p>资源队列名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQueue() const;

                    /**
                     * 设置<p>资源队列名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queue <p>资源队列名称</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>App id</p>
                     * @return AppId <p>App id</p>
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>App id</p>
                     * @param _appId <p>App id</p>
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
                     * 获取<p>Uin</p>
                     * @return Uin <p>Uin</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>Uin</p>
                     * @param _uin <p>Uin</p>
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
                     * 获取<p>SubAccountUin</p>
                     * @return SubAccountUin <p>SubAccountUin</p>
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置<p>SubAccountUin</p>
                     * @param _subAccountUin <p>SubAccountUin</p>
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
                     * 获取<p>AdvancedOptions 高级参数（JSON 字符串，扁平 KV 结构，key 形如 spec.rayClusterConfig.headGroupSpec.serviceType）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdvancedOptions <p>AdvancedOptions 高级参数（JSON 字符串，扁平 KV 结构，key 形如 spec.rayClusterConfig.headGroupSpec.serviceType）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAdvancedOptions() const;

                    /**
                     * 设置<p>AdvancedOptions 高级参数（JSON 字符串，扁平 KV 结构，key 形如 spec.rayClusterConfig.headGroupSpec.serviceType）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _advancedOptions <p>AdvancedOptions 高级参数（JSON 字符串，扁平 KV 结构，key 形如 spec.rayClusterConfig.headGroupSpec.serviceType）</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>自定义镜像地址（为空则使用引擎默认镜像）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Image <p>自定义镜像地址（为空则使用引擎默认镜像）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置<p>自定义镜像地址（为空则使用引擎默认镜像）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _image <p>自定义镜像地址（为空则使用引擎默认镜像）</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>资源分区名称（后端按 ResourcePartitionId 反查 ResourceService 填充；分区不存在或 ResourceManager 未启用时可能为 null）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourcePartitionName <p>资源分区名称（后端按 ResourcePartitionId 反查 ResourceService 填充；分区不存在或 ResourceManager 未启用时可能为 null）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourcePartitionName() const;

                    /**
                     * 设置<p>资源分区名称（后端按 ResourcePartitionId 反查 ResourceService 填充；分区不存在或 ResourceManager 未启用时可能为 null）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourcePartitionName <p>资源分区名称（后端按 ResourcePartitionId 反查 ResourceService 填充；分区不存在或 ResourceManager 未启用时可能为 null）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourcePartitionName(const std::string& _resourcePartitionName);

                    /**
                     * 判断参数 ResourcePartitionName 是否已赋值
                     * @return ResourcePartitionName 是否已赋值
                     * 
                     */
                    bool ResourcePartitionNameHasBeenSet() const;

                private:

                    /**
                     * <p>部署 ID</p>
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
                     * <p>ray head 是否开启高可用</p>
                     */
                    bool m_headHighAvailabilityEnabled;
                    bool m_headHighAvailabilityEnabledHasBeenSet;

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
                     * <p>模型存储配置（Catalog JSON，记录模型 COS 挂载信息）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelStorageConfig;
                    bool m_modelStorageConfigHasBeenSet;

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
                     * <p>Ray Dashboard 访问地址（通过 Ingress 代理，仅 Running 状态的部署有值）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rayDashboardUrl;
                    bool m_rayDashboardUrlHasBeenSet;

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
                     * <p>App id</p>
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Uin</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>SubAccountUin</p>
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                    /**
                     * <p>AdvancedOptions 高级参数（JSON 字符串，扁平 KV 结构，key 形如 spec.rayClusterConfig.headGroupSpec.serviceType）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_advancedOptions;
                    bool m_advancedOptionsHasBeenSet;

                    /**
                     * <p>自定义镜像地址（为空则使用引擎默认镜像）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * <p>资源分区名称（后端按 ResourcePartitionId 反查 ResourceService 填充；分区不存在或 ResourceManager 未启用时可能为 null）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourcePartitionName;
                    bool m_resourcePartitionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DEPLOYMENTINFO_H_
