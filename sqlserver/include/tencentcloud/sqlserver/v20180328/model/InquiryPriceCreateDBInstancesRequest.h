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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INQUIRYPRICECREATEDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INQUIRYPRICECREATEDBINSTANCESREQUEST_H_

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
                * InquiryPriceCreateDBInstances请求参数结构体
                */
                class InquiryPriceCreateDBInstancesRequest : public AbstractModel
                {
                public:
                    InquiryPriceCreateDBInstancesRequest();
                    ~InquiryPriceCreateDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>可用区ID。该参数可以通过调用 DescribeZones 接口的返回值中的Zone字段来获取。</p>
                     * @return Zone <p>可用区ID。该参数可以通过调用 DescribeZones 接口的返回值中的Zone字段来获取。</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区ID。该参数可以通过调用 DescribeZones 接口的返回值中的Zone字段来获取。</p>
                     * @param _zone <p>可用区ID。该参数可以通过调用 DescribeZones 接口的返回值中的Zone字段来获取。</p>
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
                     * 获取<p>内存大小，单位：GB</p>
                     * @return Memory <p>内存大小，单位：GB</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>内存大小，单位：GB</p>
                     * @param _memory <p>内存大小，单位：GB</p>
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
                     * 获取<p>实例容量大小，单位：GB。</p>
                     * @return Storage <p>实例容量大小，单位：GB。</p>
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置<p>实例容量大小，单位：GB。</p>
                     * @param _storage <p>实例容量大小，单位：GB。</p>
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
                     * 获取<p>计费类型，取值支持 PREPAID，POSTPAID。</p>
                     * @return InstanceChargeType <p>计费类型，取值支持 PREPAID，POSTPAID。</p>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>计费类型，取值支持 PREPAID，POSTPAID。</p>
                     * @param _instanceChargeType <p>计费类型，取值支持 PREPAID，POSTPAID。</p>
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
                     * 获取<p>购买时长，单位：月。取值为1到48，默认为1</p>
                     * @return Period <p>购买时长，单位：月。取值为1到48，默认为1</p>
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置<p>购买时长，单位：月。取值为1到48，默认为1</p>
                     * @param _period <p>购买时长，单位：月。取值为1到48，默认为1</p>
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
                     * 获取<p>一次性购买的实例数量。取值1-100，默认取值为1</p>
                     * @return GoodsNum <p>一次性购买的实例数量。取值1-100，默认取值为1</p>
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置<p>一次性购买的实例数量。取值1-100，默认取值为1</p>
                     * @param _goodsNum <p>一次性购买的实例数量。取值1-100，默认取值为1</p>
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
                     * 获取<p>sqlserver版本，目前所有支持的版本有：2008R2 (SQL Server 2008 R2 Enterprise)，2012SP3 (SQL Server 2012 Enterprise)，201202 (SQL Server 2012 Standard)，2014SP2 (SQL Server 2014 Enterprise)，201402 (SQL Server 2014 Standard)，2016SP1 (SQL Server 2016 Enterprise)，201602 (SQL Server 2016 Standard)，2017 (SQL Server 2017 Enterprise)，201702 (SQL Server 2017 Standard)，2019 (SQL Server 2019 Enterprise)，201902 (SQL Server 2019 Standard)。每个地域支持售卖的版本不同，可通过DescribeProductConfig接口来拉取每个地域可售卖的版本信息。不填，默认为版本2008R2。</p>
                     * @return DBVersion <p>sqlserver版本，目前所有支持的版本有：2008R2 (SQL Server 2008 R2 Enterprise)，2012SP3 (SQL Server 2012 Enterprise)，201202 (SQL Server 2012 Standard)，2014SP2 (SQL Server 2014 Enterprise)，201402 (SQL Server 2014 Standard)，2016SP1 (SQL Server 2016 Enterprise)，201602 (SQL Server 2016 Standard)，2017 (SQL Server 2017 Enterprise)，201702 (SQL Server 2017 Standard)，2019 (SQL Server 2019 Enterprise)，201902 (SQL Server 2019 Standard)。每个地域支持售卖的版本不同，可通过DescribeProductConfig接口来拉取每个地域可售卖的版本信息。不填，默认为版本2008R2。</p>
                     * 
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置<p>sqlserver版本，目前所有支持的版本有：2008R2 (SQL Server 2008 R2 Enterprise)，2012SP3 (SQL Server 2012 Enterprise)，201202 (SQL Server 2012 Standard)，2014SP2 (SQL Server 2014 Enterprise)，201402 (SQL Server 2014 Standard)，2016SP1 (SQL Server 2016 Enterprise)，201602 (SQL Server 2016 Standard)，2017 (SQL Server 2017 Enterprise)，201702 (SQL Server 2017 Standard)，2019 (SQL Server 2019 Enterprise)，201902 (SQL Server 2019 Standard)。每个地域支持售卖的版本不同，可通过DescribeProductConfig接口来拉取每个地域可售卖的版本信息。不填，默认为版本2008R2。</p>
                     * @param _dBVersion <p>sqlserver版本，目前所有支持的版本有：2008R2 (SQL Server 2008 R2 Enterprise)，2012SP3 (SQL Server 2012 Enterprise)，201202 (SQL Server 2012 Standard)，2014SP2 (SQL Server 2014 Enterprise)，201402 (SQL Server 2014 Standard)，2016SP1 (SQL Server 2016 Enterprise)，201602 (SQL Server 2016 Standard)，2017 (SQL Server 2017 Enterprise)，201702 (SQL Server 2017 Standard)，2019 (SQL Server 2019 Enterprise)，201902 (SQL Server 2019 Standard)。每个地域支持售卖的版本不同，可通过DescribeProductConfig接口来拉取每个地域可售卖的版本信息。不填，默认为版本2008R2。</p>
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
                     * 获取<p>预购买实例的CPU核心数</p>
                     * @return Cpu <p>预购买实例的CPU核心数</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>预购买实例的CPU核心数</p>
                     * @param _cpu <p>预购买实例的CPU核心数</p>
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取<p>购买实例的类型 HA-高可用型(包括双机高可用，alwaysOn集群)，RO-只读副本型，SI-单节点型,cvmHA-虚拟机双机高可用,cvmRO-虚拟机只读，MultiHA-多节点，cvmMultiHA-云盘</p>
                     * @return InstanceType <p>购买实例的类型 HA-高可用型(包括双机高可用，alwaysOn集群)，RO-只读副本型，SI-单节点型,cvmHA-虚拟机双机高可用,cvmRO-虚拟机只读，MultiHA-多节点，cvmMultiHA-云盘</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>购买实例的类型 HA-高可用型(包括双机高可用，alwaysOn集群)，RO-只读副本型，SI-单节点型,cvmHA-虚拟机双机高可用,cvmRO-虚拟机只读，MultiHA-多节点，cvmMultiHA-云盘</p>
                     * @param _instanceType <p>购买实例的类型 HA-高可用型(包括双机高可用，alwaysOn集群)，RO-只读副本型，SI-单节点型,cvmHA-虚拟机双机高可用,cvmRO-虚拟机只读，MultiHA-多节点，cvmMultiHA-云盘</p>
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>购买实例的宿主机类型，PM-物理机, CLOUD_PREMIUM-虚拟机高性能云盘，CLOUD_SSD-虚拟机SSD云盘,<br>CLOUD_HSSD-虚拟机加强型SSD云盘，CLOUD_TSSD-虚拟机极速型SSD云盘，CLOUD_BSSD-虚拟机通用型SSD云盘</p>
                     * @return MachineType <p>购买实例的宿主机类型，PM-物理机, CLOUD_PREMIUM-虚拟机高性能云盘，CLOUD_SSD-虚拟机SSD云盘,<br>CLOUD_HSSD-虚拟机加强型SSD云盘，CLOUD_TSSD-虚拟机极速型SSD云盘，CLOUD_BSSD-虚拟机通用型SSD云盘</p>
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置<p>购买实例的宿主机类型，PM-物理机, CLOUD_PREMIUM-虚拟机高性能云盘，CLOUD_SSD-虚拟机SSD云盘,<br>CLOUD_HSSD-虚拟机加强型SSD云盘，CLOUD_TSSD-虚拟机极速型SSD云盘，CLOUD_BSSD-虚拟机通用型SSD云盘</p>
                     * @param _machineType <p>购买实例的宿主机类型，PM-物理机, CLOUD_PREMIUM-虚拟机高性能云盘，CLOUD_SSD-虚拟机SSD云盘,<br>CLOUD_HSSD-虚拟机加强型SSD云盘，CLOUD_TSSD-虚拟机极速型SSD云盘，CLOUD_BSSD-虚拟机通用型SSD云盘</p>
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
                     * 获取<p>备节点可用区，默认为空。如果是多节点架构时必传，并且备机可用区集合最小为2个，最大不超过5个。</p>
                     * @return DrZones <p>备节点可用区，默认为空。如果是多节点架构时必传，并且备机可用区集合最小为2个，最大不超过5个。</p>
                     * 
                     */
                    std::vector<std::string> GetDrZones() const;

                    /**
                     * 设置<p>备节点可用区，默认为空。如果是多节点架构时必传，并且备机可用区集合最小为2个，最大不超过5个。</p>
                     * @param _drZones <p>备节点可用区，默认为空。如果是多节点架构时必传，并且备机可用区集合最小为2个，最大不超过5个。</p>
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
                     * <p>可用区ID。该参数可以通过调用 DescribeZones 接口的返回值中的Zone字段来获取。</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>内存大小，单位：GB</p>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>实例容量大小，单位：GB。</p>
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * <p>计费类型，取值支持 PREPAID，POSTPAID。</p>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>购买时长，单位：月。取值为1到48，默认为1</p>
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>一次性购买的实例数量。取值1-100，默认取值为1</p>
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * <p>sqlserver版本，目前所有支持的版本有：2008R2 (SQL Server 2008 R2 Enterprise)，2012SP3 (SQL Server 2012 Enterprise)，201202 (SQL Server 2012 Standard)，2014SP2 (SQL Server 2014 Enterprise)，201402 (SQL Server 2014 Standard)，2016SP1 (SQL Server 2016 Enterprise)，201602 (SQL Server 2016 Standard)，2017 (SQL Server 2017 Enterprise)，201702 (SQL Server 2017 Standard)，2019 (SQL Server 2019 Enterprise)，201902 (SQL Server 2019 Standard)。每个地域支持售卖的版本不同，可通过DescribeProductConfig接口来拉取每个地域可售卖的版本信息。不填，默认为版本2008R2。</p>
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                    /**
                     * <p>预购买实例的CPU核心数</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>购买实例的类型 HA-高可用型(包括双机高可用，alwaysOn集群)，RO-只读副本型，SI-单节点型,cvmHA-虚拟机双机高可用,cvmRO-虚拟机只读，MultiHA-多节点，cvmMultiHA-云盘</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>购买实例的宿主机类型，PM-物理机, CLOUD_PREMIUM-虚拟机高性能云盘，CLOUD_SSD-虚拟机SSD云盘,<br>CLOUD_HSSD-虚拟机加强型SSD云盘，CLOUD_TSSD-虚拟机极速型SSD云盘，CLOUD_BSSD-虚拟机通用型SSD云盘</p>
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * <p>备节点可用区，默认为空。如果是多节点架构时必传，并且备机可用区集合最小为2个，最大不超过5个。</p>
                     */
                    std::vector<std::string> m_drZones;
                    bool m_drZonesHasBeenSet;

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

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INQUIRYPRICECREATEDBINSTANCESREQUEST_H_
