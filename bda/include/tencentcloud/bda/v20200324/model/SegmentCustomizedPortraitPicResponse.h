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

#ifndef TENCENTCLOUD_BDA_V20200324_MODEL_SEGMENTCUSTOMIZEDPORTRAITPICRESPONSE_H_
#define TENCENTCLOUD_BDA_V20200324_MODEL_SEGMENTCUSTOMIZEDPORTRAITPICRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bda/v20200324/model/ImageRect.h>


namespace TencentCloud
{
    namespace Bda
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * SegmentCustomizedPortraitPic返回参数结构体
                */
                class SegmentCustomizedPortraitPicResponse : public AbstractModel
                {
                public:
                    SegmentCustomizedPortraitPicResponse();
                    ~SegmentCustomizedPortraitPicResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取根据指定标签分割输出的透明背景人像图片的 base64 数据。
                     * @return PortraitImage 根据指定标签分割输出的透明背景人像图片的 base64 数据。
                     * 
                     */
                    std::string GetPortraitImage() const;

                    /**
                     * 判断参数 PortraitImage 是否已赋值
                     * @return PortraitImage 是否已赋值
                     * 
                     */
                    bool PortraitImageHasBeenSet() const;

                    /**
                     * 获取指定标签处理后的Mask。一个通过 Base64 编码的文件，解码后文件由 Float 型浮点数组成。这些浮点数代表原图从左上角开始的每一行的每一个像素点，每一个浮点数的值是原图相应像素点位于人体轮廓内的置信度（0-1）转化的灰度值（0-255）
                     * @return MaskImage 指定标签处理后的Mask。一个通过 Base64 编码的文件，解码后文件由 Float 型浮点数组成。这些浮点数代表原图从左上角开始的每一行的每一个像素点，每一个浮点数的值是原图相应像素点位于人体轮廓内的置信度（0-1）转化的灰度值（0-255）
                     * 
                     */
                    std::string GetMaskImage() const;

                    /**
                     * 判断参数 MaskImage 是否已赋值
                     * @return MaskImage 是否已赋值
                     * 
                     */
                    bool MaskImageHasBeenSet() const;

                    /**
                     * 获取坐标信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageRects 坐标信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ImageRect> GetImageRects() const;

                    /**
                     * 判断参数 ImageRects 是否已赋值
                     * @return ImageRects 是否已赋值
                     * 
                     */
                    bool ImageRectsHasBeenSet() const;

                private:

                    /**
                     * 根据指定标签分割输出的透明背景人像图片的 base64 数据。
                     */
                    std::string m_portraitImage;
                    bool m_portraitImageHasBeenSet;

                    /**
                     * 指定标签处理后的Mask。一个通过 Base64 编码的文件，解码后文件由 Float 型浮点数组成。这些浮点数代表原图从左上角开始的每一行的每一个像素点，每一个浮点数的值是原图相应像素点位于人体轮廓内的置信度（0-1）转化的灰度值（0-255）
                     */
                    std::string m_maskImage;
                    bool m_maskImageHasBeenSet;

                    /**
                     * 坐标信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ImageRect> m_imageRects;
                    bool m_imageRectsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDA_V20200324_MODEL_SEGMENTCUSTOMIZEDPORTRAITPICRESPONSE_H_
