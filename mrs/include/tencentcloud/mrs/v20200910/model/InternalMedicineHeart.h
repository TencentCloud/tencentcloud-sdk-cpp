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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_INTERNALMEDICINEHEART_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_INTERNALMEDICINEHEART_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/KeyValueItem.h>
#include <tencentcloud/mrs/v20200910/model/ValueUnitItem.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 体检报告-内科-心脏
                */
                class InternalMedicineHeart : public AbstractModel
                {
                public:
                    InternalMedicineHeart();
                    ~InternalMedicineHeart() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取心脏总体描述
                     * @return Text 心脏总体描述
                     * 
                     */
                    KeyValueItem GetText() const;

                    /**
                     * 设置心脏总体描述
                     * @param _text 心脏总体描述
                     * 
                     */
                    void SetText(const KeyValueItem& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取心律
                     * @return HeartRhythm 心律
                     * 
                     */
                    KeyValueItem GetHeartRhythm() const;

                    /**
                     * 设置心律
                     * @param _heartRhythm 心律
                     * 
                     */
                    void SetHeartRhythm(const KeyValueItem& _heartRhythm);

                    /**
                     * 判断参数 HeartRhythm 是否已赋值
                     * @return HeartRhythm 是否已赋值
                     * 
                     */
                    bool HeartRhythmHasBeenSet() const;

                    /**
                     * 获取心率
                     * @return HeartRate 心率
                     * 
                     */
                    ValueUnitItem GetHeartRate() const;

                    /**
                     * 设置心率
                     * @param _heartRate 心率
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
                     * 获取心脏听诊
                     * @return HeartAuscultation 心脏听诊
                     * 
                     */
                    KeyValueItem GetHeartAuscultation() const;

                    /**
                     * 设置心脏听诊
                     * @param _heartAuscultation 心脏听诊
                     * 
                     */
                    void SetHeartAuscultation(const KeyValueItem& _heartAuscultation);

                    /**
                     * 判断参数 HeartAuscultation 是否已赋值
                     * @return HeartAuscultation 是否已赋值
                     * 
                     */
                    bool HeartAuscultationHasBeenSet() const;

                private:

                    /**
                     * 心脏总体描述
                     */
                    KeyValueItem m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 心律
                     */
                    KeyValueItem m_heartRhythm;
                    bool m_heartRhythmHasBeenSet;

                    /**
                     * 心率
                     */
                    ValueUnitItem m_heartRate;
                    bool m_heartRateHasBeenSet;

                    /**
                     * 心脏听诊
                     */
                    KeyValueItem m_heartAuscultation;
                    bool m_heartAuscultationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_INTERNALMEDICINEHEART_H_
