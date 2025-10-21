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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_BACKGROUNDIMAGECONFIG_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_BACKGROUNDIMAGECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 背景图相关配置
                */
                class BackgroundImageConfig : public AbstractModel
                {
                public:
                    BackgroundImageConfig();
                    ~BackgroundImageConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取横图(pc)
                     * @return LandscapeImageUrl 横图(pc)
                     * 
                     */
                    std::string GetLandscapeImageUrl() const;

                    /**
                     * 设置横图(pc)
                     * @param _landscapeImageUrl 横图(pc)
                     * 
                     */
                    void SetLandscapeImageUrl(const std::string& _landscapeImageUrl);

                    /**
                     * 判断参数 LandscapeImageUrl 是否已赋值
                     * @return LandscapeImageUrl 是否已赋值
                     * 
                     */
                    bool LandscapeImageUrlHasBeenSet() const;

                    /**
                     * 获取原始图
                     * @return OriginalImageUrl 原始图
                     * 
                     */
                    std::string GetOriginalImageUrl() const;

                    /**
                     * 设置原始图
                     * @param _originalImageUrl 原始图
                     * 
                     */
                    void SetOriginalImageUrl(const std::string& _originalImageUrl);

                    /**
                     * 判断参数 OriginalImageUrl 是否已赋值
                     * @return OriginalImageUrl 是否已赋值
                     * 
                     */
                    bool OriginalImageUrlHasBeenSet() const;

                    /**
                     * 获取长图(手机)
                     * @return PortraitImageUrl 长图(手机)
                     * 
                     */
                    std::string GetPortraitImageUrl() const;

                    /**
                     * 设置长图(手机)
                     * @param _portraitImageUrl 长图(手机)
                     * 
                     */
                    void SetPortraitImageUrl(const std::string& _portraitImageUrl);

                    /**
                     * 判断参数 PortraitImageUrl 是否已赋值
                     * @return PortraitImageUrl 是否已赋值
                     * 
                     */
                    bool PortraitImageUrlHasBeenSet() const;

                    /**
                     * 获取主题色
                     * @return ThemeColor 主题色
                     * 
                     */
                    std::string GetThemeColor() const;

                    /**
                     * 设置主题色
                     * @param _themeColor 主题色
                     * 
                     */
                    void SetThemeColor(const std::string& _themeColor);

                    /**
                     * 判断参数 ThemeColor 是否已赋值
                     * @return ThemeColor 是否已赋值
                     * 
                     */
                    bool ThemeColorHasBeenSet() const;

                    /**
                     * 获取亮度值
                     * @return Brightness 亮度值
                     * 
                     */
                    int64_t GetBrightness() const;

                    /**
                     * 设置亮度值
                     * @param _brightness 亮度值
                     * 
                     */
                    void SetBrightness(const int64_t& _brightness);

                    /**
                     * 判断参数 Brightness 是否已赋值
                     * @return Brightness 是否已赋值
                     * 
                     */
                    bool BrightnessHasBeenSet() const;

                private:

                    /**
                     * 横图(pc)
                     */
                    std::string m_landscapeImageUrl;
                    bool m_landscapeImageUrlHasBeenSet;

                    /**
                     * 原始图
                     */
                    std::string m_originalImageUrl;
                    bool m_originalImageUrlHasBeenSet;

                    /**
                     * 长图(手机)
                     */
                    std::string m_portraitImageUrl;
                    bool m_portraitImageUrlHasBeenSet;

                    /**
                     * 主题色
                     */
                    std::string m_themeColor;
                    bool m_themeColorHasBeenSet;

                    /**
                     * 亮度值
                     */
                    int64_t m_brightness;
                    bool m_brightnessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_BACKGROUNDIMAGECONFIG_H_
