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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateDBInstances请求参数结构体
                */
                class CreateDBInstancesRequest : public AbstractModel
                {
                public:
                    CreateDBInstancesRequest();
                    ~CreateDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例可用区，类似ap-guangzhou-1（广州一区）；实例可售卖区域可以通过接口DescribeZones获取
                     * @return Zone 实例可用区，类似ap-guangzhou-1（广州一区）；实例可售卖区域可以通过接口DescribeZones获取
                     */
                    std::string GetZone() const;

                    /**
                     * 设置实例可用区，类似ap-guangzhou-1（广州一区）；实例可售卖区域可以通过接口DescribeZones获取
                     * @param Zone 实例可用区，类似ap-guangzhou-1（广州一区）；实例可售卖区域可以通过接口DescribeZones获取
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取实例内存大小，单位GB
                     * @return Memory 实例内存大小，单位GB
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置实例内存大小，单位GB
                     * @param Memory 实例内存大小，单位GB
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取实例磁盘大小，单位GB
                     * @return Storage 实例磁盘大小，单位GB
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置实例磁盘大小，单位GB
                     * @param Storage 实例磁盘大小，单位GB
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取付费模式，目前只支持预付费，其值为PREPAID。可不填，默认值为PREPAID
                     * @return InstanceChargeType 付费模式，目前只支持预付费，其值为PREPAID。可不填，默认值为PREPAID
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置付费模式，目前只支持预付费，其值为PREPAID。可不填，默认值为PREPAID
                     * @param InstanceChargeType 付费模式，目前只支持预付费，其值为PREPAID。可不填，默认值为PREPAID
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param ProjectId 项目ID
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取本次购买几个实例，默认值为1。取值不超过10
                     * @return GoodsNum 本次购买几个实例，默认值为1。取值不超过10
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置本次购买几个实例，默认值为1。取值不超过10
                     * @param GoodsNum 本次购买几个实例，默认值为1。取值不超过10
                     */
                    void SetGoodsNum(const int64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取VPC子网ID，形如subnet-bdoe83fa；SubnetId和VpcId需同时设置或者同时不设置
                     * @return SubnetId VPC子网ID，形如subnet-bdoe83fa；SubnetId和VpcId需同时设置或者同时不设置
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置VPC子网ID，形如subnet-bdoe83fa；SubnetId和VpcId需同时设置或者同时不设置
                     * @param SubnetId VPC子网ID，形如subnet-bdoe83fa；SubnetId和VpcId需同时设置或者同时不设置
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取VPC网络ID，形如vpc-dsp338hz；SubnetId和VpcId需同时设置或者同时不设置
                     * @return VpcId VPC网络ID，形如vpc-dsp338hz；SubnetId和VpcId需同时设置或者同时不设置
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC网络ID，形如vpc-dsp338hz；SubnetId和VpcId需同时设置或者同时不设置
                     * @param VpcId VPC网络ID，形如vpc-dsp338hz；SubnetId和VpcId需同时设置或者同时不设置
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取购买实例周期，默认取值为1，表示一个月。取值不超过48
                     * @return Period 购买实例周期，默认取值为1，表示一个月。取值不超过48
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置购买实例周期，默认取值为1，表示一个月。取值不超过48
                     * @param Period 购买实例周期，默认取值为1，表示一个月。取值不超过48
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取是否自动使用代金券；1 - 是，0 - 否，默认不使用
                     * @return AutoVoucher 是否自动使用代金券；1 - 是，0 - 否，默认不使用
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置是否自动使用代金券；1 - 是，0 - 否，默认不使用
                     * @param AutoVoucher 是否自动使用代金券；1 - 是，0 - 否，默认不使用
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取代金券ID数组，目前单个订单只能使用一张
                     * @return VoucherIds 代金券ID数组，目前单个订单只能使用一张
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置代金券ID数组，目前单个订单只能使用一张
                     * @param VoucherIds 代金券ID数组，目前单个订单只能使用一张
                     */
                    void SetVoucherIds(const std::vector<std::string>& _voucherIds);

                    /**
                     * 判断参数 VoucherIds 是否已赋值
                     * @return VoucherIds 是否已赋值
                     */
                    bool VoucherIdsHasBeenSet() const;

                    /**
                     * 获取数据库版本号，目前取值有2012SP3，表示SQL Server 2012；2008R2，表示SQL Server 2008 R2；2016SP1，表示SQL Server 2016 SP1。每个地域支持售卖的版本可能不一样，可以通过DescribeZones接口来拉取每个地域可售卖的版本信息。不填的话，默认为版本2008R2
                     * @return DBVersion 数据库版本号，目前取值有2012SP3，表示SQL Server 2012；2008R2，表示SQL Server 2008 R2；2016SP1，表示SQL Server 2016 SP1。每个地域支持售卖的版本可能不一样，可以通过DescribeZones接口来拉取每个地域可售卖的版本信息。不填的话，默认为版本2008R2
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置数据库版本号，目前取值有2012SP3，表示SQL Server 2012；2008R2，表示SQL Server 2008 R2；2016SP1，表示SQL Server 2016 SP1。每个地域支持售卖的版本可能不一样，可以通过DescribeZones接口来拉取每个地域可售卖的版本信息。不填的话，默认为版本2008R2
                     * @param DBVersion 数据库版本号，目前取值有2012SP3，表示SQL Server 2012；2008R2，表示SQL Server 2008 R2；2016SP1，表示SQL Server 2016 SP1。每个地域支持售卖的版本可能不一样，可以通过DescribeZones接口来拉取每个地域可售卖的版本信息。不填的话，默认为版本2008R2
                     */
                    void SetDBVersion(const std::string& _dBVersion);

                    /**
                     * 判断参数 DBVersion 是否已赋值
                     * @return DBVersion 是否已赋值
                     */
                    bool DBVersionHasBeenSet() const;

                private:

                    /**
                     * 实例可用区，类似ap-guangzhou-1（广州一区）；实例可售卖区域可以通过接口DescribeZones获取
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

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
                     * 付费模式，目前只支持预付费，其值为PREPAID。可不填，默认值为PREPAID
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 项目ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 本次购买几个实例，默认值为1。取值不超过10
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
                     * 数据库版本号，目前取值有2012SP3，表示SQL Server 2012；2008R2，表示SQL Server 2008 R2；2016SP1，表示SQL Server 2016 SP1。每个地域支持售卖的版本可能不一样，可以通过DescribeZones接口来拉取每个地域可售卖的版本信息。不填的话，默认为版本2008R2
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEDBINSTANCESREQUEST_H_
