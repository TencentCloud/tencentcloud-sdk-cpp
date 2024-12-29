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
                     * 获取实例规格ID，利用DescribeZones返回的SpecId，结合DescribeProductConfig返回的可售卖规格信息，可获悉某个可用区下可购买什么规格的实例
                     * @return SpecId 实例规格ID，利用DescribeZones返回的SpecId，结合DescribeProductConfig返回的可售卖规格信息，可获悉某个可用区下可购买什么规格的实例
                     * 
                     */
                    int64_t GetSpecId() const;

                    /**
                     * 设置实例规格ID，利用DescribeZones返回的SpecId，结合DescribeProductConfig返回的可售卖规格信息，可获悉某个可用区下可购买什么规格的实例
                     * @param _specId 实例规格ID，利用DescribeZones返回的SpecId，结合DescribeProductConfig返回的可售卖规格信息，可获悉某个可用区下可购买什么规格的实例
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
                     * 获取机型ID
                     * @return MachineType 机型ID
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置机型ID
                     * @param _machineType 机型ID
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
                     * 获取机型中文名称
                     * @return MachineTypeName 机型中文名称
                     * 
                     */
                    std::string GetMachineTypeName() const;

                    /**
                     * 设置机型中文名称
                     * @param _machineTypeName 机型中文名称
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
                     * 获取数据库版本信息。取值为2008R2（表示SQL Server 2008 R2），2012SP3（表示SQL Server 2012），2016SP1（表示SQL Server 2016 SP1）
                     * @return Version 数据库版本信息。取值为2008R2（表示SQL Server 2008 R2），2012SP3（表示SQL Server 2012），2016SP1（表示SQL Server 2016 SP1）
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置数据库版本信息。取值为2008R2（表示SQL Server 2008 R2），2012SP3（表示SQL Server 2012），2016SP1（表示SQL Server 2016 SP1）
                     * @param _version 数据库版本信息。取值为2008R2（表示SQL Server 2008 R2），2012SP3（表示SQL Server 2012），2016SP1（表示SQL Server 2016 SP1）
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
                     * 获取Version字段对应的版本名称
                     * @return VersionName Version字段对应的版本名称
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置Version字段对应的版本名称
                     * @param _versionName Version字段对应的版本名称
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
                     * 获取内存大小，单位GB
                     * @return Memory 内存大小，单位GB
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置内存大小，单位GB
                     * @param _memory 内存大小，单位GB
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
                     * 获取CPU核数
                     * @return CPU CPU核数
                     * 
                     */
                    int64_t GetCPU() const;

                    /**
                     * 设置CPU核数
                     * @param _cPU CPU核数
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
                     * 获取此规格下最小的磁盘大小，单位GB
                     * @return MinStorage 此规格下最小的磁盘大小，单位GB
                     * 
                     */
                    int64_t GetMinStorage() const;

                    /**
                     * 设置此规格下最小的磁盘大小，单位GB
                     * @param _minStorage 此规格下最小的磁盘大小，单位GB
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
                     * 获取此规格下最大的磁盘大小，单位GB
                     * @return MaxStorage 此规格下最大的磁盘大小，单位GB
                     * 
                     */
                    int64_t GetMaxStorage() const;

                    /**
                     * 设置此规格下最大的磁盘大小，单位GB
                     * @param _maxStorage 此规格下最大的磁盘大小，单位GB
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
                     * 获取此规格对应的QPS大小
                     * @return QPS 此规格对应的QPS大小
                     * 
                     */
                    int64_t GetQPS() const;

                    /**
                     * 设置此规格对应的QPS大小
                     * @param _qPS 此规格对应的QPS大小
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
                     * 获取此规格的中文描述信息
                     * @return SuitInfo 此规格的中文描述信息
                     * 
                     */
                    std::string GetSuitInfo() const;

                    /**
                     * 设置此规格的中文描述信息
                     * @param _suitInfo 此规格的中文描述信息
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
                     * 获取此规格对应的包年包月Pid
                     * @return Pid 此规格对应的包年包月Pid
                     * 
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置此规格对应的包年包月Pid
                     * @param _pid 此规格对应的包年包月Pid
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
                     * 获取此规格对应的按量计费Pid列表
                     * @return PostPid 此规格对应的按量计费Pid列表
                     * 
                     */
                    std::vector<int64_t> GetPostPid() const;

                    /**
                     * 设置此规格对应的按量计费Pid列表
                     * @param _postPid 此规格对应的按量计费Pid列表
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
                     * 获取此规格下支持的付费模式，POST-仅支持按量计费 PRE-仅支持包年包月 ALL-支持所有
                     * @return PayModeStatus 此规格下支持的付费模式，POST-仅支持按量计费 PRE-仅支持包年包月 ALL-支持所有
                     * 
                     */
                    std::string GetPayModeStatus() const;

                    /**
                     * 设置此规格下支持的付费模式，POST-仅支持按量计费 PRE-仅支持包年包月 ALL-支持所有
                     * @param _payModeStatus 此规格下支持的付费模式，POST-仅支持按量计费 PRE-仅支持包年包月 ALL-支持所有
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
                     * 获取购买实例的类型 HA-本地盘高可用(包括双机高可用，alwaysOn集群)，RO-本地盘只读副本，SI-云盘版单节点,BI-商业智能服务，cvmHA-云盘版高可用，cvmRO-云盘版只读副本，MultiHA-多节点，cvmMultiHA-云盘多节点
示例值：HA
                     * @return InstanceType 购买实例的类型 HA-本地盘高可用(包括双机高可用，alwaysOn集群)，RO-本地盘只读副本，SI-云盘版单节点,BI-商业智能服务，cvmHA-云盘版高可用，cvmRO-云盘版只读副本，MultiHA-多节点，cvmMultiHA-云盘多节点
示例值：HA
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置购买实例的类型 HA-本地盘高可用(包括双机高可用，alwaysOn集群)，RO-本地盘只读副本，SI-云盘版单节点,BI-商业智能服务，cvmHA-云盘版高可用，cvmRO-云盘版只读副本，MultiHA-多节点，cvmMultiHA-云盘多节点
示例值：HA
                     * @param _instanceType 购买实例的类型 HA-本地盘高可用(包括双机高可用，alwaysOn集群)，RO-本地盘只读副本，SI-云盘版单节点,BI-商业智能服务，cvmHA-云盘版高可用，cvmRO-云盘版只读副本，MultiHA-多节点，cvmMultiHA-云盘多节点
示例值：HA
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
                     * 获取跨可用区类型，MultiZones-只支持跨可用区，SameZones-只支持同可用区，ALL-支持所有
                     * @return MultiZonesStatus 跨可用区类型，MultiZones-只支持跨可用区，SameZones-只支持同可用区，ALL-支持所有
                     * 
                     */
                    std::string GetMultiZonesStatus() const;

                    /**
                     * 设置跨可用区类型，MultiZones-只支持跨可用区，SameZones-只支持同可用区，ALL-支持所有
                     * @param _multiZonesStatus 跨可用区类型，MultiZones-只支持跨可用区，SameZones-只支持同可用区，ALL-支持所有
                     * 
                     */
                    void SetMultiZonesStatus(const std::string& _multiZonesStatus);

                    /**
                     * 判断参数 MultiZonesStatus 是否已赋值
                     * @return MultiZonesStatus 是否已赋值
                     * 
                     */
                    bool MultiZonesStatusHasBeenSet() const;

                private:

                    /**
                     * 实例规格ID，利用DescribeZones返回的SpecId，结合DescribeProductConfig返回的可售卖规格信息，可获悉某个可用区下可购买什么规格的实例
                     */
                    int64_t m_specId;
                    bool m_specIdHasBeenSet;

                    /**
                     * 机型ID
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * 机型中文名称
                     */
                    std::string m_machineTypeName;
                    bool m_machineTypeNameHasBeenSet;

                    /**
                     * 数据库版本信息。取值为2008R2（表示SQL Server 2008 R2），2012SP3（表示SQL Server 2012），2016SP1（表示SQL Server 2016 SP1）
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Version字段对应的版本名称
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * 内存大小，单位GB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * CPU核数
                     */
                    int64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * 此规格下最小的磁盘大小，单位GB
                     */
                    int64_t m_minStorage;
                    bool m_minStorageHasBeenSet;

                    /**
                     * 此规格下最大的磁盘大小，单位GB
                     */
                    int64_t m_maxStorage;
                    bool m_maxStorageHasBeenSet;

                    /**
                     * 此规格对应的QPS大小
                     */
                    int64_t m_qPS;
                    bool m_qPSHasBeenSet;

                    /**
                     * 此规格的中文描述信息
                     */
                    std::string m_suitInfo;
                    bool m_suitInfoHasBeenSet;

                    /**
                     * 此规格对应的包年包月Pid
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * 此规格对应的按量计费Pid列表
                     */
                    std::vector<int64_t> m_postPid;
                    bool m_postPidHasBeenSet;

                    /**
                     * 此规格下支持的付费模式，POST-仅支持按量计费 PRE-仅支持包年包月 ALL-支持所有
                     */
                    std::string m_payModeStatus;
                    bool m_payModeStatusHasBeenSet;

                    /**
                     * 购买实例的类型 HA-本地盘高可用(包括双机高可用，alwaysOn集群)，RO-本地盘只读副本，SI-云盘版单节点,BI-商业智能服务，cvmHA-云盘版高可用，cvmRO-云盘版只读副本，MultiHA-多节点，cvmMultiHA-云盘多节点
示例值：HA
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 跨可用区类型，MultiZones-只支持跨可用区，SameZones-只支持同可用区，ALL-支持所有
                     */
                    std::string m_multiZonesStatus;
                    bool m_multiZonesStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SPECINFO_H_
