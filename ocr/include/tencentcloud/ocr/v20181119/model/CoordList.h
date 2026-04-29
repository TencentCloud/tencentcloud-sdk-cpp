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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_COORDLIST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_COORDLIST_H_

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
                * 坐标数组
                */
                class CoordList : public AbstractModel
                {
                public:
                    CoordList();
                    ~CoordList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>左上角坐标。</p>
                     * @return TopLeft <p>左上角坐标。</p>
                     * 
                     */
                    Coord GetTopLeft() const;

                    /**
                     * 设置<p>左上角坐标。</p>
                     * @param _topLeft <p>左上角坐标。</p>
                     * 
                     */
                    void SetTopLeft(const Coord& _topLeft);

                    /**
                     * 判断参数 TopLeft 是否已赋值
                     * @return TopLeft 是否已赋值
                     * 
                     */
                    bool TopLeftHasBeenSet() const;

                    /**
                     * 获取<p>右上角坐标。</p>
                     * @return TopRight <p>右上角坐标。</p>
                     * 
                     */
                    Coord GetTopRight() const;

                    /**
                     * 设置<p>右上角坐标。</p>
                     * @param _topRight <p>右上角坐标。</p>
                     * 
                     */
                    void SetTopRight(const Coord& _topRight);

                    /**
                     * 判断参数 TopRight 是否已赋值
                     * @return TopRight 是否已赋值
                     * 
                     */
                    bool TopRightHasBeenSet() const;

                    /**
                     * 获取<p>左下角坐标。</p>
                     * @return BottomLeft <p>左下角坐标。</p>
                     * 
                     */
                    Coord GetBottomLeft() const;

                    /**
                     * 设置<p>左下角坐标。</p>
                     * @param _bottomLeft <p>左下角坐标。</p>
                     * 
                     */
                    void SetBottomLeft(const Coord& _bottomLeft);

                    /**
                     * 判断参数 BottomLeft 是否已赋值
                     * @return BottomLeft 是否已赋值
                     * 
                     */
                    bool BottomLeftHasBeenSet() const;

                    /**
                     * 获取<p>右下角坐标。</p>
                     * @return BottomRight <p>右下角坐标。</p>
                     * 
                     */
                    Coord GetBottomRight() const;

                    /**
                     * 设置<p>右下角坐标。</p>
                     * @param _bottomRight <p>右下角坐标。</p>
                     * 
                     */
                    void SetBottomRight(const Coord& _bottomRight);

                    /**
                     * 判断参数 BottomRight 是否已赋值
                     * @return BottomRight 是否已赋值
                     * 
                     */
                    bool BottomRightHasBeenSet() const;

                private:

                    /**
                     * <p>左上角坐标。</p>
                     */
                    Coord m_topLeft;
                    bool m_topLeftHasBeenSet;

                    /**
                     * <p>右上角坐标。</p>
                     */
                    Coord m_topRight;
                    bool m_topRightHasBeenSet;

                    /**
                     * <p>左下角坐标。</p>
                     */
                    Coord m_bottomLeft;
                    bool m_bottomLeftHasBeenSet;

                    /**
                     * <p>右下角坐标。</p>
                     */
                    Coord m_bottomRight;
                    bool m_bottomRightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_COORDLIST_H_
