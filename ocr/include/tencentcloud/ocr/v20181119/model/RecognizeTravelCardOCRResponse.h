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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZETRAVELCARDOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZETRAVELCARDOCRRESPONSE_H_

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
                * RecognizeTravelCardOCR返回参数结构体
                */
                class RecognizeTravelCardOCRResponse : public AbstractModel
                {
                public:
                    RecognizeTravelCardOCRResponse();
                    ~RecognizeTravelCardOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取行程卡更新时间，格式为：XXXX.XX.XX XX:XX:XX
                     * @return Time 行程卡更新时间，格式为：XXXX.XX.XX XX:XX:XX
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
                     * 获取行程卡颜色：绿色、黄色、红色
                     * @return Color 行程卡颜色：绿色、黄色、红色
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
                     * 获取7天内到达或途经的城市（自2022年7月8日起，通信行程卡查询结果的覆盖时间范围由“14天”调整为“7天”）
                     * @return ReachedCity 7天内到达或途经的城市（自2022年7月8日起，通信行程卡查询结果的覆盖时间范围由“14天”调整为“7天”）
                     * 
                     */
                    std::vector<std::string> GetReachedCity() const;

                    /**
                     * 判断参数 ReachedCity 是否已赋值
                     * @return ReachedCity 是否已赋值
                     * 
                     */
                    bool ReachedCityHasBeenSet() const;

                    /**
                     * 获取7天内到达或途径存在中高风险地区的城市（自2022年6月29日起，通信行程卡取消“星号”标记，改字段将返回空值）
                     * @return RiskArea 7天内到达或途径存在中高风险地区的城市（自2022年6月29日起，通信行程卡取消“星号”标记，改字段将返回空值）
                     * 
                     */
                    std::vector<std::string> GetRiskArea() const;

                    /**
                     * 判断参数 RiskArea 是否已赋值
                     * @return RiskArea 是否已赋值
                     * 
                     */
                    bool RiskAreaHasBeenSet() const;

                    /**
                     * 获取电话号码
                     * @return Telephone 电话号码
                     * 
                     */
                    std::string GetTelephone() const;

                    /**
                     * 判断参数 Telephone 是否已赋值
                     * @return Telephone 是否已赋值
                     * 
                     */
                    bool TelephoneHasBeenSet() const;

                private:

                    /**
                     * 行程卡更新时间，格式为：XXXX.XX.XX XX:XX:XX
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 行程卡颜色：绿色、黄色、红色
                     */
                    std::string m_color;
                    bool m_colorHasBeenSet;

                    /**
                     * 7天内到达或途经的城市（自2022年7月8日起，通信行程卡查询结果的覆盖时间范围由“14天”调整为“7天”）
                     */
                    std::vector<std::string> m_reachedCity;
                    bool m_reachedCityHasBeenSet;

                    /**
                     * 7天内到达或途径存在中高风险地区的城市（自2022年6月29日起，通信行程卡取消“星号”标记，改字段将返回空值）
                     */
                    std::vector<std::string> m_riskArea;
                    bool m_riskAreaHasBeenSet;

                    /**
                     * 电话号码
                     */
                    std::string m_telephone;
                    bool m_telephoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZETRAVELCARDOCRRESPONSE_H_
