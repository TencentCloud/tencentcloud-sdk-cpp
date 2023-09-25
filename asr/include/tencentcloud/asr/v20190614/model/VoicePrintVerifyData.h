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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_VOICEPRINTVERIFYDATA_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_VOICEPRINTVERIFYDATA_H_

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
                * [说话人验证数据](https://cloud.tencent.com/document/product/1093/94481#3.-.E8.BE.93.E5.87.BA.E5.8F.82.E6.95.B0)
                */
                class VoicePrintVerifyData : public AbstractModel
                {
                public:
                    VoicePrintVerifyData();
                    ~VoicePrintVerifyData() = default;
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
                     * 获取匹配度 取值范围(0.0 - 100.0)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Score 匹配度 取值范围(0.0 - 100.0)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScore() const;

                    /**
                     * 设置匹配度 取值范围(0.0 - 100.0)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _score 匹配度 取值范围(0.0 - 100.0)
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
                     * 获取验证结果 0: 未通过 1: 通过
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Decision 验证结果 0: 未通过 1: 通过
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDecision() const;

                    /**
                     * 设置验证结果 0: 未通过 1: 通过
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _decision 验证结果 0: 未通过 1: 通过
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDecision(const int64_t& _decision);

                    /**
                     * 判断参数 Decision 是否已赋值
                     * @return Decision 是否已赋值
                     * 
                     */
                    bool DecisionHasBeenSet() const;

                private:

                    /**
                     * 说话人id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_voicePrintId;
                    bool m_voicePrintIdHasBeenSet;

                    /**
                     * 匹配度 取值范围(0.0 - 100.0)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 验证结果 0: 未通过 1: 通过
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_decision;
                    bool m_decisionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_VOICEPRINTVERIFYDATA_H_
