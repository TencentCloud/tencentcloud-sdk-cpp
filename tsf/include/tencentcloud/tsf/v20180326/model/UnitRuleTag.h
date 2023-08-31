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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_UNITRULETAG_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_UNITRULETAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 微服务网关单元化规则标签
                */
                class UnitRuleTag : public AbstractModel
                {
                public:
                    UnitRuleTag();
                    ~UnitRuleTag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签类型 : U(用户标签)/S(系统标签)
                     * @return TagType 标签类型 : U(用户标签)/S(系统标签)
                     * 
                     */
                    std::string GetTagType() const;

                    /**
                     * 设置标签类型 : U(用户标签)/S(系统标签)
                     * @param _tagType 标签类型 : U(用户标签)/S(系统标签)
                     * 
                     */
                    void SetTagType(const std::string& _tagType);

                    /**
                     * 判断参数 TagType 是否已赋值
                     * @return TagType 是否已赋值
                     * 
                     */
                    bool TagTypeHasBeenSet() const;

                    /**
                     * 获取标签名
                     * @return TagField 标签名
                     * 
                     */
                    std::string GetTagField() const;

                    /**
                     * 设置标签名
                     * @param _tagField 标签名
                     * 
                     */
                    void SetTagField(const std::string& _tagField);

                    /**
                     * 判断参数 TagField 是否已赋值
                     * @return TagField 是否已赋值
                     * 
                     */
                    bool TagFieldHasBeenSet() const;

                    /**
                     * 获取操作符:IN/NOT_IN/EQUAL/NOT_EQUAL/REGEX
                     * @return TagOperator 操作符:IN/NOT_IN/EQUAL/NOT_EQUAL/REGEX
                     * 
                     */
                    std::string GetTagOperator() const;

                    /**
                     * 设置操作符:IN/NOT_IN/EQUAL/NOT_EQUAL/REGEX
                     * @param _tagOperator 操作符:IN/NOT_IN/EQUAL/NOT_EQUAL/REGEX
                     * 
                     */
                    void SetTagOperator(const std::string& _tagOperator);

                    /**
                     * 判断参数 TagOperator 是否已赋值
                     * @return TagOperator 是否已赋值
                     * 
                     */
                    bool TagOperatorHasBeenSet() const;

                    /**
                     * 获取标签值
                     * @return TagValue 标签值
                     * 
                     */
                    std::string GetTagValue() const;

                    /**
                     * 设置标签值
                     * @param _tagValue 标签值
                     * 
                     */
                    void SetTagValue(const std::string& _tagValue);

                    /**
                     * 判断参数 TagValue 是否已赋值
                     * @return TagValue 是否已赋值
                     * 
                     */
                    bool TagValueHasBeenSet() const;

                    /**
                     * 获取单元化规则项ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnitRuleItemId 单元化规则项ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUnitRuleItemId() const;

                    /**
                     * 设置单元化规则项ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unitRuleItemId 单元化规则项ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUnitRuleItemId(const std::string& _unitRuleItemId);

                    /**
                     * 判断参数 UnitRuleItemId 是否已赋值
                     * @return UnitRuleItemId 是否已赋值
                     * 
                     */
                    bool UnitRuleItemIdHasBeenSet() const;

                    /**
                     * 获取规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 标签类型 : U(用户标签)/S(系统标签)
                     */
                    std::string m_tagType;
                    bool m_tagTypeHasBeenSet;

                    /**
                     * 标签名
                     */
                    std::string m_tagField;
                    bool m_tagFieldHasBeenSet;

                    /**
                     * 操作符:IN/NOT_IN/EQUAL/NOT_EQUAL/REGEX
                     */
                    std::string m_tagOperator;
                    bool m_tagOperatorHasBeenSet;

                    /**
                     * 标签值
                     */
                    std::string m_tagValue;
                    bool m_tagValueHasBeenSet;

                    /**
                     * 单元化规则项ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_unitRuleItemId;
                    bool m_unitRuleItemIdHasBeenSet;

                    /**
                     * 规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_UNITRULETAG_H_
