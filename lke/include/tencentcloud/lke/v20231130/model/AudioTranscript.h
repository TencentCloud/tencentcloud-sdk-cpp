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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_AUDIOTRANSCRIPT_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_AUDIOTRANSCRIPT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 音频转录的文本内容
                */
                class AudioTranscript : public AbstractModel
                {
                public:
                    AudioTranscript();
                    ~AudioTranscript() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音频的发言者
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Speaker 音频的发言者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSpeaker() const;

                    /**
                     * 设置音频的发言者
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _speaker 音频的发言者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpeaker(const std::string& _speaker);

                    /**
                     * 判断参数 Speaker 是否已赋值
                     * @return Speaker 是否已赋值
                     * 
                     */
                    bool SpeakerHasBeenSet() const;

                    /**
                     * 获取音频转录为文字后的内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Transcript 音频转录为文字后的内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTranscript() const;

                    /**
                     * 设置音频转录为文字后的内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _transcript 音频转录为文字后的内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTranscript(const std::string& _transcript);

                    /**
                     * 判断参数 Transcript 是否已赋值
                     * @return Transcript 是否已赋值
                     * 
                     */
                    bool TranscriptHasBeenSet() const;

                private:

                    /**
                     * 音频的发言者
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_speaker;
                    bool m_speakerHasBeenSet;

                    /**
                     * 音频转录为文字后的内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_transcript;
                    bool m_transcriptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_AUDIOTRANSCRIPT_H_
