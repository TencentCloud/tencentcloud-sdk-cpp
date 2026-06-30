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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATECLOUDDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATECLOUDDBINSTANCESREQUEST_H_

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
                * CreateCloudDBInstances请求参数结构体
                */
                class CreateCloudDBInstancesRequest : public AbstractModel
                {
                public:
                    CreateCloudDBInstancesRequest();
                    ~CreateCloudDBInstancesRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<p>项目ID</p>
                     * @return ProjectId <p>项目ID</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>项目ID</p>
                     * @param _projectId <p>项目ID</p>
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>本次购买几个实例，默认值为1。取值不超过10</p>
                     * @return GoodsNum <p>本次购买几个实例，默认值为1。取值不超过10</p>
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置<p>本次购买几个实例，默认值为1。取值不超过10</p>
                     * @param _goodsNum <p>本次购买几个实例，默认值为1。取值不超过10</p>
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
                     * 获取<p>sqlserver版本，目前所有支持的版本有：2008R2 (SQL Server 2008 R2 Enterprise)，2012SP3 (SQL Server 2012 Enterprise)，201202 (SQL Server 2012 Standard)，2014SP2 (SQL Server 2014 Enterprise)，201402 (SQL Server 2014 Standard)，2016SP1 (SQL Server 2016 Enterprise)，201602 (SQL Server 2016 Standard)，2017 (SQL Server 2017 Enterprise)，201702 (SQL Server 2017 Standard)，2019 (SQL Server 2019 Enterprise)，201902 (SQL Server 2019 Standard)。每个地域支持售卖的版本不同，可通过DescribeProductConfig接口来拉取每个地域可售卖的版本信息。不填，默认为版本2017。</p>
                     * @return DBVersion <p>sqlserver版本，目前所有支持的版本有：2008R2 (SQL Server 2008 R2 Enterprise)，2012SP3 (SQL Server 2012 Enterprise)，201202 (SQL Server 2012 Standard)，2014SP2 (SQL Server 2014 Enterprise)，201402 (SQL Server 2014 Standard)，2016SP1 (SQL Server 2016 Enterprise)，201602 (SQL Server 2016 Standard)，2017 (SQL Server 2017 Enterprise)，201702 (SQL Server 2017 Standard)，2019 (SQL Server 2019 Enterprise)，201902 (SQL Server 2019 Standard)。每个地域支持售卖的版本不同，可通过DescribeProductConfig接口来拉取每个地域可售卖的版本信息。不填，默认为版本2017。</p>
                     * 
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置<p>sqlserver版本，目前所有支持的版本有：2008R2 (SQL Server 2008 R2 Enterprise)，2012SP3 (SQL Server 2012 Enterprise)，201202 (SQL Server 2012 Standard)，2014SP2 (SQL Server 2014 Enterprise)，201402 (SQL Server 2014 Standard)，2016SP1 (SQL Server 2016 Enterprise)，201602 (SQL Server 2016 Standard)，2017 (SQL Server 2017 Enterprise)，201702 (SQL Server 2017 Standard)，2019 (SQL Server 2019 Enterprise)，201902 (SQL Server 2019 Standard)。每个地域支持售卖的版本不同，可通过DescribeProductConfig接口来拉取每个地域可售卖的版本信息。不填，默认为版本2017。</p>
                     * @param _dBVersion <p>sqlserver版本，目前所有支持的版本有：2008R2 (SQL Server 2008 R2 Enterprise)，2012SP3 (SQL Server 2012 Enterprise)，201202 (SQL Server 2012 Standard)，2014SP2 (SQL Server 2014 Enterprise)，201402 (SQL Server 2014 Standard)，2016SP1 (SQL Server 2016 Enterprise)，201602 (SQL Server 2016 Standard)，2017 (SQL Server 2017 Enterprise)，201702 (SQL Server 2017 Standard)，2019 (SQL Server 2019 Enterprise)，201902 (SQL Server 2019 Standard)。每个地域支持售卖的版本不同，可通过DescribeProductConfig接口来拉取每个地域可售卖的版本信息。不填，默认为版本2017。</p>
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
                     * 获取<p>自动续费标志：0-正常续费  1-自动续费，默认为1自动续费。只在购买预付费实例时有效。</p>
                     * @return AutoRenewFlag <p>自动续费标志：0-正常续费  1-自动续费，默认为1自动续费。只在购买预付费实例时有效。</p>
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置<p>自动续费标志：0-正常续费  1-自动续费，默认为1自动续费。只在购买预付费实例时有效。</p>
                     * @param _autoRenewFlag <p>自动续费标志：0-正常续费  1-自动续费，默认为1自动续费。只在购买预付费实例时有效。</p>
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
                     * 获取<p>可维护时间窗配置，以周为单位，表示周几允许维护，1-7分别代表周一到周末</p>
                     * @return Weekly <p>可维护时间窗配置，以周为单位，表示周几允许维护，1-7分别代表周一到周末</p>
                     * 
                     */
                    std::vector<int64_t> GetWeekly() const;

                    /**
                     * 设置<p>可维护时间窗配置，以周为单位，表示周几允许维护，1-7分别代表周一到周末</p>
                     * @param _weekly <p>可维护时间窗配置，以周为单位，表示周几允许维护，1-7分别代表周一到周末</p>
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
                     * 获取<p>可维护时间窗配置，每天可维护的开始时间</p>
                     * @return StartTime <p>可维护时间窗配置，每天可维护的开始时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>可维护时间窗配置，每天可维护的开始时间</p>
                     * @param _startTime <p>可维护时间窗配置，每天可维护的开始时间</p>
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
                     * 获取<p>可维护时间窗配置，持续时间，单位：小时</p>
                     * @return Span <p>可维护时间窗配置，持续时间，单位：小时</p>
                     * 
                     */
                    int64_t GetSpan() const;

                    /**
                     * 设置<p>可维护时间窗配置，持续时间，单位：小时</p>
                     * @param _span <p>可维护时间窗配置，持续时间，单位：小时</p>
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
                     * 获取<p>是否跨可用区部署，默认值为false</p>
                     * @return MultiZones <p>是否跨可用区部署，默认值为false</p>
                     * 
                     */
                    bool GetMultiZones() const;

                    /**
                     * 设置<p>是否跨可用区部署，默认值为false</p>
                     * @param _multiZones <p>是否跨可用区部署，默认值为false</p>
                     * 
                     */
                    void SetMultiZones(const bool& _multiZones);

                    /**
                     * 判断参数 MultiZones 是否已赋值
                     * @return MultiZones 是否已赋值
                     * 
                     */
                    bool MultiZonesHasBeenSet() const;

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
                     * 获取<p>是否多节点架构实例，默认值为false。当MultiNodes = true时，参数MultiZones必须取值为true。</p>
                     * @return MultiNodes <p>是否多节点架构实例，默认值为false。当MultiNodes = true时，参数MultiZones必须取值为true。</p>
                     * 
                     */
                    bool GetMultiNodes() const;

                    /**
                     * 设置<p>是否多节点架构实例，默认值为false。当MultiNodes = true时，参数MultiZones必须取值为true。</p>
                     * @param _multiNodes <p>是否多节点架构实例，默认值为false。当MultiNodes = true时，参数MultiZones必须取值为true。</p>
                     * 
                     */
                    void SetMultiNodes(const bool& _multiNodes);

                    /**
                     * 判断参数 MultiNodes 是否已赋值
                     * @return MultiNodes 是否已赋值
                     * 
                     */
                    bool MultiNodesHasBeenSet() const;

                    /**
                     * 获取<p>备节点可用区，默认为空。当MultiNodes = true时，主节点和备节点可用区不能全部相同。备机可用区集合最小为2个，最大不超过5个。</p>
                     * @return DrZones <p>备节点可用区，默认为空。当MultiNodes = true时，主节点和备节点可用区不能全部相同。备机可用区集合最小为2个，最大不超过5个。</p>
                     * 
                     */
                    std::vector<std::string> GetDrZones() const;

                    /**
                     * 设置<p>备节点可用区，默认为空。当MultiNodes = true时，主节点和备节点可用区不能全部相同。备机可用区集合最小为2个，最大不超过5个。</p>
                     * @param _drZones <p>备节点可用区，默认为空。当MultiNodes = true时，主节点和备节点可用区不能全部相同。备机可用区集合最小为2个，最大不超过5个。</p>
                     * 
                     */
                    void SetDrZones(const std::vector<std::string>& _drZones);

                    /**
                     * 判断参数 DrZones 是否已赋值
                     * @return DrZones 是否已赋值
                     * 
                     */
                    bool DrZonesHasBeenSet() const;

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
                     * 获取<p>额外磁盘 IO 性能，仅 CLOUD_HSSD 支持</p><p>取值范围：[0, 650]</p><p>单位：MB/s</p>
                     * @return ThroughputPerformance <p>额外磁盘 IO 性能，仅 CLOUD_HSSD 支持</p><p>取值范围：[0, 650]</p><p>单位：MB/s</p>
                     * 
                     */
                    uint64_t GetThroughputPerformance() const;

                    /**
                     * 设置<p>额外磁盘 IO 性能，仅 CLOUD_HSSD 支持</p><p>取值范围：[0, 650]</p><p>单位：MB/s</p>
                     * @param _throughputPerformance <p>额外磁盘 IO 性能，仅 CLOUD_HSSD 支持</p><p>取值范围：[0, 650]</p><p>单位：MB/s</p>
                     * 
                     */
                    void SetThroughputPerformance(const uint64_t& _throughputPerformance);

                    /**
                     * 判断参数 ThroughputPerformance 是否已赋值
                     * @return ThroughputPerformance 是否已赋值
                     * 
                     */
                    bool ThroughputPerformanceHasBeenSet() const;

                    /**
                     * 获取<p>可用性策略</p><p>枚举值：</p><ul><li>Async： 可用性优先（异步传输）</li><li>Sync： 可靠性优先（同步传输）</li></ul><p>默认值：Async</p><p>仅 AlwaysOn 双节点架构生效，单节点/多节点/MIRROR 架构忽略此参数</p>
                     * @return AvailabilityStrategy <p>可用性策略</p><p>枚举值：</p><ul><li>Async： 可用性优先（异步传输）</li><li>Sync： 可靠性优先（同步传输）</li></ul><p>默认值：Async</p><p>仅 AlwaysOn 双节点架构生效，单节点/多节点/MIRROR 架构忽略此参数</p>
                     * 
                     */
                    std::string GetAvailabilityStrategy() const;

                    /**
                     * 设置<p>可用性策略</p><p>枚举值：</p><ul><li>Async： 可用性优先（异步传输）</li><li>Sync： 可靠性优先（同步传输）</li></ul><p>默认值：Async</p><p>仅 AlwaysOn 双节点架构生效，单节点/多节点/MIRROR 架构忽略此参数</p>
                     * @param _availabilityStrategy <p>可用性策略</p><p>枚举值：</p><ul><li>Async： 可用性优先（异步传输）</li><li>Sync： 可靠性优先（同步传输）</li></ul><p>默认值：Async</p><p>仅 AlwaysOn 双节点架构生效，单节点/多节点/MIRROR 架构忽略此参数</p>
                     * 
                     */
                    void SetAvailabilityStrategy(const std::string& _availabilityStrategy);

                    /**
                     * 判断参数 AvailabilityStrategy 是否已赋值
                     * @return AvailabilityStrategy 是否已赋值
                     * 
                     */
                    bool AvailabilityStrategyHasBeenSet() const;

                private:

                    /**
                     * <p>实例可用区，类似ap-guangzhou-1（广州一区）；实例可售卖区域可以通过接口DescribeZones获取</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

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
                     * <p>付费模式，取值支持 PREPAID（预付费），POSTPAID（后付费）。</p>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>项目ID</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>本次购买几个实例，默认值为1。取值不超过10</p>
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
                     * <p>sqlserver版本，目前所有支持的版本有：2008R2 (SQL Server 2008 R2 Enterprise)，2012SP3 (SQL Server 2012 Enterprise)，201202 (SQL Server 2012 Standard)，2014SP2 (SQL Server 2014 Enterprise)，201402 (SQL Server 2014 Standard)，2016SP1 (SQL Server 2016 Enterprise)，201602 (SQL Server 2016 Standard)，2017 (SQL Server 2017 Enterprise)，201702 (SQL Server 2017 Standard)，2019 (SQL Server 2019 Enterprise)，201902 (SQL Server 2019 Standard)。每个地域支持售卖的版本不同，可通过DescribeProductConfig接口来拉取每个地域可售卖的版本信息。不填，默认为版本2017。</p>
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                    /**
                     * <p>自动续费标志：0-正常续费  1-自动续费，默认为1自动续费。只在购买预付费实例时有效。</p>
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>安全组列表，填写形如sg-xxx的安全组ID</p>
                     */
                    std::vector<std::string> m_securityGroupList;
                    bool m_securityGroupListHasBeenSet;

                    /**
                     * <p>可维护时间窗配置，以周为单位，表示周几允许维护，1-7分别代表周一到周末</p>
                     */
                    std::vector<int64_t> m_weekly;
                    bool m_weeklyHasBeenSet;

                    /**
                     * <p>可维护时间窗配置，每天可维护的开始时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>可维护时间窗配置，持续时间，单位：小时</p>
                     */
                    int64_t m_span;
                    bool m_spanHasBeenSet;

                    /**
                     * <p>是否跨可用区部署，默认值为false</p>
                     */
                    bool m_multiZones;
                    bool m_multiZonesHasBeenSet;

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
                     * <p>是否多节点架构实例，默认值为false。当MultiNodes = true时，参数MultiZones必须取值为true。</p>
                     */
                    bool m_multiNodes;
                    bool m_multiNodesHasBeenSet;

                    /**
                     * <p>备节点可用区，默认为空。当MultiNodes = true时，主节点和备节点可用区不能全部相同。备机可用区集合最小为2个，最大不超过5个。</p>
                     */
                    std::vector<std::string> m_drZones;
                    bool m_drZonesHasBeenSet;

                    /**
                     * <p>磁盘加密标识，0-不加密，1-加密</p>
                     */
                    int64_t m_diskEncryptFlag;
                    bool m_diskEncryptFlagHasBeenSet;

                    /**
                     * <p>额外磁盘 IO 性能，仅 CLOUD_HSSD 支持</p><p>取值范围：[0, 650]</p><p>单位：MB/s</p>
                     */
                    uint64_t m_throughputPerformance;
                    bool m_throughputPerformanceHasBeenSet;

                    /**
                     * <p>可用性策略</p><p>枚举值：</p><ul><li>Async： 可用性优先（异步传输）</li><li>Sync： 可靠性优先（同步传输）</li></ul><p>默认值：Async</p><p>仅 AlwaysOn 双节点架构生效，单节点/多节点/MIRROR 架构忽略此参数</p>
                     */
                    std::string m_availabilityStrategy;
                    bool m_availabilityStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATECLOUDDBINSTANCESREQUEST_H_
