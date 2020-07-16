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
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置创建的函数名称，函数名称支持26个英文字母大小写、数字、连接符和下划线，第一个字符只能以字母开头，最后一个字符不能为连接符或者下划线，名称长度2-60
                     * @param FunctionName 创建的函数名称，函数名称支持26个英文字母大小写、数字、连接符和下划线，第一个字符只能以字母开头，最后一个字符不能为连接符或者下划线，名称长度2-60
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取函数的代码. 注意：不能同时指定Cos与ZipFile
                     * @return Code 函数的代码. 注意：不能同时指定Cos与ZipFile
                     */
                    Code GetCode() const;

                    /**
                     * 设置函数的代码. 注意：不能同时指定Cos与ZipFile
                     * @param Code 函数的代码. 注意：不能同时指定Cos与ZipFile
                     */
                    void SetCode(const Code& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取函数处理方法名称，名称格式支持 "文件名称.方法名称" 形式，文件名称和函数名称之间以"."隔开，文件名称和函数名称要求以字母开始和结尾，中间允许插入字母、数字、下划线和连接符，文件名称和函数名字的长度要求是 2-60 个字符
                     * @return Handler 函数处理方法名称，名称格式支持 "文件名称.方法名称" 形式，文件名称和函数名称之间以"."隔开，文件名称和函数名称要求以字母开始和结尾，中间允许插入字母、数字、下划线和连接符，文件名称和函数名字的长度要求是 2-60 个字符
                     */
                    std::string GetHandler() const;

                    /**
                     * 设置函数处理方法名称，名称格式支持 "文件名称.方法名称" 形式，文件名称和函数名称之间以"."隔开，文件名称和函数名称要求以字母开始和结尾，中间允许插入字母、数字、下划线和连接符，文件名称和函数名字的长度要求是 2-60 个字符
                     * @param Handler 函数处理方法名称，名称格式支持 "文件名称.方法名称" 形式，文件名称和函数名称之间以"."隔开，文件名称和函数名称要求以字母开始和结尾，中间允许插入字母、数字、下划线和连接符，文件名称和函数名字的长度要求是 2-60 个字符
                     */
                    void SetHandler(const std::string& _handler);

                    /**
                     * 判断参数 Handler 是否已赋值
                     * @return Handler 是否已赋值
                     */
                    bool HandlerHasBeenSet() const;

                    /**
                     * 获取函数描述,最大支持 1000 个英文字母、数字、空格、逗号、换行符和英文句号，支持中文
                     * @return Description 函数描述,最大支持 1000 个英文字母、数字、空格、逗号、换行符和英文句号，支持中文
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置函数描述,最大支持 1000 个英文字母、数字、空格、逗号、换行符和英文句号，支持中文
                     * @param Description 函数描述,最大支持 1000 个英文字母、数字、空格、逗号、换行符和英文句号，支持中文
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取函数运行时内存大小，默认为 128M，可选范围 64、128MB-3072MB，并且以 128MB 为阶梯
                     * @return MemorySize 函数运行时内存大小，默认为 128M，可选范围 64、128MB-3072MB，并且以 128MB 为阶梯
                     */
                    int64_t GetMemorySize() const;

                    /**
                     * 设置函数运行时内存大小，默认为 128M，可选范围 64、128MB-3072MB，并且以 128MB 为阶梯
                     * @param MemorySize 函数运行时内存大小，默认为 128M，可选范围 64、128MB-3072MB，并且以 128MB 为阶梯
                     */
                    void SetMemorySize(const int64_t& _memorySize);

                    /**
                     * 判断参数 MemorySize 是否已赋值
                     * @return MemorySize 是否已赋值
                     */
                    bool MemorySizeHasBeenSet() const;

                    /**
                     * 获取函数最长执行时间，单位为秒，可选值范围 1-900 秒，默认为 3 秒
                     * @return Timeout 函数最长执行时间，单位为秒，可选值范围 1-900 秒，默认为 3 秒
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置函数最长执行时间，单位为秒，可选值范围 1-900 秒，默认为 3 秒
                     * @param Timeout 函数最长执行时间，单位为秒，可选值范围 1-900 秒，默认为 3 秒
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取函数的环境变量
                     * @return Environment 函数的环境变量
                     */
                    Environment GetEnvironment() const;

                    /**
                     * 设置函数的环境变量
                     * @param Environment 函数的环境变量
                     */
                    void SetEnvironment(const Environment& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     */
                    bool EnvironmentHasBeenSet() const;

                    /**
                     * 获取函数运行环境，目前仅支持 Python2.7，Python3.6，Nodejs6.10，Nodejs8.9，Nodejs10.15，Nodejs12.16， PHP5， PHP7，Golang1 和 Java8，默认Python2.7
                     * @return Runtime 函数运行环境，目前仅支持 Python2.7，Python3.6，Nodejs6.10，Nodejs8.9，Nodejs10.15，Nodejs12.16， PHP5， PHP7，Golang1 和 Java8，默认Python2.7
                     */
                    std::string GetRuntime() const;

                    /**
                     * 设置函数运行环境，目前仅支持 Python2.7，Python3.6，Nodejs6.10，Nodejs8.9，Nodejs10.15，Nodejs12.16， PHP5， PHP7，Golang1 和 Java8，默认Python2.7
                     * @param Runtime 函数运行环境，目前仅支持 Python2.7，Python3.6，Nodejs6.10，Nodejs8.9，Nodejs10.15，Nodejs12.16， PHP5， PHP7，Golang1 和 Java8，默认Python2.7
                     */
                    void SetRuntime(const std::string& _runtime);

                    /**
                     * 判断参数 Runtime 是否已赋值
                     * @return Runtime 是否已赋值
                     */
                    bool RuntimeHasBeenSet() const;

                    /**
                     * 获取函数的私有网络配置
                     * @return VpcConfig 函数的私有网络配置
                     */
                    VpcConfig GetVpcConfig() const;

                    /**
                     * 设置函数的私有网络配置
                     * @param VpcConfig 函数的私有网络配置
                     */
                    void SetVpcConfig(const VpcConfig& _vpcConfig);

                    /**
                     * 判断参数 VpcConfig 是否已赋值
                     * @return VpcConfig 是否已赋值
                     */
                    bool VpcConfigHasBeenSet() const;

                    /**
                     * 获取函数所属命名空间
                     * @return Namespace 函数所属命名空间
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置函数所属命名空间
                     * @param Namespace 函数所属命名空间
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取函数绑定的角色
                     * @return Role 函数绑定的角色
                     */
                    std::string GetRole() const;

                    /**
                     * 设置函数绑定的角色
                     * @param Role 函数绑定的角色
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取函数日志投递到的CLS LogsetID
                     * @return ClsLogsetId 函数日志投递到的CLS LogsetID
                     */
                    std::string GetClsLogsetId() const;

                    /**
                     * 设置函数日志投递到的CLS LogsetID
                     * @param ClsLogsetId 函数日志投递到的CLS LogsetID
                     */
                    void SetClsLogsetId(const std::string& _clsLogsetId);

                    /**
                     * 判断参数 ClsLogsetId 是否已赋值
                     * @return ClsLogsetId 是否已赋值
                     */
                    bool ClsLogsetIdHasBeenSet() const;

                    /**
                     * 获取函数日志投递到的CLS TopicID
                     * @return ClsTopicId 函数日志投递到的CLS TopicID
                     */
                    std::string GetClsTopicId() const;

                    /**
                     * 设置函数日志投递到的CLS TopicID
                     * @param ClsTopicId 函数日志投递到的CLS TopicID
                     */
                    void SetClsTopicId(const std::string& _clsTopicId);

                    /**
                     * 判断参数 ClsTopicId 是否已赋值
                     * @return ClsTopicId 是否已赋值
                     */
                    bool ClsTopicIdHasBeenSet() const;

                    /**
                     * 获取函数类型，默认值为Event，创建触发器函数请填写Event，创建HTTP函数级服务请填写HTTP
                     * @return Type 函数类型，默认值为Event，创建触发器函数请填写Event，创建HTTP函数级服务请填写HTTP
                     */
                    std::string GetType() const;

                    /**
                     * 设置函数类型，默认值为Event，创建触发器函数请填写Event，创建HTTP函数级服务请填写HTTP
                     * @param Type 函数类型，默认值为Event，创建触发器函数请填写Event，创建HTTP函数级服务请填写HTTP
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取CodeSource 代码来源，支持以下'ZipFile', 'Cos', 'Demo', 'TempCos', 'Git'之一，使用Git来源必须指定此字段
                     * @return CodeSource CodeSource 代码来源，支持以下'ZipFile', 'Cos', 'Demo', 'TempCos', 'Git'之一，使用Git来源必须指定此字段
                     */
                    std::string GetCodeSource() const;

                    /**
                     * 设置CodeSource 代码来源，支持以下'ZipFile', 'Cos', 'Demo', 'TempCos', 'Git'之一，使用Git来源必须指定此字段
                     * @param CodeSource CodeSource 代码来源，支持以下'ZipFile', 'Cos', 'Demo', 'TempCos', 'Git'之一，使用Git来源必须指定此字段
                     */
                    void SetCodeSource(const std::string& _codeSource);

                    /**
                     * 判断参数 CodeSource 是否已赋值
                     * @return CodeSource 是否已赋值
                     */
                    bool CodeSourceHasBeenSet() const;

                    /**
                     * 获取函数要关联的Layer版本列表，Layer会按照在列表中顺序依次覆盖。
                     * @return Layers 函数要关联的Layer版本列表，Layer会按照在列表中顺序依次覆盖。
                     */
                    std::vector<LayerVersionSimple> GetLayers() const;

                    /**
                     * 设置函数要关联的Layer版本列表，Layer会按照在列表中顺序依次覆盖。
                     * @param Layers 函数要关联的Layer版本列表，Layer会按照在列表中顺序依次覆盖。
                     */
                    void SetLayers(const std::vector<LayerVersionSimple>& _layers);

                    /**
                     * 判断参数 Layers 是否已赋值
                     * @return Layers 是否已赋值
                     */
                    bool LayersHasBeenSet() const;

                    /**
                     * 获取死信队列参数
                     * @return DeadLetterConfig 死信队列参数
                     */
                    DeadLetterConfig GetDeadLetterConfig() const;

                    /**
                     * 设置死信队列参数
                     * @param DeadLetterConfig 死信队列参数
                     */
                    void SetDeadLetterConfig(const DeadLetterConfig& _deadLetterConfig);

                    /**
                     * 判断参数 DeadLetterConfig 是否已赋值
                     * @return DeadLetterConfig 是否已赋值
                     */
                    bool DeadLetterConfigHasBeenSet() const;

                    /**
                     * 获取公网访问配置
                     * @return PublicNetConfig 公网访问配置
                     */
                    PublicNetConfigIn GetPublicNetConfig() const;

                    /**
                     * 设置公网访问配置
                     * @param PublicNetConfig 公网访问配置
                     */
                    void SetPublicNetConfig(const PublicNetConfigIn& _publicNetConfig);

                    /**
                     * 判断参数 PublicNetConfig 是否已赋值
                     * @return PublicNetConfig 是否已赋值
                     */
                    bool PublicNetConfigHasBeenSet() const;

                    /**
                     * 获取文件系统配置参数，用于云函数挂载文件系统
                     * @return CfsConfig 文件系统配置参数，用于云函数挂载文件系统
                     */
                    CfsConfig GetCfsConfig() const;

                    /**
                     * 设置文件系统配置参数，用于云函数挂载文件系统
                     * @param CfsConfig 文件系统配置参数，用于云函数挂载文件系统
                     */
                    void SetCfsConfig(const CfsConfig& _cfsConfig);

                    /**
                     * 判断参数 CfsConfig 是否已赋值
                     * @return CfsConfig 是否已赋值
                     */
                    bool CfsConfigHasBeenSet() const;

                private:

                    /**
                     * 创建的函数名称，函数名称支持26个英文字母大小写、数字、连接符和下划线，第一个字符只能以字母开头，最后一个字符不能为连接符或者下划线，名称长度2-60
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * 函数的代码. 注意：不能同时指定Cos与ZipFile
                     */
                    Code m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 函数处理方法名称，名称格式支持 "文件名称.方法名称" 形式，文件名称和函数名称之间以"."隔开，文件名称和函数名称要求以字母开始和结尾，中间允许插入字母、数字、下划线和连接符，文件名称和函数名字的长度要求是 2-60 个字符
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
                     * 函数运行环境，目前仅支持 Python2.7，Python3.6，Nodejs6.10，Nodejs8.9，Nodejs10.15，Nodejs12.16， PHP5， PHP7，Golang1 和 Java8，默认Python2.7
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
                     * CodeSource 代码来源，支持以下'ZipFile', 'Cos', 'Demo', 'TempCos', 'Git'之一，使用Git来源必须指定此字段
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_CREATEFUNCTIONREQUEST_H_
