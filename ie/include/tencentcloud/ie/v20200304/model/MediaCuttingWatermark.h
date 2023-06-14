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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_MEDIACUTTINGWATERMARK_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_MEDIACUTTINGWATERMARK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/MediaCuttingWatermarkImage.h>
#include <tencentcloud/ie/v20200304/model/MediaCuttingWatermarkText.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 媒体剪切水印信息。
                */
                class MediaCuttingWatermark : public AbstractModel
                {
                public:
                    MediaCuttingWatermark();
                    ~MediaCuttingWatermark() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取水印类型，可选值：
<li>Image：图像水印；</li>
<li>Text：文字水印。</li>
                     * @return Type 水印类型，可选值：
<li>Image：图像水印；</li>
<li>Text：文字水印。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置水印类型，可选值：
<li>Image：图像水印；</li>
<li>Text：文字水印。</li>
                     * @param _type 水印类型，可选值：
<li>Image：图像水印；</li>
<li>Text：文字水印。</li>
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
                     * 获取图像水印信息，当 Type=Image 时必选。
                     * @return Image 图像水印信息，当 Type=Image 时必选。
                     * 
                     */
                    MediaCuttingWatermarkImage GetImage() const;

                    /**
                     * 设置图像水印信息，当 Type=Image 时必选。
                     * @param _image 图像水印信息，当 Type=Image 时必选。
                     * 
                     */
                    void SetImage(const MediaCuttingWatermarkImage& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取文字水印信息，当 Type=Text 时必选。
                     * @return Text 文字水印信息，当 Type=Text 时必选。
                     * 
                     */
                    MediaCuttingWatermarkText GetText() const;

                    /**
                     * 设置文字水印信息，当 Type=Text 时必选。
                     * @param _text 文字水印信息，当 Type=Text 时必选。
                     * 
                     */
                    void SetText(const MediaCuttingWatermarkText& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                private:

                    /**
                     * 水印类型，可选值：
<li>Image：图像水印；</li>
<li>Text：文字水印。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 图像水印信息，当 Type=Image 时必选。
                     */
                    MediaCuttingWatermarkImage m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 文字水印信息，当 Type=Text 时必选。
                     */
                    MediaCuttingWatermarkText m_text;
                    bool m_textHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_MEDIACUTTINGWATERMARK_H_
