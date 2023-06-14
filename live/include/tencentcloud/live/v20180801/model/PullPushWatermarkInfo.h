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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_PULLPUSHWATERMARKINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_PULLPUSHWATERMARKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 云转推水印信息。
                */
                class PullPushWatermarkInfo : public AbstractModel
                {
                public:
                    PullPushWatermarkInfo();
                    ~PullPushWatermarkInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取水印图片 URL。
URL中禁止包含的字符：
;(){}$>`#"'|
                     * @return PictureUrl 水印图片 URL。
URL中禁止包含的字符：
;(){}$>`#"'|
                     * 
                     */
                    std::string GetPictureUrl() const;

                    /**
                     * 设置水印图片 URL。
URL中禁止包含的字符：
;(){}$>`#"'|
                     * @param _pictureUrl 水印图片 URL。
URL中禁止包含的字符：
;(){}$>`#"'|
                     * 
                     */
                    void SetPictureUrl(const std::string& _pictureUrl);

                    /**
                     * 判断参数 PictureUrl 是否已赋值
                     * @return PictureUrl 是否已赋值
                     * 
                     */
                    bool PictureUrlHasBeenSet() const;

                    /**
                     * 获取显示位置，X轴偏移，单位是百分比，默认 0。
                     * @return XPosition 显示位置，X轴偏移，单位是百分比，默认 0。
                     * 
                     */
                    int64_t GetXPosition() const;

                    /**
                     * 设置显示位置，X轴偏移，单位是百分比，默认 0。
                     * @param _xPosition 显示位置，X轴偏移，单位是百分比，默认 0。
                     * 
                     */
                    void SetXPosition(const int64_t& _xPosition);

                    /**
                     * 判断参数 XPosition 是否已赋值
                     * @return XPosition 是否已赋值
                     * 
                     */
                    bool XPositionHasBeenSet() const;

                    /**
                     * 获取显示位置，Y轴偏移，单位是百分比，默认 0。
                     * @return YPosition 显示位置，Y轴偏移，单位是百分比，默认 0。
                     * 
                     */
                    int64_t GetYPosition() const;

                    /**
                     * 设置显示位置，Y轴偏移，单位是百分比，默认 0。
                     * @param _yPosition 显示位置，Y轴偏移，单位是百分比，默认 0。
                     * 
                     */
                    void SetYPosition(const int64_t& _yPosition);

                    /**
                     * 判断参数 YPosition 是否已赋值
                     * @return YPosition 是否已赋值
                     * 
                     */
                    bool YPositionHasBeenSet() const;

                    /**
                     * 获取水印宽度，占直播原始画面宽度百分比，建议高宽只设置一项，另外一项会自适应缩放，避免变形。默认原始宽度。
                     * @return Width 水印宽度，占直播原始画面宽度百分比，建议高宽只设置一项，另外一项会自适应缩放，避免变形。默认原始宽度。
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置水印宽度，占直播原始画面宽度百分比，建议高宽只设置一项，另外一项会自适应缩放，避免变形。默认原始宽度。
                     * @param _width 水印宽度，占直播原始画面宽度百分比，建议高宽只设置一项，另外一项会自适应缩放，避免变形。默认原始宽度。
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
                     * 获取水印高度，占直播原始画面高度百分比，建议高宽只设置一项，另外一项会自适应缩放，避免变形。默认原始高度。
                     * @return Height 水印高度，占直播原始画面高度百分比，建议高宽只设置一项，另外一项会自适应缩放，避免变形。默认原始高度。
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置水印高度，占直播原始画面高度百分比，建议高宽只设置一项，另外一项会自适应缩放，避免变形。默认原始高度。
                     * @param _height 水印高度，占直播原始画面高度百分比，建议高宽只设置一项，另外一项会自适应缩放，避免变形。默认原始高度。
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
                     * 获取水印位置，默认 0。
0：左上角。
1：右上角。
2：右下角。
3：左下角。
                     * @return Location 水印位置，默认 0。
0：左上角。
1：右上角。
2：右下角。
3：左下角。
                     * 
                     */
                    int64_t GetLocation() const;

                    /**
                     * 设置水印位置，默认 0。
0：左上角。
1：右上角。
2：右下角。
3：左下角。
                     * @param _location 水印位置，默认 0。
0：左上角。
1：右上角。
2：右下角。
3：左下角。
                     * 
                     */
                    void SetLocation(const int64_t& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                private:

                    /**
                     * 水印图片 URL。
URL中禁止包含的字符：
;(){}$>`#"'|
                     */
                    std::string m_pictureUrl;
                    bool m_pictureUrlHasBeenSet;

                    /**
                     * 显示位置，X轴偏移，单位是百分比，默认 0。
                     */
                    int64_t m_xPosition;
                    bool m_xPositionHasBeenSet;

                    /**
                     * 显示位置，Y轴偏移，单位是百分比，默认 0。
                     */
                    int64_t m_yPosition;
                    bool m_yPositionHasBeenSet;

                    /**
                     * 水印宽度，占直播原始画面宽度百分比，建议高宽只设置一项，另外一项会自适应缩放，避免变形。默认原始宽度。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 水印高度，占直播原始画面高度百分比，建议高宽只设置一项，另外一项会自适应缩放，避免变形。默认原始高度。
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 水印位置，默认 0。
0：左上角。
1：右上角。
2：右下角。
3：左下角。
                     */
                    int64_t m_location;
                    bool m_locationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_PULLPUSHWATERMARKINFO_H_
