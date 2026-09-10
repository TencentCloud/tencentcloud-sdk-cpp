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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_UPDATEFUNCTIONCODEREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_UPDATEFUNCTIONCODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/CodeReq.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * UpdateFunctionCode请求参数结构体
                */
                class UpdateFunctionCodeRequest : public AbstractModel
                {
                public:
                    UpdateFunctionCodeRequest();
                    ~UpdateFunctionCodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>创建的函数名称</p>
                     * @return FunctionName <p>创建的函数名称</p>
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置<p>创建的函数名称</p>
                     * @param _functionName <p>创建的函数名称</p>
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
                     * 获取<p>环境ID</p>
                     * @return EnvId <p>环境ID</p>
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置<p>环境ID</p>
                     * @param _envId <p>环境ID</p>
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
                     * 获取<p>函数处理方法名称</p>
                     * @return Handler <p>函数处理方法名称</p>
                     * 
                     */
                    std::string GetHandler() const;

                    /**
                     * 设置<p>函数处理方法名称</p>
                     * @param _handler <p>函数处理方法名称</p>
                     * 
                     */
                    void SetHandler(const std::string& _handler);

                    /**
                     * 判断参数 Handler 是否已赋值
                     * @return Handler 是否已赋值
                     * 
                     */
                    bool HandlerHasBeenSet() const;

                    /**
                     * 获取<p>函数所属命名空间</p>
                     * @return Namespace <p>函数所属命名空间</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>函数所属命名空间</p>
                     * @param _namespace <p>函数所属命名空间</p>
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
                     * 获取<p>在线依赖安装</p>
                     * @return InstallDependency <p>在线依赖安装</p>
                     * 
                     */
                    std::string GetInstallDependency() const;

                    /**
                     * 设置<p>在线依赖安装</p>
                     * @param _installDependency <p>在线依赖安装</p>
                     * 
                     */
                    void SetInstallDependency(const std::string& _installDependency);

                    /**
                     * 判断参数 InstallDependency 是否已赋值
                     * @return InstallDependency 是否已赋值
                     * 
                     */
                    bool InstallDependencyHasBeenSet() const;

                    /**
                     * 获取<p>在更新时是否同步发布新版本，默认为：FALSE，不发布 示例值：FALSE</p>
                     * @return Publish <p>在更新时是否同步发布新版本，默认为：FALSE，不发布 示例值：FALSE</p>
                     * 
                     */
                    std::string GetPublish() const;

                    /**
                     * 设置<p>在更新时是否同步发布新版本，默认为：FALSE，不发布 示例值：FALSE</p>
                     * @param _publish <p>在更新时是否同步发布新版本，默认为：FALSE，不发布 示例值：FALSE</p>
                     * 
                     */
                    void SetPublish(const std::string& _publish);

                    /**
                     * 判断参数 Publish 是否已赋值
                     * @return Publish 是否已赋值
                     * 
                     */
                    bool PublishHasBeenSet() const;

                    /**
                     * 获取<p>包含函数代码文件的zip格式文件</p>
                     * @return Code <p>包含函数代码文件的zip格式文件</p>
                     * 
                     */
                    CodeReq GetCode() const;

                    /**
                     * 设置<p>包含函数代码文件的zip格式文件</p>
                     * @param _code <p>包含函数代码文件的zip格式文件</p>
                     * 
                     */
                    void SetCode(const CodeReq& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取<p>代码来源方式，支持 ZipFile, Cos, Inline 之一 示例值：Cos</p>
                     * @return CodeSource <p>代码来源方式，支持 ZipFile, Cos, Inline 之一 示例值：Cos</p>
                     * 
                     */
                    std::string GetCodeSource() const;

                    /**
                     * 设置<p>代码来源方式，支持 ZipFile, Cos, Inline 之一 示例值：Cos</p>
                     * @param _codeSource <p>代码来源方式，支持 ZipFile, Cos, Inline 之一 示例值：Cos</p>
                     * 
                     */
                    void SetCodeSource(const std::string& _codeSource);

                    /**
                     * 判断参数 CodeSource 是否已赋值
                     * @return CodeSource 是否已赋值
                     * 
                     */
                    bool CodeSourceHasBeenSet() const;

                private:

                    /**
                     * <p>创建的函数名称</p>
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * <p>环境ID</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>函数处理方法名称</p>
                     */
                    std::string m_handler;
                    bool m_handlerHasBeenSet;

                    /**
                     * <p>函数所属命名空间</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>在线依赖安装</p>
                     */
                    std::string m_installDependency;
                    bool m_installDependencyHasBeenSet;

                    /**
                     * <p>在更新时是否同步发布新版本，默认为：FALSE，不发布 示例值：FALSE</p>
                     */
                    std::string m_publish;
                    bool m_publishHasBeenSet;

                    /**
                     * <p>包含函数代码文件的zip格式文件</p>
                     */
                    CodeReq m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * <p>代码来源方式，支持 ZipFile, Cos, Inline 之一 示例值：Cos</p>
                     */
                    std::string m_codeSource;
                    bool m_codeSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_UPDATEFUNCTIONCODEREQUEST_H_
