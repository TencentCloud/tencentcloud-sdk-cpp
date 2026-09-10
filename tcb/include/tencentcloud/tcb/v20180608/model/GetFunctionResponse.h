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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_GETFUNCTIONRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_GETFUNCTIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/FunctionTrigger.h>
#include <tencentcloud/tcb/v20180608/model/FunctionVpcConfig.h>
#include <tencentcloud/tcb/v20180608/model/Tag.h>
#include <tencentcloud/tcb/v20180608/model/AgentRuntimeCodeImageConfig.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
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
                     * 获取<p>函数最后修改时间</p>
                     * @return ModTime <p>函数最后修改时间</p>
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
                     * 获取<p>函数代码（&gt;1M 不返回）</p>
                     * @return CodeInfo <p>函数代码（&gt;1M 不返回）</p>
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
                     * 获取<p>函数描述</p>
                     * @return Description <p>函数描述</p>
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
                     * 获取<p>触发器列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Triggers <p>触发器列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FunctionTrigger> GetTriggers() const;

                    /**
                     * 判断参数 Triggers 是否已赋值
                     * @return Triggers 是否已赋值
                     * 
                     */
                    bool TriggersHasBeenSet() const;

                    /**
                     * 获取<p>入口函数</p>
                     * @return Handler <p>入口函数</p>
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
                     * 获取<p>代码大小（字节）</p>
                     * @return CodeSize <p>代码大小（字节）</p>
                     * 
                     */
                    uint64_t GetCodeSize() const;

                    /**
                     * 判断参数 CodeSize 是否已赋值
                     * @return CodeSize 是否已赋值
                     * 
                     */
                    bool CodeSizeHasBeenSet() const;

                    /**
                     * 获取<p>超时时间（秒）</p>
                     * @return Timeout <p>超时时间（秒）</p>
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取<p>函数版本</p>
                     * @return FunctionVersion <p>函数版本</p>
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
                     * 获取<p>内存大小（MB）</p>
                     * @return MemorySize <p>内存大小（MB）</p>
                     * 
                     */
                    uint64_t GetMemorySize() const;

                    /**
                     * 判断参数 MemorySize 是否已赋值
                     * @return MemorySize 是否已赋值
                     * 
                     */
                    bool MemorySizeHasBeenSet() const;

                    /**
                     * 获取<p>运行环境</p>
                     * @return Runtime <p>运行环境</p>
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
                     * 获取<p>函数名称</p>
                     * @return FunctionName <p>函数名称</p>
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
                     * 获取<p>VPC 配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcConfig <p>VPC 配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    FunctionVpcConfig GetVpcConfig() const;

                    /**
                     * 判断参数 VpcConfig 是否已赋值
                     * @return VpcConfig 是否已赋值
                     * 
                     */
                    bool VpcConfigHasBeenSet() const;

                    /**
                     * 获取<p>是否使用 GPU (&quot;TRUE&quot;/&quot;FALSE&quot;)</p>
                     * @return UseGpu <p>是否使用 GPU (&quot;TRUE&quot;/&quot;FALSE&quot;)</p>
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
                     * 获取<p>代码校验结果 (&quot;success&quot;/&quot;failed&quot;)</p>
                     * @return CodeResult <p>代码校验结果 (&quot;success&quot;/&quot;failed&quot;)</p>
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
                     * 获取<p>代码错误码</p>
                     * @return ErrNo <p>代码错误码</p>
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
                     * 获取<p>命名空间</p>
                     * @return Namespace <p>命名空间</p>
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
                     * 获取<p>角色</p>
                     * @return Role <p>角色</p>
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
                     * 获取<p>是否自动安装依赖 (&quot;TRUE&quot;/&quot;FALSE&quot;)</p>
                     * @return InstallDependency <p>是否自动安装依赖 (&quot;TRUE&quot;/&quot;FALSE&quot;)</p>
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
                     * 获取<p>函数状态 (&quot;Active&quot;, &quot;Inactive&quot; 等)</p>
                     * @return Status <p>函数状态 (&quot;Active&quot;, &quot;Inactive&quot; 等)</p>
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
                     * 获取<p>函数 ID</p>
                     * @return FunctionId <p>函数 ID</p>
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
                     * 获取<p>标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>函数类型 (&quot;HTTP&quot; 或 &quot;Event&quot;)</p>
                     * @return Type <p>函数类型 (&quot;HTTP&quot; 或 &quot;Event&quot;)</p>
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
                     * 获取<p>是否启用 L5 (&quot;TRUE&quot;/&quot;FALSE&quot;)</p>
                     * @return L5Enable <p>是否启用 L5 (&quot;TRUE&quot;/&quot;FALSE&quot;)</p>
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
                     * 获取<p>函数创建时间</p>
                     * @return AddTime <p>函数创建时间</p>
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
                     * 获取<p>对应scf.GetFunction接口的OnsEnable，是否启用 Ons (&quot;TRUE&quot;/&quot;FALSE&quot;)</p>
                     * @return OnsEnable <p>对应scf.GetFunction接口的OnsEnable，是否启用 Ons (&quot;TRUE&quot;/&quot;FALSE&quot;)</p>
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
                     * 获取<p>计费状态 (&quot;Available&quot; 等)</p>
                     * @return AvailableStatus <p>计费状态 (&quot;Available&quot; 等)</p>
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
                     * 获取<p>函数版本（查询时传入的）</p>
                     * @return Qualifier <p>函数版本（查询时传入的）</p>
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
                     * 获取<p>初始化超时时间（秒）</p>
                     * @return InitTimeout <p>初始化超时时间（秒）</p>
                     * 
                     */
                    uint64_t GetInitTimeout() const;

                    /**
                     * 判断参数 InitTimeout 是否已赋值
                     * @return InitTimeout 是否已赋值
                     * 
                     */
                    bool InitTimeoutHasBeenSet() const;

                    /**
                     * 获取<p>是否开启异步 (&quot;TRUE&quot;/&quot;FALSE&quot;)</p>
                     * @return AsyncRunEnable <p>是否开启异步 (&quot;TRUE&quot;/&quot;FALSE&quot;)</p>
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
                     * 获取<p>是否开启事件追踪 (&quot;TRUE&quot;/&quot;FALSE&quot;)</p>
                     * @return TraceEnable <p>是否开启事件追踪 (&quot;TRUE&quot;/&quot;FALSE&quot;)</p>
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
                     * 获取<p>镜像配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageConfig <p>镜像配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AgentRuntimeCodeImageConfig GetImageConfig() const;

                    /**
                     * 判断参数 ImageConfig 是否已赋值
                     * @return ImageConfig 是否已赋值
                     * 
                     */
                    bool ImageConfigHasBeenSet() const;

                private:

                    /**
                     * <p>函数最后修改时间</p>
                     */
                    std::string m_modTime;
                    bool m_modTimeHasBeenSet;

                    /**
                     * <p>函数代码（&gt;1M 不返回）</p>
                     */
                    std::string m_codeInfo;
                    bool m_codeInfoHasBeenSet;

                    /**
                     * <p>函数描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>触发器列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FunctionTrigger> m_triggers;
                    bool m_triggersHasBeenSet;

                    /**
                     * <p>入口函数</p>
                     */
                    std::string m_handler;
                    bool m_handlerHasBeenSet;

                    /**
                     * <p>代码大小（字节）</p>
                     */
                    uint64_t m_codeSize;
                    bool m_codeSizeHasBeenSet;

                    /**
                     * <p>超时时间（秒）</p>
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>函数版本</p>
                     */
                    std::string m_functionVersion;
                    bool m_functionVersionHasBeenSet;

                    /**
                     * <p>内存大小（MB）</p>
                     */
                    uint64_t m_memorySize;
                    bool m_memorySizeHasBeenSet;

                    /**
                     * <p>运行环境</p>
                     */
                    std::string m_runtime;
                    bool m_runtimeHasBeenSet;

                    /**
                     * <p>函数名称</p>
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * <p>VPC 配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FunctionVpcConfig m_vpcConfig;
                    bool m_vpcConfigHasBeenSet;

                    /**
                     * <p>是否使用 GPU (&quot;TRUE&quot;/&quot;FALSE&quot;)</p>
                     */
                    std::string m_useGpu;
                    bool m_useGpuHasBeenSet;

                    /**
                     * <p>代码校验结果 (&quot;success&quot;/&quot;failed&quot;)</p>
                     */
                    std::string m_codeResult;
                    bool m_codeResultHasBeenSet;

                    /**
                     * <p>代码错误码</p>
                     */
                    int64_t m_errNo;
                    bool m_errNoHasBeenSet;

                    /**
                     * <p>命名空间</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>角色</p>
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * <p>是否自动安装依赖 (&quot;TRUE&quot;/&quot;FALSE&quot;)</p>
                     */
                    std::string m_installDependency;
                    bool m_installDependencyHasBeenSet;

                    /**
                     * <p>函数状态 (&quot;Active&quot;, &quot;Inactive&quot; 等)</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>函数 ID</p>
                     */
                    std::string m_functionId;
                    bool m_functionIdHasBeenSet;

                    /**
                     * <p>标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>函数类型 (&quot;HTTP&quot; 或 &quot;Event&quot;)</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>是否启用 L5 (&quot;TRUE&quot;/&quot;FALSE&quot;)</p>
                     */
                    std::string m_l5Enable;
                    bool m_l5EnableHasBeenSet;

                    /**
                     * <p>函数创建时间</p>
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * <p>对应scf.GetFunction接口的OnsEnable，是否启用 Ons (&quot;TRUE&quot;/&quot;FALSE&quot;)</p>
                     */
                    std::string m_onsEnable;
                    bool m_onsEnableHasBeenSet;

                    /**
                     * <p>计费状态 (&quot;Available&quot; 等)</p>
                     */
                    std::string m_availableStatus;
                    bool m_availableStatusHasBeenSet;

                    /**
                     * <p>函数版本（查询时传入的）</p>
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                    /**
                     * <p>初始化超时时间（秒）</p>
                     */
                    uint64_t m_initTimeout;
                    bool m_initTimeoutHasBeenSet;

                    /**
                     * <p>是否开启异步 (&quot;TRUE&quot;/&quot;FALSE&quot;)</p>
                     */
                    std::string m_asyncRunEnable;
                    bool m_asyncRunEnableHasBeenSet;

                    /**
                     * <p>是否开启事件追踪 (&quot;TRUE&quot;/&quot;FALSE&quot;)</p>
                     */
                    std::string m_traceEnable;
                    bool m_traceEnableHasBeenSet;

                    /**
                     * <p>镜像配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AgentRuntimeCodeImageConfig m_imageConfig;
                    bool m_imageConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_GETFUNCTIONRESPONSE_H_
