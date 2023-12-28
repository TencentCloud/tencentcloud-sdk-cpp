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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_GETFUNCTIONREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_GETFUNCTIONREQUEST_H_

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
                * GetFunction请求参数结构体
                */
                class GetFunctionRequest : public AbstractModel
                {
                public:
                    GetFunctionRequest();
                    ~GetFunctionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要获取详情的函数名称，ResourceId和FunctionName只能传一个
                     * @return FunctionName 需要获取详情的函数名称，ResourceId和FunctionName只能传一个
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置需要获取详情的函数名称，ResourceId和FunctionName只能传一个
                     * @param _functionName 需要获取详情的函数名称，ResourceId和FunctionName只能传一个
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
                     * 获取函数的版本号
默认值: $LATEST
                     * @return Qualifier 函数的版本号
默认值: $LATEST
                     * 
                     */
                    std::string GetQualifier() const;

                    /**
                     * 设置函数的版本号
默认值: $LATEST
                     * @param _qualifier 函数的版本号
默认值: $LATEST
                     * 
                     */
                    void SetQualifier(const std::string& _qualifier);

                    /**
                     * 判断参数 Qualifier 是否已赋值
                     * @return Qualifier 是否已赋值
                     * 
                     */
                    bool QualifierHasBeenSet() const;

                    /**
                     * 获取函数所属命名空间
默认值: default
                     * @return Namespace 函数所属命名空间
默认值: default
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置函数所属命名空间
默认值: default
                     * @param _namespace 函数所属命名空间
默认值: default
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
                     * 获取是否显示代码, TRUE表示显示代码，FALSE表示不显示代码,大于1M的入口文件不会显示
                     * @return ShowCode 是否显示代码, TRUE表示显示代码，FALSE表示不显示代码,大于1M的入口文件不会显示
                     * 
                     */
                    std::string GetShowCode() const;

                    /**
                     * 设置是否显示代码, TRUE表示显示代码，FALSE表示不显示代码,大于1M的入口文件不会显示
                     * @param _showCode 是否显示代码, TRUE表示显示代码，FALSE表示不显示代码,大于1M的入口文件不会显示
                     * 
                     */
                    void SetShowCode(const std::string& _showCode);

                    /**
                     * 判断参数 ShowCode 是否已赋值
                     * @return ShowCode 是否已赋值
                     * 
                     */
                    bool ShowCodeHasBeenSet() const;

                private:

                    /**
                     * 需要获取详情的函数名称，ResourceId和FunctionName只能传一个
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * 函数的版本号
默认值: $LATEST
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                    /**
                     * 函数所属命名空间
默认值: default
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 是否显示代码, TRUE表示显示代码，FALSE表示不显示代码,大于1M的入口文件不会显示
                     */
                    std::string m_showCode;
                    bool m_showCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_GETFUNCTIONREQUEST_H_
