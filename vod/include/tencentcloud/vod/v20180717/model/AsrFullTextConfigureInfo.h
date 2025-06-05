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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_ASRFULLTEXTCONFIGUREINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_ASRFULLTEXTCONFIGUREINFO_H_

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
                * 语音全文识别任务控制参数。
<font color=red>注意：本参数已不再维护，推荐使用 AsrTranslateConfigure 参数发起语音翻译识别（当 DstLanguage 不填或填空字符串时，则不进行翻译，计费项和语音全文识别一致）。</font>
                */
                class AsrFullTextConfigureInfo : public AbstractModel
                {
                public:
                    AsrFullTextConfigureInfo();
                    ~AsrFullTextConfigureInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取语音全文识别任务开关，可选值：
<li>ON：开启智能语音全文识别任务；</li>
<li>OFF：关闭智能语音全文识别任务。</li>
                     * @return Switch 语音全文识别任务开关，可选值：
<li>ON：开启智能语音全文识别任务；</li>
<li>OFF：关闭智能语音全文识别任务。</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置语音全文识别任务开关，可选值：
<li>ON：开启智能语音全文识别任务；</li>
<li>OFF：关闭智能语音全文识别任务。</li>
                     * @param _switch 语音全文识别任务开关，可选值：
<li>ON：开启智能语音全文识别任务；</li>
<li>OFF：关闭智能语音全文识别任务。</li>
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
                     * 获取生成的字幕文件格式列表，不填或者填空数组表示不生成字幕文件，可选值：
<li>vtt：生成 WebVTT 字幕文件；</li>
<li>srt：生成 SRT 字幕文件。</li><font color=red>注意：</font>云点播媒资信息仅支持添加 vtt 字幕，因此当且仅当 SubtitleFormats 包含 vtt 时，云点播将生成的字幕添加到媒资。
                     * @return SubtitleFormats 生成的字幕文件格式列表，不填或者填空数组表示不生成字幕文件，可选值：
<li>vtt：生成 WebVTT 字幕文件；</li>
<li>srt：生成 SRT 字幕文件。</li><font color=red>注意：</font>云点播媒资信息仅支持添加 vtt 字幕，因此当且仅当 SubtitleFormats 包含 vtt 时，云点播将生成的字幕添加到媒资。
                     * 
                     */
                    std::vector<std::string> GetSubtitleFormats() const;

                    /**
                     * 设置生成的字幕文件格式列表，不填或者填空数组表示不生成字幕文件，可选值：
<li>vtt：生成 WebVTT 字幕文件；</li>
<li>srt：生成 SRT 字幕文件。</li><font color=red>注意：</font>云点播媒资信息仅支持添加 vtt 字幕，因此当且仅当 SubtitleFormats 包含 vtt 时，云点播将生成的字幕添加到媒资。
                     * @param _subtitleFormats 生成的字幕文件格式列表，不填或者填空数组表示不生成字幕文件，可选值：
<li>vtt：生成 WebVTT 字幕文件；</li>
<li>srt：生成 SRT 字幕文件。</li><font color=red>注意：</font>云点播媒资信息仅支持添加 vtt 字幕，因此当且仅当 SubtitleFormats 包含 vtt 时，云点播将生成的字幕添加到媒资。
                     * 
                     */
                    void SetSubtitleFormats(const std::vector<std::string>& _subtitleFormats);

                    /**
                     * 判断参数 SubtitleFormats 是否已赋值
                     * @return SubtitleFormats 是否已赋值
                     * 
                     */
                    bool SubtitleFormatsHasBeenSet() const;

                    /**
                     * 获取生成的字幕文件格式，不填或者填空字符串表示不生成字幕文件，可选值：
<li>vtt：生成 WebVTT 字幕文件；</li>
<li>srt：生成 SRT 字幕文件。</li>
<font color='red'>注意：此字段已废弃，建议使用 SubtitleFormats。</font>
                     * @return SubtitleFormat 生成的字幕文件格式，不填或者填空字符串表示不生成字幕文件，可选值：
<li>vtt：生成 WebVTT 字幕文件；</li>
<li>srt：生成 SRT 字幕文件。</li>
<font color='red'>注意：此字段已废弃，建议使用 SubtitleFormats。</font>
                     * @deprecated
                     */
                    std::string GetSubtitleFormat() const;

                    /**
                     * 设置生成的字幕文件格式，不填或者填空字符串表示不生成字幕文件，可选值：
<li>vtt：生成 WebVTT 字幕文件；</li>
<li>srt：生成 SRT 字幕文件。</li>
<font color='red'>注意：此字段已废弃，建议使用 SubtitleFormats。</font>
                     * @param _subtitleFormat 生成的字幕文件格式，不填或者填空字符串表示不生成字幕文件，可选值：
<li>vtt：生成 WebVTT 字幕文件；</li>
<li>srt：生成 SRT 字幕文件。</li>
<font color='red'>注意：此字段已废弃，建议使用 SubtitleFormats。</font>
                     * @deprecated
                     */
                    void SetSubtitleFormat(const std::string& _subtitleFormat);

                    /**
                     * 判断参数 SubtitleFormat 是否已赋值
                     * @return SubtitleFormat 是否已赋值
                     * @deprecated
                     */
                    bool SubtitleFormatHasBeenSet() const;

                    /**
                     * 获取媒体源语言，取值范围：
<li>zh：中文普通话；</li>
<li>en：英语；</li>
<li>ja：日语；</li>
<li>zh-ca：粤语。</li>
<font color=red>注意：</font> 填空字符串，或者不填该参数，则自动识别（效果较难保证，推荐填写原始媒体对应的语言，以提高识别的准确率）。
                     * @return SrcLanguage 媒体源语言，取值范围：
<li>zh：中文普通话；</li>
<li>en：英语；</li>
<li>ja：日语；</li>
<li>zh-ca：粤语。</li>
<font color=red>注意：</font> 填空字符串，或者不填该参数，则自动识别（效果较难保证，推荐填写原始媒体对应的语言，以提高识别的准确率）。
                     * 
                     */
                    std::string GetSrcLanguage() const;

                    /**
                     * 设置媒体源语言，取值范围：
<li>zh：中文普通话；</li>
<li>en：英语；</li>
<li>ja：日语；</li>
<li>zh-ca：粤语。</li>
<font color=red>注意：</font> 填空字符串，或者不填该参数，则自动识别（效果较难保证，推荐填写原始媒体对应的语言，以提高识别的准确率）。
                     * @param _srcLanguage 媒体源语言，取值范围：
<li>zh：中文普通话；</li>
<li>en：英语；</li>
<li>ja：日语；</li>
<li>zh-ca：粤语。</li>
<font color=red>注意：</font> 填空字符串，或者不填该参数，则自动识别（效果较难保证，推荐填写原始媒体对应的语言，以提高识别的准确率）。
                     * 
                     */
                    void SetSrcLanguage(const std::string& _srcLanguage);

                    /**
                     * 判断参数 SrcLanguage 是否已赋值
                     * @return SrcLanguage 是否已赋值
                     * 
                     */
                    bool SrcLanguageHasBeenSet() const;

                    /**
                     * 获取指定字幕名称，长度限制：64 个字符。该值将用于播放器展示，若不填则云点播自动生成。
<font color=red>注意：</font>仅当 SubtitleFormats 包含 vtt 时，该字段有效。
                     * @return SubtitleName 指定字幕名称，长度限制：64 个字符。该值将用于播放器展示，若不填则云点播自动生成。
<font color=red>注意：</font>仅当 SubtitleFormats 包含 vtt 时，该字段有效。
                     * 
                     */
                    std::string GetSubtitleName() const;

                    /**
                     * 设置指定字幕名称，长度限制：64 个字符。该值将用于播放器展示，若不填则云点播自动生成。
<font color=red>注意：</font>仅当 SubtitleFormats 包含 vtt 时，该字段有效。
                     * @param _subtitleName 指定字幕名称，长度限制：64 个字符。该值将用于播放器展示，若不填则云点播自动生成。
<font color=red>注意：</font>仅当 SubtitleFormats 包含 vtt 时，该字段有效。
                     * 
                     */
                    void SetSubtitleName(const std::string& _subtitleName);

                    /**
                     * 判断参数 SubtitleName 是否已赋值
                     * @return SubtitleName 是否已赋值
                     * 
                     */
                    bool SubtitleNameHasBeenSet() const;

                private:

                    /**
                     * 语音全文识别任务开关，可选值：
<li>ON：开启智能语音全文识别任务；</li>
<li>OFF：关闭智能语音全文识别任务。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 生成的字幕文件格式列表，不填或者填空数组表示不生成字幕文件，可选值：
<li>vtt：生成 WebVTT 字幕文件；</li>
<li>srt：生成 SRT 字幕文件。</li><font color=red>注意：</font>云点播媒资信息仅支持添加 vtt 字幕，因此当且仅当 SubtitleFormats 包含 vtt 时，云点播将生成的字幕添加到媒资。
                     */
                    std::vector<std::string> m_subtitleFormats;
                    bool m_subtitleFormatsHasBeenSet;

                    /**
                     * 生成的字幕文件格式，不填或者填空字符串表示不生成字幕文件，可选值：
<li>vtt：生成 WebVTT 字幕文件；</li>
<li>srt：生成 SRT 字幕文件。</li>
<font color='red'>注意：此字段已废弃，建议使用 SubtitleFormats。</font>
                     */
                    std::string m_subtitleFormat;
                    bool m_subtitleFormatHasBeenSet;

                    /**
                     * 媒体源语言，取值范围：
<li>zh：中文普通话；</li>
<li>en：英语；</li>
<li>ja：日语；</li>
<li>zh-ca：粤语。</li>
<font color=red>注意：</font> 填空字符串，或者不填该参数，则自动识别（效果较难保证，推荐填写原始媒体对应的语言，以提高识别的准确率）。
                     */
                    std::string m_srcLanguage;
                    bool m_srcLanguageHasBeenSet;

                    /**
                     * 指定字幕名称，长度限制：64 个字符。该值将用于播放器展示，若不填则云点播自动生成。
<font color=red>注意：</font>仅当 SubtitleFormats 包含 vtt 时，该字段有效。
                     */
                    std::string m_subtitleName;
                    bool m_subtitleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ASRFULLTEXTCONFIGUREINFO_H_
