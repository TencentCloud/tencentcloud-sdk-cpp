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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_APPEARINFO_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_APPEARINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ivld/v20210903/model/TextAppearInfo.h>
#include <tencentcloud/ivld/v20210903/model/VideoAppearInfo.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * 出现信息结构

包含关键词在音频转文字(ASR)，图片转文字(OCR)以及视频结果中的出现信息

                */
                class AppearInfo : public AbstractModel
                {
                public:
                    AppearInfo();
                    ~AppearInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取关键词在音频文本结果中的出现位置数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AudioAppearSet 关键词在音频文本结果中的出现位置数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TextAppearInfo> GetAudioAppearSet() const;

                    /**
                     * 设置关键词在音频文本结果中的出现位置数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _audioAppearSet 关键词在音频文本结果中的出现位置数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAudioAppearSet(const std::vector<TextAppearInfo>& _audioAppearSet);

                    /**
                     * 判断参数 AudioAppearSet 是否已赋值
                     * @return AudioAppearSet 是否已赋值
                     * 
                     */
                    bool AudioAppearSetHasBeenSet() const;

                    /**
                     * 获取关键词在可视文本结果中的出现位置数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TextAppearSet 关键词在可视文本结果中的出现位置数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TextAppearInfo> GetTextAppearSet() const;

                    /**
                     * 设置关键词在可视文本结果中的出现位置数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _textAppearSet 关键词在可视文本结果中的出现位置数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTextAppearSet(const std::vector<TextAppearInfo>& _textAppearSet);

                    /**
                     * 判断参数 TextAppearSet 是否已赋值
                     * @return TextAppearSet 是否已赋值
                     * 
                     */
                    bool TextAppearSetHasBeenSet() const;

                    /**
                     * 获取关键词在视频信息中的出现位置数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VideoAppearSet 关键词在视频信息中的出现位置数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<VideoAppearInfo> GetVideoAppearSet() const;

                    /**
                     * 设置关键词在视频信息中的出现位置数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _videoAppearSet 关键词在视频信息中的出现位置数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVideoAppearSet(const std::vector<VideoAppearInfo>& _videoAppearSet);

                    /**
                     * 判断参数 VideoAppearSet 是否已赋值
                     * @return VideoAppearSet 是否已赋值
                     * 
                     */
                    bool VideoAppearSetHasBeenSet() const;

                private:

                    /**
                     * 关键词在音频文本结果中的出现位置数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TextAppearInfo> m_audioAppearSet;
                    bool m_audioAppearSetHasBeenSet;

                    /**
                     * 关键词在可视文本结果中的出现位置数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TextAppearInfo> m_textAppearSet;
                    bool m_textAppearSetHasBeenSet;

                    /**
                     * 关键词在视频信息中的出现位置数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VideoAppearInfo> m_videoAppearSet;
                    bool m_videoAppearSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_APPEARINFO_H_
