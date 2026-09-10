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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_UPDATEFUNCTIONCONFIGURATIONREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_UPDATEFUNCTIONCONFIGURATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/FunctionEnvironment.h>
#include <tencentcloud/tcb/v20180608/model/FunctionVpcConfig.h>
#include <tencentcloud/tcb/v20180608/model/FunctionPublicNetConfig.h>
#include <tencentcloud/tcb/v20180608/model/FunctionLayer.h>
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
                * UpdateFunctionConfiguration请求参数结构体
                */
                class UpdateFunctionConfigurationRequest : public AbstractModel
                {
                public:
                    UpdateFunctionConfigurationRequest();
                    ~UpdateFunctionConfigurationRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<p>要修改的函数名称</p>
                     * @return FunctionName <p>要修改的函数名称</p>
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置<p>要修改的函数名称</p>
                     * @param _functionName <p>要修改的函数名称</p>
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
                     * 获取<p>函数描述。最大支持 1000 个英文字母、数字、空格、逗号和英文句号，支持中文</p>
                     * @return Description <p>函数描述。最大支持 1000 个英文字母、数字、空格、逗号和英文句号，支持中文</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>函数描述。最大支持 1000 个英文字母、数字、空格、逗号和英文句号，支持中文</p>
                     * @param _description <p>函数描述。最大支持 1000 个英文字母、数字、空格、逗号和英文句号，支持中文</p>
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
                     * 获取<p>函数运行时内存大小，默认为 128 M，可选范围64M、128 M-3072 M，以 128MB 为阶梯。</p>
                     * @return MemorySize <p>函数运行时内存大小，默认为 128 M，可选范围64M、128 M-3072 M，以 128MB 为阶梯。</p>
                     * 
                     */
                    int64_t GetMemorySize() const;

                    /**
                     * 设置<p>函数运行时内存大小，默认为 128 M，可选范围64M、128 M-3072 M，以 128MB 为阶梯。</p>
                     * @param _memorySize <p>函数运行时内存大小，默认为 128 M，可选范围64M、128 M-3072 M，以 128MB 为阶梯。</p>
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
                     * 获取<p>函数最长执行时间，单位为秒，可选值范围 1-900 秒，默认为 3 秒</p>
                     * @return Timeout <p>函数最长执行时间，单位为秒，可选值范围 1-900 秒，默认为 3 秒</p>
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置<p>函数最长执行时间，单位为秒，可选值范围 1-900 秒，默认为 3 秒</p>
                     * @param _timeout <p>函数最长执行时间，单位为秒，可选值范围 1-900 秒，默认为 3 秒</p>
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
                     * 获取<p>函数的环境变量</p>
                     * @return Environment <p>函数的环境变量</p>
                     * 
                     */
                    FunctionEnvironment GetEnvironment() const;

                    /**
                     * 设置<p>函数的环境变量</p>
                     * @param _environment <p>函数的环境变量</p>
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
                     * 获取<p>函数运行环境，创建时指定，目前不支持修改。</p>
                     * @return Runtime <p>函数运行环境，创建时指定，目前不支持修改。</p>
                     * 
                     */
                    std::string GetRuntime() const;

                    /**
                     * 设置<p>函数运行环境，创建时指定，目前不支持修改。</p>
                     * @param _runtime <p>函数运行环境，创建时指定，目前不支持修改。</p>
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
                     * 获取<p>在线依赖安装，TRUE 表示安装，仅支持 Node.js 函数。 </p><p>默认值：FALSE</p>
                     * @return InstallDependency <p>在线依赖安装，TRUE 表示安装，仅支持 Node.js 函数。 </p><p>默认值：FALSE</p>
                     * 
                     */
                    std::string GetInstallDependency() const;

                    /**
                     * 设置<p>在线依赖安装，TRUE 表示安装，仅支持 Node.js 函数。 </p><p>默认值：FALSE</p>
                     * @param _installDependency <p>在线依赖安装，TRUE 表示安装，仅支持 Node.js 函数。 </p><p>默认值：FALSE</p>
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
                     * 获取<p>日志投递到的cls日志集ID</p>
                     * @return ClsTopicId <p>日志投递到的cls日志集ID</p>
                     * 
                     */
                    std::string GetClsTopicId() const;

                    /**
                     * 设置<p>日志投递到的cls日志集ID</p>
                     * @param _clsTopicId <p>日志投递到的cls日志集ID</p>
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
                     * 获取<p>日志投递到的cls Topic ID</p>
                     * @return ClsLogsetId <p>日志投递到的cls Topic ID</p>
                     * 
                     */
                    std::string GetClsLogsetId() const;

                    /**
                     * 设置<p>日志投递到的cls Topic ID</p>
                     * @param _clsLogsetId <p>日志投递到的cls Topic ID</p>
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
                     * 获取<p>在更新时是否同步发布新版本</p><p>默认值：FALSE</p>
                     * @return Publish <p>在更新时是否同步发布新版本</p><p>默认值：FALSE</p>
                     * 
                     */
                    std::string GetPublish() const;

                    /**
                     * 设置<p>在更新时是否同步发布新版本</p><p>默认值：FALSE</p>
                     * @param _publish <p>在更新时是否同步发布新版本</p><p>默认值：FALSE</p>
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
                     * 获取<p>是否开启L5访问能力，TRUE 为开启，FALSE为关闭</p>
                     * @return L5Enable <p>是否开启L5访问能力，TRUE 为开启，FALSE为关闭</p>
                     * 
                     */
                    std::string GetL5Enable() const;

                    /**
                     * 设置<p>是否开启L5访问能力，TRUE 为开启，FALSE为关闭</p>
                     * @param _l5Enable <p>是否开启L5访问能力，TRUE 为开启，FALSE为关闭</p>
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
                     * 获取<p>函数要关联的层版本列表，层的版本会按照在列表中顺序依次覆盖。</p>
                     * @return Layers <p>函数要关联的层版本列表，层的版本会按照在列表中顺序依次覆盖。</p>
                     * 
                     */
                    std::vector<FunctionLayer> GetLayers() const;

                    /**
                     * 设置<p>函数要关联的层版本列表，层的版本会按照在列表中顺序依次覆盖。</p>
                     * @param _layers <p>函数要关联的层版本列表，层的版本会按照在列表中顺序依次覆盖。</p>
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
                     * 获取<p>函数初始化执行超时时间</p>
                     * @return InitTimeout <p>函数初始化执行超时时间</p>
                     * 
                     */
                    int64_t GetInitTimeout() const;

                    /**
                     * 设置<p>函数初始化执行超时时间</p>
                     * @param _initTimeout <p>函数初始化执行超时时间</p>
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
                     * 获取<p>是否开启Dns缓存能力。只支持EVENT函数。</p><p>默认值：FALSE</p>
                     * @return DnsCache <p>是否开启Dns缓存能力。只支持EVENT函数。</p><p>默认值：FALSE</p>
                     * 
                     */
                    std::string GetDnsCache() const;

                    /**
                     * 设置<p>是否开启Dns缓存能力。只支持EVENT函数。</p><p>默认值：FALSE</p>
                     * @param _dnsCache <p>是否开启Dns缓存能力。只支持EVENT函数。</p><p>默认值：FALSE</p>
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
                     * 获取<p>忽略系统日志上报</p>
                     * @return IgnoreSysLog <p>忽略系统日志上报</p>
                     * 
                     */
                    std::string GetIgnoreSysLog() const;

                    /**
                     * 设置<p>忽略系统日志上报</p>
                     * @param _ignoreSysLog <p>忽略系统日志上报</p>
                     * 
                     */
                    void SetIgnoreSysLog(const std::string& _ignoreSysLog);

                    /**
                     * 判断参数 IgnoreSysLog 是否已赋值
                     * @return IgnoreSysLog 是否已赋值
                     * 
                     */
                    bool IgnoreSysLogHasBeenSet() const;

                    /**
                     * 获取<p>固定IP配置</p>
                     * @return EipConfig <p>固定IP配置</p>
                     * 
                     */
                    std::vector<FunctionEipConfigFixed> GetEipConfig() const;

                    /**
                     * 设置<p>固定IP配置</p>
                     * @param _eipConfig <p>固定IP配置</p>
                     * 
                     */
                    void SetEipConfig(const std::vector<FunctionEipConfigFixed>& _eipConfig);

                    /**
                     * 判断参数 EipConfig 是否已赋值
                     * @return EipConfig 是否已赋值
                     * 
                     */
                    bool EipConfigHasBeenSet() const;

                private:

                    /**
                     * <p>环境ID</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>要修改的函数名称</p>
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * <p>函数描述。最大支持 1000 个英文字母、数字、空格、逗号和英文句号，支持中文</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>函数运行时内存大小，默认为 128 M，可选范围64M、128 M-3072 M，以 128MB 为阶梯。</p>
                     */
                    int64_t m_memorySize;
                    bool m_memorySizeHasBeenSet;

                    /**
                     * <p>函数最长执行时间，单位为秒，可选值范围 1-900 秒，默认为 3 秒</p>
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>函数的环境变量</p>
                     */
                    FunctionEnvironment m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * <p>函数的私有网络配置</p>
                     */
                    FunctionVpcConfig m_vpcConfig;
                    bool m_vpcConfigHasBeenSet;

                    /**
                     * <p>公网访问配置</p>
                     */
                    FunctionPublicNetConfig m_publicNetConfig;
                    bool m_publicNetConfigHasBeenSet;

                    /**
                     * <p>函数运行环境，创建时指定，目前不支持修改。</p>
                     */
                    std::string m_runtime;
                    bool m_runtimeHasBeenSet;

                    /**
                     * <p>函数绑定的角色</p>
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * <p>在线依赖安装，TRUE 表示安装，仅支持 Node.js 函数。 </p><p>默认值：FALSE</p>
                     */
                    std::string m_installDependency;
                    bool m_installDependencyHasBeenSet;

                    /**
                     * <p>日志投递到的cls日志集ID</p>
                     */
                    std::string m_clsTopicId;
                    bool m_clsTopicIdHasBeenSet;

                    /**
                     * <p>日志投递到的cls Topic ID</p>
                     */
                    std::string m_clsLogsetId;
                    bool m_clsLogsetIdHasBeenSet;

                    /**
                     * <p>在更新时是否同步发布新版本</p><p>默认值：FALSE</p>
                     */
                    std::string m_publish;
                    bool m_publishHasBeenSet;

                    /**
                     * <p>是否开启L5访问能力，TRUE 为开启，FALSE为关闭</p>
                     */
                    std::string m_l5Enable;
                    bool m_l5EnableHasBeenSet;

                    /**
                     * <p>函数要关联的层版本列表，层的版本会按照在列表中顺序依次覆盖。</p>
                     */
                    std::vector<FunctionLayer> m_layers;
                    bool m_layersHasBeenSet;

                    /**
                     * <p>函数初始化执行超时时间</p>
                     */
                    int64_t m_initTimeout;
                    bool m_initTimeoutHasBeenSet;

                    /**
                     * <p>是否开启Dns缓存能力。只支持EVENT函数。</p><p>默认值：FALSE</p>
                     */
                    std::string m_dnsCache;
                    bool m_dnsCacheHasBeenSet;

                    /**
                     * <p>忽略系统日志上报</p>
                     */
                    std::string m_ignoreSysLog;
                    bool m_ignoreSysLogHasBeenSet;

                    /**
                     * <p>固定IP配置</p>
                     */
                    std::vector<FunctionEipConfigFixed> m_eipConfig;
                    bool m_eipConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_UPDATEFUNCTIONCONFIGURATIONREQUEST_H_
