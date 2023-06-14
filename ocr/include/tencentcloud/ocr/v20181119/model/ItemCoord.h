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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_ITEMCOORD_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_ITEMCOORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 文本行在旋转纠正之后的图像中的像素坐标，表示为（左上角x, 左上角y，宽width，高height）
                */
                class ItemCoord : public AbstractModel
                {
                public:
                    ItemCoord();
                    ~ItemCoord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取左上角x
                     * @return X 左上角x
                     * 
                     */
                    int64_t GetX() const;

                    /**
                     * 设置左上角x
                     * @param _x 左上角x
                     * 
                     */
                    void SetX(const int64_t& _x);

                    /**
                     * 判断参数 X 是否已赋值
                     * @return X 是否已赋值
                     * 
                     */
                    bool XHasBeenSet() const;

                    /**
                     * 获取左上角y
                     * @return Y 左上角y
                     * 
                     */
                    int64_t GetY() const;

                    /**
                     * 设置左上角y
                     * @param _y 左上角y
                     * 
                     */
                    void SetY(const int64_t& _y);

                    /**
                     * 判断参数 Y 是否已赋值
                     * @return Y 是否已赋值
                     * 
                     */
                    bool YHasBeenSet() const;

                    /**
                     * 获取宽width
                     * @return Width 宽width
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置宽width
                     * @param _width 宽width
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取高height
                     * @return Height 高height
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置高height
                     * @param _height 高height
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                private:

                    /**
                     * 左上角x
                     */
                    int64_t m_x;
                    bool m_xHasBeenSet;

                    /**
                     * 左上角y
                     */
                    int64_t m_y;
                    bool m_yHasBeenSet;

                    /**
                     * 宽width
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 高height
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_ITEMCOORD_H_
