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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SPECINFO_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SPECINFO_H_

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
                * 实例可售卖的规格信息
                */
                class SpecInfo : public AbstractModel
                {
                public:
                    SpecInfo();
                    ~SpecInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例规格ID，利用DescribeZones返回的SpecId，结合DescribeProductConfig返回的可售卖规格信息，可获悉某个可用区下可购买什么规格的实例</p>
                     * @return SpecId <p>实例规格ID，利用DescribeZones返回的SpecId，结合DescribeProductConfig返回的可售卖规格信息，可获悉某个可用区下可购买什么规格的实例</p>
                     * 
                     */
                    int64_t GetSpecId() const;

                    /**
                     * 设置<p>实例规格ID，利用DescribeZones返回的SpecId，结合DescribeProductConfig返回的可售卖规格信息，可获悉某个可用区下可购买什么规格的实例</p>
                     * @param _specId <p>实例规格ID，利用DescribeZones返回的SpecId，结合DescribeProductConfig返回的可售卖规格信息，可获悉某个可用区下可购买什么规格的实例</p>
                     * 
                     */
                    void SetSpecId(const int64_t& _specId);

                    /**
                     * 判断参数 SpecId 是否已赋值
                     * @return SpecId 是否已赋值
                     * 
                     */
                    bool SpecIdHasBeenSet() const;

                    /**
                     * 获取<p>机型ID</p>
                     * @return MachineType <p>机型ID</p>
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置<p>机型ID</p>
                     * @param _machineType <p>机型ID</p>
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
                     * 获取<p>机型中文名称</p>
                     * @return MachineTypeName <p>机型中文名称</p>
                     * 
                     */
                    std::string GetMachineTypeName() const;

                    /**
                     * 设置<p>机型中文名称</p>
                     * @param _machineTypeName <p>机型中文名称</p>
                     * 
                     */
                    void SetMachineTypeName(const std::string& _machineTypeName);

                    /**
                     * 判断参数 MachineTypeName 是否已赋值
                     * @return MachineTypeName 是否已赋值
                     * 
                     */
                    bool MachineTypeNameHasBeenSet() const;

                    /**
                     * 获取<p>数据库版本信息。取值为2008R2（表示SQL Server 2008 R2），2012SP3（表示SQL Server 2012），2016SP1（表示SQL Server 2016 SP1）</p>
                     * @return Version <p>数据库版本信息。取值为2008R2（表示SQL Server 2008 R2），2012SP3（表示SQL Server 2012），2016SP1（表示SQL Server 2016 SP1）</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>数据库版本信息。取值为2008R2（表示SQL Server 2008 R2），2012SP3（表示SQL Server 2012），2016SP1（表示SQL Server 2016 SP1）</p>
                     * @param _version <p>数据库版本信息。取值为2008R2（表示SQL Server 2008 R2），2012SP3（表示SQL Server 2012），2016SP1（表示SQL Server 2016 SP1）</p>
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取<p>Version字段对应的版本名称</p>
                     * @return VersionName <p>Version字段对应的版本名称</p>
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置<p>Version字段对应的版本名称</p>
                     * @param _versionName <p>Version字段对应的版本名称</p>
                     * 
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     * 
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取<p>内存大小，单位GB</p>
                     * @return Memory <p>内存大小，单位GB</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>内存大小，单位GB</p>
                     * @param _memory <p>内存大小，单位GB</p>
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
                     * 获取<p>CPU核数</p>
                     * @return CPU <p>CPU核数</p>
                     * 
                     */
                    int64_t GetCPU() const;

                    /**
                     * 设置<p>CPU核数</p>
                     * @param _cPU <p>CPU核数</p>
                     * 
                     */
                    void SetCPU(const int64_t& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     * 
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取<p>此规格下最小的磁盘大小，单位GB</p>
                     * @return MinStorage <p>此规格下最小的磁盘大小，单位GB</p>
                     * 
                     */
                    int64_t GetMinStorage() const;

                    /**
                     * 设置<p>此规格下最小的磁盘大小，单位GB</p>
                     * @param _minStorage <p>此规格下最小的磁盘大小，单位GB</p>
                     * 
                     */
                    void SetMinStorage(const int64_t& _minStorage);

                    /**
                     * 判断参数 MinStorage 是否已赋值
                     * @return MinStorage 是否已赋值
                     * 
                     */
                    bool MinStorageHasBeenSet() const;

                    /**
                     * 获取<p>此规格下最大的磁盘大小，单位GB</p>
                     * @return MaxStorage <p>此规格下最大的磁盘大小，单位GB</p>
                     * 
                     */
                    int64_t GetMaxStorage() const;

                    /**
                     * 设置<p>此规格下最大的磁盘大小，单位GB</p>
                     * @param _maxStorage <p>此规格下最大的磁盘大小，单位GB</p>
                     * 
                     */
                    void SetMaxStorage(const int64_t& _maxStorage);

                    /**
                     * 判断参数 MaxStorage 是否已赋值
                     * @return MaxStorage 是否已赋值
                     * 
                     */
                    bool MaxStorageHasBeenSet() const;

                    /**
                     * 获取<p>此规格对应的QPS大小</p>
                     * @return QPS <p>此规格对应的QPS大小</p>
                     * 
                     */
                    int64_t GetQPS() const;

                    /**
                     * 设置<p>此规格对应的QPS大小</p>
                     * @param _qPS <p>此规格对应的QPS大小</p>
                     * 
                     */
                    void SetQPS(const int64_t& _qPS);

                    /**
                     * 判断参数 QPS 是否已赋值
                     * @return QPS 是否已赋值
                     * 
                     */
                    bool QPSHasBeenSet() const;

                    /**
                     * 获取<p>此规格的中文描述信息</p>
                     * @return SuitInfo <p>此规格的中文描述信息</p>
                     * 
                     */
                    std::string GetSuitInfo() const;

                    /**
                     * 设置<p>此规格的中文描述信息</p>
                     * @param _suitInfo <p>此规格的中文描述信息</p>
                     * 
                     */
                    void SetSuitInfo(const std::string& _suitInfo);

                    /**
                     * 判断参数 SuitInfo 是否已赋值
                     * @return SuitInfo 是否已赋值
                     * 
                     */
                    bool SuitInfoHasBeenSet() const;

                    /**
                     * 获取<p>此规格对应的包年包月Pid</p>
                     * @return Pid <p>此规格对应的包年包月Pid</p>
                     * 
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置<p>此规格对应的包年包月Pid</p>
                     * @param _pid <p>此规格对应的包年包月Pid</p>
                     * 
                     */
                    void SetPid(const int64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取<p>此规格对应的按量计费Pid列表</p>
                     * @return PostPid <p>此规格对应的按量计费Pid列表</p>
                     * 
                     */
                    std::vector<int64_t> GetPostPid() const;

                    /**
                     * 设置<p>此规格对应的按量计费Pid列表</p>
                     * @param _postPid <p>此规格对应的按量计费Pid列表</p>
                     * 
                     */
                    void SetPostPid(const std::vector<int64_t>& _postPid);

                    /**
                     * 判断参数 PostPid 是否已赋值
                     * @return PostPid 是否已赋值
                     * 
                     */
                    bool PostPidHasBeenSet() const;

                    /**
                     * 获取<p>此规格下支持的付费模式，POST-仅支持按量计费 PRE-仅支持包年包月 ALL-支持所有</p>
                     * @return PayModeStatus <p>此规格下支持的付费模式，POST-仅支持按量计费 PRE-仅支持包年包月 ALL-支持所有</p>
                     * 
                     */
                    std::string GetPayModeStatus() const;

                    /**
                     * 设置<p>此规格下支持的付费模式，POST-仅支持按量计费 PRE-仅支持包年包月 ALL-支持所有</p>
                     * @param _payModeStatus <p>此规格下支持的付费模式，POST-仅支持按量计费 PRE-仅支持包年包月 ALL-支持所有</p>
                     * 
                     */
                    void SetPayModeStatus(const std::string& _payModeStatus);

                    /**
                     * 判断参数 PayModeStatus 是否已赋值
                     * @return PayModeStatus 是否已赋值
                     * 
                     */
                    bool PayModeStatusHasBeenSet() const;

                    /**
                     * 获取<p>购买实例的类型 HA-本地盘高可用(包括双机高可用，alwaysOn集群)，RO-本地盘只读副本，SI-云盘版单节点,BI-商业智能服务，cvmHA-云盘版高可用，cvmRO-云盘版只读副本，MultiHA-多节点，cvmMultiHA-云盘多节点<br>示例值：HA</p>
                     * @return InstanceType <p>购买实例的类型 HA-本地盘高可用(包括双机高可用，alwaysOn集群)，RO-本地盘只读副本，SI-云盘版单节点,BI-商业智能服务，cvmHA-云盘版高可用，cvmRO-云盘版只读副本，MultiHA-多节点，cvmMultiHA-云盘多节点<br>示例值：HA</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>购买实例的类型 HA-本地盘高可用(包括双机高可用，alwaysOn集群)，RO-本地盘只读副本，SI-云盘版单节点,BI-商业智能服务，cvmHA-云盘版高可用，cvmRO-云盘版只读副本，MultiHA-多节点，cvmMultiHA-云盘多节点<br>示例值：HA</p>
                     * @param _instanceType <p>购买实例的类型 HA-本地盘高可用(包括双机高可用，alwaysOn集群)，RO-本地盘只读副本，SI-云盘版单节点,BI-商业智能服务，cvmHA-云盘版高可用，cvmRO-云盘版只读副本，MultiHA-多节点，cvmMultiHA-云盘多节点<br>示例值：HA</p>
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
                     * 获取<p>跨可用区类型，MultiZones-只支持跨可用区，SameZones-只支持同可用区，ALL-支持所有</p>
                     * @return MultiZonesStatus <p>跨可用区类型，MultiZones-只支持跨可用区，SameZones-只支持同可用区，ALL-支持所有</p>
                     * 
                     */
                    std::string GetMultiZonesStatus() const;

                    /**
                     * 设置<p>跨可用区类型，MultiZones-只支持跨可用区，SameZones-只支持同可用区，ALL-支持所有</p>
                     * @param _multiZonesStatus <p>跨可用区类型，MultiZones-只支持跨可用区，SameZones-只支持同可用区，ALL-支持所有</p>
                     * 
                     */
                    void SetMultiZonesStatus(const std::string& _multiZonesStatus);

                    /**
                     * 判断参数 MultiZonesStatus 是否已赋值
                     * @return MultiZonesStatus 是否已赋值
                     * 
                     */
                    bool MultiZonesStatusHasBeenSet() const;

                    /**
                     * 获取<p>最小磁盘容量时的基准</p><p>单位：IOPS</p>
                     * @return MinBaselineIOPS <p>最小磁盘容量时的基准</p><p>单位：IOPS</p>
                     * 
                     */
                    uint64_t GetMinBaselineIOPS() const;

                    /**
                     * 设置<p>最小磁盘容量时的基准</p><p>单位：IOPS</p>
                     * @param _minBaselineIOPS <p>最小磁盘容量时的基准</p><p>单位：IOPS</p>
                     * 
                     */
                    void SetMinBaselineIOPS(const uint64_t& _minBaselineIOPS);

                    /**
                     * 判断参数 MinBaselineIOPS 是否已赋值
                     * @return MinBaselineIOPS 是否已赋值
                     * 
                     */
                    bool MinBaselineIOPSHasBeenSet() const;

                    /**
                     * 获取<p>最大磁盘容量时的基准</p><p>单位：IOPS</p>
                     * @return MaxBaselineIOPS <p>最大磁盘容量时的基准</p><p>单位：IOPS</p>
                     * 
                     */
                    uint64_t GetMaxBaselineIOPS() const;

                    /**
                     * 设置<p>最大磁盘容量时的基准</p><p>单位：IOPS</p>
                     * @param _maxBaselineIOPS <p>最大磁盘容量时的基准</p><p>单位：IOPS</p>
                     * 
                     */
                    void SetMaxBaselineIOPS(const uint64_t& _maxBaselineIOPS);

                    /**
                     * 判断参数 MaxBaselineIOPS 是否已赋值
                     * @return MaxBaselineIOPS 是否已赋值
                     * 
                     */
                    bool MaxBaselineIOPSHasBeenSet() const;

                    /**
                     * 获取<p>最小磁盘容量时的基准吞吐量</p><p>单位：MB/s</p>
                     * @return MinBaselineThroughput <p>最小磁盘容量时的基准吞吐量</p><p>单位：MB/s</p>
                     * 
                     */
                    uint64_t GetMinBaselineThroughput() const;

                    /**
                     * 设置<p>最小磁盘容量时的基准吞吐量</p><p>单位：MB/s</p>
                     * @param _minBaselineThroughput <p>最小磁盘容量时的基准吞吐量</p><p>单位：MB/s</p>
                     * 
                     */
                    void SetMinBaselineThroughput(const uint64_t& _minBaselineThroughput);

                    /**
                     * 判断参数 MinBaselineThroughput 是否已赋值
                     * @return MinBaselineThroughput 是否已赋值
                     * 
                     */
                    bool MinBaselineThroughputHasBeenSet() const;

                    /**
                     * 获取<p>最大磁盘容量时的基准吞吐量</p><p>单位：MB/s</p>
                     * @return MaxBaselineThroughput <p>最大磁盘容量时的基准吞吐量</p><p>单位：MB/s</p>
                     * 
                     */
                    uint64_t GetMaxBaselineThroughput() const;

                    /**
                     * 设置<p>最大磁盘容量时的基准吞吐量</p><p>单位：MB/s</p>
                     * @param _maxBaselineThroughput <p>最大磁盘容量时的基准吞吐量</p><p>单位：MB/s</p>
                     * 
                     */
                    void SetMaxBaselineThroughput(const uint64_t& _maxBaselineThroughput);

                    /**
                     * 判断参数 MaxBaselineThroughput 是否已赋值
                     * @return MaxBaselineThroughput 是否已赋值
                     * 
                     */
                    bool MaxBaselineThroughputHasBeenSet() const;

                    /**
                     * 获取<p>是否支持额外 IO 性能</p><p>枚举值：</p><ul><li>TRUE： 支持额外 IO 性能</li><li>FALSE： 不支持额外 IO 性能</li></ul>
                     * @return ExtraIOSupported <p>是否支持额外 IO 性能</p><p>枚举值：</p><ul><li>TRUE： 支持额外 IO 性能</li><li>FALSE： 不支持额外 IO 性能</li></ul>
                     * 
                     */
                    bool GetExtraIOSupported() const;

                    /**
                     * 设置<p>是否支持额外 IO 性能</p><p>枚举值：</p><ul><li>TRUE： 支持额外 IO 性能</li><li>FALSE： 不支持额外 IO 性能</li></ul>
                     * @param _extraIOSupported <p>是否支持额外 IO 性能</p><p>枚举值：</p><ul><li>TRUE： 支持额外 IO 性能</li><li>FALSE： 不支持额外 IO 性能</li></ul>
                     * 
                     */
                    void SetExtraIOSupported(const bool& _extraIOSupported);

                    /**
                     * 判断参数 ExtraIOSupported 是否已赋值
                     * @return ExtraIOSupported 是否已赋值
                     * 
                     */
                    bool ExtraIOSupportedHasBeenSet() const;

                    /**
                     * 获取<p>额外 IO 最大吞吐量</p><p>单位：MB/s</p>
                     * @return MaxExtraThroughput <p>额外 IO 最大吞吐量</p><p>单位：MB/s</p>
                     * 
                     */
                    uint64_t GetMaxExtraThroughput() const;

                    /**
                     * 设置<p>额外 IO 最大吞吐量</p><p>单位：MB/s</p>
                     * @param _maxExtraThroughput <p>额外 IO 最大吞吐量</p><p>单位：MB/s</p>
                     * 
                     */
                    void SetMaxExtraThroughput(const uint64_t& _maxExtraThroughput);

                    /**
                     * 判断参数 MaxExtraThroughput 是否已赋值
                     * @return MaxExtraThroughput 是否已赋值
                     * 
                     */
                    bool MaxExtraThroughputHasBeenSet() const;

                    /**
                     * 获取<p>支持额外 IO 的最小磁盘容量</p><p>单位： GB</p><p>默认值：460</p>
                     * @return MinDiskSizeForExtraIO <p>支持额外 IO 的最小磁盘容量</p><p>单位： GB</p><p>默认值：460</p>
                     * 
                     */
                    uint64_t GetMinDiskSizeForExtraIO() const;

                    /**
                     * 设置<p>支持额外 IO 的最小磁盘容量</p><p>单位： GB</p><p>默认值：460</p>
                     * @param _minDiskSizeForExtraIO <p>支持额外 IO 的最小磁盘容量</p><p>单位： GB</p><p>默认值：460</p>
                     * 
                     */
                    void SetMinDiskSizeForExtraIO(const uint64_t& _minDiskSizeForExtraIO);

                    /**
                     * 判断参数 MinDiskSizeForExtraIO 是否已赋值
                     * @return MinDiskSizeForExtraIO 是否已赋值
                     * 
                     */
                    bool MinDiskSizeForExtraIOHasBeenSet() const;

                private:

                    /**
                     * <p>实例规格ID，利用DescribeZones返回的SpecId，结合DescribeProductConfig返回的可售卖规格信息，可获悉某个可用区下可购买什么规格的实例</p>
                     */
                    int64_t m_specId;
                    bool m_specIdHasBeenSet;

                    /**
                     * <p>机型ID</p>
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * <p>机型中文名称</p>
                     */
                    std::string m_machineTypeName;
                    bool m_machineTypeNameHasBeenSet;

                    /**
                     * <p>数据库版本信息。取值为2008R2（表示SQL Server 2008 R2），2012SP3（表示SQL Server 2012），2016SP1（表示SQL Server 2016 SP1）</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>Version字段对应的版本名称</p>
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * <p>内存大小，单位GB</p>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>CPU核数</p>
                     */
                    int64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * <p>此规格下最小的磁盘大小，单位GB</p>
                     */
                    int64_t m_minStorage;
                    bool m_minStorageHasBeenSet;

                    /**
                     * <p>此规格下最大的磁盘大小，单位GB</p>
                     */
                    int64_t m_maxStorage;
                    bool m_maxStorageHasBeenSet;

                    /**
                     * <p>此规格对应的QPS大小</p>
                     */
                    int64_t m_qPS;
                    bool m_qPSHasBeenSet;

                    /**
                     * <p>此规格的中文描述信息</p>
                     */
                    std::string m_suitInfo;
                    bool m_suitInfoHasBeenSet;

                    /**
                     * <p>此规格对应的包年包月Pid</p>
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * <p>此规格对应的按量计费Pid列表</p>
                     */
                    std::vector<int64_t> m_postPid;
                    bool m_postPidHasBeenSet;

                    /**
                     * <p>此规格下支持的付费模式，POST-仅支持按量计费 PRE-仅支持包年包月 ALL-支持所有</p>
                     */
                    std::string m_payModeStatus;
                    bool m_payModeStatusHasBeenSet;

                    /**
                     * <p>购买实例的类型 HA-本地盘高可用(包括双机高可用，alwaysOn集群)，RO-本地盘只读副本，SI-云盘版单节点,BI-商业智能服务，cvmHA-云盘版高可用，cvmRO-云盘版只读副本，MultiHA-多节点，cvmMultiHA-云盘多节点<br>示例值：HA</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>跨可用区类型，MultiZones-只支持跨可用区，SameZones-只支持同可用区，ALL-支持所有</p>
                     */
                    std::string m_multiZonesStatus;
                    bool m_multiZonesStatusHasBeenSet;

                    /**
                     * <p>最小磁盘容量时的基准</p><p>单位：IOPS</p>
                     */
                    uint64_t m_minBaselineIOPS;
                    bool m_minBaselineIOPSHasBeenSet;

                    /**
                     * <p>最大磁盘容量时的基准</p><p>单位：IOPS</p>
                     */
                    uint64_t m_maxBaselineIOPS;
                    bool m_maxBaselineIOPSHasBeenSet;

                    /**
                     * <p>最小磁盘容量时的基准吞吐量</p><p>单位：MB/s</p>
                     */
                    uint64_t m_minBaselineThroughput;
                    bool m_minBaselineThroughputHasBeenSet;

                    /**
                     * <p>最大磁盘容量时的基准吞吐量</p><p>单位：MB/s</p>
                     */
                    uint64_t m_maxBaselineThroughput;
                    bool m_maxBaselineThroughputHasBeenSet;

                    /**
                     * <p>是否支持额外 IO 性能</p><p>枚举值：</p><ul><li>TRUE： 支持额外 IO 性能</li><li>FALSE： 不支持额外 IO 性能</li></ul>
                     */
                    bool m_extraIOSupported;
                    bool m_extraIOSupportedHasBeenSet;

                    /**
                     * <p>额外 IO 最大吞吐量</p><p>单位：MB/s</p>
                     */
                    uint64_t m_maxExtraThroughput;
                    bool m_maxExtraThroughputHasBeenSet;

                    /**
                     * <p>支持额外 IO 的最小磁盘容量</p><p>单位： GB</p><p>默认值：460</p>
                     */
                    uint64_t m_minDiskSizeForExtraIO;
                    bool m_minDiskSizeForExtraIOHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SPECINFO_H_
