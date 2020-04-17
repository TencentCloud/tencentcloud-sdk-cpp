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

#ifndef TENCENTCLOUD_TAF_V20200210_MODEL_OUTPUTKOLVALUE_H_
#define TENCENTCLOUD_TAF_V20200210_MODEL_OUTPUTKOLVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Taf
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * CheckKol
                */
                class OutputKolValue : public AbstractModel
                {
                public:
                    OutputKolValue();
                    ~OutputKolValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取KOL账号ID[比如微信公众号ID]
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id KOL账号ID[比如微信公众号ID]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetId() const;

                    /**
                     * 设置KOL账号ID[比如微信公众号ID]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Id KOL账号ID[比如微信公众号ID]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取是否查得[0：未查得；1：查得]
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsCheck 是否查得[0：未查得；1：查得]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetIsCheck() const;

                    /**
                     * 设置是否查得[0：未查得；1：查得]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsCheck 是否查得[0：未查得；1：查得]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsCheck(const int64_t& _isCheck);

                    /**
                     * 判断参数 IsCheck 是否已赋值
                     * @return IsCheck 是否已赋值
                     */
                    bool IsCheckHasBeenSet() const;

                    /**
                     * 获取作弊的可能性[0～100]
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FraudPScore 作弊的可能性[0～100]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetFraudPScore() const;

                    /**
                     * 设置作弊的可能性[0～100]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FraudPScore 作弊的可能性[0～100]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFraudPScore(const int64_t& _fraudPScore);

                    /**
                     * 判断参数 FraudPScore 是否已赋值
                     * @return FraudPScore 是否已赋值
                     */
                    bool FraudPScoreHasBeenSet() const;

                    /**
                     * 获取作弊的严重性[0～100]
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EvilPScore 作弊的严重性[0～100]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetEvilPScore() const;

                    /**
                     * 设置作弊的严重性[0～100]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EvilPScore 作弊的严重性[0～100]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEvilPScore(const int64_t& _evilPScore);

                    /**
                     * 判断参数 EvilPScore 是否已赋值
                     * @return EvilPScore 是否已赋值
                     */
                    bool EvilPScoreHasBeenSet() const;

                private:

                    /**
                     * KOL账号ID[比如微信公众号ID]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 是否查得[0：未查得；1：查得]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isCheck;
                    bool m_isCheckHasBeenSet;

                    /**
                     * 作弊的可能性[0～100]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_fraudPScore;
                    bool m_fraudPScoreHasBeenSet;

                    /**
                     * 作弊的严重性[0～100]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_evilPScore;
                    bool m_evilPScoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAF_V20200210_MODEL_OUTPUTKOLVALUE_H_
