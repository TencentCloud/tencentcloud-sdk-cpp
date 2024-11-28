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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEMARQUEERESPONSE_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEMARQUEERESPONSE_H_

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
                * DescribeMarquee返回参数结构体
                */
                class DescribeMarqueeResponse : public AbstractModel
                {
                public:
                    DescribeMarqueeResponse();
                    ~DescribeMarqueeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取 跑马灯类型：1为固定值，2为用户昵称，3为固定值+用户昵称，4为用户ID，5为originId+固定值，6为用户昵称（originId）
                     * @return MarqueeType  跑马灯类型：1为固定值，2为用户昵称，3为固定值+用户昵称，4为用户ID，5为originId+固定值，6为用户昵称（originId）
                     * 
                     */
                    uint64_t GetMarqueeType() const;

                    /**
                     * 判断参数 MarqueeType 是否已赋值
                     * @return MarqueeType 是否已赋值
                     * 
                     */
                    bool MarqueeTypeHasBeenSet() const;

                    /**
                     * 获取固定值内容（当MarqueeType=1或5，则展示固定值内容）
                     * @return Content 固定值内容（当MarqueeType=1或5，则展示固定值内容）
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取字体大小（数字，像素单位，范围：10到24）
                     * @return FontSize 字体大小（数字，像素单位，范围：10到24）
                     * 
                     */
                    uint64_t GetFontSize() const;

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
                     * 判断参数 FontWeight 是否已赋值
                     * @return FontWeight 是否已赋值
                     * 
                     */
                    bool FontWeightHasBeenSet() const;

                    /**
                     * 获取字体颜色（十六进制颜色值）
                     * @return FontColor 字体颜色（十六进制颜色值）
                     * 
                     */
                    std::string GetFontColor() const;

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
                     * 判断参数 FontOpacity 是否已赋值
                     * @return FontOpacity 是否已赋值
                     * 
                     */
                    bool FontOpacityHasBeenSet() const;

                    /**
                     * 获取背景颜色（十六进制颜色值）
                     * @return BackgroundColor 背景颜色（十六进制颜色值）
                     * 
                     */
                    std::string GetBackgroundColor() const;

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
                     * 判断参数 BackgroundOpacity 是否已赋值
                     * @return BackgroundOpacity 是否已赋值
                     * 
                     */
                    bool BackgroundOpacityHasBeenSet() const;

                    /**
                     * 获取显示方式：1为滚动，2为闪烁
                     * @return DisplayMode 显示方式：1为滚动，2为闪烁
                     * 
                     */
                    uint64_t GetDisplayMode() const;

                    /**
                     * 判断参数 DisplayMode 是否已赋值
                     * @return DisplayMode 是否已赋值
                     * 
                     */
                    bool DisplayModeHasBeenSet() const;

                    /**
                     * 获取停留时长（秒，整数，范围 1～10）
                     * @return Duration 停留时长（秒，整数，范围 1～10）
                     * 
                     */
                    uint64_t GetDuration() const;

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
                     * 判断参数 MarqueeCount 是否已赋值
                     * @return MarqueeCount 是否已赋值
                     * 
                     */
                    bool MarqueeCountHasBeenSet() const;

                private:

                    /**
                     *  跑马灯类型：1为固定值，2为用户昵称，3为固定值+用户昵称，4为用户ID，5为originId+固定值，6为用户昵称（originId）
                     */
                    uint64_t m_marqueeType;
                    bool m_marqueeTypeHasBeenSet;

                    /**
                     * 固定值内容（当MarqueeType=1或5，则展示固定值内容）
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 字体大小（数字，像素单位，范围：10到24）
                     */
                    uint64_t m_fontSize;
                    bool m_fontSizeHasBeenSet;

                    /**
                     * 字体粗细：1为粗体，0为细体
                     */
                    uint64_t m_fontWeight;
                    bool m_fontWeightHasBeenSet;

                    /**
                     * 字体颜色（十六进制颜色值）
                     */
                    std::string m_fontColor;
                    bool m_fontColorHasBeenSet;

                    /**
                     * 字体透明度（数字，范围 0.0 到 1.0）
                     */
                    double m_fontOpacity;
                    bool m_fontOpacityHasBeenSet;

                    /**
                     * 背景颜色（十六进制颜色值）
                     */
                    std::string m_backgroundColor;
                    bool m_backgroundColorHasBeenSet;

                    /**
                     * 背景透明度（数字，范围 0.0 到 1.0）
                     */
                    double m_backgroundOpacity;
                    bool m_backgroundOpacityHasBeenSet;

                    /**
                     * 显示方式：1为滚动，2为闪烁
                     */
                    uint64_t m_displayMode;
                    bool m_displayModeHasBeenSet;

                    /**
                     * 停留时长（秒，整数，范围 1～10）
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

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEMARQUEERESPONSE_H_
