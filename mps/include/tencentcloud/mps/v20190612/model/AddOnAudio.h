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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ADDONAUDIO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ADDONAUDIO_H_

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
                * 外挂音频。
                */
                class AddOnAudio : public AbstractModel
                {
                public:
                    AddOnAudio();
                    ~AddOnAudio() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>音频文件输入信息。注意：（1）音频流的编码格式支持：aac、ac3、eac3、flac、opus和mp3；（2）当转自适应码流模板中设置的切片类型为ts的时候，音频流的编码格式不能为flac。</p>
                     * @return InputInfo <p>音频文件输入信息。注意：（1）音频流的编码格式支持：aac、ac3、eac3、flac、opus和mp3；（2）当转自适应码流模板中设置的切片类型为ts的时候，音频流的编码格式不能为flac。</p>
                     * 
                     */
                    MediaInputInfo GetInputInfo() const;

                    /**
                     * 设置<p>音频文件输入信息。注意：（1）音频流的编码格式支持：aac、ac3、eac3、flac、opus和mp3；（2）当转自适应码流模板中设置的切片类型为ts的时候，音频流的编码格式不能为flac。</p>
                     * @param _inputInfo <p>音频文件输入信息。注意：（1）音频流的编码格式支持：aac、ac3、eac3、flac、opus和mp3；（2）当转自适应码流模板中设置的切片类型为ts的时候，音频流的编码格式不能为flac。</p>
                     * 
                     */
                    void SetInputInfo(const MediaInputInfo& _inputInfo);

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     * 
                     */
                    bool InputInfoHasBeenSet() const;

                    /**
                     * 获取<p>音轨名称，如：中文、English。注意：仅支持中文、英文、数字、空格、下划线(_)、短横线(-)、句点(.)和中英文括号，长度不能超过64个字符。</p>
                     * @return AudioName <p>音轨名称，如：中文、English。注意：仅支持中文、英文、数字、空格、下划线(_)、短横线(-)、句点(.)和中英文括号，长度不能超过64个字符。</p>
                     * 
                     */
                    std::string GetAudioName() const;

                    /**
                     * 设置<p>音轨名称，如：中文、English。注意：仅支持中文、英文、数字、空格、下划线(_)、短横线(-)、句点(.)和中英文括号，长度不能超过64个字符。</p>
                     * @param _audioName <p>音轨名称，如：中文、English。注意：仅支持中文、英文、数字、空格、下划线(_)、短横线(-)、句点(.)和中英文括号，长度不能超过64个字符。</p>
                     * 
                     */
                    void SetAudioName(const std::string& _audioName);

                    /**
                     * 判断参数 AudioName 是否已赋值
                     * @return AudioName 是否已赋值
                     * 
                     */
                    bool AudioNameHasBeenSet() const;

                    /**
                     * 获取<p>音轨语言，如：chi、eng，遵循 ISO 639-2</p>
                     * @return AudioLanguage <p>音轨语言，如：chi、eng，遵循 ISO 639-2</p>
                     * 
                     */
                    std::string GetAudioLanguage() const;

                    /**
                     * 设置<p>音轨语言，如：chi、eng，遵循 ISO 639-2</p>
                     * @param _audioLanguage <p>音轨语言，如：chi、eng，遵循 ISO 639-2</p>
                     * 
                     */
                    void SetAudioLanguage(const std::string& _audioLanguage);

                    /**
                     * 判断参数 AudioLanguage 是否已赋值
                     * @return AudioLanguage 是否已赋值
                     * 
                     */
                    bool AudioLanguageHasBeenSet() const;

                    /**
                     * 获取<p>默认音频轨道。为true时指定当前音频为默认音频轨道，最多可指定1条默认音频轨道。</p><p>默认值：false</p>
                     * @return DefaultTrack <p>默认音频轨道。为true时指定当前音频为默认音频轨道，最多可指定1条默认音频轨道。</p><p>默认值：false</p>
                     * 
                     */
                    bool GetDefaultTrack() const;

                    /**
                     * 设置<p>默认音频轨道。为true时指定当前音频为默认音频轨道，最多可指定1条默认音频轨道。</p><p>默认值：false</p>
                     * @param _defaultTrack <p>默认音频轨道。为true时指定当前音频为默认音频轨道，最多可指定1条默认音频轨道。</p><p>默认值：false</p>
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
                     * <p>音频文件输入信息。注意：（1）音频流的编码格式支持：aac、ac3、eac3、flac、opus和mp3；（2）当转自适应码流模板中设置的切片类型为ts的时候，音频流的编码格式不能为flac。</p>
                     */
                    MediaInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * <p>音轨名称，如：中文、English。注意：仅支持中文、英文、数字、空格、下划线(_)、短横线(-)、句点(.)和中英文括号，长度不能超过64个字符。</p>
                     */
                    std::string m_audioName;
                    bool m_audioNameHasBeenSet;

                    /**
                     * <p>音轨语言，如：chi、eng，遵循 ISO 639-2</p>
                     */
                    std::string m_audioLanguage;
                    bool m_audioLanguageHasBeenSet;

                    /**
                     * <p>默认音频轨道。为true时指定当前音频为默认音频轨道，最多可指定1条默认音频轨道。</p><p>默认值：false</p>
                     */
                    bool m_defaultTrack;
                    bool m_defaultTrackHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ADDONAUDIO_H_
