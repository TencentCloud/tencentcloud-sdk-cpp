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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_CLUSTERINFO_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_CLUSTERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ServerDetailInfo.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ProxyDetailInfo.h>
#include <tencentcloud/tcaplusdb/v20190823/model/KafkaInfo.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * 集群详细信息
                */
                class ClusterInfo : public AbstractModel
                {
                public:
                    ClusterInfo();
                    ~ClusterInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
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
                     * 获取集群所在地域
                     * @return Region 集群所在地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置集群所在地域
                     * @param _region 集群所在地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取集群数据描述语言类型，如：`PROTO`,`TDR`
                     * @return IdlType 集群数据描述语言类型，如：`PROTO`,`TDR`
                     * 
                     */
                    std::string GetIdlType() const;

                    /**
                     * 设置集群数据描述语言类型，如：`PROTO`,`TDR`
                     * @param _idlType 集群数据描述语言类型，如：`PROTO`,`TDR`
                     * 
                     */
                    void SetIdlType(const std::string& _idlType);

                    /**
                     * 判断参数 IdlType 是否已赋值
                     * @return IdlType 是否已赋值
                     * 
                     */
                    bool IdlTypeHasBeenSet() const;

                    /**
                     * 获取网络类型
                     * @return NetworkType 网络类型
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置网络类型
                     * @param _networkType 网络类型
                     * 
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     * 
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取集群关联的用户私有网络实例ID
                     * @return VpcId 集群关联的用户私有网络实例ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置集群关联的用户私有网络实例ID
                     * @param _vpcId 集群关联的用户私有网络实例ID
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
                     * 获取集群关联的用户子网实例ID
                     * @return SubnetId 集群关联的用户子网实例ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置集群关联的用户子网实例ID
                     * @param _subnetId 集群关联的用户子网实例ID
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
                     * 获取创建时间
                     * @return CreatedTime 创建时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间
                     * @param _createdTime 创建时间
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
                     * 获取集群密码
                     * @return Password 集群密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置集群密码
                     * @param _password 集群密码
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取密码状态
                     * @return PasswordStatus 密码状态
                     * 
                     */
                    std::string GetPasswordStatus() const;

                    /**
                     * 设置密码状态
                     * @param _passwordStatus 密码状态
                     * 
                     */
                    void SetPasswordStatus(const std::string& _passwordStatus);

                    /**
                     * 判断参数 PasswordStatus 是否已赋值
                     * @return PasswordStatus 是否已赋值
                     * 
                     */
                    bool PasswordStatusHasBeenSet() const;

                    /**
                     * 获取TcaplusDB SDK连接参数，接入ID
                     * @return ApiAccessId TcaplusDB SDK连接参数，接入ID
                     * 
                     */
                    std::string GetApiAccessId() const;

                    /**
                     * 设置TcaplusDB SDK连接参数，接入ID
                     * @param _apiAccessId TcaplusDB SDK连接参数，接入ID
                     * 
                     */
                    void SetApiAccessId(const std::string& _apiAccessId);

                    /**
                     * 判断参数 ApiAccessId 是否已赋值
                     * @return ApiAccessId 是否已赋值
                     * 
                     */
                    bool ApiAccessIdHasBeenSet() const;

                    /**
                     * 获取TcaplusDB SDK连接参数，接入地址
                     * @return ApiAccessIp TcaplusDB SDK连接参数，接入地址
                     * 
                     */
                    std::string GetApiAccessIp() const;

                    /**
                     * 设置TcaplusDB SDK连接参数，接入地址
                     * @param _apiAccessIp TcaplusDB SDK连接参数，接入地址
                     * 
                     */
                    void SetApiAccessIp(const std::string& _apiAccessIp);

                    /**
                     * 判断参数 ApiAccessIp 是否已赋值
                     * @return ApiAccessIp 是否已赋值
                     * 
                     */
                    bool ApiAccessIpHasBeenSet() const;

                    /**
                     * 获取TcaplusDB SDK连接参数，接入端口
                     * @return ApiAccessPort TcaplusDB SDK连接参数，接入端口
                     * 
                     */
                    int64_t GetApiAccessPort() const;

                    /**
                     * 设置TcaplusDB SDK连接参数，接入端口
                     * @param _apiAccessPort TcaplusDB SDK连接参数，接入端口
                     * 
                     */
                    void SetApiAccessPort(const int64_t& _apiAccessPort);

                    /**
                     * 判断参数 ApiAccessPort 是否已赋值
                     * @return ApiAccessPort 是否已赋值
                     * 
                     */
                    bool ApiAccessPortHasBeenSet() const;

                    /**
                     * 获取如果PasswordStatus是unmodifiable说明有旧密码还未过期，此字段将显示旧密码过期的时间，否则为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OldPasswordExpireTime 如果PasswordStatus是unmodifiable说明有旧密码还未过期，此字段将显示旧密码过期的时间，否则为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOldPasswordExpireTime() const;

                    /**
                     * 设置如果PasswordStatus是unmodifiable说明有旧密码还未过期，此字段将显示旧密码过期的时间，否则为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _oldPasswordExpireTime 如果PasswordStatus是unmodifiable说明有旧密码还未过期，此字段将显示旧密码过期的时间，否则为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOldPasswordExpireTime(const std::string& _oldPasswordExpireTime);

                    /**
                     * 判断参数 OldPasswordExpireTime 是否已赋值
                     * @return OldPasswordExpireTime 是否已赋值
                     * 
                     */
                    bool OldPasswordExpireTimeHasBeenSet() const;

                    /**
                     * 获取TcaplusDB SDK连接参数，接入ipv6地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiAccessIpv6 TcaplusDB SDK连接参数，接入ipv6地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiAccessIpv6() const;

                    /**
                     * 设置TcaplusDB SDK连接参数，接入ipv6地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiAccessIpv6 TcaplusDB SDK连接参数，接入ipv6地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApiAccessIpv6(const std::string& _apiAccessIpv6);

                    /**
                     * 判断参数 ApiAccessIpv6 是否已赋值
                     * @return ApiAccessIpv6 是否已赋值
                     * 
                     */
                    bool ApiAccessIpv6HasBeenSet() const;

                    /**
                     * 获取集群类型，0,1:共享集群; 2:独立集群
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterType 集群类型，0,1:共享集群; 2:独立集群
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetClusterType() const;

                    /**
                     * 设置集群类型，0,1:共享集群; 2:独立集群
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterType 集群类型，0,1:共享集群; 2:独立集群
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterType(const int64_t& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取集群状态, 0：表示正常运行中，1：表示冻结隔离一般欠费进入此状态，2：表示待回收，一般用户主动触发删除进入这个状态，3：待释放，进入这个状态，表示可以释放此表占用的资源了，4：变更中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterStatus 集群状态, 0：表示正常运行中，1：表示冻结隔离一般欠费进入此状态，2：表示待回收，一般用户主动触发删除进入这个状态，3：待释放，进入这个状态，表示可以释放此表占用的资源了，4：变更中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetClusterStatus() const;

                    /**
                     * 设置集群状态, 0：表示正常运行中，1：表示冻结隔离一般欠费进入此状态，2：表示待回收，一般用户主动触发删除进入这个状态，3：待释放，进入这个状态，表示可以释放此表占用的资源了，4：变更中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterStatus 集群状态, 0：表示正常运行中，1：表示冻结隔离一般欠费进入此状态，2：表示待回收，一般用户主动触发删除进入这个状态，3：待释放，进入这个状态，表示可以释放此表占用的资源了，4：变更中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterStatus(const int64_t& _clusterStatus);

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     * 
                     */
                    bool ClusterStatusHasBeenSet() const;

                    /**
                     * 获取读CU
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReadCapacityUnit 读CU
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetReadCapacityUnit() const;

                    /**
                     * 设置读CU
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _readCapacityUnit 读CU
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReadCapacityUnit(const int64_t& _readCapacityUnit);

                    /**
                     * 判断参数 ReadCapacityUnit 是否已赋值
                     * @return ReadCapacityUnit 是否已赋值
                     * 
                     */
                    bool ReadCapacityUnitHasBeenSet() const;

                    /**
                     * 获取写CU
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WriteCapacityUnit 写CU
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWriteCapacityUnit() const;

                    /**
                     * 设置写CU
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _writeCapacityUnit 写CU
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWriteCapacityUnit(const int64_t& _writeCapacityUnit);

                    /**
                     * 判断参数 WriteCapacityUnit 是否已赋值
                     * @return WriteCapacityUnit 是否已赋值
                     * 
                     */
                    bool WriteCapacityUnitHasBeenSet() const;

                    /**
                     * 获取磁盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskVolume 磁盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDiskVolume() const;

                    /**
                     * 设置磁盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diskVolume 磁盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiskVolume(const int64_t& _diskVolume);

                    /**
                     * 判断参数 DiskVolume 是否已赋值
                     * @return DiskVolume 是否已赋值
                     * 
                     */
                    bool DiskVolumeHasBeenSet() const;

                    /**
                     * 获取独占server机器信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServerList 独占server机器信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ServerDetailInfo> GetServerList() const;

                    /**
                     * 设置独占server机器信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serverList 独占server机器信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServerList(const std::vector<ServerDetailInfo>& _serverList);

                    /**
                     * 判断参数 ServerList 是否已赋值
                     * @return ServerList 是否已赋值
                     * 
                     */
                    bool ServerListHasBeenSet() const;

                    /**
                     * 获取独占proxy机器信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxyList 独占proxy机器信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ProxyDetailInfo> GetProxyList() const;

                    /**
                     * 设置独占proxy机器信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _proxyList 独占proxy机器信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProxyList(const std::vector<ProxyDetailInfo>& _proxyList);

                    /**
                     * 判断参数 ProxyList 是否已赋值
                     * @return ProxyList 是否已赋值
                     * 
                     */
                    bool ProxyListHasBeenSet() const;

                    /**
                     * 获取是否开启审核 0-不开启 1-开启
                     * @return Censorship 是否开启审核 0-不开启 1-开启
                     * 
                     */
                    int64_t GetCensorship() const;

                    /**
                     * 设置是否开启审核 0-不开启 1-开启
                     * @param _censorship 是否开启审核 0-不开启 1-开启
                     * 
                     */
                    void SetCensorship(const int64_t& _censorship);

                    /**
                     * 判断参数 Censorship 是否已赋值
                     * @return Censorship 是否已赋值
                     * 
                     */
                    bool CensorshipHasBeenSet() const;

                    /**
                     * 获取审批人uin列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DbaUins 审批人uin列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetDbaUins() const;

                    /**
                     * 设置审批人uin列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dbaUins 审批人uin列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDbaUins(const std::vector<std::string>& _dbaUins);

                    /**
                     * 判断参数 DbaUins 是否已赋值
                     * @return DbaUins 是否已赋值
                     * 
                     */
                    bool DbaUinsHasBeenSet() const;

                    /**
                     * 获取是否开启了数据订阅
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataFlowStatus 是否开启了数据订阅
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDataFlowStatus() const;

                    /**
                     * 设置是否开启了数据订阅
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataFlowStatus 是否开启了数据订阅
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataFlowStatus(const int64_t& _dataFlowStatus);

                    /**
                     * 判断参数 DataFlowStatus 是否已赋值
                     * @return DataFlowStatus 是否已赋值
                     * 
                     */
                    bool DataFlowStatusHasBeenSet() const;

                    /**
                     * 获取数据订阅的kafka信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KafkaInfo 数据订阅的kafka信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KafkaInfo GetKafkaInfo() const;

                    /**
                     * 设置数据订阅的kafka信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kafkaInfo 数据订阅的kafka信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKafkaInfo(const KafkaInfo& _kafkaInfo);

                    /**
                     * 判断参数 KafkaInfo 是否已赋值
                     * @return KafkaInfo 是否已赋值
                     * 
                     */
                    bool KafkaInfoHasBeenSet() const;

                    /**
                     * 获取集群Txh备份文件多少天后过期删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TxhBackupExpireDay 集群Txh备份文件多少天后过期删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTxhBackupExpireDay() const;

                    /**
                     * 设置集群Txh备份文件多少天后过期删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _txhBackupExpireDay 集群Txh备份文件多少天后过期删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTxhBackupExpireDay(const uint64_t& _txhBackupExpireDay);

                    /**
                     * 判断参数 TxhBackupExpireDay 是否已赋值
                     * @return TxhBackupExpireDay 是否已赋值
                     * 
                     */
                    bool TxhBackupExpireDayHasBeenSet() const;

                    /**
                     * 获取集群Ulog备份文件多少天后过期删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UlogBackupExpireDay 集群Ulog备份文件多少天后过期删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetUlogBackupExpireDay() const;

                    /**
                     * 设置集群Ulog备份文件多少天后过期删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ulogBackupExpireDay 集群Ulog备份文件多少天后过期删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUlogBackupExpireDay(const uint64_t& _ulogBackupExpireDay);

                    /**
                     * 判断参数 UlogBackupExpireDay 是否已赋值
                     * @return UlogBackupExpireDay 是否已赋值
                     * 
                     */
                    bool UlogBackupExpireDayHasBeenSet() const;

                    /**
                     * 获取集群Ulog备份文件过期策略是否为只读， 0： UlogBackupExpire是只读，不可修改， 1： UlogBackupExpire可以修改（当前业务存在Svrid第二段等于clusterid的机器）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsReadOnlyUlogBackupExpireDay 集群Ulog备份文件过期策略是否为只读， 0： UlogBackupExpire是只读，不可修改， 1： UlogBackupExpire可以修改（当前业务存在Svrid第二段等于clusterid的机器）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIsReadOnlyUlogBackupExpireDay() const;

                    /**
                     * 设置集群Ulog备份文件过期策略是否为只读， 0： UlogBackupExpire是只读，不可修改， 1： UlogBackupExpire可以修改（当前业务存在Svrid第二段等于clusterid的机器）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isReadOnlyUlogBackupExpireDay 集群Ulog备份文件过期策略是否为只读， 0： UlogBackupExpire是只读，不可修改， 1： UlogBackupExpire可以修改（当前业务存在Svrid第二段等于clusterid的机器）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsReadOnlyUlogBackupExpireDay(const uint64_t& _isReadOnlyUlogBackupExpireDay);

                    /**
                     * 判断参数 IsReadOnlyUlogBackupExpireDay 是否已赋值
                     * @return IsReadOnlyUlogBackupExpireDay 是否已赋值
                     * 
                     */
                    bool IsReadOnlyUlogBackupExpireDayHasBeenSet() const;

                    /**
                     * 获取restproxy状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RestProxyStatus restproxy状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRestProxyStatus() const;

                    /**
                     * 设置restproxy状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _restProxyStatus restproxy状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRestProxyStatus(const int64_t& _restProxyStatus);

                    /**
                     * 判断参数 RestProxyStatus 是否已赋值
                     * @return RestProxyStatus 是否已赋值
                     * 
                     */
                    bool RestProxyStatusHasBeenSet() const;

                private:

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群所在地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 集群数据描述语言类型，如：`PROTO`,`TDR`
                     */
                    std::string m_idlType;
                    bool m_idlTypeHasBeenSet;

                    /**
                     * 网络类型
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * 集群关联的用户私有网络实例ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 集群关联的用户子网实例ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 集群密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 密码状态
                     */
                    std::string m_passwordStatus;
                    bool m_passwordStatusHasBeenSet;

                    /**
                     * TcaplusDB SDK连接参数，接入ID
                     */
                    std::string m_apiAccessId;
                    bool m_apiAccessIdHasBeenSet;

                    /**
                     * TcaplusDB SDK连接参数，接入地址
                     */
                    std::string m_apiAccessIp;
                    bool m_apiAccessIpHasBeenSet;

                    /**
                     * TcaplusDB SDK连接参数，接入端口
                     */
                    int64_t m_apiAccessPort;
                    bool m_apiAccessPortHasBeenSet;

                    /**
                     * 如果PasswordStatus是unmodifiable说明有旧密码还未过期，此字段将显示旧密码过期的时间，否则为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_oldPasswordExpireTime;
                    bool m_oldPasswordExpireTimeHasBeenSet;

                    /**
                     * TcaplusDB SDK连接参数，接入ipv6地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiAccessIpv6;
                    bool m_apiAccessIpv6HasBeenSet;

                    /**
                     * 集群类型，0,1:共享集群; 2:独立集群
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 集群状态, 0：表示正常运行中，1：表示冻结隔离一般欠费进入此状态，2：表示待回收，一般用户主动触发删除进入这个状态，3：待释放，进入这个状态，表示可以释放此表占用的资源了，4：变更中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * 读CU
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_readCapacityUnit;
                    bool m_readCapacityUnitHasBeenSet;

                    /**
                     * 写CU
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_writeCapacityUnit;
                    bool m_writeCapacityUnitHasBeenSet;

                    /**
                     * 磁盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_diskVolume;
                    bool m_diskVolumeHasBeenSet;

                    /**
                     * 独占server机器信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ServerDetailInfo> m_serverList;
                    bool m_serverListHasBeenSet;

                    /**
                     * 独占proxy机器信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ProxyDetailInfo> m_proxyList;
                    bool m_proxyListHasBeenSet;

                    /**
                     * 是否开启审核 0-不开启 1-开启
                     */
                    int64_t m_censorship;
                    bool m_censorshipHasBeenSet;

                    /**
                     * 审批人uin列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_dbaUins;
                    bool m_dbaUinsHasBeenSet;

                    /**
                     * 是否开启了数据订阅
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dataFlowStatus;
                    bool m_dataFlowStatusHasBeenSet;

                    /**
                     * 数据订阅的kafka信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KafkaInfo m_kafkaInfo;
                    bool m_kafkaInfoHasBeenSet;

                    /**
                     * 集群Txh备份文件多少天后过期删除
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_txhBackupExpireDay;
                    bool m_txhBackupExpireDayHasBeenSet;

                    /**
                     * 集群Ulog备份文件多少天后过期删除
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ulogBackupExpireDay;
                    bool m_ulogBackupExpireDayHasBeenSet;

                    /**
                     * 集群Ulog备份文件过期策略是否为只读， 0： UlogBackupExpire是只读，不可修改， 1： UlogBackupExpire可以修改（当前业务存在Svrid第二段等于clusterid的机器）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_isReadOnlyUlogBackupExpireDay;
                    bool m_isReadOnlyUlogBackupExpireDayHasBeenSet;

                    /**
                     * restproxy状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_restProxyStatus;
                    bool m_restProxyStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_CLUSTERINFO_H_
