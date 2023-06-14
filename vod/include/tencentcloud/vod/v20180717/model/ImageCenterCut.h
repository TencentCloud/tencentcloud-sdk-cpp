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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_IMAGECENTERCUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_IMAGECENTERCUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 图片中心裁剪处理。
                */
                class ImageCenterCut : public AbstractModel
                {
                public:
                    ImageCenterCut();
                    ~ImageCenterCut() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图片的裁剪模式，可选 Circle 和 Rectangle。
<li>Circle ： 内切圆裁剪，输出图片半径为 Radius。</li>
<li>Rectangle ： 矩形裁剪，输出图片宽为 Width ， 高为 Height。</li>
                     * @return Type 图片的裁剪模式，可选 Circle 和 Rectangle。
<li>Circle ： 内切圆裁剪，输出图片半径为 Radius。</li>
<li>Rectangle ： 矩形裁剪，输出图片宽为 Width ， 高为 Height。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置图片的裁剪模式，可选 Circle 和 Rectangle。
<li>Circle ： 内切圆裁剪，输出图片半径为 Radius。</li>
<li>Rectangle ： 矩形裁剪，输出图片宽为 Width ， 高为 Height。</li>
                     * @param _type 图片的裁剪模式，可选 Circle 和 Rectangle。
<li>Circle ： 内切圆裁剪，输出图片半径为 Radius。</li>
<li>Rectangle ： 矩形裁剪，输出图片宽为 Width ， 高为 Height。</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取输出图片的宽度，单位为像素，当 Type 取值为 Rectangle 时有效。
                     * @return Width 输出图片的宽度，单位为像素，当 Type 取值为 Rectangle 时有效。
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置输出图片的宽度，单位为像素，当 Type 取值为 Rectangle 时有效。
                     * @param _width 输出图片的宽度，单位为像素，当 Type 取值为 Rectangle 时有效。
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
                     * 获取输出图片的高度，单位为像素，当 Type 取值为 Rectangle 时有效。
                     * @return Height 输出图片的高度，单位为像素，当 Type 取值为 Rectangle 时有效。
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置输出图片的高度，单位为像素，当 Type 取值为 Rectangle 时有效。
                     * @param _height 输出图片的高度，单位为像素，当 Type 取值为 Rectangle 时有效。
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
                     * 获取输出图片的半径，单位为像素，当 Type 取值为 Circle 时有效。
                     * @return Radius 输出图片的半径，单位为像素，当 Type 取值为 Circle 时有效。
                     * 
                     */
                    int64_t GetRadius() const;

                    /**
                     * 设置输出图片的半径，单位为像素，当 Type 取值为 Circle 时有效。
                     * @param _radius 输出图片的半径，单位为像素，当 Type 取值为 Circle 时有效。
                     * 
                     */
                    void SetRadius(const int64_t& _radius);

                    /**
                     * 判断参数 Radius 是否已赋值
                     * @return Radius 是否已赋值
                     * 
                     */
                    bool RadiusHasBeenSet() const;

                private:

                    /**
                     * 图片的裁剪模式，可选 Circle 和 Rectangle。
<li>Circle ： 内切圆裁剪，输出图片半径为 Radius。</li>
<li>Rectangle ： 矩形裁剪，输出图片宽为 Width ， 高为 Height。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 输出图片的宽度，单位为像素，当 Type 取值为 Rectangle 时有效。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 输出图片的高度，单位为像素，当 Type 取值为 Rectangle 时有效。
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 输出图片的半径，单位为像素，当 Type 取值为 Circle 时有效。
                     */
                    int64_t m_radius;
                    bool m_radiusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IMAGECENTERCUT_H_
