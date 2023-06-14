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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ASRFULLTEXTCONFIGUREINFOFORUPDATE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ASRFULLTEXTCONFIGUREINFOFORUPDATE_H_

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
                * 语音全文识别任务控制参数
                */
                class AsrFullTextConfigureInfoForUpdate : public AbstractModel
                {
                public:
                    AsrFullTextConfigureInfoForUpdate();
                    ~AsrFullTextConfigureInfoForUpdate() = default;
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
                     * 获取生成的字幕文件格式，填空字符串表示不生成字幕文件，可选值：
<li>vtt：生成 WebVTT 字幕文件。</li>
                     * @return SubtitleFormat 生成的字幕文件格式，填空字符串表示不生成字幕文件，可选值：
<li>vtt：生成 WebVTT 字幕文件。</li>
                     * 
                     */
                    std::string GetSubtitleFormat() const;

                    /**
                     * 设置生成的字幕文件格式，填空字符串表示不生成字幕文件，可选值：
<li>vtt：生成 WebVTT 字幕文件。</li>
                     * @param _subtitleFormat 生成的字幕文件格式，填空字符串表示不生成字幕文件，可选值：
<li>vtt：生成 WebVTT 字幕文件。</li>
                     * 
                     */
                    void SetSubtitleFormat(const std::string& _subtitleFormat);

                    /**
                     * 判断参数 SubtitleFormat 是否已赋值
                     * @return SubtitleFormat 是否已赋值
                     * 
                     */
                    bool SubtitleFormatHasBeenSet() const;

                    /**
                     * 获取视频源语言。
                     * @return SourceLanguage 视频源语言。
                     * 
                     */
                    std::string GetSourceLanguage() const;

                    /**
                     * 设置视频源语言。
                     * @param _sourceLanguage 视频源语言。
                     * 
                     */
                    void SetSourceLanguage(const std::string& _sourceLanguage);

                    /**
                     * 判断参数 SourceLanguage 是否已赋值
                     * @return SourceLanguage 是否已赋值
                     * 
                     */
                    bool SourceLanguageHasBeenSet() const;

                private:

                    /**
                     * 语音全文识别任务开关，可选值：
<li>ON：开启智能语音全文识别任务；</li>
<li>OFF：关闭智能语音全文识别任务。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 生成的字幕文件格式，填空字符串表示不生成字幕文件，可选值：
<li>vtt：生成 WebVTT 字幕文件。</li>
                     */
                    std::string m_subtitleFormat;
                    bool m_subtitleFormatHasBeenSet;

                    /**
                     * 视频源语言。
                     */
                    std::string m_sourceLanguage;
                    bool m_sourceLanguageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ASRFULLTEXTCONFIGUREINFOFORUPDATE_H_
