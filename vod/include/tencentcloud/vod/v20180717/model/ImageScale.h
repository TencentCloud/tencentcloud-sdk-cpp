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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_IMAGESCALE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_IMAGESCALE_H_

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
                * 图片缩放处理。
                */
                class ImageScale : public AbstractModel
                {
                public:
                    ImageScale();
                    ~ImageScale() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图片缩放的操作类型。可选模式有：
<li>WidthFirst : 指定图片的宽为 Width ，高度等比缩放。</li>
<li>HeightFirst : 指定图片的高为 Height ，宽度等比缩放。</li>
<li>LongEdgeFirst : 指定图片的长边为 LongEdge ，短边等比缩放。</li>
<li>ShortEdgeFirst : 指定图片的短边为 ShortEdge ，长边等比缩放。</li>
<li>Force : 忽略原图宽高比例，指定图片宽度为 Width，高度为 Height ，强行缩放图片，可能导致目标图片变形。</li>
                     * @return Type 图片缩放的操作类型。可选模式有：
<li>WidthFirst : 指定图片的宽为 Width ，高度等比缩放。</li>
<li>HeightFirst : 指定图片的高为 Height ，宽度等比缩放。</li>
<li>LongEdgeFirst : 指定图片的长边为 LongEdge ，短边等比缩放。</li>
<li>ShortEdgeFirst : 指定图片的短边为 ShortEdge ，长边等比缩放。</li>
<li>Force : 忽略原图宽高比例，指定图片宽度为 Width，高度为 Height ，强行缩放图片，可能导致目标图片变形。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置图片缩放的操作类型。可选模式有：
<li>WidthFirst : 指定图片的宽为 Width ，高度等比缩放。</li>
<li>HeightFirst : 指定图片的高为 Height ，宽度等比缩放。</li>
<li>LongEdgeFirst : 指定图片的长边为 LongEdge ，短边等比缩放。</li>
<li>ShortEdgeFirst : 指定图片的短边为 ShortEdge ，长边等比缩放。</li>
<li>Force : 忽略原图宽高比例，指定图片宽度为 Width，高度为 Height ，强行缩放图片，可能导致目标图片变形。</li>
                     * @param _type 图片缩放的操作类型。可选模式有：
<li>WidthFirst : 指定图片的宽为 Width ，高度等比缩放。</li>
<li>HeightFirst : 指定图片的高为 Height ，宽度等比缩放。</li>
<li>LongEdgeFirst : 指定图片的长边为 LongEdge ，短边等比缩放。</li>
<li>ShortEdgeFirst : 指定图片的短边为 ShortEdge ，长边等比缩放。</li>
<li>Force : 忽略原图宽高比例，指定图片宽度为 Width，高度为 Height ，强行缩放图片，可能导致目标图片变形。</li>
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
                     * 获取输出图片的高度，单位为像素。当 Type 取值为 HeightFirst 或 Force 时此字段有效。
                     * @return Height 输出图片的高度，单位为像素。当 Type 取值为 HeightFirst 或 Force 时此字段有效。
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置输出图片的高度，单位为像素。当 Type 取值为 HeightFirst 或 Force 时此字段有效。
                     * @param _height 输出图片的高度，单位为像素。当 Type 取值为 HeightFirst 或 Force 时此字段有效。
                     * 
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取输出图片的宽度，单位为像素。当 Type 取值为 WidthFirst 或 Force 时此字段有效。
                     * @return Width 输出图片的宽度，单位为像素。当 Type 取值为 WidthFirst 或 Force 时此字段有效。
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置输出图片的宽度，单位为像素。当 Type 取值为 WidthFirst 或 Force 时此字段有效。
                     * @param _width 输出图片的宽度，单位为像素。当 Type 取值为 WidthFirst 或 Force 时此字段有效。
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
                     * 获取输出图片的长边长度，单位为像素。当 Type 取值为 LongEdgeFirst 时此字段有效。
                     * @return LongEdge 输出图片的长边长度，单位为像素。当 Type 取值为 LongEdgeFirst 时此字段有效。
                     * 
                     */
                    uint64_t GetLongEdge() const;

                    /**
                     * 设置输出图片的长边长度，单位为像素。当 Type 取值为 LongEdgeFirst 时此字段有效。
                     * @param _longEdge 输出图片的长边长度，单位为像素。当 Type 取值为 LongEdgeFirst 时此字段有效。
                     * 
                     */
                    void SetLongEdge(const uint64_t& _longEdge);

                    /**
                     * 判断参数 LongEdge 是否已赋值
                     * @return LongEdge 是否已赋值
                     * 
                     */
                    bool LongEdgeHasBeenSet() const;

                    /**
                     * 获取输出图片的短边长度，单位为像素。当 Type 取值为 ShortEdgeFirst 时此字段有效。
                     * @return ShortEdge 输出图片的短边长度，单位为像素。当 Type 取值为 ShortEdgeFirst 时此字段有效。
                     * 
                     */
                    uint64_t GetShortEdge() const;

                    /**
                     * 设置输出图片的短边长度，单位为像素。当 Type 取值为 ShortEdgeFirst 时此字段有效。
                     * @param _shortEdge 输出图片的短边长度，单位为像素。当 Type 取值为 ShortEdgeFirst 时此字段有效。
                     * 
                     */
                    void SetShortEdge(const uint64_t& _shortEdge);

                    /**
                     * 判断参数 ShortEdge 是否已赋值
                     * @return ShortEdge 是否已赋值
                     * 
                     */
                    bool ShortEdgeHasBeenSet() const;

                private:

                    /**
                     * 图片缩放的操作类型。可选模式有：
<li>WidthFirst : 指定图片的宽为 Width ，高度等比缩放。</li>
<li>HeightFirst : 指定图片的高为 Height ，宽度等比缩放。</li>
<li>LongEdgeFirst : 指定图片的长边为 LongEdge ，短边等比缩放。</li>
<li>ShortEdgeFirst : 指定图片的短边为 ShortEdge ，长边等比缩放。</li>
<li>Force : 忽略原图宽高比例，指定图片宽度为 Width，高度为 Height ，强行缩放图片，可能导致目标图片变形。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 输出图片的高度，单位为像素。当 Type 取值为 HeightFirst 或 Force 时此字段有效。
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 输出图片的宽度，单位为像素。当 Type 取值为 WidthFirst 或 Force 时此字段有效。
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 输出图片的长边长度，单位为像素。当 Type 取值为 LongEdgeFirst 时此字段有效。
                     */
                    uint64_t m_longEdge;
                    bool m_longEdgeHasBeenSet;

                    /**
                     * 输出图片的短边长度，单位为像素。当 Type 取值为 ShortEdgeFirst 时此字段有效。
                     */
                    uint64_t m_shortEdge;
                    bool m_shortEdgeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IMAGESCALE_H_
