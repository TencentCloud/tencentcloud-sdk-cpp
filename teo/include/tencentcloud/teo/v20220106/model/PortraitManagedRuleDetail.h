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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_PORTRAITMANAGEDRULEDETAIL_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_PORTRAITMANAGEDRULEDETAIL_H_

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
                * 用户画像规则详情
                */
                class PortraitManagedRuleDetail : public AbstractModel
                {
                public:
                    PortraitManagedRuleDetail();
                    ~PortraitManagedRuleDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleId 规则唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置规则唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RuleId 规则唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取规则的描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 规则的描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则的描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Description 规则的描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取规则所属类型的名字, botdb(用户画像)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleTypeName 规则所属类型的名字, botdb(用户画像)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRuleTypeName() const;

                    /**
                     * 设置规则所属类型的名字, botdb(用户画像)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RuleTypeName 规则所属类型的名字, botdb(用户画像)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRuleTypeName(const std::string& _ruleTypeName);

                    /**
                     * 判断参数 RuleTypeName 是否已赋值
                     * @return RuleTypeName 是否已赋值
                     */
                    bool RuleTypeNameHasBeenSet() const;

                    /**
                     * 获取规则内的功能分类Id(扫描器，Bot行为等)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClassificationId 规则内的功能分类Id(扫描器，Bot行为等)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetClassificationId() const;

                    /**
                     * 设置规则内的功能分类Id(扫描器，Bot行为等)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClassificationId 规则内的功能分类Id(扫描器，Bot行为等)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClassificationId(const int64_t& _classificationId);

                    /**
                     * 判断参数 ClassificationId 是否已赋值
                     * @return ClassificationId 是否已赋值
                     */
                    bool ClassificationIdHasBeenSet() const;

                    /**
                     * 获取规则当前所属动作状态(block, alg, ...)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 规则当前所属动作状态(block, alg, ...)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置规则当前所属动作状态(block, alg, ...)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 规则当前所属动作状态(block, alg, ...)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 规则唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则的描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 规则所属类型的名字, botdb(用户画像)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleTypeName;
                    bool m_ruleTypeNameHasBeenSet;

                    /**
                     * 规则内的功能分类Id(扫描器，Bot行为等)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_classificationId;
                    bool m_classificationIdHasBeenSet;

                    /**
                     * 规则当前所属动作状态(block, alg, ...)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_PORTRAITMANAGEDRULEDETAIL_H_
