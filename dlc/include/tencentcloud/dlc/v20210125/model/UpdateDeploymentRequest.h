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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_UPDATEDEPLOYMENTREQUEST_H_
