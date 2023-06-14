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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_QRCODEPOSITIONOBJ_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_QRCODEPOSITIONOBJ_H_

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
                * 二维码/条形码坐标信息
                */
                class QrcodePositionObj : public AbstractModel
                {
                public:
                    QrcodePositionObj();
                    ~QrcodePositionObj() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取左上顶点坐标（如果是条形码，X和Y都为-1）
                     * @return LeftTop 左上顶点坐标（如果是条形码，X和Y都为-1）
                     * 
                     */
                    Coord GetLeftTop() const;

                    /**
                     * 设置左上顶点坐标（如果是条形码，X和Y都为-1）
                     * @param _leftTop 左上顶点坐标（如果是条形码，X和Y都为-1）
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
                     * 获取右上顶点坐标（如果是条形码，X和Y都为-1）
                     * @return RightTop 右上顶点坐标（如果是条形码，X和Y都为-1）
                     * 
                     */
                    Coord GetRightTop() const;

                    /**
                     * 设置右上顶点坐标（如果是条形码，X和Y都为-1）
                     * @param _rightTop 右上顶点坐标（如果是条形码，X和Y都为-1）
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
                     * 获取右下顶点坐标（如果是条形码，X和Y都为-1）
                     * @return RightBottom 右下顶点坐标（如果是条形码，X和Y都为-1）
                     * 
                     */
                    Coord GetRightBottom() const;

                    /**
                     * 设置右下顶点坐标（如果是条形码，X和Y都为-1）
                     * @param _rightBottom 右下顶点坐标（如果是条形码，X和Y都为-1）
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
                     * 获取左下顶点坐标（如果是条形码，X和Y都为-1）
                     * @return LeftBottom 左下顶点坐标（如果是条形码，X和Y都为-1）
                     * 
                     */
                    Coord GetLeftBottom() const;

                    /**
                     * 设置左下顶点坐标（如果是条形码，X和Y都为-1）
                     * @param _leftBottom 左下顶点坐标（如果是条形码，X和Y都为-1）
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
                     * 左上顶点坐标（如果是条形码，X和Y都为-1）
                     */
                    Coord m_leftTop;
                    bool m_leftTopHasBeenSet;

                    /**
                     * 右上顶点坐标（如果是条形码，X和Y都为-1）
                     */
                    Coord m_rightTop;
                    bool m_rightTopHasBeenSet;

                    /**
                     * 右下顶点坐标（如果是条形码，X和Y都为-1）
                     */
                    Coord m_rightBottom;
                    bool m_rightBottomHasBeenSet;

                    /**
                     * 左下顶点坐标（如果是条形码，X和Y都为-1）
                     */
                    Coord m_leftBottom;
                    bool m_leftBottomHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_QRCODEPOSITIONOBJ_H_
