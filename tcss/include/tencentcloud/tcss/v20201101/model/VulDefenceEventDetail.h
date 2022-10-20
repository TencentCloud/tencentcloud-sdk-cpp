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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_VULDEFENCEEVENTDETAIL_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_VULDEFENCEEVENTDETAIL_H_

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
                * 漏洞防御事件详情
                */
                class VulDefenceEventDetail : public AbstractModel
                {
                public:
                    VulDefenceEventDetail();
                    ~VulDefenceEventDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取漏洞CVEID
                     * @return CVEID 漏洞CVEID
                     */
                    std::string GetCVEID() const;

                    /**
                     * 设置漏洞CVEID
                     * @param CVEID 漏洞CVEID
                     */
                    void SetCVEID(const std::string& _cVEID);

                    /**
                     * 判断参数 CVEID 是否已赋值
                     * @return CVEID 是否已赋值
                     */
                    bool CVEIDHasBeenSet() const;

                    /**
                     * 获取漏洞名称
                     * @return VulName 漏洞名称
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置漏洞名称
                     * @param VulName 漏洞名称
                     */
                    void SetVulName(const std::string& _vulName);

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取漏洞PocID
                     * @return PocID 漏洞PocID
                     */
                    std::string GetPocID() const;

                    /**
                     * 设置漏洞PocID
                     * @param PocID 漏洞PocID
                     */
                    void SetPocID(const std::string& _pocID);

                    /**
                     * 判断参数 PocID 是否已赋值
                     * @return PocID 是否已赋值
                     */
                    bool PocIDHasBeenSet() const;

                    /**
                     * 获取入侵状态
                     * @return EventType 入侵状态
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置入侵状态
                     * @param EventType 入侵状态
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取攻击源IP
                     * @return SourceIP 攻击源IP
                     */
                    std::string GetSourceIP() const;

                    /**
                     * 设置攻击源IP
                     * @param SourceIP 攻击源IP
                     */
                    void SetSourceIP(const std::string& _sourceIP);

                    /**
                     * 判断参数 SourceIP 是否已赋值
                     * @return SourceIP 是否已赋值
                     */
                    bool SourceIPHasBeenSet() const;

                    /**
                     * 获取攻击源ip地址所在城市
                     * @return City 攻击源ip地址所在城市
                     */
                    std::string GetCity() const;

                    /**
                     * 设置攻击源ip地址所在城市
                     * @param City 攻击源ip地址所在城市
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     */
                    bool CityHasBeenSet() const;

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
                     * 获取容器ID
                     * @return ContainerID 容器ID
                     */
                    std::string GetContainerID() const;

                    /**
                     * 设置容器ID
                     * @param ContainerID 容器ID
                     */
                    void SetContainerID(const std::string& _containerID);

                    /**
                     * 判断参数 ContainerID 是否已赋值
                     * @return ContainerID 是否已赋值
                     */
                    bool ContainerIDHasBeenSet() const;

                    /**
                     * 获取容器名称
                     * @return ContainerName 容器名称
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置容器名称
                     * @param ContainerName 容器名称
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取镜像ID
                     * @return ImageID 镜像ID
                     */
                    std::string GetImageID() const;

                    /**
                     * 设置镜像ID
                     * @param ImageID 镜像ID
                     */
                    void SetImageID(const std::string& _imageID);

                    /**
                     * 判断参数 ImageID 是否已赋值
                     * @return ImageID 是否已赋值
                     */
                    bool ImageIDHasBeenSet() const;

                    /**
                     * 获取镜像名称
                     * @return ImageName 镜像名称
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置镜像名称
                     * @param ImageName 镜像名称
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取处理状态
                     * @return Status 处理状态
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置处理状态
                     * @param Status 处理状态
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取攻击源端口
                     * @return SourcePort 攻击源端口
                     */
                    std::vector<std::string> GetSourcePort() const;

                    /**
                     * 设置攻击源端口
                     * @param SourcePort 攻击源端口
                     */
                    void SetSourcePort(const std::vector<std::string>& _sourcePort);

                    /**
                     * 判断参数 SourcePort 是否已赋值
                     * @return SourcePort 是否已赋值
                     */
                    bool SourcePortHasBeenSet() const;

                    /**
                     * 获取事件ID
                     * @return EventID 事件ID
                     */
                    int64_t GetEventID() const;

                    /**
                     * 设置事件ID
                     * @param EventID 事件ID
                     */
                    void SetEventID(const int64_t& _eventID);

                    /**
                     * 判断参数 EventID 是否已赋值
                     * @return EventID 是否已赋值
                     */
                    bool EventIDHasBeenSet() const;

                    /**
                     * 获取主机名称
                     * @return HostName 主机名称
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置主机名称
                     * @param HostName 主机名称
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取主机内网IP
                     * @return HostIP 主机内网IP
                     */
                    std::string GetHostIP() const;

                    /**
                     * 设置主机内网IP
                     * @param HostIP 主机内网IP
                     */
                    void SetHostIP(const std::string& _hostIP);

                    /**
                     * 判断参数 HostIP 是否已赋值
                     * @return HostIP 是否已赋值
                     */
                    bool HostIPHasBeenSet() const;

                    /**
                     * 获取主机外网IP
                     * @return PublicIP 主机外网IP
                     */
                    std::string GetPublicIP() const;

                    /**
                     * 设置主机外网IP
                     * @param PublicIP 主机外网IP
                     */
                    void SetPublicIP(const std::string& _publicIP);

                    /**
                     * 判断参数 PublicIP 是否已赋值
                     * @return PublicIP 是否已赋值
                     */
                    bool PublicIPHasBeenSet() const;

                    /**
                     * 获取Pod名称
                     * @return PodName Pod名称
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置Pod名称
                     * @param PodName Pod名称
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取危害描述
                     * @return Description 危害描述
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置危害描述
                     * @param Description 危害描述
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取修复建议
                     * @return OfficialSolution 修复建议
                     */
                    std::string GetOfficialSolution() const;

                    /**
                     * 设置修复建议
                     * @param OfficialSolution 修复建议
                     */
                    void SetOfficialSolution(const std::string& _officialSolution);

                    /**
                     * 判断参数 OfficialSolution 是否已赋值
                     * @return OfficialSolution 是否已赋值
                     */
                    bool OfficialSolutionHasBeenSet() const;

                    /**
                     * 获取攻击包
                     * @return NetworkPayload 攻击包
                     */
                    std::string GetNetworkPayload() const;

                    /**
                     * 设置攻击包
                     * @param NetworkPayload 攻击包
                     */
                    void SetNetworkPayload(const std::string& _networkPayload);

                    /**
                     * 判断参数 NetworkPayload 是否已赋值
                     * @return NetworkPayload 是否已赋值
                     */
                    bool NetworkPayloadHasBeenSet() const;

                    /**
                     * 获取进程PID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PID 进程PID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetPID() const;

                    /**
                     * 设置进程PID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PID 进程PID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPID(const int64_t& _pID);

                    /**
                     * 判断参数 PID 是否已赋值
                     * @return PID 是否已赋值
                     */
                    bool PIDHasBeenSet() const;

                    /**
                     * 获取进程主类名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MainClass 进程主类名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMainClass() const;

                    /**
                     * 设置进程主类名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MainClass 进程主类名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMainClass(const std::string& _mainClass);

                    /**
                     * 判断参数 MainClass 是否已赋值
                     * @return MainClass 是否已赋值
                     */
                    bool MainClassHasBeenSet() const;

                    /**
                     * 获取堆栈信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StackTrace 堆栈信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStackTrace() const;

                    /**
                     * 设置堆栈信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StackTrace 堆栈信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStackTrace(const std::string& _stackTrace);

                    /**
                     * 判断参数 StackTrace 是否已赋值
                     * @return StackTrace 是否已赋值
                     */
                    bool StackTraceHasBeenSet() const;

                    /**
                     * 获取监听账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServerAccount 监听账号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetServerAccount() const;

                    /**
                     * 设置监听账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ServerAccount 监听账号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetServerAccount(const std::string& _serverAccount);

                    /**
                     * 判断参数 ServerAccount 是否已赋值
                     * @return ServerAccount 是否已赋值
                     */
                    bool ServerAccountHasBeenSet() const;

                    /**
                     * 获取监听端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServerPort 监听端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetServerPort() const;

                    /**
                     * 设置监听端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ServerPort 监听端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetServerPort(const std::string& _serverPort);

                    /**
                     * 判断参数 ServerPort 是否已赋值
                     * @return ServerPort 是否已赋值
                     */
                    bool ServerPortHasBeenSet() const;

                    /**
                     * 获取进程路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServerExe 进程路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetServerExe() const;

                    /**
                     * 设置进程路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ServerExe 进程路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetServerExe(const std::string& _serverExe);

                    /**
                     * 判断参数 ServerExe 是否已赋值
                     * @return ServerExe 是否已赋值
                     */
                    bool ServerExeHasBeenSet() const;

                    /**
                     * 获取进程命令行参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServerArg 进程命令行参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetServerArg() const;

                    /**
                     * 设置进程命令行参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ServerArg 进程命令行参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetServerArg(const std::string& _serverArg);

                    /**
                     * 判断参数 ServerArg 是否已赋值
                     * @return ServerArg 是否已赋值
                     */
                    bool ServerArgHasBeenSet() const;

                    /**
                     * 获取主机QUUID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QUUID 主机QUUID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetQUUID() const;

                    /**
                     * 设置主机QUUID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param QUUID 主机QUUID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetQUUID(const std::string& _qUUID);

                    /**
                     * 判断参数 QUUID 是否已赋值
                     * @return QUUID 是否已赋值
                     */
                    bool QUUIDHasBeenSet() const;

                    /**
                     * 获取隔离状态
未隔离  	NORMAL
已隔离		ISOLATED
隔离中		ISOLATING
隔离失败	ISOLATE_FAILED
解除隔离中  RESTORING
解除隔离失败 RESTORE_FAILED
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContainerNetStatus 隔离状态
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
                     * 设置隔离状态
未隔离  	NORMAL
已隔离		ISOLATED
隔离中		ISOLATING
隔离失败	ISOLATE_FAILED
解除隔离中  RESTORING
解除隔离失败 RESTORE_FAILED
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ContainerNetStatus 隔离状态
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

                    /**
                     * 获取容器状态
正在运行: RUNNING
暂停: PAUSED
停止: STOPPED
已经创建: CREATED
已经销毁: DESTROYED
正在重启中: RESTARTING
迁移中: REMOVING
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContainerStatus 容器状态
正在运行: RUNNING
暂停: PAUSED
停止: STOPPED
已经创建: CREATED
已经销毁: DESTROYED
正在重启中: RESTARTING
迁移中: REMOVING
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetContainerStatus() const;

                    /**
                     * 设置容器状态
正在运行: RUNNING
暂停: PAUSED
停止: STOPPED
已经创建: CREATED
已经销毁: DESTROYED
正在重启中: RESTARTING
迁移中: REMOVING
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ContainerStatus 容器状态
正在运行: RUNNING
暂停: PAUSED
停止: STOPPED
已经创建: CREATED
已经销毁: DESTROYED
正在重启中: RESTARTING
迁移中: REMOVING
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetContainerStatus(const std::string& _containerStatus);

                    /**
                     * 判断参数 ContainerStatus 是否已赋值
                     * @return ContainerStatus 是否已赋值
                     */
                    bool ContainerStatusHasBeenSet() const;

                    /**
                     * 获取接口Url
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JNDIUrl 接口Url
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetJNDIUrl() const;

                    /**
                     * 设置接口Url
注意：此字段可能返回 null，表示取不到有效值。
                     * @param JNDIUrl 接口Url
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetJNDIUrl(const std::string& _jNDIUrl);

                    /**
                     * 判断参数 JNDIUrl 是否已赋值
                     * @return JNDIUrl 是否已赋值
                     */
                    bool JNDIUrlHasBeenSet() const;

                private:

                    /**
                     * 漏洞CVEID
                     */
                    std::string m_cVEID;
                    bool m_cVEIDHasBeenSet;

                    /**
                     * 漏洞名称
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * 漏洞PocID
                     */
                    std::string m_pocID;
                    bool m_pocIDHasBeenSet;

                    /**
                     * 入侵状态
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 攻击源IP
                     */
                    std::string m_sourceIP;
                    bool m_sourceIPHasBeenSet;

                    /**
                     * 攻击源ip地址所在城市
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 事件数量
                     */
                    int64_t m_eventCount;
                    bool m_eventCountHasBeenSet;

                    /**
                     * 容器ID
                     */
                    std::string m_containerID;
                    bool m_containerIDHasBeenSet;

                    /**
                     * 容器名称
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * 镜像ID
                     */
                    std::string m_imageID;
                    bool m_imageIDHasBeenSet;

                    /**
                     * 镜像名称
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 处理状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 攻击源端口
                     */
                    std::vector<std::string> m_sourcePort;
                    bool m_sourcePortHasBeenSet;

                    /**
                     * 事件ID
                     */
                    int64_t m_eventID;
                    bool m_eventIDHasBeenSet;

                    /**
                     * 主机名称
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 主机内网IP
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * 主机外网IP
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                    /**
                     * Pod名称
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * 危害描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 修复建议
                     */
                    std::string m_officialSolution;
                    bool m_officialSolutionHasBeenSet;

                    /**
                     * 攻击包
                     */
                    std::string m_networkPayload;
                    bool m_networkPayloadHasBeenSet;

                    /**
                     * 进程PID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pID;
                    bool m_pIDHasBeenSet;

                    /**
                     * 进程主类名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mainClass;
                    bool m_mainClassHasBeenSet;

                    /**
                     * 堆栈信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_stackTrace;
                    bool m_stackTraceHasBeenSet;

                    /**
                     * 监听账号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serverAccount;
                    bool m_serverAccountHasBeenSet;

                    /**
                     * 监听端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serverPort;
                    bool m_serverPortHasBeenSet;

                    /**
                     * 进程路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serverExe;
                    bool m_serverExeHasBeenSet;

                    /**
                     * 进程命令行参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serverArg;
                    bool m_serverArgHasBeenSet;

                    /**
                     * 主机QUUID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_qUUID;
                    bool m_qUUIDHasBeenSet;

                    /**
                     * 隔离状态
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

                    /**
                     * 容器状态
正在运行: RUNNING
暂停: PAUSED
停止: STOPPED
已经创建: CREATED
已经销毁: DESTROYED
正在重启中: RESTARTING
迁移中: REMOVING
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_containerStatus;
                    bool m_containerStatusHasBeenSet;

                    /**
                     * 接口Url
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jNDIUrl;
                    bool m_jNDIUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_VULDEFENCEEVENTDETAIL_H_
