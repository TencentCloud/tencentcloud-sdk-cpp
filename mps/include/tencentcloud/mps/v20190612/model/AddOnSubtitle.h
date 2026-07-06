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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ADDONSUBTITLE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ADDONSUBTITLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 外挂字幕。
                */
                class AddOnSubtitle : public AbstractModel
                {
                public:
                    AddOnSubtitle();
                    ~AddOnSubtitle() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>插入形式，可选值：</p><li>subtitle-stream：插入字幕轨道</li><li>close-caption-708：CEA-708字幕编码到SEI帧</li><li>close-caption-608：CEA-608字幕编码到SEI帧</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type <p>插入形式，可选值：</p><li>subtitle-stream：插入字幕轨道</li><li>close-caption-708：CEA-708字幕编码到SEI帧</li><li>close-caption-608：CEA-608字幕编码到SEI帧</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>插入形式，可选值：</p><li>subtitle-stream：插入字幕轨道</li><li>close-caption-708：CEA-708字幕编码到SEI帧</li><li>close-caption-608：CEA-608字幕编码到SEI帧</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type <p>插入形式，可选值：</p><li>subtitle-stream：插入字幕轨道</li><li>close-caption-708：CEA-708字幕编码到SEI帧</li><li>close-caption-608：CEA-608字幕编码到SEI帧</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>字幕文件。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Subtitle <p>字幕文件。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaInputInfo GetSubtitle() const;

                    /**
                     * 设置<p>字幕文件。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subtitle <p>字幕文件。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubtitle(const MediaInputInfo& _subtitle);

                    /**
                     * 判断参数 Subtitle 是否已赋值
                     * @return Subtitle 是否已赋值
                     * 
                     */
                    bool SubtitleHasBeenSet() const;

                    /**
                     * 获取<p>字幕名称    。<br>注意：仅支持中文、英文、数字、空格、下划线(_)、短横线(-)、句点(.)和中英文括号，长度不能超过64个字符。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubtitleName <p>字幕名称    。<br>注意：仅支持中文、英文、数字、空格、下划线(_)、短横线(-)、句点(.)和中英文括号，长度不能超过64个字符。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubtitleName() const;

                    /**
                     * 设置<p>字幕名称    。<br>注意：仅支持中文、英文、数字、空格、下划线(_)、短横线(-)、句点(.)和中英文括号，长度不能超过64个字符。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subtitleName <p>字幕名称    。<br>注意：仅支持中文、英文、数字、空格、下划线(_)、短横线(-)、句点(.)和中英文括号，长度不能超过64个字符。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubtitleName(const std::string& _subtitleName);

                    /**
                     * 判断参数 SubtitleName 是否已赋值
                     * @return SubtitleName 是否已赋值
                     * 
                     */
                    bool SubtitleNameHasBeenSet() const;

                    /**
                     * 获取<p>字幕语言，比如：eng</p>
                     * @return SubtitleLanguage <p>字幕语言，比如：eng</p>
                     * 
                     */
                    std::string GetSubtitleLanguage() const;

                    /**
                     * 设置<p>字幕语言，比如：eng</p>
                     * @param _subtitleLanguage <p>字幕语言，比如：eng</p>
                     * 
                     */
                    void SetSubtitleLanguage(const std::string& _subtitleLanguage);

                    /**
                     * 判断参数 SubtitleLanguage 是否已赋值
                     * @return SubtitleLanguage 是否已赋值
                     * 
                     */
                    bool SubtitleLanguageHasBeenSet() const;

                    /**
                     * 获取<p>字幕输出格式。取值{&quot;WebVTT&quot;,&quot;TTML&quot;}。<br>默认值：&quot;WebVTT&quot;</p>
                     * @return OutputFormat <p>字幕输出格式。取值{&quot;WebVTT&quot;,&quot;TTML&quot;}。<br>默认值：&quot;WebVTT&quot;</p>
                     * 
                     */
                    std::string GetOutputFormat() const;

                    /**
                     * 设置<p>字幕输出格式。取值{&quot;WebVTT&quot;,&quot;TTML&quot;}。<br>默认值：&quot;WebVTT&quot;</p>
                     * @param _outputFormat <p>字幕输出格式。取值{&quot;WebVTT&quot;,&quot;TTML&quot;}。<br>默认值：&quot;WebVTT&quot;</p>
                     * 
                     */
                    void SetOutputFormat(const std::string& _outputFormat);

                    /**
                     * 判断参数 OutputFormat 是否已赋值
                     * @return OutputFormat 是否已赋值
                     * 
                     */
                    bool OutputFormatHasBeenSet() const;

                    /**
                     * 获取<p>默认字幕轨道。为true时指定当前字幕为默认字幕轨道，最多可指定1条默认字幕轨道。<br>默认值：false</p>
                     * @return DefaultTrack <p>默认字幕轨道。为true时指定当前字幕为默认字幕轨道，最多可指定1条默认字幕轨道。<br>默认值：false</p>
                     * 
                     */
                    bool GetDefaultTrack() const;

                    /**
                     * 设置<p>默认字幕轨道。为true时指定当前字幕为默认字幕轨道，最多可指定1条默认字幕轨道。<br>默认值：false</p>
                     * @param _defaultTrack <p>默认字幕轨道。为true时指定当前字幕为默认字幕轨道，最多可指定1条默认字幕轨道。<br>默认值：false</p>
                     * 
                     */
                    void SetDefaultTrack(const bool& _defaultTrack);

                    /**
                     * 判断参数 DefaultTrack 是否已赋值
                     * @return DefaultTrack 是否已赋值
                     * 
                     */
                    bool DefaultTrackHasBeenSet() const;

                private:

                    /**
                     * <p>插入形式，可选值：</p><li>subtitle-stream：插入字幕轨道</li><li>close-caption-708：CEA-708字幕编码到SEI帧</li><li>close-caption-608：CEA-608字幕编码到SEI帧</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>字幕文件。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaInputInfo m_subtitle;
                    bool m_subtitleHasBeenSet;

                    /**
                     * <p>字幕名称    。<br>注意：仅支持中文、英文、数字、空格、下划线(_)、短横线(-)、句点(.)和中英文括号，长度不能超过64个字符。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subtitleName;
                    bool m_subtitleNameHasBeenSet;

                    /**
                     * <p>字幕语言，比如：eng</p>
                     */
                    std::string m_subtitleLanguage;
                    bool m_subtitleLanguageHasBeenSet;

                    /**
                     * <p>字幕输出格式。取值{&quot;WebVTT&quot;,&quot;TTML&quot;}。<br>默认值：&quot;WebVTT&quot;</p>
                     */
                    std::string m_outputFormat;
                    bool m_outputFormatHasBeenSet;

                    /**
                     * <p>默认字幕轨道。为true时指定当前字幕为默认字幕轨道，最多可指定1条默认字幕轨道。<br>默认值：false</p>
                     */
                    bool m_defaultTrack;
                    bool m_defaultTrackHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ADDONSUBTITLE_H_
