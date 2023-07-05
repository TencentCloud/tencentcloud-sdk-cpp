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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEREADONLYDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEREADONLYDBINSTANCESREQUEST_H_

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
                * CreateReadOnlyDBInstances请求参数结构体
                */
                class CreateReadOnlyDBInstancesRequest : public AbstractModel
                {
                public:
                    CreateReadOnlyDBInstancesRequest();
                    ~CreateReadOnlyDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取主实例ID，格式如：mssql-3l3fgqn7
                     * @return InstanceId 主实例ID，格式如：mssql-3l3fgqn7
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置主实例ID，格式如：mssql-3l3fgqn7
                     * @param _instanceId 主实例ID，格式如：mssql-3l3fgqn7
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
                     * 获取实例可用区，类似ap-guangzhou-1（广州一区）；实例可售卖区域可以通过接口DescribeZones获取
                     * @return Zone 实例可用区，类似ap-guangzhou-1（广州一区）；实例可售卖区域可以通过接口DescribeZones获取
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置实例可用区，类似ap-guangzhou-1（广州一区）；实例可售卖区域可以通过接口DescribeZones获取
                     * @param _zone 实例可用区，类似ap-guangzhou-1（广州一区）；实例可售卖区域可以通过接口DescribeZones获取
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
                     * 获取只读组类型选项，1-按照一个实例一个只读组的方式发货，2-新建只读组后发货，所有实例都在这个只读组下面， 3-发货的所有实例都在已有的只读组下面
                     * @return ReadOnlyGroupType 只读组类型选项，1-按照一个实例一个只读组的方式发货，2-新建只读组后发货，所有实例都在这个只读组下面， 3-发货的所有实例都在已有的只读组下面
                     * 
                     */
                    int64_t GetReadOnlyGroupType() const;

                    /**
                     * 设置只读组类型选项，1-按照一个实例一个只读组的方式发货，2-新建只读组后发货，所有实例都在这个只读组下面， 3-发货的所有实例都在已有的只读组下面
                     * @param _readOnlyGroupType 只读组类型选项，1-按照一个实例一个只读组的方式发货，2-新建只读组后发货，所有实例都在这个只读组下面， 3-发货的所有实例都在已有的只读组下面
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
                     * 获取实例内存大小，单位GB
                     * @return Memory 实例内存大小，单位GB
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置实例内存大小，单位GB
                     * @param _memory 实例内存大小，单位GB
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
                     * 获取实例磁盘大小，单位GB
                     * @return Storage 实例磁盘大小，单位GB
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置实例磁盘大小，单位GB
                     * @param _storage 实例磁盘大小，单位GB
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
                     * 获取0-默认不升级主实例，1-强制升级主实例完成ro部署；主实例为非集群版时需要填1，强制升级为集群版。填1 说明您已同意将主实例升级到集群版实例。
                     * @return ReadOnlyGroupForcedUpgrade 0-默认不升级主实例，1-强制升级主实例完成ro部署；主实例为非集群版时需要填1，强制升级为集群版。填1 说明您已同意将主实例升级到集群版实例。
                     * 
                     */
                    int64_t GetReadOnlyGroupForcedUpgrade() const;

                    /**
                     * 设置0-默认不升级主实例，1-强制升级主实例完成ro部署；主实例为非集群版时需要填1，强制升级为集群版。填1 说明您已同意将主实例升级到集群版实例。
                     * @param _readOnlyGroupForcedUpgrade 0-默认不升级主实例，1-强制升级主实例完成ro部署；主实例为非集群版时需要填1，强制升级为集群版。填1 说明您已同意将主实例升级到集群版实例。
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
                     * 获取ReadOnlyGroupType=3时必填,已存在的只读组ID
                     * @return ReadOnlyGroupId ReadOnlyGroupType=3时必填,已存在的只读组ID
                     * 
                     */
                    std::string GetReadOnlyGroupId() const;

                    /**
                     * 设置ReadOnlyGroupType=3时必填,已存在的只读组ID
                     * @param _readOnlyGroupId ReadOnlyGroupType=3时必填,已存在的只读组ID
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
                     * 获取ReadOnlyGroupType=2时必填，新建的只读组名称
                     * @return ReadOnlyGroupName ReadOnlyGroupType=2时必填，新建的只读组名称
                     * 
                     */
                    std::string GetReadOnlyGroupName() const;

                    /**
                     * 设置ReadOnlyGroupType=2时必填，新建的只读组名称
                     * @param _readOnlyGroupName ReadOnlyGroupType=2时必填，新建的只读组名称
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
                     * 获取ReadOnlyGroupType=2时必填，新建的只读组是否开启延迟剔除功能，1-开启，0-关闭。当只读副本与主实例延迟大于阈值后，自动剔除。
                     * @return ReadOnlyGroupIsOfflineDelay ReadOnlyGroupType=2时必填，新建的只读组是否开启延迟剔除功能，1-开启，0-关闭。当只读副本与主实例延迟大于阈值后，自动剔除。
                     * 
                     */
                    int64_t GetReadOnlyGroupIsOfflineDelay() const;

                    /**
                     * 设置ReadOnlyGroupType=2时必填，新建的只读组是否开启延迟剔除功能，1-开启，0-关闭。当只读副本与主实例延迟大于阈值后，自动剔除。
                     * @param _readOnlyGroupIsOfflineDelay ReadOnlyGroupType=2时必填，新建的只读组是否开启延迟剔除功能，1-开启，0-关闭。当只读副本与主实例延迟大于阈值后，自动剔除。
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
                     * 获取ReadOnlyGroupType=2 且 ReadOnlyGroupIsOfflineDelay=1时必填，新建的只读组延迟剔除的阈值。
                     * @return ReadOnlyGroupMaxDelayTime ReadOnlyGroupType=2 且 ReadOnlyGroupIsOfflineDelay=1时必填，新建的只读组延迟剔除的阈值。
                     * 
                     */
                    int64_t GetReadOnlyGroupMaxDelayTime() const;

                    /**
                     * 设置ReadOnlyGroupType=2 且 ReadOnlyGroupIsOfflineDelay=1时必填，新建的只读组延迟剔除的阈值。
                     * @param _readOnlyGroupMaxDelayTime ReadOnlyGroupType=2 且 ReadOnlyGroupIsOfflineDelay=1时必填，新建的只读组延迟剔除的阈值。
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
                     * 获取ReadOnlyGroupType=2 且 ReadOnlyGroupIsOfflineDelay=1时必填，新建的只读组延迟剔除后至少保留只读副本的个数。
                     * @return ReadOnlyGroupMinInGroup ReadOnlyGroupType=2 且 ReadOnlyGroupIsOfflineDelay=1时必填，新建的只读组延迟剔除后至少保留只读副本的个数。
                     * 
                     */
                    int64_t GetReadOnlyGroupMinInGroup() const;

                    /**
                     * 设置ReadOnlyGroupType=2 且 ReadOnlyGroupIsOfflineDelay=1时必填，新建的只读组延迟剔除后至少保留只读副本的个数。
                     * @param _readOnlyGroupMinInGroup ReadOnlyGroupType=2 且 ReadOnlyGroupIsOfflineDelay=1时必填，新建的只读组延迟剔除后至少保留只读副本的个数。
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
                     * 获取付费模式，取值支持 PREPAID（预付费），POSTPAID（后付费）。
                     * @return InstanceChargeType 付费模式，取值支持 PREPAID（预付费），POSTPAID（后付费）。
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置付费模式，取值支持 PREPAID（预付费），POSTPAID（后付费）。
                     * @param _instanceChargeType 付费模式，取值支持 PREPAID（预付费），POSTPAID（后付费）。
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
                     * 获取本次购买几个只读实例，默认值为2。
                     * @return GoodsNum 本次购买几个只读实例，默认值为2。
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置本次购买几个只读实例，默认值为2。
                     * @param _goodsNum 本次购买几个只读实例，默认值为2。
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
                     * 获取VPC子网ID，形如subnet-bdoe83fa；SubnetId和VpcId需同时设置或者同时不设置
                     * @return SubnetId VPC子网ID，形如subnet-bdoe83fa；SubnetId和VpcId需同时设置或者同时不设置
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置VPC子网ID，形如subnet-bdoe83fa；SubnetId和VpcId需同时设置或者同时不设置
                     * @param _subnetId VPC子网ID，形如subnet-bdoe83fa；SubnetId和VpcId需同时设置或者同时不设置
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
                     * 获取VPC网络ID，形如vpc-dsp338hz；SubnetId和VpcId需同时设置或者同时不设置
                     * @return VpcId VPC网络ID，形如vpc-dsp338hz；SubnetId和VpcId需同时设置或者同时不设置
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC网络ID，形如vpc-dsp338hz；SubnetId和VpcId需同时设置或者同时不设置
                     * @param _vpcId VPC网络ID，形如vpc-dsp338hz；SubnetId和VpcId需同时设置或者同时不设置
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
                     * 获取购买实例周期，默认取值为1，表示一个月。取值不超过48
                     * @return Period 购买实例周期，默认取值为1，表示一个月。取值不超过48
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置购买实例周期，默认取值为1，表示一个月。取值不超过48
                     * @param _period 购买实例周期，默认取值为1，表示一个月。取值不超过48
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
                     * 获取安全组列表，填写形如sg-xxx的安全组ID
                     * @return SecurityGroupList 安全组列表，填写形如sg-xxx的安全组ID
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupList() const;

                    /**
                     * 设置安全组列表，填写形如sg-xxx的安全组ID
                     * @param _securityGroupList 安全组列表，填写形如sg-xxx的安全组ID
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
                     * 获取是否自动使用代金券；1 - 是，0 - 否，默认不使用
                     * @return AutoVoucher 是否自动使用代金券；1 - 是，0 - 否，默认不使用
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置是否自动使用代金券；1 - 是，0 - 否，默认不使用
                     * @param _autoVoucher 是否自动使用代金券；1 - 是，0 - 否，默认不使用
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
                     * 获取代金券ID数组，目前单个订单只能使用一张
                     * @return VoucherIds 代金券ID数组，目前单个订单只能使用一张
                     * 
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置代金券ID数组，目前单个订单只能使用一张
                     * @param _voucherIds 代金券ID数组，目前单个订单只能使用一张
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
                     * 获取新建实例绑定的标签集合
                     * @return ResourceTags 新建实例绑定的标签集合
                     * 
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 设置新建实例绑定的标签集合
                     * @param _resourceTags 新建实例绑定的标签集合
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
                     * 获取系统字符集排序规则，默认：Chinese_PRC_CI_AS
                     * @return Collation 系统字符集排序规则，默认：Chinese_PRC_CI_AS
                     * 
                     */
                    std::string GetCollation() const;

                    /**
                     * 设置系统字符集排序规则，默认：Chinese_PRC_CI_AS
                     * @param _collation 系统字符集排序规则，默认：Chinese_PRC_CI_AS
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
                     * 获取系统时区，默认：China Standard Time
                     * @return TimeZone 系统时区，默认：China Standard Time
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置系统时区，默认：China Standard Time
                     * @param _timeZone 系统时区，默认：China Standard Time
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                private:

                    /**
                     * 主实例ID，格式如：mssql-3l3fgqn7
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例可用区，类似ap-guangzhou-1（广州一区）；实例可售卖区域可以通过接口DescribeZones获取
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 只读组类型选项，1-按照一个实例一个只读组的方式发货，2-新建只读组后发货，所有实例都在这个只读组下面， 3-发货的所有实例都在已有的只读组下面
                     */
                    int64_t m_readOnlyGroupType;
                    bool m_readOnlyGroupTypeHasBeenSet;

                    /**
                     * 实例内存大小，单位GB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 实例磁盘大小，单位GB
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 0-默认不升级主实例，1-强制升级主实例完成ro部署；主实例为非集群版时需要填1，强制升级为集群版。填1 说明您已同意将主实例升级到集群版实例。
                     */
                    int64_t m_readOnlyGroupForcedUpgrade;
                    bool m_readOnlyGroupForcedUpgradeHasBeenSet;

                    /**
                     * ReadOnlyGroupType=3时必填,已存在的只读组ID
                     */
                    std::string m_readOnlyGroupId;
                    bool m_readOnlyGroupIdHasBeenSet;

                    /**
                     * ReadOnlyGroupType=2时必填，新建的只读组名称
                     */
                    std::string m_readOnlyGroupName;
                    bool m_readOnlyGroupNameHasBeenSet;

                    /**
                     * ReadOnlyGroupType=2时必填，新建的只读组是否开启延迟剔除功能，1-开启，0-关闭。当只读副本与主实例延迟大于阈值后，自动剔除。
                     */
                    int64_t m_readOnlyGroupIsOfflineDelay;
                    bool m_readOnlyGroupIsOfflineDelayHasBeenSet;

                    /**
                     * ReadOnlyGroupType=2 且 ReadOnlyGroupIsOfflineDelay=1时必填，新建的只读组延迟剔除的阈值。
                     */
                    int64_t m_readOnlyGroupMaxDelayTime;
                    bool m_readOnlyGroupMaxDelayTimeHasBeenSet;

                    /**
                     * ReadOnlyGroupType=2 且 ReadOnlyGroupIsOfflineDelay=1时必填，新建的只读组延迟剔除后至少保留只读副本的个数。
                     */
                    int64_t m_readOnlyGroupMinInGroup;
                    bool m_readOnlyGroupMinInGroupHasBeenSet;

                    /**
                     * 付费模式，取值支持 PREPAID（预付费），POSTPAID（后付费）。
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 本次购买几个只读实例，默认值为2。
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * VPC子网ID，形如subnet-bdoe83fa；SubnetId和VpcId需同时设置或者同时不设置
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * VPC网络ID，形如vpc-dsp338hz；SubnetId和VpcId需同时设置或者同时不设置
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 购买实例周期，默认取值为1，表示一个月。取值不超过48
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 安全组列表，填写形如sg-xxx的安全组ID
                     */
                    std::vector<std::string> m_securityGroupList;
                    bool m_securityGroupListHasBeenSet;

                    /**
                     * 是否自动使用代金券；1 - 是，0 - 否，默认不使用
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * 代金券ID数组，目前单个订单只能使用一张
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                    /**
                     * 新建实例绑定的标签集合
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * 系统字符集排序规则，默认：Chinese_PRC_CI_AS
                     */
                    std::string m_collation;
                    bool m_collationHasBeenSet;

                    /**
                     * 系统时区，默认：China Standard Time
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEREADONLYDBINSTANCESREQUEST_H_
