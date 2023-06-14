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

#ifndef TENCENTCLOUD_FACEFUSION_V20220927_MODEL_FACEINFO_H_
#define TENCENTCLOUD_FACEFUSION_V20220927_MODEL_FACEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Facefusion
    {
        namespace V20220927
        {
            namespace Model
            {
                /**
                * 人脸信息
                */
                class FaceInfo : public AbstractModel
                {
                public:
                    FaceInfo();
                    ~FaceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取人脸框的横坐标
                     * @return X 人脸框的横坐标
                     * 
                     */
                    int64_t GetX() const;

                    /**
                     * 设置人脸框的横坐标
                     * @param _x 人脸框的横坐标
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
                     * 获取人脸框的纵坐标
                     * @return Y 人脸框的纵坐标
                     * 
                     */
                    int64_t GetY() const;

                    /**
                     * 设置人脸框的纵坐标
                     * @param _y 人脸框的纵坐标
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
                     * 获取人脸框的宽度
                     * @return Width 人脸框的宽度
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置人脸框的宽度
                     * @param _width 人脸框的宽度
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
                     * 获取人脸框的高度
                     * @return Height 人脸框的高度
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置人脸框的高度
                     * @param _height 人脸框的高度
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
                     * 人脸框的横坐标
                     */
                    int64_t m_x;
                    bool m_xHasBeenSet;

                    /**
                     * 人脸框的纵坐标
                     */
                    int64_t m_y;
                    bool m_yHasBeenSet;

                    /**
                     * 人脸框的宽度
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 人脸框的高度
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEFUSION_V20220927_MODEL_FACEINFO_H_
