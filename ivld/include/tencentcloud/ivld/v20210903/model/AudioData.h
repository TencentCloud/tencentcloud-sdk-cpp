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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_AUDIODATA_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_AUDIODATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ivld/v20210903/model/AudioInfo.h>
#include <tencentcloud/ivld/v20210903/model/MultiLevelTag.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * 音频文件分析结果数据
                */
                class AudioData : public AbstractModel
                {
                public:
                    AudioData();
                    ~AudioData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音频识别文本结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AudioInfoSet 音频识别文本结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AudioInfo> GetAudioInfoSet() const;

                    /**
                     * 设置音频识别文本结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _audioInfoSet 音频识别文本结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAudioInfoSet(const std::vector<AudioInfo>& _audioInfoSet);

                    /**
                     * 判断参数 AudioInfoSet 是否已赋值
                     * @return AudioInfoSet 是否已赋值
                     * 
                     */
                    bool AudioInfoSetHasBeenSet() const;

                    /**
                     * 获取音频识别标签数据
                     * @return TextTagSet 音频识别标签数据
                     * 
                     */
                    MultiLevelTag GetTextTagSet() const;

                    /**
                     * 设置音频识别标签数据
                     * @param _textTagSet 音频识别标签数据
                     * 
                     */
                    void SetTextTagSet(const MultiLevelTag& _textTagSet);

                    /**
                     * 判断参数 TextTagSet 是否已赋值
                     * @return TextTagSet 是否已赋值
                     * 
                     */
                    bool TextTagSetHasBeenSet() const;

                    /**
                     * 获取音频下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WebMediaURL 音频下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWebMediaURL() const;

                    /**
                     * 设置音频下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _webMediaURL 音频下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWebMediaURL(const std::string& _webMediaURL);

                    /**
                     * 判断参数 WebMediaURL 是否已赋值
                     * @return WebMediaURL 是否已赋值
                     * 
                     */
                    bool WebMediaURLHasBeenSet() const;

                private:

                    /**
                     * 音频识别文本结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AudioInfo> m_audioInfoSet;
                    bool m_audioInfoSetHasBeenSet;

                    /**
                     * 音频识别标签数据
                     */
                    MultiLevelTag m_textTagSet;
                    bool m_textTagSetHasBeenSet;

                    /**
                     * 音频下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_webMediaURL;
                    bool m_webMediaURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_AUDIODATA_H_
