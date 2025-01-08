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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_UPDATEFUNCTIONCONFIGURATIONREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_UPDATEFUNCTIONCONFIGURATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/Environment.h>
#include <tencentcloud/scf/v20180416/model/VpcConfig.h>
#include <tencentcloud/scf/v20180416/model/LayerVersionSimple.h>
#include <tencentcloud/scf/v20180416/model/DeadLetterConfig.h>
#include <tencentcloud/scf/v20180416/model/PublicNetConfigIn.h>
#include <tencentcloud/scf/v20180416/model/CfsConfig.h>
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
                * UpdateFunctionConfiguration请求参数结构体
                */
                class UpdateFunctionConfigurationRequest : public AbstractModel
                {
                public:
                    UpdateFunctionConfigurationRequest();
                    ~UpdateFunctionConfigurationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要修改的函数名称
                     * @return FunctionName 要修改的函数名称
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置要修改的函数名称
                     * @param _functionName 要修改的函数名称
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
                     * 获取函数描述。最大支持 1000 个英文字母、数字、空格、逗号和英文句号，支持中文
                     * @return Description 函数描述。最大支持 1000 个英文字母、数字、空格、逗号和英文句号，支持中文
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置函数描述。最大支持 1000 个英文字母、数字、空格、逗号和英文句号，支持中文
                     * @param _description 函数描述。最大支持 1000 个英文字母、数字、空格、逗号和英文句号，支持中文
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
                     * 获取函数运行时内存大小，默认为 128 M，可选范64M、128 M-3072 M，以 128MB 为阶梯。
                     * @return MemorySize 函数运行时内存大小，默认为 128 M，可选范64M、128 M-3072 M，以 128MB 为阶梯。
                     * 
                     */
                    int64_t GetMemorySize() const;

                    /**
                     * 设置函数运行时内存大小，默认为 128 M，可选范64M、128 M-3072 M，以 128MB 为阶梯。
                     * @param _memorySize 函数运行时内存大小，默认为 128 M，可选范64M、128 M-3072 M，以 128MB 为阶梯。
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
                     * 获取函数最长执行时间，单位为秒，可选值范 1-900 秒，默认为 3 秒
                     * @return Timeout 函数最长执行时间，单位为秒，可选值范 1-900 秒，默认为 3 秒
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置函数最长执行时间，单位为秒，可选值范 1-900 秒，默认为 3 秒
                     * @param _timeout 函数最长执行时间，单位为秒，可选值范 1-900 秒，默认为 3 秒
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
                     * 获取函数运行环境，创建时指定，目前不支持修改。
                     * @return Runtime 函数运行环境，创建时指定，目前不支持修改。
                     * 
                     */
                    std::string GetRuntime() const;

                    /**
                     * 设置函数运行环境，创建时指定，目前不支持修改。
                     * @param _runtime 函数运行环境，创建时指定，目前不支持修改。
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
                     * 获取日志投递到的cls日志集ID
                     * @return ClsLogsetId 日志投递到的cls日志集ID
                     * 
                     */
                    std::string GetClsLogsetId() const;

                    /**
                     * 设置日志投递到的cls日志集ID
                     * @param _clsLogsetId 日志投递到的cls日志集ID
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
                     * 获取日志投递到的cls Topic ID
                     * @return ClsTopicId 日志投递到的cls Topic ID
                     * 
                     */
                    std::string GetClsTopicId() const;

                    /**
                     * 设置日志投递到的cls Topic ID
                     * @param _clsTopicId 日志投递到的cls Topic ID
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
                     * 获取在更新时是否同步发布新版本，默认为：FALSE，不发布新版本
                     * @return Publish 在更新时是否同步发布新版本，默认为：FALSE，不发布新版本
                     * 
                     */
                    std::string GetPublish() const;

                    /**
                     * 设置在更新时是否同步发布新版本，默认为：FALSE，不发布新版本
                     * @param _publish 在更新时是否同步发布新版本，默认为：FALSE，不发布新版本
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
                     * 获取是否开启L5访问能力，TRUE 为开启，FALSE为关闭
                     * @return L5Enable 是否开启L5访问能力，TRUE 为开启，FALSE为关闭
                     * 
                     */
                    std::string GetL5Enable() const;

                    /**
                     * 设置是否开启L5访问能力，TRUE 为开启，FALSE为关闭
                     * @param _l5Enable 是否开启L5访问能力，TRUE 为开启，FALSE为关闭
                     * 
                     */
                    void SetL5Enable(const std::string& _l5Enable);

                    /**
                     * 判断参数 L5Enable 是否已赋值
                     * @return L5Enable 是否已赋值
                     * 
                     */
                    bool L5EnableHasBeenSet() const;

                    /**
                     * 获取函数要关联的层版本列表，层的版本会按照在列表中顺序依次覆盖。
                     * @return Layers 函数要关联的层版本列表，层的版本会按照在列表中顺序依次覆盖。
                     * 
                     */
                    std::vector<LayerVersionSimple> GetLayers() const;

                    /**
                     * 设置函数要关联的层版本列表，层的版本会按照在列表中顺序依次覆盖。
                     * @param _layers 函数要关联的层版本列表，层的版本会按照在列表中顺序依次覆盖。
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
                     * 获取函数关联的死信队列信息
                     * @return DeadLetterConfig 函数关联的死信队列信息
                     * 
                     */
                    DeadLetterConfig GetDeadLetterConfig() const;

                    /**
                     * 设置函数关联的死信队列信息
                     * @param _deadLetterConfig 函数关联的死信队列信息
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
                     * 获取文件系统配置入参，用于云函数绑定CFS文件系统
                     * @return CfsConfig 文件系统配置入参，用于云函数绑定CFS文件系统
                     * 
                     */
                    CfsConfig GetCfsConfig() const;

                    /**
                     * 设置文件系统配置入参，用于云函数绑定CFS文件系统
                     * @param _cfsConfig 文件系统配置入参，用于云函数绑定CFS文件系统
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
                     * 获取函数初始化执行超时时间
                     * @return InitTimeout 函数初始化执行超时时间
                     * 
                     */
                    int64_t GetInitTimeout() const;

                    /**
                     * 设置函数初始化执行超时时间
                     * @param _initTimeout 函数初始化执行超时时间
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

                    /**
                     * 获取忽略系统日志上报
                     * @return IgnoreSysLog 忽略系统日志上报
                     * 
                     */
                    bool GetIgnoreSysLog() const;

                    /**
                     * 设置忽略系统日志上报
                     * @param _ignoreSysLog 忽略系统日志上报
                     * 
                     */
                    void SetIgnoreSysLog(const bool& _ignoreSysLog);

                    /**
                     * 判断参数 IgnoreSysLog 是否已赋值
                     * @return IgnoreSysLog 是否已赋值
                     * 
                     */
                    bool IgnoreSysLogHasBeenSet() const;

                private:

                    /**
                     * 要修改的函数名称
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * 函数描述。最大支持 1000 个英文字母、数字、空格、逗号和英文句号，支持中文
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 函数运行时内存大小，默认为 128 M，可选范64M、128 M-3072 M，以 128MB 为阶梯。
                     */
                    int64_t m_memorySize;
                    bool m_memorySizeHasBeenSet;

                    /**
                     * 函数最长执行时间，单位为秒，可选值范 1-900 秒，默认为 3 秒
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 函数运行环境，创建时指定，目前不支持修改。
                     */
                    std::string m_runtime;
                    bool m_runtimeHasBeenSet;

                    /**
                     * 函数的环境变量
                     */
                    Environment m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * 函数所属命名空间
默认值: default
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 函数的私有网络配置
                     */
                    VpcConfig m_vpcConfig;
                    bool m_vpcConfigHasBeenSet;

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
                     * 日志投递到的cls日志集ID
                     */
                    std::string m_clsLogsetId;
                    bool m_clsLogsetIdHasBeenSet;

                    /**
                     * 日志投递到的cls Topic ID
                     */
                    std::string m_clsTopicId;
                    bool m_clsTopicIdHasBeenSet;

                    /**
                     * 在更新时是否同步发布新版本，默认为：FALSE，不发布新版本
                     */
                    std::string m_publish;
                    bool m_publishHasBeenSet;

                    /**
                     * 是否开启L5访问能力，TRUE 为开启，FALSE为关闭
                     */
                    std::string m_l5Enable;
                    bool m_l5EnableHasBeenSet;

                    /**
                     * 函数要关联的层版本列表，层的版本会按照在列表中顺序依次覆盖。
                     */
                    std::vector<LayerVersionSimple> m_layers;
                    bool m_layersHasBeenSet;

                    /**
                     * 函数关联的死信队列信息
                     */
                    DeadLetterConfig m_deadLetterConfig;
                    bool m_deadLetterConfigHasBeenSet;

                    /**
                     * 公网访问配置
                     */
                    PublicNetConfigIn m_publicNetConfig;
                    bool m_publicNetConfigHasBeenSet;

                    /**
                     * 文件系统配置入参，用于云函数绑定CFS文件系统
                     */
                    CfsConfig m_cfsConfig;
                    bool m_cfsConfigHasBeenSet;

                    /**
                     * 函数初始化执行超时时间
                     */
                    int64_t m_initTimeout;
                    bool m_initTimeoutHasBeenSet;

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

                    /**
                     * 忽略系统日志上报
                     */
                    bool m_ignoreSysLog;
                    bool m_ignoreSysLogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_UPDATEFUNCTIONCONFIGURATIONREQUEST_H_
