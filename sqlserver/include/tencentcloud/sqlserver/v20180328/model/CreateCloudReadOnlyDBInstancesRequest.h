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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATECLOUDREADONLYDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATECLOUDREADONLYDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/ResourceTag.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * CreateCloudReadOnlyDBInstances请求参数结构体
                */
                class CreateCloudReadOnlyDBInstancesRequest : public AbstractModel
                {
                public:
                    CreateCloudReadOnlyDBInstancesRequest();
                    ~CreateCloudReadOnlyDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>主实例ID，格式如：mssql-3l3fgqn7</p>
                     * @return InstanceId <p>主实例ID，格式如：mssql-3l3fgqn7</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>主实例ID，格式如：mssql-3l3fgqn7</p>
                     * @param _instanceId <p>主实例ID，格式如：mssql-3l3fgqn7</p>
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
                     * 获取<p>实例可用区，类似ap-guangzhou-1（广州一区）；实例可售卖区域可以通过接口DescribeZones获取</p>
                     * @return Zone <p>实例可用区，类似ap-guangzhou-1（广州一区）；实例可售卖区域可以通过接口DescribeZones获取</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>实例可用区，类似ap-guangzhou-1（广州一区）；实例可售卖区域可以通过接口DescribeZones获取</p>
                     * @param _zone <p>实例可用区，类似ap-guangzhou-1（广州一区）；实例可售卖区域可以通过接口DescribeZones获取</p>
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
                     * 获取<p>只读组类型选项，1-按照一个实例一个只读组的方式发货，2-新建只读组后发货，所有实例都在这个只读组下面， 3-发货的所有实例都在已有的只读组下面</p>
                     * @return ReadOnlyGroupType <p>只读组类型选项，1-按照一个实例一个只读组的方式发货，2-新建只读组后发货，所有实例都在这个只读组下面， 3-发货的所有实例都在已有的只读组下面</p>
                     * 
                     */
                    int64_t GetReadOnlyGroupType() const;

                    /**
                     * 设置<p>只读组类型选项，1-按照一个实例一个只读组的方式发货，2-新建只读组后发货，所有实例都在这个只读组下面， 3-发货的所有实例都在已有的只读组下面</p>
                     * @param _readOnlyGroupType <p>只读组类型选项，1-按照一个实例一个只读组的方式发货，2-新建只读组后发货，所有实例都在这个只读组下面， 3-发货的所有实例都在已有的只读组下面</p>
                     * 
                     */
                    void SetReadOnlyGroupType(const int64_t& _readOnlyGroupType);

                    /**
                     * 判断参数 ReadOnlyGroupType 是否已赋值
                     * @return ReadOnlyGroupType 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupTypeHasBeenSet() const;

                    /**
                     * 获取<p>实例内存大小，单位GB</p>
                     * @return Memory <p>实例内存大小，单位GB</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>实例内存大小，单位GB</p>
                     * @param _memory <p>实例内存大小，单位GB</p>
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
                     * 获取<p>实例磁盘大小，单位GB</p>
                     * @return Storage <p>实例磁盘大小，单位GB</p>
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置<p>实例磁盘大小，单位GB</p>
                     * @param _storage <p>实例磁盘大小，单位GB</p>
                     * 
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取<p>实例核心数</p>
                     * @return Cpu <p>实例核心数</p>
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置<p>实例核心数</p>
                     * @param _cpu <p>实例核心数</p>
                     * 
                     */
                    void SetCpu(const uint64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取<p>购买实例的宿主机磁盘类型,CLOUD_HSSD-虚拟机加强型SSD云盘，CLOUD_TSSD-虚拟机极速型SSD云盘，CLOUD_BSSD-虚拟机通用型SSD云盘</p>
                     * @return MachineType <p>购买实例的宿主机磁盘类型,CLOUD_HSSD-虚拟机加强型SSD云盘，CLOUD_TSSD-虚拟机极速型SSD云盘，CLOUD_BSSD-虚拟机通用型SSD云盘</p>
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置<p>购买实例的宿主机磁盘类型,CLOUD_HSSD-虚拟机加强型SSD云盘，CLOUD_TSSD-虚拟机极速型SSD云盘，CLOUD_BSSD-虚拟机通用型SSD云盘</p>
                     * @param _machineType <p>购买实例的宿主机磁盘类型,CLOUD_HSSD-虚拟机加强型SSD云盘，CLOUD_TSSD-虚拟机极速型SSD云盘，CLOUD_BSSD-虚拟机通用型SSD云盘</p>
                     * 
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取<p>0-默认不升级主实例，1-强制升级主实例完成ro部署；主实例为非集群版时需要填1，强制升级为集群版。填1 说明您已同意将主实例升级到集群版实例。</p>
                     * @return ReadOnlyGroupForcedUpgrade <p>0-默认不升级主实例，1-强制升级主实例完成ro部署；主实例为非集群版时需要填1，强制升级为集群版。填1 说明您已同意将主实例升级到集群版实例。</p>
                     * 
                     */
                    int64_t GetReadOnlyGroupForcedUpgrade() const;

                    /**
                     * 设置<p>0-默认不升级主实例，1-强制升级主实例完成ro部署；主实例为非集群版时需要填1，强制升级为集群版。填1 说明您已同意将主实例升级到集群版实例。</p>
                     * @param _readOnlyGroupForcedUpgrade <p>0-默认不升级主实例，1-强制升级主实例完成ro部署；主实例为非集群版时需要填1，强制升级为集群版。填1 说明您已同意将主实例升级到集群版实例。</p>
                     * 
                     */
                    void SetReadOnlyGroupForcedUpgrade(const int64_t& _readOnlyGroupForcedUpgrade);

                    /**
                     * 判断参数 ReadOnlyGroupForcedUpgrade 是否已赋值
                     * @return ReadOnlyGroupForcedUpgrade 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupForcedUpgradeHasBeenSet() const;

                    /**
                     * 获取<p>ReadOnlyGroupType=3时必填,已存在的只读组ID</p>
                     * @return ReadOnlyGroupId <p>ReadOnlyGroupType=3时必填,已存在的只读组ID</p>
                     * 
                     */
                    std::string GetReadOnlyGroupId() const;

                    /**
                     * 设置<p>ReadOnlyGroupType=3时必填,已存在的只读组ID</p>
                     * @param _readOnlyGroupId <p>ReadOnlyGroupType=3时必填,已存在的只读组ID</p>
                     * 
                     */
                    void SetReadOnlyGroupId(const std::string& _readOnlyGroupId);

                    /**
                     * 判断参数 ReadOnlyGroupId 是否已赋值
                     * @return ReadOnlyGroupId 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>ReadOnlyGroupType=2时必填，新建的只读组名称</p>
                     * @return ReadOnlyGroupName <p>ReadOnlyGroupType=2时必填，新建的只读组名称</p>
                     * 
                     */
                    std::string GetReadOnlyGroupName() const;

                    /**
                     * 设置<p>ReadOnlyGroupType=2时必填，新建的只读组名称</p>
                     * @param _readOnlyGroupName <p>ReadOnlyGroupType=2时必填，新建的只读组名称</p>
                     * 
                     */
                    void SetReadOnlyGroupName(const std::string& _readOnlyGroupName);

                    /**
                     * 判断参数 ReadOnlyGroupName 是否已赋值
                     * @return ReadOnlyGroupName 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupNameHasBeenSet() const;

                    /**
                     * 获取<p>ReadOnlyGroupType=2时必填，新建的只读组是否开启延迟剔除功能，1-开启，0-关闭。当只读副本与主实例延迟大于阈值后，自动剔除。</p>
                     * @return ReadOnlyGroupIsOfflineDelay <p>ReadOnlyGroupType=2时必填，新建的只读组是否开启延迟剔除功能，1-开启，0-关闭。当只读副本与主实例延迟大于阈值后，自动剔除。</p>
                     * 
                     */
                    int64_t GetReadOnlyGroupIsOfflineDelay() const;

                    /**
                     * 设置<p>ReadOnlyGroupType=2时必填，新建的只读组是否开启延迟剔除功能，1-开启，0-关闭。当只读副本与主实例延迟大于阈值后，自动剔除。</p>
                     * @param _readOnlyGroupIsOfflineDelay <p>ReadOnlyGroupType=2时必填，新建的只读组是否开启延迟剔除功能，1-开启，0-关闭。当只读副本与主实例延迟大于阈值后，自动剔除。</p>
                     * 
                     */
                    void SetReadOnlyGroupIsOfflineDelay(const int64_t& _readOnlyGroupIsOfflineDelay);

                    /**
                     * 判断参数 ReadOnlyGroupIsOfflineDelay 是否已赋值
                     * @return ReadOnlyGroupIsOfflineDelay 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupIsOfflineDelayHasBeenSet() const;

                    /**
                     * 获取<p>ReadOnlyGroupType=2 且 ReadOnlyGroupIsOfflineDelay=1时必填，新建的只读组延迟剔除的阈值。</p>
                     * @return ReadOnlyGroupMaxDelayTime <p>ReadOnlyGroupType=2 且 ReadOnlyGroupIsOfflineDelay=1时必填，新建的只读组延迟剔除的阈值。</p>
                     * 
                     */
                    int64_t GetReadOnlyGroupMaxDelayTime() const;

                    /**
                     * 设置<p>ReadOnlyGroupType=2 且 ReadOnlyGroupIsOfflineDelay=1时必填，新建的只读组延迟剔除的阈值。</p>
                     * @param _readOnlyGroupMaxDelayTime <p>ReadOnlyGroupType=2 且 ReadOnlyGroupIsOfflineDelay=1时必填，新建的只读组延迟剔除的阈值。</p>
                     * 
                     */
                    void SetReadOnlyGroupMaxDelayTime(const int64_t& _readOnlyGroupMaxDelayTime);

                    /**
                     * 判断参数 ReadOnlyGroupMaxDelayTime 是否已赋值
                     * @return ReadOnlyGroupMaxDelayTime 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupMaxDelayTimeHasBeenSet() const;

                    /**
                     * 获取<p>ReadOnlyGroupType=2 且 ReadOnlyGroupIsOfflineDelay=1时必填，新建的只读组延迟剔除后至少保留只读副本的个数。</p>
                     * @return ReadOnlyGroupMinInGroup <p>ReadOnlyGroupType=2 且 ReadOnlyGroupIsOfflineDelay=1时必填，新建的只读组延迟剔除后至少保留只读副本的个数。</p>
                     * 
                     */
                    int64_t GetReadOnlyGroupMinInGroup() const;

                    /**
                     * 设置<p>ReadOnlyGroupType=2 且 ReadOnlyGroupIsOfflineDelay=1时必填，新建的只读组延迟剔除后至少保留只读副本的个数。</p>
                     * @param _readOnlyGroupMinInGroup <p>ReadOnlyGroupType=2 且 ReadOnlyGroupIsOfflineDelay=1时必填，新建的只读组延迟剔除后至少保留只读副本的个数。</p>
                     * 
                     */
                    void SetReadOnlyGroupMinInGroup(const int64_t& _readOnlyGroupMinInGroup);

                    /**
                     * 判断参数 ReadOnlyGroupMinInGroup 是否已赋值
                     * @return ReadOnlyGroupMinInGroup 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupMinInGroupHasBeenSet() const;

                    /**
                     * 获取<p>付费模式，取值支持 PREPAID（预付费），POSTPAID（后付费）。</p>
                     * @return InstanceChargeType <p>付费模式，取值支持 PREPAID（预付费），POSTPAID（后付费）。</p>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>付费模式，取值支持 PREPAID（预付费），POSTPAID（后付费）。</p>
                     * @param _instanceChargeType <p>付费模式，取值支持 PREPAID（预付费），POSTPAID（后付费）。</p>
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>本次即将购买的实例数量，默认取值2。</p>
                     * @return GoodsNum <p>本次即将购买的实例数量，默认取值2。</p>
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置<p>本次即将购买的实例数量，默认取值2。</p>
                     * @param _goodsNum <p>本次即将购买的实例数量，默认取值2。</p>
                     * 
                     */
                    void SetGoodsNum(const int64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取<p>VPC子网ID，形如subnet-bdoe83fa；SubnetId和VpcId需同时设置或者同时不设置</p>
                     * @return SubnetId <p>VPC子网ID，形如subnet-bdoe83fa；SubnetId和VpcId需同时设置或者同时不设置</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>VPC子网ID，形如subnet-bdoe83fa；SubnetId和VpcId需同时设置或者同时不设置</p>
                     * @param _subnetId <p>VPC子网ID，形如subnet-bdoe83fa；SubnetId和VpcId需同时设置或者同时不设置</p>
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
                     * 获取<p>VPC网络ID，形如vpc-dsp338hz；SubnetId和VpcId需同时设置或者同时不设置</p>
                     * @return VpcId <p>VPC网络ID，形如vpc-dsp338hz；SubnetId和VpcId需同时设置或者同时不设置</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC网络ID，形如vpc-dsp338hz；SubnetId和VpcId需同时设置或者同时不设置</p>
                     * @param _vpcId <p>VPC网络ID，形如vpc-dsp338hz；SubnetId和VpcId需同时设置或者同时不设置</p>
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
                     * 获取<p>购买实例周期，默认取值为1，表示一个月。取值不超过48</p>
                     * @return Period <p>购买实例周期，默认取值为1，表示一个月。取值不超过48</p>
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置<p>购买实例周期，默认取值为1，表示一个月。取值不超过48</p>
                     * @param _period <p>购买实例周期，默认取值为1，表示一个月。取值不超过48</p>
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取<p>安全组列表，填写形如sg-xxx的安全组ID</p>
                     * @return SecurityGroupList <p>安全组列表，填写形如sg-xxx的安全组ID</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupList() const;

                    /**
                     * 设置<p>安全组列表，填写形如sg-xxx的安全组ID</p>
                     * @param _securityGroupList <p>安全组列表，填写形如sg-xxx的安全组ID</p>
                     * 
                     */
                    void SetSecurityGroupList(const std::vector<std::string>& _securityGroupList);

                    /**
                     * 判断参数 SecurityGroupList 是否已赋值
                     * @return SecurityGroupList 是否已赋值
                     * 
                     */
                    bool SecurityGroupListHasBeenSet() const;

                    /**
                     * 获取<p>是否自动使用代金券；1 - 是，0 - 否，默认不使用</p>
                     * @return AutoVoucher <p>是否自动使用代金券；1 - 是，0 - 否，默认不使用</p>
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置<p>是否自动使用代金券；1 - 是，0 - 否，默认不使用</p>
                     * @param _autoVoucher <p>是否自动使用代金券；1 - 是，0 - 否，默认不使用</p>
                     * 
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取<p>代金券ID数组，目前单个订单只能使用一张</p>
                     * @return VoucherIds <p>代金券ID数组，目前单个订单只能使用一张</p>
                     * 
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置<p>代金券ID数组，目前单个订单只能使用一张</p>
                     * @param _voucherIds <p>代金券ID数组，目前单个订单只能使用一张</p>
                     * 
                     */
                    void SetVoucherIds(const std::vector<std::string>& _voucherIds);

                    /**
                     * 判断参数 VoucherIds 是否已赋值
                     * @return VoucherIds 是否已赋值
                     * 
                     */
                    bool VoucherIdsHasBeenSet() const;

                    /**
                     * 获取<p>新建实例绑定的标签集合</p>
                     * @return ResourceTags <p>新建实例绑定的标签集合</p>
                     * 
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 设置<p>新建实例绑定的标签集合</p>
                     * @param _resourceTags <p>新建实例绑定的标签集合</p>
                     * 
                     */
                    void SetResourceTags(const std::vector<ResourceTag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取<p>系统字符集排序规则，默认：Chinese_PRC_CI_AS</p>
                     * @return Collation <p>系统字符集排序规则，默认：Chinese_PRC_CI_AS</p>
                     * 
                     */
                    std::string GetCollation() const;

                    /**
                     * 设置<p>系统字符集排序规则，默认：Chinese_PRC_CI_AS</p>
                     * @param _collation <p>系统字符集排序规则，默认：Chinese_PRC_CI_AS</p>
                     * 
                     */
                    void SetCollation(const std::string& _collation);

                    /**
                     * 判断参数 Collation 是否已赋值
                     * @return Collation 是否已赋值
                     * 
                     */
                    bool CollationHasBeenSet() const;

                    /**
                     * 获取<p>系统时区，默认：China Standard Time</p>
                     * @return TimeZone <p>系统时区，默认：China Standard Time</p>
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置<p>系统时区，默认：China Standard Time</p>
                     * @param _timeZone <p>系统时区，默认：China Standard Time</p>
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                    /**
                     * 获取<p>磁盘加密标识，0-不加密，1-加密</p>
                     * @return DiskEncryptFlag <p>磁盘加密标识，0-不加密，1-加密</p>
                     * 
                     */
                    int64_t GetDiskEncryptFlag() const;

                    /**
                     * 设置<p>磁盘加密标识，0-不加密，1-加密</p>
                     * @param _diskEncryptFlag <p>磁盘加密标识，0-不加密，1-加密</p>
                     * 
                     */
                    void SetDiskEncryptFlag(const int64_t& _diskEncryptFlag);

                    /**
                     * 判断参数 DiskEncryptFlag 是否已赋值
                     * @return DiskEncryptFlag 是否已赋值
                     * 
                     */
                    bool DiskEncryptFlagHasBeenSet() const;

                    /**
                     * 获取<p>额外磁盘 IO 吞吐量，仅 CLOUD_HSSD 支持</p><p>取值范围：[0, 650]</p><p>单位：MB/s</p>
                     * @return ThroughputPerformance <p>额外磁盘 IO 吞吐量，仅 CLOUD_HSSD 支持</p><p>取值范围：[0, 650]</p><p>单位：MB/s</p>
                     * 
                     */
                    uint64_t GetThroughputPerformance() const;

                    /**
                     * 设置<p>额外磁盘 IO 吞吐量，仅 CLOUD_HSSD 支持</p><p>取值范围：[0, 650]</p><p>单位：MB/s</p>
                     * @param _throughputPerformance <p>额外磁盘 IO 吞吐量，仅 CLOUD_HSSD 支持</p><p>取值范围：[0, 650]</p><p>单位：MB/s</p>
                     * 
                     */
                    void SetThroughputPerformance(const uint64_t& _throughputPerformance);

                    /**
                     * 判断参数 ThroughputPerformance 是否已赋值
                     * @return ThroughputPerformance 是否已赋值
                     * 
                     */
                    bool ThroughputPerformanceHasBeenSet() const;

                private:

                    /**
                     * <p>主实例ID，格式如：mssql-3l3fgqn7</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例可用区，类似ap-guangzhou-1（广州一区）；实例可售卖区域可以通过接口DescribeZones获取</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>只读组类型选项，1-按照一个实例一个只读组的方式发货，2-新建只读组后发货，所有实例都在这个只读组下面， 3-发货的所有实例都在已有的只读组下面</p>
                     */
                    int64_t m_readOnlyGroupType;
                    bool m_readOnlyGroupTypeHasBeenSet;

                    /**
                     * <p>实例内存大小，单位GB</p>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>实例磁盘大小，单位GB</p>
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * <p>实例核心数</p>
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>购买实例的宿主机磁盘类型,CLOUD_HSSD-虚拟机加强型SSD云盘，CLOUD_TSSD-虚拟机极速型SSD云盘，CLOUD_BSSD-虚拟机通用型SSD云盘</p>
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * <p>0-默认不升级主实例，1-强制升级主实例完成ro部署；主实例为非集群版时需要填1，强制升级为集群版。填1 说明您已同意将主实例升级到集群版实例。</p>
                     */
                    int64_t m_readOnlyGroupForcedUpgrade;
                    bool m_readOnlyGroupForcedUpgradeHasBeenSet;

                    /**
                     * <p>ReadOnlyGroupType=3时必填,已存在的只读组ID</p>
                     */
                    std::string m_readOnlyGroupId;
                    bool m_readOnlyGroupIdHasBeenSet;

                    /**
                     * <p>ReadOnlyGroupType=2时必填，新建的只读组名称</p>
                     */
                    std::string m_readOnlyGroupName;
                    bool m_readOnlyGroupNameHasBeenSet;

                    /**
                     * <p>ReadOnlyGroupType=2时必填，新建的只读组是否开启延迟剔除功能，1-开启，0-关闭。当只读副本与主实例延迟大于阈值后，自动剔除。</p>
                     */
                    int64_t m_readOnlyGroupIsOfflineDelay;
                    bool m_readOnlyGroupIsOfflineDelayHasBeenSet;

                    /**
                     * <p>ReadOnlyGroupType=2 且 ReadOnlyGroupIsOfflineDelay=1时必填，新建的只读组延迟剔除的阈值。</p>
                     */
                    int64_t m_readOnlyGroupMaxDelayTime;
                    bool m_readOnlyGroupMaxDelayTimeHasBeenSet;

                    /**
                     * <p>ReadOnlyGroupType=2 且 ReadOnlyGroupIsOfflineDelay=1时必填，新建的只读组延迟剔除后至少保留只读副本的个数。</p>
                     */
                    int64_t m_readOnlyGroupMinInGroup;
                    bool m_readOnlyGroupMinInGroupHasBeenSet;

                    /**
                     * <p>付费模式，取值支持 PREPAID（预付费），POSTPAID（后付费）。</p>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>本次即将购买的实例数量，默认取值2。</p>
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * <p>VPC子网ID，形如subnet-bdoe83fa；SubnetId和VpcId需同时设置或者同时不设置</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>VPC网络ID，形如vpc-dsp338hz；SubnetId和VpcId需同时设置或者同时不设置</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>购买实例周期，默认取值为1，表示一个月。取值不超过48</p>
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>安全组列表，填写形如sg-xxx的安全组ID</p>
                     */
                    std::vector<std::string> m_securityGroupList;
                    bool m_securityGroupListHasBeenSet;

                    /**
                     * <p>是否自动使用代金券；1 - 是，0 - 否，默认不使用</p>
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * <p>代金券ID数组，目前单个订单只能使用一张</p>
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                    /**
                     * <p>新建实例绑定的标签集合</p>
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>系统字符集排序规则，默认：Chinese_PRC_CI_AS</p>
                     */
                    std::string m_collation;
                    bool m_collationHasBeenSet;

                    /**
                     * <p>系统时区，默认：China Standard Time</p>
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * <p>磁盘加密标识，0-不加密，1-加密</p>
                     */
                    int64_t m_diskEncryptFlag;
                    bool m_diskEncryptFlagHasBeenSet;

                    /**
                     * <p>额外磁盘 IO 吞吐量，仅 CLOUD_HSSD 支持</p><p>取值范围：[0, 650]</p><p>单位：MB/s</p>
                     */
                    uint64_t m_throughputPerformance;
                    bool m_throughputPerformanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATECLOUDREADONLYDBINSTANCESREQUEST_H_
