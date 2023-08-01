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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLETEMPLATE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLETEMPLATE_H_

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
                * 字幕流配置参数。
                */
                class SubtitleTemplate : public AbstractModel
                {
                public:
                    SubtitleTemplate();
                    ~SubtitleTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取要压制到视频中的字幕文件地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Path 要压制到视频中的字幕文件地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置要压制到视频中的字幕文件地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _path 要压制到视频中的字幕文件地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取指定要压制到视频中的字幕轨道，如果有指定Path，则Path 优先级更高。Path 和 StreamIndex 至少指定一个。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StreamIndex 指定要压制到视频中的字幕轨道，如果有指定Path，则Path 优先级更高。Path 和 StreamIndex 至少指定一个。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStreamIndex() const;

                    /**
                     * 设置指定要压制到视频中的字幕轨道，如果有指定Path，则Path 优先级更高。Path 和 StreamIndex 至少指定一个。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _streamIndex 指定要压制到视频中的字幕轨道，如果有指定Path，则Path 优先级更高。Path 和 StreamIndex 至少指定一个。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStreamIndex(const int64_t& _streamIndex);

                    /**
                     * 判断参数 StreamIndex 是否已赋值
                     * @return StreamIndex 是否已赋值
                     * 
                     */
                    bool StreamIndexHasBeenSet() const;

                    /**
                     * 获取字体类型，
<li>hei.ttf：黑体</li>
<li>song.ttf：宋体</li>
<li>simkai.ttf：楷体</li>
<li>arial.ttf：仅支持英文</li>
默认hei.ttf
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FontType 字体类型，
<li>hei.ttf：黑体</li>
<li>song.ttf：宋体</li>
<li>simkai.ttf：楷体</li>
<li>arial.ttf：仅支持英文</li>
默认hei.ttf
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFontType() const;

                    /**
                     * 设置字体类型，
<li>hei.ttf：黑体</li>
<li>song.ttf：宋体</li>
<li>simkai.ttf：楷体</li>
<li>arial.ttf：仅支持英文</li>
默认hei.ttf
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fontType 字体类型，
<li>hei.ttf：黑体</li>
<li>song.ttf：宋体</li>
<li>simkai.ttf：楷体</li>
<li>arial.ttf：仅支持英文</li>
默认hei.ttf
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFontType(const std::string& _fontType);

                    /**
                     * 判断参数 FontType 是否已赋值
                     * @return FontType 是否已赋值
                     * 
                     */
                    bool FontTypeHasBeenSet() const;

                    /**
                     * 获取字体大小，格式：Npx，N 为数值，不指定则以字幕文件中为准。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FontSize 字体大小，格式：Npx，N 为数值，不指定则以字幕文件中为准。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFontSize() const;

                    /**
                     * 设置字体大小，格式：Npx，N 为数值，不指定则以字幕文件中为准。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fontSize 字体大小，格式：Npx，N 为数值，不指定则以字幕文件中为准。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFontSize(const std::string& _fontSize);

                    /**
                     * 判断参数 FontSize 是否已赋值
                     * @return FontSize 是否已赋值
                     * 
                     */
                    bool FontSizeHasBeenSet() const;

                    /**
                     * 获取字体颜色，格式：0xRRGGBB，默认值：0xFFFFFF（白色）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FontColor 字体颜色，格式：0xRRGGBB，默认值：0xFFFFFF（白色）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFontColor() const;

                    /**
                     * 设置字体颜色，格式：0xRRGGBB，默认值：0xFFFFFF（白色）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fontColor 字体颜色，格式：0xRRGGBB，默认值：0xFFFFFF（白色）
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取文字透明度，取值范围：(0, 1]
<li>0：完全透明</li>
<li>1：完全不透明</li>
默认值：1。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FontAlpha 文字透明度，取值范围：(0, 1]
<li>0：完全透明</li>
<li>1：完全不透明</li>
默认值：1。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetFontAlpha() const;

                    /**
                     * 设置文字透明度，取值范围：(0, 1]
<li>0：完全透明</li>
<li>1：完全不透明</li>
默认值：1。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fontAlpha 文字透明度，取值范围：(0, 1]
<li>0：完全透明</li>
<li>1：完全不透明</li>
默认值：1。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFontAlpha(const double& _fontAlpha);

                    /**
                     * 判断参数 FontAlpha 是否已赋值
                     * @return FontAlpha 是否已赋值
                     * 
                     */
                    bool FontAlphaHasBeenSet() const;

                private:

                    /**
                     * 要压制到视频中的字幕文件地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 指定要压制到视频中的字幕轨道，如果有指定Path，则Path 优先级更高。Path 和 StreamIndex 至少指定一个。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_streamIndex;
                    bool m_streamIndexHasBeenSet;

                    /**
                     * 字体类型，
<li>hei.ttf：黑体</li>
<li>song.ttf：宋体</li>
<li>simkai.ttf：楷体</li>
<li>arial.ttf：仅支持英文</li>
默认hei.ttf
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fontType;
                    bool m_fontTypeHasBeenSet;

                    /**
                     * 字体大小，格式：Npx，N 为数值，不指定则以字幕文件中为准。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fontSize;
                    bool m_fontSizeHasBeenSet;

                    /**
                     * 字体颜色，格式：0xRRGGBB，默认值：0xFFFFFF（白色）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fontColor;
                    bool m_fontColorHasBeenSet;

                    /**
                     * 文字透明度，取值范围：(0, 1]
<li>0：完全透明</li>
<li>1：完全不透明</li>
默认值：1。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_fontAlpha;
                    bool m_fontAlphaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLETEMPLATE_H_
