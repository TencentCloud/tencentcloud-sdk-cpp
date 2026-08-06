/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_LICENSEPLATEINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_LICENSEPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/Rect.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 全部车牌信息
                */
                class LicensePlateInfo : public AbstractModel
                {
                public:
                    LicensePlateInfo();
                    ~LicensePlateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>识别出的车牌号码。</p>
                     * @return Number <p>识别出的车牌号码。</p>
                     * 
                     */
                    std::string GetNumber() const;

                    /**
                     * 设置<p>识别出的车牌号码。</p>
                     * @param _number <p>识别出的车牌号码。</p>
                     * 
                     */
                    void SetNumber(const std::string& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取<p>置信度，0 - 100 之间。</p>
                     * @return Confidence <p>置信度，0 - 100 之间。</p>
                     * 
                     */
                    int64_t GetConfidence() const;

                    /**
                     * 设置<p>置信度，0 - 100 之间。</p>
                     * @param _confidence <p>置信度，0 - 100 之间。</p>
                     * 
                     */
                    void SetConfidence(const int64_t& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取<p>文本行在原图片中的像素坐标框。</p>
                     * @return Rect <p>文本行在原图片中的像素坐标框。</p>
                     * 
                     */
                    Rect GetRect() const;

                    /**
                     * 设置<p>文本行在原图片中的像素坐标框。</p>
                     * @param _rect <p>文本行在原图片中的像素坐标框。</p>
                     * 
                     */
                    void SetRect(const Rect& _rect);

                    /**
                     * 判断参数 Rect 是否已赋值
                     * @return Rect 是否已赋值
                     * 
                     */
                    bool RectHasBeenSet() const;

                    /**
                     * 获取<p>识别出的车牌颜色，目前支持颜色包括 “白”、“黑”、“蓝”、“绿“、“黄”、“黄绿”、“临牌”、“喷漆”、“其它”。</p>
                     * @return Color <p>识别出的车牌颜色，目前支持颜色包括 “白”、“黑”、“蓝”、“绿“、“黄”、“黄绿”、“临牌”、“喷漆”、“其它”。</p>
                     * 
                     */
                    std::string GetColor() const;

                    /**
                     * 设置<p>识别出的车牌颜色，目前支持颜色包括 “白”、“黑”、“蓝”、“绿“、“黄”、“黄绿”、“临牌”、“喷漆”、“其它”。</p>
                     * @param _color <p>识别出的车牌颜色，目前支持颜色包括 “白”、“黑”、“蓝”、“绿“、“黄”、“黄绿”、“临牌”、“喷漆”、“其它”。</p>
                     * 
                     */
                    void SetColor(const std::string& _color);

                    /**
                     * 判断参数 Color 是否已赋值
                     * @return Color 是否已赋值
                     * 
                     */
                    bool ColorHasBeenSet() const;

                    /**
                     * 获取<p>车牌类别， 如： 标准实体车牌、非标准实体车牌、临牌、喷漆车牌</p>
                     * @return LicensePlateCategory <p>车牌类别， 如： 标准实体车牌、非标准实体车牌、临牌、喷漆车牌</p>
                     * 
                     */
                    std::string GetLicensePlateCategory() const;

                    /**
                     * 设置<p>车牌类别， 如： 标准实体车牌、非标准实体车牌、临牌、喷漆车牌</p>
                     * @param _licensePlateCategory <p>车牌类别， 如： 标准实体车牌、非标准实体车牌、临牌、喷漆车牌</p>
                     * 
                     */
                    void SetLicensePlateCategory(const std::string& _licensePlateCategory);

                    /**
                     * 判断参数 LicensePlateCategory 是否已赋值
                     * @return LicensePlateCategory 是否已赋值
                     * 
                     */
                    bool LicensePlateCategoryHasBeenSet() const;

                private:

                    /**
                     * <p>识别出的车牌号码。</p>
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * <p>置信度，0 - 100 之间。</p>
                     */
                    int64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * <p>文本行在原图片中的像素坐标框。</p>
                     */
                    Rect m_rect;
                    bool m_rectHasBeenSet;

                    /**
                     * <p>识别出的车牌颜色，目前支持颜色包括 “白”、“黑”、“蓝”、“绿“、“黄”、“黄绿”、“临牌”、“喷漆”、“其它”。</p>
                     */
                    std::string m_color;
                    bool m_colorHasBeenSet;

                    /**
                     * <p>车牌类别， 如： 标准实体车牌、非标准实体车牌、临牌、喷漆车牌</p>
                     */
                    std::string m_licensePlateCategory;
                    bool m_licensePlateCategoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_LICENSEPLATEINFO_H_
