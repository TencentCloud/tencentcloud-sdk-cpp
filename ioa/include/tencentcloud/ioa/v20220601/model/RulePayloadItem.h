/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_RULEPAYLOADITEM_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_RULEPAYLOADITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ioa/v20220601/model/RulePayloadItem.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 条件
                */
                class RulePayloadItem : public AbstractModel
                {
                public:
                    RulePayloadItem();
                    ~RulePayloadItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字段Key
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FieldKey 字段Key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFieldKey() const;

                    /**
                     * 设置字段Key
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fieldKey 字段Key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFieldKey(const std::string& _fieldKey);

                    /**
                     * 判断参数 FieldKey 是否已赋值
                     * @return FieldKey 是否已赋值
                     * 
                     */
                    bool FieldKeyHasBeenSet() const;

                    /**
                     * 获取选项（eq:等于,neq:不等于,like,nlike,gt:大于,lt:小于,egt:大于等于,elt:小于等于）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Option 选项（eq:等于,neq:不等于,like,nlike,gt:大于,lt:小于,egt:大于等于,elt:小于等于）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOption() const;

                    /**
                     * 设置选项（eq:等于,neq:不等于,like,nlike,gt:大于,lt:小于,egt:大于等于,elt:小于等于）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _option 选项（eq:等于,neq:不等于,like,nlike,gt:大于,lt:小于,egt:大于等于,elt:小于等于）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOption(const std::string& _option);

                    /**
                     * 判断参数 Option 是否已赋值
                     * @return Option 是否已赋值
                     * 
                     */
                    bool OptionHasBeenSet() const;

                    /**
                     * 获取值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetValue() const;

                    /**
                     * 设置值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _value 值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValue(const std::vector<std::string>& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取嵌套条件组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Groups 嵌套条件组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RulePayloadItem> GetGroups() const;

                    /**
                     * 设置嵌套条件组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groups 嵌套条件组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroups(const std::vector<RulePayloadItem>& _groups);

                    /**
                     * 判断参数 Groups 是否已赋值
                     * @return Groups 是否已赋值
                     * 
                     */
                    bool GroupsHasBeenSet() const;

                    /**
                     * 获取RelateOption 关系操作符（and/or），用于根级别条件关系
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelateOption RelateOption 关系操作符（and/or），用于根级别条件关系
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRelateOption() const;

                    /**
                     * 设置RelateOption 关系操作符（and/or），用于根级别条件关系
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _relateOption RelateOption 关系操作符（and/or），用于根级别条件关系
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRelateOption(const std::string& _relateOption);

                    /**
                     * 判断参数 RelateOption 是否已赋值
                     * @return RelateOption 是否已赋值
                     * 
                     */
                    bool RelateOptionHasBeenSet() const;

                private:

                    /**
                     * 字段Key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fieldKey;
                    bool m_fieldKeyHasBeenSet;

                    /**
                     * 选项（eq:等于,neq:不等于,like,nlike,gt:大于,lt:小于,egt:大于等于,elt:小于等于）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_option;
                    bool m_optionHasBeenSet;

                    /**
                     * 值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 嵌套条件组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RulePayloadItem> m_groups;
                    bool m_groupsHasBeenSet;

                    /**
                     * RelateOption 关系操作符（and/or），用于根级别条件关系
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_relateOption;
                    bool m_relateOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_RULEPAYLOADITEM_H_
