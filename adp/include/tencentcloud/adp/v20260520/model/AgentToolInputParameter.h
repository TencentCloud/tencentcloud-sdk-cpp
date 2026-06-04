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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AGENTTOOLINPUTPARAMETER_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AGENTTOOLINPUTPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AgentToolInputParameter.h>
#include <tencentcloud/adp/v20260520/model/AgentInput.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Agent 工具输入参数定义
                */
                class AgentToolInputParameter : public AbstractModel
                {
                public:
                    AgentToolInputParameter();
                    ~AgentToolInputParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>工具名称</p>
                     * @return Name <p>工具名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>工具名称</p>
                     * @param _name <p>工具名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>工具描述</p>
                     * @return Description <p>工具描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>工具描述</p>
                     * @param _description <p>工具描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>工具参数类型</p><p>枚举值：</p><ul><li>0： STRING</li><li>1： INT</li><li>2： FLOAT</li><li>3： BOOL</li><li>4： OBJECT</li><li>5： ARRAY_STRING</li><li>6： ARRAY_INT</li><li>7： ARRAY_FLOAT</li><li>8： ARRAY_BOOL</li><li>9： ARRAY_OBJECT</li><li>20： ARRAY_ARRAY</li><li>99： NULL</li></ul>
                     * @return Type <p>工具参数类型</p><p>枚举值：</p><ul><li>0： STRING</li><li>1： INT</li><li>2： FLOAT</li><li>3： BOOL</li><li>4： OBJECT</li><li>5： ARRAY_STRING</li><li>6： ARRAY_INT</li><li>7： ARRAY_FLOAT</li><li>8： ARRAY_BOOL</li><li>9： ARRAY_OBJECT</li><li>20： ARRAY_ARRAY</li><li>99： NULL</li></ul>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>工具参数类型</p><p>枚举值：</p><ul><li>0： STRING</li><li>1： INT</li><li>2： FLOAT</li><li>3： BOOL</li><li>4： OBJECT</li><li>5： ARRAY_STRING</li><li>6： ARRAY_INT</li><li>7： ARRAY_FLOAT</li><li>8： ARRAY_BOOL</li><li>9： ARRAY_OBJECT</li><li>20： ARRAY_ARRAY</li><li>99： NULL</li></ul>
                     * @param _type <p>工具参数类型</p><p>枚举值：</p><ul><li>0： STRING</li><li>1： INT</li><li>2： FLOAT</li><li>3： BOOL</li><li>4： OBJECT</li><li>5： ARRAY_STRING</li><li>6： ARRAY_INT</li><li>7： ARRAY_FLOAT</li><li>8： ARRAY_BOOL</li><li>9： ARRAY_OBJECT</li><li>20： ARRAY_ARRAY</li><li>99： NULL</li></ul>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>是否必填</p>
                     * @return IsRequired <p>是否必填</p>
                     * 
                     */
                    bool GetIsRequired() const;

                    /**
                     * 设置<p>是否必填</p>
                     * @param _isRequired <p>是否必填</p>
                     * 
                     */
                    void SetIsRequired(const bool& _isRequired);

                    /**
                     * 判断参数 IsRequired 是否已赋值
                     * @return IsRequired 是否已赋值
                     * 
                     */
                    bool IsRequiredHasBeenSet() const;

                    /**
                     * 获取<p>子参数，仅 OBJECT 或 ARRAY&lt;&gt; 类型时使用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubParameterList <p>子参数，仅 OBJECT 或 ARRAY&lt;&gt; 类型时使用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AgentToolInputParameter> GetSubParameterList() const;

                    /**
                     * 设置<p>子参数，仅 OBJECT 或 ARRAY&lt;&gt; 类型时使用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subParameterList <p>子参数，仅 OBJECT 或 ARRAY&lt;&gt; 类型时使用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubParameterList(const std::vector<AgentToolInputParameter>& _subParameterList);

                    /**
                     * 判断参数 SubParameterList 是否已赋值
                     * @return SubParameterList 是否已赋值
                     * 
                     */
                    bool SubParameterListHasBeenSet() const;

                    /**
                     * 获取<p>模式下是否对模型隐藏</p>
                     * @return IsHidden <p>模式下是否对模型隐藏</p>
                     * 
                     */
                    bool GetIsHidden() const;

                    /**
                     * 设置<p>模式下是否对模型隐藏</p>
                     * @param _isHidden <p>模式下是否对模型隐藏</p>
                     * 
                     */
                    void SetIsHidden(const bool& _isHidden);

                    /**
                     * 判断参数 IsHidden 是否已赋值
                     * @return IsHidden 是否已赋值
                     * 
                     */
                    bool IsHiddenHasBeenSet() const;

                    /**
                     * 获取<p>OneOf类型的参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OneOfList <p>OneOf类型的参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AgentToolInputParameter> GetOneOfList() const;

                    /**
                     * 设置<p>OneOf类型的参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _oneOfList <p>OneOf类型的参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOneOfList(const std::vector<AgentToolInputParameter>& _oneOfList);

                    /**
                     * 判断参数 OneOfList 是否已赋值
                     * @return OneOfList 是否已赋值
                     * 
                     */
                    bool OneOfListHasBeenSet() const;

                    /**
                     * 获取<p>AnyOf类型的参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AnyOfList <p>AnyOf类型的参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AgentToolInputParameter> GetAnyOfList() const;

                    /**
                     * 设置<p>AnyOf类型的参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _anyOfList <p>AnyOf类型的参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAnyOfList(const std::vector<AgentToolInputParameter>& _anyOfList);

                    /**
                     * 判断参数 AnyOfList 是否已赋值
                     * @return AnyOfList 是否已赋值
                     * 
                     */
                    bool AnyOfListHasBeenSet() const;

                    /**
                     * 获取<p>参数取值来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Input <p>参数取值来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AgentInput GetInput() const;

                    /**
                     * 设置<p>参数取值来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _input <p>参数取值来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInput(const AgentInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                private:

                    /**
                     * <p>工具名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>工具描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>工具参数类型</p><p>枚举值：</p><ul><li>0： STRING</li><li>1： INT</li><li>2： FLOAT</li><li>3： BOOL</li><li>4： OBJECT</li><li>5： ARRAY_STRING</li><li>6： ARRAY_INT</li><li>7： ARRAY_FLOAT</li><li>8： ARRAY_BOOL</li><li>9： ARRAY_OBJECT</li><li>20： ARRAY_ARRAY</li><li>99： NULL</li></ul>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>是否必填</p>
                     */
                    bool m_isRequired;
                    bool m_isRequiredHasBeenSet;

                    /**
                     * <p>子参数，仅 OBJECT 或 ARRAY&lt;&gt; 类型时使用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AgentToolInputParameter> m_subParameterList;
                    bool m_subParameterListHasBeenSet;

                    /**
                     * <p>模式下是否对模型隐藏</p>
                     */
                    bool m_isHidden;
                    bool m_isHiddenHasBeenSet;

                    /**
                     * <p>OneOf类型的参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AgentToolInputParameter> m_oneOfList;
                    bool m_oneOfListHasBeenSet;

                    /**
                     * <p>AnyOf类型的参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AgentToolInputParameter> m_anyOfList;
                    bool m_anyOfListHasBeenSet;

                    /**
                     * <p>参数取值来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AgentInput m_input;
                    bool m_inputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AGENTTOOLINPUTPARAMETER_H_
