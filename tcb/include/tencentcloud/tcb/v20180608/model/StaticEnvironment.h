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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_STATICENVIRONMENT_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_STATICENVIRONMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/Variable.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 静态托管的环境变量参数
                */
                class StaticEnvironment : public AbstractModel
                {
                public:
                    StaticEnvironment();
                    ~StaticEnvironment() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取环境变量数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Variables 环境变量数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Variable> GetVariables() const;

                    /**
                     * 设置环境变量数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _variables 环境变量数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVariables(const std::vector<Variable>& _variables);

                    /**
                     * 判断参数 Variables 是否已赋值
                     * @return Variables 是否已赋值
                     * 
                     */
                    bool VariablesHasBeenSet() const;

                private:

                    /**
                     * 环境变量数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Variable> m_variables;
                    bool m_variablesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_STATICENVIRONMENT_H_
