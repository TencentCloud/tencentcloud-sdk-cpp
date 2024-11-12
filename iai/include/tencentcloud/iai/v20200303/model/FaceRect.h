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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_FACERECT_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_FACERECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * 检测出的人脸框的位置
                */
                class FaceRect : public AbstractModel
                {
                public:
                    FaceRect();
                    ~FaceRect() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取人脸框左上角横坐标。 
- 人脸框包含人脸五官位置并在此基础上进行一定的扩展，若人脸框超出图片范围，会导致坐标负值。 
- 若需截取完整人脸，可以在完整分completess满足需求的情况下，将负值坐标取0。
                     * @return X 人脸框左上角横坐标。 
- 人脸框包含人脸五官位置并在此基础上进行一定的扩展，若人脸框超出图片范围，会导致坐标负值。 
- 若需截取完整人脸，可以在完整分completess满足需求的情况下，将负值坐标取0。
                     * 
                     */
                    int64_t GetX() const;

                    /**
                     * 设置人脸框左上角横坐标。 
- 人脸框包含人脸五官位置并在此基础上进行一定的扩展，若人脸框超出图片范围，会导致坐标负值。 
- 若需截取完整人脸，可以在完整分completess满足需求的情况下，将负值坐标取0。
                     * @param _x 人脸框左上角横坐标。 
- 人脸框包含人脸五官位置并在此基础上进行一定的扩展，若人脸框超出图片范围，会导致坐标负值。 
- 若需截取完整人脸，可以在完整分completess满足需求的情况下，将负值坐标取0。
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
                     * 获取人脸框左上角纵坐标。 
- 人脸框包含人脸五官位置并在此基础上进行一定的扩展，若人脸框超出图片范围，会导致坐标负值。 
- 若需截取完整人脸，可以在完整分completess满足需求的情况下，将负值坐标取0。
                     * @return Y 人脸框左上角纵坐标。 
- 人脸框包含人脸五官位置并在此基础上进行一定的扩展，若人脸框超出图片范围，会导致坐标负值。 
- 若需截取完整人脸，可以在完整分completess满足需求的情况下，将负值坐标取0。
                     * 
                     */
                    int64_t GetY() const;

                    /**
                     * 设置人脸框左上角纵坐标。 
- 人脸框包含人脸五官位置并在此基础上进行一定的扩展，若人脸框超出图片范围，会导致坐标负值。 
- 若需截取完整人脸，可以在完整分completess满足需求的情况下，将负值坐标取0。
                     * @param _y 人脸框左上角纵坐标。 
- 人脸框包含人脸五官位置并在此基础上进行一定的扩展，若人脸框超出图片范围，会导致坐标负值。 
- 若需截取完整人脸，可以在完整分completess满足需求的情况下，将负值坐标取0。
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
                     * 获取人脸宽度。
                     * @return Width 人脸宽度。
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置人脸宽度。
                     * @param _width 人脸宽度。
                     * 
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取人脸高度。
                     * @return Height 人脸高度。
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置人脸高度。
                     * @param _height 人脸高度。
                     * 
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                private:

                    /**
                     * 人脸框左上角横坐标。 
- 人脸框包含人脸五官位置并在此基础上进行一定的扩展，若人脸框超出图片范围，会导致坐标负值。 
- 若需截取完整人脸，可以在完整分completess满足需求的情况下，将负值坐标取0。
                     */
                    int64_t m_x;
                    bool m_xHasBeenSet;

                    /**
                     * 人脸框左上角纵坐标。 
- 人脸框包含人脸五官位置并在此基础上进行一定的扩展，若人脸框超出图片范围，会导致坐标负值。 
- 若需截取完整人脸，可以在完整分completess满足需求的情况下，将负值坐标取0。
                     */
                    int64_t m_y;
                    bool m_yHasBeenSet;

                    /**
                     * 人脸宽度。
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 人脸高度。
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_FACERECT_H_
