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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_NODESELECTORREQUIREMENT_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_NODESELECTORREQUIREMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Pod节点选择项
                */
                class NodeSelectorRequirement : public AbstractModel
                {
                public:
                    NodeSelectorRequirement();
                    ~NodeSelectorRequirement() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点选择项Key值
                     * @return Key 节点选择项Key值
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置节点选择项Key值
                     * @param _key 节点选择项Key值
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取节点选择项Operator值，支持In, NotIn, Exists, DoesNotExist. Gt, and Lt.
                     * @return Operator 节点选择项Operator值，支持In, NotIn, Exists, DoesNotExist. Gt, and Lt.
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置节点选择项Operator值，支持In, NotIn, Exists, DoesNotExist. Gt, and Lt.
                     * @param _operator 节点选择项Operator值，支持In, NotIn, Exists, DoesNotExist. Gt, and Lt.
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取节点选择项Values值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Values 节点选择项Values值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置节点选择项Values值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _values 节点选择项Values值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * 节点选择项Key值
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 节点选择项Operator值，支持In, NotIn, Exists, DoesNotExist. Gt, and Lt.
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 节点选择项Values值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_NODESELECTORREQUIREMENT_H_
