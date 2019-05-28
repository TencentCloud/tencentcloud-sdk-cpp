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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_COPYFUNCTIONREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_COPYFUNCTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * CopyFunction请求参数结构体
                */
                class CopyFunctionRequest : public AbstractModel
                {
                public:
                    CopyFunctionRequest();
                    ~CopyFunctionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取函数名
                     * @return FunctionName 函数名
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置函数名
                     * @param FunctionName 函数名
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取新函数的名称
                     * @return NewFunctionName 新函数的名称
                     */
                    std::string GetNewFunctionName() const;

                    /**
                     * 设置新函数的名称
                     * @param NewFunctionName 新函数的名称
                     */
                    void SetNewFunctionName(const std::string& _newFunctionName);

                    /**
                     * 判断参数 NewFunctionName 是否已赋值
                     * @return NewFunctionName 是否已赋值
                     */
                    bool NewFunctionNameHasBeenSet() const;

                    /**
                     * 获取命名空间，默认为default
                     * @return Namespace 命名空间，默认为default
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间，默认为default
                     * @param Namespace 命名空间，默认为default
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取将函数复制到的命名空间，默认为default
                     * @return TargetNamespace 将函数复制到的命名空间，默认为default
                     */
                    std::string GetTargetNamespace() const;

                    /**
                     * 设置将函数复制到的命名空间，默认为default
                     * @param TargetNamespace 将函数复制到的命名空间，默认为default
                     */
                    void SetTargetNamespace(const std::string& _targetNamespace);

                    /**
                     * 判断参数 TargetNamespace 是否已赋值
                     * @return TargetNamespace 是否已赋值
                     */
                    bool TargetNamespaceHasBeenSet() const;

                    /**
                     * 获取函数描述
                     * @return Description 函数描述
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置函数描述
                     * @param Description 函数描述
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取要将函数复制到的地域，不填则默认为当前地域
                     * @return TargetRegion 要将函数复制到的地域，不填则默认为当前地域
                     */
                    std::string GetTargetRegion() const;

                    /**
                     * 设置要将函数复制到的地域，不填则默认为当前地域
                     * @param TargetRegion 要将函数复制到的地域，不填则默认为当前地域
                     */
                    void SetTargetRegion(const std::string& _targetRegion);

                    /**
                     * 判断参数 TargetRegion 是否已赋值
                     * @return TargetRegion 是否已赋值
                     */
                    bool TargetRegionHasBeenSet() const;

                private:

                    /**
                     * 函数名
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * 新函数的名称
                     */
                    std::string m_newFunctionName;
                    bool m_newFunctionNameHasBeenSet;

                    /**
                     * 命名空间，默认为default
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 将函数复制到的命名空间，默认为default
                     */
                    std::string m_targetNamespace;
                    bool m_targetNamespaceHasBeenSet;

                    /**
                     * 函数描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 要将函数复制到的地域，不填则默认为当前地域
                     */
                    std::string m_targetRegion;
                    bool m_targetRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_COPYFUNCTIONREQUEST_H_
