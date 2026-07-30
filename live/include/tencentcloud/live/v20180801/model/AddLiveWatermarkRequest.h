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
                     * 获取<p>水印图片 URL。<br>URL中禁止包含的字符：<br> ;(){}$&gt;`#&quot;'|</p>
                     * @return PictureUrl <p>水印图片 URL。<br>URL中禁止包含的字符：<br> ;(){}$&gt;`#&quot;'|</p>
                     * 
                     */
                    std::string GetPictureUrl() const;

                    /**
                     * 设置<p>水印图片 URL。<br>URL中禁止包含的字符：<br> ;(){}$&gt;`#&quot;'|</p>
                     * @param _pictureUrl <p>水印图片 URL。<br>URL中禁止包含的字符：<br> ;(){}$&gt;`#&quot;'|</p>
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
                     * 获取<p>水印名称。<br>最长30字节。</p>
                     * @return WatermarkName <p>水印名称。<br>最长30字节。</p>
                     * 
                     */
                    std::string GetWatermarkName() const;

                    /**
                     * 设置<p>水印名称。<br>最长30字节。</p>
                     * @param _watermarkName <p>水印名称。<br>最长30字节。</p>
                     * 
                     */
                    void SetWatermarkName(const std::string& _watermarkName);

                    /**
                     * 判断参数 WatermarkName 是否已赋值
                     * @return WatermarkName 是否已赋值
                     * 
                     */
                    bool WatermarkNameHasBeenSet() const;

                    /**
                     * 获取<p>显示位置，X轴偏移，单位是百分比，默认 0。</p>
                     * @return XPosition <p>显示位置，X轴偏移，单位是百分比，默认 0。</p>
                     * 
                     */
                    int64_t GetXPosition() const;

                    /**
                     * 设置<p>显示位置，X轴偏移，单位是百分比，默认 0。</p>
                     * @param _xPosition <p>显示位置，X轴偏移，单位是百分比，默认 0。</p>
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
                     * 获取<p>显示位置，Y轴偏移，单位是百分比，默认 0。</p>
                     * @return YPosition <p>显示位置，Y轴偏移，单位是百分比，默认 0。</p>
                     * 
                     */
                    int64_t GetYPosition() const;

                    /**
                     * 设置<p>显示位置，Y轴偏移，单位是百分比，默认 0。</p>
                     * @param _yPosition <p>显示位置，Y轴偏移，单位是百分比，默认 0。</p>
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
                     * 获取<p>水印宽度，占直播原始画面宽度百分比，建议高宽只设置一项，另外一项会自适应缩放，避免变形。默认原始宽度。</p>
                     * @return Width <p>水印宽度，占直播原始画面宽度百分比，建议高宽只设置一项，另外一项会自适应缩放，避免变形。默认原始宽度。</p>
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置<p>水印宽度，占直播原始画面宽度百分比，建议高宽只设置一项，另外一项会自适应缩放，避免变形。默认原始宽度。</p>
                     * @param _width <p>水印宽度，占直播原始画面宽度百分比，建议高宽只设置一项，另外一项会自适应缩放，避免变形。默认原始宽度。</p>
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
                     * 获取<p>水印高度，占直播原始画面高度百分比，建议高宽只设置一项，另外一项会自适应缩放，避免变形。默认原始高度。</p>
                     * @return Height <p>水印高度，占直播原始画面高度百分比，建议高宽只设置一项，另外一项会自适应缩放，避免变形。默认原始高度。</p>
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置<p>水印高度，占直播原始画面高度百分比，建议高宽只设置一项，另外一项会自适应缩放，避免变形。默认原始高度。</p>
                     * @param _height <p>水印高度，占直播原始画面高度百分比，建议高宽只设置一项，另外一项会自适应缩放，避免变形。默认原始高度。</p>
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
                     * 获取<p>背景水印宽度。默认宽度1920。</p><p>取值范围：[360, 4096]</p><p>单位：px</p>
                     * @return BackgroundWidth <p>背景水印宽度。默认宽度1920。</p><p>取值范围：[360, 4096]</p><p>单位：px</p>
                     * 
                     */
                    int64_t GetBackgroundWidth() const;

                    /**
                     * 设置<p>背景水印宽度。默认宽度1920。</p><p>取值范围：[360, 4096]</p><p>单位：px</p>
                     * @param _backgroundWidth <p>背景水印宽度。默认宽度1920。</p><p>取值范围：[360, 4096]</p><p>单位：px</p>
                     * 
                     */
                    void SetBackgroundWidth(const int64_t& _backgroundWidth);

                    /**
                     * 判断参数 BackgroundWidth 是否已赋值
                     * @return BackgroundWidth 是否已赋值
                     * 
                     */
                    bool BackgroundWidthHasBeenSet() const;

                    /**
                     * 获取<p>背景水印高度。默认高度1080。</p><p>取值范围：[360, 4096]</p><p>单位：px</p>
                     * @return BackgroundHeight <p>背景水印高度。默认高度1080。</p><p>取值范围：[360, 4096]</p><p>单位：px</p>
                     * 
                     */
                    int64_t GetBackgroundHeight() const;

                    /**
                     * 设置<p>背景水印高度。默认高度1080。</p><p>取值范围：[360, 4096]</p><p>单位：px</p>
                     * @param _backgroundHeight <p>背景水印高度。默认高度1080。</p><p>取值范围：[360, 4096]</p><p>单位：px</p>
                     * 
                     */
                    void SetBackgroundHeight(const int64_t& _backgroundHeight);

                    /**
                     * 判断参数 BackgroundHeight 是否已赋值
                     * @return BackgroundHeight 是否已赋值
                     * 
                     */
                    bool BackgroundHeightHasBeenSet() const;

                private:

                    /**
                     * <p>水印图片 URL。<br>URL中禁止包含的字符：<br> ;(){}$&gt;`#&quot;'|</p>
                     */
                    std::string m_pictureUrl;
                    bool m_pictureUrlHasBeenSet;

                    /**
                     * <p>水印名称。<br>最长30字节。</p>
                     */
                    std::string m_watermarkName;
                    bool m_watermarkNameHasBeenSet;

                    /**
                     * <p>显示位置，X轴偏移，单位是百分比，默认 0。</p>
                     */
                    int64_t m_xPosition;
                    bool m_xPositionHasBeenSet;

                    /**
                     * <p>显示位置，Y轴偏移，单位是百分比，默认 0。</p>
                     */
                    int64_t m_yPosition;
                    bool m_yPositionHasBeenSet;

                    /**
                     * <p>水印宽度，占直播原始画面宽度百分比，建议高宽只设置一项，另外一项会自适应缩放，避免变形。默认原始宽度。</p>
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * <p>水印高度，占直播原始画面高度百分比，建议高宽只设置一项，另外一项会自适应缩放，避免变形。默认原始高度。</p>
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * <p>背景水印宽度。默认宽度1920。</p><p>取值范围：[360, 4096]</p><p>单位：px</p>
                     */
                    int64_t m_backgroundWidth;
                    bool m_backgroundWidthHasBeenSet;

                    /**
                     * <p>背景水印高度。默认高度1080。</p><p>取值范围：[360, 4096]</p><p>单位：px</p>
                     */
                    int64_t m_backgroundHeight;
                    bool m_backgroundHeightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_ADDLIVEWATERMARKREQUEST_H_
