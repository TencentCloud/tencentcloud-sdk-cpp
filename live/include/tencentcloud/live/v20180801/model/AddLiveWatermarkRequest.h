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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_ADDLIVEWATERMARKREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_ADDLIVEWATERMARKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * AddLiveWatermark请求参数结构体
                */
                class AddLiveWatermarkRequest : public AbstractModel
                {
                public:
                    AddLiveWatermarkRequest();
                    ~AddLiveWatermarkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取水印图片url。
                     * @return PictureUrl 水印图片url。
                     */
                    std::string GetPictureUrl() const;

                    /**
                     * 设置水印图片url。
                     * @param PictureUrl 水印图片url。
                     */
                    void SetPictureUrl(const std::string& _pictureUrl);

                    /**
                     * 判断参数 PictureUrl 是否已赋值
                     * @return PictureUrl 是否已赋值
                     */
                    bool PictureUrlHasBeenSet() const;

                    /**
                     * 获取水印名称。
                     * @return WatermarkName 水印名称。
                     */
                    std::string GetWatermarkName() const;

                    /**
                     * 设置水印名称。
                     * @param WatermarkName 水印名称。
                     */
                    void SetWatermarkName(const std::string& _watermarkName);

                    /**
                     * 判断参数 WatermarkName 是否已赋值
                     * @return WatermarkName 是否已赋值
                     */
                    bool WatermarkNameHasBeenSet() const;

                    /**
                     * 获取显示位置,X轴偏移。
                     * @return XPosition 显示位置,X轴偏移。
                     */
                    int64_t GetXPosition() const;

                    /**
                     * 设置显示位置,X轴偏移。
                     * @param XPosition 显示位置,X轴偏移。
                     */
                    void SetXPosition(const int64_t& _xPosition);

                    /**
                     * 判断参数 XPosition 是否已赋值
                     * @return XPosition 是否已赋值
                     */
                    bool XPositionHasBeenSet() const;

                    /**
                     * 获取显示位置,Y轴偏移。
                     * @return YPosition 显示位置,Y轴偏移。
                     */
                    int64_t GetYPosition() const;

                    /**
                     * 设置显示位置,Y轴偏移。
                     * @param YPosition 显示位置,Y轴偏移。
                     */
                    void SetYPosition(const int64_t& _yPosition);

                    /**
                     * 判断参数 YPosition 是否已赋值
                     * @return YPosition 是否已赋值
                     */
                    bool YPositionHasBeenSet() const;

                    /**
                     * 获取水印宽度，占直播原始画面宽度百分比，建议高宽只设置一项，另外一项会自适应缩放，避免变形。
                     * @return Width 水印宽度，占直播原始画面宽度百分比，建议高宽只设置一项，另外一项会自适应缩放，避免变形。
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置水印宽度，占直播原始画面宽度百分比，建议高宽只设置一项，另外一项会自适应缩放，避免变形。
                     * @param Width 水印宽度，占直播原始画面宽度百分比，建议高宽只设置一项，另外一项会自适应缩放，避免变形。
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取水印高度，占直播原始画面宽度百分比，建议高宽只设置一项，另外一项会自适应缩放，避免变形。
                     * @return Height 水印高度，占直播原始画面宽度百分比，建议高宽只设置一项，另外一项会自适应缩放，避免变形。
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置水印高度，占直播原始画面宽度百分比，建议高宽只设置一项，另外一项会自适应缩放，避免变形。
                     * @param Height 水印高度，占直播原始画面宽度百分比，建议高宽只设置一项，另外一项会自适应缩放，避免变形。
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     */
                    bool HeightHasBeenSet() const;

                private:

                    /**
                     * 水印图片url。
                     */
                    std::string m_pictureUrl;
                    bool m_pictureUrlHasBeenSet;

                    /**
                     * 水印名称。
                     */
                    std::string m_watermarkName;
                    bool m_watermarkNameHasBeenSet;

                    /**
                     * 显示位置,X轴偏移。
                     */
                    int64_t m_xPosition;
                    bool m_xPositionHasBeenSet;

                    /**
                     * 显示位置,Y轴偏移。
                     */
                    int64_t m_yPosition;
                    bool m_yPositionHasBeenSet;

                    /**
                     * 水印宽度，占直播原始画面宽度百分比，建议高宽只设置一项，另外一项会自适应缩放，避免变形。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 水印高度，占直播原始画面宽度百分比，建议高宽只设置一项，另外一项会自适应缩放，避免变形。
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_ADDLIVEWATERMARKREQUEST_H_
