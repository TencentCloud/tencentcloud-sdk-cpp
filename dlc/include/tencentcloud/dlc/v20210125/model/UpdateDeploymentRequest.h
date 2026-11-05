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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_UPDATEDEPLOYMENTREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_UPDATEDEPLOYMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/LoraAdapterBinding.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * UpdateDeployment请求参数结构体
                */
                class UpdateDeploymentRequest : public AbstractModel
                {
                public:
                    UpdateDeploymentRequest();
                    ~UpdateDeploymentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>DeploymentId</p>
                     * @return DeploymentId <p>DeploymentId</p>
                     * 
                     */
                    std::string GetDeploymentId() const;

                    /**
                     * 设置<p>DeploymentId</p>
                     * @param _deploymentId <p>DeploymentId</p>
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
                     * 获取<p>模型版本（如 v1, v2），未提供时保持当前版本</p>
                     * @return ModelVersion <p>模型版本（如 v1, v2），未提供时保持当前版本</p>
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置<p>模型版本（如 v1, v2），未提供时保持当前版本</p>
                     * @param _modelVersion <p>模型版本（如 v1, v2），未提供时保持当前版本</p>
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
                     * 获取<p>推理引擎（vllm）</p>
                     * @return Engine <p>推理引擎（vllm）</p>
                     * 
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置<p>推理引擎（vllm）</p>
                     * @param _engine <p>推理引擎（vllm）</p>
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
                     * 获取<p>代码包 URI（可选，未传时从 primary deployment 继承）</p>
                     * @return CodePackageUri <p>代码包 URI（可选，未传时从 primary deployment 继承）</p>
                     * 
                     */
                    std::string GetCodePackageUri() const;

                    /**
                     * 设置<p>代码包 URI（可选，未传时从 primary deployment 继承）</p>
                     * @param _codePackageUri <p>代码包 URI（可选，未传时从 primary deployment 继承）</p>
                     * 
                     */
                    void SetCodePackageUri(const std::string& _codePackageUri);

                    /**
                     * 判断参数 CodePackageUri 是否已赋值
                     * @return CodePackageUri 是否已赋值
                     * 
                     */
                    bool CodePackageUriHasBeenSet() const;

                    /**
                     * 获取<p>代码包原始文件名（可选，详情页「代码引用」回显用，仅记录不参与业务逻辑）</p>
                     * @return CodePackageOriginalName <p>代码包原始文件名（可选，详情页「代码引用」回显用，仅记录不参与业务逻辑）</p>
                     * 
                     */
                    std::string GetCodePackageOriginalName() const;

                    /**
                     * 设置<p>代码包原始文件名（可选，详情页「代码引用」回显用，仅记录不参与业务逻辑）</p>
                     * @param _codePackageOriginalName <p>代码包原始文件名（可选，详情页「代码引用」回显用，仅记录不参与业务逻辑）</p>
                     * 
                     */
                    void SetCodePackageOriginalName(const std::string& _codePackageOriginalName);

                    /**
                     * 判断参数 CodePackageOriginalName 是否已赋值
                     * @return CodePackageOriginalName 是否已赋值
                     * 
                     */
                    bool CodePackageOriginalNameHasBeenSet() const;

                    /**
                     * 获取<p>CR / PodSpec overrides JSON（可选）</p>
                     * @return CrOverrides <p>CR / PodSpec overrides JSON（可选）</p>
                     * 
                     */
                    std::string GetCrOverrides() const;

                    /**
                     * 设置<p>CR / PodSpec overrides JSON（可选）</p>
                     * @param _crOverrides <p>CR / PodSpec overrides JSON（可选）</p>
                     * 
                     */
                    void SetCrOverrides(const std::string& _crOverrides);

                    /**
                     * 判断参数 CrOverrides 是否已赋值
                     * @return CrOverrides 是否已赋值
                     * 
                     */
                    bool CrOverridesHasBeenSet() const;

                    /**
                     * 获取<p>Head 节点高可用开关（可选，不传或 true 为开启，仅 false 为关闭；与当前值不同会触发服务重建）</p>
                     * @return HeadHighAvailabilityEnabled <p>Head 节点高可用开关（可选，不传或 true 为开启，仅 false 为关闭；与当前值不同会触发服务重建）</p>
                     * 
                     */
                    bool GetHeadHighAvailabilityEnabled() const;

                    /**
                     * 设置<p>Head 节点高可用开关（可选，不传或 true 为开启，仅 false 为关闭；与当前值不同会触发服务重建）</p>
                     * @param _headHighAvailabilityEnabled <p>Head 节点高可用开关（可选，不传或 true 为开启，仅 false 为关闭；与当前值不同会触发服务重建）</p>
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
                     * 获取<p>可选：创建时一并挂载的 LoRA 模型版本（首次启动即生效）</p>
                     * @return LoraBindings <p>可选：创建时一并挂载的 LoRA 模型版本（首次启动即生效）</p>
                     * 
                     */
                    std::vector<LoraAdapterBinding> GetLoraBindings() const;

                    /**
                     * 设置<p>可选：创建时一并挂载的 LoRA 模型版本（首次启动即生效）</p>
                     * @param _loraBindings <p>可选：创建时一并挂载的 LoRA 模型版本（首次启动即生效）</p>
                     * 
                     */
                    void SetLoraBindings(const std::vector<LoraAdapterBinding>& _loraBindings);

                    /**
                     * 判断参数 LoraBindings 是否已赋值
                     * @return LoraBindings 是否已赋值
                     * 
                     */
                    bool LoraBindingsHasBeenSet() const;

                    /**
                     * 获取<p>ray runtime env 字段</p>
                     * @return RuntimeEnv <p>ray runtime env 字段</p>
                     * 
                     */
                    std::string GetRuntimeEnv() const;

                    /**
                     * 设置<p>ray runtime env 字段</p>
                     * @param _runtimeEnv <p>ray runtime env 字段</p>
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
                     * <p>DeploymentId</p>
                     */
                    std::string m_deploymentId;
                    bool m_deploymentIdHasBeenSet;

                    /**
                     * <p>模型版本（如 v1, v2），未提供时保持当前版本</p>
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * <p>推理引擎（vllm）</p>
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * <p>副本数</p>
                     */
                    int64_t m_replicas;
                    bool m_replicasHasBeenSet;

                    /**
                     * <p>是否启用弹性伸缩</p>
                     */
                    bool m_autoscalingEnabled;
                    bool m_autoscalingEnabledHasBeenSet;

                    /**
                     * <p>代码包 URI（可选，未传时从 primary deployment 继承）</p>
                     */
                    std::string m_codePackageUri;
                    bool m_codePackageUriHasBeenSet;

                    /**
                     * <p>代码包原始文件名（可选，详情页「代码引用」回显用，仅记录不参与业务逻辑）</p>
                     */
                    std::string m_codePackageOriginalName;
                    bool m_codePackageOriginalNameHasBeenSet;

                    /**
                     * <p>CR / PodSpec overrides JSON（可选）</p>
                     */
                    std::string m_crOverrides;
                    bool m_crOverridesHasBeenSet;

                    /**
                     * <p>Head 节点高可用开关（可选，不传或 true 为开启，仅 false 为关闭；与当前值不同会触发服务重建）</p>
                     */
                    bool m_headHighAvailabilityEnabled;
                    bool m_headHighAvailabilityEnabledHasBeenSet;

                    /**
                     * <p>可选：创建时一并挂载的 LoRA 模型版本（首次启动即生效）</p>
                     */
                    std::vector<LoraAdapterBinding> m_loraBindings;
                    bool m_loraBindingsHasBeenSet;

                    /**
                     * <p>ray runtime env 字段</p>
                     */
                    std::string m_runtimeEnv;
                    bool m_runtimeEnvHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_UPDATEDEPLOYMENTREQUEST_H_
