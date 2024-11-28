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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_SETMARQUEEREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_SETMARQUEEREQUEST_H_

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
                * SetMarquee请求参数结构体
                */
                class SetMarqueeRequest : public AbstractModel
                {
                public:
                    SetMarqueeRequest();
                    ~SetMarqueeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取学校ID
                     * @return SdkAppId 学校ID
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置学校ID
                     * @param _sdkAppId 学校ID
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
                     * 获取房间号
                     * @return RoomId 房间号
                     * 
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置房间号
                     * @param _roomId 房间号
                     * 
                     */
                    void SetRoomId(const uint64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取 跑马灯类型：1为固定值，2为用户昵称，3为固定值+用户昵称，4为用户ID，5为originId+固定值，6为用户昵称（originId）
                     * @return MarqueeType  跑马灯类型：1为固定值，2为用户昵称，3为固定值+用户昵称，4为用户ID，5为originId+固定值，6为用户昵称（originId）
                     * 
                     */
                    uint64_t GetMarqueeType() const;

                    /**
                     * 设置 跑马灯类型：1为固定值，2为用户昵称，3为固定值+用户昵称，4为用户ID，5为originId+固定值，6为用户昵称（originId）
                     * @param _marqueeType  跑马灯类型：1为固定值，2为用户昵称，3为固定值+用户昵称，4为用户ID，5为originId+固定值，6为用户昵称（originId）
                     * 
                     */
                    void SetMarqueeType(const uint64_t& _marqueeType);

                    /**
                     * 判断参数 MarqueeType 是否已赋值
                     * @return MarqueeType 是否已赋值
                     * 
                     */
                    bool MarqueeTypeHasBeenSet() const;

                    /**
                     * 获取显示方式：1为滚动，2为闪烁
                     * @return DisplayMode 显示方式：1为滚动，2为闪烁
                     * 
                     */
                    uint64_t GetDisplayMode() const;

                    /**
                     * 设置显示方式：1为滚动，2为闪烁
                     * @param _displayMode 显示方式：1为滚动，2为闪烁
                     * 
                     */
                    void SetDisplayMode(const uint64_t& _displayMode);

                    /**
                     * 判断参数 DisplayMode 是否已赋值
                     * @return DisplayMode 是否已赋值
                     * 
                     */
                    bool DisplayModeHasBeenSet() const;

                    /**
                     * 获取固定值内容（当MarqueeType=1或5，则展示固定值内容）
                     * @return Content 固定值内容（当MarqueeType=1或5，则展示固定值内容）
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置固定值内容（当MarqueeType=1或5，则展示固定值内容）
                     * @param _content 固定值内容（当MarqueeType=1或5，则展示固定值内容）
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取字体大小（数字，像素单位，范围：10到24）。
                     * @return FontSize 字体大小（数字，像素单位，范围：10到24）。
                     * 
                     */
                    uint64_t GetFontSize() const;

                    /**
                     * 设置字体大小（数字，像素单位，范围：10到24）。
                     * @param _fontSize 字体大小（数字，像素单位，范围：10到24）。
                     * 
                     */
                    void SetFontSize(const uint64_t& _fontSize);

                    /**
                     * 判断参数 FontSize 是否已赋值
                     * @return FontSize 是否已赋值
                     * 
                     */
                    bool FontSizeHasBeenSet() const;

                    /**
                     * 获取字体粗细：1为粗体，0为细体
                     * @return FontWeight 字体粗细：1为粗体，0为细体
                     * 
                     */
                    uint64_t GetFontWeight() const;

                    /**
                     * 设置字体粗细：1为粗体，0为细体
                     * @param _fontWeight 字体粗细：1为粗体，0为细体
                     * 
                     */
                    void SetFontWeight(const uint64_t& _fontWeight);

                    /**
                     * 判断参数 FontWeight 是否已赋值
                     * @return FontWeight 是否已赋值
                     * 
                     */
                    bool FontWeightHasBeenSet() const;

                    /**
                     * 获取字体颜色（十六进制颜色值，例如：#00FF00（绿色））
                     * @return FontColor 字体颜色（十六进制颜色值，例如：#00FF00（绿色））
                     * 
                     */
                    std::string GetFontColor() const;

                    /**
                     * 设置字体颜色（十六进制颜色值，例如：#00FF00（绿色））
                     * @param _fontColor 字体颜色（十六进制颜色值，例如：#00FF00（绿色））
                     * 
                     */
                    void SetFontColor(const std::string& _fontColor);

                    /**
                     * 判断参数 FontColor 是否已赋值
                     * @return FontColor 是否已赋值
                     * 
                     */
                    bool FontColorHasBeenSet() const;

                    /**
                     * 获取字体透明度（数字，范围 0.0 到 1.0）
                     * @return FontOpacity 字体透明度（数字，范围 0.0 到 1.0）
                     * 
                     */
                    double GetFontOpacity() const;

                    /**
                     * 设置字体透明度（数字，范围 0.0 到 1.0）
                     * @param _fontOpacity 字体透明度（数字，范围 0.0 到 1.0）
                     * 
                     */
                    void SetFontOpacity(const double& _fontOpacity);

                    /**
                     * 判断参数 FontOpacity 是否已赋值
                     * @return FontOpacity 是否已赋值
                     * 
                     */
                    bool FontOpacityHasBeenSet() const;

                    /**
                     * 获取背景颜色（十六进制颜色值，例如：#FFFF00（黄色））
                     * @return BackgroundColor 背景颜色（十六进制颜色值，例如：#FFFF00（黄色））
                     * 
                     */
                    std::string GetBackgroundColor() const;

                    /**
                     * 设置背景颜色（十六进制颜色值，例如：#FFFF00（黄色））
                     * @param _backgroundColor 背景颜色（十六进制颜色值，例如：#FFFF00（黄色））
                     * 
                     */
                    void SetBackgroundColor(const std::string& _backgroundColor);

                    /**
                     * 判断参数 BackgroundColor 是否已赋值
                     * @return BackgroundColor 是否已赋值
                     * 
                     */
                    bool BackgroundColorHasBeenSet() const;

                    /**
                     * 获取背景透明度（数字，范围 0.0 到 1.0）
                     * @return BackgroundOpacity 背景透明度（数字，范围 0.0 到 1.0）
                     * 
                     */
                    double GetBackgroundOpacity() const;

                    /**
                     * 设置背景透明度（数字，范围 0.0 到 1.0）
                     * @param _backgroundOpacity 背景透明度（数字，范围 0.0 到 1.0）
                     * 
                     */
                    void SetBackgroundOpacity(const double& _backgroundOpacity);

                    /**
                     * 判断参数 BackgroundOpacity 是否已赋值
                     * @return BackgroundOpacity 是否已赋值
                     * 
                     */
                    bool BackgroundOpacityHasBeenSet() const;

                    /**
                     * 获取跑马灯文字移动/闪烁指定像素所需时间，范围：1-10；数值越小，跑马灯滚动/闪烁速度越快
                     * @return Duration 跑马灯文字移动/闪烁指定像素所需时间，范围：1-10；数值越小，跑马灯滚动/闪烁速度越快
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置跑马灯文字移动/闪烁指定像素所需时间，范围：1-10；数值越小，跑马灯滚动/闪烁速度越快
                     * @param _duration 跑马灯文字移动/闪烁指定像素所需时间，范围：1-10；数值越小，跑马灯滚动/闪烁速度越快
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取跑马灯个数：目前仅支持1或2, 对应显示单排或双排
                     * @return MarqueeCount 跑马灯个数：目前仅支持1或2, 对应显示单排或双排
                     * 
                     */
                    uint64_t GetMarqueeCount() const;

                    /**
                     * 设置跑马灯个数：目前仅支持1或2, 对应显示单排或双排
                     * @param _marqueeCount 跑马灯个数：目前仅支持1或2, 对应显示单排或双排
                     * 
                     */
                    void SetMarqueeCount(const uint64_t& _marqueeCount);

                    /**
                     * 判断参数 MarqueeCount 是否已赋值
                     * @return MarqueeCount 是否已赋值
                     * 
                     */
                    bool MarqueeCountHasBeenSet() const;

                private:

                    /**
                     * 学校ID
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 房间号
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     *  跑马灯类型：1为固定值，2为用户昵称，3为固定值+用户昵称，4为用户ID，5为originId+固定值，6为用户昵称（originId）
                     */
                    uint64_t m_marqueeType;
                    bool m_marqueeTypeHasBeenSet;

                    /**
                     * 显示方式：1为滚动，2为闪烁
                     */
                    uint64_t m_displayMode;
                    bool m_displayModeHasBeenSet;

                    /**
                     * 固定值内容（当MarqueeType=1或5，则展示固定值内容）
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 字体大小（数字，像素单位，范围：10到24）。
                     */
                    uint64_t m_fontSize;
                    bool m_fontSizeHasBeenSet;

                    /**
                     * 字体粗细：1为粗体，0为细体
                     */
                    uint64_t m_fontWeight;
                    bool m_fontWeightHasBeenSet;

                    /**
                     * 字体颜色（十六进制颜色值，例如：#00FF00（绿色））
                     */
                    std::string m_fontColor;
                    bool m_fontColorHasBeenSet;

                    /**
                     * 字体透明度（数字，范围 0.0 到 1.0）
                     */
                    double m_fontOpacity;
                    bool m_fontOpacityHasBeenSet;

                    /**
                     * 背景颜色（十六进制颜色值，例如：#FFFF00（黄色））
                     */
                    std::string m_backgroundColor;
                    bool m_backgroundColorHasBeenSet;

                    /**
                     * 背景透明度（数字，范围 0.0 到 1.0）
                     */
                    double m_backgroundOpacity;
                    bool m_backgroundOpacityHasBeenSet;

                    /**
                     * 跑马灯文字移动/闪烁指定像素所需时间，范围：1-10；数值越小，跑马灯滚动/闪烁速度越快
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 跑马灯个数：目前仅支持1或2, 对应显示单排或双排
                     */
                    uint64_t m_marqueeCount;
                    bool m_marqueeCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_SETMARQUEEREQUEST_H_
