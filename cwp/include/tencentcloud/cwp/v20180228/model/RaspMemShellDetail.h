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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RASPMEMSHELLDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RASPMEMSHELLDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * java内存马事件信息
                */
                class RaspMemShellDetail : public AbstractModel
                {
                public:
                    RaspMemShellDetail();
                    ~RaspMemShellDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 事件ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置事件ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 事件ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取服务器quuid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Quuid 服务器quuid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置服务器quuid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _quuid 服务器quuid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取服务器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Alias 服务器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置服务器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alias 服务器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取实例id
                     * @return InstanceID 实例id
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置实例id
                     * @param _instanceID 实例id
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivateIp 内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privateIp 内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicIp 公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicIp 公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取主机tag
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostTags 主机tag
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetHostTags() const;

                    /**
                     * 设置主机tag
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hostTags 主机tag
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHostTags(const std::vector<std::string>& _hostTags);

                    /**
                     * 判断参数 HostTags 是否已赋值
                     * @return HostTags 是否已赋值
                     * 
                     */
                    bool HostTagsHasBeenSet() const;

                    /**
                     * 获取内存马类型  0:Filter型 1:Listener型 2:Servlet型 3:Interceptors型 4:Agent型 5:其他
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 内存马类型  0:Filter型 1:Listener型 2:Servlet型 3:Interceptors型 4:Agent型 5:其他
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置内存马类型  0:Filter型 1:Listener型 2:Servlet型 3:Interceptors型 4:Agent型 5:其他
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 内存马类型  0:Filter型 1:Listener型 2:Servlet型 3:Interceptors型 4:Agent型 5:其他
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取处理状态  0 -- 待处理 1 -- 已加白 2 -- 已删除 3 - 已忽略  4 - 已手动处理
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 处理状态  0 -- 待处理 1 -- 已加白 2 -- 已删除 3 - 已忽略  4 - 已手动处理
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置处理状态  0 -- 待处理 1 -- 已加白 2 -- 已删除 3 - 已忽略  4 - 已手动处理
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 处理状态  0 -- 待处理 1 -- 已加白 2 -- 已删除 3 - 已忽略  4 - 已手动处理
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取所属的类加载器
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClassLoaderName 所属的类加载器
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClassLoaderName() const;

                    /**
                     * 设置所属的类加载器
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _classLoaderName 所属的类加载器
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClassLoaderName(const std::string& _classLoaderName);

                    /**
                     * 判断参数 ClassLoaderName 是否已赋值
                     * @return ClassLoaderName 是否已赋值
                     * 
                     */
                    bool ClassLoaderNameHasBeenSet() const;

                    /**
                     * 获取父类名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuperClassName 父类名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSuperClassName() const;

                    /**
                     * 设置父类名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _superClassName 父类名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSuperClassName(const std::string& _superClassName);

                    /**
                     * 判断参数 SuperClassName 是否已赋值
                     * @return SuperClassName 是否已赋值
                     * 
                     */
                    bool SuperClassNameHasBeenSet() const;

                    /**
                     * 获取继承的接口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Interfaces 继承的接口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInterfaces() const;

                    /**
                     * 设置继承的接口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _interfaces 继承的接口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInterfaces(const std::string& _interfaces);

                    /**
                     * 判断参数 Interfaces 是否已赋值
                     * @return Interfaces 是否已赋值
                     * 
                     */
                    bool InterfacesHasBeenSet() const;

                    /**
                     * 获取注释
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Annotations 注释
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAnnotations() const;

                    /**
                     * 设置注释
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _annotations 注释
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAnnotations(const std::string& _annotations);

                    /**
                     * 判断参数 Annotations 是否已赋值
                     * @return Annotations 是否已赋值
                     * 
                     */
                    bool AnnotationsHasBeenSet() const;

                    /**
                     * 获取类名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClassName 类名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClassName() const;

                    /**
                     * 设置类名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _className 类名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClassName(const std::string& _className);

                    /**
                     * 判断参数 ClassName 是否已赋值
                     * @return ClassName 是否已赋值
                     * 
                     */
                    bool ClassNameHasBeenSet() const;

                    /**
                     * 获取类文件md5
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Md5 类文件md5
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置类文件md5
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _md5 类文件md5
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMd5(const std::string& _md5);

                    /**
                     * 判断参数 Md5 是否已赋值
                     * @return Md5 是否已赋值
                     * 
                     */
                    bool Md5HasBeenSet() const;

                    /**
                     * 获取进程pid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Pid 进程pid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置进程pid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pid 进程pid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPid(const int64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取java进程路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Exe java进程路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExe() const;

                    /**
                     * 设置java进程路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _exe java进程路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExe(const std::string& _exe);

                    /**
                     * 判断参数 Exe 是否已赋值
                     * @return Exe 是否已赋值
                     * 
                     */
                    bool ExeHasBeenSet() const;

                    /**
                     * 获取java进程命令行参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Args java进程命令行参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetArgs() const;

                    /**
                     * 设置java进程命令行参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _args java进程命令行参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetArgs(const std::string& _args);

                    /**
                     * 判断参数 Args 是否已赋值
                     * @return Args 是否已赋值
                     * 
                     */
                    bool ArgsHasBeenSet() const;

                    /**
                     * 获取java内存马二进制代码(base64)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClassContent java内存马二进制代码(base64)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClassContent() const;

                    /**
                     * 设置java内存马二进制代码(base64)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _classContent java内存马二进制代码(base64)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClassContent(const std::string& _classContent);

                    /**
                     * 判断参数 ClassContent 是否已赋值
                     * @return ClassContent 是否已赋值
                     * 
                     */
                    bool ClassContentHasBeenSet() const;

                    /**
                     * 获取java内存马反编译代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClassContentPretty java内存马反编译代码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClassContentPretty() const;

                    /**
                     * 设置java内存马反编译代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _classContentPretty java内存马反编译代码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClassContentPretty(const std::string& _classContentPretty);

                    /**
                     * 判断参数 ClassContentPretty 是否已赋值
                     * @return ClassContentPretty 是否已赋值
                     * 
                     */
                    bool ClassContentPrettyHasBeenSet() const;

                    /**
                     * 获取事件描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventDescription 事件描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventDescription() const;

                    /**
                     * 设置事件描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventDescription 事件描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventDescription(const std::string& _eventDescription);

                    /**
                     * 判断参数 EventDescription 是否已赋值
                     * @return EventDescription 是否已赋值
                     * 
                     */
                    bool EventDescriptionHasBeenSet() const;

                    /**
                     * 获取安全建议
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecurityAdvice 安全建议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSecurityAdvice() const;

                    /**
                     * 设置安全建议
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _securityAdvice 安全建议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecurityAdvice(const std::string& _securityAdvice);

                    /**
                     * 判断参数 SecurityAdvice 是否已赋值
                     * @return SecurityAdvice 是否已赋值
                     * 
                     */
                    bool SecurityAdviceHasBeenSet() const;

                    /**
                     * 获取首次发现时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 首次发现时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置首次发现时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 首次发现时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取最近检测时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecentFoundTime 最近检测时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRecentFoundTime() const;

                    /**
                     * 设置最近检测时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recentFoundTime 最近检测时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecentFoundTime(const std::string& _recentFoundTime);

                    /**
                     * 判断参数 RecentFoundTime 是否已赋值
                     * @return RecentFoundTime 是否已赋值
                     * 
                     */
                    bool RecentFoundTimeHasBeenSet() const;

                    /**
                     * 获取节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeName 节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeName 节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取节点id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeId 节点id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置节点id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeId 节点id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取容器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContainerName 容器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置容器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _containerName 容器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     * 
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取容器id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContainerId 容器id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置容器id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _containerId 容器id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContainerId(const std::string& _containerId);

                    /**
                     * 判断参数 ContainerId 是否已赋值
                     * @return ContainerId 是否已赋值
                     * 
                     */
                    bool ContainerIdHasBeenSet() const;

                    /**
                     * 获取容器运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContainerStatus 容器运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContainerStatus() const;

                    /**
                     * 设置容器运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _containerStatus 容器运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContainerStatus(const std::string& _containerStatus);

                    /**
                     * 判断参数 ContainerStatus 是否已赋值
                     * @return ContainerStatus 是否已赋值
                     * 
                     */
                    bool ContainerStatusHasBeenSet() const;

                    /**
                     * 获取容器隔离状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContainerNetStatus 容器隔离状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContainerNetStatus() const;

                    /**
                     * 设置容器隔离状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _containerNetStatus 容器隔离状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContainerNetStatus(const std::string& _containerNetStatus);

                    /**
                     * 判断参数 ContainerNetStatus 是否已赋值
                     * @return ContainerNetStatus 是否已赋值
                     * 
                     */
                    bool ContainerNetStatusHasBeenSet() const;

                    /**
                     * 获取镜像ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageId 镜像ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置镜像ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageId 镜像ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取镜像名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageName 镜像名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置镜像名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageName 镜像名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     * 
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取pod名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PodName pod名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置pod名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _podName pod名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取podip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PodIp podip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPodIp() const;

                    /**
                     * 设置podip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _podIp podip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPodIp(const std::string& _podIp);

                    /**
                     * 判断参数 PodIp 是否已赋值
                     * @return PodIp 是否已赋值
                     * 
                     */
                    bool PodIpHasBeenSet() const;

                    /**
                     * 获取集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterName 集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterName 集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId 集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                private:

                    /**
                     * 事件ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 服务器quuid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 服务器名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 实例id
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * 公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * 主机tag
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_hostTags;
                    bool m_hostTagsHasBeenSet;

                    /**
                     * 内存马类型  0:Filter型 1:Listener型 2:Servlet型 3:Interceptors型 4:Agent型 5:其他
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 处理状态  0 -- 待处理 1 -- 已加白 2 -- 已删除 3 - 已忽略  4 - 已手动处理
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 所属的类加载器
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_classLoaderName;
                    bool m_classLoaderNameHasBeenSet;

                    /**
                     * 父类名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_superClassName;
                    bool m_superClassNameHasBeenSet;

                    /**
                     * 继承的接口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_interfaces;
                    bool m_interfacesHasBeenSet;

                    /**
                     * 注释
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_annotations;
                    bool m_annotationsHasBeenSet;

                    /**
                     * 类名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_className;
                    bool m_classNameHasBeenSet;

                    /**
                     * 类文件md5
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * 进程pid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * java进程路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_exe;
                    bool m_exeHasBeenSet;

                    /**
                     * java进程命令行参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_args;
                    bool m_argsHasBeenSet;

                    /**
                     * java内存马二进制代码(base64)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_classContent;
                    bool m_classContentHasBeenSet;

                    /**
                     * java内存马反编译代码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_classContentPretty;
                    bool m_classContentPrettyHasBeenSet;

                    /**
                     * 事件描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventDescription;
                    bool m_eventDescriptionHasBeenSet;

                    /**
                     * 安全建议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_securityAdvice;
                    bool m_securityAdviceHasBeenSet;

                    /**
                     * 首次发现时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最近检测时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recentFoundTime;
                    bool m_recentFoundTimeHasBeenSet;

                    /**
                     * 节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 节点id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * 容器名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * 容器id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * 容器运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_containerStatus;
                    bool m_containerStatusHasBeenSet;

                    /**
                     * 容器隔离状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_containerNetStatus;
                    bool m_containerNetStatusHasBeenSet;

                    /**
                     * 镜像ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 镜像名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * pod名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * podip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_podIp;
                    bool m_podIpHasBeenSet;

                    /**
                     * 集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 集群id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RASPMEMSHELLDETAIL_H_
