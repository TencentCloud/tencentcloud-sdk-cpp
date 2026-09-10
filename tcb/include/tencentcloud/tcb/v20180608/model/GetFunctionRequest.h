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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_GETFUNCTIONREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_GETFUNCTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
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
                     * 获取<p>环境Id</p>
                     * @return EnvId <p>环境Id</p>
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置<p>环境Id</p>
                     * @param _envId <p>环境Id</p>
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取<p>函数名</p>
                     * @return FunctionName <p>函数名</p>
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置<p>函数名</p>
                     * @param _functionName <p>函数名</p>
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
                     * 获取<p>函数的版本</p>
                     * @return Qualifier <p>函数的版本</p>
                     * 
                     */
                    std::string GetQualifier() const;

                    /**
                     * 设置<p>函数的版本</p>
                     * @param _qualifier <p>函数的版本</p>
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
                     * 获取<p>环境</p>
                     * @return Namespace <p>环境</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>环境</p>
                     * @param _namespace <p>环境</p>
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
                     * 获取<p>是否返回代码</p>
                     * @return ShowCode <p>是否返回代码</p>
                     * 
                     */
                    std::string GetShowCode() const;

                    /**
                     * 设置<p>是否返回代码</p>
                     * @param _showCode <p>是否返回代码</p>
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
                     * <p>环境Id</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>函数名</p>
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * <p>函数的版本</p>
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                    /**
                     * <p>环境</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>是否返回代码</p>
                     */
                    std::string m_showCode;
                    bool m_showCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_GETFUNCTIONREQUEST_H_
