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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_VOICEPRINTBASEDATA_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_VOICEPRINTBASEDATA_H_

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
                * 说话人基础数据，包括说话人id和说话人昵称
                */
                class VoicePrintBaseData : public AbstractModel
                {
                public:
                    VoicePrintBaseData();
                    ~VoicePrintBaseData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * @return SpeakerNick 说话人昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSpeakerNick() const;

                    /**
                     * 设置说话人昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _speakerNick 说话人昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpeakerNick(const std::string& _speakerNick);

                    /**
                     * 判断参数 SpeakerNick 是否已赋值
                     * @return SpeakerNick 是否已赋值
                     * 
                     */
                    bool SpeakerNickHasBeenSet() const;

                private:

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
                    std::string m_speakerNick;
                    bool m_speakerNickHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_VOICEPRINTBASEDATA_H_
