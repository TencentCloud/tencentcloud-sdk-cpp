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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_VERIFYTOP_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_VERIFYTOP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * 声纹组对比结果top数据
                */
                class VerifyTop : public AbstractModel
                {
                public:
                    VerifyTop();
                    ~VerifyTop() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取相似度打分
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Score 相似度打分
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScore() const;

                    /**
                     * 设置相似度打分
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _score 相似度打分
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScore(const std::string& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取说话人id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VoicePrintId 说话人id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVoicePrintId() const;

                    /**
                     * 设置说话人id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _voicePrintId 说话人id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVoicePrintId(const std::string& _voicePrintId);

                    /**
                     * 判断参数 VoicePrintId 是否已赋值
                     * @return VoicePrintId 是否已赋值
                     * 
                     */
                    bool VoicePrintIdHasBeenSet() const;

                    /**
                     * 获取说话人昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpeakerId 说话人昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSpeakerId() const;

                    /**
                     * 设置说话人昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _speakerId 说话人昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpeakerId(const std::string& _speakerId);

                    /**
                     * 判断参数 SpeakerId 是否已赋值
                     * @return SpeakerId 是否已赋值
                     * 
                     */
                    bool SpeakerIdHasBeenSet() const;

                private:

                    /**
                     * 相似度打分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 说话人id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_voicePrintId;
                    bool m_voicePrintIdHasBeenSet;

                    /**
                     * 说话人昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_speakerId;
                    bool m_speakerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_VERIFYTOP_H_
