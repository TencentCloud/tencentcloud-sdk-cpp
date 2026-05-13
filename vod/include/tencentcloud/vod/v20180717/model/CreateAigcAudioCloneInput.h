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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCAUDIOCLONEINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCAUDIOCLONEINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcAudioCloneInputFileInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 创建 AIGC 声音复刻输入信息。
                */
                class CreateAigcAudioCloneInput : public AbstractModel
                {
                public:
                    CreateAigcAudioCloneInput();
                    ~CreateAigcAudioCloneInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>原音频文件，模型将以此参数中传入的音频音色为示例对音色进行复刻。</p>
                     * @return AudioFileInfo <p>原音频文件，模型将以此参数中传入的音频音色为示例对音色进行复刻。</p>
                     * 
                     */
                    AigcAudioCloneInputFileInfo GetAudioFileInfo() const;

                    /**
                     * 设置<p>原音频文件，模型将以此参数中传入的音频音色为示例对音色进行复刻。</p>
                     * @param _audioFileInfo <p>原音频文件，模型将以此参数中传入的音频音色为示例对音色进行复刻。</p>
                     * 
                     */
                    void SetAudioFileInfo(const AigcAudioCloneInputFileInfo& _audioFileInfo);

                    /**
                     * 判断参数 AudioFileInfo 是否已赋值
                     * @return AudioFileInfo 是否已赋值
                     * 
                     */
                    bool AudioFileInfoHasBeenSet() const;

                    /**
                     * 获取<p>自定义的声音ID。</p>
                     * @return VoiceId <p>自定义的声音ID。</p>
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置<p>自定义的声音ID。</p>
                     * @param _voiceId <p>自定义的声音ID。</p>
                     * 
                     */
                    void SetVoiceId(const std::string& _voiceId);

                    /**
                     * 判断参数 VoiceId 是否已赋值
                     * @return VoiceId 是否已赋值
                     * 
                     */
                    bool VoiceIdHasBeenSet() const;

                    /**
                     * 获取<p>复刻试听参数。</p>
                     * @return Text <p>复刻试听参数。</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>复刻试听参数。</p>
                     * @param _text <p>复刻试听参数。</p>
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取<p>音色复刻示例音频。</p>
                     * @return PromptAudioFileInfo <p>音色复刻示例音频。</p>
                     * 
                     */
                    AigcAudioCloneInputFileInfo GetPromptAudioFileInfo() const;

                    /**
                     * 设置<p>音色复刻示例音频。</p>
                     * @param _promptAudioFileInfo <p>音色复刻示例音频。</p>
                     * 
                     */
                    void SetPromptAudioFileInfo(const AigcAudioCloneInputFileInfo& _promptAudioFileInfo);

                    /**
                     * 判断参数 PromptAudioFileInfo 是否已赋值
                     * @return PromptAudioFileInfo 是否已赋值
                     * 
                     */
                    bool PromptAudioFileInfoHasBeenSet() const;

                    /**
                     * 获取<p>示例音频对应的文本内容。</p>
                     * @return PromptText <p>示例音频对应的文本内容。</p>
                     * 
                     */
                    std::string GetPromptText() const;

                    /**
                     * 设置<p>示例音频对应的文本内容。</p>
                     * @param _promptText <p>示例音频对应的文本内容。</p>
                     * 
                     */
                    void SetPromptText(const std::string& _promptText);

                    /**
                     * 判断参数 PromptText 是否已赋值
                     * @return PromptText 是否已赋值
                     * 
                     */
                    bool PromptTextHasBeenSet() const;

                    /**
                     * 获取<p>透传参数。</p>
                     * @return Payload <p>透传参数。</p>
                     * 
                     */
                    std::string GetPayload() const;

                    /**
                     * 设置<p>透传参数。</p>
                     * @param _payload <p>透传参数。</p>
                     * 
                     */
                    void SetPayload(const std::string& _payload);

                    /**
                     * 判断参数 Payload 是否已赋值
                     * @return Payload 是否已赋值
                     * 
                     */
                    bool PayloadHasBeenSet() const;

                private:

                    /**
                     * <p>原音频文件，模型将以此参数中传入的音频音色为示例对音色进行复刻。</p>
                     */
                    AigcAudioCloneInputFileInfo m_audioFileInfo;
                    bool m_audioFileInfoHasBeenSet;

                    /**
                     * <p>自定义的声音ID。</p>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>复刻试听参数。</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>音色复刻示例音频。</p>
                     */
                    AigcAudioCloneInputFileInfo m_promptAudioFileInfo;
                    bool m_promptAudioFileInfoHasBeenSet;

                    /**
                     * <p>示例音频对应的文本内容。</p>
                     */
                    std::string m_promptText;
                    bool m_promptTextHasBeenSet;

                    /**
                     * <p>透传参数。</p>
                     */
                    std::string m_payload;
                    bool m_payloadHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCAUDIOCLONEINPUT_H_
