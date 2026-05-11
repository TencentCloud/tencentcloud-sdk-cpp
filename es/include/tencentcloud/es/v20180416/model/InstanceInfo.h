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
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>实例名称</p>
                     * @return InstanceName <p>实例名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称</p>
                     * @param _instanceName <p>实例名称</p>
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
                     * 获取<p>地域</p>
                     * @return Region <p>地域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域</p>
                     * @param _region <p>地域</p>
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
                     * 获取<p>可用区</p>
                     * @return Zone <p>可用区</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区</p>
                     * @param _zone <p>可用区</p>
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
                     * 获取<p>用户ID</p>
                     * @return AppId <p>用户ID</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>用户ID</p>
                     * @param _appId <p>用户ID</p>
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
                     * 获取<p>用户UIN</p>
                     * @return Uin <p>用户UIN</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>用户UIN</p>
                     * @param _uin <p>用户UIN</p>
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
                     * 获取<p>实例所属VPC的UID</p>
                     * @return VpcUid <p>实例所属VPC的UID</p>
                     * 
                     */
                    std::string GetVpcUid() const;

                    /**
                     * 设置<p>实例所属VPC的UID</p>
                     * @param _vpcUid <p>实例所属VPC的UID</p>
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
                     * 获取<p>实例所属子网的UID</p>
                     * @return SubnetUid <p>实例所属子网的UID</p>
                     * 
                     */
                    std::string GetSubnetUid() const;

                    /**
                     * 设置<p>实例所属子网的UID</p>
                     * @param _subnetUid <p>实例所属子网的UID</p>
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
                     * 获取<p>实例状态，0:处理中,1:正常,-1:停止,-2:销毁中,-3:已销毁, -4:隔离中,2:创建集群时初始化中</p>
                     * @return Status <p>实例状态，0:处理中,1:正常,-1:停止,-2:销毁中,-3:已销毁, -4:隔离中,2:创建集群时初始化中</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>实例状态，0:处理中,1:正常,-1:停止,-2:销毁中,-3:已销毁, -4:隔离中,2:创建集群时初始化中</p>
                     * @param _status <p>实例状态，0:处理中,1:正常,-1:停止,-2:销毁中,-3:已销毁, -4:隔离中,2:创建集群时初始化中</p>
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
                     * 获取<p>自动续费标识。取值范围：<br>RENEW_FLAG_AUTO：自动续费<br>RENEW_FLAG_MANUAL：不自动续费<br>默认取值：<br>RENEW_FLAG_DEFAULT：不自动续费<br>若该参数指定为 RENEW_FLAG_AUTO，在账户余额充足的情况下，实例到期后将按月自动续费。</p>
                     * @return RenewFlag <p>自动续费标识。取值范围：<br>RENEW_FLAG_AUTO：自动续费<br>RENEW_FLAG_MANUAL：不自动续费<br>默认取值：<br>RENEW_FLAG_DEFAULT：不自动续费<br>若该参数指定为 RENEW_FLAG_AUTO，在账户余额充足的情况下，实例到期后将按月自动续费。</p>
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置<p>自动续费标识。取值范围：<br>RENEW_FLAG_AUTO：自动续费<br>RENEW_FLAG_MANUAL：不自动续费<br>默认取值：<br>RENEW_FLAG_DEFAULT：不自动续费<br>若该参数指定为 RENEW_FLAG_AUTO，在账户余额充足的情况下，实例到期后将按月自动续费。</p>
                     * @param _renewFlag <p>自动续费标识。取值范围：<br>RENEW_FLAG_AUTO：自动续费<br>RENEW_FLAG_MANUAL：不自动续费<br>默认取值：<br>RENEW_FLAG_DEFAULT：不自动续费<br>若该参数指定为 RENEW_FLAG_AUTO，在账户余额充足的情况下，实例到期后将按月自动续费。</p>
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
                     * 获取<p>实例计费模式。取值范围：  PREPAID：表示预付费，即包年包月  POSTPAID_BY_HOUR：表示后付费，即按量计费  CDHPAID：CDH付费，即只对CDH计费，不对CDH上的实例计费。</p>
                     * @return ChargeType <p>实例计费模式。取值范围：  PREPAID：表示预付费，即包年包月  POSTPAID_BY_HOUR：表示后付费，即按量计费  CDHPAID：CDH付费，即只对CDH计费，不对CDH上的实例计费。</p>
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置<p>实例计费模式。取值范围：  PREPAID：表示预付费，即包年包月  POSTPAID_BY_HOUR：表示后付费，即按量计费  CDHPAID：CDH付费，即只对CDH计费，不对CDH上的实例计费。</p>
                     * @param _chargeType <p>实例计费模式。取值范围：  PREPAID：表示预付费，即包年包月  POSTPAID_BY_HOUR：表示后付费，即按量计费  CDHPAID：CDH付费，即只对CDH计费，不对CDH上的实例计费。</p>
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
                     * 获取<p>包年包月购买时长,单位:月</p>
                     * @return ChargePeriod <p>包年包月购买时长,单位:月</p>
                     * 
                     */
                    uint64_t GetChargePeriod() const;

                    /**
                     * 设置<p>包年包月购买时长,单位:月</p>
                     * @param _chargePeriod <p>包年包月购买时长,单位:月</p>
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
                     * 获取<p>节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
                     * @return NodeType <p>节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置<p>节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
                     * @param _nodeType <p>节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
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
                     * 获取<p>节点个数</p>
                     * @return NodeNum <p>节点个数</p>
                     * 
                     */
                    uint64_t GetNodeNum() const;

                    /**
                     * 设置<p>节点个数</p>
                     * @param _nodeNum <p>节点个数</p>
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
                     * 获取<p>节点CPU核数</p>
                     * @return CpuNum <p>节点CPU核数</p>
                     * 
                     */
                    uint64_t GetCpuNum() const;

                    /**
                     * 设置<p>节点CPU核数</p>
                     * @param _cpuNum <p>节点CPU核数</p>
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
                     * 获取<p>节点内存大小，单位GB</p>
                     * @return MemSize <p>节点内存大小，单位GB</p>
                     * 
                     */
                    uint64_t GetMemSize() const;

                    /**
                     * 设置<p>节点内存大小，单位GB</p>
                     * @param _memSize <p>节点内存大小，单位GB</p>
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
                     * 获取<p>节点磁盘类型</p>
                     * @return DiskType <p>节点磁盘类型</p>
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置<p>节点磁盘类型</p>
                     * @param _diskType <p>节点磁盘类型</p>
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
                     * 获取<p>节点磁盘大小，单位GB</p>
                     * @return DiskSize <p>节点磁盘大小，单位GB</p>
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置<p>节点磁盘大小，单位GB</p>
                     * @param _diskSize <p>节点磁盘大小，单位GB</p>
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
                     * 获取<p>ES域名</p>
                     * @return EsDomain <p>ES域名</p>
                     * 
                     */
                    std::string GetEsDomain() const;

                    /**
                     * 设置<p>ES域名</p>
                     * @param _esDomain <p>ES域名</p>
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
                     * 获取<p>ES VIP</p>
                     * @return EsVip <p>ES VIP</p>
                     * 
                     */
                    std::string GetEsVip() const;

                    /**
                     * 设置<p>ES VIP</p>
                     * @param _esVip <p>ES VIP</p>
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
                     * 获取<p>ES端口</p>
                     * @return EsPort <p>ES端口</p>
                     * 
                     */
                    uint64_t GetEsPort() const;

                    /**
                     * 设置<p>ES端口</p>
                     * @param _esPort <p>ES端口</p>
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
                     * 获取<p>Kibana访问url</p>
                     * @return KibanaUrl <p>Kibana访问url</p>
                     * 
                     */
                    std::string GetKibanaUrl() const;

                    /**
                     * 设置<p>Kibana访问url</p>
                     * @param _kibanaUrl <p>Kibana访问url</p>
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
                     * 获取<p>ES版本号</p>
                     * @return EsVersion <p>ES版本号</p>
                     * 
                     */
                    std::string GetEsVersion() const;

                    /**
                     * 设置<p>ES版本号</p>
                     * @param _esVersion <p>ES版本号</p>
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
                     * 获取<p>ES配置项</p>
                     * @return EsConfig <p>ES配置项</p>
                     * 
                     */
                    std::string GetEsConfig() const;

                    /**
                     * 设置<p>ES配置项</p>
                     * @param _esConfig <p>ES配置项</p>
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
                     * 获取<p>Kibana访问控制配置</p>
                     * @return EsAcl <p>Kibana访问控制配置</p>
                     * 
                     */
                    EsAcl GetEsAcl() const;

                    /**
                     * 设置<p>Kibana访问控制配置</p>
                     * @param _esAcl <p>Kibana访问控制配置</p>
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
                     * 获取<p>实例创建时间</p>
                     * @return CreateTime <p>实例创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>实例创建时间</p>
                     * @param _createTime <p>实例创建时间</p>
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
                     * 获取<p>实例最后修改操作时间</p>
                     * @return UpdateTime <p>实例最后修改操作时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>实例最后修改操作时间</p>
                     * @param _updateTime <p>实例最后修改操作时间</p>
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
                     * 获取<p>实例到期时间</p>
                     * @return Deadline <p>实例到期时间</p>
                     * 
                     */
                    std::string GetDeadline() const;

                    /**
                     * 设置<p>实例到期时间</p>
                     * @param _deadline <p>实例到期时间</p>
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
                     * 获取<p>实例类型（实例类型标识，当前只有1,2两种）</p>
                     * @return InstanceType <p>实例类型（实例类型标识，当前只有1,2两种）</p>
                     * 
                     */
                    uint64_t GetInstanceType() const;

                    /**
                     * 设置<p>实例类型（实例类型标识，当前只有1,2两种）</p>
                     * @param _instanceType <p>实例类型（实例类型标识，当前只有1,2两种）</p>
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
                     * 获取<p>Ik分词器配置</p>
                     * @return IkConfig <p>Ik分词器配置</p>
                     * 
                     */
                    EsDictionaryInfo GetIkConfig() const;

                    /**
                     * 设置<p>Ik分词器配置</p>
                     * @param _ikConfig <p>Ik分词器配置</p>
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
                     * 获取<p>专用主节点配置</p>
                     * @return MasterNodeInfo <p>专用主节点配置</p>
                     * 
                     */
                    MasterNodeInfo GetMasterNodeInfo() const;

                    /**
                     * 设置<p>专用主节点配置</p>
                     * @param _masterNodeInfo <p>专用主节点配置</p>
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
                     * 获取<p>cos自动备份配置</p>
                     * @return CosBackup <p>cos自动备份配置</p>
                     * 
                     */
                    CosBackup GetCosBackup() const;

                    /**
                     * 设置<p>cos自动备份配置</p>
                     * @param _cosBackup <p>cos自动备份配置</p>
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
                     * 获取<p>是否允许cos自动备份</p>
                     * @return AllowCosBackup <p>是否允许cos自动备份</p>
                     * 
                     */
                    bool GetAllowCosBackup() const;

                    /**
                     * 设置<p>是否允许cos自动备份</p>
                     * @param _allowCosBackup <p>是否允许cos自动备份</p>
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
                     * 获取<p>实例拥有的标签列表</p>
                     * @return TagList <p>实例拥有的标签列表</p>
                     * 
                     */
                    std::vector<TagInfo> GetTagList() const;

                    /**
                     * 设置<p>实例拥有的标签列表</p>
                     * @param _tagList <p>实例拥有的标签列表</p>
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
                     * 获取<p>License类型<li>oss：开源版</li><li>basic：基础版</li><li>platinum：白金版</li>默认值platinum</p>
                     * @return LicenseType <p>License类型<li>oss：开源版</li><li>basic：基础版</li><li>platinum：白金版</li>默认值platinum</p>
                     * 
                     */
                    std::string GetLicenseType() const;

                    /**
                     * 设置<p>License类型<li>oss：开源版</li><li>basic：基础版</li><li>platinum：白金版</li>默认值platinum</p>
                     * @param _licenseType <p>License类型<li>oss：开源版</li><li>basic：基础版</li><li>platinum：白金版</li>默认值platinum</p>
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
                     * 获取<p>是否为冷热集群<li>true: 冷热集群</li><li>false: 非冷热集群</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableHotWarmMode <p>是否为冷热集群<li>true: 冷热集群</li><li>false: 非冷热集群</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableHotWarmMode() const;

                    /**
                     * 设置<p>是否为冷热集群<li>true: 冷热集群</li><li>false: 非冷热集群</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableHotWarmMode <p>是否为冷热集群<li>true: 冷热集群</li><li>false: 非冷热集群</li></p>
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
                     * 获取<p>温节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WarmNodeType <p>温节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWarmNodeType() const;

                    /**
                     * 设置<p>温节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _warmNodeType <p>温节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
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
                     * 获取<p>温节点个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WarmNodeNum <p>温节点个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetWarmNodeNum() const;

                    /**
                     * 设置<p>温节点个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _warmNodeNum <p>温节点个数</p>
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
                     * 获取<p>温节点CPU核数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WarmCpuNum <p>温节点CPU核数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetWarmCpuNum() const;

                    /**
                     * 设置<p>温节点CPU核数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _warmCpuNum <p>温节点CPU核数</p>
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
                     * 获取<p>温节点内存内存大小，单位GB</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WarmMemSize <p>温节点内存内存大小，单位GB</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetWarmMemSize() const;

                    /**
                     * 设置<p>温节点内存内存大小，单位GB</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _warmMemSize <p>温节点内存内存大小，单位GB</p>
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
                     * 获取<p>温节点磁盘类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WarmDiskType <p>温节点磁盘类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWarmDiskType() const;

                    /**
                     * 设置<p>温节点磁盘类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _warmDiskType <p>温节点磁盘类型</p>
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
                     * 获取<p>温节点磁盘大小，单位GB</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WarmDiskSize <p>温节点磁盘大小，单位GB</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetWarmDiskSize() const;

                    /**
                     * 设置<p>温节点磁盘大小，单位GB</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _warmDiskSize <p>温节点磁盘大小，单位GB</p>
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
                     * 获取<p>集群节点信息列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeInfoList <p>集群节点信息列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NodeInfo> GetNodeInfoList() const;

                    /**
                     * 设置<p>集群节点信息列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeInfoList <p>集群节点信息列表</p>
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
                     * 获取<p>Es公网地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EsPublicUrl <p>Es公网地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEsPublicUrl() const;

                    /**
                     * 设置<p>Es公网地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _esPublicUrl <p>Es公网地址</p>
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
                     * 获取<p>多可用区网络信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MultiZoneInfo <p>多可用区网络信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ZoneDetail> GetMultiZoneInfo() const;

                    /**
                     * 设置<p>多可用区网络信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _multiZoneInfo <p>多可用区网络信息</p>
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
                     * 获取<p>部署模式<li>0：单可用区</li><li>1：多可用区，北京、上海、上海金融、广州、南京、香港、新加坡、法兰克福（白名单控制）</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeployMode <p>部署模式<li>0：单可用区</li><li>1：多可用区，北京、上海、上海金融、广州、南京、香港、新加坡、法兰克福（白名单控制）</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDeployMode() const;

                    /**
                     * 设置<p>部署模式<li>0：单可用区</li><li>1：多可用区，北京、上海、上海金融、广州、南京、香港、新加坡、法兰克福（白名单控制）</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deployMode <p>部署模式<li>0：单可用区</li><li>1：多可用区，北京、上海、上海金融、广州、南京、香港、新加坡、法兰克福（白名单控制）</li></p>
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
                     * 获取<p>ES公网访问状态<li>OPEN：开启</li><li>CLOSE：关闭</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicAccess <p>ES公网访问状态<li>OPEN：开启</li><li>CLOSE：关闭</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPublicAccess() const;

                    /**
                     * 设置<p>ES公网访问状态<li>OPEN：开启</li><li>CLOSE：关闭</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicAccess <p>ES公网访问状态<li>OPEN：开启</li><li>CLOSE：关闭</li></p>
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
                     * 获取<p>ES公网访问控制配置</p>
                     * @return EsPublicAcl <p>ES公网访问控制配置</p>
                     * 
                     */
                    EsAcl GetEsPublicAcl() const;

                    /**
                     * 设置<p>ES公网访问控制配置</p>
                     * @param _esPublicAcl <p>ES公网访问控制配置</p>
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
                     * 获取<p>Kibana内网地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KibanaPrivateUrl <p>Kibana内网地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKibanaPrivateUrl() const;

                    /**
                     * 设置<p>Kibana内网地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kibanaPrivateUrl <p>Kibana内网地址</p>
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
                     * 获取<p>Kibana公网访问状态<li>OPEN：开启</li><li>CLOSE：关闭</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KibanaPublicAccess <p>Kibana公网访问状态<li>OPEN：开启</li><li>CLOSE：关闭</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKibanaPublicAccess() const;

                    /**
                     * 设置<p>Kibana公网访问状态<li>OPEN：开启</li><li>CLOSE：关闭</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kibanaPublicAccess <p>Kibana公网访问状态<li>OPEN：开启</li><li>CLOSE：关闭</li></p>
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
                     * 获取<p>Kibana内网访问状态<li>OPEN：开启</li><li>CLOSE：关闭</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KibanaPrivateAccess <p>Kibana内网访问状态<li>OPEN：开启</li><li>CLOSE：关闭</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKibanaPrivateAccess() const;

                    /**
                     * 设置<p>Kibana内网访问状态<li>OPEN：开启</li><li>CLOSE：关闭</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kibanaPrivateAccess <p>Kibana内网访问状态<li>OPEN：开启</li><li>CLOSE：关闭</li></p>
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
                     * 获取<p>6.8（及以上版本）基础版是否开启xpack security认证<li>1：不开启</li><li>2：开启</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecurityType <p>6.8（及以上版本）基础版是否开启xpack security认证<li>1：不开启</li><li>2：开启</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSecurityType() const;

                    /**
                     * 设置<p>6.8（及以上版本）基础版是否开启xpack security认证<li>1：不开启</li><li>2：开启</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _securityType <p>6.8（及以上版本）基础版是否开启xpack security认证<li>1：不开启</li><li>2：开启</li></p>
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
                     * 获取<p>场景化模板类型：0、不开启；1、通用场景；2、日志场景；3、搜索场景</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SceneType <p>场景化模板类型：0、不开启；1、通用场景；2、日志场景；3、搜索场景</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSceneType() const;

                    /**
                     * 设置<p>场景化模板类型：0、不开启；1、通用场景；2、日志场景；3、搜索场景</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sceneType <p>场景化模板类型：0、不开启；1、通用场景；2、日志场景；3、搜索场景</p>
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
                     * 获取<p>Kibana配置项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KibanaConfig <p>Kibana配置项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKibanaConfig() const;

                    /**
                     * 设置<p>Kibana配置项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kibanaConfig <p>Kibana配置项</p>
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
                     * 获取<p>Kibana节点信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KibanaNodeInfo <p>Kibana节点信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KibanaNodeInfo GetKibanaNodeInfo() const;

                    /**
                     * 设置<p>Kibana节点信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kibanaNodeInfo <p>Kibana节点信息</p>
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
                     * 获取<p>可视化节点配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WebNodeTypeInfo <p>可视化节点配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WebNodeTypeInfo GetWebNodeTypeInfo() const;

                    /**
                     * 设置<p>可视化节点配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _webNodeTypeInfo <p>可视化节点配置</p>
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
                     * 获取<p>JDK类型，oracle或kona</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Jdk <p>JDK类型，oracle或kona</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJdk() const;

                    /**
                     * 设置<p>JDK类型，oracle或kona</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jdk <p>JDK类型，oracle或kona</p>
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
                     * 获取<p>集群网络通讯协议</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Protocol <p>集群网络通讯协议</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>集群网络通讯协议</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _protocol <p>集群网络通讯协议</p>
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
                     * 获取<p>安全组id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecurityGroups <p>安全组id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroups() const;

                    /**
                     * 设置<p>安全组id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _securityGroups <p>安全组id</p>
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
                     * 获取<p>冷节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColdNodeType <p>冷节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColdNodeType() const;

                    /**
                     * 设置<p>冷节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _coldNodeType <p>冷节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
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
                     * 获取<p>冷节点个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColdNodeNum <p>冷节点个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetColdNodeNum() const;

                    /**
                     * 设置<p>冷节点个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _coldNodeNum <p>冷节点个数</p>
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
                     * 获取<p>冷节点CPU核数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColdCpuNum <p>冷节点CPU核数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetColdCpuNum() const;

                    /**
                     * 设置<p>冷节点CPU核数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _coldCpuNum <p>冷节点CPU核数</p>
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
                     * 获取<p>冷节点内存大小，单位GB</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColdMemSize <p>冷节点内存大小，单位GB</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetColdMemSize() const;

                    /**
                     * 设置<p>冷节点内存大小，单位GB</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _coldMemSize <p>冷节点内存大小，单位GB</p>
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
                     * 获取<p>冷节点磁盘类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColdDiskType <p>冷节点磁盘类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColdDiskType() const;

                    /**
                     * 设置<p>冷节点磁盘类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _coldDiskType <p>冷节点磁盘类型</p>
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
                     * 获取<p>冷节点磁盘大小，单位GB</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColdDiskSize <p>冷节点磁盘大小，单位GB</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetColdDiskSize() const;

                    /**
                     * 设置<p>冷节点磁盘大小，单位GB</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _coldDiskSize <p>冷节点磁盘大小，单位GB</p>
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
                     * 获取<p>冻节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrozenNodeType <p>冻节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFrozenNodeType() const;

                    /**
                     * 设置<p>冻节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frozenNodeType <p>冻节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
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
                     * 获取<p>冻节点个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrozenNodeNum <p>冻节点个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFrozenNodeNum() const;

                    /**
                     * 设置<p>冻节点个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frozenNodeNum <p>冻节点个数</p>
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
                     * 获取<p>冻节点CPU核数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrozenCpuNum <p>冻节点CPU核数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFrozenCpuNum() const;

                    /**
                     * 设置<p>冻节点CPU核数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frozenCpuNum <p>冻节点CPU核数</p>
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
                     * 获取<p>冻节点内存大小，单位GB</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrozenMemSize <p>冻节点内存大小，单位GB</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFrozenMemSize() const;

                    /**
                     * 设置<p>冻节点内存大小，单位GB</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frozenMemSize <p>冻节点内存大小，单位GB</p>
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
                     * 获取<p>冻节点磁盘类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrozenDiskType <p>冻节点磁盘类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFrozenDiskType() const;

                    /**
                     * 设置<p>冻节点磁盘类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frozenDiskType <p>冻节点磁盘类型</p>
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
                     * 获取<p>冻节点磁盘大小，单位GB</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrozenDiskSize <p>冻节点磁盘大小，单位GB</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFrozenDiskSize() const;

                    /**
                     * 设置<p>冻节点磁盘大小，单位GB</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frozenDiskSize <p>冻节点磁盘大小，单位GB</p>
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
                     * 获取<p>集群健康状态 -1 未知；0 Green; 1 Yellow; 2 Red</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthStatus <p>集群健康状态 -1 未知；0 Green; 1 Yellow; 2 Red</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHealthStatus() const;

                    /**
                     * 设置<p>集群健康状态 -1 未知；0 Green; 1 Yellow; 2 Red</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _healthStatus <p>集群健康状态 -1 未知；0 Green; 1 Yellow; 2 Red</p>
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
                     * 获取<p>https集群内网url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EsPrivateUrl <p>https集群内网url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEsPrivateUrl() const;

                    /**
                     * 设置<p>https集群内网url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _esPrivateUrl <p>https集群内网url</p>
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
                     * 获取<p>https集群内网域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EsPrivateDomain <p>https集群内网域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEsPrivateDomain() const;

                    /**
                     * 设置<p>https集群内网域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _esPrivateDomain <p>https集群内网域名</p>
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
                     * 获取<p>集群的配置组信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EsConfigSets <p>集群的配置组信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EsConfigSetInfo> GetEsConfigSets() const;

                    /**
                     * 设置<p>集群的配置组信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _esConfigSets <p>集群的配置组信息</p>
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
                     * 获取<p>集群可维护时间段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperationDuration <p>集群可维护时间段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OperationDuration GetOperationDuration() const;

                    /**
                     * 设置<p>集群可维护时间段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operationDuration <p>集群可维护时间段</p>
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
                     * 获取<p>web节点列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OptionalWebServiceInfos <p>web节点列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<OptionalWebServiceInfo> GetOptionalWebServiceInfos() const;

                    /**
                     * 设置<p>web节点列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _optionalWebServiceInfos <p>web节点列表</p>
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
                     * 获取<p>自治索引开关</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoIndexEnabled <p>自治索引开关</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAutoIndexEnabled() const;

                    /**
                     * 设置<p>自治索引开关</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoIndexEnabled <p>自治索引开关</p>
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
                     * 获取<p>是否支持存储计算分离</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableHybridStorage <p>是否支持存储计算分离</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableHybridStorage() const;

                    /**
                     * 设置<p>是否支持存储计算分离</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableHybridStorage <p>是否支持存储计算分离</p>
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
                     * 获取<p>流程进度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessPercent <p>流程进度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetProcessPercent() const;

                    /**
                     * 设置<p>流程进度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processPercent <p>流程进度</p>
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
                     * 获取<p>Kibana的alerting外网告警策略<li>OPEN：开启</li><li>CLOSE：关闭</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KibanaAlteringPublicAccess <p>Kibana的alerting外网告警策略<li>OPEN：开启</li><li>CLOSE：关闭</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKibanaAlteringPublicAccess() const;

                    /**
                     * 设置<p>Kibana的alerting外网告警策略<li>OPEN：开启</li><li>CLOSE：关闭</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kibanaAlteringPublicAccess <p>Kibana的alerting外网告警策略<li>OPEN：开启</li><li>CLOSE：关闭</li></p>
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
                     * 获取<p>本月是否有内核可以更新：false-无，true-有</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HasKernelUpgrade <p>本月是否有内核可以更新：false-无，true-有</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetHasKernelUpgrade() const;

                    /**
                     * 设置<p>本月是否有内核可以更新：false-无，true-有</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hasKernelUpgrade <p>本月是否有内核可以更新：false-无，true-有</p>
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
                     * 获取<p>cdcId，使用cdc子网时传递</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CdcId <p>cdcId，使用cdc子网时传递</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置<p>cdcId，使用cdc子网时传递</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cdcId <p>cdcId，使用cdc子网时传递</p>
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
                     * 获取<p>kibana内网vip</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KibanaPrivateVip <p>kibana内网vip</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKibanaPrivateVip() const;

                    /**
                     * 设置<p>kibana内网vip</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kibanaPrivateVip <p>kibana内网vip</p>
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
                     * 获取<p>自定义kibana内网url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomKibanaPrivateUrl <p>自定义kibana内网url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCustomKibanaPrivateUrl() const;

                    /**
                     * 设置<p>自定义kibana内网url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customKibanaPrivateUrl <p>自定义kibana内网url</p>
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
                     * 获取<p>节点出站访问详细信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutboundPublicAcls <p>节点出站访问详细信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<OutboundPublicAcl> GetOutboundPublicAcls() const;

                    /**
                     * 设置<p>节点出站访问详细信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outboundPublicAcls <p>节点出站访问详细信息</p>
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
                     * 获取<p>网络连接方案</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetConnectScheme <p>网络连接方案</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNetConnectScheme() const;

                    /**
                     * 设置<p>网络连接方案</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _netConnectScheme <p>网络连接方案</p>
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
                     * 获取<p>置放群组相关参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisasterRecoverGroupAffinity <p>置放群组相关参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDisasterRecoverGroupAffinity() const;

                    /**
                     * 设置<p>置放群组相关参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _disasterRecoverGroupAffinity <p>置放群组相关参数</p>
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
                     * 获取<p>子产品ID枚举值： 开源版：&quot;sp_es_io2&quot;， 基础版：&quot;sp_es_basic&quot;，白金版：&quot;sp_es_platinum&quot;，企业版：&quot;sp_es_enterprise&quot;，CDC白金版：&quot;sp_es_cdc_platinum&quot;，日志增强版：&quot;sp_es_enlogging&quot;，tsearch：&quot;sp_tsearch_io2&quot;，logstash：&quot;sp_es_logstash&quot; ，可以为空，为空的时候后台取LicenseType映射该字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubProductCode <p>子产品ID枚举值： 开源版：&quot;sp_es_io2&quot;， 基础版：&quot;sp_es_basic&quot;，白金版：&quot;sp_es_platinum&quot;，企业版：&quot;sp_es_enterprise&quot;，CDC白金版：&quot;sp_es_cdc_platinum&quot;，日志增强版：&quot;sp_es_enlogging&quot;，tsearch：&quot;sp_tsearch_io2&quot;，logstash：&quot;sp_es_logstash&quot; ，可以为空，为空的时候后台取LicenseType映射该字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubProductCode() const;

                    /**
                     * 设置<p>子产品ID枚举值： 开源版：&quot;sp_es_io2&quot;， 基础版：&quot;sp_es_basic&quot;，白金版：&quot;sp_es_platinum&quot;，企业版：&quot;sp_es_enterprise&quot;，CDC白金版：&quot;sp_es_cdc_platinum&quot;，日志增强版：&quot;sp_es_enlogging&quot;，tsearch：&quot;sp_tsearch_io2&quot;，logstash：&quot;sp_es_logstash&quot; ，可以为空，为空的时候后台取LicenseType映射该字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subProductCode <p>子产品ID枚举值： 开源版：&quot;sp_es_io2&quot;， 基础版：&quot;sp_es_basic&quot;，白金版：&quot;sp_es_platinum&quot;，企业版：&quot;sp_es_enterprise&quot;，CDC白金版：&quot;sp_es_cdc_platinum&quot;，日志增强版：&quot;sp_es_enlogging&quot;，tsearch：&quot;sp_tsearch_io2&quot;，logstash：&quot;sp_es_logstash&quot; ，可以为空，为空的时候后台取LicenseType映射该字段</p>
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
                     * 获取<p>存算分离cos用量，单位M</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosBucketStorageSize <p>存算分离cos用量，单位M</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCosBucketStorageSize() const;

                    /**
                     * 设置<p>存算分离cos用量，单位M</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cosBucketStorageSize <p>存算分离cos用量，单位M</p>
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
                     * 获取<p>读写分离模式：0-不开启，1-本地读写分离，2-远端读写分离</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReadWriteMode <p>读写分离模式：0-不开启，1-本地读写分离，2-远端读写分离</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetReadWriteMode() const;

                    /**
                     * 设置<p>读写分离模式：0-不开启，1-本地读写分离，2-远端读写分离</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _readWriteMode <p>读写分离模式：0-不开启，1-本地读写分离，2-远端读写分离</p>
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
                     * 获取<p>是否有置放群组异步调度任务</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableScheduleRecoverGroup <p>是否有置放群组异步调度任务</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableScheduleRecoverGroup() const;

                    /**
                     * 设置<p>是否有置放群组异步调度任务</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableScheduleRecoverGroup <p>是否有置放群组异步调度任务</p>
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
                     * 获取<p>异步调度任务的时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableScheduleOperationDuration <p>异步调度任务的时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EnableScheduleOperationDuration GetEnableScheduleOperationDuration() const;

                    /**
                     * 设置<p>异步调度任务的时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableScheduleOperationDuration <p>异步调度任务的时间</p>
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
                     * 获取<p>开启集群保护：OPEN-开启，CLOSE-关闭</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableDestroyProtection <p>开启集群保护：OPEN-开启，CLOSE-关闭</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEnableDestroyProtection() const;

                    /**
                     * 设置<p>开启集群保护：OPEN-开启，CLOSE-关闭</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableDestroyProtection <p>开启集群保护：OPEN-开启，CLOSE-关闭</p>
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

                    /**
                     * 获取<p>kibana内网访问地址</p>
                     * @return ShowKibanaIpPort <p>kibana内网访问地址</p>
                     * 
                     */
                    std::string GetShowKibanaIpPort() const;

                    /**
                     * 设置<p>kibana内网访问地址</p>
                     * @param _showKibanaIpPort <p>kibana内网访问地址</p>
                     * 
                     */
                    void SetShowKibanaIpPort(const std::string& _showKibanaIpPort);

                    /**
                     * 判断参数 ShowKibanaIpPort 是否已赋值
                     * @return ShowKibanaIpPort 是否已赋值
                     * 
                     */
                    bool ShowKibanaIpPortHasBeenSet() const;

                    /**
                     * 获取<p>是否为CDZLite可用区</p>
                     * @return IsCdzLite <p>是否为CDZLite可用区</p>
                     * 
                     */
                    bool GetIsCdzLite() const;

                    /**
                     * 设置<p>是否为CDZLite可用区</p>
                     * @param _isCdzLite <p>是否为CDZLite可用区</p>
                     * 
                     */
                    void SetIsCdzLite(const bool& _isCdzLite);

                    /**
                     * 判断参数 IsCdzLite 是否已赋值
                     * @return IsCdzLite 是否已赋值
                     * 
                     */
                    bool IsCdzLiteHasBeenSet() const;

                    /**
                     * 获取<p>集群内网tcp地址</p>
                     * @return EsPrivateTcpUrl <p>集群内网tcp地址</p>
                     * 
                     */
                    std::string GetEsPrivateTcpUrl() const;

                    /**
                     * 设置<p>集群内网tcp地址</p>
                     * @param _esPrivateTcpUrl <p>集群内网tcp地址</p>
                     * 
                     */
                    void SetEsPrivateTcpUrl(const std::string& _esPrivateTcpUrl);

                    /**
                     * 判断参数 EsPrivateTcpUrl 是否已赋值
                     * @return EsPrivateTcpUrl 是否已赋值
                     * 
                     */
                    bool EsPrivateTcpUrlHasBeenSet() const;

                    /**
                     * 获取<p>是否在回收站内</p><p>默认值：false</p>
                     * @return IsInRecycleBin <p>是否在回收站内</p><p>默认值：false</p>
                     * 
                     */
                    bool GetIsInRecycleBin() const;

                    /**
                     * 设置<p>是否在回收站内</p><p>默认值：false</p>
                     * @param _isInRecycleBin <p>是否在回收站内</p><p>默认值：false</p>
                     * 
                     */
                    void SetIsInRecycleBin(const bool& _isInRecycleBin);

                    /**
                     * 判断参数 IsInRecycleBin 是否已赋值
                     * @return IsInRecycleBin 是否已赋值
                     * 
                     */
                    bool IsInRecycleBinHasBeenSet() const;

                    /**
                     * 获取<p>回收站内是否锁定</p><p>默认值：false</p>
                     * @return RecycleLockEnabled <p>回收站内是否锁定</p><p>默认值：false</p>
                     * 
                     */
                    bool GetRecycleLockEnabled() const;

                    /**
                     * 设置<p>回收站内是否锁定</p><p>默认值：false</p>
                     * @param _recycleLockEnabled <p>回收站内是否锁定</p><p>默认值：false</p>
                     * 
                     */
                    void SetRecycleLockEnabled(const bool& _recycleLockEnabled);

                    /**
                     * 判断参数 RecycleLockEnabled 是否已赋值
                     * @return RecycleLockEnabled 是否已赋值
                     * 
                     */
                    bool RecycleLockEnabledHasBeenSet() const;

                    /**
                     * 获取<p>预计销毁的时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * @return MayDestroyPoint <p>预计销毁的时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetMayDestroyPoint() const;

                    /**
                     * 设置<p>预计销毁的时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * @param _mayDestroyPoint <p>预计销毁的时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    void SetMayDestroyPoint(const std::string& _mayDestroyPoint);

                    /**
                     * 判断参数 MayDestroyPoint 是否已赋值
                     * @return MayDestroyPoint 是否已赋值
                     * 
                     */
                    bool MayDestroyPointHasBeenSet() const;

                    /**
                     * 获取<p>延迟销毁的时间</p><p>单位：天</p>
                     * @return DelayDestroyInterval <p>延迟销毁的时间</p><p>单位：天</p>
                     * 
                     */
                    int64_t GetDelayDestroyInterval() const;

                    /**
                     * 设置<p>延迟销毁的时间</p><p>单位：天</p>
                     * @param _delayDestroyInterval <p>延迟销毁的时间</p><p>单位：天</p>
                     * 
                     */
                    void SetDelayDestroyInterval(const int64_t& _delayDestroyInterval);

                    /**
                     * 判断参数 DelayDestroyInterval 是否已赋值
                     * @return DelayDestroyInterval 是否已赋值
                     * 
                     */
                    bool DelayDestroyIntervalHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>可用区</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>用户ID</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>用户UIN</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>实例所属VPC的UID</p>
                     */
                    std::string m_vpcUid;
                    bool m_vpcUidHasBeenSet;

                    /**
                     * <p>实例所属子网的UID</p>
                     */
                    std::string m_subnetUid;
                    bool m_subnetUidHasBeenSet;

                    /**
                     * <p>实例状态，0:处理中,1:正常,-1:停止,-2:销毁中,-3:已销毁, -4:隔离中,2:创建集群时初始化中</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>自动续费标识。取值范围：<br>RENEW_FLAG_AUTO：自动续费<br>RENEW_FLAG_MANUAL：不自动续费<br>默认取值：<br>RENEW_FLAG_DEFAULT：不自动续费<br>若该参数指定为 RENEW_FLAG_AUTO，在账户余额充足的情况下，实例到期后将按月自动续费。</p>
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>实例计费模式。取值范围：  PREPAID：表示预付费，即包年包月  POSTPAID_BY_HOUR：表示后付费，即按量计费  CDHPAID：CDH付费，即只对CDH计费，不对CDH上的实例计费。</p>
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * <p>包年包月购买时长,单位:月</p>
                     */
                    uint64_t m_chargePeriod;
                    bool m_chargePeriodHasBeenSet;

                    /**
                     * <p>节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * <p>节点个数</p>
                     */
                    uint64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * <p>节点CPU核数</p>
                     */
                    uint64_t m_cpuNum;
                    bool m_cpuNumHasBeenSet;

                    /**
                     * <p>节点内存大小，单位GB</p>
                     */
                    uint64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * <p>节点磁盘类型</p>
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * <p>节点磁盘大小，单位GB</p>
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>ES域名</p>
                     */
                    std::string m_esDomain;
                    bool m_esDomainHasBeenSet;

                    /**
                     * <p>ES VIP</p>
                     */
                    std::string m_esVip;
                    bool m_esVipHasBeenSet;

                    /**
                     * <p>ES端口</p>
                     */
                    uint64_t m_esPort;
                    bool m_esPortHasBeenSet;

                    /**
                     * <p>Kibana访问url</p>
                     */
                    std::string m_kibanaUrl;
                    bool m_kibanaUrlHasBeenSet;

                    /**
                     * <p>ES版本号</p>
                     */
                    std::string m_esVersion;
                    bool m_esVersionHasBeenSet;

                    /**
                     * <p>ES配置项</p>
                     */
                    std::string m_esConfig;
                    bool m_esConfigHasBeenSet;

                    /**
                     * <p>Kibana访问控制配置</p>
                     */
                    EsAcl m_esAcl;
                    bool m_esAclHasBeenSet;

                    /**
                     * <p>实例创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>实例最后修改操作时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>实例到期时间</p>
                     */
                    std::string m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * <p>实例类型（实例类型标识，当前只有1,2两种）</p>
                     */
                    uint64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>Ik分词器配置</p>
                     */
                    EsDictionaryInfo m_ikConfig;
                    bool m_ikConfigHasBeenSet;

                    /**
                     * <p>专用主节点配置</p>
                     */
                    MasterNodeInfo m_masterNodeInfo;
                    bool m_masterNodeInfoHasBeenSet;

                    /**
                     * <p>cos自动备份配置</p>
                     */
                    CosBackup m_cosBackup;
                    bool m_cosBackupHasBeenSet;

                    /**
                     * <p>是否允许cos自动备份</p>
                     */
                    bool m_allowCosBackup;
                    bool m_allowCosBackupHasBeenSet;

                    /**
                     * <p>实例拥有的标签列表</p>
                     */
                    std::vector<TagInfo> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * <p>License类型<li>oss：开源版</li><li>basic：基础版</li><li>platinum：白金版</li>默认值platinum</p>
                     */
                    std::string m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * <p>是否为冷热集群<li>true: 冷热集群</li><li>false: 非冷热集群</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableHotWarmMode;
                    bool m_enableHotWarmModeHasBeenSet;

                    /**
                     * <p>温节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_warmNodeType;
                    bool m_warmNodeTypeHasBeenSet;

                    /**
                     * <p>温节点个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_warmNodeNum;
                    bool m_warmNodeNumHasBeenSet;

                    /**
                     * <p>温节点CPU核数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_warmCpuNum;
                    bool m_warmCpuNumHasBeenSet;

                    /**
                     * <p>温节点内存内存大小，单位GB</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_warmMemSize;
                    bool m_warmMemSizeHasBeenSet;

                    /**
                     * <p>温节点磁盘类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_warmDiskType;
                    bool m_warmDiskTypeHasBeenSet;

                    /**
                     * <p>温节点磁盘大小，单位GB</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_warmDiskSize;
                    bool m_warmDiskSizeHasBeenSet;

                    /**
                     * <p>集群节点信息列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NodeInfo> m_nodeInfoList;
                    bool m_nodeInfoListHasBeenSet;

                    /**
                     * <p>Es公网地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_esPublicUrl;
                    bool m_esPublicUrlHasBeenSet;

                    /**
                     * <p>多可用区网络信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ZoneDetail> m_multiZoneInfo;
                    bool m_multiZoneInfoHasBeenSet;

                    /**
                     * <p>部署模式<li>0：单可用区</li><li>1：多可用区，北京、上海、上海金融、广州、南京、香港、新加坡、法兰克福（白名单控制）</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * <p>ES公网访问状态<li>OPEN：开启</li><li>CLOSE：关闭</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publicAccess;
                    bool m_publicAccessHasBeenSet;

                    /**
                     * <p>ES公网访问控制配置</p>
                     */
                    EsAcl m_esPublicAcl;
                    bool m_esPublicAclHasBeenSet;

                    /**
                     * <p>Kibana内网地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kibanaPrivateUrl;
                    bool m_kibanaPrivateUrlHasBeenSet;

                    /**
                     * <p>Kibana公网访问状态<li>OPEN：开启</li><li>CLOSE：关闭</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kibanaPublicAccess;
                    bool m_kibanaPublicAccessHasBeenSet;

                    /**
                     * <p>Kibana内网访问状态<li>OPEN：开启</li><li>CLOSE：关闭</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kibanaPrivateAccess;
                    bool m_kibanaPrivateAccessHasBeenSet;

                    /**
                     * <p>6.8（及以上版本）基础版是否开启xpack security认证<li>1：不开启</li><li>2：开启</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_securityType;
                    bool m_securityTypeHasBeenSet;

                    /**
                     * <p>场景化模板类型：0、不开启；1、通用场景；2、日志场景；3、搜索场景</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * <p>Kibana配置项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kibanaConfig;
                    bool m_kibanaConfigHasBeenSet;

                    /**
                     * <p>Kibana节点信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KibanaNodeInfo m_kibanaNodeInfo;
                    bool m_kibanaNodeInfoHasBeenSet;

                    /**
                     * <p>可视化节点配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WebNodeTypeInfo m_webNodeTypeInfo;
                    bool m_webNodeTypeInfoHasBeenSet;

                    /**
                     * <p>JDK类型，oracle或kona</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jdk;
                    bool m_jdkHasBeenSet;

                    /**
                     * <p>集群网络通讯协议</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>安全组id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_securityGroups;
                    bool m_securityGroupsHasBeenSet;

                    /**
                     * <p>冷节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_coldNodeType;
                    bool m_coldNodeTypeHasBeenSet;

                    /**
                     * <p>冷节点个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_coldNodeNum;
                    bool m_coldNodeNumHasBeenSet;

                    /**
                     * <p>冷节点CPU核数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_coldCpuNum;
                    bool m_coldCpuNumHasBeenSet;

                    /**
                     * <p>冷节点内存大小，单位GB</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_coldMemSize;
                    bool m_coldMemSizeHasBeenSet;

                    /**
                     * <p>冷节点磁盘类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_coldDiskType;
                    bool m_coldDiskTypeHasBeenSet;

                    /**
                     * <p>冷节点磁盘大小，单位GB</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_coldDiskSize;
                    bool m_coldDiskSizeHasBeenSet;

                    /**
                     * <p>冻节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_frozenNodeType;
                    bool m_frozenNodeTypeHasBeenSet;

                    /**
                     * <p>冻节点个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_frozenNodeNum;
                    bool m_frozenNodeNumHasBeenSet;

                    /**
                     * <p>冻节点CPU核数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_frozenCpuNum;
                    bool m_frozenCpuNumHasBeenSet;

                    /**
                     * <p>冻节点内存大小，单位GB</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_frozenMemSize;
                    bool m_frozenMemSizeHasBeenSet;

                    /**
                     * <p>冻节点磁盘类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_frozenDiskType;
                    bool m_frozenDiskTypeHasBeenSet;

                    /**
                     * <p>冻节点磁盘大小，单位GB</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_frozenDiskSize;
                    bool m_frozenDiskSizeHasBeenSet;

                    /**
                     * <p>集群健康状态 -1 未知；0 Green; 1 Yellow; 2 Red</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_healthStatus;
                    bool m_healthStatusHasBeenSet;

                    /**
                     * <p>https集群内网url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_esPrivateUrl;
                    bool m_esPrivateUrlHasBeenSet;

                    /**
                     * <p>https集群内网域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_esPrivateDomain;
                    bool m_esPrivateDomainHasBeenSet;

                    /**
                     * <p>集群的配置组信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EsConfigSetInfo> m_esConfigSets;
                    bool m_esConfigSetsHasBeenSet;

                    /**
                     * <p>集群可维护时间段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OperationDuration m_operationDuration;
                    bool m_operationDurationHasBeenSet;

                    /**
                     * <p>web节点列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OptionalWebServiceInfo> m_optionalWebServiceInfos;
                    bool m_optionalWebServiceInfosHasBeenSet;

                    /**
                     * <p>自治索引开关</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_autoIndexEnabled;
                    bool m_autoIndexEnabledHasBeenSet;

                    /**
                     * <p>是否支持存储计算分离</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableHybridStorage;
                    bool m_enableHybridStorageHasBeenSet;

                    /**
                     * <p>流程进度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_processPercent;
                    bool m_processPercentHasBeenSet;

                    /**
                     * <p>Kibana的alerting外网告警策略<li>OPEN：开启</li><li>CLOSE：关闭</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kibanaAlteringPublicAccess;
                    bool m_kibanaAlteringPublicAccessHasBeenSet;

                    /**
                     * <p>本月是否有内核可以更新：false-无，true-有</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_hasKernelUpgrade;
                    bool m_hasKernelUpgradeHasBeenSet;

                    /**
                     * <p>cdcId，使用cdc子网时传递</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                    /**
                     * <p>kibana内网vip</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kibanaPrivateVip;
                    bool m_kibanaPrivateVipHasBeenSet;

                    /**
                     * <p>自定义kibana内网url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_customKibanaPrivateUrl;
                    bool m_customKibanaPrivateUrlHasBeenSet;

                    /**
                     * <p>节点出站访问详细信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OutboundPublicAcl> m_outboundPublicAcls;
                    bool m_outboundPublicAclsHasBeenSet;

                    /**
                     * <p>网络连接方案</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_netConnectScheme;
                    bool m_netConnectSchemeHasBeenSet;

                    /**
                     * <p>置放群组相关参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_disasterRecoverGroupAffinity;
                    bool m_disasterRecoverGroupAffinityHasBeenSet;

                    /**
                     * <p>子产品ID枚举值： 开源版：&quot;sp_es_io2&quot;， 基础版：&quot;sp_es_basic&quot;，白金版：&quot;sp_es_platinum&quot;，企业版：&quot;sp_es_enterprise&quot;，CDC白金版：&quot;sp_es_cdc_platinum&quot;，日志增强版：&quot;sp_es_enlogging&quot;，tsearch：&quot;sp_tsearch_io2&quot;，logstash：&quot;sp_es_logstash&quot; ，可以为空，为空的时候后台取LicenseType映射该字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subProductCode;
                    bool m_subProductCodeHasBeenSet;

                    /**
                     * <p>存算分离cos用量，单位M</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_cosBucketStorageSize;
                    bool m_cosBucketStorageSizeHasBeenSet;

                    /**
                     * <p>读写分离模式：0-不开启，1-本地读写分离，2-远端读写分离</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_readWriteMode;
                    bool m_readWriteModeHasBeenSet;

                    /**
                     * <p>是否有置放群组异步调度任务</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableScheduleRecoverGroup;
                    bool m_enableScheduleRecoverGroupHasBeenSet;

                    /**
                     * <p>异步调度任务的时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EnableScheduleOperationDuration m_enableScheduleOperationDuration;
                    bool m_enableScheduleOperationDurationHasBeenSet;

                    /**
                     * <p>开启集群保护：OPEN-开启，CLOSE-关闭</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_enableDestroyProtection;
                    bool m_enableDestroyProtectionHasBeenSet;

                    /**
                     * <p>kibana内网访问地址</p>
                     */
                    std::string m_showKibanaIpPort;
                    bool m_showKibanaIpPortHasBeenSet;

                    /**
                     * <p>是否为CDZLite可用区</p>
                     */
                    bool m_isCdzLite;
                    bool m_isCdzLiteHasBeenSet;

                    /**
                     * <p>集群内网tcp地址</p>
                     */
                    std::string m_esPrivateTcpUrl;
                    bool m_esPrivateTcpUrlHasBeenSet;

                    /**
                     * <p>是否在回收站内</p><p>默认值：false</p>
                     */
                    bool m_isInRecycleBin;
                    bool m_isInRecycleBinHasBeenSet;

                    /**
                     * <p>回收站内是否锁定</p><p>默认值：false</p>
                     */
                    bool m_recycleLockEnabled;
                    bool m_recycleLockEnabledHasBeenSet;

                    /**
                     * <p>预计销毁的时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_mayDestroyPoint;
                    bool m_mayDestroyPointHasBeenSet;

                    /**
                     * <p>延迟销毁的时间</p><p>单位：天</p>
                     */
                    int64_t m_delayDestroyInterval;
                    bool m_delayDestroyIntervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_INSTANCEINFO_H_
