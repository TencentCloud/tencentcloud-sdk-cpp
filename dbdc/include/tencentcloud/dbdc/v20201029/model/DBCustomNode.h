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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_DBCUSTOMNODE_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_DBCUSTOMNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbdc/v20201029/model/SystemDisk.h>
#include <tencentcloud/dbdc/v20201029/model/DataDisk.h>
#include <tencentcloud/dbdc/v20201029/model/Tag.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * DB Custom 节点信息。
                */
                class DBCustomNode : public AbstractModel
                {
                public:
                    DBCustomNode();
                    ~DBCustomNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>节点ID</p>
                     * @return NodeId <p>节点ID</p>
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置<p>节点ID</p>
                     * @param _nodeId <p>节点ID</p>
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
                     * 获取<p>节点名称</p>
                     * @return NodeName <p>节点名称</p>
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置<p>节点名称</p>
                     * @param _nodeName <p>节点名称</p>
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
                     * 获取<p>访问此节点的SSH Endpoint，格式为IP:Port</p>
                     * @return SSHEndpoint <p>访问此节点的SSH Endpoint，格式为IP:Port</p>
                     * 
                     */
                    std::string GetSSHEndpoint() const;

                    /**
                     * 设置<p>访问此节点的SSH Endpoint，格式为IP:Port</p>
                     * @param _sSHEndpoint <p>访问此节点的SSH Endpoint，格式为IP:Port</p>
                     * 
                     */
                    void SetSSHEndpoint(const std::string& _sSHEndpoint);

                    /**
                     * 判断参数 SSHEndpoint 是否已赋值
                     * @return SSHEndpoint 是否已赋值
                     * 
                     */
                    bool SSHEndpointHasBeenSet() const;

                    /**
                     * 获取<p>节点的内网通信IP地址</p>
                     * @return LanIP <p>节点的内网通信IP地址</p>
                     * 
                     */
                    std::string GetLanIP() const;

                    /**
                     * 设置<p>节点的内网通信IP地址</p>
                     * @param _lanIP <p>节点的内网通信IP地址</p>
                     * 
                     */
                    void SetLanIP(const std::string& _lanIP);

                    /**
                     * 判断参数 LanIP 是否已赋值
                     * @return LanIP 是否已赋值
                     * 
                     */
                    bool LanIPHasBeenSet() const;

                    /**
                     * 获取<p>节点所属的集群ID</p>
                     * @return ClusterId <p>节点所属的集群ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>节点所属的集群ID</p>
                     * @param _clusterId <p>节点所属的集群ID</p>
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
                     * 获取<p>节点所属的可用区</p>
                     * @return Zone <p>节点所属的可用区</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>节点所属的可用区</p>
                     * @param _zone <p>节点所属的可用区</p>
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>节点类型</p><p>枚举值：</p><ul><li>DB.AT5.32XLARGE512： 高IO型服务器：128核心512GB内存，8*7180GB本地NvME SSDB。</li><li>DB.AT5.64XLARGE1152： 高IO型服务器：256核心1152GB内存，12*7180GB本地NvME SSDB。</li><li>DB.AT5.128XLARGE2304： 高IO型服务器：512核心2304GB内存，24*7180GB本地NvME SSDB。</li><li>DB.AT5.16XLARGE256： 高IO型服务器：64核心256GB内存，4*7180GB本地NvME SSDB。</li><li>DB.AT5.8XLARGE128： 高IO型服务器：32核心128GB内存，2*7180GB本地NvME SSDB。</li></ul>
                     * @return NodeType <p>节点类型</p><p>枚举值：</p><ul><li>DB.AT5.32XLARGE512： 高IO型服务器：128核心512GB内存，8*7180GB本地NvME SSDB。</li><li>DB.AT5.64XLARGE1152： 高IO型服务器：256核心1152GB内存，12*7180GB本地NvME SSDB。</li><li>DB.AT5.128XLARGE2304： 高IO型服务器：512核心2304GB内存，24*7180GB本地NvME SSDB。</li><li>DB.AT5.16XLARGE256： 高IO型服务器：64核心256GB内存，4*7180GB本地NvME SSDB。</li><li>DB.AT5.8XLARGE128： 高IO型服务器：32核心128GB内存，2*7180GB本地NvME SSDB。</li></ul>
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置<p>节点类型</p><p>枚举值：</p><ul><li>DB.AT5.32XLARGE512： 高IO型服务器：128核心512GB内存，8*7180GB本地NvME SSDB。</li><li>DB.AT5.64XLARGE1152： 高IO型服务器：256核心1152GB内存，12*7180GB本地NvME SSDB。</li><li>DB.AT5.128XLARGE2304： 高IO型服务器：512核心2304GB内存，24*7180GB本地NvME SSDB。</li><li>DB.AT5.16XLARGE256： 高IO型服务器：64核心256GB内存，4*7180GB本地NvME SSDB。</li><li>DB.AT5.8XLARGE128： 高IO型服务器：32核心128GB内存，2*7180GB本地NvME SSDB。</li></ul>
                     * @param _nodeType <p>节点类型</p><p>枚举值：</p><ul><li>DB.AT5.32XLARGE512： 高IO型服务器：128核心512GB内存，8*7180GB本地NvME SSDB。</li><li>DB.AT5.64XLARGE1152： 高IO型服务器：256核心1152GB内存，12*7180GB本地NvME SSDB。</li><li>DB.AT5.128XLARGE2304： 高IO型服务器：512核心2304GB内存，24*7180GB本地NvME SSDB。</li><li>DB.AT5.16XLARGE256： 高IO型服务器：64核心256GB内存，4*7180GB本地NvME SSDB。</li><li>DB.AT5.8XLARGE128： 高IO型服务器：32核心128GB内存，2*7180GB本地NvME SSDB。</li></ul>
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
                     * 获取<p>节点CPU大小</p><p>单位：核</p>
                     * @return CPU <p>节点CPU大小</p><p>单位：核</p>
                     * 
                     */
                    int64_t GetCPU() const;

                    /**
                     * 设置<p>节点CPU大小</p><p>单位：核</p>
                     * @param _cPU <p>节点CPU大小</p><p>单位：核</p>
                     * 
                     */
                    void SetCPU(const int64_t& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     * 
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取<p>节点内存</p><p>单位：GiB</p>
                     * @return Memory <p>节点内存</p><p>单位：GiB</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>节点内存</p><p>单位：GiB</p>
                     * @param _memory <p>节点内存</p><p>单位：GiB</p>
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取<p>系统盘信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SystemDisk <p>系统盘信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置<p>系统盘信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _systemDisk <p>系统盘信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSystemDisk(const SystemDisk& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     * 
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取<p>数据盘信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataDisks <p>数据盘信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置<p>数据盘信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataDisks <p>数据盘信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataDisks(const std::vector<DataDisk>& _dataDisks);

                    /**
                     * 判断参数 DataDisks 是否已赋值
                     * @return DataDisks 是否已赋值
                     * 
                     */
                    bool DataDisksHasBeenSet() const;

                    /**
                     * 获取<p>节点的操作系统名称</p>
                     * @return OsName <p>节点的操作系统名称</p>
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置<p>节点的操作系统名称</p>
                     * @param _osName <p>节点的操作系统名称</p>
                     * 
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     * 
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取<p>节点的操作系统镜像ID</p>
                     * @return ImageId <p>节点的操作系统镜像ID</p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>节点的操作系统镜像ID</p>
                     * @param _imageId <p>节点的操作系统镜像ID</p>
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
                     * 获取<p>节点SSH Endpoint 所属的VPC ID</p>
                     * @return VpcId <p>节点SSH Endpoint 所属的VPC ID</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>节点SSH Endpoint 所属的VPC ID</p>
                     * @param _vpcId <p>节点SSH Endpoint 所属的VPC ID</p>
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>节点SSH Endpoint 所属的VPC 子网ID</p>
                     * @return SubnetId <p>节点SSH Endpoint 所属的VPC 子网ID</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>节点SSH Endpoint 所属的VPC 子网ID</p>
                     * @param _subnetId <p>节点SSH Endpoint 所属的VPC 子网ID</p>
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>节点状态</p><p>枚举值：</p><ul><li>Creating： 创建中</li><li>Running： 运行中</li><li>Isolating： 隔离中</li><li>Isolated： 已隔离</li><li>Activating： 解除隔离中</li><li>Destroying： 销毁中</li></ul>
                     * @return Status <p>节点状态</p><p>枚举值：</p><ul><li>Creating： 创建中</li><li>Running： 运行中</li><li>Isolating： 隔离中</li><li>Isolated： 已隔离</li><li>Activating： 解除隔离中</li><li>Destroying： 销毁中</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>节点状态</p><p>枚举值：</p><ul><li>Creating： 创建中</li><li>Running： 运行中</li><li>Isolating： 隔离中</li><li>Isolated： 已隔离</li><li>Activating： 解除隔离中</li><li>Destroying： 销毁中</li></ul>
                     * @param _status <p>节点状态</p><p>枚举值：</p><ul><li>Creating： 创建中</li><li>Running： 运行中</li><li>Isolating： 隔离中</li><li>Isolated： 已隔离</li><li>Activating： 解除隔离中</li><li>Destroying： 销毁中</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>付费类型</p><p>枚举值：</p><ul><li>PREPAID： 包年包月</li></ul>
                     * @return ChargeType <p>付费类型</p><p>枚举值：</p><ul><li>PREPAID： 包年包月</li></ul>
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置<p>付费类型</p><p>枚举值：</p><ul><li>PREPAID： 包年包月</li></ul>
                     * @param _chargeType <p>付费类型</p><p>枚举值：</p><ul><li>PREPAID： 包年包月</li></ul>
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>节点到期时间</p>
                     * @return ExpireTime <p>节点到期时间</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>节点到期时间</p>
                     * @param _expireTime <p>节点到期时间</p>
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>节点创建时间</p>
                     * @return CreatedTime <p>节点创建时间</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>节点创建时间</p>
                     * @param _createdTime <p>节点创建时间</p>
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>节点隔离时间</p>
                     * @return IsolatedTime <p>节点隔离时间</p>
                     * 
                     */
                    std::string GetIsolatedTime() const;

                    /**
                     * 设置<p>节点隔离时间</p>
                     * @param _isolatedTime <p>节点隔离时间</p>
                     * 
                     */
                    void SetIsolatedTime(const std::string& _isolatedTime);

                    /**
                     * 判断参数 IsolatedTime 是否已赋值
                     * @return IsolatedTime 是否已赋值
                     * 
                     */
                    bool IsolatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>节点标签信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>节点标签信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>节点标签信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags <p>节点标签信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>节点是否自动续费标记</p><p>枚举值：</p><ul><li>1： 自动续费</li><li>0： 不自动续费</li></ul>
                     * @return AutoRenew <p>节点是否自动续费标记</p><p>枚举值：</p><ul><li>1： 自动续费</li><li>0： 不自动续费</li></ul>
                     * 
                     */
                    int64_t GetAutoRenew() const;

                    /**
                     * 设置<p>节点是否自动续费标记</p><p>枚举值：</p><ul><li>1： 自动续费</li><li>0： 不自动续费</li></ul>
                     * @param _autoRenew <p>节点是否自动续费标记</p><p>枚举值：</p><ul><li>1： 自动续费</li><li>0： 不自动续费</li></ul>
                     * 
                     */
                    void SetAutoRenew(const int64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取<p>交换机ID（已加密）</p>
                     * @return SwitchId <p>交换机ID（已加密）</p>
                     * 
                     */
                    std::string GetSwitchId() const;

                    /**
                     * 设置<p>交换机ID（已加密）</p>
                     * @param _switchId <p>交换机ID（已加密）</p>
                     * 
                     */
                    void SetSwitchId(const std::string& _switchId);

                    /**
                     * 判断参数 SwitchId 是否已赋值
                     * @return SwitchId 是否已赋值
                     * 
                     */
                    bool SwitchIdHasBeenSet() const;

                    /**
                     * 获取<p>机架ID（已加密）</p>
                     * @return RackId <p>机架ID（已加密）</p>
                     * 
                     */
                    std::string GetRackId() const;

                    /**
                     * 设置<p>机架ID（已加密）</p>
                     * @param _rackId <p>机架ID（已加密）</p>
                     * 
                     */
                    void SetRackId(const std::string& _rackId);

                    /**
                     * 判断参数 RackId 是否已赋值
                     * @return RackId 是否已赋值
                     * 
                     */
                    bool RackIdHasBeenSet() const;

                    /**
                     * 获取<p>底层物理机IP（已加密）</p>
                     * @return HostIp <p>底层物理机IP（已加密）</p>
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置<p>底层物理机IP（已加密）</p>
                     * @param _hostIp <p>底层物理机IP（已加密）</p>
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                private:

                    /**
                     * <p>节点ID</p>
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * <p>节点名称</p>
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * <p>访问此节点的SSH Endpoint，格式为IP:Port</p>
                     */
                    std::string m_sSHEndpoint;
                    bool m_sSHEndpointHasBeenSet;

                    /**
                     * <p>节点的内网通信IP地址</p>
                     */
                    std::string m_lanIP;
                    bool m_lanIPHasBeenSet;

                    /**
                     * <p>节点所属的集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>节点所属的可用区</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>节点类型</p><p>枚举值：</p><ul><li>DB.AT5.32XLARGE512： 高IO型服务器：128核心512GB内存，8*7180GB本地NvME SSDB。</li><li>DB.AT5.64XLARGE1152： 高IO型服务器：256核心1152GB内存，12*7180GB本地NvME SSDB。</li><li>DB.AT5.128XLARGE2304： 高IO型服务器：512核心2304GB内存，24*7180GB本地NvME SSDB。</li><li>DB.AT5.16XLARGE256： 高IO型服务器：64核心256GB内存，4*7180GB本地NvME SSDB。</li><li>DB.AT5.8XLARGE128： 高IO型服务器：32核心128GB内存，2*7180GB本地NvME SSDB。</li></ul>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * <p>节点CPU大小</p><p>单位：核</p>
                     */
                    int64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * <p>节点内存</p><p>单位：GiB</p>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>系统盘信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * <p>数据盘信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * <p>节点的操作系统名称</p>
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * <p>节点的操作系统镜像ID</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>节点SSH Endpoint 所属的VPC ID</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>节点SSH Endpoint 所属的VPC 子网ID</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>节点状态</p><p>枚举值：</p><ul><li>Creating： 创建中</li><li>Running： 运行中</li><li>Isolating： 隔离中</li><li>Isolated： 已隔离</li><li>Activating： 解除隔离中</li><li>Destroying： 销毁中</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>付费类型</p><p>枚举值：</p><ul><li>PREPAID： 包年包月</li></ul>
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * <p>节点到期时间</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>节点创建时间</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>节点隔离时间</p>
                     */
                    std::string m_isolatedTime;
                    bool m_isolatedTimeHasBeenSet;

                    /**
                     * <p>节点标签信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>节点是否自动续费标记</p><p>枚举值：</p><ul><li>1： 自动续费</li><li>0： 不自动续费</li></ul>
                     */
                    int64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * <p>交换机ID（已加密）</p>
                     */
                    std::string m_switchId;
                    bool m_switchIdHasBeenSet;

                    /**
                     * <p>机架ID（已加密）</p>
                     */
                    std::string m_rackId;
                    bool m_rackIdHasBeenSet;

                    /**
                     * <p>底层物理机IP（已加密）</p>
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_DBCUSTOMNODE_H_
