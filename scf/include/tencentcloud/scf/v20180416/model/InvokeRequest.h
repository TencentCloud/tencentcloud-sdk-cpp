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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_INVOKEREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_INVOKEREQUEST_H_

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
                * Invoke请求参数结构体
                */
                class InvokeRequest : public AbstractModel
                {
                public:
                    InvokeRequest();
                    ~InvokeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取函数名称
                     * @return FunctionName 函数名称
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置函数名称
                     * @param FunctionName 函数名称
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取RequestResponse(同步) 和 Event(异步)，默认为同步
                     * @return InvocationType RequestResponse(同步) 和 Event(异步)，默认为同步
                     */
                    std::string GetInvocationType() const;

                    /**
                     * 设置RequestResponse(同步) 和 Event(异步)，默认为同步
                     * @param InvocationType RequestResponse(同步) 和 Event(异步)，默认为同步
                     */
                    void SetInvocationType(const std::string& _invocationType);

                    /**
                     * 判断参数 InvocationType 是否已赋值
                     * @return InvocationType 是否已赋值
                     */
                    bool InvocationTypeHasBeenSet() const;

                    /**
                     * 获取触发函数的版本号
                     * @return Qualifier 触发函数的版本号
                     */
                    std::string GetQualifier() const;

                    /**
                     * 设置触发函数的版本号
                     * @param Qualifier 触发函数的版本号
                     */
                    void SetQualifier(const std::string& _qualifier);

                    /**
                     * 判断参数 Qualifier 是否已赋值
                     * @return Qualifier 是否已赋值
                     */
                    bool QualifierHasBeenSet() const;

                    /**
                     * 获取运行函数时的参数，以json格式传入，最大支持的参数长度是 1M
                     * @return ClientContext 运行函数时的参数，以json格式传入，最大支持的参数长度是 1M
                     */
                    std::string GetClientContext() const;

                    /**
                     * 设置运行函数时的参数，以json格式传入，最大支持的参数长度是 1M
                     * @param ClientContext 运行函数时的参数，以json格式传入，最大支持的参数长度是 1M
                     */
                    void SetClientContext(const std::string& _clientContext);

                    /**
                     * 判断参数 ClientContext 是否已赋值
                     * @return ClientContext 是否已赋值
                     */
                    bool ClientContextHasBeenSet() const;

                    /**
                     * 获取同步调用时指定该字段，返回值会包含4K的日志，可选值为None和Tail，默认值为None。当该值为Tail时，返回参数中的logMsg字段会包含对应的函数执行日志
                     * @return LogType 同步调用时指定该字段，返回值会包含4K的日志，可选值为None和Tail，默认值为None。当该值为Tail时，返回参数中的logMsg字段会包含对应的函数执行日志
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置同步调用时指定该字段，返回值会包含4K的日志，可选值为None和Tail，默认值为None。当该值为Tail时，返回参数中的logMsg字段会包含对应的函数执行日志
                     * @param LogType 同步调用时指定该字段，返回值会包含4K的日志，可选值为None和Tail，默认值为None。当该值为Tail时，返回参数中的logMsg字段会包含对应的函数执行日志
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取命名空间
                     * @return Namespace 命名空间
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间
                     * @param Namespace 命名空间
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     */
                    bool NamespaceHasBeenSet() const;

                private:

                    /**
                     * 函数名称
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * RequestResponse(同步) 和 Event(异步)，默认为同步
                     */
                    std::string m_invocationType;
                    bool m_invocationTypeHasBeenSet;

                    /**
                     * 触发函数的版本号
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                    /**
                     * 运行函数时的参数，以json格式传入，最大支持的参数长度是 1M
                     */
                    std::string m_clientContext;
                    bool m_clientContextHasBeenSet;

                    /**
                     * 同步调用时指定该字段，返回值会包含4K的日志，可选值为None和Tail，默认值为None。当该值为Tail时，返回参数中的logMsg字段会包含对应的函数执行日志
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_INVOKEREQUEST_H_
