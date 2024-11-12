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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_JAVAMEMSHELLDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_JAVAMEMSHELLDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/MachineExtraInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * java内存马事件详细信息
                */
                class JavaMemShellDetail : public AbstractModel
                {
                public:
                    JavaMemShellDetail();
                    ~JavaMemShellDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取容器名
                     * @return InstanceName 容器名
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置容器名
                     * @param _instanceName 容器名
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取实例状态：RUNNING,STOPPED,SHUTDOWN...
                     * @return InstanceState 实例状态：RUNNING,STOPPED,SHUTDOWN...
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置实例状态：RUNNING,STOPPED,SHUTDOWN...
                     * @param _instanceState 实例状态：RUNNING,STOPPED,SHUTDOWN...
                     * 
                     */
                    void SetInstanceState(const std::string& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取内网IP
                     * @return PrivateIp 内网IP
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置内网IP
                     * @param _privateIp 内网IP
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
                     * 获取公共ip
                     * @return PublicIp 公共ip
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置公共ip
                     * @param _publicIp 公共ip
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
                     * 获取内存马类型  0:Filter型 1:Listener型 2:Servlet型 3:Interceptors型 4:Agent型 5:其他
                     * @return Type 内存马类型  0:Filter型 1:Listener型 2:Servlet型 3:Interceptors型 4:Agent型 5:其他
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置内存马类型  0:Filter型 1:Listener型 2:Servlet型 3:Interceptors型 4:Agent型 5:其他
                     * @param _type 内存马类型  0:Filter型 1:Listener型 2:Servlet型 3:Interceptors型 4:Agent型 5:其他
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
                     * 获取说明
                     * @return Description 说明
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置说明
                     * @param _description 说明
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
                     * 获取首次发现时间
                     * @return CreateTime 首次发现时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置首次发现时间
                     * @param _createTime 首次发现时间
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
                     * @return RecentFoundTime 最近检测时间
                     * 
                     */
                    std::string GetRecentFoundTime() const;

                    /**
                     * 设置最近检测时间
                     * @param _recentFoundTime 最近检测时间
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
                     * 获取处理状态  0 -- 待处理 1 -- 已加白 2 -- 已删除 3 - 已忽略  4 - 已手动处理
                     * @return Status 处理状态  0 -- 待处理 1 -- 已加白 2 -- 已删除 3 - 已忽略  4 - 已手动处理
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置处理状态  0 -- 待处理 1 -- 已加白 2 -- 已删除 3 - 已忽略  4 - 已手动处理
                     * @param _status 处理状态  0 -- 待处理 1 -- 已加白 2 -- 已删除 3 - 已忽略  4 - 已手动处理
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
                     * 获取java加载器类名
                     * @return ClassLoaderName java加载器类名
                     * 
                     */
                    std::string GetClassLoaderName() const;

                    /**
                     * 设置java加载器类名
                     * @param _classLoaderName java加载器类名
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
                     * @return SuperClassName 父类名
                     * 
                     */
                    std::string GetSuperClassName() const;

                    /**
                     * 设置父类名
                     * @param _superClassName 父类名
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
                     * 获取类文件MD5
                     * @return Md5 类文件MD5
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置类文件MD5
                     * @param _md5 类文件MD5
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
                     * 获取继承的接口
                     * @return Interfaces 继承的接口
                     * 
                     */
                    std::string GetInterfaces() const;

                    /**
                     * 设置继承的接口
                     * @param _interfaces 继承的接口
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
                     * @return Annotations 注释
                     * 
                     */
                    std::string GetAnnotations() const;

                    /**
                     * 设置注释
                     * @param _annotations 注释
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
                     * 获取进程pid
                     * @return Pid 进程pid
                     * 
                     */
                    uint64_t GetPid() const;

                    /**
                     * 设置进程pid
                     * @param _pid 进程pid
                     * 
                     */
                    void SetPid(const uint64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取java进程路径
                     * @return Exe java进程路径
                     * 
                     */
                    std::string GetExe() const;

                    /**
                     * 设置java进程路径
                     * @param _exe java进程路径
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
                     * @return Args java进程命令行参数
                     * 
                     */
                    std::string GetArgs() const;

                    /**
                     * 设置java进程命令行参数
                     * @param _args java进程命令行参数
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
                     * 获取类名
                     * @return ClassName 类名
                     * 
                     */
                    std::string GetClassName() const;

                    /**
                     * 设置类名
                     * @param _className 类名
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
                     * 获取java内存马二进制代码(base64)
                     * @return ClassContent java内存马二进制代码(base64)
                     * 
                     */
                    std::string GetClassContent() const;

                    /**
                     * 设置java内存马二进制代码(base64)
                     * @param _classContent java内存马二进制代码(base64)
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
                     * @return ClassContentPretty java内存马反编译代码
                     * 
                     */
                    std::string GetClassContentPretty() const;

                    /**
                     * 设置java内存马反编译代码
                     * @param _classContentPretty java内存马反编译代码
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
                     * @return EventDescription 事件描述
                     * 
                     */
                    std::string GetEventDescription() const;

                    /**
                     * 设置事件描述
                     * @param _eventDescription 事件描述
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
                     * @return SecurityAdvice 安全建议
                     * 
                     */
                    std::string GetSecurityAdvice() const;

                    /**
                     * 设置安全建议
                     * @param _securityAdvice 安全建议
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
                     * 获取 主机额外信息
                     * @return MachineExtraInfo  主机额外信息
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置 主机额外信息
                     * @param _machineExtraInfo  主机额外信息
                     * 
                     */
                    void SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo);

                    /**
                     * 判断参数 MachineExtraInfo 是否已赋值
                     * @return MachineExtraInfo 是否已赋值
                     * 
                     */
                    bool MachineExtraInfoHasBeenSet() const;

                    /**
                     * 获取agent状态：OFFLINE,ONLINE
                     * @return MachineState agent状态：OFFLINE,ONLINE
                     * 
                     */
                    std::string GetMachineState() const;

                    /**
                     * 设置agent状态：OFFLINE,ONLINE
                     * @param _machineState agent状态：OFFLINE,ONLINE
                     * 
                     */
                    void SetMachineState(const std::string& _machineState);

                    /**
                     * 判断参数 MachineState 是否已赋值
                     * @return MachineState 是否已赋值
                     * 
                     */
                    bool MachineStateHasBeenSet() const;

                private:

                    /**
                     * 容器名
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例状态：RUNNING,STOPPED,SHUTDOWN...
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * 内网IP
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * 公共ip
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * 内存马类型  0:Filter型 1:Listener型 2:Servlet型 3:Interceptors型 4:Agent型 5:其他
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 说明
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 首次发现时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最近检测时间
                     */
                    std::string m_recentFoundTime;
                    bool m_recentFoundTimeHasBeenSet;

                    /**
                     * 处理状态  0 -- 待处理 1 -- 已加白 2 -- 已删除 3 - 已忽略  4 - 已手动处理
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * java加载器类名
                     */
                    std::string m_classLoaderName;
                    bool m_classLoaderNameHasBeenSet;

                    /**
                     * 父类名
                     */
                    std::string m_superClassName;
                    bool m_superClassNameHasBeenSet;

                    /**
                     * 类文件MD5
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * 继承的接口
                     */
                    std::string m_interfaces;
                    bool m_interfacesHasBeenSet;

                    /**
                     * 注释
                     */
                    std::string m_annotations;
                    bool m_annotationsHasBeenSet;

                    /**
                     * 进程pid
                     */
                    uint64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * java进程路径
                     */
                    std::string m_exe;
                    bool m_exeHasBeenSet;

                    /**
                     * java进程命令行参数
                     */
                    std::string m_args;
                    bool m_argsHasBeenSet;

                    /**
                     * 类名
                     */
                    std::string m_className;
                    bool m_classNameHasBeenSet;

                    /**
                     * java内存马二进制代码(base64)
                     */
                    std::string m_classContent;
                    bool m_classContentHasBeenSet;

                    /**
                     * java内存马反编译代码
                     */
                    std::string m_classContentPretty;
                    bool m_classContentPrettyHasBeenSet;

                    /**
                     * 事件描述
                     */
                    std::string m_eventDescription;
                    bool m_eventDescriptionHasBeenSet;

                    /**
                     * 安全建议
                     */
                    std::string m_securityAdvice;
                    bool m_securityAdviceHasBeenSet;

                    /**
                     *  主机额外信息
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * agent状态：OFFLINE,ONLINE
                     */
                    std::string m_machineState;
                    bool m_machineStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_JAVAMEMSHELLDETAIL_H_
