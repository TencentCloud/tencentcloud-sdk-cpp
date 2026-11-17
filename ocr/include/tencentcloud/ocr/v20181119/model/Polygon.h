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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_POLYGON_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_POLYGON_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/Coord.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 文本的坐标，以四个顶点坐标表示
注意：此字段可能返回 null，表示取不到有效值
                */
                class Polygon : public AbstractModel
                {
                public:
                    Polygon();
                    ~Polygon() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>左上顶点坐标</p>
                     * @return LeftTop <p>左上顶点坐标</p>
                     * 
                     */
                    Coord GetLeftTop() const;

                    /**
                     * 设置<p>左上顶点坐标</p>
                     * @param _leftTop <p>左上顶点坐标</p>
                     * 
                     */
                    void SetLeftTop(const Coord& _leftTop);

                    /**
                     * 判断参数 LeftTop 是否已赋值
                     * @return LeftTop 是否已赋值
                     * 
                     */
                    bool LeftTopHasBeenSet() const;

                    /**
                     * 获取<p>右上顶点坐标</p>
                     * @return RightTop <p>右上顶点坐标</p>
                     * 
                     */
                    Coord GetRightTop() const;

                    /**
                     * 设置<p>右上顶点坐标</p>
                     * @param _rightTop <p>右上顶点坐标</p>
                     * 
                     */
                    void SetRightTop(const Coord& _rightTop);

                    /**
                     * 判断参数 RightTop 是否已赋值
                     * @return RightTop 是否已赋值
                     * 
                     */
                    bool RightTopHasBeenSet() const;

                    /**
                     * 获取<p>右下顶点坐标</p>
                     * @return RightBottom <p>右下顶点坐标</p>
                     * 
                     */
                    Coord GetRightBottom() const;

                    /**
                     * 设置<p>右下顶点坐标</p>
                     * @param _rightBottom <p>右下顶点坐标</p>
                     * 
                     */
                    void SetRightBottom(const Coord& _rightBottom);

                    /**
                     * 判断参数 RightBottom 是否已赋值
                     * @return RightBottom 是否已赋值
                     * 
                     */
                    bool RightBottomHasBeenSet() const;

                    /**
                     * 获取<p>左下顶点坐标</p>
                     * @return LeftBottom <p>左下顶点坐标</p>
                     * 
                     */
                    Coord GetLeftBottom() const;

                    /**
                     * 设置<p>左下顶点坐标</p>
                     * @param _leftBottom <p>左下顶点坐标</p>
                     * 
                     */
                    void SetLeftBottom(const Coord& _leftBottom);

                    /**
                     * 判断参数 LeftBottom 是否已赋值
                     * @return LeftBottom 是否已赋值
                     * 
                     */
                    bool LeftBottomHasBeenSet() const;

                private:

                    /**
                     * <p>左上顶点坐标</p>
                     */
                    Coord m_leftTop;
                    bool m_leftTopHasBeenSet;

                    /**
                     * <p>右上顶点坐标</p>
                     */
                    Coord m_rightTop;
                    bool m_rightTopHasBeenSet;

                    /**
                     * <p>右下顶点坐标</p>
                     */
                    Coord m_rightBottom;
                    bool m_rightBottomHasBeenSet;

                    /**
                     * <p>左下顶点坐标</p>
                     */
                    Coord m_leftBottom;
                    bool m_leftBottomHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_POLYGON_H_
