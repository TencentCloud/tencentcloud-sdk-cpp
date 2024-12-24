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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_PHYSICALEXAM_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_PHYSICALEXAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Aca
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 体格检查
                */
                class PhysicalExam : public AbstractModel
                {
                public:
                    PhysicalExam();
                    ~PhysicalExam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取脉搏，单位：次/分
                     * @return Pulse 脉搏，单位：次/分
                     * 
                     */
                    std::string GetPulse() const;

                    /**
                     * 设置脉搏，单位：次/分
                     * @param _pulse 脉搏，单位：次/分
                     * 
                     */
                    void SetPulse(const std::string& _pulse);

                    /**
                     * 判断参数 Pulse 是否已赋值
                     * @return Pulse 是否已赋值
                     * 
                     */
                    bool PulseHasBeenSet() const;

                    /**
                     * 获取呼吸，单位：次/分
                     * @return Breathe 呼吸，单位：次/分
                     * 
                     */
                    std::string GetBreathe() const;

                    /**
                     * 设置呼吸，单位：次/分
                     * @param _breathe 呼吸，单位：次/分
                     * 
                     */
                    void SetBreathe(const std::string& _breathe);

                    /**
                     * 判断参数 Breathe 是否已赋值
                     * @return Breathe 是否已赋值
                     * 
                     */
                    bool BreatheHasBeenSet() const;

                    /**
                     * 获取体重，单位KG
                     * @return Weight 体重，单位KG
                     * 
                     */
                    std::string GetWeight() const;

                    /**
                     * 设置体重，单位KG
                     * @param _weight 体重，单位KG
                     * 
                     */
                    void SetWeight(const std::string& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取体温，单位：℃ 
                     * @return BodyTemperature 体温，单位：℃ 
                     * 
                     */
                    std::string GetBodyTemperature() const;

                    /**
                     * 设置体温，单位：℃ 
                     * @param _bodyTemperature 体温，单位：℃ 
                     * 
                     */
                    void SetBodyTemperature(const std::string& _bodyTemperature);

                    /**
                     * 判断参数 BodyTemperature 是否已赋值
                     * @return BodyTemperature 是否已赋值
                     * 
                     */
                    bool BodyTemperatureHasBeenSet() const;

                    /**
                     * 获取舒张压， 单位：mmHg
                     * @return DiastolicPressure 舒张压， 单位：mmHg
                     * 
                     */
                    std::string GetDiastolicPressure() const;

                    /**
                     * 设置舒张压， 单位：mmHg
                     * @param _diastolicPressure 舒张压， 单位：mmHg
                     * 
                     */
                    void SetDiastolicPressure(const std::string& _diastolicPressure);

                    /**
                     * 判断参数 DiastolicPressure 是否已赋值
                     * @return DiastolicPressure 是否已赋值
                     * 
                     */
                    bool DiastolicPressureHasBeenSet() const;

                    /**
                     * 获取收缩压， 单位：mmHg
                     * @return SystolicPressure 收缩压， 单位：mmHg
                     * 
                     */
                    std::string GetSystolicPressure() const;

                    /**
                     * 设置收缩压， 单位：mmHg
                     * @param _systolicPressure 收缩压， 单位：mmHg
                     * 
                     */
                    void SetSystolicPressure(const std::string& _systolicPressure);

                    /**
                     * 判断参数 SystolicPressure 是否已赋值
                     * @return SystolicPressure 是否已赋值
                     * 
                     */
                    bool SystolicPressureHasBeenSet() const;

                private:

                    /**
                     * 脉搏，单位：次/分
                     */
                    std::string m_pulse;
                    bool m_pulseHasBeenSet;

                    /**
                     * 呼吸，单位：次/分
                     */
                    std::string m_breathe;
                    bool m_breatheHasBeenSet;

                    /**
                     * 体重，单位KG
                     */
                    std::string m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 体温，单位：℃ 
                     */
                    std::string m_bodyTemperature;
                    bool m_bodyTemperatureHasBeenSet;

                    /**
                     * 舒张压， 单位：mmHg
                     */
                    std::string m_diastolicPressure;
                    bool m_diastolicPressureHasBeenSet;

                    /**
                     * 收缩压， 单位：mmHg
                     */
                    std::string m_systolicPressure;
                    bool m_systolicPressureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_PHYSICALEXAM_H_
