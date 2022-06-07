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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_BOTPORTRAITRULE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_BOTPORTRAITRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * bot 用户画像规则
                */
                class BotPortraitRule : public AbstractModel
                {
                public:
                    BotPortraitRule();
                    ~BotPortraitRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取本规则的id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleID 本规则的id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置本规则的id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RuleID 本规则的id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRuleID(const int64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取JS挑战的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlgManagedIds JS挑战的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> GetAlgManagedIds() const;

                    /**
                     * 设置JS挑战的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AlgManagedIds JS挑战的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAlgManagedIds(const std::vector<int64_t>& _algManagedIds);

                    /**
                     * 判断参数 AlgManagedIds 是否已赋值
                     * @return AlgManagedIds 是否已赋值
                     */
                    bool AlgManagedIdsHasBeenSet() const;

                    /**
                     * 获取数字验证码的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CapManagedIds 数字验证码的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> GetCapManagedIds() const;

                    /**
                     * 设置数字验证码的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CapManagedIds 数字验证码的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCapManagedIds(const std::vector<int64_t>& _capManagedIds);

                    /**
                     * 判断参数 CapManagedIds 是否已赋值
                     * @return CapManagedIds 是否已赋值
                     */
                    bool CapManagedIdsHasBeenSet() const;

                    /**
                     * 获取观察的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonManagedIds 观察的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> GetMonManagedIds() const;

                    /**
                     * 设置观察的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MonManagedIds 观察的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMonManagedIds(const std::vector<int64_t>& _monManagedIds);

                    /**
                     * 判断参数 MonManagedIds 是否已赋值
                     * @return MonManagedIds 是否已赋值
                     */
                    bool MonManagedIdsHasBeenSet() const;

                    /**
                     * 获取拦截的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DropManagedIds 拦截的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> GetDropManagedIds() const;

                    /**
                     * 设置拦截的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DropManagedIds 拦截的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDropManagedIds(const std::vector<int64_t>& _dropManagedIds);

                    /**
                     * 判断参数 DropManagedIds 是否已赋值
                     * @return DropManagedIds 是否已赋值
                     */
                    bool DropManagedIdsHasBeenSet() const;

                private:

                    /**
                     * 本规则的id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * JS挑战的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_algManagedIds;
                    bool m_algManagedIdsHasBeenSet;

                    /**
                     * 数字验证码的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_capManagedIds;
                    bool m_capManagedIdsHasBeenSet;

                    /**
                     * 观察的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_monManagedIds;
                    bool m_monManagedIdsHasBeenSet;

                    /**
                     * 拦截的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_dropManagedIds;
                    bool m_dropManagedIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_BOTPORTRAITRULE_H_
