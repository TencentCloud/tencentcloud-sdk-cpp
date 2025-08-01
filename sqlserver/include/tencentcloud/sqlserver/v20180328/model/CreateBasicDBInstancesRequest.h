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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEBASICDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEBASICDBINSTANCESREQUEST_H_

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
                * CreateBasicDBInstances请求参数结构体
                */
                class CreateBasicDBInstancesRequest : public AbstractModel
                {
                public:
                    CreateBasicDBInstancesRequest();
                    ~CreateBasicDBInstancesRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取实例的CPU核心数
                     * @return Cpu 实例的CPU核心数
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置实例的CPU核心数
                     * @param _cpu 实例的CPU核心数
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
                     * 获取实例内存大小，单位GB
                     * @return Memory 实例内存大小，单位GB
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置实例内存大小，单位GB
                     * @param _memory 实例内存大小，单位GB
                     * 
                     */
                    void SetMemory(const uint64_t& _memory);

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
                    uint64_t GetStorage() const;

                    /**
                     * 设置实例磁盘大小，单位GB
                     * @param _storage 实例磁盘大小，单位GB
                     * 
                     */
                    void SetStorage(const uint64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取VPC子网ID，形如subnet-bdoe83fa
                     * @return SubnetId VPC子网ID，形如subnet-bdoe83fa
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置VPC子网ID，形如subnet-bdoe83fa
                     * @param _subnetId VPC子网ID，形如subnet-bdoe83fa
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
                     * 获取VPC网络ID，形如vpc-dsp338hz
                     * @return VpcId VPC网络ID，形如vpc-dsp338hz
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC网络ID，形如vpc-dsp338hz
                     * @param _vpcId VPC网络ID，形如vpc-dsp338hz
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
                     * 获取购买实例的宿主机类型，CLOUD_PREMIUM-虚拟机高性能云硬盘，CLOUD_SSD-虚拟机SSD云硬盘,CLOUD_HSSD-虚拟机增强型SSD云硬盘，CLOUD_BSSD-虚拟机通用型SSD云盘
                     * @return MachineType 购买实例的宿主机类型，CLOUD_PREMIUM-虚拟机高性能云硬盘，CLOUD_SSD-虚拟机SSD云硬盘,CLOUD_HSSD-虚拟机增强型SSD云硬盘，CLOUD_BSSD-虚拟机通用型SSD云盘
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置购买实例的宿主机类型，CLOUD_PREMIUM-虚拟机高性能云硬盘，CLOUD_SSD-虚拟机SSD云硬盘,CLOUD_HSSD-虚拟机增强型SSD云硬盘，CLOUD_BSSD-虚拟机通用型SSD云盘
                     * @param _machineType 购买实例的宿主机类型，CLOUD_PREMIUM-虚拟机高性能云硬盘，CLOUD_SSD-虚拟机SSD云硬盘,CLOUD_HSSD-虚拟机增强型SSD云硬盘，CLOUD_BSSD-虚拟机通用型SSD云盘
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
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取本次购买几个实例，默认值为1。取值不超过10
                     * @return GoodsNum 本次购买几个实例，默认值为1。取值不超过10
                     * 
                     */
                    uint64_t GetGoodsNum() const;

                    /**
                     * 设置本次购买几个实例，默认值为1。取值不超过10
                     * @param _goodsNum 本次购买几个实例，默认值为1。取值不超过10
                     * 
                     */
                    void SetGoodsNum(const uint64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取sqlserver版本，目前所有支持的版本有：2008R2 (SQL Server 2008 R2 Enterprise)，2012SP3 (SQL Server 2012 Enterprise)，201202 (SQL Server 2012 Standard)，2014SP2 (SQL Server 2014 Enterprise)，201402 (SQL Server 2014 Standard)，2016SP1 (SQL Server 2016 Enterprise)，201602 (SQL Server 2016 Standard)，2017 (SQL Server 2017 Enterprise)，201702 (SQL Server 2017 Standard)，2019 (SQL Server 2019 Enterprise)，201902 (SQL Server 2019 Standard)。每个地域支持售卖的版本不同，可通过DescribeProductConfig接口来拉取每个地域可售卖的版本信息。不填，默认为版本2008R2。
                     * @return DBVersion sqlserver版本，目前所有支持的版本有：2008R2 (SQL Server 2008 R2 Enterprise)，2012SP3 (SQL Server 2012 Enterprise)，201202 (SQL Server 2012 Standard)，2014SP2 (SQL Server 2014 Enterprise)，201402 (SQL Server 2014 Standard)，2016SP1 (SQL Server 2016 Enterprise)，201602 (SQL Server 2016 Standard)，2017 (SQL Server 2017 Enterprise)，201702 (SQL Server 2017 Standard)，2019 (SQL Server 2019 Enterprise)，201902 (SQL Server 2019 Standard)。每个地域支持售卖的版本不同，可通过DescribeProductConfig接口来拉取每个地域可售卖的版本信息。不填，默认为版本2008R2。
                     * 
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置sqlserver版本，目前所有支持的版本有：2008R2 (SQL Server 2008 R2 Enterprise)，2012SP3 (SQL Server 2012 Enterprise)，201202 (SQL Server 2012 Standard)，2014SP2 (SQL Server 2014 Enterprise)，201402 (SQL Server 2014 Standard)，2016SP1 (SQL Server 2016 Enterprise)，201602 (SQL Server 2016 Standard)，2017 (SQL Server 2017 Enterprise)，201702 (SQL Server 2017 Standard)，2019 (SQL Server 2019 Enterprise)，201902 (SQL Server 2019 Standard)。每个地域支持售卖的版本不同，可通过DescribeProductConfig接口来拉取每个地域可售卖的版本信息。不填，默认为版本2008R2。
                     * @param _dBVersion sqlserver版本，目前所有支持的版本有：2008R2 (SQL Server 2008 R2 Enterprise)，2012SP3 (SQL Server 2012 Enterprise)，201202 (SQL Server 2012 Standard)，2014SP2 (SQL Server 2014 Enterprise)，201402 (SQL Server 2014 Standard)，2016SP1 (SQL Server 2016 Enterprise)，201602 (SQL Server 2016 Standard)，2017 (SQL Server 2017 Enterprise)，201702 (SQL Server 2017 Standard)，2019 (SQL Server 2019 Enterprise)，201902 (SQL Server 2019 Standard)。每个地域支持售卖的版本不同，可通过DescribeProductConfig接口来拉取每个地域可售卖的版本信息。不填，默认为版本2008R2。
                     * 
                     */
                    void SetDBVersion(const std::string& _dBVersion);

                    /**
                     * 判断参数 DBVersion 是否已赋值
                     * @return DBVersion 是否已赋值
                     * 
                     */
                    bool DBVersionHasBeenSet() const;

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
                     * 获取自动续费标志：0-正常续费  1-自动续费，默认为1自动续费。只在购买预付费实例时有效。
                     * @return AutoRenewFlag 自动续费标志：0-正常续费  1-自动续费，默认为1自动续费。只在购买预付费实例时有效。
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费标志：0-正常续费  1-自动续费，默认为1自动续费。只在购买预付费实例时有效。
                     * @param _autoRenewFlag 自动续费标志：0-正常续费  1-自动续费，默认为1自动续费。只在购买预付费实例时有效。
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

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
                     * 获取可维护时间窗配置，以周为单位，表示周几允许维护，1-7分别代表周一到周末
                     * @return Weekly 可维护时间窗配置，以周为单位，表示周几允许维护，1-7分别代表周一到周末
                     * 
                     */
                    std::vector<int64_t> GetWeekly() const;

                    /**
                     * 设置可维护时间窗配置，以周为单位，表示周几允许维护，1-7分别代表周一到周末
                     * @param _weekly 可维护时间窗配置，以周为单位，表示周几允许维护，1-7分别代表周一到周末
                     * 
                     */
                    void SetWeekly(const std::vector<int64_t>& _weekly);

                    /**
                     * 判断参数 Weekly 是否已赋值
                     * @return Weekly 是否已赋值
                     * 
                     */
                    bool WeeklyHasBeenSet() const;

                    /**
                     * 获取可维护时间窗配置，每天可维护的开始时间
                     * @return StartTime 可维护时间窗配置，每天可维护的开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置可维护时间窗配置，每天可维护的开始时间
                     * @param _startTime 可维护时间窗配置，每天可维护的开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取可维护时间窗配置，持续时间，单位：小时
                     * @return Span 可维护时间窗配置，持续时间，单位：小时
                     * 
                     */
                    int64_t GetSpan() const;

                    /**
                     * 设置可维护时间窗配置，持续时间，单位：小时
                     * @param _span 可维护时间窗配置，持续时间，单位：小时
                     * 
                     */
                    void SetSpan(const int64_t& _span);

                    /**
                     * 判断参数 Span 是否已赋值
                     * @return Span 是否已赋值
                     * 
                     */
                    bool SpanHasBeenSet() const;

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

                    /**
                     * 获取磁盘加密标识，0-不加密，1-加密
                     * @return DiskEncryptFlag 磁盘加密标识，0-不加密，1-加密
                     * 
                     */
                    int64_t GetDiskEncryptFlag() const;

                    /**
                     * 设置磁盘加密标识，0-不加密，1-加密
                     * @param _diskEncryptFlag 磁盘加密标识，0-不加密，1-加密
                     * 
                     */
                    void SetDiskEncryptFlag(const int64_t& _diskEncryptFlag);

                    /**
                     * 判断参数 DiskEncryptFlag 是否已赋值
                     * @return DiskEncryptFlag 是否已赋值
                     * 
                     */
                    bool DiskEncryptFlagHasBeenSet() const;

                private:

                    /**
                     * 实例可用区，类似ap-guangzhou-1（广州一区）；实例可售卖区域可以通过接口DescribeZones获取
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 实例的CPU核心数
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 实例内存大小，单位GB
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 实例磁盘大小，单位GB
                     */
                    uint64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * VPC子网ID，形如subnet-bdoe83fa
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * VPC网络ID，形如vpc-dsp338hz
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 购买实例的宿主机类型，CLOUD_PREMIUM-虚拟机高性能云硬盘，CLOUD_SSD-虚拟机SSD云硬盘,CLOUD_HSSD-虚拟机增强型SSD云硬盘，CLOUD_BSSD-虚拟机通用型SSD云盘
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * 付费模式，取值支持 PREPAID（预付费），POSTPAID（后付费）。
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 项目ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 本次购买几个实例，默认值为1。取值不超过10
                     */
                    uint64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * sqlserver版本，目前所有支持的版本有：2008R2 (SQL Server 2008 R2 Enterprise)，2012SP3 (SQL Server 2012 Enterprise)，201202 (SQL Server 2012 Standard)，2014SP2 (SQL Server 2014 Enterprise)，201402 (SQL Server 2014 Standard)，2016SP1 (SQL Server 2016 Enterprise)，201602 (SQL Server 2016 Standard)，2017 (SQL Server 2017 Enterprise)，201702 (SQL Server 2017 Standard)，2019 (SQL Server 2019 Enterprise)，201902 (SQL Server 2019 Standard)。每个地域支持售卖的版本不同，可通过DescribeProductConfig接口来拉取每个地域可售卖的版本信息。不填，默认为版本2008R2。
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

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
                     * 自动续费标志：0-正常续费  1-自动续费，默认为1自动续费。只在购买预付费实例时有效。
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

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
                     * 可维护时间窗配置，以周为单位，表示周几允许维护，1-7分别代表周一到周末
                     */
                    std::vector<int64_t> m_weekly;
                    bool m_weeklyHasBeenSet;

                    /**
                     * 可维护时间窗配置，每天可维护的开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 可维护时间窗配置，持续时间，单位：小时
                     */
                    int64_t m_span;
                    bool m_spanHasBeenSet;

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

                    /**
                     * 磁盘加密标识，0-不加密，1-加密
                     */
                    int64_t m_diskEncryptFlag;
                    bool m_diskEncryptFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEBASICDBINSTANCESREQUEST_H_
