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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_BODYEXAMINATIONBLOCK_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_BODYEXAMINATIONBLOCK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/BodyTemperatureBlock.h>
#include <tencentcloud/mrs/v20200910/model/BloodPressureBlock.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 查体
                */
                class BodyExaminationBlock : public AbstractModel
                {
                public:
                    BodyExaminationBlock();
                    ~BodyExaminationBlock() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取体温
                     * @return BodyTemperature 体温
                     * 
                     */
                    BodyTemperatureBlock GetBodyTemperature() const;

                    /**
                     * 设置体温
                     * @param _bodyTemperature 体温
                     * 
                     */
                    void SetBodyTemperature(const BodyTemperatureBlock& _bodyTemperature);

                    /**
                     * 判断参数 BodyTemperature 是否已赋值
                     * @return BodyTemperature 是否已赋值
                     * 
                     */
                    bool BodyTemperatureHasBeenSet() const;

                    /**
                     * 获取脉搏
                     * @return Pulse 脉搏
                     * 
                     */
                    BodyTemperatureBlock GetPulse() const;

                    /**
                     * 设置脉搏
                     * @param _pulse 脉搏
                     * 
                     */
                    void SetPulse(const BodyTemperatureBlock& _pulse);

                    /**
                     * 判断参数 Pulse 是否已赋值
                     * @return Pulse 是否已赋值
                     * 
                     */
                    bool PulseHasBeenSet() const;

                    /**
                     * 获取呼吸
                     * @return Breathe 呼吸
                     * 
                     */
                    BodyTemperatureBlock GetBreathe() const;

                    /**
                     * 设置呼吸
                     * @param _breathe 呼吸
                     * 
                     */
                    void SetBreathe(const BodyTemperatureBlock& _breathe);

                    /**
                     * 判断参数 Breathe 是否已赋值
                     * @return Breathe 是否已赋值
                     * 
                     */
                    bool BreatheHasBeenSet() const;

                    /**
                     * 获取血压
                     * @return BloodPressure 血压
                     * 
                     */
                    BloodPressureBlock GetBloodPressure() const;

                    /**
                     * 设置血压
                     * @param _bloodPressure 血压
                     * 
                     */
                    void SetBloodPressure(const BloodPressureBlock& _bloodPressure);

                    /**
                     * 判断参数 BloodPressure 是否已赋值
                     * @return BloodPressure 是否已赋值
                     * 
                     */
                    bool BloodPressureHasBeenSet() const;

                private:

                    /**
                     * 体温
                     */
                    BodyTemperatureBlock m_bodyTemperature;
                    bool m_bodyTemperatureHasBeenSet;

                    /**
                     * 脉搏
                     */
                    BodyTemperatureBlock m_pulse;
                    bool m_pulseHasBeenSet;

                    /**
                     * 呼吸
                     */
                    BodyTemperatureBlock m_breathe;
                    bool m_breatheHasBeenSet;

                    /**
                     * 血压
                     */
                    BloodPressureBlock m_bloodPressure;
                    bool m_bloodPressureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_BODYEXAMINATIONBLOCK_H_
