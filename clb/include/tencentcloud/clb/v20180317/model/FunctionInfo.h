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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_FUNCTIONINFO_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_FUNCTIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * SCF云函数（Serverless Cloud Function）相关信息。
                */
                class FunctionInfo : public AbstractModel
                {
                public:
                    FunctionInfo();
                    ~FunctionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取函数命名空间
                     * @return FunctionNamespace 函数命名空间
                     * 
                     */
                    std::string GetFunctionNamespace() const;

                    /**
                     * 设置函数命名空间
                     * @param _functionNamespace 函数命名空间
                     * 
                     */
                    void SetFunctionNamespace(const std::string& _functionNamespace);

                    /**
                     * 判断参数 FunctionNamespace 是否已赋值
                     * @return FunctionNamespace 是否已赋值
                     * 
                     */
                    bool FunctionNamespaceHasBeenSet() const;

                    /**
                     * 获取函数名称
                     * @return FunctionName 函数名称
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置函数名称
                     * @param _functionName 函数名称
                     * 
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     * 
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取函数的版本名称或别名
                     * @return FunctionQualifier 函数的版本名称或别名
                     * 
                     */
                    std::string GetFunctionQualifier() const;

                    /**
                     * 设置函数的版本名称或别名
                     * @param _functionQualifier 函数的版本名称或别名
                     * 
                     */
                    void SetFunctionQualifier(const std::string& _functionQualifier);

                    /**
                     * 判断参数 FunctionQualifier 是否已赋值
                     * @return FunctionQualifier 是否已赋值
                     * 
                     */
                    bool FunctionQualifierHasBeenSet() const;

                    /**
                     * 获取标识 FunctionQualifier 参数的类型，可取值： VERSION（版本）、ALIAS（别名）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FunctionQualifierType 标识 FunctionQualifier 参数的类型，可取值： VERSION（版本）、ALIAS（别名）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFunctionQualifierType() const;

                    /**
                     * 设置标识 FunctionQualifier 参数的类型，可取值： VERSION（版本）、ALIAS（别名）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _functionQualifierType 标识 FunctionQualifier 参数的类型，可取值： VERSION（版本）、ALIAS（别名）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFunctionQualifierType(const std::string& _functionQualifierType);

                    /**
                     * 判断参数 FunctionQualifierType 是否已赋值
                     * @return FunctionQualifierType 是否已赋值
                     * 
                     */
                    bool FunctionQualifierTypeHasBeenSet() const;

                private:

                    /**
                     * 函数命名空间
                     */
                    std::string m_functionNamespace;
                    bool m_functionNamespaceHasBeenSet;

                    /**
                     * 函数名称
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * 函数的版本名称或别名
                     */
                    std::string m_functionQualifier;
                    bool m_functionQualifierHasBeenSet;

                    /**
                     * 标识 FunctionQualifier 参数的类型，可取值： VERSION（版本）、ALIAS（别名）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_functionQualifierType;
                    bool m_functionQualifierTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_FUNCTIONINFO_H_
