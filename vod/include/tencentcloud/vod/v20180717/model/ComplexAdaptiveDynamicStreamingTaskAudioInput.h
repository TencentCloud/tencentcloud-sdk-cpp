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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_COMPLEXADAPTIVEDYNAMICSTREAMINGTASKAUDIOINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_COMPLEXADAPTIVEDYNAMICSTREAMINGTASKAUDIOINPUT_H_

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
                * 自适应码流任务多语言音频流输入参数。
                */
                class ComplexAdaptiveDynamicStreamingTaskAudioInput : public AbstractModel
                {
                public:
                    ComplexAdaptiveDynamicStreamingTaskAudioInput();
                    ~ComplexAdaptiveDynamicStreamingTaskAudioInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音频源的媒体 ID。固定取该媒体中的首个音频流，视频流和其它音频流（如有）将被忽略。
                     * @return FileId 音频源的媒体 ID。固定取该媒体中的首个音频流，视频流和其它音频流（如有）将被忽略。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置音频源的媒体 ID。固定取该媒体中的首个音频流，视频流和其它音频流（如有）将被忽略。
                     * @param _fileId 音频源的媒体 ID。固定取该媒体中的首个音频流，视频流和其它音频流（如有）将被忽略。
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取输出的自适应码流中的音频流名称，长度限制为16个字符。
                     * @return Name 输出的自适应码流中的音频流名称，长度限制为16个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置输出的自适应码流中的音频流名称，长度限制为16个字符。
                     * @param _name 输出的自适应码流中的音频流名称，长度限制为16个字符。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取输出的自适应码流中的音频流语言，长度限制为16个字符。要求符合 RFC5646 规范。
                     * @return Language 输出的自适应码流中的音频流语言，长度限制为16个字符。要求符合 RFC5646 规范。
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置输出的自适应码流中的音频流语言，长度限制为16个字符。要求符合 RFC5646 规范。
                     * @param _language 输出的自适应码流中的音频流语言，长度限制为16个字符。要求符合 RFC5646 规范。
                     * 
                     */
                    void SetLanguage(const std::string& _language);

                    /**
                     * 判断参数 Language 是否已赋值
                     * @return Language 是否已赋值
                     * 
                     */
                    bool LanguageHasBeenSet() const;

                    /**
                     * 获取是否设置为自适应码流的默认音频。取值：
<li>YES：设置为默认音频；</li>
<li>NO：不设置为默认音频（默认值）。</li>

                     * @return Default 是否设置为自适应码流的默认音频。取值：
<li>YES：设置为默认音频；</li>
<li>NO：不设置为默认音频（默认值）。</li>

                     * 
                     */
                    std::string GetDefault() const;

                    /**
                     * 设置是否设置为自适应码流的默认音频。取值：
<li>YES：设置为默认音频；</li>
<li>NO：不设置为默认音频（默认值）。</li>

                     * @param _default 是否设置为自适应码流的默认音频。取值：
<li>YES：设置为默认音频；</li>
<li>NO：不设置为默认音频（默认值）。</li>

                     * 
                     */
                    void SetDefault(const std::string& _default);

                    /**
                     * 判断参数 Default 是否已赋值
                     * @return Default 是否已赋值
                     * 
                     */
                    bool DefaultHasBeenSet() const;

                private:

                    /**
                     * 音频源的媒体 ID。固定取该媒体中的首个音频流，视频流和其它音频流（如有）将被忽略。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 输出的自适应码流中的音频流名称，长度限制为16个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 输出的自适应码流中的音频流语言，长度限制为16个字符。要求符合 RFC5646 规范。
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * 是否设置为自适应码流的默认音频。取值：
<li>YES：设置为默认音频；</li>
<li>NO：不设置为默认音频（默认值）。</li>

                     */
                    std::string m_default;
                    bool m_defaultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_COMPLEXADAPTIVEDYNAMICSTREAMINGTASKAUDIOINPUT_H_
