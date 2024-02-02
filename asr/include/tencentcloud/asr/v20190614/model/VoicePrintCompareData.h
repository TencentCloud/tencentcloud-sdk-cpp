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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_VOICEPRINTCOMPAREDATA_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_VOICEPRINTCOMPAREDATA_H_

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
                * 音频声纹比对结果，包含比对分数
                */
                class VoicePrintCompareData : public AbstractModel
                {
                public:
                    VoicePrintCompareData();
                    ~VoicePrintCompareData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_VOICEPRINTCOMPAREDATA_H_
