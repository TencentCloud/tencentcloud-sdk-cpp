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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_GENERALEXAMINATIONVITALSIGNBLOODPRESSURE_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_GENERALEXAMINATIONVITALSIGNBLOODPRESSURE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/BloodPressureItem.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 血压
                */
                class GeneralExaminationVitalSignBloodPressure : public AbstractModel
                {
                public:
                    GeneralExaminationVitalSignBloodPressure();
                    ~GeneralExaminationVitalSignBloodPressure() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取血压
                     * @return Text 血压
                     * 
                     */
                    BloodPressureItem GetText() const;

                    /**
                     * 设置血压
                     * @param _text 血压
                     * 
                     */
                    void SetText(const BloodPressureItem& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取收缩压/舒张压
                     * @return SystolicDiastolicPressure 收缩压/舒张压
                     * 
                     */
                    std::vector<BloodPressureItem> GetSystolicDiastolicPressure() const;

                    /**
                     * 设置收缩压/舒张压
                     * @param _systolicDiastolicPressure 收缩压/舒张压
                     * 
                     */
                    void SetSystolicDiastolicPressure(const std::vector<BloodPressureItem>& _systolicDiastolicPressure);

                    /**
                     * 判断参数 SystolicDiastolicPressure 是否已赋值
                     * @return SystolicDiastolicPressure 是否已赋值
                     * 
                     */
                    bool SystolicDiastolicPressureHasBeenSet() const;

                    /**
                     * 获取收缩压
                     * @return SystolicPressure 收缩压
                     * 
                     */
                    std::vector<BloodPressureItem> GetSystolicPressure() const;

                    /**
                     * 设置收缩压
                     * @param _systolicPressure 收缩压
                     * 
                     */
                    void SetSystolicPressure(const std::vector<BloodPressureItem>& _systolicPressure);

                    /**
                     * 判断参数 SystolicPressure 是否已赋值
                     * @return SystolicPressure 是否已赋值
                     * 
                     */
                    bool SystolicPressureHasBeenSet() const;

                    /**
                     * 获取舒张压
                     * @return DiastolicPressure 舒张压
                     * 
                     */
                    std::vector<BloodPressureItem> GetDiastolicPressure() const;

                    /**
                     * 设置舒张压
                     * @param _diastolicPressure 舒张压
                     * 
                     */
                    void SetDiastolicPressure(const std::vector<BloodPressureItem>& _diastolicPressure);

                    /**
                     * 判断参数 DiastolicPressure 是否已赋值
                     * @return DiastolicPressure 是否已赋值
                     * 
                     */
                    bool DiastolicPressureHasBeenSet() const;

                private:

                    /**
                     * 血压
                     */
                    BloodPressureItem m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 收缩压/舒张压
                     */
                    std::vector<BloodPressureItem> m_systolicDiastolicPressure;
                    bool m_systolicDiastolicPressureHasBeenSet;

                    /**
                     * 收缩压
                     */
                    std::vector<BloodPressureItem> m_systolicPressure;
                    bool m_systolicPressureHasBeenSet;

                    /**
                     * 舒张压
                     */
                    std::vector<BloodPressureItem> m_diastolicPressure;
                    bool m_diastolicPressureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_GENERALEXAMINATIONVITALSIGNBLOODPRESSURE_H_
