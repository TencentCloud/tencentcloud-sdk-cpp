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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_ISTIOCONFIG_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_ISTIOCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcm/v20210413/model/TracingConfig.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * Istio配置
                */
                class IstioConfig : public AbstractModel
                {
                public:
                    IstioConfig();
                    ~IstioConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取外部流量策略
                     * @return OutboundTrafficPolicy 外部流量策略
                     */
                    std::string GetOutboundTrafficPolicy() const;

                    /**
                     * 设置外部流量策略
                     * @param OutboundTrafficPolicy 外部流量策略
                     */
                    void SetOutboundTrafficPolicy(const std::string& _outboundTrafficPolicy);

                    /**
                     * 判断参数 OutboundTrafficPolicy 是否已赋值
                     * @return OutboundTrafficPolicy 是否已赋值
                     */
                    bool OutboundTrafficPolicyHasBeenSet() const;

                    /**
                     * 获取调用链配置（Deprecated，请使用 MeshConfig.Tracing 进行配置）
                     * @return Tracing 调用链配置（Deprecated，请使用 MeshConfig.Tracing 进行配置）
                     */
                    TracingConfig GetTracing() const;

                    /**
                     * 设置调用链配置（Deprecated，请使用 MeshConfig.Tracing 进行配置）
                     * @param Tracing 调用链配置（Deprecated，请使用 MeshConfig.Tracing 进行配置）
                     */
                    void SetTracing(const TracingConfig& _tracing);

                    /**
                     * 判断参数 Tracing 是否已赋值
                     * @return Tracing 是否已赋值
                     */
                    bool TracingHasBeenSet() const;

                    /**
                     * 获取禁用策略检查功能
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisablePolicyChecks 禁用策略检查功能
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetDisablePolicyChecks() const;

                    /**
                     * 设置禁用策略检查功能
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DisablePolicyChecks 禁用策略检查功能
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDisablePolicyChecks(const bool& _disablePolicyChecks);

                    /**
                     * 判断参数 DisablePolicyChecks 是否已赋值
                     * @return DisablePolicyChecks 是否已赋值
                     */
                    bool DisablePolicyChecksHasBeenSet() const;

                private:

                    /**
                     * 外部流量策略
                     */
                    std::string m_outboundTrafficPolicy;
                    bool m_outboundTrafficPolicyHasBeenSet;

                    /**
                     * 调用链配置（Deprecated，请使用 MeshConfig.Tracing 进行配置）
                     */
                    TracingConfig m_tracing;
                    bool m_tracingHasBeenSet;

                    /**
                     * 禁用策略检查功能
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_disablePolicyChecks;
                    bool m_disablePolicyChecksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_ISTIOCONFIG_H_
