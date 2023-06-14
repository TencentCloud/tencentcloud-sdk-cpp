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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_SETWATERMARKREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_SETWATERMARKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * SetWatermark请求参数结构体
                */
                class SetWatermarkRequest : public AbstractModel
                {
                public:
                    SetWatermarkRequest();
                    ~SetWatermarkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取低代码互动课堂的SdkAppId。

                     * @return SdkAppId 低代码互动课堂的SdkAppId。

                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置低代码互动课堂的SdkAppId。

                     * @param _sdkAppId 低代码互动课堂的SdkAppId。

                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取老师视频区域的水印参数地址，设置为空字符串表示删除
                     * @return TeacherUrl 老师视频区域的水印参数地址，设置为空字符串表示删除
                     * 
                     */
                    std::string GetTeacherUrl() const;

                    /**
                     * 设置老师视频区域的水印参数地址，设置为空字符串表示删除
                     * @param _teacherUrl 老师视频区域的水印参数地址，设置为空字符串表示删除
                     * 
                     */
                    void SetTeacherUrl(const std::string& _teacherUrl);

                    /**
                     * 判断参数 TeacherUrl 是否已赋值
                     * @return TeacherUrl 是否已赋值
                     * 
                     */
                    bool TeacherUrlHasBeenSet() const;

                    /**
                     * 获取白板视频区域的水印参数地址，设置为空字符串表示删除
                     * @return BoardUrl 白板视频区域的水印参数地址，设置为空字符串表示删除
                     * 
                     */
                    std::string GetBoardUrl() const;

                    /**
                     * 设置白板视频区域的水印参数地址，设置为空字符串表示删除
                     * @param _boardUrl 白板视频区域的水印参数地址，设置为空字符串表示删除
                     * 
                     */
                    void SetBoardUrl(const std::string& _boardUrl);

                    /**
                     * 判断参数 BoardUrl 是否已赋值
                     * @return BoardUrl 是否已赋值
                     * 
                     */
                    bool BoardUrlHasBeenSet() const;

                    /**
                     * 获取视频默认图片（在没有视频流的时候显示），设置为空字符串表示删除
                     * @return VideoUrl 视频默认图片（在没有视频流的时候显示），设置为空字符串表示删除
                     * 
                     */
                    std::string GetVideoUrl() const;

                    /**
                     * 设置视频默认图片（在没有视频流的时候显示），设置为空字符串表示删除
                     * @param _videoUrl 视频默认图片（在没有视频流的时候显示），设置为空字符串表示删除
                     * 
                     */
                    void SetVideoUrl(const std::string& _videoUrl);

                    /**
                     * 判断参数 VideoUrl 是否已赋值
                     * @return VideoUrl 是否已赋值
                     * 
                     */
                    bool VideoUrlHasBeenSet() const;

                    /**
                     * 获取白板区域水印的宽度，取值:0-100，默认为0，表示区域X方向的百分比
                     * @return BoardW 白板区域水印的宽度，取值:0-100，默认为0，表示区域X方向的百分比
                     * 
                     */
                    double GetBoardW() const;

                    /**
                     * 设置白板区域水印的宽度，取值:0-100，默认为0，表示区域X方向的百分比
                     * @param _boardW 白板区域水印的宽度，取值:0-100，默认为0，表示区域X方向的百分比
                     * 
                     */
                    void SetBoardW(const double& _boardW);

                    /**
                     * 判断参数 BoardW 是否已赋值
                     * @return BoardW 是否已赋值
                     * 
                     */
                    bool BoardWHasBeenSet() const;

                    /**
                     * 获取白板区域水印的高度，取值:0-100，默认为0, 表示区域Y方向的百分比
                     * @return BoardH 白板区域水印的高度，取值:0-100，默认为0, 表示区域Y方向的百分比
                     * 
                     */
                    double GetBoardH() const;

                    /**
                     * 设置白板区域水印的高度，取值:0-100，默认为0, 表示区域Y方向的百分比
                     * @param _boardH 白板区域水印的高度，取值:0-100，默认为0, 表示区域Y方向的百分比
                     * 
                     */
                    void SetBoardH(const double& _boardH);

                    /**
                     * 判断参数 BoardH 是否已赋值
                     * @return BoardH 是否已赋值
                     * 
                     */
                    bool BoardHHasBeenSet() const;

                    /**
                     * 获取白板区域水印X偏移, 取值:0-100, 表示区域X方向的百分比。比如50，则表示位于X轴中间
                     * @return BoardX 白板区域水印X偏移, 取值:0-100, 表示区域X方向的百分比。比如50，则表示位于X轴中间
                     * 
                     */
                    double GetBoardX() const;

                    /**
                     * 设置白板区域水印X偏移, 取值:0-100, 表示区域X方向的百分比。比如50，则表示位于X轴中间
                     * @param _boardX 白板区域水印X偏移, 取值:0-100, 表示区域X方向的百分比。比如50，则表示位于X轴中间
                     * 
                     */
                    void SetBoardX(const double& _boardX);

                    /**
                     * 判断参数 BoardX 是否已赋值
                     * @return BoardX 是否已赋值
                     * 
                     */
                    bool BoardXHasBeenSet() const;

                    /**
                     * 获取白板区域水印Y偏移, 取值:0-100, 表示区域X方向的百分比。比如50，则表示位于X轴中间
                     * @return BoardY 白板区域水印Y偏移, 取值:0-100, 表示区域X方向的百分比。比如50，则表示位于X轴中间
                     * 
                     */
                    double GetBoardY() const;

                    /**
                     * 设置白板区域水印Y偏移, 取值:0-100, 表示区域X方向的百分比。比如50，则表示位于X轴中间
                     * @param _boardY 白板区域水印Y偏移, 取值:0-100, 表示区域X方向的百分比。比如50，则表示位于X轴中间
                     * 
                     */
                    void SetBoardY(const double& _boardY);

                    /**
                     * 判断参数 BoardY 是否已赋值
                     * @return BoardY 是否已赋值
                     * 
                     */
                    bool BoardYHasBeenSet() const;

                    /**
                     * 获取老师视频区域水印的宽度，取值:0-100，默认为0，表示区域X方向的百分比
                     * @return TeacherW 老师视频区域水印的宽度，取值:0-100，默认为0，表示区域X方向的百分比
                     * 
                     */
                    double GetTeacherW() const;

                    /**
                     * 设置老师视频区域水印的宽度，取值:0-100，默认为0，表示区域X方向的百分比
                     * @param _teacherW 老师视频区域水印的宽度，取值:0-100，默认为0，表示区域X方向的百分比
                     * 
                     */
                    void SetTeacherW(const double& _teacherW);

                    /**
                     * 判断参数 TeacherW 是否已赋值
                     * @return TeacherW 是否已赋值
                     * 
                     */
                    bool TeacherWHasBeenSet() const;

                    /**
                     * 获取老师视频区域水印的高度，取值:0-100，默认为0, 表示区域Y方向的百分比
                     * @return TeacherH 老师视频区域水印的高度，取值:0-100，默认为0, 表示区域Y方向的百分比
                     * 
                     */
                    double GetTeacherH() const;

                    /**
                     * 设置老师视频区域水印的高度，取值:0-100，默认为0, 表示区域Y方向的百分比
                     * @param _teacherH 老师视频区域水印的高度，取值:0-100，默认为0, 表示区域Y方向的百分比
                     * 
                     */
                    void SetTeacherH(const double& _teacherH);

                    /**
                     * 判断参数 TeacherH 是否已赋值
                     * @return TeacherH 是否已赋值
                     * 
                     */
                    bool TeacherHHasBeenSet() const;

                    /**
                     * 获取老师视频区域水印X偏移, 取值:0-100, 表示区域X方向的百分比。比如50，则表示位于X轴中间
                     * @return TeacherX 老师视频区域水印X偏移, 取值:0-100, 表示区域X方向的百分比。比如50，则表示位于X轴中间
                     * 
                     */
                    double GetTeacherX() const;

                    /**
                     * 设置老师视频区域水印X偏移, 取值:0-100, 表示区域X方向的百分比。比如50，则表示位于X轴中间
                     * @param _teacherX 老师视频区域水印X偏移, 取值:0-100, 表示区域X方向的百分比。比如50，则表示位于X轴中间
                     * 
                     */
                    void SetTeacherX(const double& _teacherX);

                    /**
                     * 判断参数 TeacherX 是否已赋值
                     * @return TeacherX 是否已赋值
                     * 
                     */
                    bool TeacherXHasBeenSet() const;

                    /**
                     * 获取老师视频区域水印Y偏移, 取值:0-100, 表示区域X方向的百分比。比如50，则表示位于X轴中间
                     * @return TeacherY 老师视频区域水印Y偏移, 取值:0-100, 表示区域X方向的百分比。比如50，则表示位于X轴中间
                     * 
                     */
                    double GetTeacherY() const;

                    /**
                     * 设置老师视频区域水印Y偏移, 取值:0-100, 表示区域X方向的百分比。比如50，则表示位于X轴中间
                     * @param _teacherY 老师视频区域水印Y偏移, 取值:0-100, 表示区域X方向的百分比。比如50，则表示位于X轴中间
                     * 
                     */
                    void SetTeacherY(const double& _teacherY);

                    /**
                     * 判断参数 TeacherY 是否已赋值
                     * @return TeacherY 是否已赋值
                     * 
                     */
                    bool TeacherYHasBeenSet() const;

                    /**
                     * 获取文字水印内容，设置为空字符串表示删除
                     * @return Text 文字水印内容，设置为空字符串表示删除
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置文字水印内容，设置为空字符串表示删除
                     * @param _text 文字水印内容，设置为空字符串表示删除
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取文字水印颜色
                     * @return TextColor 文字水印颜色
                     * 
                     */
                    std::string GetTextColor() const;

                    /**
                     * 设置文字水印颜色
                     * @param _textColor 文字水印颜色
                     * 
                     */
                    void SetTextColor(const std::string& _textColor);

                    /**
                     * 判断参数 TextColor 是否已赋值
                     * @return TextColor 是否已赋值
                     * 
                     */
                    bool TextColorHasBeenSet() const;

                private:

                    /**
                     * 低代码互动课堂的SdkAppId。

                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 老师视频区域的水印参数地址，设置为空字符串表示删除
                     */
                    std::string m_teacherUrl;
                    bool m_teacherUrlHasBeenSet;

                    /**
                     * 白板视频区域的水印参数地址，设置为空字符串表示删除
                     */
                    std::string m_boardUrl;
                    bool m_boardUrlHasBeenSet;

                    /**
                     * 视频默认图片（在没有视频流的时候显示），设置为空字符串表示删除
                     */
                    std::string m_videoUrl;
                    bool m_videoUrlHasBeenSet;

                    /**
                     * 白板区域水印的宽度，取值:0-100，默认为0，表示区域X方向的百分比
                     */
                    double m_boardW;
                    bool m_boardWHasBeenSet;

                    /**
                     * 白板区域水印的高度，取值:0-100，默认为0, 表示区域Y方向的百分比
                     */
                    double m_boardH;
                    bool m_boardHHasBeenSet;

                    /**
                     * 白板区域水印X偏移, 取值:0-100, 表示区域X方向的百分比。比如50，则表示位于X轴中间
                     */
                    double m_boardX;
                    bool m_boardXHasBeenSet;

                    /**
                     * 白板区域水印Y偏移, 取值:0-100, 表示区域X方向的百分比。比如50，则表示位于X轴中间
                     */
                    double m_boardY;
                    bool m_boardYHasBeenSet;

                    /**
                     * 老师视频区域水印的宽度，取值:0-100，默认为0，表示区域X方向的百分比
                     */
                    double m_teacherW;
                    bool m_teacherWHasBeenSet;

                    /**
                     * 老师视频区域水印的高度，取值:0-100，默认为0, 表示区域Y方向的百分比
                     */
                    double m_teacherH;
                    bool m_teacherHHasBeenSet;

                    /**
                     * 老师视频区域水印X偏移, 取值:0-100, 表示区域X方向的百分比。比如50，则表示位于X轴中间
                     */
                    double m_teacherX;
                    bool m_teacherXHasBeenSet;

                    /**
                     * 老师视频区域水印Y偏移, 取值:0-100, 表示区域X方向的百分比。比如50，则表示位于X轴中间
                     */
                    double m_teacherY;
                    bool m_teacherYHasBeenSet;

                    /**
                     * 文字水印内容，设置为空字符串表示删除
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 文字水印颜色
                     */
                    std::string m_textColor;
                    bool m_textColorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_SETWATERMARKREQUEST_H_
