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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_IMAGEMASKFLAGS_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_IMAGEMASKFLAGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 图片脱敏选项
不填默认敏感信息都脱敏
                */
                class ImageMaskFlags : public AbstractModel
                {
                public:
                    ImageMaskFlags();
                    ~ImageMaskFlags() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否对医院信息进行脱敏
                     * @return HospitalFlag 是否对医院信息进行脱敏
                     * 
                     */
                    bool GetHospitalFlag() const;

                    /**
                     * 设置是否对医院信息进行脱敏
                     * @param _hospitalFlag 是否对医院信息进行脱敏
                     * 
                     */
                    void SetHospitalFlag(const bool& _hospitalFlag);

                    /**
                     * 判断参数 HospitalFlag 是否已赋值
                     * @return HospitalFlag 是否已赋值
                     * 
                     */
                    bool HospitalFlagHasBeenSet() const;

                    /**
                     * 获取是否对医生信息进行脱敏
                     * @return DoctorFlag 是否对医生信息进行脱敏
                     * 
                     */
                    bool GetDoctorFlag() const;

                    /**
                     * 设置是否对医生信息进行脱敏
                     * @param _doctorFlag 是否对医生信息进行脱敏
                     * 
                     */
                    void SetDoctorFlag(const bool& _doctorFlag);

                    /**
                     * 判断参数 DoctorFlag 是否已赋值
                     * @return DoctorFlag 是否已赋值
                     * 
                     */
                    bool DoctorFlagHasBeenSet() const;

                    /**
                     * 获取是否对患者信息进行脱敏
                     * @return PatientFlag 是否对患者信息进行脱敏
                     * 
                     */
                    bool GetPatientFlag() const;

                    /**
                     * 设置是否对患者信息进行脱敏
                     * @param _patientFlag 是否对患者信息进行脱敏
                     * 
                     */
                    void SetPatientFlag(const bool& _patientFlag);

                    /**
                     * 判断参数 PatientFlag 是否已赋值
                     * @return PatientFlag 是否已赋值
                     * 
                     */
                    bool PatientFlagHasBeenSet() const;

                    /**
                     * 获取是否对二维码信息进行脱敏
                     * @return BarFlag 是否对二维码信息进行脱敏
                     * 
                     */
                    bool GetBarFlag() const;

                    /**
                     * 设置是否对二维码信息进行脱敏
                     * @param _barFlag 是否对二维码信息进行脱敏
                     * 
                     */
                    void SetBarFlag(const bool& _barFlag);

                    /**
                     * 判断参数 BarFlag 是否已赋值
                     * @return BarFlag 是否已赋值
                     * 
                     */
                    bool BarFlagHasBeenSet() const;

                private:

                    /**
                     * 是否对医院信息进行脱敏
                     */
                    bool m_hospitalFlag;
                    bool m_hospitalFlagHasBeenSet;

                    /**
                     * 是否对医生信息进行脱敏
                     */
                    bool m_doctorFlag;
                    bool m_doctorFlagHasBeenSet;

                    /**
                     * 是否对患者信息进行脱敏
                     */
                    bool m_patientFlag;
                    bool m_patientFlagHasBeenSet;

                    /**
                     * 是否对二维码信息进行脱敏
                     */
                    bool m_barFlag;
                    bool m_barFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_IMAGEMASKFLAGS_H_
