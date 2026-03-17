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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RASPMEMSHELLEVENT_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RASPMEMSHELLEVENT_H_

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
                class RaspMemShellEvent : public AbstractModel
                {
                public:
                    RaspMemShellEvent();
                    ~RaspMemShellEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件ID
                     * @return Id 事件ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置事件ID
                     * @param _id 事件ID
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
                     * @return Quuid 服务器quuid
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置服务器quuid
                     * @param _quuid 服务器quuid
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
                     * @return Alias 服务器名称
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置服务器名称
                     * @param _alias 服务器名称
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
                     * 获取服务器IP
                     * @return HostIp 服务器IP
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置服务器IP
                     * @param _hostIp 服务器IP
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

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
                     * 获取类文件md5
                     * @return Md5 类文件md5
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置类文件md5
                     * @param _md5 类文件md5
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
                     * 获取所属的类加载器
                     * @return LoaderClassName 所属的类加载器
                     * 
                     */
                    std::string GetLoaderClassName() const;

                    /**
                     * 设置所属的类加载器
                     * @param _loaderClassName 所属的类加载器
                     * 
                     */
                    void SetLoaderClassName(const std::string& _loaderClassName);

                    /**
                     * 判断参数 LoaderClassName 是否已赋值
                     * @return LoaderClassName 是否已赋值
                     * 
                     */
                    bool LoaderClassNameHasBeenSet() const;

                    /**
                     * 获取进程pid
                     * @return Pid 进程pid
                     * 
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置进程pid
                     * @param _pid 进程pid
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
                     * 获取节点名称
                     * @return NodeName 节点名称
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置节点名称
                     * @param _nodeName 节点名称
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
                     * @return NodeId 节点id
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置节点id
                     * @param _nodeId 节点id
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
                     * @return ContainerName 容器名称
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置容器名称
                     * @param _containerName 容器名称
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
                     * @return ContainerId 容器id
                     * 
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置容器id
                     * @param _containerId 容器id
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
                     * @return ContainerStatus 容器运行状态
                     * 
                     */
                    std::string GetContainerStatus() const;

                    /**
                     * 设置容器运行状态
                     * @param _containerStatus 容器运行状态
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
                     * @return ContainerNetStatus 容器隔离状态
                     * 
                     */
                    std::string GetContainerNetStatus() const;

                    /**
                     * 设置容器隔离状态
                     * @param _containerNetStatus 容器隔离状态
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
                     * @return ImageId 镜像ID
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置镜像ID
                     * @param _imageId 镜像ID
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
                     * @return ImageName 镜像名称
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置镜像名称
                     * @param _imageName 镜像名称
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
                     * @return PodName pod名称
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置pod名称
                     * @param _podName pod名称
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
                     * @return PodIp podip
                     * 
                     */
                    std::string GetPodIp() const;

                    /**
                     * 设置podip
                     * @param _podIp podip
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
                     * @return ClusterName 集群名称
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
                     * @param _clusterName 集群名称
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
                     * @return ClusterId 集群id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
                     * @param _clusterId 集群id
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取和节点id一样，前端可以不用这个
                     * @return InstanceID 和节点id一样，前端可以不用这个
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置和节点id一样，前端可以不用这个
                     * @param _instanceID 和节点id一样，前端可以不用这个
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
                     * 获取服务器内网ip
                     * @return HostInnerIP 服务器内网ip
                     * 
                     */
                    std::string GetHostInnerIP() const;

                    /**
                     * 设置服务器内网ip
                     * @param _hostInnerIP 服务器内网ip
                     * 
                     */
                    void SetHostInnerIP(const std::string& _hostInnerIP);

                    /**
                     * 判断参数 HostInnerIP 是否已赋值
                     * @return HostInnerIP 是否已赋值
                     * 
                     */
                    bool HostInnerIPHasBeenSet() const;

                    /**
                     * 获取服务器外网ip
                     * @return HostPublicIP 服务器外网ip
                     * 
                     */
                    std::string GetHostPublicIP() const;

                    /**
                     * 设置服务器外网ip
                     * @param _hostPublicIP 服务器外网ip
                     * 
                     */
                    void SetHostPublicIP(const std::string& _hostPublicIP);

                    /**
                     * 判断参数 HostPublicIP 是否已赋值
                     * @return HostPublicIP 是否已赋值
                     * 
                     */
                    bool HostPublicIPHasBeenSet() const;

                    /**
                     * 获取普通节点：NORMAL
超级节点：SUPER
                     * @return NodeType 普通节点：NORMAL
超级节点：SUPER
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置普通节点：NORMAL
超级节点：SUPER
                     * @param _nodeType 普通节点：NORMAL
超级节点：SUPER
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取超级节点唯一id
                     * @return NodeUniqueID 超级节点唯一id
                     * 
                     */
                    std::string GetNodeUniqueID() const;

                    /**
                     * 设置超级节点唯一id
                     * @param _nodeUniqueID 超级节点唯一id
                     * 
                     */
                    void SetNodeUniqueID(const std::string& _nodeUniqueID);

                    /**
                     * 判断参数 NodeUniqueID 是否已赋值
                     * @return NodeUniqueID 是否已赋值
                     * 
                     */
                    bool NodeUniqueIDHasBeenSet() const;

                private:

                    /**
                     * 事件ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 服务器quuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 服务器名称
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 服务器IP
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

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
                     * 类文件md5
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * 类名
                     */
                    std::string m_className;
                    bool m_classNameHasBeenSet;

                    /**
                     * 父类名
                     */
                    std::string m_superClassName;
                    bool m_superClassNameHasBeenSet;

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
                     * 所属的类加载器
                     */
                    std::string m_loaderClassName;
                    bool m_loaderClassNameHasBeenSet;

                    /**
                     * 进程pid
                     */
                    int64_t m_pid;
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
                     * 节点名称
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 节点id
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * 容器名称
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * 容器id
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * 容器运行状态
                     */
                    std::string m_containerStatus;
                    bool m_containerStatusHasBeenSet;

                    /**
                     * 容器隔离状态
                     */
                    std::string m_containerNetStatus;
                    bool m_containerNetStatusHasBeenSet;

                    /**
                     * 镜像ID
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 镜像名称
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * pod名称
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * podip
                     */
                    std::string m_podIp;
                    bool m_podIpHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 和节点id一样，前端可以不用这个
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 服务器内网ip
                     */
                    std::string m_hostInnerIP;
                    bool m_hostInnerIPHasBeenSet;

                    /**
                     * 服务器外网ip
                     */
                    std::string m_hostPublicIP;
                    bool m_hostPublicIPHasBeenSet;

                    /**
                     * 普通节点：NORMAL
超级节点：SUPER
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 超级节点唯一id
                     */
                    std::string m_nodeUniqueID;
                    bool m_nodeUniqueIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RASPMEMSHELLEVENT_H_
