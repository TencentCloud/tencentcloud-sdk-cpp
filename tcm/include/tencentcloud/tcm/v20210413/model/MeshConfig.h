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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_MESHCONFIG_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_MESHCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcm/v20210413/model/IstioConfig.h>
#include <tencentcloud/tcm/v20210413/model/AccessLogConfig.h>
#include <tencentcloud/tcm/v20210413/model/PrometheusConfig.h>
#include <tencentcloud/tcm/v20210413/model/InjectConfig.h>
#include <tencentcloud/tcm/v20210413/model/TracingConfig.h>
#include <tencentcloud/tcm/v20210413/model/ResourceRequirements.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * 网格配置项
                */
                class MeshConfig : public AbstractModel
                {
                public:
                    MeshConfig();
                    ~MeshConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Istio配置
                     * @return Istio Istio配置
                     * 
                     */
                    IstioConfig GetIstio() const;

                    /**
                     * 设置Istio配置
                     * @param _istio Istio配置
                     * 
                     */
                    void SetIstio(const IstioConfig& _istio);

                    /**
                     * 判断参数 Istio 是否已赋值
                     * @return Istio 是否已赋值
                     * 
                     */
                    bool IstioHasBeenSet() const;

                    /**
                     * 获取AccessLog配置
                     * @return AccessLog AccessLog配置
                     * 
                     */
                    AccessLogConfig GetAccessLog() const;

                    /**
                     * 设置AccessLog配置
                     * @param _accessLog AccessLog配置
                     * 
                     */
                    void SetAccessLog(const AccessLogConfig& _accessLog);

                    /**
                     * 判断参数 AccessLog 是否已赋值
                     * @return AccessLog 是否已赋值
                     * 
                     */
                    bool AccessLogHasBeenSet() const;

                    /**
                     * 获取Prometheus配置
                     * @return Prometheus Prometheus配置
                     * 
                     */
                    PrometheusConfig GetPrometheus() const;

                    /**
                     * 设置Prometheus配置
                     * @param _prometheus Prometheus配置
                     * 
                     */
                    void SetPrometheus(const PrometheusConfig& _prometheus);

                    /**
                     * 判断参数 Prometheus 是否已赋值
                     * @return Prometheus 是否已赋值
                     * 
                     */
                    bool PrometheusHasBeenSet() const;

                    /**
                     * 获取自动注入配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Inject 自动注入配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InjectConfig GetInject() const;

                    /**
                     * 设置自动注入配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inject 自动注入配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInject(const InjectConfig& _inject);

                    /**
                     * 判断参数 Inject 是否已赋值
                     * @return Inject 是否已赋值
                     * 
                     */
                    bool InjectHasBeenSet() const;

                    /**
                     * 获取调用跟踪配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tracing 调用跟踪配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TracingConfig GetTracing() const;

                    /**
                     * 设置调用跟踪配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tracing 调用跟踪配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTracing(const TracingConfig& _tracing);

                    /**
                     * 判断参数 Tracing 是否已赋值
                     * @return Tracing 是否已赋值
                     * 
                     */
                    bool TracingHasBeenSet() const;

                    /**
                     * 获取Sidecar自定义资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SidecarResources Sidecar自定义资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ResourceRequirements GetSidecarResources() const;

                    /**
                     * 设置Sidecar自定义资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sidecarResources Sidecar自定义资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSidecarResources(const ResourceRequirements& _sidecarResources);

                    /**
                     * 判断参数 SidecarResources 是否已赋值
                     * @return SidecarResources 是否已赋值
                     * 
                     */
                    bool SidecarResourcesHasBeenSet() const;

                private:

                    /**
                     * Istio配置
                     */
                    IstioConfig m_istio;
                    bool m_istioHasBeenSet;

                    /**
                     * AccessLog配置
                     */
                    AccessLogConfig m_accessLog;
                    bool m_accessLogHasBeenSet;

                    /**
                     * Prometheus配置
                     */
                    PrometheusConfig m_prometheus;
                    bool m_prometheusHasBeenSet;

                    /**
                     * 自动注入配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InjectConfig m_inject;
                    bool m_injectHasBeenSet;

                    /**
                     * 调用跟踪配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TracingConfig m_tracing;
                    bool m_tracingHasBeenSet;

                    /**
                     * Sidecar自定义资源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ResourceRequirements m_sidecarResources;
                    bool m_sidecarResourcesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_MESHCONFIG_H_
