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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_GENERALEXAMINATIONVITALSIGN_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_GENERALEXAMINATIONVITALSIGN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/ValueUnitItem.h>
#include <tencentcloud/mrs/v20200910/model/GeneralExaminationVitalSignBloodPressure.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 生命体征
                */
                class GeneralExaminationVitalSign : public AbstractModel
                {
                public:
                    GeneralExaminationVitalSign();
                    ~GeneralExaminationVitalSign() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取生命体征总体描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Text 生命体征总体描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ValueUnitItem GetText() const;

                    /**
                     * 设置生命体征总体描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _text 生命体征总体描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetText(const ValueUnitItem& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取体温
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BodyTemperature 体温
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ValueUnitItem GetBodyTemperature() const;

                    /**
                     * 设置体温
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bodyTemperature 体温
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBodyTemperature(const ValueUnitItem& _bodyTemperature);

                    /**
                     * 判断参数 BodyTemperature 是否已赋值
                     * @return BodyTemperature 是否已赋值
                     * 
                     */
                    bool BodyTemperatureHasBeenSet() const;

                    /**
                     * 获取脉率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Pulse 脉率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ValueUnitItem GetPulse() const;

                    /**
                     * 设置脉率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pulse 脉率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPulse(const ValueUnitItem& _pulse);

                    /**
                     * 判断参数 Pulse 是否已赋值
                     * @return Pulse 是否已赋值
                     * 
                     */
                    bool PulseHasBeenSet() const;

                    /**
                     * 获取心率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HeartRate 心率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ValueUnitItem GetHeartRate() const;

                    /**
                     * 设置心率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _heartRate 心率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeartRate(const ValueUnitItem& _heartRate);

                    /**
                     * 判断参数 HeartRate 是否已赋值
                     * @return HeartRate 是否已赋值
                     * 
                     */
                    bool HeartRateHasBeenSet() const;

                    /**
                     * 获取呼吸频率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BreathingRate 呼吸频率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ValueUnitItem GetBreathingRate() const;

                    /**
                     * 设置呼吸频率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _breathingRate 呼吸频率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBreathingRate(const ValueUnitItem& _breathingRate);

                    /**
                     * 判断参数 BreathingRate 是否已赋值
                     * @return BreathingRate 是否已赋值
                     * 
                     */
                    bool BreathingRateHasBeenSet() const;

                    /**
                     * 获取身高
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BodyHeight 身高
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ValueUnitItem GetBodyHeight() const;

                    /**
                     * 设置身高
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bodyHeight 身高
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBodyHeight(const ValueUnitItem& _bodyHeight);

                    /**
                     * 判断参数 BodyHeight 是否已赋值
                     * @return BodyHeight 是否已赋值
                     * 
                     */
                    bool BodyHeightHasBeenSet() const;

                    /**
                     * 获取体重
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BodyWeight 体重
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ValueUnitItem GetBodyWeight() const;

                    /**
                     * 设置体重
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bodyWeight 体重
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBodyWeight(const ValueUnitItem& _bodyWeight);

                    /**
                     * 判断参数 BodyWeight 是否已赋值
                     * @return BodyWeight 是否已赋值
                     * 
                     */
                    bool BodyWeightHasBeenSet() const;

                    /**
                     * 获取体质指数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BodyMassIndex 体质指数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ValueUnitItem GetBodyMassIndex() const;

                    /**
                     * 设置体质指数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bodyMassIndex 体质指数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBodyMassIndex(const ValueUnitItem& _bodyMassIndex);

                    /**
                     * 判断参数 BodyMassIndex 是否已赋值
                     * @return BodyMassIndex 是否已赋值
                     * 
                     */
                    bool BodyMassIndexHasBeenSet() const;

                    /**
                     * 获取腰围
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Waistline 腰围
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ValueUnitItem GetWaistline() const;

                    /**
                     * 设置腰围
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _waistline 腰围
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWaistline(const ValueUnitItem& _waistline);

                    /**
                     * 判断参数 Waistline 是否已赋值
                     * @return Waistline 是否已赋值
                     * 
                     */
                    bool WaistlineHasBeenSet() const;

                    /**
                     * 获取血压
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BloodPressure 血压
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GeneralExaminationVitalSignBloodPressure GetBloodPressure() const;

                    /**
                     * 设置血压
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bloodPressure 血压
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBloodPressure(const GeneralExaminationVitalSignBloodPressure& _bloodPressure);

                    /**
                     * 判断参数 BloodPressure 是否已赋值
                     * @return BloodPressure 是否已赋值
                     * 
                     */
                    bool BloodPressureHasBeenSet() const;

                private:

                    /**
                     * 生命体征总体描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ValueUnitItem m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 体温
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ValueUnitItem m_bodyTemperature;
                    bool m_bodyTemperatureHasBeenSet;

                    /**
                     * 脉率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ValueUnitItem m_pulse;
                    bool m_pulseHasBeenSet;

                    /**
                     * 心率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ValueUnitItem m_heartRate;
                    bool m_heartRateHasBeenSet;

                    /**
                     * 呼吸频率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ValueUnitItem m_breathingRate;
                    bool m_breathingRateHasBeenSet;

                    /**
                     * 身高
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ValueUnitItem m_bodyHeight;
                    bool m_bodyHeightHasBeenSet;

                    /**
                     * 体重
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ValueUnitItem m_bodyWeight;
                    bool m_bodyWeightHasBeenSet;

                    /**
                     * 体质指数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ValueUnitItem m_bodyMassIndex;
                    bool m_bodyMassIndexHasBeenSet;

                    /**
                     * 腰围
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ValueUnitItem m_waistline;
                    bool m_waistlineHasBeenSet;

                    /**
                     * 血压
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GeneralExaminationVitalSignBloodPressure m_bloodPressure;
                    bool m_bloodPressureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_GENERALEXAMINATIONVITALSIGN_H_
