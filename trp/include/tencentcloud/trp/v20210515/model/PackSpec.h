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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_PACKSPEC_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_PACKSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trp/v20210515/model/CodePart.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * 层级码配置
                */
                class PackSpec : public AbstractModel
                {
                public:
                    PackSpec();
                    ~PackSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取层级
                     * @return Level 层级
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置层级
                     * @param Level 层级
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取比例
                     * @return Rate 比例
                     */
                    uint64_t GetRate() const;

                    /**
                     * 设置比例
                     * @param Rate 比例
                     */
                    void SetRate(const uint64_t& _rate);

                    /**
                     * 判断参数 Rate 是否已赋值
                     * @return Rate 是否已赋值
                     */
                    bool RateHasBeenSet() const;

                    /**
                     * 获取数量
                     * @return Amount 数量
                     */
                    uint64_t GetAmount() const;

                    /**
                     * 设置数量
                     * @param Amount 数量
                     */
                    void SetAmount(const uint64_t& _amount);

                    /**
                     * 判断参数 Amount 是否已赋值
                     * @return Amount 是否已赋值
                     */
                    bool AmountHasBeenSet() const;

                    /**
                     * 获取码规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomId 码规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCustomId() const;

                    /**
                     * 设置码规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CustomId 码规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCustomId(const std::string& _customId);

                    /**
                     * 判断参数 CustomId 是否已赋值
                     * @return CustomId 是否已赋值
                     */
                    bool CustomIdHasBeenSet() const;

                    /**
                     * 获取码段配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CodeParts 码段配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CodePart> GetCodeParts() const;

                    /**
                     * 设置码段配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CodeParts 码段配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCodeParts(const std::vector<CodePart>& _codeParts);

                    /**
                     * 判断参数 CodeParts 是否已赋值
                     * @return CodeParts 是否已赋值
                     */
                    bool CodePartsHasBeenSet() const;

                private:

                    /**
                     * 层级
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 比例
                     */
                    uint64_t m_rate;
                    bool m_rateHasBeenSet;

                    /**
                     * 数量
                     */
                    uint64_t m_amount;
                    bool m_amountHasBeenSet;

                    /**
                     * 码规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_customId;
                    bool m_customIdHasBeenSet;

                    /**
                     * 码段配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CodePart> m_codeParts;
                    bool m_codePartsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_PACKSPEC_H_
