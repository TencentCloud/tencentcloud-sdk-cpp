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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIDRAMAINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIDRAMAINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Ai自动生成漫剧的输入
                */
                class AiDramaInput : public AbstractModel
                {
                public:
                    AiDramaInput();
                    ~AiDramaInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>ai漫剧剧本</p><p>参数格式：无</p><p>入参限制：无</p>
                     * @return Script <p>ai漫剧剧本</p><p>参数格式：无</p><p>入参限制：无</p>
                     * 
                     */
                    std::string GetScript() const;

                    /**
                     * 设置<p>ai漫剧剧本</p><p>参数格式：无</p><p>入参限制：无</p>
                     * @param _script <p>ai漫剧剧本</p><p>参数格式：无</p><p>入参限制：无</p>
                     * 
                     */
                    void SetScript(const std::string& _script);

                    /**
                     * 判断参数 Script 是否已赋值
                     * @return Script 是否已赋值
                     * 
                     */
                    bool ScriptHasBeenSet() const;

                    /**
                     * 获取<p>ai漫剧风格</p><p>枚举值：</p><ul><li>chinese_ink_wash： 国风水墨</li><li>fantasy_cyberpunk： 奇幻赛博朋克</li><li>japanese_anime_2d： 日漫二次元</li></ul><p>默认值：chinese_ink_wash</p><p>枚举值：</p><ul><li>realistic_live_action： 真人写实</li><li>chinese_ink_wash： 国风水墨</li><li>fantasy_cyberpunk： 奇幻赛博朋克</li><li>japanese_anime_2d： 日漫二次元</li></ul><p>默认值：chinese_ink_wash</p>
                     * @return Style <p>ai漫剧风格</p><p>枚举值：</p><ul><li>chinese_ink_wash： 国风水墨</li><li>fantasy_cyberpunk： 奇幻赛博朋克</li><li>japanese_anime_2d： 日漫二次元</li></ul><p>默认值：chinese_ink_wash</p><p>枚举值：</p><ul><li>realistic_live_action： 真人写实</li><li>chinese_ink_wash： 国风水墨</li><li>fantasy_cyberpunk： 奇幻赛博朋克</li><li>japanese_anime_2d： 日漫二次元</li></ul><p>默认值：chinese_ink_wash</p>
                     * 
                     */
                    std::string GetStyle() const;

                    /**
                     * 设置<p>ai漫剧风格</p><p>枚举值：</p><ul><li>chinese_ink_wash： 国风水墨</li><li>fantasy_cyberpunk： 奇幻赛博朋克</li><li>japanese_anime_2d： 日漫二次元</li></ul><p>默认值：chinese_ink_wash</p><p>枚举值：</p><ul><li>realistic_live_action： 真人写实</li><li>chinese_ink_wash： 国风水墨</li><li>fantasy_cyberpunk： 奇幻赛博朋克</li><li>japanese_anime_2d： 日漫二次元</li></ul><p>默认值：chinese_ink_wash</p>
                     * @param _style <p>ai漫剧风格</p><p>枚举值：</p><ul><li>chinese_ink_wash： 国风水墨</li><li>fantasy_cyberpunk： 奇幻赛博朋克</li><li>japanese_anime_2d： 日漫二次元</li></ul><p>默认值：chinese_ink_wash</p><p>枚举值：</p><ul><li>realistic_live_action： 真人写实</li><li>chinese_ink_wash： 国风水墨</li><li>fantasy_cyberpunk： 奇幻赛博朋克</li><li>japanese_anime_2d： 日漫二次元</li></ul><p>默认值：chinese_ink_wash</p>
                     * 
                     */
                    void SetStyle(const std::string& _style);

                    /**
                     * 判断参数 Style 是否已赋值
                     * @return Style 是否已赋值
                     * 
                     */
                    bool StyleHasBeenSet() const;

                    /**
                     * 获取<p>宽高比</p><p>枚举值：</p><ul><li>16:9： 16:9</li><li>9:16： 9:16</li></ul><p>默认值：16:9</p>
                     * @return Ratio <p>宽高比</p><p>枚举值：</p><ul><li>16:9： 16:9</li><li>9:16： 9:16</li></ul><p>默认值：16:9</p>
                     * 
                     */
                    std::string GetRatio() const;

                    /**
                     * 设置<p>宽高比</p><p>枚举值：</p><ul><li>16:9： 16:9</li><li>9:16： 9:16</li></ul><p>默认值：16:9</p>
                     * @param _ratio <p>宽高比</p><p>枚举值：</p><ul><li>16:9： 16:9</li><li>9:16： 9:16</li></ul><p>默认值：16:9</p>
                     * 
                     */
                    void SetRatio(const std::string& _ratio);

                    /**
                     * 判断参数 Ratio 是否已赋值
                     * @return Ratio 是否已赋值
                     * 
                     */
                    bool RatioHasBeenSet() const;

                    /**
                     * 获取<p>输出视频分辨率</p><p>枚举值：</p><ul><li>720p： 720p</li><li>1080p： 1080p</li></ul><p>默认值：720p</p>
                     * @return Resolution <p>输出视频分辨率</p><p>枚举值：</p><ul><li>720p： 720p</li><li>1080p： 1080p</li></ul><p>默认值：720p</p>
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置<p>输出视频分辨率</p><p>枚举值：</p><ul><li>720p： 720p</li><li>1080p： 1080p</li></ul><p>默认值：720p</p>
                     * @param _resolution <p>输出视频分辨率</p><p>枚举值：</p><ul><li>720p： 720p</li><li>1080p： 1080p</li></ul><p>默认值：720p</p>
                     * 
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                private:

                    /**
                     * <p>ai漫剧剧本</p><p>参数格式：无</p><p>入参限制：无</p>
                     */
                    std::string m_script;
                    bool m_scriptHasBeenSet;

                    /**
                     * <p>ai漫剧风格</p><p>枚举值：</p><ul><li>chinese_ink_wash： 国风水墨</li><li>fantasy_cyberpunk： 奇幻赛博朋克</li><li>japanese_anime_2d： 日漫二次元</li></ul><p>默认值：chinese_ink_wash</p><p>枚举值：</p><ul><li>realistic_live_action： 真人写实</li><li>chinese_ink_wash： 国风水墨</li><li>fantasy_cyberpunk： 奇幻赛博朋克</li><li>japanese_anime_2d： 日漫二次元</li></ul><p>默认值：chinese_ink_wash</p>
                     */
                    std::string m_style;
                    bool m_styleHasBeenSet;

                    /**
                     * <p>宽高比</p><p>枚举值：</p><ul><li>16:9： 16:9</li><li>9:16： 9:16</li></ul><p>默认值：16:9</p>
                     */
                    std::string m_ratio;
                    bool m_ratioHasBeenSet;

                    /**
                     * <p>输出视频分辨率</p><p>枚举值：</p><ul><li>720p： 720p</li><li>1080p： 1080p</li></ul><p>默认值：720p</p>
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIDRAMAINPUT_H_
