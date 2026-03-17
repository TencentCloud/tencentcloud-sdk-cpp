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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RASPEVENT_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RASPEVENT_H_

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
                * 应用防护事件
                */
                class RaspEvent : public AbstractModel
                {
                public:
                    RaspEvent();
                    ~RaspEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取漏洞事件id
                     * @return Id 漏洞事件id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置漏洞事件id
                     * @param _id 漏洞事件id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取机器uuid
                     * @return Uuid 机器uuid
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置机器uuid
                     * @param _uuid 机器uuid
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取机器quuid
                     * @return Quuid 机器quuid
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置机器quuid
                     * @param _quuid 机器quuid
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
                     * 获取主机名
                     * @return Alias 主机名
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置主机名
                     * @param _alias 主机名
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
                     * @return PrivateIp 内网ip
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置内网ip
                     * @param _privateIp 内网ip
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
                     * @return PublicIp 公网ip
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置公网ip
                     * @param _publicIp 公网ip
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
                     * 获取漏洞ID
                     * @return VulId 漏洞ID
                     * 
                     */
                    uint64_t GetVulId() const;

                    /**
                     * 设置漏洞ID
                     * @param _vulId 漏洞ID
                     * 
                     */
                    void SetVulId(const uint64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取漏洞名称
                     * @return VulName 漏洞名称
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置漏洞名称
                     * @param _vulName 漏洞名称
                     * 
                     */
                    void SetVulName(const std::string& _vulName);

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     * 
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取cve编号
                     * @return CveId cve编号
                     * 
                     */
                    std::string GetCveId() const;

                    /**
                     * 设置cve编号
                     * @param _cveId cve编号
                     * 
                     */
                    void SetCveId(const std::string& _cveId);

                    /**
                     * 判断参数 CveId 是否已赋值
                     * @return CveId 是否已赋值
                     * 
                     */
                    bool CveIdHasBeenSet() const;

                    /**
                     * 获取攻击源ip
                     * @return SourceIp 攻击源ip
                     * 
                     */
                    std::string GetSourceIp() const;

                    /**
                     * 设置攻击源ip
                     * @param _sourceIp 攻击源ip
                     * 
                     */
                    void SetSourceIp(const std::string& _sourceIp);

                    /**
                     * 判断参数 SourceIp 是否已赋值
                     * @return SourceIp 是否已赋值
                     * 
                     */
                    bool SourceIpHasBeenSet() const;

                    /**
                     * 获取攻击源ip地址所在城市
                     * @return City 攻击源ip地址所在城市
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置攻击源ip地址所在城市
                     * @param _city 攻击源ip地址所在城市
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取被攻击的端口
                     * @return AttackPort 被攻击的端口
                     * 
                     */
                    uint64_t GetAttackPort() const;

                    /**
                     * 设置被攻击的端口
                     * @param _attackPort 被攻击的端口
                     * 
                     */
                    void SetAttackPort(const uint64_t& _attackPort);

                    /**
                     * 判断参数 AttackPort 是否已赋值
                     * @return AttackPort 是否已赋值
                     * 
                     */
                    bool AttackPortHasBeenSet() const;

                    /**
                     * 获取首次攻击时间
                     * @return CreateTime 首次攻击时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置首次攻击时间
                     * @param _createTime 首次攻击时间
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
                     * 获取最近攻击时间
                     * @return MergeTime 最近攻击时间
                     * 
                     */
                    std::string GetMergeTime() const;

                    /**
                     * 设置最近攻击时间
                     * @param _mergeTime 最近攻击时间
                     * 
                     */
                    void SetMergeTime(const std::string& _mergeTime);

                    /**
                     * 判断参数 MergeTime 是否已赋值
                     * @return MergeTime 是否已赋值
                     * 
                     */
                    bool MergeTimeHasBeenSet() const;

                    /**
                     * 获取攻击次数
                     * @return Count 攻击次数
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置攻击次数
                     * @param _count 攻击次数
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取状态 0: 待处理 1:已防御 2:已处理 3: 已忽略 4: 已删除 5: 已加白
                     * @return Status 状态 0: 待处理 1:已防御 2:已处理 3: 已忽略 4: 已删除 5: 已加白
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态 0: 待处理 1:已防御 2:已处理 3: 已忽略 4: 已删除 5: 已加白
                     * @param _status 状态 0: 待处理 1:已防御 2:已处理 3: 已忽略 4: 已删除 5: 已加白
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取应用攻击类型
                     * @return AttackTypeName 应用攻击类型
                     * 
                     */
                    std::string GetAttackTypeName() const;

                    /**
                     * 设置应用攻击类型
                     * @param _attackTypeName 应用攻击类型
                     * 
                     */
                    void SetAttackTypeName(const std::string& _attackTypeName);

                    /**
                     * 判断参数 AttackTypeName 是否已赋值
                     * @return AttackTypeName 是否已赋值
                     * 
                     */
                    bool AttackTypeNameHasBeenSet() const;

                    /**
                     * 获取应用攻击类型id
                     * @return AttackType 应用攻击类型id
                     * 
                     */
                    int64_t GetAttackType() const;

                    /**
                     * 设置应用攻击类型id
                     * @param _attackType 应用攻击类型id
                     * 
                     */
                    void SetAttackType(const int64_t& _attackType);

                    /**
                     * 判断参数 AttackType 是否已赋值
                     * @return AttackType 是否已赋值
                     * 
                     */
                    bool AttackTypeHasBeenSet() const;

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
                     * 获取事件详情，包括poc
                     * @return RaspDetail 事件详情，包括poc
                     * 
                     */
                    std::string GetRaspDetail() const;

                    /**
                     * 设置事件详情，包括poc
                     * @param _raspDetail 事件详情，包括poc
                     * 
                     */
                    void SetRaspDetail(const std::string& _raspDetail);

                    /**
                     * 判断参数 RaspDetail 是否已赋值
                     * @return RaspDetail 是否已赋值
                     * 
                     */
                    bool RaspDetailHasBeenSet() const;

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
                     * 获取事件类型 1:攻击时间 2:防御成功
                     * @return EventType 事件类型 1:攻击时间 2:防御成功
                     * 
                     */
                    int64_t GetEventType() const;

                    /**
                     * 设置事件类型 1:攻击时间 2:防御成功
                     * @param _eventType 事件类型 1:攻击时间 2:防御成功
                     * 
                     */
                    void SetEventType(const int64_t& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取超级节点的唯一id
                     * @return NodeUniqueID 超级节点的唯一id
                     * 
                     */
                    std::string GetNodeUniqueID() const;

                    /**
                     * 设置超级节点的唯一id
                     * @param _nodeUniqueID 超级节点的唯一id
                     * 
                     */
                    void SetNodeUniqueID(const std::string& _nodeUniqueID);

                    /**
                     * 判断参数 NodeUniqueID 是否已赋值
                     * @return NodeUniqueID 是否已赋值
                     * 
                     */
                    bool NodeUniqueIDHasBeenSet() const;

                    /**
                     * 获取poc id
                     * @return PocID poc id
                     * 
                     */
                    std::string GetPocID() const;

                    /**
                     * 设置poc id
                     * @param _pocID poc id
                     * 
                     */
                    void SetPocID(const std::string& _pocID);

                    /**
                     * 判断参数 PocID 是否已赋值
                     * @return PocID 是否已赋值
                     * 
                     */
                    bool PocIDHasBeenSet() const;

                    /**
                     * 获取请求url
                     * @return Url 请求url
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置请求url
                     * @param _url 请求url
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取恶意特征
                     * @return Poc 恶意特征
                     * 
                     */
                    std::string GetPoc() const;

                    /**
                     * 设置恶意特征
                     * @param _poc 恶意特征
                     * 
                     */
                    void SetPoc(const std::string& _poc);

                    /**
                     * 判断参数 Poc 是否已赋值
                     * @return Poc 是否已赋值
                     * 
                     */
                    bool PocHasBeenSet() const;

                private:

                    /**
                     * 漏洞事件id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 机器uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 机器quuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 主机名
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
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * 公网ip
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * 漏洞ID
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * 漏洞名称
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * cve编号
                     */
                    std::string m_cveId;
                    bool m_cveIdHasBeenSet;

                    /**
                     * 攻击源ip
                     */
                    std::string m_sourceIp;
                    bool m_sourceIpHasBeenSet;

                    /**
                     * 攻击源ip地址所在城市
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 被攻击的端口
                     */
                    uint64_t m_attackPort;
                    bool m_attackPortHasBeenSet;

                    /**
                     * 首次攻击时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最近攻击时间
                     */
                    std::string m_mergeTime;
                    bool m_mergeTimeHasBeenSet;

                    /**
                     * 攻击次数
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 状态 0: 待处理 1:已防御 2:已处理 3: 已忽略 4: 已删除 5: 已加白
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 应用攻击类型
                     */
                    std::string m_attackTypeName;
                    bool m_attackTypeNameHasBeenSet;

                    /**
                     * 应用攻击类型id
                     */
                    int64_t m_attackType;
                    bool m_attackTypeHasBeenSet;

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
                     * 事件详情，包括poc
                     */
                    std::string m_raspDetail;
                    bool m_raspDetailHasBeenSet;

                    /**
                     * 普通节点：NORMAL
超级节点：SUPER
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 事件类型 1:攻击时间 2:防御成功
                     */
                    int64_t m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 超级节点的唯一id
                     */
                    std::string m_nodeUniqueID;
                    bool m_nodeUniqueIDHasBeenSet;

                    /**
                     * poc id
                     */
                    std::string m_pocID;
                    bool m_pocIDHasBeenSet;

                    /**
                     * 请求url
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 恶意特征
                     */
                    std::string m_poc;
                    bool m_pocHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RASPEVENT_H_
