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
                     * 获取<p>左上角x。</p>
                     * @return X <p>左上角x。</p>
                     * 
                     */
                    int64_t GetX() const;

                    /**
                     * 设置<p>左上角x。</p>
                     * @param _x <p>左上角x。</p>
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
                     * 获取<p>左上角y。</p>
                     * @return Y <p>左上角y。</p>
                     * 
                     */
                    int64_t GetY() const;

                    /**
                     * 设置<p>左上角y。</p>
                     * @param _y <p>左上角y。</p>
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
                     * 获取<p>宽width。</p>
                     * @return Width <p>宽width。</p>
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置<p>宽width。</p>
                     * @param _width <p>宽width。</p>
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
                     * 获取<p>高height。</p>
                     * @return Height <p>高height。</p>
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置<p>高height。</p>
                     * @param _height <p>高height。</p>
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
                     * <p>左上角x。</p>
                     */
                    int64_t m_x;
                    bool m_xHasBeenSet;

                    /**
                     * <p>左上角y。</p>
                     */
                    int64_t m_y;
                    bool m_yHasBeenSet;

                    /**
                     * <p>宽width。</p>
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * <p>高height。</p>
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_ITEMCOORD_H_
