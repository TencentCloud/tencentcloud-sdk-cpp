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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCERESOURCECONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCERESOURCECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/InferenceAutoScalingConfig.h>
#include <tencentcloud/teo/v20220901/model/InferenceManualInstanceConfig.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 推理服务的资源配置。
                */
                class InferenceResourceConfig : public AbstractModel
                {
                public:
                    InferenceResourceConfig();
                    ~InferenceResourceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取扩容缩容的方式。取值有：<li>Auto：根据请求量自动调整实例数量；</li><li>Manual：人工设置固定的实例数量。</li>
                     * @return ScalingMode 扩容缩容的方式。取值有：<li>Auto：根据请求量自动调整实例数量；</li><li>Manual：人工设置固定的实例数量。</li>
                     * 
                     */
                    std::string GetScalingMode() const;

                    /**
                     * 设置扩容缩容的方式。取值有：<li>Auto：根据请求量自动调整实例数量；</li><li>Manual：人工设置固定的实例数量。</li>
                     * @param _scalingMode 扩容缩容的方式。取值有：<li>Auto：根据请求量自动调整实例数量；</li><li>Manual：人工设置固定的实例数量。</li>
                     * 
                     */
                    void SetScalingMode(const std::string& _scalingMode);

                    /**
                     * 判断参数 ScalingMode 是否已赋值
                     * @return ScalingMode 是否已赋值
                     * 
                     */
                    bool ScalingModeHasBeenSet() const;

                    /**
                     * 获取硬件规格。
                     * @return HardwareSpec 硬件规格。
                     * 
                     */
                    std::string GetHardwareSpec() const;

                    /**
                     * 设置硬件规格。
                     * @param _hardwareSpec 硬件规格。
                     * 
                     */
                    void SetHardwareSpec(const std::string& _hardwareSpec);

                    /**
                     * 判断参数 HardwareSpec 是否已赋值
                     * @return HardwareSpec 是否已赋值
                     * 
                     */
                    bool HardwareSpecHasBeenSet() const;

                    /**
                     * 获取推理服务自动伸缩配置。当 ScalingMode 为 Auto 时必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoScalingConfig 推理服务自动伸缩配置。当 ScalingMode 为 Auto 时必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InferenceAutoScalingConfig GetAutoScalingConfig() const;

                    /**
                     * 设置推理服务自动伸缩配置。当 ScalingMode 为 Auto 时必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoScalingConfig 推理服务自动伸缩配置。当 ScalingMode 为 Auto 时必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoScalingConfig(const InferenceAutoScalingConfig& _autoScalingConfig);

                    /**
                     * 判断参数 AutoScalingConfig 是否已赋值
                     * @return AutoScalingConfig 是否已赋值
                     * 
                     */
                    bool AutoScalingConfigHasBeenSet() const;

                    /**
                     * 获取推理服务人工设置实例配置。当 ScalingMode 为 Manual 时必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ManualInstanceConfig 推理服务人工设置实例配置。当 ScalingMode 为 Manual 时必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InferenceManualInstanceConfig GetManualInstanceConfig() const;

                    /**
                     * 设置推理服务人工设置实例配置。当 ScalingMode 为 Manual 时必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _manualInstanceConfig 推理服务人工设置实例配置。当 ScalingMode 为 Manual 时必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetManualInstanceConfig(const InferenceManualInstanceConfig& _manualInstanceConfig);

                    /**
                     * 判断参数 ManualInstanceConfig 是否已赋值
                     * @return ManualInstanceConfig 是否已赋值
                     * 
                     */
                    bool ManualInstanceConfigHasBeenSet() const;

                    /**
                     * 获取单实例的并发数。默认值为 1。
                     * @return Concurrency 单实例的并发数。默认值为 1。
                     * 
                     */
                    int64_t GetConcurrency() const;

                    /**
                     * 设置单实例的并发数。默认值为 1。
                     * @param _concurrency 单实例的并发数。默认值为 1。
                     * 
                     */
                    void SetConcurrency(const int64_t& _concurrency);

                    /**
                     * 判断参数 Concurrency 是否已赋值
                     * @return Concurrency 是否已赋值
                     * 
                     */
                    bool ConcurrencyHasBeenSet() const;

                private:

                    /**
                     * 扩容缩容的方式。取值有：<li>Auto：根据请求量自动调整实例数量；</li><li>Manual：人工设置固定的实例数量。</li>
                     */
                    std::string m_scalingMode;
                    bool m_scalingModeHasBeenSet;

                    /**
                     * 硬件规格。
                     */
                    std::string m_hardwareSpec;
                    bool m_hardwareSpecHasBeenSet;

                    /**
                     * 推理服务自动伸缩配置。当 ScalingMode 为 Auto 时必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InferenceAutoScalingConfig m_autoScalingConfig;
                    bool m_autoScalingConfigHasBeenSet;

                    /**
                     * 推理服务人工设置实例配置。当 ScalingMode 为 Manual 时必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InferenceManualInstanceConfig m_manualInstanceConfig;
                    bool m_manualInstanceConfigHasBeenSet;

                    /**
                     * 单实例的并发数。默认值为 1。
                     */
                    int64_t m_concurrency;
                    bool m_concurrencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCERESOURCECONFIG_H_
