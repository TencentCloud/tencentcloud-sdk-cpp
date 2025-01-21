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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_GETFUNCTIONRESPONSE_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_GETFUNCTIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/Trigger.h>
#include <tencentcloud/scf/v20180416/model/VpcConfig.h>
#include <tencentcloud/scf/v20180416/model/Environment.h>
#include <tencentcloud/scf/v20180416/model/Tag.h>
#include <tencentcloud/scf/v20180416/model/EipOutConfig.h>
#include <tencentcloud/scf/v20180416/model/AccessInfo.h>
#include <tencentcloud/scf/v20180416/model/LayerVersionInfo.h>
#include <tencentcloud/scf/v20180416/model/DeadLetterConfig.h>
#include <tencentcloud/scf/v20180416/model/PublicNetConfigOut.h>
#include <tencentcloud/scf/v20180416/model/CfsConfig.h>
#include <tencentcloud/scf/v20180416/model/StatusReason.h>
#include <tencentcloud/scf/v20180416/model/ImageConfig.h>
#include <tencentcloud/scf/v20180416/model/ProtocolParams.h>
#include <tencentcloud/scf/v20180416/model/IntranetConfigOut.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * GetFunction返回参数结构体
                */
                class GetFunctionResponse : public AbstractModel
                {
                public:
                    GetFunctionResponse();
                    ~GetFunctionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取函数的最后修改时间
                     * @return ModTime 函数的最后修改时间
                     * 
                     */
                    std::string GetModTime() const;

                    /**
                     * 判断参数 ModTime 是否已赋值
                     * @return ModTime 是否已赋值
                     * 
                     */
                    bool ModTimeHasBeenSet() const;

                    /**
                     * 获取函数的代码
                     * @return CodeInfo 函数的代码
                     * 
                     */
                    std::string GetCodeInfo() const;

                    /**
                     * 判断参数 CodeInfo 是否已赋值
                     * @return CodeInfo 是否已赋值
                     * 
                     */
                    bool CodeInfoHasBeenSet() const;

                    /**
                     * 获取函数的描述信息
                     * @return Description 函数的描述信息
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取函数的触发器列表
                     * @return Triggers 函数的触发器列表
                     * 
                     */
                    std::vector<Trigger> GetTriggers() const;

                    /**
                     * 判断参数 Triggers 是否已赋值
                     * @return Triggers 是否已赋值
                     * 
                     */
                    bool TriggersHasBeenSet() const;

                    /**
                     * 获取函数的入口
                     * @return Handler 函数的入口
                     * 
                     */
                    std::string GetHandler() const;

                    /**
                     * 判断参数 Handler 是否已赋值
                     * @return Handler 是否已赋值
                     * 
                     */
                    bool HandlerHasBeenSet() const;

                    /**
                     * 获取函数代码大小
                     * @return CodeSize 函数代码大小
                     * 
                     */
                    int64_t GetCodeSize() const;

                    /**
                     * 判断参数 CodeSize 是否已赋值
                     * @return CodeSize 是否已赋值
                     * 
                     */
                    bool CodeSizeHasBeenSet() const;

                    /**
                     * 获取函数的超时时间
                     * @return Timeout 函数的超时时间
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取函数的版本
                     * @return FunctionVersion 函数的版本
                     * 
                     */
                    std::string GetFunctionVersion() const;

                    /**
                     * 判断参数 FunctionVersion 是否已赋值
                     * @return FunctionVersion 是否已赋值
                     * 
                     */
                    bool FunctionVersionHasBeenSet() const;

                    /**
                     * 获取函数的最大可用内存
                     * @return MemorySize 函数的最大可用内存
                     * 
                     */
                    int64_t GetMemorySize() const;

                    /**
                     * 判断参数 MemorySize 是否已赋值
                     * @return MemorySize 是否已赋值
                     * 
                     */
                    bool MemorySizeHasBeenSet() const;

                    /**
                     * 获取函数的运行环境
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Runtime 函数的运行环境
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuntime() const;

                    /**
                     * 判断参数 Runtime 是否已赋值
                     * @return Runtime 是否已赋值
                     * 
                     */
                    bool RuntimeHasBeenSet() const;

                    /**
                     * 获取函数的名称
                     * @return FunctionName 函数的名称
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     * 
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取函数的私有网络
                     * @return VpcConfig 函数的私有网络
                     * 
                     */
                    VpcConfig GetVpcConfig() const;

                    /**
                     * 判断参数 VpcConfig 是否已赋值
                     * @return VpcConfig 是否已赋值
                     * 
                     */
                    bool VpcConfigHasBeenSet() const;

                    /**
                     * 获取是否使用GPU
                     * @return UseGpu 是否使用GPU
                     * 
                     */
                    std::string GetUseGpu() const;

                    /**
                     * 判断参数 UseGpu 是否已赋值
                     * @return UseGpu 是否已赋值
                     * 
                     */
                    bool UseGpuHasBeenSet() const;

                    /**
                     * 获取函数的环境变量
                     * @return Environment 函数的环境变量
                     * 
                     */
                    Environment GetEnvironment() const;

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                    /**
                     * 获取代码是否正确
                     * @return CodeResult 代码是否正确
                     * 
                     */
                    std::string GetCodeResult() const;

                    /**
                     * 判断参数 CodeResult 是否已赋值
                     * @return CodeResult 是否已赋值
                     * 
                     */
                    bool CodeResultHasBeenSet() const;

                    /**
                     * 获取代码错误信息
                     * @return CodeError 代码错误信息
                     * 
                     */
                    std::string GetCodeError() const;

                    /**
                     * 判断参数 CodeError 是否已赋值
                     * @return CodeError 是否已赋值
                     * 
                     */
                    bool CodeErrorHasBeenSet() const;

                    /**
                     * 获取代码错误码
                     * @return ErrNo 代码错误码
                     * 
                     */
                    int64_t GetErrNo() const;

                    /**
                     * 判断参数 ErrNo 是否已赋值
                     * @return ErrNo 是否已赋值
                     * 
                     */
                    bool ErrNoHasBeenSet() const;

                    /**
                     * 获取函数的命名空间
                     * @return Namespace 函数的命名空间
                     * 
                     */
                    std::string GetNamespace() const;

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
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取是否自动安装依赖
                     * @return InstallDependency 是否自动安装依赖
                     * 
                     */
                    std::string GetInstallDependency() const;

                    /**
                     * 判断参数 InstallDependency 是否已赋值
                     * @return InstallDependency 是否已赋值
                     * 
                     */
                    bool InstallDependencyHasBeenSet() const;

                    /**
                     * 获取函数状态，状态值及流转[参考说明](https://cloud.tencent.com/document/product/583/115197)
                     * @return Status 函数状态，状态值及流转[参考说明](https://cloud.tencent.com/document/product/583/115197)
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取状态描述
                     * @return StatusDesc 状态描述
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取日志投递到的Cls日志集
                     * @return ClsLogsetId 日志投递到的Cls日志集
                     * 
                     */
                    std::string GetClsLogsetId() const;

                    /**
                     * 判断参数 ClsLogsetId 是否已赋值
                     * @return ClsLogsetId 是否已赋值
                     * 
                     */
                    bool ClsLogsetIdHasBeenSet() const;

                    /**
                     * 获取日志投递到的Cls Topic
                     * @return ClsTopicId 日志投递到的Cls Topic
                     * 
                     */
                    std::string GetClsTopicId() const;

                    /**
                     * 判断参数 ClsTopicId 是否已赋值
                     * @return ClsTopicId 是否已赋值
                     * 
                     */
                    bool ClsTopicIdHasBeenSet() const;

                    /**
                     * 获取函数ID
                     * @return FunctionId 函数ID
                     * 
                     */
                    std::string GetFunctionId() const;

                    /**
                     * 判断参数 FunctionId 是否已赋值
                     * @return FunctionId 是否已赋值
                     * 
                     */
                    bool FunctionIdHasBeenSet() const;

                    /**
                     * 获取函数的标签列表
                     * @return Tags 函数的标签列表
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取EipConfig配置
                     * @return EipConfig EipConfig配置
                     * 
                     */
                    EipOutConfig GetEipConfig() const;

                    /**
                     * 判断参数 EipConfig 是否已赋值
                     * @return EipConfig 是否已赋值
                     * 
                     */
                    bool EipConfigHasBeenSet() const;

                    /**
                     * 获取域名信息
                     * @return AccessInfo 域名信息
                     * 
                     */
                    AccessInfo GetAccessInfo() const;

                    /**
                     * 判断参数 AccessInfo 是否已赋值
                     * @return AccessInfo 是否已赋值
                     * 
                     */
                    bool AccessInfoHasBeenSet() const;

                    /**
                     * 获取函数类型，取值为HTTP或者Event
                     * @return Type 函数类型，取值为HTTP或者Event
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取是否启用L5
                     * @return L5Enable 是否启用L5
                     * 
                     */
                    std::string GetL5Enable() const;

                    /**
                     * 判断参数 L5Enable 是否已赋值
                     * @return L5Enable 是否已赋值
                     * 
                     */
                    bool L5EnableHasBeenSet() const;

                    /**
                     * 获取函数关联的Layer版本信息
                     * @return Layers 函数关联的Layer版本信息
                     * 
                     */
                    std::vector<LayerVersionInfo> GetLayers() const;

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
                     * 判断参数 DeadLetterConfig 是否已赋值
                     * @return DeadLetterConfig 是否已赋值
                     * 
                     */
                    bool DeadLetterConfigHasBeenSet() const;

                    /**
                     * 获取函数创建回见
                     * @return AddTime 函数创建回见
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取公网访问配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicNetConfig 公网访问配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PublicNetConfigOut GetPublicNetConfig() const;

                    /**
                     * 判断参数 PublicNetConfig 是否已赋值
                     * @return PublicNetConfig 是否已赋值
                     * 
                     */
                    bool PublicNetConfigHasBeenSet() const;

                    /**
                     * 获取是否启用Ons
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OnsEnable 是否启用Ons
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOnsEnable() const;

                    /**
                     * 判断参数 OnsEnable 是否已赋值
                     * @return OnsEnable 是否已赋值
                     * 
                     */
                    bool OnsEnableHasBeenSet() const;

                    /**
                     * 获取文件系统配置参数，用于云函数挂载文件系统
                     * @return CfsConfig 文件系统配置参数，用于云函数挂载文件系统
                     * 
                     */
                    CfsConfig GetCfsConfig() const;

                    /**
                     * 判断参数 CfsConfig 是否已赋值
                     * @return CfsConfig 是否已赋值
                     * 
                     */
                    bool CfsConfigHasBeenSet() const;

                    /**
                     * 获取函数的计费状态，状态值[参考此处](https://cloud.tencent.com/document/product/583/47175#.E5.87.BD.E6.95.B0.E8.AE.A1.E8.B4.B9.E7.8A.B6.E6.80.81)
                     * @return AvailableStatus 函数的计费状态，状态值[参考此处](https://cloud.tencent.com/document/product/583/47175#.E5.87.BD.E6.95.B0.E8.AE.A1.E8.B4.B9.E7.8A.B6.E6.80.81)
                     * 
                     */
                    std::string GetAvailableStatus() const;

                    /**
                     * 判断参数 AvailableStatus 是否已赋值
                     * @return AvailableStatus 是否已赋值
                     * 
                     */
                    bool AvailableStatusHasBeenSet() const;

                    /**
                     * 获取函数版本
                     * @return Qualifier 函数版本
                     * 
                     */
                    std::string GetQualifier() const;

                    /**
                     * 判断参数 Qualifier 是否已赋值
                     * @return Qualifier 是否已赋值
                     * 
                     */
                    bool QualifierHasBeenSet() const;

                    /**
                     * 获取函数初始化超时时间
                     * @return InitTimeout 函数初始化超时时间
                     * 
                     */
                    int64_t GetInitTimeout() const;

                    /**
                     * 判断参数 InitTimeout 是否已赋值
                     * @return InitTimeout 是否已赋值
                     * 
                     */
                    bool InitTimeoutHasBeenSet() const;

                    /**
                     * 获取函数状态失败原因
                     * @return StatusReasons 函数状态失败原因
                     * 
                     */
                    std::vector<StatusReason> GetStatusReasons() const;

                    /**
                     * 判断参数 StatusReasons 是否已赋值
                     * @return StatusReasons 是否已赋值
                     * 
                     */
                    bool StatusReasonsHasBeenSet() const;

                    /**
                     * 获取是否开启异步属性
                     * @return AsyncRunEnable 是否开启异步属性
                     * 
                     */
                    std::string GetAsyncRunEnable() const;

                    /**
                     * 判断参数 AsyncRunEnable 是否已赋值
                     * @return AsyncRunEnable 是否已赋值
                     * 
                     */
                    bool AsyncRunEnableHasBeenSet() const;

                    /**
                     * 获取是否开启事件追踪
                     * @return TraceEnable 是否开启事件追踪
                     * 
                     */
                    std::string GetTraceEnable() const;

                    /**
                     * 判断参数 TraceEnable 是否已赋值
                     * @return TraceEnable 是否已赋值
                     * 
                     */
                    bool TraceEnableHasBeenSet() const;

                    /**
                     * 获取镜像配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageConfig 镜像配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageConfig GetImageConfig() const;

                    /**
                     * 判断参数 ImageConfig 是否已赋值
                     * @return ImageConfig 是否已赋值
                     * 
                     */
                    bool ImageConfigHasBeenSet() const;

                    /**
                     * 获取HTTP函数支持的访问协议。当前支持WebSockets协议。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProtocolType HTTP函数支持的访问协议。当前支持WebSockets协议。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProtocolType() const;

                    /**
                     * 判断参数 ProtocolType 是否已赋值
                     * @return ProtocolType 是否已赋值
                     * 
                     */
                    bool ProtocolTypeHasBeenSet() const;

                    /**
                     * 获取HTTP函数配置ProtocolType访问协议，当前协议配置的参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProtocolParams HTTP函数配置ProtocolType访问协议，当前协议配置的参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ProtocolParams GetProtocolParams() const;

                    /**
                     * 判断参数 ProtocolParams 是否已赋值
                     * @return ProtocolParams 是否已赋值
                     * 
                     */
                    bool ProtocolParamsHasBeenSet() const;

                    /**
                     * 获取是否开启DNS缓存
                     * @return DnsCache 是否开启DNS缓存
                     * 
                     */
                    std::string GetDnsCache() const;

                    /**
                     * 判断参数 DnsCache 是否已赋值
                     * @return DnsCache 是否已赋值
                     * 
                     */
                    bool DnsCacheHasBeenSet() const;

                    /**
                     * 获取内网访问配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntranetConfig 内网访问配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    IntranetConfigOut GetIntranetConfig() const;

                    /**
                     * 判断参数 IntranetConfig 是否已赋值
                     * @return IntranetConfig 是否已赋值
                     * 
                     */
                    bool IntranetConfigHasBeenSet() const;

                private:

                    /**
                     * 函数的最后修改时间
                     */
                    std::string m_modTime;
                    bool m_modTimeHasBeenSet;

                    /**
                     * 函数的代码
                     */
                    std::string m_codeInfo;
                    bool m_codeInfoHasBeenSet;

                    /**
                     * 函数的描述信息
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 函数的触发器列表
                     */
                    std::vector<Trigger> m_triggers;
                    bool m_triggersHasBeenSet;

                    /**
                     * 函数的入口
                     */
                    std::string m_handler;
                    bool m_handlerHasBeenSet;

                    /**
                     * 函数代码大小
                     */
                    int64_t m_codeSize;
                    bool m_codeSizeHasBeenSet;

                    /**
                     * 函数的超时时间
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 函数的版本
                     */
                    std::string m_functionVersion;
                    bool m_functionVersionHasBeenSet;

                    /**
                     * 函数的最大可用内存
                     */
                    int64_t m_memorySize;
                    bool m_memorySizeHasBeenSet;

                    /**
                     * 函数的运行环境
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runtime;
                    bool m_runtimeHasBeenSet;

                    /**
                     * 函数的名称
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * 函数的私有网络
                     */
                    VpcConfig m_vpcConfig;
                    bool m_vpcConfigHasBeenSet;

                    /**
                     * 是否使用GPU
                     */
                    std::string m_useGpu;
                    bool m_useGpuHasBeenSet;

                    /**
                     * 函数的环境变量
                     */
                    Environment m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * 代码是否正确
                     */
                    std::string m_codeResult;
                    bool m_codeResultHasBeenSet;

                    /**
                     * 代码错误信息
                     */
                    std::string m_codeError;
                    bool m_codeErrorHasBeenSet;

                    /**
                     * 代码错误码
                     */
                    int64_t m_errNo;
                    bool m_errNoHasBeenSet;

                    /**
                     * 函数的命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 函数绑定的角色
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 是否自动安装依赖
                     */
                    std::string m_installDependency;
                    bool m_installDependencyHasBeenSet;

                    /**
                     * 函数状态，状态值及流转[参考说明](https://cloud.tencent.com/document/product/583/115197)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 状态描述
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * 日志投递到的Cls日志集
                     */
                    std::string m_clsLogsetId;
                    bool m_clsLogsetIdHasBeenSet;

                    /**
                     * 日志投递到的Cls Topic
                     */
                    std::string m_clsTopicId;
                    bool m_clsTopicIdHasBeenSet;

                    /**
                     * 函数ID
                     */
                    std::string m_functionId;
                    bool m_functionIdHasBeenSet;

                    /**
                     * 函数的标签列表
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * EipConfig配置
                     */
                    EipOutConfig m_eipConfig;
                    bool m_eipConfigHasBeenSet;

                    /**
                     * 域名信息
                     */
                    AccessInfo m_accessInfo;
                    bool m_accessInfoHasBeenSet;

                    /**
                     * 函数类型，取值为HTTP或者Event
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 是否启用L5
                     */
                    std::string m_l5Enable;
                    bool m_l5EnableHasBeenSet;

                    /**
                     * 函数关联的Layer版本信息
                     */
                    std::vector<LayerVersionInfo> m_layers;
                    bool m_layersHasBeenSet;

                    /**
                     * 函数关联的死信队列信息
                     */
                    DeadLetterConfig m_deadLetterConfig;
                    bool m_deadLetterConfigHasBeenSet;

                    /**
                     * 函数创建回见
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * 公网访问配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PublicNetConfigOut m_publicNetConfig;
                    bool m_publicNetConfigHasBeenSet;

                    /**
                     * 是否启用Ons
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_onsEnable;
                    bool m_onsEnableHasBeenSet;

                    /**
                     * 文件系统配置参数，用于云函数挂载文件系统
                     */
                    CfsConfig m_cfsConfig;
                    bool m_cfsConfigHasBeenSet;

                    /**
                     * 函数的计费状态，状态值[参考此处](https://cloud.tencent.com/document/product/583/47175#.E5.87.BD.E6.95.B0.E8.AE.A1.E8.B4.B9.E7.8A.B6.E6.80.81)
                     */
                    std::string m_availableStatus;
                    bool m_availableStatusHasBeenSet;

                    /**
                     * 函数版本
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                    /**
                     * 函数初始化超时时间
                     */
                    int64_t m_initTimeout;
                    bool m_initTimeoutHasBeenSet;

                    /**
                     * 函数状态失败原因
                     */
                    std::vector<StatusReason> m_statusReasons;
                    bool m_statusReasonsHasBeenSet;

                    /**
                     * 是否开启异步属性
                     */
                    std::string m_asyncRunEnable;
                    bool m_asyncRunEnableHasBeenSet;

                    /**
                     * 是否开启事件追踪
                     */
                    std::string m_traceEnable;
                    bool m_traceEnableHasBeenSet;

                    /**
                     * 镜像配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageConfig m_imageConfig;
                    bool m_imageConfigHasBeenSet;

                    /**
                     * HTTP函数支持的访问协议。当前支持WebSockets协议。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_protocolType;
                    bool m_protocolTypeHasBeenSet;

                    /**
                     * HTTP函数配置ProtocolType访问协议，当前协议配置的参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ProtocolParams m_protocolParams;
                    bool m_protocolParamsHasBeenSet;

                    /**
                     * 是否开启DNS缓存
                     */
                    std::string m_dnsCache;
                    bool m_dnsCacheHasBeenSet;

                    /**
                     * 内网访问配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IntranetConfigOut m_intranetConfig;
                    bool m_intranetConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_GETFUNCTIONRESPONSE_H_
