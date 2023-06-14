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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEHEALTHCODEOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEHEALTHCODEOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * RecognizeHealthCodeOCR返回参数结构体
                */
                class RecognizeHealthCodeOCRResponse : public AbstractModel
                {
                public:
                    RecognizeHealthCodeOCRResponse();
                    ~RecognizeHealthCodeOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取持码人姓名，如：王*（允许返回空值）
                     * @return Name 持码人姓名，如：王*（允许返回空值）
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取持码人身份证号，如：11**************01（允许返回空值）
                     * @return IDNumber 持码人身份证号，如：11**************01（允许返回空值）
                     * 
                     */
                    std::string GetIDNumber() const;

                    /**
                     * 判断参数 IDNumber 是否已赋值
                     * @return IDNumber 是否已赋值
                     * 
                     */
                    bool IDNumberHasBeenSet() const;

                    /**
                     * 获取健康码更新时间（允许返回空值）
                     * @return Time 健康码更新时间（允许返回空值）
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取健康码颜色：绿色、黄色、红色（允许返回空值）
                     * @return Color 健康码颜色：绿色、黄色、红色（允许返回空值）
                     * 
                     */
                    std::string GetColor() const;

                    /**
                     * 判断参数 Color 是否已赋值
                     * @return Color 是否已赋值
                     * 
                     */
                    bool ColorHasBeenSet() const;

                    /**
                     * 获取核酸检测间隔时长（允许返回空值）
                     * @return TestingInterval 核酸检测间隔时长（允许返回空值）
                     * 
                     */
                    std::string GetTestingInterval() const;

                    /**
                     * 判断参数 TestingInterval 是否已赋值
                     * @return TestingInterval 是否已赋值
                     * 
                     */
                    bool TestingIntervalHasBeenSet() const;

                    /**
                     * 获取核酸检测结果：阴性、阳性、暂无核酸检测记录（允许返回空值）
                     * @return TestingResult 核酸检测结果：阴性、阳性、暂无核酸检测记录（允许返回空值）
                     * 
                     */
                    std::string GetTestingResult() const;

                    /**
                     * 判断参数 TestingResult 是否已赋值
                     * @return TestingResult 是否已赋值
                     * 
                     */
                    bool TestingResultHasBeenSet() const;

                    /**
                     * 获取核酸检测时间（允许返回空值）
                     * @return TestingTime 核酸检测时间（允许返回空值）
                     * 
                     */
                    std::string GetTestingTime() const;

                    /**
                     * 判断参数 TestingTime 是否已赋值
                     * @return TestingTime 是否已赋值
                     * 
                     */
                    bool TestingTimeHasBeenSet() const;

                    /**
                     * 获取疫苗接种信息，返回接种针数或接种情况（允许返回空值）
                     * @return Vaccination 疫苗接种信息，返回接种针数或接种情况（允许返回空值）
                     * 
                     */
                    std::string GetVaccination() const;

                    /**
                     * 判断参数 Vaccination 是否已赋值
                     * @return Vaccination 是否已赋值
                     * 
                     */
                    bool VaccinationHasBeenSet() const;

                    /**
                     * 获取场所名称（允许返回空值）
                     * @return SpotName 场所名称（允许返回空值）
                     * 
                     */
                    std::string GetSpotName() const;

                    /**
                     * 判断参数 SpotName 是否已赋值
                     * @return SpotName 是否已赋值
                     * 
                     */
                    bool SpotNameHasBeenSet() const;

                    /**
                     * 获取疫苗接种时间
                     * @return VaccinationTime 疫苗接种时间
                     * 
                     */
                    std::string GetVaccinationTime() const;

                    /**
                     * 判断参数 VaccinationTime 是否已赋值
                     * @return VaccinationTime 是否已赋值
                     * 
                     */
                    bool VaccinationTimeHasBeenSet() const;

                private:

                    /**
                     * 持码人姓名，如：王*（允许返回空值）
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 持码人身份证号，如：11**************01（允许返回空值）
                     */
                    std::string m_iDNumber;
                    bool m_iDNumberHasBeenSet;

                    /**
                     * 健康码更新时间（允许返回空值）
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 健康码颜色：绿色、黄色、红色（允许返回空值）
                     */
                    std::string m_color;
                    bool m_colorHasBeenSet;

                    /**
                     * 核酸检测间隔时长（允许返回空值）
                     */
                    std::string m_testingInterval;
                    bool m_testingIntervalHasBeenSet;

                    /**
                     * 核酸检测结果：阴性、阳性、暂无核酸检测记录（允许返回空值）
                     */
                    std::string m_testingResult;
                    bool m_testingResultHasBeenSet;

                    /**
                     * 核酸检测时间（允许返回空值）
                     */
                    std::string m_testingTime;
                    bool m_testingTimeHasBeenSet;

                    /**
                     * 疫苗接种信息，返回接种针数或接种情况（允许返回空值）
                     */
                    std::string m_vaccination;
                    bool m_vaccinationHasBeenSet;

                    /**
                     * 场所名称（允许返回空值）
                     */
                    std::string m_spotName;
                    bool m_spotNameHasBeenSet;

                    /**
                     * 疫苗接种时间
                     */
                    std::string m_vaccinationTime;
                    bool m_vaccinationTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEHEALTHCODEOCRRESPONSE_H_
