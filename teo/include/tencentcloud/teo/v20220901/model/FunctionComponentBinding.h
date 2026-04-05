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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTIONCOMPONENTBINDING_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTIONCOMPONENTBINDING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/KVNamespaceParameters.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 边缘函数组件绑定配置，用于建立边缘函数与组件（如 KV 命名空间）的关联关系。通过绑定配置，边缘函数代码可在运行时通过指定的变量名访问绑定的资源。
                */
                class FunctionComponentBinding : public AbstractModel
                {
                public:
                    FunctionComponentBinding();
                    ~FunctionComponentBinding() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取绑定的组件类型。取值有：
<li>kv_namespace：KV 命名空间。</li>

                     * @return Type 绑定的组件类型。取值有：
<li>kv_namespace：KV 命名空间。</li>

                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置绑定的组件类型。取值有：
<li>kv_namespace：KV 命名空间。</li>

                     * @param _type 绑定的组件类型。取值有：
<li>kv_namespace：KV 命名空间。</li>

                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取用于绑定的变量名。限制 1-50 个字符，允许的字符为字母、数字和下划线，其中数字不能在开头。在边缘函数代码中通过该变量名访问绑定的组件。根据 Type 的取值不同，使用方式如下：
<li>当 Type 为 kv_namespace 时：在代码中可通过该变量名访问 KV 命名空间，例如设置为 "MY_KV" 时，可通过 MY_KV.get("key") 进行读写操作。</li>

                     * @return VariableName 用于绑定的变量名。限制 1-50 个字符，允许的字符为字母、数字和下划线，其中数字不能在开头。在边缘函数代码中通过该变量名访问绑定的组件。根据 Type 的取值不同，使用方式如下：
<li>当 Type 为 kv_namespace 时：在代码中可通过该变量名访问 KV 命名空间，例如设置为 "MY_KV" 时，可通过 MY_KV.get("key") 进行读写操作。</li>

                     * 
                     */
                    std::string GetVariableName() const;

                    /**
                     * 设置用于绑定的变量名。限制 1-50 个字符，允许的字符为字母、数字和下划线，其中数字不能在开头。在边缘函数代码中通过该变量名访问绑定的组件。根据 Type 的取值不同，使用方式如下：
<li>当 Type 为 kv_namespace 时：在代码中可通过该变量名访问 KV 命名空间，例如设置为 "MY_KV" 时，可通过 MY_KV.get("key") 进行读写操作。</li>

                     * @param _variableName 用于绑定的变量名。限制 1-50 个字符，允许的字符为字母、数字和下划线，其中数字不能在开头。在边缘函数代码中通过该变量名访问绑定的组件。根据 Type 的取值不同，使用方式如下：
<li>当 Type 为 kv_namespace 时：在代码中可通过该变量名访问 KV 命名空间，例如设置为 "MY_KV" 时，可通过 MY_KV.get("key") 进行读写操作。</li>

                     * 
                     */
                    void SetVariableName(const std::string& _variableName);

                    /**
                     * 判断参数 VariableName 是否已赋值
                     * @return VariableName 是否已赋值
                     * 
                     */
                    bool VariableNameHasBeenSet() const;

                    /**
                     * 获取KV 命名空间配置参数。用于指定绑定的 KV 命名空间详情。当 Type 为 kv_namespace 时，此字段必填。


注意：此字段可能返回 null，表示取不到有效值。
                     * @return KVNamespaceParameters KV 命名空间配置参数。用于指定绑定的 KV 命名空间详情。当 Type 为 kv_namespace 时，此字段必填。


注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KVNamespaceParameters GetKVNamespaceParameters() const;

                    /**
                     * 设置KV 命名空间配置参数。用于指定绑定的 KV 命名空间详情。当 Type 为 kv_namespace 时，此字段必填。


注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kVNamespaceParameters KV 命名空间配置参数。用于指定绑定的 KV 命名空间详情。当 Type 为 kv_namespace 时，此字段必填。


注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKVNamespaceParameters(const KVNamespaceParameters& _kVNamespaceParameters);

                    /**
                     * 判断参数 KVNamespaceParameters 是否已赋值
                     * @return KVNamespaceParameters 是否已赋值
                     * 
                     */
                    bool KVNamespaceParametersHasBeenSet() const;

                private:

                    /**
                     * 绑定的组件类型。取值有：
<li>kv_namespace：KV 命名空间。</li>

                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 用于绑定的变量名。限制 1-50 个字符，允许的字符为字母、数字和下划线，其中数字不能在开头。在边缘函数代码中通过该变量名访问绑定的组件。根据 Type 的取值不同，使用方式如下：
<li>当 Type 为 kv_namespace 时：在代码中可通过该变量名访问 KV 命名空间，例如设置为 "MY_KV" 时，可通过 MY_KV.get("key") 进行读写操作。</li>

                     */
                    std::string m_variableName;
                    bool m_variableNameHasBeenSet;

                    /**
                     * KV 命名空间配置参数。用于指定绑定的 KV 命名空间详情。当 Type 为 kv_namespace 时，此字段必填。


注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KVNamespaceParameters m_kVNamespaceParameters;
                    bool m_kVNamespaceParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTIONCOMPONENTBINDING_H_
