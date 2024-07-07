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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_QUALITYCONTROLITEMCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_QUALITYCONTROLITEMCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 质检项配置
                */
                class QualityControlItemConfig : public AbstractModel
                {
                public:
                    QualityControlItemConfig();
                    ~QualityControlItemConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取质检项名称。
                     * @return Type 质检项名称。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置质检项名称。
                     * @param _type 质检项名称。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取能力配置开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
默认值：ON。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Switch 能力配置开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
默认值：ON。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置能力配置开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
默认值：ON。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _switch 能力配置开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
默认值：ON。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取采样方式，取值范围：
- Time：根据时间间隔采样。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Sampling 采样方式，取值范围：
- Time：根据时间间隔采样。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSampling() const;

                    /**
                     * 设置采样方式，取值范围：
- Time：根据时间间隔采样。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sampling 采样方式，取值范围：
- Time：根据时间间隔采样。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSampling(const std::string& _sampling);

                    /**
                     * 判断参数 Sampling 是否已赋值
                     * @return Sampling 是否已赋值
                     * 
                     */
                    bool SamplingHasBeenSet() const;

                    /**
                     * 获取采样间隔时间，取值范围：[0, 60000]，单位：ms。
默认值 0。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntervalTime 采样间隔时间，取值范围：[0, 60000]，单位：ms。
默认值 0。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIntervalTime() const;

                    /**
                     * 设置采样间隔时间，取值范围：[0, 60000]，单位：ms。
默认值 0。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _intervalTime 采样间隔时间，取值范围：[0, 60000]，单位：ms。
默认值 0。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIntervalTime(const uint64_t& _intervalTime);

                    /**
                     * 判断参数 IntervalTime 是否已赋值
                     * @return IntervalTime 是否已赋值
                     * 
                     */
                    bool IntervalTimeHasBeenSet() const;

                    /**
                     * 获取异常持续时间，取值范围：[0, 60000]，单位：ms。
默认值 0。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Duration 异常持续时间，取值范围：[0, 60000]，单位：ms。
默认值 0。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置异常持续时间，取值范围：[0, 60000]，单位：ms。
默认值 0。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _duration 异常持续时间，取值范围：[0, 60000]，单位：ms。
默认值 0。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取检测分值的阈值，使用数学区间格式，当检测值超出区间范围会触发回调。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Threshold 检测分值的阈值，使用数学区间格式，当检测值超出区间范围会触发回调。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetThreshold() const;

                    /**
                     * 设置检测分值的阈值，使用数学区间格式，当检测值超出区间范围会触发回调。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _threshold 检测分值的阈值，使用数学区间格式，当检测值超出区间范围会触发回调。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetThreshold(const std::string& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     * 
                     */
                    bool ThresholdHasBeenSet() const;

                private:

                    /**
                     * 质检项名称。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 能力配置开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
默认值：ON。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 采样方式，取值范围：
- Time：根据时间间隔采样。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sampling;
                    bool m_samplingHasBeenSet;

                    /**
                     * 采样间隔时间，取值范围：[0, 60000]，单位：ms。
默认值 0。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_intervalTime;
                    bool m_intervalTimeHasBeenSet;

                    /**
                     * 异常持续时间，取值范围：[0, 60000]，单位：ms。
默认值 0。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 检测分值的阈值，使用数学区间格式，当检测值超出区间范围会触发回调。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_threshold;
                    bool m_thresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_QUALITYCONTROLITEMCONFIG_H_
