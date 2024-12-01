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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_OTHERINFO_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_OTHERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/SurgeryAttr.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 其他信息
                */
                class OtherInfo : public AbstractModel
                {
                public:
                    OtherInfo();
                    ~OtherInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取麻醉方法
                     * @return Anesthesia 麻醉方法
                     * 
                     */
                    SurgeryAttr GetAnesthesia() const;

                    /**
                     * 设置麻醉方法
                     * @param _anesthesia 麻醉方法
                     * 
                     */
                    void SetAnesthesia(const SurgeryAttr& _anesthesia);

                    /**
                     * 判断参数 Anesthesia 是否已赋值
                     * @return Anesthesia 是否已赋值
                     * 
                     */
                    bool AnesthesiaHasBeenSet() const;

                    /**
                     * 获取术中出血
                     * @return BloodLoss 术中出血
                     * 
                     */
                    SurgeryAttr GetBloodLoss() const;

                    /**
                     * 设置术中出血
                     * @param _bloodLoss 术中出血
                     * 
                     */
                    void SetBloodLoss(const SurgeryAttr& _bloodLoss);

                    /**
                     * 判断参数 BloodLoss 是否已赋值
                     * @return BloodLoss 是否已赋值
                     * 
                     */
                    bool BloodLossHasBeenSet() const;

                    /**
                     * 获取输血
                     * @return BloodTransfusion 输血
                     * 
                     */
                    SurgeryAttr GetBloodTransfusion() const;

                    /**
                     * 设置输血
                     * @param _bloodTransfusion 输血
                     * 
                     */
                    void SetBloodTransfusion(const SurgeryAttr& _bloodTransfusion);

                    /**
                     * 判断参数 BloodTransfusion 是否已赋值
                     * @return BloodTransfusion 是否已赋值
                     * 
                     */
                    bool BloodTransfusionHasBeenSet() const;

                    /**
                     * 获取手术用时
                     * @return Duration 手术用时
                     * 
                     */
                    SurgeryAttr GetDuration() const;

                    /**
                     * 设置手术用时
                     * @param _duration 手术用时
                     * 
                     */
                    void SetDuration(const SurgeryAttr& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取手术开始时间
                     * @return EndTime 手术开始时间
                     * 
                     */
                    SurgeryAttr GetEndTime() const;

                    /**
                     * 设置手术开始时间
                     * @param _endTime 手术开始时间
                     * 
                     */
                    void SetEndTime(const SurgeryAttr& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取手术结束时间
                     * @return StartTime 手术结束时间
                     * 
                     */
                    SurgeryAttr GetStartTime() const;

                    /**
                     * 设置手术结束时间
                     * @param _startTime 手术结束时间
                     * 
                     */
                    void SetStartTime(const SurgeryAttr& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                private:

                    /**
                     * 麻醉方法
                     */
                    SurgeryAttr m_anesthesia;
                    bool m_anesthesiaHasBeenSet;

                    /**
                     * 术中出血
                     */
                    SurgeryAttr m_bloodLoss;
                    bool m_bloodLossHasBeenSet;

                    /**
                     * 输血
                     */
                    SurgeryAttr m_bloodTransfusion;
                    bool m_bloodTransfusionHasBeenSet;

                    /**
                     * 手术用时
                     */
                    SurgeryAttr m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 手术开始时间
                     */
                    SurgeryAttr m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 手术结束时间
                     */
                    SurgeryAttr m_startTime;
                    bool m_startTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_OTHERINFO_H_
