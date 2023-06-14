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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEMEDICALINVOICEOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEMEDICALINVOICEOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/MedicalInvoiceInfo.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * RecognizeMedicalInvoiceOCR返回参数结构体
                */
                class RecognizeMedicalInvoiceOCRResponse : public AbstractModel
                {
                public:
                    RecognizeMedicalInvoiceOCRResponse();
                    ~RecognizeMedicalInvoiceOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取识别出的字段信息
                     * @return MedicalInvoiceInfos 识别出的字段信息
                     * 
                     */
                    std::vector<MedicalInvoiceInfo> GetMedicalInvoiceInfos() const;

                    /**
                     * 判断参数 MedicalInvoiceInfos 是否已赋值
                     * @return MedicalInvoiceInfos 是否已赋值
                     * 
                     */
                    bool MedicalInvoiceInfosHasBeenSet() const;

                    /**
                     * 获取图片旋转角度（角度制），文本的水平方向为0°，顺时针为正，逆时针为负。
                     * @return Angle 图片旋转角度（角度制），文本的水平方向为0°，顺时针为正，逆时针为负。
                     * 
                     */
                    double GetAngle() const;

                    /**
                     * 判断参数 Angle 是否已赋值
                     * @return Angle 是否已赋值
                     * 
                     */
                    bool AngleHasBeenSet() const;

                private:

                    /**
                     * 识别出的字段信息
                     */
                    std::vector<MedicalInvoiceInfo> m_medicalInvoiceInfos;
                    bool m_medicalInvoiceInfosHasBeenSet;

                    /**
                     * 图片旋转角度（角度制），文本的水平方向为0°，顺时针为正，逆时针为负。
                     */
                    double m_angle;
                    bool m_angleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEMEDICALINVOICEOCRRESPONSE_H_
