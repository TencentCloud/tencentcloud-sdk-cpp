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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLELAYOUTCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLELAYOUTCONFIG_H_

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
                * 字幕压制模块字幕排列配置
                */
                class SubtitleLayoutConfig : public AbstractModel
                {
                public:
                    SubtitleLayoutConfig();
                    ~SubtitleLayoutConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字幕排列配置开关，0关闭，1开启，默认0
                     * @return SubtitleLayoutConfigSwitch 字幕排列配置开关，0关闭，1开启，默认0
                     * 
                     */
                    int64_t GetSubtitleLayoutConfigSwitch() const;

                    /**
                     * 设置字幕排列配置开关，0关闭，1开启，默认0
                     * @param _subtitleLayoutConfigSwitch 字幕排列配置开关，0关闭，1开启，默认0
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
                     * 获取行间距。正整数。
- 代表像素值时， [0, 1000]。
- 代表百分数时，[0, 100]。不填默认0。

                     * @return LineSpacing 行间距。正整数。
- 代表像素值时， [0, 1000]。
- 代表百分数时，[0, 100]。不填默认0。

                     * 
                     */
                    int64_t GetLineSpacing() const;

                    /**
                     * 设置行间距。正整数。
- 代表像素值时， [0, 1000]。
- 代表百分数时，[0, 100]。不填默认0。

                     * @param _lineSpacing 行间距。正整数。
- 代表像素值时， [0, 1000]。
- 代表百分数时，[0, 100]。不填默认0。

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
                     * 获取LineSpacing单位，0 像素，1百分比，默认为0，像素

                     * @return LineSpacingUnit LineSpacing单位，0 像素，1百分比，默认为0，像素

                     * 
                     */
                    int64_t GetLineSpacingUnit() const;

                    /**
                     * 设置LineSpacing单位，0 像素，1百分比，默认为0，像素

                     * @param _lineSpacingUnit LineSpacing单位，0 像素，1百分比，默认为0，像素

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
                     * 获取对齐方式，取值：top: 顶部对齐，字幕顶部按位置固定，底部随行数变化。bottom: 底部对齐，字幕底部按位置固定，顶部随行数变化。不填默认底部对齐。

                     * @return Alignment 对齐方式，取值：top: 顶部对齐，字幕顶部按位置固定，底部随行数变化。bottom: 底部对齐，字幕底部按位置固定，顶部随行数变化。不填默认底部对齐。

                     * 
                     */
                    std::string GetAlignment() const;

                    /**
                     * 设置对齐方式，取值：top: 顶部对齐，字幕顶部按位置固定，底部随行数变化。bottom: 底部对齐，字幕底部按位置固定，顶部随行数变化。不填默认底部对齐。

                     * @param _alignment 对齐方式，取值：top: 顶部对齐，字幕顶部按位置固定，底部随行数变化。bottom: 底部对齐，字幕底部按位置固定，顶部随行数变化。不填默认底部对齐。

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
                     * 字幕排列配置开关，0关闭，1开启，默认0
                     */
                    int64_t m_subtitleLayoutConfigSwitch;
                    bool m_subtitleLayoutConfigSwitchHasBeenSet;

                    /**
                     * 行间距。正整数。
- 代表像素值时， [0, 1000]。
- 代表百分数时，[0, 100]。不填默认0。

                     */
                    int64_t m_lineSpacing;
                    bool m_lineSpacingHasBeenSet;

                    /**
                     * LineSpacing单位，0 像素，1百分比，默认为0，像素

                     */
                    int64_t m_lineSpacingUnit;
                    bool m_lineSpacingUnitHasBeenSet;

                    /**
                     * 对齐方式，取值：top: 顶部对齐，字幕顶部按位置固定，底部随行数变化。bottom: 底部对齐，字幕底部按位置固定，顶部随行数变化。不填默认底部对齐。

                     */
                    std::string m_alignment;
                    bool m_alignmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLELAYOUTCONFIG_H_
