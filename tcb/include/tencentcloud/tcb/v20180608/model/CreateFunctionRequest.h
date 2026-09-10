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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CREATEFUNCTIONREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CREATEFUNCTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/CodeReq.h>
#include <tencentcloud/tcb/v20180608/model/PrivateConfig.h>
#include <tencentcloud/tcb/v20180608/model/FunctionEnvironment.h>
#include <tencentcloud/tcb/v20180608/model/FunctionVpcConfig.h>
#include <tencentcloud/tcb/v20180608/model/FunctionLayer.h>
#include <tencentcloud/tcb/v20180608/model/FunctionPublicNetConfig.h>
#include <tencentcloud/tcb/v20180608/model/FunctionEipConfigFixed.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * CreateFunction请求参数结构体
                */
                class CreateFunctionRequest : public AbstractModel
                {
                public:
                    CreateFunctionRequest();
                    ~CreateFunctionRequest() = default;
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
                     * 获取<p>函数运行时内存大小</p>
                     * @return MemorySize <p>函数运行时内存大小</p>
                     * 
                     */
                    int64_t GetMemorySize() const;

                    /**
                     * 设置<p>函数运行时内存大小</p>
                     * @param _memorySize <p>函数运行时内存大小</p>
                     * 
                     */
                    void SetMemorySize(const int64_t& _memorySize);

                    /**
                     * 判断参数 MemorySize 是否已赋值
                     * @return MemorySize 是否已赋值
                     * 
                     */
                    bool MemorySizeHasBeenSet() const;

                    /**
                     * 获取<p>函数最长执行时间</p>
                     * @return Timeout <p>函数最长执行时间</p>
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置<p>函数最长执行时间</p>
                     * @param _timeout <p>函数最长执行时间</p>
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取<p>此参数公司内部展示。是否使用GPU进行计算</p>
                     * @return UseGpu <p>此参数公司内部展示。是否使用GPU进行计算</p>
                     * 
                     */
                    std::string GetUseGpu() const;

                    /**
                     * 设置<p>此参数公司内部展示。是否使用GPU进行计算</p>
                     * @param _useGpu <p>此参数公司内部展示。是否使用GPU进行计算</p>
                     * 
                     */
                    void SetUseGpu(const std::string& _useGpu);

                    /**
                     * 判断参数 UseGpu 是否已赋值
                     * @return UseGpu 是否已赋值
                     * 
                     */
                    bool UseGpuHasBeenSet() const;

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
                     * 获取<p>此参数公司内部展示。用于小程序，GPU集群，不对外</p>
                     * @return Stamp <p>此参数公司内部展示。用于小程序，GPU集群，不对外</p>
                     * 
                     */
                    std::string GetStamp() const;

                    /**
                     * 设置<p>此参数公司内部展示。用于小程序，GPU集群，不对外</p>
                     * @param _stamp <p>此参数公司内部展示。用于小程序，GPU集群，不对外</p>
                     * 
                     */
                    void SetStamp(const std::string& _stamp);

                    /**
                     * 判断参数 Stamp 是否已赋值
                     * @return Stamp 是否已赋值
                     * 
                     */
                    bool StampHasBeenSet() const;

                    /**
                     * 获取<p>函数绑定的角色</p>
                     * @return Role <p>函数绑定的角色</p>
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置<p>函数绑定的角色</p>
                     * @param _role <p>函数绑定的角色</p>
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取<p>函数描述</p>
                     * @return Description <p>函数描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>函数描述</p>
                     * @param _description <p>函数描述</p>
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
                     * 获取<p>函数运行环境</p>
                     * @return Runtime <p>函数运行环境</p>
                     * 
                     */
                    std::string GetRuntime() const;

                    /**
                     * 设置<p>函数运行环境</p>
                     * @param _runtime <p>函数运行环境</p>
                     * 
                     */
                    void SetRuntime(const std::string& _runtime);

                    /**
                     * 判断参数 Runtime 是否已赋值
                     * @return Runtime 是否已赋值
                     * 
                     */
                    bool RuntimeHasBeenSet() const;

                    /**
                     * 获取<p>函数日志投递到的CLS TopicID</p>
                     * @return ClsTopicId <p>函数日志投递到的CLS TopicID</p>
                     * 
                     */
                    std::string GetClsTopicId() const;

                    /**
                     * 设置<p>函数日志投递到的CLS TopicID</p>
                     * @param _clsTopicId <p>函数日志投递到的CLS TopicID</p>
                     * 
                     */
                    void SetClsTopicId(const std::string& _clsTopicId);

                    /**
                     * 判断参数 ClsTopicId 是否已赋值
                     * @return ClsTopicId 是否已赋值
                     * 
                     */
                    bool ClsTopicIdHasBeenSet() const;

                    /**
                     * 获取<p>函数日志投递到的CLS LogsetID</p>
                     * @return ClsLogsetId <p>函数日志投递到的CLS LogsetID</p>
                     * 
                     */
                    std::string GetClsLogsetId() const;

                    /**
                     * 设置<p>函数日志投递到的CLS LogsetID</p>
                     * @param _clsLogsetId <p>函数日志投递到的CLS LogsetID</p>
                     * 
                     */
                    void SetClsLogsetId(const std::string& _clsLogsetId);

                    /**
                     * 判断参数 ClsLogsetId 是否已赋值
                     * @return ClsLogsetId 是否已赋值
                     * 
                     */
                    bool ClsLogsetIdHasBeenSet() const;

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
                     * 获取<p>云函数配置项</p>
                     * @return PrivateConfig <p>云函数配置项</p>
                     * 
                     */
                    PrivateConfig GetPrivateConfig() const;

                    /**
                     * 设置<p>云函数配置项</p>
                     * @param _privateConfig <p>云函数配置项</p>
                     * 
                     */
                    void SetPrivateConfig(const PrivateConfig& _privateConfig);

                    /**
                     * 判断参数 PrivateConfig 是否已赋值
                     * @return PrivateConfig 是否已赋值
                     * 
                     */
                    bool PrivateConfigHasBeenSet() const;

                    /**
                     * 获取<p>函数类型，默认值为Event，创建触发器函数请填写Event，创建HTTP函数级服务请填写HTTP</p>
                     * @return Type <p>函数类型，默认值为Event，创建触发器函数请填写Event，创建HTTP函数级服务请填写HTTP</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>函数类型，默认值为Event，创建触发器函数请填写Event，创建HTTP函数级服务请填写HTTP</p>
                     * @param _type <p>函数类型，默认值为Event，创建触发器函数请填写Event，创建HTTP函数级服务请填写HTTP</p>
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
                     * 获取<p>HTTP函数支持的访问协议。当前支持WebSockets协议，值为WS</p>
                     * @return ProtocolType <p>HTTP函数支持的访问协议。当前支持WebSockets协议，值为WS</p>
                     * 
                     */
                    std::string GetProtocolType() const;

                    /**
                     * 设置<p>HTTP函数支持的访问协议。当前支持WebSockets协议，值为WS</p>
                     * @param _protocolType <p>HTTP函数支持的访问协议。当前支持WebSockets协议，值为WS</p>
                     * 
                     */
                    void SetProtocolType(const std::string& _protocolType);

                    /**
                     * 判断参数 ProtocolType 是否已赋值
                     * @return ProtocolType 是否已赋值
                     * 
                     */
                    bool ProtocolTypeHasBeenSet() const;

                    /**
                     * 获取<p>环境变量</p>
                     * @return Environment <p>环境变量</p>
                     * 
                     */
                    FunctionEnvironment GetEnvironment() const;

                    /**
                     * 设置<p>环境变量</p>
                     * @param _environment <p>环境变量</p>
                     * 
                     */
                    void SetEnvironment(const FunctionEnvironment& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                    /**
                     * 获取<p>函数初始化超时时间，默认 65s，镜像部署函数默认 90s。</p>
                     * @return InitTimeout <p>函数初始化超时时间，默认 65s，镜像部署函数默认 90s。</p>
                     * 
                     */
                    int64_t GetInitTimeout() const;

                    /**
                     * 设置<p>函数初始化超时时间，默认 65s，镜像部署函数默认 90s。</p>
                     * @param _initTimeout <p>函数初始化超时时间，默认 65s，镜像部署函数默认 90s。</p>
                     * 
                     */
                    void SetInitTimeout(const int64_t& _initTimeout);

                    /**
                     * 判断参数 InitTimeout 是否已赋值
                     * @return InitTimeout 是否已赋值
                     * 
                     */
                    bool InitTimeoutHasBeenSet() const;

                    /**
                     * 获取<p>代码来源，支持ZipFile, Cos, Demo 其中之一</p>
                     * @return CodeSource <p>代码来源，支持ZipFile, Cos, Demo 其中之一</p>
                     * 
                     */
                    std::string GetCodeSource() const;

                    /**
                     * 设置<p>代码来源，支持ZipFile, Cos, Demo 其中之一</p>
                     * @param _codeSource <p>代码来源，支持ZipFile, Cos, Demo 其中之一</p>
                     * 
                     */
                    void SetCodeSource(const std::string& _codeSource);

                    /**
                     * 判断参数 CodeSource 是否已赋值
                     * @return CodeSource 是否已赋值
                     * 
                     */
                    bool CodeSourceHasBeenSet() const;

                    /**
                     * 获取<p>函数的私有网络配置</p>
                     * @return VpcConfig <p>函数的私有网络配置</p>
                     * 
                     */
                    FunctionVpcConfig GetVpcConfig() const;

                    /**
                     * 设置<p>函数的私有网络配置</p>
                     * @param _vpcConfig <p>函数的私有网络配置</p>
                     * 
                     */
                    void SetVpcConfig(const FunctionVpcConfig& _vpcConfig);

                    /**
                     * 判断参数 VpcConfig 是否已赋值
                     * @return VpcConfig 是否已赋值
                     * 
                     */
                    bool VpcConfigHasBeenSet() const;

                    /**
                     * 获取<p>函数要关联的Layer版本列表，Layer会按照在列表中顺序依次覆盖。</p>
                     * @return Layers <p>函数要关联的Layer版本列表，Layer会按照在列表中顺序依次覆盖。</p>
                     * 
                     */
                    std::vector<FunctionLayer> GetLayers() const;

                    /**
                     * 设置<p>函数要关联的Layer版本列表，Layer会按照在列表中顺序依次覆盖。</p>
                     * @param _layers <p>函数要关联的Layer版本列表，Layer会按照在列表中顺序依次覆盖。</p>
                     * 
                     */
                    void SetLayers(const std::vector<FunctionLayer>& _layers);

                    /**
                     * 判断参数 Layers 是否已赋值
                     * @return Layers 是否已赋值
                     * 
                     */
                    bool LayersHasBeenSet() const;

                    /**
                     * 获取<p>公网访问配置</p>
                     * @return PublicNetConfig <p>公网访问配置</p>
                     * 
                     */
                    FunctionPublicNetConfig GetPublicNetConfig() const;

                    /**
                     * 设置<p>公网访问配置</p>
                     * @param _publicNetConfig <p>公网访问配置</p>
                     * 
                     */
                    void SetPublicNetConfig(const FunctionPublicNetConfig& _publicNetConfig);

                    /**
                     * 判断参数 PublicNetConfig 是否已赋值
                     * @return PublicNetConfig 是否已赋值
                     * 
                     */
                    bool PublicNetConfigHasBeenSet() const;

                    /**
                     * 获取<p>是否开启异步属性，TRUE 为开启，FALSE为关闭</p>
                     * @return AsyncRunEnable <p>是否开启异步属性，TRUE 为开启，FALSE为关闭</p>
                     * 
                     */
                    std::string GetAsyncRunEnable() const;

                    /**
                     * 设置<p>是否开启异步属性，TRUE 为开启，FALSE为关闭</p>
                     * @param _asyncRunEnable <p>是否开启异步属性，TRUE 为开启，FALSE为关闭</p>
                     * 
                     */
                    void SetAsyncRunEnable(const std::string& _asyncRunEnable);

                    /**
                     * 判断参数 AsyncRunEnable 是否已赋值
                     * @return AsyncRunEnable 是否已赋值
                     * 
                     */
                    bool AsyncRunEnableHasBeenSet() const;

                    /**
                     * 获取<p>是否开启事件追踪，TRUE 为开启，FALSE为关闭</p>
                     * @return TraceEnable <p>是否开启事件追踪，TRUE 为开启，FALSE为关闭</p>
                     * 
                     */
                    std::string GetTraceEnable() const;

                    /**
                     * 设置<p>是否开启事件追踪，TRUE 为开启，FALSE为关闭</p>
                     * @param _traceEnable <p>是否开启事件追踪，TRUE 为开启，FALSE为关闭</p>
                     * 
                     */
                    void SetTraceEnable(const std::string& _traceEnable);

                    /**
                     * 判断参数 TraceEnable 是否已赋值
                     * @return TraceEnable 是否已赋值
                     * 
                     */
                    bool TraceEnableHasBeenSet() const;

                    /**
                     * 获取<p>是否自动创建cls主题，TRUE 为开启，FALSE为关闭</p>
                     * @return AutoCreateClsTopic <p>是否自动创建cls主题，TRUE 为开启，FALSE为关闭</p>
                     * 
                     */
                    std::string GetAutoCreateClsTopic() const;

                    /**
                     * 设置<p>是否自动创建cls主题，TRUE 为开启，FALSE为关闭</p>
                     * @param _autoCreateClsTopic <p>是否自动创建cls主题，TRUE 为开启，FALSE为关闭</p>
                     * 
                     */
                    void SetAutoCreateClsTopic(const std::string& _autoCreateClsTopic);

                    /**
                     * 判断参数 AutoCreateClsTopic 是否已赋值
                     * @return AutoCreateClsTopic 是否已赋值
                     * 
                     */
                    bool AutoCreateClsTopicHasBeenSet() const;

                    /**
                     * 获取<p>是否自动创建cls索引，TRUE 为开启，FALSE为关闭</p>
                     * @return AutoDeployClsTopicIndex <p>是否自动创建cls索引，TRUE 为开启，FALSE为关闭</p>
                     * 
                     */
                    std::string GetAutoDeployClsTopicIndex() const;

                    /**
                     * 设置<p>是否自动创建cls索引，TRUE 为开启，FALSE为关闭</p>
                     * @param _autoDeployClsTopicIndex <p>是否自动创建cls索引，TRUE 为开启，FALSE为关闭</p>
                     * 
                     */
                    void SetAutoDeployClsTopicIndex(const std::string& _autoDeployClsTopicIndex);

                    /**
                     * 判断参数 AutoDeployClsTopicIndex 是否已赋值
                     * @return AutoDeployClsTopicIndex 是否已赋值
                     * 
                     */
                    bool AutoDeployClsTopicIndexHasBeenSet() const;

                    /**
                     * 获取<p>是否开启Dns缓存能力。只支持EVENT函数。默认为FALSE，TRUE 为开启，FALSE为关闭</p>
                     * @return DnsCache <p>是否开启Dns缓存能力。只支持EVENT函数。默认为FALSE，TRUE 为开启，FALSE为关闭</p>
                     * 
                     */
                    std::string GetDnsCache() const;

                    /**
                     * 设置<p>是否开启Dns缓存能力。只支持EVENT函数。默认为FALSE，TRUE 为开启，FALSE为关闭</p>
                     * @param _dnsCache <p>是否开启Dns缓存能力。只支持EVENT函数。默认为FALSE，TRUE 为开启，FALSE为关闭</p>
                     * 
                     */
                    void SetDnsCache(const std::string& _dnsCache);

                    /**
                     * 判断参数 DnsCache 是否已赋值
                     * @return DnsCache 是否已赋值
                     * 
                     */
                    bool DnsCacheHasBeenSet() const;

                    /**
                     * 获取<p>EipConfig固定ip配置</p>
                     * @return EipConfig <p>EipConfig固定ip配置</p>
                     * 
                     */
                    FunctionEipConfigFixed GetEipConfig() const;

                    /**
                     * 设置<p>EipConfig固定ip配置</p>
                     * @param _eipConfig <p>EipConfig固定ip配置</p>
                     * 
                     */
                    void SetEipConfig(const FunctionEipConfigFixed& _eipConfig);

                    /**
                     * 判断参数 EipConfig 是否已赋值
                     * @return EipConfig 是否已赋值
                     * 
                     */
                    bool EipConfigHasBeenSet() const;

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
                     * <p>函数运行时内存大小</p>
                     */
                    int64_t m_memorySize;
                    bool m_memorySizeHasBeenSet;

                    /**
                     * <p>函数最长执行时间</p>
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>此参数公司内部展示。是否使用GPU进行计算</p>
                     */
                    std::string m_useGpu;
                    bool m_useGpuHasBeenSet;

                    /**
                     * <p>在线依赖安装</p>
                     */
                    std::string m_installDependency;
                    bool m_installDependencyHasBeenSet;

                    /**
                     * <p>此参数公司内部展示。用于小程序，GPU集群，不对外</p>
                     */
                    std::string m_stamp;
                    bool m_stampHasBeenSet;

                    /**
                     * <p>函数绑定的角色</p>
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * <p>函数描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>函数运行环境</p>
                     */
                    std::string m_runtime;
                    bool m_runtimeHasBeenSet;

                    /**
                     * <p>函数日志投递到的CLS TopicID</p>
                     */
                    std::string m_clsTopicId;
                    bool m_clsTopicIdHasBeenSet;

                    /**
                     * <p>函数日志投递到的CLS LogsetID</p>
                     */
                    std::string m_clsLogsetId;
                    bool m_clsLogsetIdHasBeenSet;

                    /**
                     * <p>包含函数代码文件的zip格式文件</p>
                     */
                    CodeReq m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * <p>云函数配置项</p>
                     */
                    PrivateConfig m_privateConfig;
                    bool m_privateConfigHasBeenSet;

                    /**
                     * <p>函数类型，默认值为Event，创建触发器函数请填写Event，创建HTTP函数级服务请填写HTTP</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>HTTP函数支持的访问协议。当前支持WebSockets协议，值为WS</p>
                     */
                    std::string m_protocolType;
                    bool m_protocolTypeHasBeenSet;

                    /**
                     * <p>环境变量</p>
                     */
                    FunctionEnvironment m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * <p>函数初始化超时时间，默认 65s，镜像部署函数默认 90s。</p>
                     */
                    int64_t m_initTimeout;
                    bool m_initTimeoutHasBeenSet;

                    /**
                     * <p>代码来源，支持ZipFile, Cos, Demo 其中之一</p>
                     */
                    std::string m_codeSource;
                    bool m_codeSourceHasBeenSet;

                    /**
                     * <p>函数的私有网络配置</p>
                     */
                    FunctionVpcConfig m_vpcConfig;
                    bool m_vpcConfigHasBeenSet;

                    /**
                     * <p>函数要关联的Layer版本列表，Layer会按照在列表中顺序依次覆盖。</p>
                     */
                    std::vector<FunctionLayer> m_layers;
                    bool m_layersHasBeenSet;

                    /**
                     * <p>公网访问配置</p>
                     */
                    FunctionPublicNetConfig m_publicNetConfig;
                    bool m_publicNetConfigHasBeenSet;

                    /**
                     * <p>是否开启异步属性，TRUE 为开启，FALSE为关闭</p>
                     */
                    std::string m_asyncRunEnable;
                    bool m_asyncRunEnableHasBeenSet;

                    /**
                     * <p>是否开启事件追踪，TRUE 为开启，FALSE为关闭</p>
                     */
                    std::string m_traceEnable;
                    bool m_traceEnableHasBeenSet;

                    /**
                     * <p>是否自动创建cls主题，TRUE 为开启，FALSE为关闭</p>
                     */
                    std::string m_autoCreateClsTopic;
                    bool m_autoCreateClsTopicHasBeenSet;

                    /**
                     * <p>是否自动创建cls索引，TRUE 为开启，FALSE为关闭</p>
                     */
                    std::string m_autoDeployClsTopicIndex;
                    bool m_autoDeployClsTopicIndexHasBeenSet;

                    /**
                     * <p>是否开启Dns缓存能力。只支持EVENT函数。默认为FALSE，TRUE 为开启，FALSE为关闭</p>
                     */
                    std::string m_dnsCache;
                    bool m_dnsCacheHasBeenSet;

                    /**
                     * <p>EipConfig固定ip配置</p>
                     */
                    FunctionEipConfigFixed m_eipConfig;
                    bool m_eipConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CREATEFUNCTIONREQUEST_H_
