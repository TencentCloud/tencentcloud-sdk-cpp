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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SPECSELLSTATUS_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SPECSELLSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/ZoneStatus.h>
#include <tencentcloud/sqlserver/v20180328/model/Price.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 售卖配置状态
                */
                class SpecSellStatus : public AbstractModel
                {
                public:
                    SpecSellStatus();
                    ~SpecSellStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>可售卖的规格唯一ID</p>
                     * @return Id <p>可售卖的规格唯一ID</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>可售卖的规格唯一ID</p>
                     * @param _id <p>可售卖的规格唯一ID</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>实例规格ID</p>
                     * @return SpecId <p>实例规格ID</p>
                     * 
                     */
                    uint64_t GetSpecId() const;

                    /**
                     * 设置<p>实例规格ID</p>
                     * @param _specId <p>实例规格ID</p>
                     * 
                     */
                    void SetSpecId(const uint64_t& _specId);

                    /**
                     * 判断参数 SpecId 是否已赋值
                     * @return SpecId 是否已赋值
                     * 
                     */
                    bool SpecIdHasBeenSet() const;

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
                     * 获取<p>产品类型，购买实例的类型 HA-本地盘高可用(包括双机高可用，alwaysOn集群)，RO-本地盘只读副本，SI-云盘版单节点,BI-商业智能服务，cvmHA-云盘版高可用，cvmRO-云盘版只读副本，MultiHA-多节点，cvmMultiHA-云盘多节点</p>
                     * @return InstanceType <p>产品类型，购买实例的类型 HA-本地盘高可用(包括双机高可用，alwaysOn集群)，RO-本地盘只读副本，SI-云盘版单节点,BI-商业智能服务，cvmHA-云盘版高可用，cvmRO-云盘版只读副本，MultiHA-多节点，cvmMultiHA-云盘多节点</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>产品类型，购买实例的类型 HA-本地盘高可用(包括双机高可用，alwaysOn集群)，RO-本地盘只读副本，SI-云盘版单节点,BI-商业智能服务，cvmHA-云盘版高可用，cvmRO-云盘版只读副本，MultiHA-多节点，cvmMultiHA-云盘多节点</p>
                     * @param _instanceType <p>产品类型，购买实例的类型 HA-本地盘高可用(包括双机高可用，alwaysOn集群)，RO-本地盘只读副本，SI-云盘版单节点,BI-商业智能服务，cvmHA-云盘版高可用，cvmRO-云盘版只读副本，MultiHA-多节点，cvmMultiHA-云盘多节点</p>
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
                     * 获取<p>该规格支持的是否跨可用去，MultiZones-只支持跨可用区，SameZones-只支持同可用区，ALL-支持所有</p>
                     * @return MultiZonesStatus <p>该规格支持的是否跨可用去，MultiZones-只支持跨可用区，SameZones-只支持同可用区，ALL-支持所有</p>
                     * 
                     */
                    std::string GetMultiZonesStatus() const;

                    /**
                     * 设置<p>该规格支持的是否跨可用去，MultiZones-只支持跨可用区，SameZones-只支持同可用区，ALL-支持所有</p>
                     * @param _multiZonesStatus <p>该规格支持的是否跨可用去，MultiZones-只支持跨可用区，SameZones-只支持同可用区，ALL-支持所有</p>
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
                     * 获取<p>架构标识，SINGLE-单节点 DOUBLE-双节点 TRIPLE-三节点 MULTI-多节点<br>示例值：SINGLE</p>
                     * @return Architecture <p>架构标识，SINGLE-单节点 DOUBLE-双节点 TRIPLE-三节点 MULTI-多节点<br>示例值：SINGLE</p>
                     * 
                     */
                    std::string GetArchitecture() const;

                    /**
                     * 设置<p>架构标识，SINGLE-单节点 DOUBLE-双节点 TRIPLE-三节点 MULTI-多节点<br>示例值：SINGLE</p>
                     * @param _architecture <p>架构标识，SINGLE-单节点 DOUBLE-双节点 TRIPLE-三节点 MULTI-多节点<br>示例值：SINGLE</p>
                     * 
                     */
                    void SetArchitecture(const std::string& _architecture);

                    /**
                     * 判断参数 Architecture 是否已赋值
                     * @return Architecture 是否已赋值
                     * 
                     */
                    bool ArchitectureHasBeenSet() const;

                    /**
                     * 获取<p>类型标识，EXCLUSIVE-独享型，SHARED-共享型</p>
                     * @return Style <p>类型标识，EXCLUSIVE-独享型，SHARED-共享型</p>
                     * 
                     */
                    std::string GetStyle() const;

                    /**
                     * 设置<p>类型标识，EXCLUSIVE-独享型，SHARED-共享型</p>
                     * @param _style <p>类型标识，EXCLUSIVE-独享型，SHARED-共享型</p>
                     * 
                     */
                    void SetStyle(const std::string& _style);

                    /**
                     * 判断参数 Style 是否已赋值
                     * @return Style 是否已赋值
                     * 
                     */
                    bool StyleHasBeenSet() const;

                    /**
                     * 获取<p>数据库版本信息</p>
                     * @return Version <p>数据库版本信息</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>数据库版本信息</p>
                     * @param _version <p>数据库版本信息</p>
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
                     * 获取<p>每个可用区的售卖状态集合</p>
                     * @return ZoneStatusSet <p>每个可用区的售卖状态集合</p>
                     * 
                     */
                    std::vector<ZoneStatus> GetZoneStatusSet() const;

                    /**
                     * 设置<p>每个可用区的售卖状态集合</p>
                     * @param _zoneStatusSet <p>每个可用区的售卖状态集合</p>
                     * 
                     */
                    void SetZoneStatusSet(const std::vector<ZoneStatus>& _zoneStatusSet);

                    /**
                     * 判断参数 ZoneStatusSet 是否已赋值
                     * @return ZoneStatusSet 是否已赋值
                     * 
                     */
                    bool ZoneStatusSetHasBeenSet() const;

                    /**
                     * 获取<p>规格的参考价格，实际价格以询价接口为准</p>
                     * @return Price <p>规格的参考价格，实际价格以询价接口为准</p>
                     * 
                     */
                    Price GetPrice() const;

                    /**
                     * 设置<p>规格的参考价格，实际价格以询价接口为准</p>
                     * @param _price <p>规格的参考价格，实际价格以询价接口为准</p>
                     * 
                     */
                    void SetPrice(const Price& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取<p>规格售卖状态 1-正常 2-关闭售卖但是可以升级 3-完全关闭售卖</p>
                     * @return Status <p>规格售卖状态 1-正常 2-关闭售卖但是可以升级 3-完全关闭售卖</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>规格售卖状态 1-正常 2-关闭售卖但是可以升级 3-完全关闭售卖</p>
                     * @param _status <p>规格售卖状态 1-正常 2-关闭售卖但是可以升级 3-完全关闭售卖</p>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>最小磁盘容量时的基准 </p><p>单位：IOPS</p>
                     * @return MinBaselineIOPS <p>最小磁盘容量时的基准 </p><p>单位：IOPS</p>
                     * 
                     */
                    uint64_t GetMinBaselineIOPS() const;

                    /**
                     * 设置<p>最小磁盘容量时的基准 </p><p>单位：IOPS</p>
                     * @param _minBaselineIOPS <p>最小磁盘容量时的基准 </p><p>单位：IOPS</p>
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
                     * 获取<p>最大磁盘容量时的基准 </p><p>单位：IOPS</p>
                     * @return MaxBaselineIOPS <p>最大磁盘容量时的基准 </p><p>单位：IOPS</p>
                     * 
                     */
                    uint64_t GetMaxBaselineIOPS() const;

                    /**
                     * 设置<p>最大磁盘容量时的基准 </p><p>单位：IOPS</p>
                     * @param _maxBaselineIOPS <p>最大磁盘容量时的基准 </p><p>单位：IOPS</p>
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
                     * 获取<p>最小磁盘容量时的基准吞吐量 </p><p>单位：MB/s</p>
                     * @return MinBaselineThroughput <p>最小磁盘容量时的基准吞吐量 </p><p>单位：MB/s</p>
                     * 
                     */
                    uint64_t GetMinBaselineThroughput() const;

                    /**
                     * 设置<p>最小磁盘容量时的基准吞吐量 </p><p>单位：MB/s</p>
                     * @param _minBaselineThroughput <p>最小磁盘容量时的基准吞吐量 </p><p>单位：MB/s</p>
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
                     * 获取<p>最大磁盘容量时的基准吞吐量 </p><p>单位：MB/s</p>
                     * @return MaxBaselineThroughput <p>最大磁盘容量时的基准吞吐量 </p><p>单位：MB/s</p>
                     * 
                     */
                    uint64_t GetMaxBaselineThroughput() const;

                    /**
                     * 设置<p>最大磁盘容量时的基准吞吐量 </p><p>单位：MB/s</p>
                     * @param _maxBaselineThroughput <p>最大磁盘容量时的基准吞吐量 </p><p>单位：MB/s</p>
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
                     * 获取<p>额外 IO 最大吞吐量 </p><p>单位：MB/s</p>
                     * @return MaxExtraThroughput <p>额外 IO 最大吞吐量 </p><p>单位：MB/s</p>
                     * 
                     */
                    uint64_t GetMaxExtraThroughput() const;

                    /**
                     * 设置<p>额外 IO 最大吞吐量 </p><p>单位：MB/s</p>
                     * @param _maxExtraThroughput <p>额外 IO 最大吞吐量 </p><p>单位：MB/s</p>
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
                     * 获取<p>支持额外 IO 的最小磁盘容量</p><p>单位：GB</p><p>默认值：460</p>
                     * @return MinDiskSizeForExtraIO <p>支持额外 IO 的最小磁盘容量</p><p>单位：GB</p><p>默认值：460</p>
                     * 
                     */
                    uint64_t GetMinDiskSizeForExtraIO() const;

                    /**
                     * 设置<p>支持额外 IO 的最小磁盘容量</p><p>单位：GB</p><p>默认值：460</p>
                     * @param _minDiskSizeForExtraIO <p>支持额外 IO 的最小磁盘容量</p><p>单位：GB</p><p>默认值：460</p>
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
                     * <p>可售卖的规格唯一ID</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>实例规格ID</p>
                     */
                    uint64_t m_specId;
                    bool m_specIdHasBeenSet;

                    /**
                     * <p>此规格下支持的付费模式，POST-仅支持按量计费 PRE-仅支持包年包月 ALL-支持所有</p>
                     */
                    std::string m_payModeStatus;
                    bool m_payModeStatusHasBeenSet;

                    /**
                     * <p>产品类型，购买实例的类型 HA-本地盘高可用(包括双机高可用，alwaysOn集群)，RO-本地盘只读副本，SI-云盘版单节点,BI-商业智能服务，cvmHA-云盘版高可用，cvmRO-云盘版只读副本，MultiHA-多节点，cvmMultiHA-云盘多节点</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>该规格支持的是否跨可用去，MultiZones-只支持跨可用区，SameZones-只支持同可用区，ALL-支持所有</p>
                     */
                    std::string m_multiZonesStatus;
                    bool m_multiZonesStatusHasBeenSet;

                    /**
                     * <p>架构标识，SINGLE-单节点 DOUBLE-双节点 TRIPLE-三节点 MULTI-多节点<br>示例值：SINGLE</p>
                     */
                    std::string m_architecture;
                    bool m_architectureHasBeenSet;

                    /**
                     * <p>类型标识，EXCLUSIVE-独享型，SHARED-共享型</p>
                     */
                    std::string m_style;
                    bool m_styleHasBeenSet;

                    /**
                     * <p>数据库版本信息</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>每个可用区的售卖状态集合</p>
                     */
                    std::vector<ZoneStatus> m_zoneStatusSet;
                    bool m_zoneStatusSetHasBeenSet;

                    /**
                     * <p>规格的参考价格，实际价格以询价接口为准</p>
                     */
                    Price m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * <p>规格售卖状态 1-正常 2-关闭售卖但是可以升级 3-完全关闭售卖</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>最小磁盘容量时的基准 </p><p>单位：IOPS</p>
                     */
                    uint64_t m_minBaselineIOPS;
                    bool m_minBaselineIOPSHasBeenSet;

                    /**
                     * <p>最大磁盘容量时的基准 </p><p>单位：IOPS</p>
                     */
                    uint64_t m_maxBaselineIOPS;
                    bool m_maxBaselineIOPSHasBeenSet;

                    /**
                     * <p>最小磁盘容量时的基准吞吐量 </p><p>单位：MB/s</p>
                     */
                    uint64_t m_minBaselineThroughput;
                    bool m_minBaselineThroughputHasBeenSet;

                    /**
                     * <p>最大磁盘容量时的基准吞吐量 </p><p>单位：MB/s</p>
                     */
                    uint64_t m_maxBaselineThroughput;
                    bool m_maxBaselineThroughputHasBeenSet;

                    /**
                     * <p>是否支持额外 IO 性能</p><p>枚举值：</p><ul><li>TRUE： 支持额外 IO 性能</li><li>FALSE： 不支持额外 IO 性能</li></ul>
                     */
                    bool m_extraIOSupported;
                    bool m_extraIOSupportedHasBeenSet;

                    /**
                     * <p>额外 IO 最大吞吐量 </p><p>单位：MB/s</p>
                     */
                    uint64_t m_maxExtraThroughput;
                    bool m_maxExtraThroughputHasBeenSet;

                    /**
                     * <p>支持额外 IO 的最小磁盘容量</p><p>单位：GB</p><p>默认值：460</p>
                     */
                    uint64_t m_minDiskSizeForExtraIO;
                    bool m_minDiskSizeForExtraIOHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SPECSELLSTATUS_H_
