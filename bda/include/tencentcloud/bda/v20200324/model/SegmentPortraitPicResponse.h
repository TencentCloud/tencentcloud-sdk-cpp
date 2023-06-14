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

#ifndef TENCENTCLOUD_BDA_V20200324_MODEL_SEGMENTPORTRAITPICRESPONSE_H_
#define TENCENTCLOUD_BDA_V20200324_MODEL_SEGMENTPORTRAITPICRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * SegmentPortraitPic返回参数结构体
                */
                class SegmentPortraitPicResponse : public AbstractModel
                {
                public:
                    SegmentPortraitPicResponse();
                    ~SegmentPortraitPicResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取处理后的图片 base64 数据，透明背景图。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultImage 处理后的图片 base64 数据，透明背景图。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResultImage() const;

                    /**
                     * 判断参数 ResultImage 是否已赋值
                     * @return ResultImage 是否已赋值
                     * 
                     */
                    bool ResultImageHasBeenSet() const;

                    /**
                     * 获取一个通过 base64 编码的文件，解码后文件由 Float 型浮点数组成。这些浮点数代表原图从左上角开始的每一行的每一个像素点，每一个浮点数的值是原图相应像素点位于人体轮廓内的置信度（0-1）转化的灰度值（0-255）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultMask 一个通过 base64 编码的文件，解码后文件由 Float 型浮点数组成。这些浮点数代表原图从左上角开始的每一行的每一个像素点，每一个浮点数的值是原图相应像素点位于人体轮廓内的置信度（0-1）转化的灰度值（0-255）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResultMask() const;

                    /**
                     * 判断参数 ResultMask 是否已赋值
                     * @return ResultMask 是否已赋值
                     * 
                     */
                    bool ResultMaskHasBeenSet() const;

                    /**
                     * 获取图片是否存在前景。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HasForeground 图片是否存在前景。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetHasForeground() const;

                    /**
                     * 判断参数 HasForeground 是否已赋值
                     * @return HasForeground 是否已赋值
                     * 
                     */
                    bool HasForegroundHasBeenSet() const;

                    /**
                     * 获取支持将处理过的图片 base64 数据，透明背景图以Url的形式返回值，Url有效期为30分钟。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultImageUrl 支持将处理过的图片 base64 数据，透明背景图以Url的形式返回值，Url有效期为30分钟。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResultImageUrl() const;

                    /**
                     * 判断参数 ResultImageUrl 是否已赋值
                     * @return ResultImageUrl 是否已赋值
                     * 
                     */
                    bool ResultImageUrlHasBeenSet() const;

                    /**
                     * 获取一个通过 base64 编码的文件，解码后文件由 Float 型浮点数组成。支持以Url形式的返回值；Url有效期为30分钟。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultMaskUrl 一个通过 base64 编码的文件，解码后文件由 Float 型浮点数组成。支持以Url形式的返回值；Url有效期为30分钟。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResultMaskUrl() const;

                    /**
                     * 判断参数 ResultMaskUrl 是否已赋值
                     * @return ResultMaskUrl 是否已赋值
                     * 
                     */
                    bool ResultMaskUrlHasBeenSet() const;

                private:

                    /**
                     * 处理后的图片 base64 数据，透明背景图。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resultImage;
                    bool m_resultImageHasBeenSet;

                    /**
                     * 一个通过 base64 编码的文件，解码后文件由 Float 型浮点数组成。这些浮点数代表原图从左上角开始的每一行的每一个像素点，每一个浮点数的值是原图相应像素点位于人体轮廓内的置信度（0-1）转化的灰度值（0-255）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resultMask;
                    bool m_resultMaskHasBeenSet;

                    /**
                     * 图片是否存在前景。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_hasForeground;
                    bool m_hasForegroundHasBeenSet;

                    /**
                     * 支持将处理过的图片 base64 数据，透明背景图以Url的形式返回值，Url有效期为30分钟。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resultImageUrl;
                    bool m_resultImageUrlHasBeenSet;

                    /**
                     * 一个通过 base64 编码的文件，解码后文件由 Float 型浮点数组成。支持以Url形式的返回值；Url有效期为30分钟。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resultMaskUrl;
                    bool m_resultMaskUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDA_V20200324_MODEL_SEGMENTPORTRAITPICRESPONSE_H_
