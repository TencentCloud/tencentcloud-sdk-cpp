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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSSUBTITLELAYOUTCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSSUBTITLELAYOUTCONFIG_H_

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
                * MPS字幕压制模块字幕排列配置
                */
                class MPSSubtitleLayoutConfig : public AbstractModel
                {
                public:
                    MPSSubtitleLayoutConfig();
                    ~MPSSubtitleLayoutConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>字幕排列配置开关，0关闭，1开启，默认0</p>
                     * @return SubtitleLayoutConfigSwitch <p>字幕排列配置开关，0关闭，1开启，默认0</p>
                     * 
                     */
                    int64_t GetSubtitleLayoutConfigSwitch() const;

                    /**
                     * 设置<p>字幕排列配置开关，0关闭，1开启，默认0</p>
                     * @param _subtitleLayoutConfigSwitch <p>字幕排列配置开关，0关闭，1开启，默认0</p>
                     * 
                     */
                    void SetSubtitleLayoutConfigSwitch(const int64_t& _subtitleLayoutConfigSwitch);

                    /**
                     * 判断参数 SubtitleLayoutConfigSwitch 是否已赋值
                     * @return SubtitleLayoutConfigSwitch 是否已赋值
                     * 
                     */
                    bool SubtitleLayoutConfigSwitchHasBeenSet() const;

                    /**
                     * 获取<p>行间距。正整数。 - 代表像素值时， [0, 1000]。 - 代表百分数时，[0, 100]。不填默认0。</p>
                     * @return LineSpacing <p>行间距。正整数。 - 代表像素值时， [0, 1000]。 - 代表百分数时，[0, 100]。不填默认0。</p>
                     * 
                     */
                    int64_t GetLineSpacing() const;

                    /**
                     * 设置<p>行间距。正整数。 - 代表像素值时， [0, 1000]。 - 代表百分数时，[0, 100]。不填默认0。</p>
                     * @param _lineSpacing <p>行间距。正整数。 - 代表像素值时， [0, 1000]。 - 代表百分数时，[0, 100]。不填默认0。</p>
                     * 
                     */
                    void SetLineSpacing(const int64_t& _lineSpacing);

                    /**
                     * 判断参数 LineSpacing 是否已赋值
                     * @return LineSpacing 是否已赋值
                     * 
                     */
                    bool LineSpacingHasBeenSet() const;

                    /**
                     * 获取<p>LineSpacing单位，0 像素，1百分比，默认为0，像素</p>
                     * @return LineSpacingUnit <p>LineSpacing单位，0 像素，1百分比，默认为0，像素</p>
                     * 
                     */
                    int64_t GetLineSpacingUnit() const;

                    /**
                     * 设置<p>LineSpacing单位，0 像素，1百分比，默认为0，像素</p>
                     * @param _lineSpacingUnit <p>LineSpacing单位，0 像素，1百分比，默认为0，像素</p>
                     * 
                     */
                    void SetLineSpacingUnit(const int64_t& _lineSpacingUnit);

                    /**
                     * 判断参数 LineSpacingUnit 是否已赋值
                     * @return LineSpacingUnit 是否已赋值
                     * 
                     */
                    bool LineSpacingUnitHasBeenSet() const;

                    /**
                     * 获取<p>对齐方式，取值：top: 顶部对齐，字幕顶部按位置固定，底部随行数变化。bottom: 底部对齐，字幕底部按位置固定，顶部随行数变化。不填默认底部对齐。</p>
                     * @return Alignment <p>对齐方式，取值：top: 顶部对齐，字幕顶部按位置固定，底部随行数变化。bottom: 底部对齐，字幕底部按位置固定，顶部随行数变化。不填默认底部对齐。</p>
                     * 
                     */
                    std::string GetAlignment() const;

                    /**
                     * 设置<p>对齐方式，取值：top: 顶部对齐，字幕顶部按位置固定，底部随行数变化。bottom: 底部对齐，字幕底部按位置固定，顶部随行数变化。不填默认底部对齐。</p>
                     * @param _alignment <p>对齐方式，取值：top: 顶部对齐，字幕顶部按位置固定，底部随行数变化。bottom: 底部对齐，字幕底部按位置固定，顶部随行数变化。不填默认底部对齐。</p>
                     * 
                     */
                    void SetAlignment(const std::string& _alignment);

                    /**
                     * 判断参数 Alignment 是否已赋值
                     * @return Alignment 是否已赋值
                     * 
                     */
                    bool AlignmentHasBeenSet() const;

                private:

                    /**
                     * <p>字幕排列配置开关，0关闭，1开启，默认0</p>
                     */
                    int64_t m_subtitleLayoutConfigSwitch;
                    bool m_subtitleLayoutConfigSwitchHasBeenSet;

                    /**
                     * <p>行间距。正整数。 - 代表像素值时， [0, 1000]。 - 代表百分数时，[0, 100]。不填默认0。</p>
                     */
                    int64_t m_lineSpacing;
                    bool m_lineSpacingHasBeenSet;

                    /**
                     * <p>LineSpacing单位，0 像素，1百分比，默认为0，像素</p>
                     */
                    int64_t m_lineSpacingUnit;
                    bool m_lineSpacingUnitHasBeenSet;

                    /**
                     * <p>对齐方式，取值：top: 顶部对齐，字幕顶部按位置固定，底部随行数变化。bottom: 底部对齐，字幕底部按位置固定，顶部随行数变化。不填默认底部对齐。</p>
                     */
                    std::string m_alignment;
                    bool m_alignmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSSUBTITLELAYOUTCONFIG_H_
