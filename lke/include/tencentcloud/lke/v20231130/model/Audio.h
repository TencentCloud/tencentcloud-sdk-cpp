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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_AUDIO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_AUDIO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/AudioTranscript.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 音频信息
                */
                class Audio : public AbstractModel
                {
                public:
                    Audio();
                    ~Audio() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音频文件格式
                     * @return Format 音频文件格式
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置音频文件格式
                     * @param _format 音频文件格式
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取音频文件地址
                     * @return AudioUrl 音频文件地址
                     * 
                     */
                    std::string GetAudioUrl() const;

                    /**
                     * 设置音频文件地址
                     * @param _audioUrl 音频文件地址
                     * 
                     */
                    void SetAudioUrl(const std::string& _audioUrl);

                    /**
                     * 判断参数 AudioUrl 是否已赋值
                     * @return AudioUrl 是否已赋值
                     * 
                     */
                    bool AudioUrlHasBeenSet() const;

                    /**
                     * 获取音频标题
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Title 音频标题
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置音频标题
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _title 音频标题
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取音频文件在正文中的位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Position 音频文件在正文中的位置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPosition() const;

                    /**
                     * 设置音频文件在正文中的位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _position 音频文件在正文中的位置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPosition(const int64_t& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取音频转录后的文字列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AudioTranscripts 音频转录后的文字列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AudioTranscript> GetAudioTranscripts() const;

                    /**
                     * 设置音频转录后的文字列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _audioTranscripts 音频转录后的文字列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAudioTranscripts(const std::vector<AudioTranscript>& _audioTranscripts);

                    /**
                     * 判断参数 AudioTranscripts 是否已赋值
                     * @return AudioTranscripts 是否已赋值
                     * 
                     */
                    bool AudioTranscriptsHasBeenSet() const;

                private:

                    /**
                     * 音频文件格式
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * 音频文件地址
                     */
                    std::string m_audioUrl;
                    bool m_audioUrlHasBeenSet;

                    /**
                     * 音频标题
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 音频文件在正文中的位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * 音频转录后的文字列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AudioTranscript> m_audioTranscripts;
                    bool m_audioTranscriptsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_AUDIO_H_
