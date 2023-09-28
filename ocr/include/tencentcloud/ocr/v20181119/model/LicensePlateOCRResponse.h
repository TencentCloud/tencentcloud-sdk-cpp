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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_LICENSEPLATEOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_LICENSEPLATEOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/Rect.h>
#include <tencentcloud/ocr/v20181119/model/LicensePlateInfo.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * LicensePlateOCR返回参数结构体
                */
                class LicensePlateOCRResponse : public AbstractModel
                {
                public:
                    LicensePlateOCRResponse();
                    ~LicensePlateOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取识别出的车牌号码。
                     * @return Number 识别出的车牌号码。
                     * 
                     */
                    std::string GetNumber() const;

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取置信度，0 - 100 之间。
                     * @return Confidence 置信度，0 - 100 之间。
                     * 
                     */
                    int64_t GetConfidence() const;

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取文本行在原图片中的像素坐标框。
                     * @return Rect 文本行在原图片中的像素坐标框。
                     * 
                     */
                    Rect GetRect() const;

                    /**
                     * 判断参数 Rect 是否已赋值
                     * @return Rect 是否已赋值
                     * 
                     */
                    bool RectHasBeenSet() const;

                    /**
                     * 获取识别出的车牌颜色，目前支持颜色包括 “白”、“黑”、“蓝”、“绿“、“黄”、“黄绿”、“临牌”、“喷漆”、“其它”。
                     * @return Color 识别出的车牌颜色，目前支持颜色包括 “白”、“黑”、“蓝”、“绿“、“黄”、“黄绿”、“临牌”、“喷漆”、“其它”。
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
                     * 获取全部车牌信息。
                     * @return LicensePlateInfos 全部车牌信息。
                     * 
                     */
                    std::vector<LicensePlateInfo> GetLicensePlateInfos() const;

                    /**
                     * 判断参数 LicensePlateInfos 是否已赋值
                     * @return LicensePlateInfos 是否已赋值
                     * 
                     */
                    bool LicensePlateInfosHasBeenSet() const;

                private:

                    /**
                     * 识别出的车牌号码。
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * 置信度，0 - 100 之间。
                     */
                    int64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 文本行在原图片中的像素坐标框。
                     */
                    Rect m_rect;
                    bool m_rectHasBeenSet;

                    /**
                     * 识别出的车牌颜色，目前支持颜色包括 “白”、“黑”、“蓝”、“绿“、“黄”、“黄绿”、“临牌”、“喷漆”、“其它”。
                     */
                    std::string m_color;
                    bool m_colorHasBeenSet;

                    /**
                     * 全部车牌信息。
                     */
                    std::vector<LicensePlateInfo> m_licensePlateInfos;
                    bool m_licensePlateInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_LICENSEPLATEOCRRESPONSE_H_
