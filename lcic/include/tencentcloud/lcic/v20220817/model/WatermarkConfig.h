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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_WATERMARKCONFIG_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_WATERMARKCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * 水印配置
                */
                class WatermarkConfig : public AbstractModel
                {
                public:
                    WatermarkConfig();
                    ~WatermarkConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取水印图片的url
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Url 水印图片的url
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置水印图片的url
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Url 水印图片的url
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取水印宽。为比例值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Width 水印宽。为比例值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetWidth() const;

                    /**
                     * 设置水印宽。为比例值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Width 水印宽。为比例值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetWidth(const double& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取水印高。为比例值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Height 水印高。为比例值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetHeight() const;

                    /**
                     * 设置水印高。为比例值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Height 水印高。为比例值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHeight(const double& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取水印X偏移, 取值:0-100, 表示区域X方向的百分比。比如50，则表示位于X轴中间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LocationX 水印X偏移, 取值:0-100, 表示区域X方向的百分比。比如50，则表示位于X轴中间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetLocationX() const;

                    /**
                     * 设置水印X偏移, 取值:0-100, 表示区域X方向的百分比。比如50，则表示位于X轴中间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LocationX 水印X偏移, 取值:0-100, 表示区域X方向的百分比。比如50，则表示位于X轴中间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLocationX(const double& _locationX);

                    /**
                     * 判断参数 LocationX 是否已赋值
                     * @return LocationX 是否已赋值
                     */
                    bool LocationXHasBeenSet() const;

                    /**
                     * 获取水印Y偏移, 取值:0-100, 表示区域Y方向的百分比。比如50，则表示位于Y轴中间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LocationY 水印Y偏移, 取值:0-100, 表示区域Y方向的百分比。比如50，则表示位于Y轴中间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetLocationY() const;

                    /**
                     * 设置水印Y偏移, 取值:0-100, 表示区域Y方向的百分比。比如50，则表示位于Y轴中间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LocationY 水印Y偏移, 取值:0-100, 表示区域Y方向的百分比。比如50，则表示位于Y轴中间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLocationY(const double& _locationY);

                    /**
                     * 判断参数 LocationY 是否已赋值
                     * @return LocationY 是否已赋值
                     */
                    bool LocationYHasBeenSet() const;

                private:

                    /**
                     * 水印图片的url
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 水印宽。为比例值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 水印高。为比例值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 水印X偏移, 取值:0-100, 表示区域X方向的百分比。比如50，则表示位于X轴中间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_locationX;
                    bool m_locationXHasBeenSet;

                    /**
                     * 水印Y偏移, 取值:0-100, 表示区域Y方向的百分比。比如50，则表示位于Y轴中间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_locationY;
                    bool m_locationYHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_WATERMARKCONFIG_H_
