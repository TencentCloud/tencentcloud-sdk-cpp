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

#ifndef TENCENTCLOUD_BDA_V20200324_MODEL_IMAGERECT_H_
#define TENCENTCLOUD_BDA_V20200324_MODEL_IMAGERECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bda
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 图像坐标信息。
                */
                class ImageRect : public AbstractModel
                {
                public:
                    ImageRect();
                    ~ImageRect() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取左上角横坐标。
                     * @return X 左上角横坐标。
                     * 
                     */
                    int64_t GetX() const;

                    /**
                     * 设置左上角横坐标。
                     * @param _x 左上角横坐标。
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
                     * 获取左上角纵坐标。
                     * @return Y 左上角纵坐标。
                     * 
                     */
                    int64_t GetY() const;

                    /**
                     * 设置左上角纵坐标。
                     * @param _y 左上角纵坐标。
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
                     * 获取人体宽度。
                     * @return Width 人体宽度。
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置人体宽度。
                     * @param _width 人体宽度。
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
                     * 获取人体高度。
                     * @return Height 人体高度。
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置人体高度。
                     * @param _height 人体高度。
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取分割选项名称。
                     * @return Label 分割选项名称。
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置分割选项名称。
                     * @param _label 分割选项名称。
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                private:

                    /**
                     * 左上角横坐标。
                     */
                    int64_t m_x;
                    bool m_xHasBeenSet;

                    /**
                     * 左上角纵坐标。
                     */
                    int64_t m_y;
                    bool m_yHasBeenSet;

                    /**
                     * 人体宽度。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 人体高度。
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 分割选项名称。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDA_V20200324_MODEL_IMAGERECT_H_
