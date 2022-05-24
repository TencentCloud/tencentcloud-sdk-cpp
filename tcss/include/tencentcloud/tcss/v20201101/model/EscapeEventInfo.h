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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ESCAPEEVENTINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ESCAPEEVENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 容器逃逸事件列表
                */
                class EscapeEventInfo : public AbstractModel
                {
                public:
                    EscapeEventInfo();
                    ~EscapeEventInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件类型
   ESCAPE_HOST_ACESS_FILE:宿主机文件访问逃逸
   ESCAPE_MOUNT_NAMESPACE:MountNamespace逃逸
   ESCAPE_PRIVILEDGE:程序提权逃逸
   ESCAPE_PRIVILEDGE_CONTAINER_START:特权容器启动逃逸
   ESCAPE_MOUNT_SENSITIVE_PTAH:敏感路径挂载
   ESCAPE_SYSCALL:Syscall逃逸
                     * @return EventType 事件类型
   ESCAPE_HOST_ACESS_FILE:宿主机文件访问逃逸
   ESCAPE_MOUNT_NAMESPACE:MountNamespace逃逸
   ESCAPE_PRIVILEDGE:程序提权逃逸
   ESCAPE_PRIVILEDGE_CONTAINER_START:特权容器启动逃逸
   ESCAPE_MOUNT_SENSITIVE_PTAH:敏感路径挂载
   ESCAPE_SYSCALL:Syscall逃逸
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置事件类型
   ESCAPE_HOST_ACESS_FILE:宿主机文件访问逃逸
   ESCAPE_MOUNT_NAMESPACE:MountNamespace逃逸
   ESCAPE_PRIVILEDGE:程序提权逃逸
   ESCAPE_PRIVILEDGE_CONTAINER_START:特权容器启动逃逸
   ESCAPE_MOUNT_SENSITIVE_PTAH:敏感路径挂载
   ESCAPE_SYSCALL:Syscall逃逸
                     * @param EventType 事件类型
   ESCAPE_HOST_ACESS_FILE:宿主机文件访问逃逸
   ESCAPE_MOUNT_NAMESPACE:MountNamespace逃逸
   ESCAPE_PRIVILEDGE:程序提权逃逸
   ESCAPE_PRIVILEDGE_CONTAINER_START:特权容器启动逃逸
   ESCAPE_MOUNT_SENSITIVE_PTAH:敏感路径挂载
   ESCAPE_SYSCALL:Syscall逃逸
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取容器名
                     * @return ContainerName 容器名
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置容器名
                     * @param ContainerName 容器名
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取镜像名
                     * @return ImageName 镜像名
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置镜像名
                     * @param ImageName 镜像名
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取状态，EVENT_UNDEAL:未处理，EVENT_DEALED:已处理，EVENT_INGNORE:忽略
                     * @return Status 状态，EVENT_UNDEAL:未处理，EVENT_DEALED:已处理，EVENT_INGNORE:忽略
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态，EVENT_UNDEAL:未处理，EVENT_DEALED:已处理，EVENT_INGNORE:忽略
                     * @param Status 状态，EVENT_UNDEAL:未处理，EVENT_DEALED:已处理，EVENT_INGNORE:忽略
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取事件记录的唯一id
                     * @return EventId 事件记录的唯一id
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置事件记录的唯一id
                     * @param EventId 事件记录的唯一id
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取节点名称
                     * @return NodeName 节点名称
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置节点名称
                     * @param NodeName 节点名称
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取pod(实例)的名字
                     * @return PodName pod(实例)的名字
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置pod(实例)的名字
                     * @param PodName pod(实例)的名字
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取生成时间
                     * @return FoundTime 生成时间
                     */
                    std::string GetFoundTime() const;

                    /**
                     * 设置生成时间
                     * @param FoundTime 生成时间
                     */
                    void SetFoundTime(const std::string& _foundTime);

                    /**
                     * 判断参数 FoundTime 是否已赋值
                     * @return FoundTime 是否已赋值
                     */
                    bool FoundTimeHasBeenSet() const;

                    /**
                     * 获取事件名字，
宿主机文件访问逃逸、
Syscall逃逸、
MountNamespace逃逸、
程序提权逃逸、
特权容器启动逃逸、
敏感路径挂载
                     * @return EventName 事件名字，
宿主机文件访问逃逸、
Syscall逃逸、
MountNamespace逃逸、
程序提权逃逸、
特权容器启动逃逸、
敏感路径挂载
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置事件名字，
宿主机文件访问逃逸、
Syscall逃逸、
MountNamespace逃逸、
程序提权逃逸、
特权容器启动逃逸、
敏感路径挂载
                     * @param EventName 事件名字，
宿主机文件访问逃逸、
Syscall逃逸、
MountNamespace逃逸、
程序提权逃逸、
特权容器启动逃逸、
敏感路径挂载
                     */
                    void SetEventName(const std::string& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     */
                    bool EventNameHasBeenSet() const;

                    /**
                     * 获取镜像id，用于跳转
                     * @return ImageId 镜像id，用于跳转
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置镜像id，用于跳转
                     * @param ImageId 镜像id，用于跳转
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取容器id，用于跳转
                     * @return ContainerId 容器id，用于跳转
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置容器id，用于跳转
                     * @param ContainerId 容器id，用于跳转
                     */
                    void SetContainerId(const std::string& _containerId);

                    /**
                     * 判断参数 ContainerId 是否已赋值
                     * @return ContainerId 是否已赋值
                     */
                    bool ContainerIdHasBeenSet() const;

                    /**
                     * 获取事件解决方案
                     * @return Solution 事件解决方案
                     */
                    std::string GetSolution() const;

                    /**
                     * 设置事件解决方案
                     * @param Solution 事件解决方案
                     */
                    void SetSolution(const std::string& _solution);

                    /**
                     * 判断参数 Solution 是否已赋值
                     * @return Solution 是否已赋值
                     */
                    bool SolutionHasBeenSet() const;

                    /**
                     * 获取事件描述
                     * @return Description 事件描述
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置事件描述
                     * @param Description 事件描述
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取事件数量
                     * @return EventCount 事件数量
                     */
                    int64_t GetEventCount() const;

                    /**
                     * 设置事件数量
                     * @param EventCount 事件数量
                     */
                    void SetEventCount(const int64_t& _eventCount);

                    /**
                     * 判断参数 EventCount 是否已赋值
                     * @return EventCount 是否已赋值
                     */
                    bool EventCountHasBeenSet() const;

                    /**
                     * 获取最近生成时间
                     * @return LatestFoundTime 最近生成时间
                     */
                    std::string GetLatestFoundTime() const;

                    /**
                     * 设置最近生成时间
                     * @param LatestFoundTime 最近生成时间
                     */
                    void SetLatestFoundTime(const std::string& _latestFoundTime);

                    /**
                     * 判断参数 LatestFoundTime 是否已赋值
                     * @return LatestFoundTime 是否已赋值
                     */
                    bool LatestFoundTimeHasBeenSet() const;

                    /**
                     * 获取节点IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeIP 节点IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNodeIP() const;

                    /**
                     * 设置节点IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NodeIP 节点IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNodeIP(const std::string& _nodeIP);

                    /**
                     * 判断参数 NodeIP 是否已赋值
                     * @return NodeIP 是否已赋值
                     */
                    bool NodeIPHasBeenSet() const;

                    /**
                     * 获取主机IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostID 主机IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHostID() const;

                    /**
                     * 设置主机IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HostID 主机IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHostID(const std::string& _hostID);

                    /**
                     * 判断参数 HostID 是否已赋值
                     * @return HostID 是否已赋值
                     */
                    bool HostIDHasBeenSet() const;

                    /**
                     * 获取网络状态
未隔离  	NORMAL
已隔离		ISOLATED
隔离中		ISOLATING
隔离失败	ISOLATE_FAILED
解除隔离中  RESTORING
解除隔离失败 RESTORE_FAILED
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContainerNetStatus 网络状态
未隔离  	NORMAL
已隔离		ISOLATED
隔离中		ISOLATING
隔离失败	ISOLATE_FAILED
解除隔离中  RESTORING
解除隔离失败 RESTORE_FAILED
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetContainerNetStatus() const;

                    /**
                     * 设置网络状态
未隔离  	NORMAL
已隔离		ISOLATED
隔离中		ISOLATING
隔离失败	ISOLATE_FAILED
解除隔离中  RESTORING
解除隔离失败 RESTORE_FAILED
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ContainerNetStatus 网络状态
未隔离  	NORMAL
已隔离		ISOLATED
隔离中		ISOLATING
隔离失败	ISOLATE_FAILED
解除隔离中  RESTORING
解除隔离失败 RESTORE_FAILED
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetContainerNetStatus(const std::string& _containerNetStatus);

                    /**
                     * 判断参数 ContainerNetStatus 是否已赋值
                     * @return ContainerNetStatus 是否已赋值
                     */
                    bool ContainerNetStatusHasBeenSet() const;

                    /**
                     * 获取容器子状态
"AGENT_OFFLINE"       //Agent离线
"NODE_DESTROYED"      //节点已销毁
"CONTAINER_EXITED"    //容器已退出
"CONTAINER_DESTROYED" //容器已销毁
"SHARED_HOST"         // 容器与主机共享网络
"RESOURCE_LIMIT"      //隔离操作资源超限
"UNKNOW"              // 原因未知
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContainerNetSubStatus 容器子状态
"AGENT_OFFLINE"       //Agent离线
"NODE_DESTROYED"      //节点已销毁
"CONTAINER_EXITED"    //容器已退出
"CONTAINER_DESTROYED" //容器已销毁
"SHARED_HOST"         // 容器与主机共享网络
"RESOURCE_LIMIT"      //隔离操作资源超限
"UNKNOW"              // 原因未知
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetContainerNetSubStatus() const;

                    /**
                     * 设置容器子状态
"AGENT_OFFLINE"       //Agent离线
"NODE_DESTROYED"      //节点已销毁
"CONTAINER_EXITED"    //容器已退出
"CONTAINER_DESTROYED" //容器已销毁
"SHARED_HOST"         // 容器与主机共享网络
"RESOURCE_LIMIT"      //隔离操作资源超限
"UNKNOW"              // 原因未知
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ContainerNetSubStatus 容器子状态
"AGENT_OFFLINE"       //Agent离线
"NODE_DESTROYED"      //节点已销毁
"CONTAINER_EXITED"    //容器已退出
"CONTAINER_DESTROYED" //容器已销毁
"SHARED_HOST"         // 容器与主机共享网络
"RESOURCE_LIMIT"      //隔离操作资源超限
"UNKNOW"              // 原因未知
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetContainerNetSubStatus(const std::string& _containerNetSubStatus);

                    /**
                     * 判断参数 ContainerNetSubStatus 是否已赋值
                     * @return ContainerNetSubStatus 是否已赋值
                     */
                    bool ContainerNetSubStatusHasBeenSet() const;

                    /**
                     * 获取容器隔离操作来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContainerIsolateOperationSrc 容器隔离操作来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetContainerIsolateOperationSrc() const;

                    /**
                     * 设置容器隔离操作来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ContainerIsolateOperationSrc 容器隔离操作来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetContainerIsolateOperationSrc(const std::string& _containerIsolateOperationSrc);

                    /**
                     * 判断参数 ContainerIsolateOperationSrc 是否已赋值
                     * @return ContainerIsolateOperationSrc 是否已赋值
                     */
                    bool ContainerIsolateOperationSrcHasBeenSet() const;

                private:

                    /**
                     * 事件类型
   ESCAPE_HOST_ACESS_FILE:宿主机文件访问逃逸
   ESCAPE_MOUNT_NAMESPACE:MountNamespace逃逸
   ESCAPE_PRIVILEDGE:程序提权逃逸
   ESCAPE_PRIVILEDGE_CONTAINER_START:特权容器启动逃逸
   ESCAPE_MOUNT_SENSITIVE_PTAH:敏感路径挂载
   ESCAPE_SYSCALL:Syscall逃逸
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 容器名
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * 镜像名
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 状态，EVENT_UNDEAL:未处理，EVENT_DEALED:已处理，EVENT_INGNORE:忽略
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 事件记录的唯一id
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 节点名称
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * pod(实例)的名字
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * 生成时间
                     */
                    std::string m_foundTime;
                    bool m_foundTimeHasBeenSet;

                    /**
                     * 事件名字，
宿主机文件访问逃逸、
Syscall逃逸、
MountNamespace逃逸、
程序提权逃逸、
特权容器启动逃逸、
敏感路径挂载
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * 镜像id，用于跳转
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 容器id，用于跳转
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * 事件解决方案
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * 事件描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 事件数量
                     */
                    int64_t m_eventCount;
                    bool m_eventCountHasBeenSet;

                    /**
                     * 最近生成时间
                     */
                    std::string m_latestFoundTime;
                    bool m_latestFoundTimeHasBeenSet;

                    /**
                     * 节点IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeIP;
                    bool m_nodeIPHasBeenSet;

                    /**
                     * 主机IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hostID;
                    bool m_hostIDHasBeenSet;

                    /**
                     * 网络状态
未隔离  	NORMAL
已隔离		ISOLATED
隔离中		ISOLATING
隔离失败	ISOLATE_FAILED
解除隔离中  RESTORING
解除隔离失败 RESTORE_FAILED
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_containerNetStatus;
                    bool m_containerNetStatusHasBeenSet;

                    /**
                     * 容器子状态
"AGENT_OFFLINE"       //Agent离线
"NODE_DESTROYED"      //节点已销毁
"CONTAINER_EXITED"    //容器已退出
"CONTAINER_DESTROYED" //容器已销毁
"SHARED_HOST"         // 容器与主机共享网络
"RESOURCE_LIMIT"      //隔离操作资源超限
"UNKNOW"              // 原因未知
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_containerNetSubStatus;
                    bool m_containerNetSubStatusHasBeenSet;

                    /**
                     * 容器隔离操作来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_containerIsolateOperationSrc;
                    bool m_containerIsolateOperationSrcHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ESCAPEEVENTINFO_H_
