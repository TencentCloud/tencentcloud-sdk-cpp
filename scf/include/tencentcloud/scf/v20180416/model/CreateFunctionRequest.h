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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_CREATEFUNCTIONREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_CREATEFUNCTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/Code.h>
#include <tencentcloud/scf/v20180416/model/Environment.h>
#include <tencentcloud/scf/v20180416/model/VpcConfig.h>
#include <tencentcloud/scf/v20180416/model/LayerVersionSimple.h>
#include <tencentcloud/scf/v20180416/model/DeadLetterConfig.h>
#include <tencentcloud/scf/v20180416/model/PublicNetConfigIn.h>
#include <tencentcloud/scf/v20180416/model/CfsConfig.h>
#include <tencentcloud/scf/v20180416/model/Tag.h>
#include <tencentcloud/scf/v20180416/model/ProtocolParams.h>
#include <tencentcloud/scf/v20180416/model/InstanceConcurrencyConfig.h>
#include <tencentcloud/scf/v20180416/model/IntranetConfigIn.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
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
                     * 获取创建的函数名称，函数名称支持26个英文字母大小写、数字、连接符和下划线，第一个字符只能以字母开头，最后一个字符不能为连接符或者下划线，名称长度2-60
                     * @return FunctionName 创建的函数名称，函数名称支持26个英文字母大小写、数字、连接符和下划线，第一个字符只能以字母开头，最后一个字符不能为连接符或者下划线，名称长度2-60
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置创建的函数名称，函数名称支持26个英文字母大小写、数字、连接符和下划线，第一个字符只能以字母开头，最后一个字符不能为连接符或者下划线，名称长度2-60
                     * @param _functionName 创建的函数名称，函数名称支持26个英文字母大小写、数字、连接符和下划线，第一个字符只能以字母开头，最后一个字符不能为连接符或者下划线，名称长度2-60
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
                     * 获取函数代码. 注意：不能同时指定Cos、ZipFile或 DemoId。
                     * @return Code 函数代码. 注意：不能同时指定Cos、ZipFile或 DemoId。
                     * 
                     */
                    Code GetCode() const;

                    /**
                     * 设置函数代码. 注意：不能同时指定Cos、ZipFile或 DemoId。
                     * @param _code 函数代码. 注意：不能同时指定Cos、ZipFile或 DemoId。
                     * 
                     */
                    void SetCode(const Code& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取函数处理方法名称，名称格式支持 "文件名称.方法名称" 形式（java 名称格式 包名.类名::方法名），文件名称和函数名称之间以"."隔开，文件名称和函数名称要求以字母开始和结尾，中间允许插入字母、数字、下划线和连接符，文件名称和函数名字的长度要求是 2-60 个字符
                     * @return Handler 函数处理方法名称，名称格式支持 "文件名称.方法名称" 形式（java 名称格式 包名.类名::方法名），文件名称和函数名称之间以"."隔开，文件名称和函数名称要求以字母开始和结尾，中间允许插入字母、数字、下划线和连接符，文件名称和函数名字的长度要求是 2-60 个字符
                     * 
                     */
                    std::string GetHandler() const;

                    /**
                     * 设置函数处理方法名称，名称格式支持 "文件名称.方法名称" 形式（java 名称格式 包名.类名::方法名），文件名称和函数名称之间以"."隔开，文件名称和函数名称要求以字母开始和结尾，中间允许插入字母、数字、下划线和连接符，文件名称和函数名字的长度要求是 2-60 个字符
                     * @param _handler 函数处理方法名称，名称格式支持 "文件名称.方法名称" 形式（java 名称格式 包名.类名::方法名），文件名称和函数名称之间以"."隔开，文件名称和函数名称要求以字母开始和结尾，中间允许插入字母、数字、下划线和连接符，文件名称和函数名字的长度要求是 2-60 个字符
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
                     * 获取函数描述,最大支持 1000 个英文字母、数字、空格、逗号、换行符和英文句号，支持中文
                     * @return Description 函数描述,最大支持 1000 个英文字母、数字、空格、逗号、换行符和英文句号，支持中文
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置函数描述,最大支持 1000 个英文字母、数字、空格、逗号、换行符和英文句号，支持中文
                     * @param _description 函数描述,最大支持 1000 个英文字母、数字、空格、逗号、换行符和英文句号，支持中文
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
                     * 获取函数运行时内存大小，默认为 128M，可选范围 64、128MB-3072MB，并且以 128MB 为阶梯
                     * @return MemorySize 函数运行时内存大小，默认为 128M，可选范围 64、128MB-3072MB，并且以 128MB 为阶梯
                     * 
                     */
                    int64_t GetMemorySize() const;

                    /**
                     * 设置函数运行时内存大小，默认为 128M，可选范围 64、128MB-3072MB，并且以 128MB 为阶梯
                     * @param _memorySize 函数运行时内存大小，默认为 128M，可选范围 64、128MB-3072MB，并且以 128MB 为阶梯
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
                     * 获取函数最长执行时间，单位为秒，可选值范围 1-900 秒，默认为 3 秒
                     * @return Timeout 函数最长执行时间，单位为秒，可选值范围 1-900 秒，默认为 3 秒
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置函数最长执行时间，单位为秒，可选值范围 1-900 秒，默认为 3 秒
                     * @param _timeout 函数最长执行时间，单位为秒，可选值范围 1-900 秒，默认为 3 秒
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
                     * 获取函数的环境变量
                     * @return Environment 函数的环境变量
                     * 
                     */
                    Environment GetEnvironment() const;

                    /**
                     * 设置函数的环境变量
                     * @param _environment 函数的环境变量
                     * 
                     */
                    void SetEnvironment(const Environment& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                    /**
                     * 获取函数运行环境，默认Python2.7
目前支持的运行环境：
- Python2.7
- Python3.6
- Python3.7
- Python3.9
- Python3.10
- Nodejs6.10
- Nodejs8.9
- Nodejs10.15
- Nodejs12.16
- Nodejs14.18
- Nodejs16.13
- Nodejs18.15
- Php5.6
- Php7(7.2版本)
- Php7.4
- Php8.0
- Go1
- Java8
- CustomRuntime
                     * @return Runtime 函数运行环境，默认Python2.7
目前支持的运行环境：
- Python2.7
- Python3.6
- Python3.7
- Python3.9
- Python3.10
- Nodejs6.10
- Nodejs8.9
- Nodejs10.15
- Nodejs12.16
- Nodejs14.18
- Nodejs16.13
- Nodejs18.15
- Php5.6
- Php7(7.2版本)
- Php7.4
- Php8.0
- Go1
- Java8
- CustomRuntime
                     * 
                     */
                    std::string GetRuntime() const;

                    /**
                     * 设置函数运行环境，默认Python2.7
目前支持的运行环境：
- Python2.7
- Python3.6
- Python3.7
- Python3.9
- Python3.10
- Nodejs6.10
- Nodejs8.9
- Nodejs10.15
- Nodejs12.16
- Nodejs14.18
- Nodejs16.13
- Nodejs18.15
- Php5.6
- Php7(7.2版本)
- Php7.4
- Php8.0
- Go1
- Java8
- CustomRuntime
                     * @param _runtime 函数运行环境，默认Python2.7
目前支持的运行环境：
- Python2.7
- Python3.6
- Python3.7
- Python3.9
- Python3.10
- Nodejs6.10
- Nodejs8.9
- Nodejs10.15
- Nodejs12.16
- Nodejs14.18
- Nodejs16.13
- Nodejs18.15
- Php5.6
- Php7(7.2版本)
- Php7.4
- Php8.0
- Go1
- Java8
- CustomRuntime
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
                     * 获取函数的私有网络配置
                     * @return VpcConfig 函数的私有网络配置
                     * 
                     */
                    VpcConfig GetVpcConfig() const;

                    /**
                     * 设置函数的私有网络配置
                     * @param _vpcConfig 函数的私有网络配置
                     * 
                     */
                    void SetVpcConfig(const VpcConfig& _vpcConfig);

                    /**
                     * 判断参数 VpcConfig 是否已赋值
                     * @return VpcConfig 是否已赋值
                     * 
                     */
                    bool VpcConfigHasBeenSet() const;

                    /**
                     * 获取函数所属命名空间
                     * @return Namespace 函数所属命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置函数所属命名空间
                     * @param _namespace 函数所属命名空间
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
                     * 获取函数绑定的角色
                     * @return Role 函数绑定的角色
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置函数绑定的角色
                     * @param _role 函数绑定的角色
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
                     * 获取[在线依赖安装](https://cloud.tencent.com/document/product/583/37920)，TRUE 表示安装，默认值为 FALSE。仅支持 Node.js 函数。
                     * @return InstallDependency [在线依赖安装](https://cloud.tencent.com/document/product/583/37920)，TRUE 表示安装，默认值为 FALSE。仅支持 Node.js 函数。
                     * 
                     */
                    std::string GetInstallDependency() const;

                    /**
                     * 设置[在线依赖安装](https://cloud.tencent.com/document/product/583/37920)，TRUE 表示安装，默认值为 FALSE。仅支持 Node.js 函数。
                     * @param _installDependency [在线依赖安装](https://cloud.tencent.com/document/product/583/37920)，TRUE 表示安装，默认值为 FALSE。仅支持 Node.js 函数。
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
                     * 获取函数日志投递到的CLS LogsetID
                     * @return ClsLogsetId 函数日志投递到的CLS LogsetID
                     * 
                     */
                    std::string GetClsLogsetId() const;

                    /**
                     * 设置函数日志投递到的CLS LogsetID
                     * @param _clsLogsetId 函数日志投递到的CLS LogsetID
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
                     * 获取函数日志投递到的CLS TopicID
                     * @return ClsTopicId 函数日志投递到的CLS TopicID
                     * 
                     */
                    std::string GetClsTopicId() const;

                    /**
                     * 设置函数日志投递到的CLS TopicID
                     * @param _clsTopicId 函数日志投递到的CLS TopicID
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
                     * 获取函数类型，默认值为Event，创建触发器函数请填写Event，创建HTTP函数级服务请填写HTTP
                     * @return Type 函数类型，默认值为Event，创建触发器函数请填写Event，创建HTTP函数级服务请填写HTTP
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置函数类型，默认值为Event，创建触发器函数请填写Event，创建HTTP函数级服务请填写HTTP
                     * @param _type 函数类型，默认值为Event，创建触发器函数请填写Event，创建HTTP函数级服务请填写HTTP
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
                     * 获取CodeSource 代码来源，支持ZipFile, Cos, Demo 其中之一
                     * @return CodeSource CodeSource 代码来源，支持ZipFile, Cos, Demo 其中之一
                     * 
                     */
                    std::string GetCodeSource() const;

                    /**
                     * 设置CodeSource 代码来源，支持ZipFile, Cos, Demo 其中之一
                     * @param _codeSource CodeSource 代码来源，支持ZipFile, Cos, Demo 其中之一
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
                     * 获取函数要关联的Layer版本列表，Layer会按照在列表中顺序依次覆盖。
                     * @return Layers 函数要关联的Layer版本列表，Layer会按照在列表中顺序依次覆盖。
                     * 
                     */
                    std::vector<LayerVersionSimple> GetLayers() const;

                    /**
                     * 设置函数要关联的Layer版本列表，Layer会按照在列表中顺序依次覆盖。
                     * @param _layers 函数要关联的Layer版本列表，Layer会按照在列表中顺序依次覆盖。
                     * 
                     */
                    void SetLayers(const std::vector<LayerVersionSimple>& _layers);

                    /**
                     * 判断参数 Layers 是否已赋值
                     * @return Layers 是否已赋值
                     * 
                     */
                    bool LayersHasBeenSet() const;

                    /**
                     * 获取死信队列参数
                     * @return DeadLetterConfig 死信队列参数
                     * 
                     */
                    DeadLetterConfig GetDeadLetterConfig() const;

                    /**
                     * 设置死信队列参数
                     * @param _deadLetterConfig 死信队列参数
                     * 
                     */
                    void SetDeadLetterConfig(const DeadLetterConfig& _deadLetterConfig);

                    /**
                     * 判断参数 DeadLetterConfig 是否已赋值
                     * @return DeadLetterConfig 是否已赋值
                     * 
                     */
                    bool DeadLetterConfigHasBeenSet() const;

                    /**
                     * 获取公网访问配置
                     * @return PublicNetConfig 公网访问配置
                     * 
                     */
                    PublicNetConfigIn GetPublicNetConfig() const;

                    /**
                     * 设置公网访问配置
                     * @param _publicNetConfig 公网访问配置
                     * 
                     */
                    void SetPublicNetConfig(const PublicNetConfigIn& _publicNetConfig);

                    /**
                     * 判断参数 PublicNetConfig 是否已赋值
                     * @return PublicNetConfig 是否已赋值
                     * 
                     */
                    bool PublicNetConfigHasBeenSet() const;

                    /**
                     * 获取文件系统配置参数，用于云函数挂载文件系统
                     * @return CfsConfig 文件系统配置参数，用于云函数挂载文件系统
                     * 
                     */
                    CfsConfig GetCfsConfig() const;

                    /**
                     * 设置文件系统配置参数，用于云函数挂载文件系统
                     * @param _cfsConfig 文件系统配置参数，用于云函数挂载文件系统
                     * 
                     */
                    void SetCfsConfig(const CfsConfig& _cfsConfig);

                    /**
                     * 判断参数 CfsConfig 是否已赋值
                     * @return CfsConfig 是否已赋值
                     * 
                     */
                    bool CfsConfigHasBeenSet() const;

                    /**
                     * 获取函数初始化超时时间，默认 65s，镜像部署函数默认 90s。
                     * @return InitTimeout 函数初始化超时时间，默认 65s，镜像部署函数默认 90s。
                     * 
                     */
                    int64_t GetInitTimeout() const;

                    /**
                     * 设置函数初始化超时时间，默认 65s，镜像部署函数默认 90s。
                     * @param _initTimeout 函数初始化超时时间，默认 65s，镜像部署函数默认 90s。
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
                     * 获取函数 Tag 参数，以键值对数组形式传入
                     * @return Tags 函数 Tag 参数，以键值对数组形式传入
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置函数 Tag 参数，以键值对数组形式传入
                     * @param _tags 函数 Tag 参数，以键值对数组形式传入
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取是否开启异步属性，TRUE 为开启，FALSE为关闭
                     * @return AsyncRunEnable 是否开启异步属性，TRUE 为开启，FALSE为关闭
                     * 
                     */
                    std::string GetAsyncRunEnable() const;

                    /**
                     * 设置是否开启异步属性，TRUE 为开启，FALSE为关闭
                     * @param _asyncRunEnable 是否开启异步属性，TRUE 为开启，FALSE为关闭
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
                     * 获取是否开启事件追踪，TRUE 为开启，FALSE为关闭
                     * @return TraceEnable 是否开启事件追踪，TRUE 为开启，FALSE为关闭
                     * 
                     */
                    std::string GetTraceEnable() const;

                    /**
                     * 设置是否开启事件追踪，TRUE 为开启，FALSE为关闭
                     * @param _traceEnable 是否开启事件追踪，TRUE 为开启，FALSE为关闭
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
                     * 获取是否自动创建cls索引，TRUE 为开启，FALSE为关闭
                     * @return AutoDeployClsTopicIndex 是否自动创建cls索引，TRUE 为开启，FALSE为关闭
                     * 
                     */
                    std::string GetAutoDeployClsTopicIndex() const;

                    /**
                     * 设置是否自动创建cls索引，TRUE 为开启，FALSE为关闭
                     * @param _autoDeployClsTopicIndex 是否自动创建cls索引，TRUE 为开启，FALSE为关闭
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
                     * 获取是否自动创建cls主题，TRUE 为开启，FALSE为关闭
                     * @return AutoCreateClsTopic 是否自动创建cls主题，TRUE 为开启，FALSE为关闭
                     * 
                     */
                    std::string GetAutoCreateClsTopic() const;

                    /**
                     * 设置是否自动创建cls主题，TRUE 为开启，FALSE为关闭
                     * @param _autoCreateClsTopic 是否自动创建cls主题，TRUE 为开启，FALSE为关闭
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
                     * 获取HTTP函数支持的访问协议。当前支持WebSockets协议，值为WS
                     * @return ProtocolType HTTP函数支持的访问协议。当前支持WebSockets协议，值为WS
                     * 
                     */
                    std::string GetProtocolType() const;

                    /**
                     * 设置HTTP函数支持的访问协议。当前支持WebSockets协议，值为WS
                     * @param _protocolType HTTP函数支持的访问协议。当前支持WebSockets协议，值为WS
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
                     * 获取HTTP函数配置ProtocolType访问协议，当前协议可配置的参数
                     * @return ProtocolParams HTTP函数配置ProtocolType访问协议，当前协议可配置的参数
                     * 
                     */
                    ProtocolParams GetProtocolParams() const;

                    /**
                     * 设置HTTP函数配置ProtocolType访问协议，当前协议可配置的参数
                     * @param _protocolParams HTTP函数配置ProtocolType访问协议，当前协议可配置的参数
                     * 
                     */
                    void SetProtocolParams(const ProtocolParams& _protocolParams);

                    /**
                     * 判断参数 ProtocolParams 是否已赋值
                     * @return ProtocolParams 是否已赋值
                     * 
                     */
                    bool ProtocolParamsHasBeenSet() const;

                    /**
                     * 获取单实例多并发配置。只支持Web函数。
                     * @return InstanceConcurrencyConfig 单实例多并发配置。只支持Web函数。
                     * 
                     */
                    InstanceConcurrencyConfig GetInstanceConcurrencyConfig() const;

                    /**
                     * 设置单实例多并发配置。只支持Web函数。
                     * @param _instanceConcurrencyConfig 单实例多并发配置。只支持Web函数。
                     * 
                     */
                    void SetInstanceConcurrencyConfig(const InstanceConcurrencyConfig& _instanceConcurrencyConfig);

                    /**
                     * 判断参数 InstanceConcurrencyConfig 是否已赋值
                     * @return InstanceConcurrencyConfig 是否已赋值
                     * 
                     */
                    bool InstanceConcurrencyConfigHasBeenSet() const;

                    /**
                     * 获取是否开启Dns缓存能力。只支持EVENT函数。默认为FALSE，TRUE 为开启，FALSE为关闭
                     * @return DnsCache 是否开启Dns缓存能力。只支持EVENT函数。默认为FALSE，TRUE 为开启，FALSE为关闭
                     * 
                     */
                    std::string GetDnsCache() const;

                    /**
                     * 设置是否开启Dns缓存能力。只支持EVENT函数。默认为FALSE，TRUE 为开启，FALSE为关闭
                     * @param _dnsCache 是否开启Dns缓存能力。只支持EVENT函数。默认为FALSE，TRUE 为开启，FALSE为关闭
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
                     * 获取内网访问配置
                     * @return IntranetConfig 内网访问配置
                     * 
                     */
                    IntranetConfigIn GetIntranetConfig() const;

                    /**
                     * 设置内网访问配置
                     * @param _intranetConfig 内网访问配置
                     * 
                     */
                    void SetIntranetConfig(const IntranetConfigIn& _intranetConfig);

                    /**
                     * 判断参数 IntranetConfig 是否已赋值
                     * @return IntranetConfig 是否已赋值
                     * 
                     */
                    bool IntranetConfigHasBeenSet() const;

                private:

                    /**
                     * 创建的函数名称，函数名称支持26个英文字母大小写、数字、连接符和下划线，第一个字符只能以字母开头，最后一个字符不能为连接符或者下划线，名称长度2-60
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * 函数代码. 注意：不能同时指定Cos、ZipFile或 DemoId。
                     */
                    Code m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 函数处理方法名称，名称格式支持 "文件名称.方法名称" 形式（java 名称格式 包名.类名::方法名），文件名称和函数名称之间以"."隔开，文件名称和函数名称要求以字母开始和结尾，中间允许插入字母、数字、下划线和连接符，文件名称和函数名字的长度要求是 2-60 个字符
                     */
                    std::string m_handler;
                    bool m_handlerHasBeenSet;

                    /**
                     * 函数描述,最大支持 1000 个英文字母、数字、空格、逗号、换行符和英文句号，支持中文
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 函数运行时内存大小，默认为 128M，可选范围 64、128MB-3072MB，并且以 128MB 为阶梯
                     */
                    int64_t m_memorySize;
                    bool m_memorySizeHasBeenSet;

                    /**
                     * 函数最长执行时间，单位为秒，可选值范围 1-900 秒，默认为 3 秒
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 函数的环境变量
                     */
                    Environment m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * 函数运行环境，默认Python2.7
目前支持的运行环境：
- Python2.7
- Python3.6
- Python3.7
- Python3.9
- Python3.10
- Nodejs6.10
- Nodejs8.9
- Nodejs10.15
- Nodejs12.16
- Nodejs14.18
- Nodejs16.13
- Nodejs18.15
- Php5.6
- Php7(7.2版本)
- Php7.4
- Php8.0
- Go1
- Java8
- CustomRuntime
                     */
                    std::string m_runtime;
                    bool m_runtimeHasBeenSet;

                    /**
                     * 函数的私有网络配置
                     */
                    VpcConfig m_vpcConfig;
                    bool m_vpcConfigHasBeenSet;

                    /**
                     * 函数所属命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 函数绑定的角色
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * [在线依赖安装](https://cloud.tencent.com/document/product/583/37920)，TRUE 表示安装，默认值为 FALSE。仅支持 Node.js 函数。
                     */
                    std::string m_installDependency;
                    bool m_installDependencyHasBeenSet;

                    /**
                     * 函数日志投递到的CLS LogsetID
                     */
                    std::string m_clsLogsetId;
                    bool m_clsLogsetIdHasBeenSet;

                    /**
                     * 函数日志投递到的CLS TopicID
                     */
                    std::string m_clsTopicId;
                    bool m_clsTopicIdHasBeenSet;

                    /**
                     * 函数类型，默认值为Event，创建触发器函数请填写Event，创建HTTP函数级服务请填写HTTP
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * CodeSource 代码来源，支持ZipFile, Cos, Demo 其中之一
                     */
                    std::string m_codeSource;
                    bool m_codeSourceHasBeenSet;

                    /**
                     * 函数要关联的Layer版本列表，Layer会按照在列表中顺序依次覆盖。
                     */
                    std::vector<LayerVersionSimple> m_layers;
                    bool m_layersHasBeenSet;

                    /**
                     * 死信队列参数
                     */
                    DeadLetterConfig m_deadLetterConfig;
                    bool m_deadLetterConfigHasBeenSet;

                    /**
                     * 公网访问配置
                     */
                    PublicNetConfigIn m_publicNetConfig;
                    bool m_publicNetConfigHasBeenSet;

                    /**
                     * 文件系统配置参数，用于云函数挂载文件系统
                     */
                    CfsConfig m_cfsConfig;
                    bool m_cfsConfigHasBeenSet;

                    /**
                     * 函数初始化超时时间，默认 65s，镜像部署函数默认 90s。
                     */
                    int64_t m_initTimeout;
                    bool m_initTimeoutHasBeenSet;

                    /**
                     * 函数 Tag 参数，以键值对数组形式传入
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 是否开启异步属性，TRUE 为开启，FALSE为关闭
                     */
                    std::string m_asyncRunEnable;
                    bool m_asyncRunEnableHasBeenSet;

                    /**
                     * 是否开启事件追踪，TRUE 为开启，FALSE为关闭
                     */
                    std::string m_traceEnable;
                    bool m_traceEnableHasBeenSet;

                    /**
                     * 是否自动创建cls索引，TRUE 为开启，FALSE为关闭
                     */
                    std::string m_autoDeployClsTopicIndex;
                    bool m_autoDeployClsTopicIndexHasBeenSet;

                    /**
                     * 是否自动创建cls主题，TRUE 为开启，FALSE为关闭
                     */
                    std::string m_autoCreateClsTopic;
                    bool m_autoCreateClsTopicHasBeenSet;

                    /**
                     * HTTP函数支持的访问协议。当前支持WebSockets协议，值为WS
                     */
                    std::string m_protocolType;
                    bool m_protocolTypeHasBeenSet;

                    /**
                     * HTTP函数配置ProtocolType访问协议，当前协议可配置的参数
                     */
                    ProtocolParams m_protocolParams;
                    bool m_protocolParamsHasBeenSet;

                    /**
                     * 单实例多并发配置。只支持Web函数。
                     */
                    InstanceConcurrencyConfig m_instanceConcurrencyConfig;
                    bool m_instanceConcurrencyConfigHasBeenSet;

                    /**
                     * 是否开启Dns缓存能力。只支持EVENT函数。默认为FALSE，TRUE 为开启，FALSE为关闭
                     */
                    std::string m_dnsCache;
                    bool m_dnsCacheHasBeenSet;

                    /**
                     * 内网访问配置
                     */
                    IntranetConfigIn m_intranetConfig;
                    bool m_intranetConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_CREATEFUNCTIONREQUEST_H_
