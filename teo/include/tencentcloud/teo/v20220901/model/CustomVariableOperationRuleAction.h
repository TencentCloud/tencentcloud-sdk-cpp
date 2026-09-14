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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMVARIABLEOPERATIONRULEACTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMVARIABLEOPERATIONRULEACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SetParameters.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 自定义变量规则操作。
                */
                class CustomVariableOperationRuleAction : public AbstractModel
                {
                public:
                    CustomVariableOperationRuleAction();
                    ~CustomVariableOperationRuleAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>操作名称。名称需要与参数结构体对应，例如 Name=Set，则 SetParameters 必填。当前仅支持填写 Set。</p><li>Set：自定义变量设置；</li>
                     * @return Name <p>操作名称。名称需要与参数结构体对应，例如 Name=Set，则 SetParameters 必填。当前仅支持填写 Set。</p><li>Set：自定义变量设置；</li>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>操作名称。名称需要与参数结构体对应，例如 Name=Set，则 SetParameters 必填。当前仅支持填写 Set。</p><li>Set：自定义变量设置；</li>
                     * @param _name <p>操作名称。名称需要与参数结构体对应，例如 Name=Set，则 SetParameters 必填。当前仅支持填写 Set。</p><li>Set：自定义变量设置；</li>
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
                     * 获取<p>自定义变量设置参数。此参数中若存在多条运算，按照数组的顺序依次执行。当 Name 取值为 Set 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SetParameters <p>自定义变量设置参数。此参数中若存在多条运算，按照数组的顺序依次执行。当 Name 取值为 Set 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SetParameters GetSetParameters() const;

                    /**
                     * 设置<p>自定义变量设置参数。此参数中若存在多条运算，按照数组的顺序依次执行。当 Name 取值为 Set 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _setParameters <p>自定义变量设置参数。此参数中若存在多条运算，按照数组的顺序依次执行。当 Name 取值为 Set 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSetParameters(const SetParameters& _setParameters);

                    /**
                     * 判断参数 SetParameters 是否已赋值
                     * @return SetParameters 是否已赋值
                     * 
                     */
                    bool SetParametersHasBeenSet() const;

                private:

                    /**
                     * <p>操作名称。名称需要与参数结构体对应，例如 Name=Set，则 SetParameters 必填。当前仅支持填写 Set。</p><li>Set：自定义变量设置；</li>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>自定义变量设置参数。此参数中若存在多条运算，按照数组的顺序依次执行。当 Name 取值为 Set 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SetParameters m_setParameters;
                    bool m_setParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMVARIABLEOPERATIONRULEACTION_H_
