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
                     * @return InstanceName 实例名称
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param InstanceName 实例名称
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Region 地域
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param Region 地域
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取可用区
                     * @return Zone 可用区
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param Zone 可用区
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取用户ID
                     * @return AppId 用户ID
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置用户ID
                     * @param AppId 用户ID
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取用户UIN
                     * @return Uin 用户UIN
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户UIN
                     * @param Uin 用户UIN
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取实例所属VPC的UID
                     * @return VpcUid 实例所属VPC的UID
                     */
                    std::string GetVpcUid() const;

                    /**
                     * 设置实例所属VPC的UID
                     * @param VpcUid 实例所属VPC的UID
                     */
                    void SetVpcUid(const std::string& _vpcUid);

                    /**
                     * 判断参数 VpcUid 是否已赋值
                     * @return VpcUid 是否已赋值
                     */
                    bool VpcUidHasBeenSet() const;

                    /**
                     * 获取实例所属子网的UID
                     * @return SubnetUid 实例所属子网的UID
                     */
                    std::string GetSubnetUid() const;

                    /**
                     * 设置实例所属子网的UID
                     * @param SubnetUid 实例所属子网的UID
                     */
                    void SetSubnetUid(const std::string& _subnetUid);

                    /**
                     * 判断参数 SubnetUid 是否已赋值
                     * @return SubnetUid 是否已赋值
                     */
                    bool SubnetUidHasBeenSet() const;

                    /**
                     * 获取实例状态，0:处理中,1:正常,-1停止,-2:销毁中,-3:已销毁
                     * @return Status 实例状态，0:处理中,1:正常,-1停止,-2:销毁中,-3:已销毁
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置实例状态，0:处理中,1:正常,-1停止,-2:销毁中,-3:已销毁
                     * @param Status 实例状态，0:处理中,1:正常,-1停止,-2:销毁中,-3:已销毁
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取实例计费模式。取值范围：  PREPAID：表示预付费，即包年包月  POSTPAID_BY_HOUR：表示后付费，即按量计费  CDHPAID：CDH付费，即只对CDH计费，不对CDH上的实例计费。
                     * @return ChargeType 实例计费模式。取值范围：  PREPAID：表示预付费，即包年包月  POSTPAID_BY_HOUR：表示后付费，即按量计费  CDHPAID：CDH付费，即只对CDH计费，不对CDH上的实例计费。
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置实例计费模式。取值范围：  PREPAID：表示预付费，即包年包月  POSTPAID_BY_HOUR：表示后付费，即按量计费  CDHPAID：CDH付费，即只对CDH计费，不对CDH上的实例计费。
                     * @param ChargeType 实例计费模式。取值范围：  PREPAID：表示预付费，即包年包月  POSTPAID_BY_HOUR：表示后付费，即按量计费  CDHPAID：CDH付费，即只对CDH计费，不对CDH上的实例计费。
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取包年包月购买时长,单位:月
                     * @return ChargePeriod 包年包月购买时长,单位:月
                     */
                    uint64_t GetChargePeriod() const;

                    /**
                     * 设置包年包月购买时长,单位:月
                     * @param ChargePeriod 包年包月购买时长,单位:月
                     */
                    void SetChargePeriod(const uint64_t& _chargePeriod);

                    /**
                     * 判断参数 ChargePeriod 是否已赋值
                     * @return ChargePeriod 是否已赋值
                     */
                    bool ChargePeriodHasBeenSet() const;

                    /**
                     * 获取自动续费标识。取值范围：  NOTIFY_AND_AUTO_RENEW：通知过期且自动续费  NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费  DISABLE_NOTIFY_AND_MANUAL_RENEW：不通知过期不自动续费  默认取值：NOTIFY_AND_AUTO_RENEW。若该参数指定为NOTIFY_AND_AUTO_RENEW，在账户余额充足的情况下，实例到期后将按月自动续费。
                     * @return RenewFlag 自动续费标识。取值范围：  NOTIFY_AND_AUTO_RENEW：通知过期且自动续费  NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费  DISABLE_NOTIFY_AND_MANUAL_RENEW：不通知过期不自动续费  默认取值：NOTIFY_AND_AUTO_RENEW。若该参数指定为NOTIFY_AND_AUTO_RENEW，在账户余额充足的情况下，实例到期后将按月自动续费。
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置自动续费标识。取值范围：  NOTIFY_AND_AUTO_RENEW：通知过期且自动续费  NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费  DISABLE_NOTIFY_AND_MANUAL_RENEW：不通知过期不自动续费  默认取值：NOTIFY_AND_AUTO_RENEW。若该参数指定为NOTIFY_AND_AUTO_RENEW，在账户余额充足的情况下，实例到期后将按月自动续费。
                     * @param RenewFlag 自动续费标识。取值范围：  NOTIFY_AND_AUTO_RENEW：通知过期且自动续费  NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费  DISABLE_NOTIFY_AND_MANUAL_RENEW：不通知过期不自动续费  默认取值：NOTIFY_AND_AUTO_RENEW。若该参数指定为NOTIFY_AND_AUTO_RENEW，在账户余额充足的情况下，实例到期后将按月自动续费。
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
                     * @return NodeType 节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
                     * @param NodeType 节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取节点个数
                     * @return NodeNum 节点个数
                     */
                    uint64_t GetNodeNum() const;

                    /**
                     * 设置节点个数
                     * @param NodeNum 节点个数
                     */
                    void SetNodeNum(const uint64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取节点CPU核数
                     * @return CpuNum 节点CPU核数
                     */
                    uint64_t GetCpuNum() const;

                    /**
                     * 设置节点CPU核数
                     * @param CpuNum 节点CPU核数
                     */
                    void SetCpuNum(const uint64_t& _cpuNum);

                    /**
                     * 判断参数 CpuNum 是否已赋值
                     * @return CpuNum 是否已赋值
                     */
                    bool CpuNumHasBeenSet() const;

                    /**
                     * 获取节点内存大小，单位GB
                     * @return MemSize 节点内存大小，单位GB
                     */
                    uint64_t GetMemSize() const;

                    /**
                     * 设置节点内存大小，单位GB
                     * @param MemSize 节点内存大小，单位GB
                     */
                    void SetMemSize(const uint64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取节点磁盘类型
                     * @return DiskType 节点磁盘类型
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置节点磁盘类型
                     * @param DiskType 节点磁盘类型
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取节点磁盘大小，单位GB
                     * @return DiskSize 节点磁盘大小，单位GB
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置节点磁盘大小，单位GB
                     * @param DiskSize 节点磁盘大小，单位GB
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取ES域名
                     * @return EsDomain ES域名
                     */
                    std::string GetEsDomain() const;

                    /**
                     * 设置ES域名
                     * @param EsDomain ES域名
                     */
                    void SetEsDomain(const std::string& _esDomain);

                    /**
                     * 判断参数 EsDomain 是否已赋值
                     * @return EsDomain 是否已赋值
                     */
                    bool EsDomainHasBeenSet() const;

                    /**
                     * 获取ES VIP
                     * @return EsVip ES VIP
                     */
                    std::string GetEsVip() const;

                    /**
                     * 设置ES VIP
                     * @param EsVip ES VIP
                     */
                    void SetEsVip(const std::string& _esVip);

                    /**
                     * 判断参数 EsVip 是否已赋值
                     * @return EsVip 是否已赋值
                     */
                    bool EsVipHasBeenSet() const;

                    /**
                     * 获取ES端口
                     * @return EsPort ES端口
                     */
                    uint64_t GetEsPort() const;

                    /**
                     * 设置ES端口
                     * @param EsPort ES端口
                     */
                    void SetEsPort(const uint64_t& _esPort);

                    /**
                     * 判断参数 EsPort 是否已赋值
                     * @return EsPort 是否已赋值
                     */
                    bool EsPortHasBeenSet() const;

                    /**
                     * 获取Kibana访问url
                     * @return KibanaUrl Kibana访问url
                     */
                    std::string GetKibanaUrl() const;

                    /**
                     * 设置Kibana访问url
                     * @param KibanaUrl Kibana访问url
                     */
                    void SetKibanaUrl(const std::string& _kibanaUrl);

                    /**
                     * 判断参数 KibanaUrl 是否已赋值
                     * @return KibanaUrl 是否已赋值
                     */
                    bool KibanaUrlHasBeenSet() const;

                    /**
                     * 获取ES版本号
                     * @return EsVersion ES版本号
                     */
                    std::string GetEsVersion() const;

                    /**
                     * 设置ES版本号
                     * @param EsVersion ES版本号
                     */
                    void SetEsVersion(const std::string& _esVersion);

                    /**
                     * 判断参数 EsVersion 是否已赋值
                     * @return EsVersion 是否已赋值
                     */
                    bool EsVersionHasBeenSet() const;

                    /**
                     * 获取ES配置项
                     * @return EsConfig ES配置项
                     */
                    std::string GetEsConfig() const;

                    /**
                     * 设置ES配置项
                     * @param EsConfig ES配置项
                     */
                    void SetEsConfig(const std::string& _esConfig);

                    /**
                     * 判断参数 EsConfig 是否已赋值
                     * @return EsConfig 是否已赋值
                     */
                    bool EsConfigHasBeenSet() const;

                    /**
                     * 获取ES访问控制配置
                     * @return EsAcl ES访问控制配置
                     */
                    EsAcl GetEsAcl() const;

                    /**
                     * 设置ES访问控制配置
                     * @param EsAcl ES访问控制配置
                     */
                    void SetEsAcl(const EsAcl& _esAcl);

                    /**
                     * 判断参数 EsAcl 是否已赋值
                     * @return EsAcl 是否已赋值
                     */
                    bool EsAclHasBeenSet() const;

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
                     * 获取实例最后修改操作时间
                     * @return UpdateTime 实例最后修改操作时间
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置实例最后修改操作时间
                     * @param UpdateTime 实例最后修改操作时间
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取实例到期时间
                     * @return Deadline 实例到期时间
                     */
                    std::string GetDeadline() const;

                    /**
                     * 设置实例到期时间
                     * @param Deadline 实例到期时间
                     */
                    void SetDeadline(const std::string& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取实例类型（实例类型标识，当前只有1,2两种）
                     * @return InstanceType 实例类型（实例类型标识，当前只有1,2两种）
                     */
                    uint64_t GetInstanceType() const;

                    /**
                     * 设置实例类型（实例类型标识，当前只有1,2两种）
                     * @param InstanceType 实例类型（实例类型标识，当前只有1,2两种）
                     */
                    void SetInstanceType(const uint64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Ik分词器配置
                     * @return IkConfig Ik分词器配置
                     */
                    EsDictionaryInfo GetIkConfig() const;

                    /**
                     * 设置Ik分词器配置
                     * @param IkConfig Ik分词器配置
                     */
                    void SetIkConfig(const EsDictionaryInfo& _ikConfig);

                    /**
                     * 判断参数 IkConfig 是否已赋值
                     * @return IkConfig 是否已赋值
                     */
                    bool IkConfigHasBeenSet() const;

                    /**
                     * 获取专用主节点配置
                     * @return MasterNodeInfo 专用主节点配置
                     */
                    MasterNodeInfo GetMasterNodeInfo() const;

                    /**
                     * 设置专用主节点配置
                     * @param MasterNodeInfo 专用主节点配置
                     */
                    void SetMasterNodeInfo(const MasterNodeInfo& _masterNodeInfo);

                    /**
                     * 判断参数 MasterNodeInfo 是否已赋值
                     * @return MasterNodeInfo 是否已赋值
                     */
                    bool MasterNodeInfoHasBeenSet() const;

                    /**
                     * 获取cos自动备份配置
                     * @return CosBackup cos自动备份配置
                     */
                    CosBackup GetCosBackup() const;

                    /**
                     * 设置cos自动备份配置
                     * @param CosBackup cos自动备份配置
                     */
                    void SetCosBackup(const CosBackup& _cosBackup);

                    /**
                     * 判断参数 CosBackup 是否已赋值
                     * @return CosBackup 是否已赋值
                     */
                    bool CosBackupHasBeenSet() const;

                    /**
                     * 获取是否允许cos自动备份
                     * @return AllowCosBackup 是否允许cos自动备份
                     */
                    bool GetAllowCosBackup() const;

                    /**
                     * 设置是否允许cos自动备份
                     * @param AllowCosBackup 是否允许cos自动备份
                     */
                    void SetAllowCosBackup(const bool& _allowCosBackup);

                    /**
                     * 判断参数 AllowCosBackup 是否已赋值
                     * @return AllowCosBackup 是否已赋值
                     */
                    bool AllowCosBackupHasBeenSet() const;

                    /**
                     * 获取实例拥有的标签列表
                     * @return TagList 实例拥有的标签列表
                     */
                    std::vector<TagInfo> GetTagList() const;

                    /**
                     * 设置实例拥有的标签列表
                     * @param TagList 实例拥有的标签列表
                     */
                    void SetTagList(const std::vector<TagInfo>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取License类型<li>oss：开源版</li><li>basic：基础版</li><li>platinum：白金版</li>默认值platinum
                     * @return LicenseType License类型<li>oss：开源版</li><li>basic：基础版</li><li>platinum：白金版</li>默认值platinum
                     */
                    std::string GetLicenseType() const;

                    /**
                     * 设置License类型<li>oss：开源版</li><li>basic：基础版</li><li>platinum：白金版</li>默认值platinum
                     * @param LicenseType License类型<li>oss：开源版</li><li>basic：基础版</li><li>platinum：白金版</li>默认值platinum
                     */
                    void SetLicenseType(const std::string& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     */
                    bool LicenseTypeHasBeenSet() const;

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
                     * 实例状态，0:处理中,1:正常,-1停止,-2:销毁中,-3:已销毁
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

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
                     * 自动续费标识。取值范围：  NOTIFY_AND_AUTO_RENEW：通知过期且自动续费  NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费  DISABLE_NOTIFY_AND_MANUAL_RENEW：不通知过期不自动续费  默认取值：NOTIFY_AND_AUTO_RENEW。若该参数指定为NOTIFY_AND_AUTO_RENEW，在账户余额充足的情况下，实例到期后将按月自动续费。
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

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
                     * ES访问控制配置
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_INSTANCEINFO_H_
