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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCERESOURCECONFIGFORMODIFY_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCERESOURCECONFIGFORMODIFY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/InferenceAutoScalingConfig.h>
#include <tencentcloud/teo/v20220901/model/InferenceManualInstanceConfig.h>
#include <tencentcloud/teo/v20220901/model/InferenceHardwareConfigForModify.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 推理服务资源配置的修改参数。
                */
                class InferenceResourceConfigForModify : public AbstractModel
                {
                public:
                    InferenceResourceConfigForModify();
                    ~InferenceResourceConfigForModify() = default;
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
                     * 获取<p>推理服务自动伸缩配置。当 ScalingMode 为 Auto 时必填。</p>
                     * @return AutoScalingConfig <p>推理服务自动伸缩配置。当 ScalingMode 为 Auto 时必填。</p>
                     * 
                     */
                    InferenceAutoScalingConfig GetAutoScalingConfig() const;

                    /**
                     * 设置<p>推理服务自动伸缩配置。当 ScalingMode 为 Auto 时必填。</p>
                     * @param _autoScalingConfig <p>推理服务自动伸缩配置。当 ScalingMode 为 Auto 时必填。</p>
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
                     * @return ManualInstanceConfig <p>推理服务人工设置实例配置。当 ScalingMode 为 Manual 时必填。</p>
                     * 
                     */
                    InferenceManualInstanceConfig GetManualInstanceConfig() const;

                    /**
                     * 设置<p>推理服务人工设置实例配置。当 ScalingMode 为 Manual 时必填。</p>
                     * @param _manualInstanceConfig <p>推理服务人工设置实例配置。当 ScalingMode 为 Manual 时必填。</p>
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

                    /**
                     * 获取<p>推理服务的硬件资源配置。</p>
                     * @return HardwareConfig <p>推理服务的硬件资源配置。</p>
                     * 
                     */
                    InferenceHardwareConfigForModify GetHardwareConfig() const;

                    /**
                     * 设置<p>推理服务的硬件资源配置。</p>
                     * @param _hardwareConfig <p>推理服务的硬件资源配置。</p>
                     * 
                     */
                    void SetHardwareConfig(const InferenceHardwareConfigForModify& _hardwareConfig);

                    /**
                     * 判断参数 HardwareConfig 是否已赋值
                     * @return HardwareConfig 是否已赋值
                     * 
                     */
                    bool HardwareConfigHasBeenSet() const;

                private:

                    /**
                     * <p>扩容缩容的方式。取值有：<li>Auto：根据请求量自动调整实例数量；</li><li>Manual：人工设置固定的实例数量。</li></p>
                     */
                    std::string m_scalingMode;
                    bool m_scalingModeHasBeenSet;

                    /**
                     * <p>推理服务自动伸缩配置。当 ScalingMode 为 Auto 时必填。</p>
                     */
                    InferenceAutoScalingConfig m_autoScalingConfig;
                    bool m_autoScalingConfigHasBeenSet;

                    /**
                     * <p>推理服务人工设置实例配置。当 ScalingMode 为 Manual 时必填。</p>
                     */
                    InferenceManualInstanceConfig m_manualInstanceConfig;
                    bool m_manualInstanceConfigHasBeenSet;

                    /**
                     * <p>单实例的并发数。默认值为 1。</p>
                     */
                    int64_t m_concurrency;
                    bool m_concurrencyHasBeenSet;

                    /**
                     * <p>推理服务的硬件资源配置。</p>
                     */
                    InferenceHardwareConfigForModify m_hardwareConfig;
                    bool m_hardwareConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCERESOURCECONFIGFORMODIFY_H_
