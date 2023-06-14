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
                     * 获取要复制的函数的名称
                     * @return FunctionName 要复制的函数的名称
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置要复制的函数的名称
                     * @param _functionName 要复制的函数的名称
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
                     * 获取新函数的名称
                     * @return NewFunctionName 新函数的名称
                     * 
                     */
                    std::string GetNewFunctionName() const;

                    /**
                     * 设置新函数的名称
                     * @param _newFunctionName 新函数的名称
                     * 
                     */
                    void SetNewFunctionName(const std::string& _newFunctionName);

                    /**
                     * 判断参数 NewFunctionName 是否已赋值
                     * @return NewFunctionName 是否已赋值
                     * 
                     */
                    bool NewFunctionNameHasBeenSet() const;

                    /**
                     * 获取要复制的函数所在的命名空间，默认为default
                     * @return Namespace 要复制的函数所在的命名空间，默认为default
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置要复制的函数所在的命名空间，默认为default
                     * @param _namespace 要复制的函数所在的命名空间，默认为default
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取将函数复制到的命名空间，默认为default
                     * @return TargetNamespace 将函数复制到的命名空间，默认为default
                     * 
                     */
                    std::string GetTargetNamespace() const;

                    /**
                     * 设置将函数复制到的命名空间，默认为default
                     * @param _targetNamespace 将函数复制到的命名空间，默认为default
                     * 
                     */
                    void SetTargetNamespace(const std::string& _targetNamespace);

                    /**
                     * 判断参数 TargetNamespace 是否已赋值
                     * @return TargetNamespace 是否已赋值
                     * 
                     */
                    bool TargetNamespaceHasBeenSet() const;

                    /**
                     * 获取新函数的描述
                     * @return Description 新函数的描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置新函数的描述
                     * @param _description 新函数的描述
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
                     * 获取要将函数复制到的地域，不填则默认为当前地域
                     * @return TargetRegion 要将函数复制到的地域，不填则默认为当前地域
                     * 
                     */
                    std::string GetTargetRegion() const;

                    /**
                     * 设置要将函数复制到的地域，不填则默认为当前地域
                     * @param _targetRegion 要将函数复制到的地域，不填则默认为当前地域
                     * 
                     */
                    void SetTargetRegion(const std::string& _targetRegion);

                    /**
                     * 判断参数 TargetRegion 是否已赋值
                     * @return TargetRegion 是否已赋值
                     * 
                     */
                    bool TargetRegionHasBeenSet() const;

                    /**
                     * 获取如果目标Namespace下已有同名函数，是否覆盖，默认为否
（注意：如果选择覆盖，会导致同名函数被删除，请慎重操作）
TRUE：覆盖同名函数
FALSE：不覆盖同名函数
                     * @return Override 如果目标Namespace下已有同名函数，是否覆盖，默认为否
（注意：如果选择覆盖，会导致同名函数被删除，请慎重操作）
TRUE：覆盖同名函数
FALSE：不覆盖同名函数
                     * 
                     */
                    bool GetOverride() const;

                    /**
                     * 设置如果目标Namespace下已有同名函数，是否覆盖，默认为否
（注意：如果选择覆盖，会导致同名函数被删除，请慎重操作）
TRUE：覆盖同名函数
FALSE：不覆盖同名函数
                     * @param _override 如果目标Namespace下已有同名函数，是否覆盖，默认为否
（注意：如果选择覆盖，会导致同名函数被删除，请慎重操作）
TRUE：覆盖同名函数
FALSE：不覆盖同名函数
                     * 
                     */
                    void SetOverride(const bool& _override);

                    /**
                     * 判断参数 Override 是否已赋值
                     * @return Override 是否已赋值
                     * 
                     */
                    bool OverrideHasBeenSet() const;

                    /**
                     * 获取是否复制函数的属性，包括环境变量、内存、超时、函数描述、标签、VPC等，默认为是。
TRUE：复制函数配置
FALSE：不复制函数配置
                     * @return CopyConfiguration 是否复制函数的属性，包括环境变量、内存、超时、函数描述、标签、VPC等，默认为是。
TRUE：复制函数配置
FALSE：不复制函数配置
                     * 
                     */
                    bool GetCopyConfiguration() const;

                    /**
                     * 设置是否复制函数的属性，包括环境变量、内存、超时、函数描述、标签、VPC等，默认为是。
TRUE：复制函数配置
FALSE：不复制函数配置
                     * @param _copyConfiguration 是否复制函数的属性，包括环境变量、内存、超时、函数描述、标签、VPC等，默认为是。
TRUE：复制函数配置
FALSE：不复制函数配置
                     * 
                     */
                    void SetCopyConfiguration(const bool& _copyConfiguration);

                    /**
                     * 判断参数 CopyConfiguration 是否已赋值
                     * @return CopyConfiguration 是否已赋值
                     * 
                     */
                    bool CopyConfigurationHasBeenSet() const;

                private:

                    /**
                     * 要复制的函数的名称
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * 新函数的名称
                     */
                    std::string m_newFunctionName;
                    bool m_newFunctionNameHasBeenSet;

                    /**
                     * 要复制的函数所在的命名空间，默认为default
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 将函数复制到的命名空间，默认为default
                     */
                    std::string m_targetNamespace;
                    bool m_targetNamespaceHasBeenSet;

                    /**
                     * 新函数的描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 要将函数复制到的地域，不填则默认为当前地域
                     */
                    std::string m_targetRegion;
                    bool m_targetRegionHasBeenSet;

                    /**
                     * 如果目标Namespace下已有同名函数，是否覆盖，默认为否
（注意：如果选择覆盖，会导致同名函数被删除，请慎重操作）
TRUE：覆盖同名函数
FALSE：不覆盖同名函数
                     */
                    bool m_override;
                    bool m_overrideHasBeenSet;

                    /**
                     * 是否复制函数的属性，包括环境变量、内存、超时、函数描述、标签、VPC等，默认为是。
TRUE：复制函数配置
FALSE：不复制函数配置
                     */
                    bool m_copyConfiguration;
                    bool m_copyConfigurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_COPYFUNCTIONREQUEST_H_
