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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_WATERMARKCONFIGUREDATA_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_WATERMARKCONFIGUREDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 即时转码水印模板配置。
                */
                class WatermarkConfigureData : public AbstractModel
                {
                public:
                    WatermarkConfigureData();
                    ~WatermarkConfigureData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否启用水印。可取值：
<li>ON：表示启用水印；</li>
<li>OFF：表示关闭水印。</li>
                     * @return Switch 是否启用水印。可取值：
<li>ON：表示启用水印；</li>
<li>OFF：表示关闭水印。</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置是否启用水印。可取值：
<li>ON：表示启用水印；</li>
<li>OFF：表示关闭水印。</li>
                     * @param _switch 是否启用水印。可取值：
<li>ON：表示启用水印；</li>
<li>OFF：表示关闭水印。</li>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取水印 Url。
                     * @return Url 水印 Url。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置水印 Url。
                     * @param _url 水印 Url。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取水印的宽度。
<li>字符串以 % 结尾，表示水印 Width 为视频宽度的百分比大小，如 10% 表示 Width 为视频宽度的 10%；</li>
                     * @return Width 水印的宽度。
<li>字符串以 % 结尾，表示水印 Width 为视频宽度的百分比大小，如 10% 表示 Width 为视频宽度的 10%；</li>
                     * 
                     */
                    std::string GetWidth() const;

                    /**
                     * 设置水印的宽度。
<li>字符串以 % 结尾，表示水印 Width 为视频宽度的百分比大小，如 10% 表示 Width 为视频宽度的 10%；</li>
                     * @param _width 水印的宽度。
<li>字符串以 % 结尾，表示水印 Width 为视频宽度的百分比大小，如 10% 表示 Width 为视频宽度的 10%；</li>
                     * 
                     */
                    void SetWidth(const std::string& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取水印的高度。
<li>字符串以 % 结尾，表示水印 Height 为视频高度的百分比大小，如 10% 表示 Height 为视频高度的 10%；</li>
                     * @return Height 水印的高度。
<li>字符串以 % 结尾，表示水印 Height 为视频高度的百分比大小，如 10% 表示 Height 为视频高度的 10%；</li>
                     * 
                     */
                    std::string GetHeight() const;

                    /**
                     * 设置水印的高度。
<li>字符串以 % 结尾，表示水印 Height 为视频高度的百分比大小，如 10% 表示 Height 为视频高度的 10%；</li>
                     * @param _height 水印的高度。
<li>字符串以 % 结尾，表示水印 Height 为视频高度的百分比大小，如 10% 表示 Height 为视频高度的 10%；</li>
                     * 
                     */
                    void SetHeight(const std::string& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取水印原点距离视频图像坐标原点的水平位置。字符串以 % 结尾，表示水印 XPos 为视频宽度指定百分比，如 10% 表示 XPos 为视频宽度的 10%；
                     * @return XPos 水印原点距离视频图像坐标原点的水平位置。字符串以 % 结尾，表示水印 XPos 为视频宽度指定百分比，如 10% 表示 XPos 为视频宽度的 10%；
                     * 
                     */
                    std::string GetXPos() const;

                    /**
                     * 设置水印原点距离视频图像坐标原点的水平位置。字符串以 % 结尾，表示水印 XPos 为视频宽度指定百分比，如 10% 表示 XPos 为视频宽度的 10%；
                     * @param _xPos 水印原点距离视频图像坐标原点的水平位置。字符串以 % 结尾，表示水印 XPos 为视频宽度指定百分比，如 10% 表示 XPos 为视频宽度的 10%；
                     * 
                     */
                    void SetXPos(const std::string& _xPos);

                    /**
                     * 判断参数 XPos 是否已赋值
                     * @return XPos 是否已赋值
                     * 
                     */
                    bool XPosHasBeenSet() const;

                    /**
                     * 获取水印原点距离视频图像坐标原点的垂直位置。当字符串以 % 结尾，表示水印 YPos 为视频高度指定百分比，如 10% 表示 YPos 为视频高度的 10%。
                     * @return YPos 水印原点距离视频图像坐标原点的垂直位置。当字符串以 % 结尾，表示水印 YPos 为视频高度指定百分比，如 10% 表示 YPos 为视频高度的 10%。
                     * 
                     */
                    std::string GetYPos() const;

                    /**
                     * 设置水印原点距离视频图像坐标原点的垂直位置。当字符串以 % 结尾，表示水印 YPos 为视频高度指定百分比，如 10% 表示 YPos 为视频高度的 10%。
                     * @param _yPos 水印原点距离视频图像坐标原点的垂直位置。当字符串以 % 结尾，表示水印 YPos 为视频高度指定百分比，如 10% 表示 YPos 为视频高度的 10%。
                     * 
                     */
                    void SetYPos(const std::string& _yPos);

                    /**
                     * 判断参数 YPos 是否已赋值
                     * @return YPos 是否已赋值
                     * 
                     */
                    bool YPosHasBeenSet() const;

                private:

                    /**
                     * 是否启用水印。可取值：
<li>ON：表示启用水印；</li>
<li>OFF：表示关闭水印。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 水印 Url。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 水印的宽度。
<li>字符串以 % 结尾，表示水印 Width 为视频宽度的百分比大小，如 10% 表示 Width 为视频宽度的 10%；</li>
                     */
                    std::string m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 水印的高度。
<li>字符串以 % 结尾，表示水印 Height 为视频高度的百分比大小，如 10% 表示 Height 为视频高度的 10%；</li>
                     */
                    std::string m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 水印原点距离视频图像坐标原点的水平位置。字符串以 % 结尾，表示水印 XPos 为视频宽度指定百分比，如 10% 表示 XPos 为视频宽度的 10%；
                     */
                    std::string m_xPos;
                    bool m_xPosHasBeenSet;

                    /**
                     * 水印原点距离视频图像坐标原点的垂直位置。当字符串以 % 结尾，表示水印 YPos 为视频高度指定百分比，如 10% 表示 YPos 为视频高度的 10%。
                     */
                    std::string m_yPos;
                    bool m_yPosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_WATERMARKCONFIGUREDATA_H_
