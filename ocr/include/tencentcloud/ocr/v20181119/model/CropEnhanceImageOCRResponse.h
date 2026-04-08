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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_CROPENHANCEIMAGEOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_CROPENHANCEIMAGEOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * CropEnhanceImageOCR返回参数结构体
                */
                class CropEnhanceImageOCRResponse : public AbstractModel
                {
                public:
                    CropEnhanceImageOCRResponse();
                    ~CropEnhanceImageOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>处理后图的宽</p>
                     * @return CroppedWidth <p>处理后图的宽</p>
                     * 
                     */
                    int64_t GetCroppedWidth() const;

                    /**
                     * 判断参数 CroppedWidth 是否已赋值
                     * @return CroppedWidth 是否已赋值
                     * 
                     */
                    bool CroppedWidthHasBeenSet() const;

                    /**
                     * 获取<p>处理后图的高</p>
                     * @return CroppedHeight <p>处理后图的高</p>
                     * 
                     */
                    int64_t GetCroppedHeight() const;

                    /**
                     * 判断参数 CroppedHeight 是否已赋值
                     * @return CroppedHeight 是否已赋值
                     * 
                     */
                    bool CroppedHeightHasBeenSet() const;

                    /**
                     * 获取<p>图像处理后的jpg图片，base64格式</p>
                     * @return CroppedImage <p>图像处理后的jpg图片，base64格式</p>
                     * 
                     */
                    std::string GetCroppedImage() const;

                    /**
                     * 判断参数 CroppedImage 是否已赋值
                     * @return CroppedImage 是否已赋值
                     * 
                     */
                    bool CroppedImageHasBeenSet() const;

                    /**
                     * 获取<p>切图区域的4个角点坐标, 是个长度为8的数组<br>[0,1,2,3,4,5,6,7]</p><p>(0,1) 左上角坐标<br>(2,3) 右上角坐标<br>(4,5) 右下角坐标<br>(6,7) 左下角坐标</p>
                     * @return Position <p>切图区域的4个角点坐标, 是个长度为8的数组<br>[0,1,2,3,4,5,6,7]</p><p>(0,1) 左上角坐标<br>(2,3) 右上角坐标<br>(4,5) 右下角坐标<br>(6,7) 左下角坐标</p>
                     * 
                     */
                    std::vector<int64_t> GetPosition() const;

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取<p>图像角度，AdjustOrientation =1时生效, 返回值如下  -1: 失败  0、90、180、270</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Angle <p>图像角度，AdjustOrientation =1时生效, 返回值如下  -1: 失败  0、90、180、270</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAngle() const;

                    /**
                     * 判断参数 Angle 是否已赋值
                     * @return Angle 是否已赋值
                     * 
                     */
                    bool AngleHasBeenSet() const;

                private:

                    /**
                     * <p>处理后图的宽</p>
                     */
                    int64_t m_croppedWidth;
                    bool m_croppedWidthHasBeenSet;

                    /**
                     * <p>处理后图的高</p>
                     */
                    int64_t m_croppedHeight;
                    bool m_croppedHeightHasBeenSet;

                    /**
                     * <p>图像处理后的jpg图片，base64格式</p>
                     */
                    std::string m_croppedImage;
                    bool m_croppedImageHasBeenSet;

                    /**
                     * <p>切图区域的4个角点坐标, 是个长度为8的数组<br>[0,1,2,3,4,5,6,7]</p><p>(0,1) 左上角坐标<br>(2,3) 右上角坐标<br>(4,5) 右下角坐标<br>(6,7) 左下角坐标</p>
                     */
                    std::vector<int64_t> m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * <p>图像角度，AdjustOrientation =1时生效, 返回值如下  -1: 失败  0、90、180、270</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_angle;
                    bool m_angleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_CROPENHANCEIMAGEOCRRESPONSE_H_
