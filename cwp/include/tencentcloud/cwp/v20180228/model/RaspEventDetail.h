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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RASPEVENTDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RASPEVENTDETAIL_H_

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
                * 应用防护事件详情
                */
                class RaspEventDetail : public AbstractModel
                {
                public:
                    RaspEventDetail();
                    ~RaspEventDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取漏洞事件id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 漏洞事件id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置漏洞事件id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 漏洞事件id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取状态 0: 待处理 1:已防御 2:已处理 3: 已忽略 4: 已删除 5: 已加白
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态 0: 待处理 1:已防御 2:已处理 3: 已忽略 4: 已删除 5: 已加白
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态 0: 待处理 1:已防御 2:已处理 3: 已忽略 4: 已删除 5: 已加白
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态 0: 待处理 1:已防御 2:已处理 3: 已忽略 4: 已删除 5: 已加白
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取机器quuid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Quuid 机器quuid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置机器quuid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _quuid 机器quuid
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
                     * 获取主机名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Alias 主机名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置主机名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alias 主机名
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceID 实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceID 实例id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取资产tag
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostTags 资产tag
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetHostTags() const;

                    /**
                     * 设置资产tag
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hostTags 资产tag
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
                     * 获取首次攻击时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 首次攻击时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置首次攻击时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 首次攻击时间
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
                     * 获取最近攻击时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MergeTime 最近攻击时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMergeTime() const;

                    /**
                     * 设置最近攻击时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mergeTime 最近攻击时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取应用攻击类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttackTypeName 应用攻击类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAttackTypeName() const;

                    /**
                     * 设置应用攻击类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attackTypeName 应用攻击类型
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttackType 应用攻击类型id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAttackType() const;

                    /**
                     * 设置应用攻击类型id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attackType 应用攻击类型id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取请求url
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Url 请求url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置请求url
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _url 请求url
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取漏洞名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VulName 漏洞名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置漏洞名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vulName 漏洞名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取攻击次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Count 攻击次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置攻击次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _count 攻击次数
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取cve编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CveId cve编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCveId() const;

                    /**
                     * 设置cve编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cveId cve编号
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceIp 攻击源ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceIp() const;

                    /**
                     * 设置攻击源ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceIp 攻击源ip
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return City 攻击源ip地址所在城市
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置攻击源ip地址所在城市
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _city 攻击源ip地址所在城市
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttackPort 被攻击的端口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAttackPort() const;

                    /**
                     * 设置被攻击的端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attackPort 被攻击的端口
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取漏洞描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 漏洞描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置漏洞描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 漏洞描述
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取修复方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Fix 修复方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFix() const;

                    /**
                     * 设置修复方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fix 修复方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFix(const std::string& _fix);

                    /**
                     * 判断参数 Fix 是否已赋值
                     * @return Fix 是否已赋值
                     * 
                     */
                    bool FixHasBeenSet() const;

                    /**
                     * 获取请求内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetworkPayload 请求内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNetworkPayload() const;

                    /**
                     * 设置请求内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _networkPayload 请求内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNetworkPayload(const std::string& _networkPayload);

                    /**
                     * 判断参数 NetworkPayload 是否已赋值
                     * @return NetworkPayload 是否已赋值
                     * 
                     */
                    bool NetworkPayloadHasBeenSet() const;

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

                    /**
                     * 获取进程id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Pid 进程id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置进程id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pid 进程id
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
                     * 获取关联进程主类名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MainClass 关联进程主类名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMainClass() const;

                    /**
                     * 设置关联进程主类名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mainClass 关联进程主类名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMainClass(const std::string& _mainClass);

                    /**
                     * 判断参数 MainClass 是否已赋值
                     * @return MainClass 是否已赋值
                     * 
                     */
                    bool MainClassHasBeenSet() const;

                    /**
                     * 获取堆栈信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StackTrace 堆栈信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStackTrace() const;

                    /**
                     * 设置堆栈信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stackTrace 堆栈信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStackTrace(const std::string& _stackTrace);

                    /**
                     * 判断参数 StackTrace 是否已赋值
                     * @return StackTrace 是否已赋值
                     * 
                     */
                    bool StackTraceHasBeenSet() const;

                    /**
                     * 获取漏洞ID相关的事件详情(json array格式 rasp特有)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RaspDetail 漏洞ID相关的事件详情(json array格式 rasp特有)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRaspDetail() const;

                    /**
                     * 设置漏洞ID相关的事件详情(json array格式 rasp特有)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _raspDetail 漏洞ID相关的事件详情(json array格式 rasp特有)
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取入侵状态： 1 攻击事件，2 防御成功
                     * @return EventType 入侵状态： 1 攻击事件，2 防御成功
                     * 
                     */
                    int64_t GetEventType() const;

                    /**
                     * 设置入侵状态： 1 攻击事件，2 防御成功
                     * @param _eventType 入侵状态： 1 攻击事件，2 防御成功
                     * 
                     */
                    void SetEventType(const int64_t& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                private:

                    /**
                     * 漏洞事件id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 状态 0: 待处理 1:已防御 2:已处理 3: 已忽略 4: 已删除 5: 已加白
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 机器quuid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 主机名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 实例id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 资产tag
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_hostTags;
                    bool m_hostTagsHasBeenSet;

                    /**
                     * 首次攻击时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最近攻击时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mergeTime;
                    bool m_mergeTimeHasBeenSet;

                    /**
                     * 应用攻击类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attackTypeName;
                    bool m_attackTypeNameHasBeenSet;

                    /**
                     * 应用攻击类型id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_attackType;
                    bool m_attackTypeHasBeenSet;

                    /**
                     * 请求url
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 漏洞名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * 攻击次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * cve编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cveId;
                    bool m_cveIdHasBeenSet;

                    /**
                     * 攻击源ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceIp;
                    bool m_sourceIpHasBeenSet;

                    /**
                     * 攻击源ip地址所在城市
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 被攻击的端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_attackPort;
                    bool m_attackPortHasBeenSet;

                    /**
                     * 漏洞描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 修复方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fix;
                    bool m_fixHasBeenSet;

                    /**
                     * 请求内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_networkPayload;
                    bool m_networkPayloadHasBeenSet;

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

                    /**
                     * 进程id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * 关联进程主类名
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
                     * 漏洞ID相关的事件详情(json array格式 rasp特有)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_raspDetail;
                    bool m_raspDetailHasBeenSet;

                    /**
                     * 入侵状态： 1 攻击事件，2 防御成功
                     */
                    int64_t m_eventType;
                    bool m_eventTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RASPEVENTDETAIL_H_
