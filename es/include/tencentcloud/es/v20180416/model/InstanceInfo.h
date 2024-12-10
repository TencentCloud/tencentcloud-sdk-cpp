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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_INSTANCEINFO_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_INSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/EsAcl.h>
#include <tencentcloud/es/v20180416/model/EsDictionaryInfo.h>
#include <tencentcloud/es/v20180416/model/MasterNodeInfo.h>
#include <tencentcloud/es/v20180416/model/CosBackup.h>
#include <tencentcloud/es/v20180416/model/TagInfo.h>
#include <tencentcloud/es/v20180416/model/NodeInfo.h>
#include <tencentcloud/es/v20180416/model/ZoneDetail.h>
#include <tencentcloud/es/v20180416/model/KibanaNodeInfo.h>
#include <tencentcloud/es/v20180416/model/WebNodeTypeInfo.h>
#include <tencentcloud/es/v20180416/model/EsConfigSetInfo.h>
#include <tencentcloud/es/v20180416/model/OperationDuration.h>
#include <tencentcloud/es/v20180416/model/OptionalWebServiceInfo.h>
#include <tencentcloud/es/v20180416/model/OutboundPublicAcl.h>
#include <tencentcloud/es/v20180416/model/EnableScheduleOperationDuration.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 实例详细信息
                */
                class InstanceInfo : public AbstractModel
                {
                public:
                    InstanceInfo();
                    ~InstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param _instanceName 实例名称
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
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
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
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
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
                     * 获取用户ID
                     * @return AppId 用户ID
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置用户ID
                     * @param _appId 用户ID
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取用户UIN
                     * @return Uin 用户UIN
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户UIN
                     * @param _uin 用户UIN
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取实例所属VPC的UID
                     * @return VpcUid 实例所属VPC的UID
                     * 
                     */
                    std::string GetVpcUid() const;

                    /**
                     * 设置实例所属VPC的UID
                     * @param _vpcUid 实例所属VPC的UID
                     * 
                     */
                    void SetVpcUid(const std::string& _vpcUid);

                    /**
                     * 判断参数 VpcUid 是否已赋值
                     * @return VpcUid 是否已赋值
                     * 
                     */
                    bool VpcUidHasBeenSet() const;

                    /**
                     * 获取实例所属子网的UID
                     * @return SubnetUid 实例所属子网的UID
                     * 
                     */
                    std::string GetSubnetUid() const;

                    /**
                     * 设置实例所属子网的UID
                     * @param _subnetUid 实例所属子网的UID
                     * 
                     */
                    void SetSubnetUid(const std::string& _subnetUid);

                    /**
                     * 判断参数 SubnetUid 是否已赋值
                     * @return SubnetUid 是否已赋值
                     * 
                     */
                    bool SubnetUidHasBeenSet() const;

                    /**
                     * 获取实例状态，0:处理中,1:正常,-1:停止,-2:销毁中,-3:已销毁, -4:隔离中,2:创建集群时初始化中
                     * @return Status 实例状态，0:处理中,1:正常,-1:停止,-2:销毁中,-3:已销毁, -4:隔离中,2:创建集群时初始化中
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置实例状态，0:处理中,1:正常,-1:停止,-2:销毁中,-3:已销毁, -4:隔离中,2:创建集群时初始化中
                     * @param _status 实例状态，0:处理中,1:正常,-1:停止,-2:销毁中,-3:已销毁, -4:隔离中,2:创建集群时初始化中
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
                     * 获取自动续费标识。取值范围：
RENEW_FLAG_AUTO：自动续费  
RENEW_FLAG_MANUAL：不自动续费
默认取值：
RENEW_FLAG_DEFAULT：不自动续费
若该参数指定为 RENEW_FLAG_AUTO，在账户余额充足的情况下，实例到期后将按月自动续费。
                     * @return RenewFlag 自动续费标识。取值范围：
RENEW_FLAG_AUTO：自动续费  
RENEW_FLAG_MANUAL：不自动续费
默认取值：
RENEW_FLAG_DEFAULT：不自动续费
若该参数指定为 RENEW_FLAG_AUTO，在账户余额充足的情况下，实例到期后将按月自动续费。
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置自动续费标识。取值范围：
RENEW_FLAG_AUTO：自动续费  
RENEW_FLAG_MANUAL：不自动续费
默认取值：
RENEW_FLAG_DEFAULT：不自动续费
若该参数指定为 RENEW_FLAG_AUTO，在账户余额充足的情况下，实例到期后将按月自动续费。
                     * @param _renewFlag 自动续费标识。取值范围：
RENEW_FLAG_AUTO：自动续费  
RENEW_FLAG_MANUAL：不自动续费
默认取值：
RENEW_FLAG_DEFAULT：不自动续费
若该参数指定为 RENEW_FLAG_AUTO，在账户余额充足的情况下，实例到期后将按月自动续费。
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取实例计费模式。取值范围：  PREPAID：表示预付费，即包年包月  POSTPAID_BY_HOUR：表示后付费，即按量计费  CDHPAID：CDH付费，即只对CDH计费，不对CDH上的实例计费。
                     * @return ChargeType 实例计费模式。取值范围：  PREPAID：表示预付费，即包年包月  POSTPAID_BY_HOUR：表示后付费，即按量计费  CDHPAID：CDH付费，即只对CDH计费，不对CDH上的实例计费。
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置实例计费模式。取值范围：  PREPAID：表示预付费，即包年包月  POSTPAID_BY_HOUR：表示后付费，即按量计费  CDHPAID：CDH付费，即只对CDH计费，不对CDH上的实例计费。
                     * @param _chargeType 实例计费模式。取值范围：  PREPAID：表示预付费，即包年包月  POSTPAID_BY_HOUR：表示后付费，即按量计费  CDHPAID：CDH付费，即只对CDH计费，不对CDH上的实例计费。
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
                     * 获取包年包月购买时长,单位:月
                     * @return ChargePeriod 包年包月购买时长,单位:月
                     * 
                     */
                    uint64_t GetChargePeriod() const;

                    /**
                     * 设置包年包月购买时长,单位:月
                     * @param _chargePeriod 包年包月购买时长,单位:月
                     * 
                     */
                    void SetChargePeriod(const uint64_t& _chargePeriod);

                    /**
                     * 判断参数 ChargePeriod 是否已赋值
                     * @return ChargePeriod 是否已赋值
                     * 
                     */
                    bool ChargePeriodHasBeenSet() const;

                    /**
                     * 获取节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
                     * @return NodeType 节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
                     * @param _nodeType 节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
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
                     * 获取节点个数
                     * @return NodeNum 节点个数
                     * 
                     */
                    uint64_t GetNodeNum() const;

                    /**
                     * 设置节点个数
                     * @param _nodeNum 节点个数
                     * 
                     */
                    void SetNodeNum(const uint64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     * 
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取节点CPU核数
                     * @return CpuNum 节点CPU核数
                     * 
                     */
                    uint64_t GetCpuNum() const;

                    /**
                     * 设置节点CPU核数
                     * @param _cpuNum 节点CPU核数
                     * 
                     */
                    void SetCpuNum(const uint64_t& _cpuNum);

                    /**
                     * 判断参数 CpuNum 是否已赋值
                     * @return CpuNum 是否已赋值
                     * 
                     */
                    bool CpuNumHasBeenSet() const;

                    /**
                     * 获取节点内存大小，单位GB
                     * @return MemSize 节点内存大小，单位GB
                     * 
                     */
                    uint64_t GetMemSize() const;

                    /**
                     * 设置节点内存大小，单位GB
                     * @param _memSize 节点内存大小，单位GB
                     * 
                     */
                    void SetMemSize(const uint64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取节点磁盘类型
                     * @return DiskType 节点磁盘类型
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置节点磁盘类型
                     * @param _diskType 节点磁盘类型
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取节点磁盘大小，单位GB
                     * @return DiskSize 节点磁盘大小，单位GB
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置节点磁盘大小，单位GB
                     * @param _diskSize 节点磁盘大小，单位GB
                     * 
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取ES域名
                     * @return EsDomain ES域名
                     * 
                     */
                    std::string GetEsDomain() const;

                    /**
                     * 设置ES域名
                     * @param _esDomain ES域名
                     * 
                     */
                    void SetEsDomain(const std::string& _esDomain);

                    /**
                     * 判断参数 EsDomain 是否已赋值
                     * @return EsDomain 是否已赋值
                     * 
                     */
                    bool EsDomainHasBeenSet() const;

                    /**
                     * 获取ES VIP
                     * @return EsVip ES VIP
                     * 
                     */
                    std::string GetEsVip() const;

                    /**
                     * 设置ES VIP
                     * @param _esVip ES VIP
                     * 
                     */
                    void SetEsVip(const std::string& _esVip);

                    /**
                     * 判断参数 EsVip 是否已赋值
                     * @return EsVip 是否已赋值
                     * 
                     */
                    bool EsVipHasBeenSet() const;

                    /**
                     * 获取ES端口
                     * @return EsPort ES端口
                     * 
                     */
                    uint64_t GetEsPort() const;

                    /**
                     * 设置ES端口
                     * @param _esPort ES端口
                     * 
                     */
                    void SetEsPort(const uint64_t& _esPort);

                    /**
                     * 判断参数 EsPort 是否已赋值
                     * @return EsPort 是否已赋值
                     * 
                     */
                    bool EsPortHasBeenSet() const;

                    /**
                     * 获取Kibana访问url
                     * @return KibanaUrl Kibana访问url
                     * 
                     */
                    std::string GetKibanaUrl() const;

                    /**
                     * 设置Kibana访问url
                     * @param _kibanaUrl Kibana访问url
                     * 
                     */
                    void SetKibanaUrl(const std::string& _kibanaUrl);

                    /**
                     * 判断参数 KibanaUrl 是否已赋值
                     * @return KibanaUrl 是否已赋值
                     * 
                     */
                    bool KibanaUrlHasBeenSet() const;

                    /**
                     * 获取ES版本号
                     * @return EsVersion ES版本号
                     * 
                     */
                    std::string GetEsVersion() const;

                    /**
                     * 设置ES版本号
                     * @param _esVersion ES版本号
                     * 
                     */
                    void SetEsVersion(const std::string& _esVersion);

                    /**
                     * 判断参数 EsVersion 是否已赋值
                     * @return EsVersion 是否已赋值
                     * 
                     */
                    bool EsVersionHasBeenSet() const;

                    /**
                     * 获取ES配置项
                     * @return EsConfig ES配置项
                     * 
                     */
                    std::string GetEsConfig() const;

                    /**
                     * 设置ES配置项
                     * @param _esConfig ES配置项
                     * 
                     */
                    void SetEsConfig(const std::string& _esConfig);

                    /**
                     * 判断参数 EsConfig 是否已赋值
                     * @return EsConfig 是否已赋值
                     * 
                     */
                    bool EsConfigHasBeenSet() const;

                    /**
                     * 获取Kibana访问控制配置
                     * @return EsAcl Kibana访问控制配置
                     * 
                     */
                    EsAcl GetEsAcl() const;

                    /**
                     * 设置Kibana访问控制配置
                     * @param _esAcl Kibana访问控制配置
                     * 
                     */
                    void SetEsAcl(const EsAcl& _esAcl);

                    /**
                     * 判断参数 EsAcl 是否已赋值
                     * @return EsAcl 是否已赋值
                     * 
                     */
                    bool EsAclHasBeenSet() const;

                    /**
                     * 获取实例创建时间
                     * @return CreateTime 实例创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置实例创建时间
                     * @param _createTime 实例创建时间
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
                     * 获取实例最后修改操作时间
                     * @return UpdateTime 实例最后修改操作时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置实例最后修改操作时间
                     * @param _updateTime 实例最后修改操作时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取实例到期时间
                     * @return Deadline 实例到期时间
                     * 
                     */
                    std::string GetDeadline() const;

                    /**
                     * 设置实例到期时间
                     * @param _deadline 实例到期时间
                     * 
                     */
                    void SetDeadline(const std::string& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     * 
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取实例类型（实例类型标识，当前只有1,2两种）
                     * @return InstanceType 实例类型（实例类型标识，当前只有1,2两种）
                     * 
                     */
                    uint64_t GetInstanceType() const;

                    /**
                     * 设置实例类型（实例类型标识，当前只有1,2两种）
                     * @param _instanceType 实例类型（实例类型标识，当前只有1,2两种）
                     * 
                     */
                    void SetInstanceType(const uint64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Ik分词器配置
                     * @return IkConfig Ik分词器配置
                     * 
                     */
                    EsDictionaryInfo GetIkConfig() const;

                    /**
                     * 设置Ik分词器配置
                     * @param _ikConfig Ik分词器配置
                     * 
                     */
                    void SetIkConfig(const EsDictionaryInfo& _ikConfig);

                    /**
                     * 判断参数 IkConfig 是否已赋值
                     * @return IkConfig 是否已赋值
                     * 
                     */
                    bool IkConfigHasBeenSet() const;

                    /**
                     * 获取专用主节点配置
                     * @return MasterNodeInfo 专用主节点配置
                     * 
                     */
                    MasterNodeInfo GetMasterNodeInfo() const;

                    /**
                     * 设置专用主节点配置
                     * @param _masterNodeInfo 专用主节点配置
                     * 
                     */
                    void SetMasterNodeInfo(const MasterNodeInfo& _masterNodeInfo);

                    /**
                     * 判断参数 MasterNodeInfo 是否已赋值
                     * @return MasterNodeInfo 是否已赋值
                     * 
                     */
                    bool MasterNodeInfoHasBeenSet() const;

                    /**
                     * 获取cos自动备份配置
                     * @return CosBackup cos自动备份配置
                     * 
                     */
                    CosBackup GetCosBackup() const;

                    /**
                     * 设置cos自动备份配置
                     * @param _cosBackup cos自动备份配置
                     * 
                     */
                    void SetCosBackup(const CosBackup& _cosBackup);

                    /**
                     * 判断参数 CosBackup 是否已赋值
                     * @return CosBackup 是否已赋值
                     * 
                     */
                    bool CosBackupHasBeenSet() const;

                    /**
                     * 获取是否允许cos自动备份
                     * @return AllowCosBackup 是否允许cos自动备份
                     * 
                     */
                    bool GetAllowCosBackup() const;

                    /**
                     * 设置是否允许cos自动备份
                     * @param _allowCosBackup 是否允许cos自动备份
                     * 
                     */
                    void SetAllowCosBackup(const bool& _allowCosBackup);

                    /**
                     * 判断参数 AllowCosBackup 是否已赋值
                     * @return AllowCosBackup 是否已赋值
                     * 
                     */
                    bool AllowCosBackupHasBeenSet() const;

                    /**
                     * 获取实例拥有的标签列表
                     * @return TagList 实例拥有的标签列表
                     * 
                     */
                    std::vector<TagInfo> GetTagList() const;

                    /**
                     * 设置实例拥有的标签列表
                     * @param _tagList 实例拥有的标签列表
                     * 
                     */
                    void SetTagList(const std::vector<TagInfo>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取License类型<li>oss：开源版</li><li>basic：基础版</li><li>platinum：白金版</li>默认值platinum
                     * @return LicenseType License类型<li>oss：开源版</li><li>basic：基础版</li><li>platinum：白金版</li>默认值platinum
                     * 
                     */
                    std::string GetLicenseType() const;

                    /**
                     * 设置License类型<li>oss：开源版</li><li>basic：基础版</li><li>platinum：白金版</li>默认值platinum
                     * @param _licenseType License类型<li>oss：开源版</li><li>basic：基础版</li><li>platinum：白金版</li>默认值platinum
                     * 
                     */
                    void SetLicenseType(const std::string& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                    /**
                     * 获取是否为冷热集群<li>true: 冷热集群</li><li>false: 非冷热集群</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableHotWarmMode 是否为冷热集群<li>true: 冷热集群</li><li>false: 非冷热集群</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableHotWarmMode() const;

                    /**
                     * 设置是否为冷热集群<li>true: 冷热集群</li><li>false: 非冷热集群</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableHotWarmMode 是否为冷热集群<li>true: 冷热集群</li><li>false: 非冷热集群</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableHotWarmMode(const bool& _enableHotWarmMode);

                    /**
                     * 判断参数 EnableHotWarmMode 是否已赋值
                     * @return EnableHotWarmMode 是否已赋值
                     * 
                     */
                    bool EnableHotWarmModeHasBeenSet() const;

                    /**
                     * 获取温节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WarmNodeType 温节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWarmNodeType() const;

                    /**
                     * 设置温节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _warmNodeType 温节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWarmNodeType(const std::string& _warmNodeType);

                    /**
                     * 判断参数 WarmNodeType 是否已赋值
                     * @return WarmNodeType 是否已赋值
                     * 
                     */
                    bool WarmNodeTypeHasBeenSet() const;

                    /**
                     * 获取温节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WarmNodeNum 温节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetWarmNodeNum() const;

                    /**
                     * 设置温节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _warmNodeNum 温节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWarmNodeNum(const uint64_t& _warmNodeNum);

                    /**
                     * 判断参数 WarmNodeNum 是否已赋值
                     * @return WarmNodeNum 是否已赋值
                     * 
                     */
                    bool WarmNodeNumHasBeenSet() const;

                    /**
                     * 获取温节点CPU核数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WarmCpuNum 温节点CPU核数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetWarmCpuNum() const;

                    /**
                     * 设置温节点CPU核数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _warmCpuNum 温节点CPU核数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWarmCpuNum(const uint64_t& _warmCpuNum);

                    /**
                     * 判断参数 WarmCpuNum 是否已赋值
                     * @return WarmCpuNum 是否已赋值
                     * 
                     */
                    bool WarmCpuNumHasBeenSet() const;

                    /**
                     * 获取温节点内存内存大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WarmMemSize 温节点内存内存大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetWarmMemSize() const;

                    /**
                     * 设置温节点内存内存大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _warmMemSize 温节点内存内存大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWarmMemSize(const uint64_t& _warmMemSize);

                    /**
                     * 判断参数 WarmMemSize 是否已赋值
                     * @return WarmMemSize 是否已赋值
                     * 
                     */
                    bool WarmMemSizeHasBeenSet() const;

                    /**
                     * 获取温节点磁盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WarmDiskType 温节点磁盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWarmDiskType() const;

                    /**
                     * 设置温节点磁盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _warmDiskType 温节点磁盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWarmDiskType(const std::string& _warmDiskType);

                    /**
                     * 判断参数 WarmDiskType 是否已赋值
                     * @return WarmDiskType 是否已赋值
                     * 
                     */
                    bool WarmDiskTypeHasBeenSet() const;

                    /**
                     * 获取温节点磁盘大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WarmDiskSize 温节点磁盘大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetWarmDiskSize() const;

                    /**
                     * 设置温节点磁盘大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _warmDiskSize 温节点磁盘大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWarmDiskSize(const uint64_t& _warmDiskSize);

                    /**
                     * 判断参数 WarmDiskSize 是否已赋值
                     * @return WarmDiskSize 是否已赋值
                     * 
                     */
                    bool WarmDiskSizeHasBeenSet() const;

                    /**
                     * 获取集群节点信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeInfoList 集群节点信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NodeInfo> GetNodeInfoList() const;

                    /**
                     * 设置集群节点信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeInfoList 集群节点信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeInfoList(const std::vector<NodeInfo>& _nodeInfoList);

                    /**
                     * 判断参数 NodeInfoList 是否已赋值
                     * @return NodeInfoList 是否已赋值
                     * 
                     */
                    bool NodeInfoListHasBeenSet() const;

                    /**
                     * 获取Es公网地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EsPublicUrl Es公网地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEsPublicUrl() const;

                    /**
                     * 设置Es公网地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _esPublicUrl Es公网地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEsPublicUrl(const std::string& _esPublicUrl);

                    /**
                     * 判断参数 EsPublicUrl 是否已赋值
                     * @return EsPublicUrl 是否已赋值
                     * 
                     */
                    bool EsPublicUrlHasBeenSet() const;

                    /**
                     * 获取多可用区网络信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MultiZoneInfo 多可用区网络信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ZoneDetail> GetMultiZoneInfo() const;

                    /**
                     * 设置多可用区网络信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _multiZoneInfo 多可用区网络信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMultiZoneInfo(const std::vector<ZoneDetail>& _multiZoneInfo);

                    /**
                     * 判断参数 MultiZoneInfo 是否已赋值
                     * @return MultiZoneInfo 是否已赋值
                     * 
                     */
                    bool MultiZoneInfoHasBeenSet() const;

                    /**
                     * 获取部署模式<li>0：单可用区</li><li>1：多可用区，北京、上海、上海金融、广州、南京、香港、新加坡、法兰克福（白名单控制）</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeployMode 部署模式<li>0：单可用区</li><li>1：多可用区，北京、上海、上海金融、广州、南京、香港、新加坡、法兰克福（白名单控制）</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDeployMode() const;

                    /**
                     * 设置部署模式<li>0：单可用区</li><li>1：多可用区，北京、上海、上海金融、广州、南京、香港、新加坡、法兰克福（白名单控制）</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deployMode 部署模式<li>0：单可用区</li><li>1：多可用区，北京、上海、上海金融、广州、南京、香港、新加坡、法兰克福（白名单控制）</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeployMode(const uint64_t& _deployMode);

                    /**
                     * 判断参数 DeployMode 是否已赋值
                     * @return DeployMode 是否已赋值
                     * 
                     */
                    bool DeployModeHasBeenSet() const;

                    /**
                     * 获取ES公网访问状态<li>OPEN：开启</li><li>CLOSE：关闭</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicAccess ES公网访问状态<li>OPEN：开启</li><li>CLOSE：关闭</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPublicAccess() const;

                    /**
                     * 设置ES公网访问状态<li>OPEN：开启</li><li>CLOSE：关闭</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicAccess ES公网访问状态<li>OPEN：开启</li><li>CLOSE：关闭</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublicAccess(const std::string& _publicAccess);

                    /**
                     * 判断参数 PublicAccess 是否已赋值
                     * @return PublicAccess 是否已赋值
                     * 
                     */
                    bool PublicAccessHasBeenSet() const;

                    /**
                     * 获取ES公网访问控制配置
                     * @return EsPublicAcl ES公网访问控制配置
                     * 
                     */
                    EsAcl GetEsPublicAcl() const;

                    /**
                     * 设置ES公网访问控制配置
                     * @param _esPublicAcl ES公网访问控制配置
                     * 
                     */
                    void SetEsPublicAcl(const EsAcl& _esPublicAcl);

                    /**
                     * 判断参数 EsPublicAcl 是否已赋值
                     * @return EsPublicAcl 是否已赋值
                     * 
                     */
                    bool EsPublicAclHasBeenSet() const;

                    /**
                     * 获取Kibana内网地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KibanaPrivateUrl Kibana内网地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKibanaPrivateUrl() const;

                    /**
                     * 设置Kibana内网地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kibanaPrivateUrl Kibana内网地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKibanaPrivateUrl(const std::string& _kibanaPrivateUrl);

                    /**
                     * 判断参数 KibanaPrivateUrl 是否已赋值
                     * @return KibanaPrivateUrl 是否已赋值
                     * 
                     */
                    bool KibanaPrivateUrlHasBeenSet() const;

                    /**
                     * 获取Kibana公网访问状态<li>OPEN：开启</li><li>CLOSE：关闭</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KibanaPublicAccess Kibana公网访问状态<li>OPEN：开启</li><li>CLOSE：关闭</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKibanaPublicAccess() const;

                    /**
                     * 设置Kibana公网访问状态<li>OPEN：开启</li><li>CLOSE：关闭</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kibanaPublicAccess Kibana公网访问状态<li>OPEN：开启</li><li>CLOSE：关闭</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKibanaPublicAccess(const std::string& _kibanaPublicAccess);

                    /**
                     * 判断参数 KibanaPublicAccess 是否已赋值
                     * @return KibanaPublicAccess 是否已赋值
                     * 
                     */
                    bool KibanaPublicAccessHasBeenSet() const;

                    /**
                     * 获取Kibana内网访问状态<li>OPEN：开启</li><li>CLOSE：关闭</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KibanaPrivateAccess Kibana内网访问状态<li>OPEN：开启</li><li>CLOSE：关闭</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKibanaPrivateAccess() const;

                    /**
                     * 设置Kibana内网访问状态<li>OPEN：开启</li><li>CLOSE：关闭</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kibanaPrivateAccess Kibana内网访问状态<li>OPEN：开启</li><li>CLOSE：关闭</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKibanaPrivateAccess(const std::string& _kibanaPrivateAccess);

                    /**
                     * 判断参数 KibanaPrivateAccess 是否已赋值
                     * @return KibanaPrivateAccess 是否已赋值
                     * 
                     */
                    bool KibanaPrivateAccessHasBeenSet() const;

                    /**
                     * 获取6.8（及以上版本）基础版是否开启xpack security认证<li>1：不开启</li><li>2：开启</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecurityType 6.8（及以上版本）基础版是否开启xpack security认证<li>1：不开启</li><li>2：开启</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSecurityType() const;

                    /**
                     * 设置6.8（及以上版本）基础版是否开启xpack security认证<li>1：不开启</li><li>2：开启</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _securityType 6.8（及以上版本）基础版是否开启xpack security认证<li>1：不开启</li><li>2：开启</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecurityType(const uint64_t& _securityType);

                    /**
                     * 判断参数 SecurityType 是否已赋值
                     * @return SecurityType 是否已赋值
                     * 
                     */
                    bool SecurityTypeHasBeenSet() const;

                    /**
                     * 获取场景化模板类型：0、不开启；1、通用场景；2、日志场景；3、搜索场景
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SceneType 场景化模板类型：0、不开启；1、通用场景；2、日志场景；3、搜索场景
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSceneType() const;

                    /**
                     * 设置场景化模板类型：0、不开启；1、通用场景；2、日志场景；3、搜索场景
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sceneType 场景化模板类型：0、不开启；1、通用场景；2、日志场景；3、搜索场景
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSceneType(const int64_t& _sceneType);

                    /**
                     * 判断参数 SceneType 是否已赋值
                     * @return SceneType 是否已赋值
                     * 
                     */
                    bool SceneTypeHasBeenSet() const;

                    /**
                     * 获取Kibana配置项
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KibanaConfig Kibana配置项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKibanaConfig() const;

                    /**
                     * 设置Kibana配置项
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kibanaConfig Kibana配置项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKibanaConfig(const std::string& _kibanaConfig);

                    /**
                     * 判断参数 KibanaConfig 是否已赋值
                     * @return KibanaConfig 是否已赋值
                     * 
                     */
                    bool KibanaConfigHasBeenSet() const;

                    /**
                     * 获取Kibana节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KibanaNodeInfo Kibana节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KibanaNodeInfo GetKibanaNodeInfo() const;

                    /**
                     * 设置Kibana节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kibanaNodeInfo Kibana节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKibanaNodeInfo(const KibanaNodeInfo& _kibanaNodeInfo);

                    /**
                     * 判断参数 KibanaNodeInfo 是否已赋值
                     * @return KibanaNodeInfo 是否已赋值
                     * 
                     */
                    bool KibanaNodeInfoHasBeenSet() const;

                    /**
                     * 获取可视化节点配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WebNodeTypeInfo 可视化节点配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WebNodeTypeInfo GetWebNodeTypeInfo() const;

                    /**
                     * 设置可视化节点配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _webNodeTypeInfo 可视化节点配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWebNodeTypeInfo(const WebNodeTypeInfo& _webNodeTypeInfo);

                    /**
                     * 判断参数 WebNodeTypeInfo 是否已赋值
                     * @return WebNodeTypeInfo 是否已赋值
                     * 
                     */
                    bool WebNodeTypeInfoHasBeenSet() const;

                    /**
                     * 获取JDK类型，oracle或kona
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Jdk JDK类型，oracle或kona
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJdk() const;

                    /**
                     * 设置JDK类型，oracle或kona
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jdk JDK类型，oracle或kona
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJdk(const std::string& _jdk);

                    /**
                     * 判断参数 Jdk 是否已赋值
                     * @return Jdk 是否已赋值
                     * 
                     */
                    bool JdkHasBeenSet() const;

                    /**
                     * 获取集群网络通讯协议
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Protocol 集群网络通讯协议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置集群网络通讯协议
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _protocol 集群网络通讯协议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取安全组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecurityGroups 安全组id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroups() const;

                    /**
                     * 设置安全组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _securityGroups 安全组id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecurityGroups(const std::vector<std::string>& _securityGroups);

                    /**
                     * 判断参数 SecurityGroups 是否已赋值
                     * @return SecurityGroups 是否已赋值
                     * 
                     */
                    bool SecurityGroupsHasBeenSet() const;

                    /**
                     * 获取冷节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColdNodeType 冷节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColdNodeType() const;

                    /**
                     * 设置冷节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _coldNodeType 冷节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColdNodeType(const std::string& _coldNodeType);

                    /**
                     * 判断参数 ColdNodeType 是否已赋值
                     * @return ColdNodeType 是否已赋值
                     * 
                     */
                    bool ColdNodeTypeHasBeenSet() const;

                    /**
                     * 获取冷节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColdNodeNum 冷节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetColdNodeNum() const;

                    /**
                     * 设置冷节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _coldNodeNum 冷节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColdNodeNum(const uint64_t& _coldNodeNum);

                    /**
                     * 判断参数 ColdNodeNum 是否已赋值
                     * @return ColdNodeNum 是否已赋值
                     * 
                     */
                    bool ColdNodeNumHasBeenSet() const;

                    /**
                     * 获取冷节点CPU核数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColdCpuNum 冷节点CPU核数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetColdCpuNum() const;

                    /**
                     * 设置冷节点CPU核数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _coldCpuNum 冷节点CPU核数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColdCpuNum(const uint64_t& _coldCpuNum);

                    /**
                     * 判断参数 ColdCpuNum 是否已赋值
                     * @return ColdCpuNum 是否已赋值
                     * 
                     */
                    bool ColdCpuNumHasBeenSet() const;

                    /**
                     * 获取冷节点内存大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColdMemSize 冷节点内存大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetColdMemSize() const;

                    /**
                     * 设置冷节点内存大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _coldMemSize 冷节点内存大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColdMemSize(const uint64_t& _coldMemSize);

                    /**
                     * 判断参数 ColdMemSize 是否已赋值
                     * @return ColdMemSize 是否已赋值
                     * 
                     */
                    bool ColdMemSizeHasBeenSet() const;

                    /**
                     * 获取冷节点磁盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColdDiskType 冷节点磁盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColdDiskType() const;

                    /**
                     * 设置冷节点磁盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _coldDiskType 冷节点磁盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColdDiskType(const std::string& _coldDiskType);

                    /**
                     * 判断参数 ColdDiskType 是否已赋值
                     * @return ColdDiskType 是否已赋值
                     * 
                     */
                    bool ColdDiskTypeHasBeenSet() const;

                    /**
                     * 获取冷节点磁盘大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColdDiskSize 冷节点磁盘大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetColdDiskSize() const;

                    /**
                     * 设置冷节点磁盘大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _coldDiskSize 冷节点磁盘大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColdDiskSize(const uint64_t& _coldDiskSize);

                    /**
                     * 判断参数 ColdDiskSize 是否已赋值
                     * @return ColdDiskSize 是否已赋值
                     * 
                     */
                    bool ColdDiskSizeHasBeenSet() const;

                    /**
                     * 获取冻节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrozenNodeType 冻节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFrozenNodeType() const;

                    /**
                     * 设置冻节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frozenNodeType 冻节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFrozenNodeType(const std::string& _frozenNodeType);

                    /**
                     * 判断参数 FrozenNodeType 是否已赋值
                     * @return FrozenNodeType 是否已赋值
                     * 
                     */
                    bool FrozenNodeTypeHasBeenSet() const;

                    /**
                     * 获取冻节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrozenNodeNum 冻节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFrozenNodeNum() const;

                    /**
                     * 设置冻节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frozenNodeNum 冻节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFrozenNodeNum(const uint64_t& _frozenNodeNum);

                    /**
                     * 判断参数 FrozenNodeNum 是否已赋值
                     * @return FrozenNodeNum 是否已赋值
                     * 
                     */
                    bool FrozenNodeNumHasBeenSet() const;

                    /**
                     * 获取冻节点CPU核数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrozenCpuNum 冻节点CPU核数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFrozenCpuNum() const;

                    /**
                     * 设置冻节点CPU核数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frozenCpuNum 冻节点CPU核数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFrozenCpuNum(const uint64_t& _frozenCpuNum);

                    /**
                     * 判断参数 FrozenCpuNum 是否已赋值
                     * @return FrozenCpuNum 是否已赋值
                     * 
                     */
                    bool FrozenCpuNumHasBeenSet() const;

                    /**
                     * 获取冻节点内存大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrozenMemSize 冻节点内存大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFrozenMemSize() const;

                    /**
                     * 设置冻节点内存大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frozenMemSize 冻节点内存大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFrozenMemSize(const uint64_t& _frozenMemSize);

                    /**
                     * 判断参数 FrozenMemSize 是否已赋值
                     * @return FrozenMemSize 是否已赋值
                     * 
                     */
                    bool FrozenMemSizeHasBeenSet() const;

                    /**
                     * 获取冻节点磁盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrozenDiskType 冻节点磁盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFrozenDiskType() const;

                    /**
                     * 设置冻节点磁盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frozenDiskType 冻节点磁盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFrozenDiskType(const std::string& _frozenDiskType);

                    /**
                     * 判断参数 FrozenDiskType 是否已赋值
                     * @return FrozenDiskType 是否已赋值
                     * 
                     */
                    bool FrozenDiskTypeHasBeenSet() const;

                    /**
                     * 获取冻节点磁盘大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrozenDiskSize 冻节点磁盘大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFrozenDiskSize() const;

                    /**
                     * 设置冻节点磁盘大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frozenDiskSize 冻节点磁盘大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFrozenDiskSize(const uint64_t& _frozenDiskSize);

                    /**
                     * 判断参数 FrozenDiskSize 是否已赋值
                     * @return FrozenDiskSize 是否已赋值
                     * 
                     */
                    bool FrozenDiskSizeHasBeenSet() const;

                    /**
                     * 获取集群健康状态 -1 未知；0 Green; 1 Yellow; 2 Red
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthStatus 集群健康状态 -1 未知；0 Green; 1 Yellow; 2 Red
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHealthStatus() const;

                    /**
                     * 设置集群健康状态 -1 未知；0 Green; 1 Yellow; 2 Red
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _healthStatus 集群健康状态 -1 未知；0 Green; 1 Yellow; 2 Red
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHealthStatus(const int64_t& _healthStatus);

                    /**
                     * 判断参数 HealthStatus 是否已赋值
                     * @return HealthStatus 是否已赋值
                     * 
                     */
                    bool HealthStatusHasBeenSet() const;

                    /**
                     * 获取https集群内网url
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EsPrivateUrl https集群内网url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEsPrivateUrl() const;

                    /**
                     * 设置https集群内网url
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _esPrivateUrl https集群内网url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEsPrivateUrl(const std::string& _esPrivateUrl);

                    /**
                     * 判断参数 EsPrivateUrl 是否已赋值
                     * @return EsPrivateUrl 是否已赋值
                     * 
                     */
                    bool EsPrivateUrlHasBeenSet() const;

                    /**
                     * 获取https集群内网域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EsPrivateDomain https集群内网域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEsPrivateDomain() const;

                    /**
                     * 设置https集群内网域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _esPrivateDomain https集群内网域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEsPrivateDomain(const std::string& _esPrivateDomain);

                    /**
                     * 判断参数 EsPrivateDomain 是否已赋值
                     * @return EsPrivateDomain 是否已赋值
                     * 
                     */
                    bool EsPrivateDomainHasBeenSet() const;

                    /**
                     * 获取集群的配置组信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EsConfigSets 集群的配置组信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EsConfigSetInfo> GetEsConfigSets() const;

                    /**
                     * 设置集群的配置组信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _esConfigSets 集群的配置组信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEsConfigSets(const std::vector<EsConfigSetInfo>& _esConfigSets);

                    /**
                     * 判断参数 EsConfigSets 是否已赋值
                     * @return EsConfigSets 是否已赋值
                     * 
                     */
                    bool EsConfigSetsHasBeenSet() const;

                    /**
                     * 获取集群可维护时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperationDuration 集群可维护时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OperationDuration GetOperationDuration() const;

                    /**
                     * 设置集群可维护时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operationDuration 集群可维护时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperationDuration(const OperationDuration& _operationDuration);

                    /**
                     * 判断参数 OperationDuration 是否已赋值
                     * @return OperationDuration 是否已赋值
                     * 
                     */
                    bool OperationDurationHasBeenSet() const;

                    /**
                     * 获取web节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OptionalWebServiceInfos web节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<OptionalWebServiceInfo> GetOptionalWebServiceInfos() const;

                    /**
                     * 设置web节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _optionalWebServiceInfos web节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOptionalWebServiceInfos(const std::vector<OptionalWebServiceInfo>& _optionalWebServiceInfos);

                    /**
                     * 判断参数 OptionalWebServiceInfos 是否已赋值
                     * @return OptionalWebServiceInfos 是否已赋值
                     * 
                     */
                    bool OptionalWebServiceInfosHasBeenSet() const;

                    /**
                     * 获取自治索引开关
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoIndexEnabled 自治索引开关
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAutoIndexEnabled() const;

                    /**
                     * 设置自治索引开关
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoIndexEnabled 自治索引开关
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoIndexEnabled(const bool& _autoIndexEnabled);

                    /**
                     * 判断参数 AutoIndexEnabled 是否已赋值
                     * @return AutoIndexEnabled 是否已赋值
                     * 
                     */
                    bool AutoIndexEnabledHasBeenSet() const;

                    /**
                     * 获取是否支持存储计算分离
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableHybridStorage 是否支持存储计算分离
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableHybridStorage() const;

                    /**
                     * 设置是否支持存储计算分离
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableHybridStorage 是否支持存储计算分离
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableHybridStorage(const bool& _enableHybridStorage);

                    /**
                     * 判断参数 EnableHybridStorage 是否已赋值
                     * @return EnableHybridStorage 是否已赋值
                     * 
                     */
                    bool EnableHybridStorageHasBeenSet() const;

                    /**
                     * 获取流程进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessPercent 流程进度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetProcessPercent() const;

                    /**
                     * 设置流程进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processPercent 流程进度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcessPercent(const double& _processPercent);

                    /**
                     * 判断参数 ProcessPercent 是否已赋值
                     * @return ProcessPercent 是否已赋值
                     * 
                     */
                    bool ProcessPercentHasBeenSet() const;

                    /**
                     * 获取Kibana的alerting外网告警策略<li>OPEN：开启</li><li>CLOSE：关闭</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KibanaAlteringPublicAccess Kibana的alerting外网告警策略<li>OPEN：开启</li><li>CLOSE：关闭</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKibanaAlteringPublicAccess() const;

                    /**
                     * 设置Kibana的alerting外网告警策略<li>OPEN：开启</li><li>CLOSE：关闭</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kibanaAlteringPublicAccess Kibana的alerting外网告警策略<li>OPEN：开启</li><li>CLOSE：关闭</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKibanaAlteringPublicAccess(const std::string& _kibanaAlteringPublicAccess);

                    /**
                     * 判断参数 KibanaAlteringPublicAccess 是否已赋值
                     * @return KibanaAlteringPublicAccess 是否已赋值
                     * 
                     */
                    bool KibanaAlteringPublicAccessHasBeenSet() const;

                    /**
                     * 获取本月是否有内核可以更新：false-无，true-有
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HasKernelUpgrade 本月是否有内核可以更新：false-无，true-有
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetHasKernelUpgrade() const;

                    /**
                     * 设置本月是否有内核可以更新：false-无，true-有
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hasKernelUpgrade 本月是否有内核可以更新：false-无，true-有
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHasKernelUpgrade(const bool& _hasKernelUpgrade);

                    /**
                     * 判断参数 HasKernelUpgrade 是否已赋值
                     * @return HasKernelUpgrade 是否已赋值
                     * 
                     */
                    bool HasKernelUpgradeHasBeenSet() const;

                    /**
                     * 获取cdcId，使用cdc子网时传递
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CdcId cdcId，使用cdc子网时传递
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置cdcId，使用cdc子网时传递
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cdcId cdcId，使用cdc子网时传递
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                    /**
                     * 获取kibana内网vip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KibanaPrivateVip kibana内网vip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKibanaPrivateVip() const;

                    /**
                     * 设置kibana内网vip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kibanaPrivateVip kibana内网vip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKibanaPrivateVip(const std::string& _kibanaPrivateVip);

                    /**
                     * 判断参数 KibanaPrivateVip 是否已赋值
                     * @return KibanaPrivateVip 是否已赋值
                     * 
                     */
                    bool KibanaPrivateVipHasBeenSet() const;

                    /**
                     * 获取自定义kibana内网url
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomKibanaPrivateUrl 自定义kibana内网url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCustomKibanaPrivateUrl() const;

                    /**
                     * 设置自定义kibana内网url
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customKibanaPrivateUrl 自定义kibana内网url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomKibanaPrivateUrl(const std::string& _customKibanaPrivateUrl);

                    /**
                     * 判断参数 CustomKibanaPrivateUrl 是否已赋值
                     * @return CustomKibanaPrivateUrl 是否已赋值
                     * 
                     */
                    bool CustomKibanaPrivateUrlHasBeenSet() const;

                    /**
                     * 获取节点出站访问详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutboundPublicAcls 节点出站访问详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<OutboundPublicAcl> GetOutboundPublicAcls() const;

                    /**
                     * 设置节点出站访问详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outboundPublicAcls 节点出站访问详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutboundPublicAcls(const std::vector<OutboundPublicAcl>& _outboundPublicAcls);

                    /**
                     * 判断参数 OutboundPublicAcls 是否已赋值
                     * @return OutboundPublicAcls 是否已赋值
                     * 
                     */
                    bool OutboundPublicAclsHasBeenSet() const;

                    /**
                     * 获取网络连接方案
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetConnectScheme 网络连接方案
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNetConnectScheme() const;

                    /**
                     * 设置网络连接方案
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _netConnectScheme 网络连接方案
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNetConnectScheme(const std::string& _netConnectScheme);

                    /**
                     * 判断参数 NetConnectScheme 是否已赋值
                     * @return NetConnectScheme 是否已赋值
                     * 
                     */
                    bool NetConnectSchemeHasBeenSet() const;

                    /**
                     * 获取置放群组相关参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisasterRecoverGroupAffinity 置放群组相关参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDisasterRecoverGroupAffinity() const;

                    /**
                     * 设置置放群组相关参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _disasterRecoverGroupAffinity 置放群组相关参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDisasterRecoverGroupAffinity(const uint64_t& _disasterRecoverGroupAffinity);

                    /**
                     * 判断参数 DisasterRecoverGroupAffinity 是否已赋值
                     * @return DisasterRecoverGroupAffinity 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupAffinityHasBeenSet() const;

                    /**
                     * 获取子产品ID枚举值： 开源版："sp_es_io2"， 基础版："sp_es_basic"，白金版："sp_es_platinum"，企业版："sp_es_enterprise"，CDC白金版："sp_es_cdc_platinum"，日志增强版："sp_es_enlogging"，tsearch："sp_tsearch_io2"，logstash："sp_es_logstash" ，可以为空，为空的时候后台取LicenseType映射该字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubProductCode 子产品ID枚举值： 开源版："sp_es_io2"， 基础版："sp_es_basic"，白金版："sp_es_platinum"，企业版："sp_es_enterprise"，CDC白金版："sp_es_cdc_platinum"，日志增强版："sp_es_enlogging"，tsearch："sp_tsearch_io2"，logstash："sp_es_logstash" ，可以为空，为空的时候后台取LicenseType映射该字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubProductCode() const;

                    /**
                     * 设置子产品ID枚举值： 开源版："sp_es_io2"， 基础版："sp_es_basic"，白金版："sp_es_platinum"，企业版："sp_es_enterprise"，CDC白金版："sp_es_cdc_platinum"，日志增强版："sp_es_enlogging"，tsearch："sp_tsearch_io2"，logstash："sp_es_logstash" ，可以为空，为空的时候后台取LicenseType映射该字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subProductCode 子产品ID枚举值： 开源版："sp_es_io2"， 基础版："sp_es_basic"，白金版："sp_es_platinum"，企业版："sp_es_enterprise"，CDC白金版："sp_es_cdc_platinum"，日志增强版："sp_es_enlogging"，tsearch："sp_tsearch_io2"，logstash："sp_es_logstash" ，可以为空，为空的时候后台取LicenseType映射该字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubProductCode(const std::string& _subProductCode);

                    /**
                     * 判断参数 SubProductCode 是否已赋值
                     * @return SubProductCode 是否已赋值
                     * 
                     */
                    bool SubProductCodeHasBeenSet() const;

                    /**
                     * 获取存算分离cos用量，单位M
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosBucketStorageSize 存算分离cos用量，单位M
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCosBucketStorageSize() const;

                    /**
                     * 设置存算分离cos用量，单位M
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cosBucketStorageSize 存算分离cos用量，单位M
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCosBucketStorageSize(const uint64_t& _cosBucketStorageSize);

                    /**
                     * 判断参数 CosBucketStorageSize 是否已赋值
                     * @return CosBucketStorageSize 是否已赋值
                     * 
                     */
                    bool CosBucketStorageSizeHasBeenSet() const;

                    /**
                     * 获取读写分离模式：0-不开启，1-本地读写分离，2-远端读写分离
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReadWriteMode 读写分离模式：0-不开启，1-本地读写分离，2-远端读写分离
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetReadWriteMode() const;

                    /**
                     * 设置读写分离模式：0-不开启，1-本地读写分离，2-远端读写分离
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _readWriteMode 读写分离模式：0-不开启，1-本地读写分离，2-远端读写分离
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReadWriteMode(const int64_t& _readWriteMode);

                    /**
                     * 判断参数 ReadWriteMode 是否已赋值
                     * @return ReadWriteMode 是否已赋值
                     * 
                     */
                    bool ReadWriteModeHasBeenSet() const;

                    /**
                     * 获取是否有置放群组异步调度任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableScheduleRecoverGroup 是否有置放群组异步调度任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableScheduleRecoverGroup() const;

                    /**
                     * 设置是否有置放群组异步调度任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableScheduleRecoverGroup 是否有置放群组异步调度任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableScheduleRecoverGroup(const bool& _enableScheduleRecoverGroup);

                    /**
                     * 判断参数 EnableScheduleRecoverGroup 是否已赋值
                     * @return EnableScheduleRecoverGroup 是否已赋值
                     * 
                     */
                    bool EnableScheduleRecoverGroupHasBeenSet() const;

                    /**
                     * 获取异步调度任务的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableScheduleOperationDuration 异步调度任务的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EnableScheduleOperationDuration GetEnableScheduleOperationDuration() const;

                    /**
                     * 设置异步调度任务的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableScheduleOperationDuration 异步调度任务的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableScheduleOperationDuration(const EnableScheduleOperationDuration& _enableScheduleOperationDuration);

                    /**
                     * 判断参数 EnableScheduleOperationDuration 是否已赋值
                     * @return EnableScheduleOperationDuration 是否已赋值
                     * 
                     */
                    bool EnableScheduleOperationDurationHasBeenSet() const;

                    /**
                     * 获取开启集群保护：OPEN-开启，CLOSE-关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableDestroyProtection 开启集群保护：OPEN-开启，CLOSE-关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEnableDestroyProtection() const;

                    /**
                     * 设置开启集群保护：OPEN-开启，CLOSE-关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableDestroyProtection 开启集群保护：OPEN-开启，CLOSE-关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableDestroyProtection(const std::string& _enableDestroyProtection);

                    /**
                     * 判断参数 EnableDestroyProtection 是否已赋值
                     * @return EnableDestroyProtection 是否已赋值
                     * 
                     */
                    bool EnableDestroyProtectionHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 用户ID
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 用户UIN
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 实例所属VPC的UID
                     */
                    std::string m_vpcUid;
                    bool m_vpcUidHasBeenSet;

                    /**
                     * 实例所属子网的UID
                     */
                    std::string m_subnetUid;
                    bool m_subnetUidHasBeenSet;

                    /**
                     * 实例状态，0:处理中,1:正常,-1:停止,-2:销毁中,-3:已销毁, -4:隔离中,2:创建集群时初始化中
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 自动续费标识。取值范围：
RENEW_FLAG_AUTO：自动续费  
RENEW_FLAG_MANUAL：不自动续费
默认取值：
RENEW_FLAG_DEFAULT：不自动续费
若该参数指定为 RENEW_FLAG_AUTO，在账户余额充足的情况下，实例到期后将按月自动续费。
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 实例计费模式。取值范围：  PREPAID：表示预付费，即包年包月  POSTPAID_BY_HOUR：表示后付费，即按量计费  CDHPAID：CDH付费，即只对CDH计费，不对CDH上的实例计费。
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 包年包月购买时长,单位:月
                     */
                    uint64_t m_chargePeriod;
                    bool m_chargePeriodHasBeenSet;

                    /**
                     * 节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 节点个数
                     */
                    uint64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * 节点CPU核数
                     */
                    uint64_t m_cpuNum;
                    bool m_cpuNumHasBeenSet;

                    /**
                     * 节点内存大小，单位GB
                     */
                    uint64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * 节点磁盘类型
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 节点磁盘大小，单位GB
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * ES域名
                     */
                    std::string m_esDomain;
                    bool m_esDomainHasBeenSet;

                    /**
                     * ES VIP
                     */
                    std::string m_esVip;
                    bool m_esVipHasBeenSet;

                    /**
                     * ES端口
                     */
                    uint64_t m_esPort;
                    bool m_esPortHasBeenSet;

                    /**
                     * Kibana访问url
                     */
                    std::string m_kibanaUrl;
                    bool m_kibanaUrlHasBeenSet;

                    /**
                     * ES版本号
                     */
                    std::string m_esVersion;
                    bool m_esVersionHasBeenSet;

                    /**
                     * ES配置项
                     */
                    std::string m_esConfig;
                    bool m_esConfigHasBeenSet;

                    /**
                     * Kibana访问控制配置
                     */
                    EsAcl m_esAcl;
                    bool m_esAclHasBeenSet;

                    /**
                     * 实例创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 实例最后修改操作时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 实例到期时间
                     */
                    std::string m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * 实例类型（实例类型标识，当前只有1,2两种）
                     */
                    uint64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Ik分词器配置
                     */
                    EsDictionaryInfo m_ikConfig;
                    bool m_ikConfigHasBeenSet;

                    /**
                     * 专用主节点配置
                     */
                    MasterNodeInfo m_masterNodeInfo;
                    bool m_masterNodeInfoHasBeenSet;

                    /**
                     * cos自动备份配置
                     */
                    CosBackup m_cosBackup;
                    bool m_cosBackupHasBeenSet;

                    /**
                     * 是否允许cos自动备份
                     */
                    bool m_allowCosBackup;
                    bool m_allowCosBackupHasBeenSet;

                    /**
                     * 实例拥有的标签列表
                     */
                    std::vector<TagInfo> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * License类型<li>oss：开源版</li><li>basic：基础版</li><li>platinum：白金版</li>默认值platinum
                     */
                    std::string m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * 是否为冷热集群<li>true: 冷热集群</li><li>false: 非冷热集群</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableHotWarmMode;
                    bool m_enableHotWarmModeHasBeenSet;

                    /**
                     * 温节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_warmNodeType;
                    bool m_warmNodeTypeHasBeenSet;

                    /**
                     * 温节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_warmNodeNum;
                    bool m_warmNodeNumHasBeenSet;

                    /**
                     * 温节点CPU核数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_warmCpuNum;
                    bool m_warmCpuNumHasBeenSet;

                    /**
                     * 温节点内存内存大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_warmMemSize;
                    bool m_warmMemSizeHasBeenSet;

                    /**
                     * 温节点磁盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_warmDiskType;
                    bool m_warmDiskTypeHasBeenSet;

                    /**
                     * 温节点磁盘大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_warmDiskSize;
                    bool m_warmDiskSizeHasBeenSet;

                    /**
                     * 集群节点信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NodeInfo> m_nodeInfoList;
                    bool m_nodeInfoListHasBeenSet;

                    /**
                     * Es公网地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_esPublicUrl;
                    bool m_esPublicUrlHasBeenSet;

                    /**
                     * 多可用区网络信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ZoneDetail> m_multiZoneInfo;
                    bool m_multiZoneInfoHasBeenSet;

                    /**
                     * 部署模式<li>0：单可用区</li><li>1：多可用区，北京、上海、上海金融、广州、南京、香港、新加坡、法兰克福（白名单控制）</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * ES公网访问状态<li>OPEN：开启</li><li>CLOSE：关闭</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publicAccess;
                    bool m_publicAccessHasBeenSet;

                    /**
                     * ES公网访问控制配置
                     */
                    EsAcl m_esPublicAcl;
                    bool m_esPublicAclHasBeenSet;

                    /**
                     * Kibana内网地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kibanaPrivateUrl;
                    bool m_kibanaPrivateUrlHasBeenSet;

                    /**
                     * Kibana公网访问状态<li>OPEN：开启</li><li>CLOSE：关闭</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kibanaPublicAccess;
                    bool m_kibanaPublicAccessHasBeenSet;

                    /**
                     * Kibana内网访问状态<li>OPEN：开启</li><li>CLOSE：关闭</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kibanaPrivateAccess;
                    bool m_kibanaPrivateAccessHasBeenSet;

                    /**
                     * 6.8（及以上版本）基础版是否开启xpack security认证<li>1：不开启</li><li>2：开启</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_securityType;
                    bool m_securityTypeHasBeenSet;

                    /**
                     * 场景化模板类型：0、不开启；1、通用场景；2、日志场景；3、搜索场景
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * Kibana配置项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kibanaConfig;
                    bool m_kibanaConfigHasBeenSet;

                    /**
                     * Kibana节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KibanaNodeInfo m_kibanaNodeInfo;
                    bool m_kibanaNodeInfoHasBeenSet;

                    /**
                     * 可视化节点配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WebNodeTypeInfo m_webNodeTypeInfo;
                    bool m_webNodeTypeInfoHasBeenSet;

                    /**
                     * JDK类型，oracle或kona
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jdk;
                    bool m_jdkHasBeenSet;

                    /**
                     * 集群网络通讯协议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 安全组id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_securityGroups;
                    bool m_securityGroupsHasBeenSet;

                    /**
                     * 冷节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_coldNodeType;
                    bool m_coldNodeTypeHasBeenSet;

                    /**
                     * 冷节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_coldNodeNum;
                    bool m_coldNodeNumHasBeenSet;

                    /**
                     * 冷节点CPU核数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_coldCpuNum;
                    bool m_coldCpuNumHasBeenSet;

                    /**
                     * 冷节点内存大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_coldMemSize;
                    bool m_coldMemSizeHasBeenSet;

                    /**
                     * 冷节点磁盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_coldDiskType;
                    bool m_coldDiskTypeHasBeenSet;

                    /**
                     * 冷节点磁盘大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_coldDiskSize;
                    bool m_coldDiskSizeHasBeenSet;

                    /**
                     * 冻节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_frozenNodeType;
                    bool m_frozenNodeTypeHasBeenSet;

                    /**
                     * 冻节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_frozenNodeNum;
                    bool m_frozenNodeNumHasBeenSet;

                    /**
                     * 冻节点CPU核数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_frozenCpuNum;
                    bool m_frozenCpuNumHasBeenSet;

                    /**
                     * 冻节点内存大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_frozenMemSize;
                    bool m_frozenMemSizeHasBeenSet;

                    /**
                     * 冻节点磁盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_frozenDiskType;
                    bool m_frozenDiskTypeHasBeenSet;

                    /**
                     * 冻节点磁盘大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_frozenDiskSize;
                    bool m_frozenDiskSizeHasBeenSet;

                    /**
                     * 集群健康状态 -1 未知；0 Green; 1 Yellow; 2 Red
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_healthStatus;
                    bool m_healthStatusHasBeenSet;

                    /**
                     * https集群内网url
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_esPrivateUrl;
                    bool m_esPrivateUrlHasBeenSet;

                    /**
                     * https集群内网域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_esPrivateDomain;
                    bool m_esPrivateDomainHasBeenSet;

                    /**
                     * 集群的配置组信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EsConfigSetInfo> m_esConfigSets;
                    bool m_esConfigSetsHasBeenSet;

                    /**
                     * 集群可维护时间段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OperationDuration m_operationDuration;
                    bool m_operationDurationHasBeenSet;

                    /**
                     * web节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OptionalWebServiceInfo> m_optionalWebServiceInfos;
                    bool m_optionalWebServiceInfosHasBeenSet;

                    /**
                     * 自治索引开关
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_autoIndexEnabled;
                    bool m_autoIndexEnabledHasBeenSet;

                    /**
                     * 是否支持存储计算分离
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableHybridStorage;
                    bool m_enableHybridStorageHasBeenSet;

                    /**
                     * 流程进度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_processPercent;
                    bool m_processPercentHasBeenSet;

                    /**
                     * Kibana的alerting外网告警策略<li>OPEN：开启</li><li>CLOSE：关闭</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kibanaAlteringPublicAccess;
                    bool m_kibanaAlteringPublicAccessHasBeenSet;

                    /**
                     * 本月是否有内核可以更新：false-无，true-有
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_hasKernelUpgrade;
                    bool m_hasKernelUpgradeHasBeenSet;

                    /**
                     * cdcId，使用cdc子网时传递
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                    /**
                     * kibana内网vip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kibanaPrivateVip;
                    bool m_kibanaPrivateVipHasBeenSet;

                    /**
                     * 自定义kibana内网url
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_customKibanaPrivateUrl;
                    bool m_customKibanaPrivateUrlHasBeenSet;

                    /**
                     * 节点出站访问详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OutboundPublicAcl> m_outboundPublicAcls;
                    bool m_outboundPublicAclsHasBeenSet;

                    /**
                     * 网络连接方案
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_netConnectScheme;
                    bool m_netConnectSchemeHasBeenSet;

                    /**
                     * 置放群组相关参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_disasterRecoverGroupAffinity;
                    bool m_disasterRecoverGroupAffinityHasBeenSet;

                    /**
                     * 子产品ID枚举值： 开源版："sp_es_io2"， 基础版："sp_es_basic"，白金版："sp_es_platinum"，企业版："sp_es_enterprise"，CDC白金版："sp_es_cdc_platinum"，日志增强版："sp_es_enlogging"，tsearch："sp_tsearch_io2"，logstash："sp_es_logstash" ，可以为空，为空的时候后台取LicenseType映射该字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subProductCode;
                    bool m_subProductCodeHasBeenSet;

                    /**
                     * 存算分离cos用量，单位M
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_cosBucketStorageSize;
                    bool m_cosBucketStorageSizeHasBeenSet;

                    /**
                     * 读写分离模式：0-不开启，1-本地读写分离，2-远端读写分离
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_readWriteMode;
                    bool m_readWriteModeHasBeenSet;

                    /**
                     * 是否有置放群组异步调度任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableScheduleRecoverGroup;
                    bool m_enableScheduleRecoverGroupHasBeenSet;

                    /**
                     * 异步调度任务的时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EnableScheduleOperationDuration m_enableScheduleOperationDuration;
                    bool m_enableScheduleOperationDurationHasBeenSet;

                    /**
                     * 开启集群保护：OPEN-开启，CLOSE-关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_enableDestroyProtection;
                    bool m_enableDestroyProtectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_INSTANCEINFO_H_
