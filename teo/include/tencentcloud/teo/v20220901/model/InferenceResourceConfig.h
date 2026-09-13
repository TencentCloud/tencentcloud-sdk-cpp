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
#include <tencentcloud/teo/v20220901/model/InferenceHardwareConfig.h>
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
                     * 获取<p>扩容缩容的方式。取值有：<li>Auto：根据请求量自动调整实例数量；</li><li>Manual：人工设置固定的实例数量。</li></p>
                     * @return ScalingMode <p>扩容缩容的方式。取值有：<li>Auto：根据请求量自动调整实例数量；</li><li>Manual：人工设置固定的实例数量。</li></p>
                     * 
                     */
                    std::string GetScalingMode() const;

                    /**
                     * 设置<p>扩容缩容的方式。取值有：<li>Auto：根据请求量自动调整实例数量；</li><li>Manual：人工设置固定的实例数量。</li></p>
                     * @param _scalingMode <p>扩容缩容的方式。取值有：<li>Auto：根据请求量自动调整实例数量；</li><li>Manual：人工设置固定的实例数量。</li></p>
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
                     * 获取<p>硬件规格标识。已废弃，请参考使用 <code>HardwareSpecId</code>。</p>
                     * @return HardwareSpec <p>硬件规格标识。已废弃，请参考使用 <code>HardwareSpecId</code>。</p>
                     * @deprecated
                     */
                    std::string GetHardwareSpec() const;

                    /**
                     * 设置<p>硬件规格标识。已废弃，请参考使用 <code>HardwareSpecId</code>。</p>
                     * @param _hardwareSpec <p>硬件规格标识。已废弃，请参考使用 <code>HardwareSpecId</code>。</p>
                     * @deprecated
                     */
                    void SetHardwareSpec(const std::string& _hardwareSpec);

                    /**
                     * 判断参数 HardwareSpec 是否已赋值
                     * @return HardwareSpec 是否已赋值
                     * @deprecated
                     */
                    bool HardwareSpecHasBeenSet() const;

                    /**
                     * 获取<p>硬件规格唯一标识 ID，可通过 <code>DescribeInferenceHardwareSpecifications</code> 接口获取当前站点支持的硬件规格。</p><p>系统默认按照所选 <code>HardwareSpecId</code> 对应的硬件规格配置推理服务所需资源；如需调整，可通过 <code>HardwareConfig</code> 自定义硬件资源配置。</p>
                     * @return HardwareSpecId <p>硬件规格唯一标识 ID，可通过 <code>DescribeInferenceHardwareSpecifications</code> 接口获取当前站点支持的硬件规格。</p><p>系统默认按照所选 <code>HardwareSpecId</code> 对应的硬件规格配置推理服务所需资源；如需调整，可通过 <code>HardwareConfig</code> 自定义硬件资源配置。</p>
                     * 
                     */
                    std::string GetHardwareSpecId() const;

                    /**
                     * 设置<p>硬件规格唯一标识 ID，可通过 <code>DescribeInferenceHardwareSpecifications</code> 接口获取当前站点支持的硬件规格。</p><p>系统默认按照所选 <code>HardwareSpecId</code> 对应的硬件规格配置推理服务所需资源；如需调整，可通过 <code>HardwareConfig</code> 自定义硬件资源配置。</p>
                     * @param _hardwareSpecId <p>硬件规格唯一标识 ID，可通过 <code>DescribeInferenceHardwareSpecifications</code> 接口获取当前站点支持的硬件规格。</p><p>系统默认按照所选 <code>HardwareSpecId</code> 对应的硬件规格配置推理服务所需资源；如需调整，可通过 <code>HardwareConfig</code> 自定义硬件资源配置。</p>
                     * 
                     */
                    void SetHardwareSpecId(const std::string& _hardwareSpecId);

                    /**
                     * 判断参数 HardwareSpecId 是否已赋值
                     * @return HardwareSpecId 是否已赋值
                     * 
                     */
                    bool HardwareSpecIdHasBeenSet() const;

                    /**
                     * 获取<p>推理服务硬件配置。</p><p>作为入参时，若未填充则按照所选 <code>HardwareSpecId</code> 规格的默认值配置硬件资源；若填充则优先按照填写值进行配置。</p>
                     * @return HardwareConfig <p>推理服务硬件配置。</p><p>作为入参时，若未填充则按照所选 <code>HardwareSpecId</code> 规格的默认值配置硬件资源；若填充则优先按照填写值进行配置。</p>
                     * 
                     */
                    InferenceHardwareConfig GetHardwareConfig() const;

                    /**
                     * 设置<p>推理服务硬件配置。</p><p>作为入参时，若未填充则按照所选 <code>HardwareSpecId</code> 规格的默认值配置硬件资源；若填充则优先按照填写值进行配置。</p>
                     * @param _hardwareConfig <p>推理服务硬件配置。</p><p>作为入参时，若未填充则按照所选 <code>HardwareSpecId</code> 规格的默认值配置硬件资源；若填充则优先按照填写值进行配置。</p>
                     * 
                     */
                    void SetHardwareConfig(const InferenceHardwareConfig& _hardwareConfig);

                    /**
                     * 判断参数 HardwareConfig 是否已赋值
                     * @return HardwareConfig 是否已赋值
                     * 
                     */
                    bool HardwareConfigHasBeenSet() const;

                    /**
                     * 获取<p>推理服务自动伸缩配置。当 ScalingMode 为 Auto 时必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoScalingConfig <p>推理服务自动伸缩配置。当 ScalingMode 为 Auto 时必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InferenceAutoScalingConfig GetAutoScalingConfig() const;

                    /**
                     * 设置<p>推理服务自动伸缩配置。当 ScalingMode 为 Auto 时必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoScalingConfig <p>推理服务自动伸缩配置。当 ScalingMode 为 Auto 时必填。</p>
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
                     * 获取<p>推理服务人工设置实例配置。当 ScalingMode 为 Manual 时必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ManualInstanceConfig <p>推理服务人工设置实例配置。当 ScalingMode 为 Manual 时必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InferenceManualInstanceConfig GetManualInstanceConfig() const;

                    /**
                     * 设置<p>推理服务人工设置实例配置。当 ScalingMode 为 Manual 时必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _manualInstanceConfig <p>推理服务人工设置实例配置。当 ScalingMode 为 Manual 时必填。</p>
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
                     * 获取<p>单实例的并发数。默认值为 1。</p>
                     * @return Concurrency <p>单实例的并发数。默认值为 1。</p>
                     * 
                     */
                    int64_t GetConcurrency() const;

                    /**
                     * 设置<p>单实例的并发数。默认值为 1。</p>
                     * @param _concurrency <p>单实例的并发数。默认值为 1。</p>
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
                     * <p>扩容缩容的方式。取值有：<li>Auto：根据请求量自动调整实例数量；</li><li>Manual：人工设置固定的实例数量。</li></p>
                     */
                    std::string m_scalingMode;
                    bool m_scalingModeHasBeenSet;

                    /**
                     * <p>硬件规格标识。已废弃，请参考使用 <code>HardwareSpecId</code>。</p>
                     */
                    std::string m_hardwareSpec;
                    bool m_hardwareSpecHasBeenSet;

                    /**
                     * <p>硬件规格唯一标识 ID，可通过 <code>DescribeInferenceHardwareSpecifications</code> 接口获取当前站点支持的硬件规格。</p><p>系统默认按照所选 <code>HardwareSpecId</code> 对应的硬件规格配置推理服务所需资源；如需调整，可通过 <code>HardwareConfig</code> 自定义硬件资源配置。</p>
                     */
                    std::string m_hardwareSpecId;
                    bool m_hardwareSpecIdHasBeenSet;

                    /**
                     * <p>推理服务硬件配置。</p><p>作为入参时，若未填充则按照所选 <code>HardwareSpecId</code> 规格的默认值配置硬件资源；若填充则优先按照填写值进行配置。</p>
                     */
                    InferenceHardwareConfig m_hardwareConfig;
                    bool m_hardwareConfigHasBeenSet;

                    /**
                     * <p>推理服务自动伸缩配置。当 ScalingMode 为 Auto 时必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InferenceAutoScalingConfig m_autoScalingConfig;
                    bool m_autoScalingConfigHasBeenSet;

                    /**
                     * <p>推理服务人工设置实例配置。当 ScalingMode 为 Manual 时必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InferenceManualInstanceConfig m_manualInstanceConfig;
                    bool m_manualInstanceConfigHasBeenSet;

                    /**
                     * <p>单实例的并发数。默认值为 1。</p>
                     */
                    int64_t m_concurrency;
                    bool m_concurrencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCERESOURCECONFIG_H_
