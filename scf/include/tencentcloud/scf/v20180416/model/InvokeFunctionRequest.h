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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_INVOKEFUNCTIONREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_INVOKEFUNCTIONREQUEST_H_

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
                * InvokeFunction请求参数结构体
                */
                class InvokeFunctionRequest : public AbstractModel
                {
                public:
                    InvokeFunctionRequest();
                    ~InvokeFunctionRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取触发函数的版本号或别名，默认值为$DEFAULT
                     * @return Qualifier 触发函数的版本号或别名，默认值为$DEFAULT
                     * 
                     */
                    std::string GetQualifier() const;

                    /**
                     * 设置触发函数的版本号或别名，默认值为$DEFAULT
                     * @param _qualifier 触发函数的版本号或别名，默认值为$DEFAULT
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
                     * 获取运行函数时的参数，以json格式传入，最大支持的参数长度是 6MB。该字段信息对应函数 [event 入参](https://cloud.tencent.com/document/product/583/9210#.E5.87.BD.E6.95.B0.E5.85.A5.E5.8F.82.3Ca-id.3D.22input.22.3E.3C.2Fa.3E)。
                     * @return Event 运行函数时的参数，以json格式传入，最大支持的参数长度是 6MB。该字段信息对应函数 [event 入参](https://cloud.tencent.com/document/product/583/9210#.E5.87.BD.E6.95.B0.E5.85.A5.E5.8F.82.3Ca-id.3D.22input.22.3E.3C.2Fa.3E)。
                     * 
                     */
                    std::string GetEvent() const;

                    /**
                     * 设置运行函数时的参数，以json格式传入，最大支持的参数长度是 6MB。该字段信息对应函数 [event 入参](https://cloud.tencent.com/document/product/583/9210#.E5.87.BD.E6.95.B0.E5.85.A5.E5.8F.82.3Ca-id.3D.22input.22.3E.3C.2Fa.3E)。
                     * @param _event 运行函数时的参数，以json格式传入，最大支持的参数长度是 6MB。该字段信息对应函数 [event 入参](https://cloud.tencent.com/document/product/583/9210#.E5.87.BD.E6.95.B0.E5.85.A5.E5.8F.82.3Ca-id.3D.22input.22.3E.3C.2Fa.3E)。
                     * 
                     */
                    void SetEvent(const std::string& _event);

                    /**
                     * 判断参数 Event 是否已赋值
                     * @return Event 是否已赋值
                     * 
                     */
                    bool EventHasBeenSet() const;

                    /**
                     * 获取返回值会包含4KB的日志，可选值为None和Tail，默认值为None。当该值为Tail时，返回参数中的Log字段会包含对应的函数执行日志
                     * @return LogType 返回值会包含4KB的日志，可选值为None和Tail，默认值为None。当该值为Tail时，返回参数中的Log字段会包含对应的函数执行日志
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置返回值会包含4KB的日志，可选值为None和Tail，默认值为None。当该值为Tail时，返回参数中的Log字段会包含对应的函数执行日志
                     * @param _logType 返回值会包含4KB的日志，可选值为None和Tail，默认值为None。当该值为Tail时，返回参数中的Log字段会包含对应的函数执行日志
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取命名空间，不填默认为 default
                     * @return Namespace 命名空间，不填默认为 default
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间，不填默认为 default
                     * @param _namespace 命名空间，不填默认为 default
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
                     * 获取函数灰度流量控制调用，以json格式传入，例如{"k":"v"}，注意kv都需要是字符串类型，最大支持的参数长度是1024字节
                     * @return RoutingKey 函数灰度流量控制调用，以json格式传入，例如{"k":"v"}，注意kv都需要是字符串类型，最大支持的参数长度是1024字节
                     * 
                     */
                    std::string GetRoutingKey() const;

                    /**
                     * 设置函数灰度流量控制调用，以json格式传入，例如{"k":"v"}，注意kv都需要是字符串类型，最大支持的参数长度是1024字节
                     * @param _routingKey 函数灰度流量控制调用，以json格式传入，例如{"k":"v"}，注意kv都需要是字符串类型，最大支持的参数长度是1024字节
                     * 
                     */
                    void SetRoutingKey(const std::string& _routingKey);

                    /**
                     * 判断参数 RoutingKey 是否已赋值
                     * @return RoutingKey 是否已赋值
                     * 
                     */
                    bool RoutingKeyHasBeenSet() const;

                private:

                    /**
                     * 函数名称
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * 触发函数的版本号或别名，默认值为$DEFAULT
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                    /**
                     * 运行函数时的参数，以json格式传入，最大支持的参数长度是 6MB。该字段信息对应函数 [event 入参](https://cloud.tencent.com/document/product/583/9210#.E5.87.BD.E6.95.B0.E5.85.A5.E5.8F.82.3Ca-id.3D.22input.22.3E.3C.2Fa.3E)。
                     */
                    std::string m_event;
                    bool m_eventHasBeenSet;

                    /**
                     * 返回值会包含4KB的日志，可选值为None和Tail，默认值为None。当该值为Tail时，返回参数中的Log字段会包含对应的函数执行日志
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 命名空间，不填默认为 default
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 函数灰度流量控制调用，以json格式传入，例如{"k":"v"}，注意kv都需要是字符串类型，最大支持的参数长度是1024字节
                     */
                    std::string m_routingKey;
                    bool m_routingKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_INVOKEFUNCTIONREQUEST_H_
