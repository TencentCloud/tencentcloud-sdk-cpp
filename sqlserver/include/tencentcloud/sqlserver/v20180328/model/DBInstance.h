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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBINSTANCE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 实例详细信息
                */
                class DBInstance : public AbstractModel
                {
                public:
                    DBInstance();
                    ~DBInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param InstanceId 实例ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例名称
                     * @return Name 实例名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置实例名称
                     * @param Name 实例名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取实例所在项目ID
                     * @return ProjectId 实例所在项目ID
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置实例所在项目ID
                     * @param ProjectId 实例所在项目ID
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取实例所在地域ID
                     * @return RegionId 实例所在地域ID
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置实例所在地域ID
                     * @param RegionId 实例所在地域ID
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取实例所在可用区ID
                     * @return ZoneId 实例所在可用区ID
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置实例所在可用区ID
                     * @param ZoneId 实例所在可用区ID
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取实例所在私有网络ID，基础网络时为 0
                     * @return VpcId 实例所在私有网络ID，基础网络时为 0
                     */
                    int64_t GetVpcId() const;

                    /**
                     * 设置实例所在私有网络ID，基础网络时为 0
                     * @param VpcId 实例所在私有网络ID，基础网络时为 0
                     */
                    void SetVpcId(const int64_t& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取实例所在私有网络子网ID，基础网络时为 0
                     * @return SubnetId 实例所在私有网络子网ID，基础网络时为 0
                     */
                    int64_t GetSubnetId() const;

                    /**
                     * 设置实例所在私有网络子网ID，基础网络时为 0
                     * @param SubnetId 实例所在私有网络子网ID，基础网络时为 0
                     */
                    void SetSubnetId(const int64_t& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取实例状态。取值范围： <li>1：申请中</li> <li>2：运行中</li> <li>3：受限运行中 (主备切换中)</li> <li>4：已隔离</li> <li>5：回收中</li> <li>6：已回收</li> <li>7：任务执行中 (实例做备份、回档等操作)</li> <li>8：已下线</li> <li>9：实例扩容中</li> <li>10：实例迁移中</li> <li>11：只读</li> <li>12：重启中</li>
                     * @return Status 实例状态。取值范围： <li>1：申请中</li> <li>2：运行中</li> <li>3：受限运行中 (主备切换中)</li> <li>4：已隔离</li> <li>5：回收中</li> <li>6：已回收</li> <li>7：任务执行中 (实例做备份、回档等操作)</li> <li>8：已下线</li> <li>9：实例扩容中</li> <li>10：实例迁移中</li> <li>11：只读</li> <li>12：重启中</li>
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置实例状态。取值范围： <li>1：申请中</li> <li>2：运行中</li> <li>3：受限运行中 (主备切换中)</li> <li>4：已隔离</li> <li>5：回收中</li> <li>6：已回收</li> <li>7：任务执行中 (实例做备份、回档等操作)</li> <li>8：已下线</li> <li>9：实例扩容中</li> <li>10：实例迁移中</li> <li>11：只读</li> <li>12：重启中</li>
                     * @param Status 实例状态。取值范围： <li>1：申请中</li> <li>2：运行中</li> <li>3：受限运行中 (主备切换中)</li> <li>4：已隔离</li> <li>5：回收中</li> <li>6：已回收</li> <li>7：任务执行中 (实例做备份、回档等操作)</li> <li>8：已下线</li> <li>9：实例扩容中</li> <li>10：实例迁移中</li> <li>11：只读</li> <li>12：重启中</li>
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取实例访问IP
                     * @return Vip 实例访问IP
                     */
                    std::string GetVip() const;

                    /**
                     * 设置实例访问IP
                     * @param Vip 实例访问IP
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取实例访问端口
                     * @return Vport 实例访问端口
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置实例访问端口
                     * @param Vport 实例访问端口
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取实例创建时间
                     * @return CreateTime 实例创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置实例创建时间
                     * @param CreateTime 实例创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取实例更新时间
                     * @return UpdateTime 实例更新时间
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置实例更新时间
                     * @param UpdateTime 实例更新时间
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取实例计费开始时间
                     * @return StartTime 实例计费开始时间
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置实例计费开始时间
                     * @param StartTime 实例计费开始时间
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取实例计费结束时间
                     * @return EndTime 实例计费结束时间
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置实例计费结束时间
                     * @param EndTime 实例计费结束时间
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取实例隔离时间
                     * @return IsolateTime 实例隔离时间
                     */
                    std::string GetIsolateTime() const;

                    /**
                     * 设置实例隔离时间
                     * @param IsolateTime 实例隔离时间
                     */
                    void SetIsolateTime(const std::string& _isolateTime);

                    /**
                     * 判断参数 IsolateTime 是否已赋值
                     * @return IsolateTime 是否已赋值
                     */
                    bool IsolateTimeHasBeenSet() const;

                    /**
                     * 获取实例内存大小，单位G
                     * @return Memory 实例内存大小，单位G
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置实例内存大小，单位G
                     * @param Memory 实例内存大小，单位G
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取实例已经使用存储空间大小，单位G
                     * @return UsedStorage 实例已经使用存储空间大小，单位G
                     */
                    int64_t GetUsedStorage() const;

                    /**
                     * 设置实例已经使用存储空间大小，单位G
                     * @param UsedStorage 实例已经使用存储空间大小，单位G
                     */
                    void SetUsedStorage(const int64_t& _usedStorage);

                    /**
                     * 判断参数 UsedStorage 是否已赋值
                     * @return UsedStorage 是否已赋值
                     */
                    bool UsedStorageHasBeenSet() const;

                    /**
                     * 获取实例存储空间大小，单位G
                     * @return Storage 实例存储空间大小，单位G
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置实例存储空间大小，单位G
                     * @param Storage 实例存储空间大小，单位G
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取实例版本
                     * @return VersionName 实例版本
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置实例版本
                     * @param VersionName 实例版本
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取实例续费标记，0-正常续费，1-自动续费，2-到期不续费
                     * @return RenewFlag 实例续费标记，0-正常续费，1-自动续费，2-到期不续费
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置实例续费标记，0-正常续费，1-自动续费，2-到期不续费
                     * @param RenewFlag 实例续费标记，0-正常续费，1-自动续费，2-到期不续费
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取实例高可用， 1-双机高可用，2-单机，3-跨可用区，4-集群跨可用区，5-集群，9-自研机房
                     * @return Model 实例高可用， 1-双机高可用，2-单机，3-跨可用区，4-集群跨可用区，5-集群，9-自研机房
                     */
                    int64_t GetModel() const;

                    /**
                     * 设置实例高可用， 1-双机高可用，2-单机，3-跨可用区，4-集群跨可用区，5-集群，9-自研机房
                     * @param Model 实例高可用， 1-双机高可用，2-单机，3-跨可用区，4-集群跨可用区，5-集群，9-自研机房
                     */
                    void SetModel(const int64_t& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取实例所在地域名称，如 ap-guangzhou
                     * @return Region 实例所在地域名称，如 ap-guangzhou
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置实例所在地域名称，如 ap-guangzhou
                     * @param Region 实例所在地域名称，如 ap-guangzhou
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取实例所在可用区名称，如 ap-guangzhou-1
                     * @return Zone 实例所在可用区名称，如 ap-guangzhou-1
                     */
                    std::string GetZone() const;

                    /**
                     * 设置实例所在可用区名称，如 ap-guangzhou-1
                     * @param Zone 实例所在可用区名称，如 ap-guangzhou-1
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取备份时间点
                     * @return BackupTime 备份时间点
                     */
                    std::string GetBackupTime() const;

                    /**
                     * 设置备份时间点
                     * @param BackupTime 备份时间点
                     */
                    void SetBackupTime(const std::string& _backupTime);

                    /**
                     * 判断参数 BackupTime 是否已赋值
                     * @return BackupTime 是否已赋值
                     */
                    bool BackupTimeHasBeenSet() const;

                    /**
                     * 获取实例付费模式， 0-按量计费，1-包年包月
                     * @return PayMode 实例付费模式， 0-按量计费，1-包年包月
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置实例付费模式， 0-按量计费，1-包年包月
                     * @param PayMode 实例付费模式， 0-按量计费，1-包年包月
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取实例唯一UID
                     * @return Uid 实例唯一UID
                     */
                    std::string GetUid() const;

                    /**
                     * 设置实例唯一UID
                     * @param Uid 实例唯一UID
                     */
                    void SetUid(const std::string& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取实例cpu核心数
                     * @return Cpu 实例cpu核心数
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置实例cpu核心数
                     * @param Cpu 实例cpu核心数
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取实例版本代号
                     * @return Version 实例版本代号
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置实例版本代号
                     * @param Version 实例版本代号
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取物理机代号
                     * @return Type 物理机代号
                     */
                    std::string GetType() const;

                    /**
                     * 设置物理机代号
                     * @param Type 物理机代号
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取计费ID
                     * @return Pid 计费ID
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置计费ID
                     * @param Pid 计费ID
                     */
                    void SetPid(const int64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取实例所属VPC的唯一字符串ID，格式如：vpc-xxx，基础网络时为空字符串
                     * @return UniqVpcId 实例所属VPC的唯一字符串ID，格式如：vpc-xxx，基础网络时为空字符串
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置实例所属VPC的唯一字符串ID，格式如：vpc-xxx，基础网络时为空字符串
                     * @param UniqVpcId 实例所属VPC的唯一字符串ID，格式如：vpc-xxx，基础网络时为空字符串
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取实例所属子网的唯一字符串ID，格式如： subnet-xxx，基础网络时为空字符串
                     * @return UniqSubnetId 实例所属子网的唯一字符串ID，格式如： subnet-xxx，基础网络时为空字符串
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置实例所属子网的唯一字符串ID，格式如： subnet-xxx，基础网络时为空字符串
                     * @param UniqSubnetId 实例所属子网的唯一字符串ID，格式如： subnet-xxx，基础网络时为空字符串
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取实例隔离操作
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsolateOperator 实例隔离操作
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIsolateOperator() const;

                    /**
                     * 设置实例隔离操作
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsolateOperator 实例隔离操作
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsolateOperator(const std::string& _isolateOperator);

                    /**
                     * 判断参数 IsolateOperator 是否已赋值
                     * @return IsolateOperator 是否已赋值
                     */
                    bool IsolateOperatorHasBeenSet() const;

                    /**
                     * 获取发布订阅标识，SUB-订阅实例，PUB-发布实例，空值-没有发布订阅的普通实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubFlag 发布订阅标识，SUB-订阅实例，PUB-发布实例，空值-没有发布订阅的普通实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSubFlag() const;

                    /**
                     * 设置发布订阅标识，SUB-订阅实例，PUB-发布实例，空值-没有发布订阅的普通实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SubFlag 发布订阅标识，SUB-订阅实例，PUB-发布实例，空值-没有发布订阅的普通实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSubFlag(const std::string& _subFlag);

                    /**
                     * 判断参数 SubFlag 是否已赋值
                     * @return SubFlag 是否已赋值
                     */
                    bool SubFlagHasBeenSet() const;

                    /**
                     * 获取只读标识，RO-只读实例，MASTER-有RO实例的主实例，空值-没有只读组的非RO实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ROFlag 只读标识，RO-只读实例，MASTER-有RO实例的主实例，空值-没有只读组的非RO实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetROFlag() const;

                    /**
                     * 设置只读标识，RO-只读实例，MASTER-有RO实例的主实例，空值-没有只读组的非RO实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ROFlag 只读标识，RO-只读实例，MASTER-有RO实例的主实例，空值-没有只读组的非RO实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetROFlag(const std::string& _rOFlag);

                    /**
                     * 判断参数 ROFlag 是否已赋值
                     * @return ROFlag 是否已赋值
                     */
                    bool ROFlagHasBeenSet() const;

                    /**
                     * 获取容灾类型，MIRROR-镜像，ALWAYSON-AlwaysOn, SINGLE-单例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HAFlag 容灾类型，MIRROR-镜像，ALWAYSON-AlwaysOn, SINGLE-单例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHAFlag() const;

                    /**
                     * 设置容灾类型，MIRROR-镜像，ALWAYSON-AlwaysOn, SINGLE-单例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HAFlag 容灾类型，MIRROR-镜像，ALWAYSON-AlwaysOn, SINGLE-单例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHAFlag(const std::string& _hAFlag);

                    /**
                     * 判断参数 HAFlag 是否已赋值
                     * @return HAFlag 是否已赋值
                     */
                    bool HAFlagHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 实例所在项目ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 实例所在地域ID
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 实例所在可用区ID
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 实例所在私有网络ID，基础网络时为 0
                     */
                    int64_t m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 实例所在私有网络子网ID，基础网络时为 0
                     */
                    int64_t m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 实例状态。取值范围： <li>1：申请中</li> <li>2：运行中</li> <li>3：受限运行中 (主备切换中)</li> <li>4：已隔离</li> <li>5：回收中</li> <li>6：已回收</li> <li>7：任务执行中 (实例做备份、回档等操作)</li> <li>8：已下线</li> <li>9：实例扩容中</li> <li>10：实例迁移中</li> <li>11：只读</li> <li>12：重启中</li>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例访问IP
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 实例访问端口
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * 实例创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 实例更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 实例计费开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 实例计费结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 实例隔离时间
                     */
                    std::string m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * 实例内存大小，单位G
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 实例已经使用存储空间大小，单位G
                     */
                    int64_t m_usedStorage;
                    bool m_usedStorageHasBeenSet;

                    /**
                     * 实例存储空间大小，单位G
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 实例版本
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * 实例续费标记，0-正常续费，1-自动续费，2-到期不续费
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 实例高可用， 1-双机高可用，2-单机，3-跨可用区，4-集群跨可用区，5-集群，9-自研机房
                     */
                    int64_t m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 实例所在地域名称，如 ap-guangzhou
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 实例所在可用区名称，如 ap-guangzhou-1
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 备份时间点
                     */
                    std::string m_backupTime;
                    bool m_backupTimeHasBeenSet;

                    /**
                     * 实例付费模式， 0-按量计费，1-包年包月
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 实例唯一UID
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * 实例cpu核心数
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 实例版本代号
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 物理机代号
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 计费ID
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * 实例所属VPC的唯一字符串ID，格式如：vpc-xxx，基础网络时为空字符串
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * 实例所属子网的唯一字符串ID，格式如： subnet-xxx，基础网络时为空字符串
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * 实例隔离操作
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isolateOperator;
                    bool m_isolateOperatorHasBeenSet;

                    /**
                     * 发布订阅标识，SUB-订阅实例，PUB-发布实例，空值-没有发布订阅的普通实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subFlag;
                    bool m_subFlagHasBeenSet;

                    /**
                     * 只读标识，RO-只读实例，MASTER-有RO实例的主实例，空值-没有只读组的非RO实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rOFlag;
                    bool m_rOFlagHasBeenSet;

                    /**
                     * 容灾类型，MIRROR-镜像，ALWAYSON-AlwaysOn, SINGLE-单例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hAFlag;
                    bool m_hAFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBINSTANCE_H_
