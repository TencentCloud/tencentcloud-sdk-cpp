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
                     * 获取可售卖的规格唯一ID
                     * @return Id 可售卖的规格唯一ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置可售卖的规格唯一ID
                     * @param _id 可售卖的规格唯一ID
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
                     * 获取实例规格ID
                     * @return SpecId 实例规格ID
                     * 
                     */
                    uint64_t GetSpecId() const;

                    /**
                     * 设置实例规格ID
                     * @param _specId 实例规格ID
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
                     * 获取产品类型，购买实例的类型 HA-本地盘高可用(包括双机高可用，alwaysOn集群)，RO-本地盘只读副本，SI-云盘版单节点,BI-商业智能服务，cvmHA-云盘版高可用，cvmRO-云盘版只读副本，MultiHA-多节点，cvmMultiHA-云盘多节点
                     * @return InstanceType 产品类型，购买实例的类型 HA-本地盘高可用(包括双机高可用，alwaysOn集群)，RO-本地盘只读副本，SI-云盘版单节点,BI-商业智能服务，cvmHA-云盘版高可用，cvmRO-云盘版只读副本，MultiHA-多节点，cvmMultiHA-云盘多节点
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置产品类型，购买实例的类型 HA-本地盘高可用(包括双机高可用，alwaysOn集群)，RO-本地盘只读副本，SI-云盘版单节点,BI-商业智能服务，cvmHA-云盘版高可用，cvmRO-云盘版只读副本，MultiHA-多节点，cvmMultiHA-云盘多节点
                     * @param _instanceType 产品类型，购买实例的类型 HA-本地盘高可用(包括双机高可用，alwaysOn集群)，RO-本地盘只读副本，SI-云盘版单节点,BI-商业智能服务，cvmHA-云盘版高可用，cvmRO-云盘版只读副本，MultiHA-多节点，cvmMultiHA-云盘多节点
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
                     * 获取该规格支持的是否跨可用去，MultiZones-只支持跨可用区，SameZones-只支持同可用区，ALL-支持所有
                     * @return MultiZonesStatus 该规格支持的是否跨可用去，MultiZones-只支持跨可用区，SameZones-只支持同可用区，ALL-支持所有
                     * 
                     */
                    std::string GetMultiZonesStatus() const;

                    /**
                     * 设置该规格支持的是否跨可用去，MultiZones-只支持跨可用区，SameZones-只支持同可用区，ALL-支持所有
                     * @param _multiZonesStatus 该规格支持的是否跨可用去，MultiZones-只支持跨可用区，SameZones-只支持同可用区，ALL-支持所有
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
                     * 获取架构标识，SINGLE-单节点 DOUBLE-双节点 TRIPLE-三节点 MULTI-多节点
示例值：SINGLE
                     * @return Architecture 架构标识，SINGLE-单节点 DOUBLE-双节点 TRIPLE-三节点 MULTI-多节点
示例值：SINGLE
                     * 
                     */
                    std::string GetArchitecture() const;

                    /**
                     * 设置架构标识，SINGLE-单节点 DOUBLE-双节点 TRIPLE-三节点 MULTI-多节点
示例值：SINGLE
                     * @param _architecture 架构标识，SINGLE-单节点 DOUBLE-双节点 TRIPLE-三节点 MULTI-多节点
示例值：SINGLE
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
                     * 获取类型标识，EXCLUSIVE-独享型，SHARED-共享型
                     * @return Style 类型标识，EXCLUSIVE-独享型，SHARED-共享型
                     * 
                     */
                    std::string GetStyle() const;

                    /**
                     * 设置类型标识，EXCLUSIVE-独享型，SHARED-共享型
                     * @param _style 类型标识，EXCLUSIVE-独享型，SHARED-共享型
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
                     * 获取数据库版本信息
                     * @return Version 数据库版本信息
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置数据库版本信息
                     * @param _version 数据库版本信息
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
                     * 获取每个可用区的售卖状态集合
                     * @return ZoneStatusSet 每个可用区的售卖状态集合
                     * 
                     */
                    std::vector<ZoneStatus> GetZoneStatusSet() const;

                    /**
                     * 设置每个可用区的售卖状态集合
                     * @param _zoneStatusSet 每个可用区的售卖状态集合
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
                     * 获取规格的参考价格，实际价格以询价接口为准
                     * @return Price 规格的参考价格，实际价格以询价接口为准
                     * 
                     */
                    Price GetPrice() const;

                    /**
                     * 设置规格的参考价格，实际价格以询价接口为准
                     * @param _price 规格的参考价格，实际价格以询价接口为准
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
                     * 获取规格售卖状态 1-正常 2-关闭售卖但是可以升级 3-完全关闭售卖
                     * @return Status 规格售卖状态 1-正常 2-关闭售卖但是可以升级 3-完全关闭售卖
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置规格售卖状态 1-正常 2-关闭售卖但是可以升级 3-完全关闭售卖
                     * @param _status 规格售卖状态 1-正常 2-关闭售卖但是可以升级 3-完全关闭售卖
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 可售卖的规格唯一ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 实例规格ID
                     */
                    uint64_t m_specId;
                    bool m_specIdHasBeenSet;

                    /**
                     * 此规格下支持的付费模式，POST-仅支持按量计费 PRE-仅支持包年包月 ALL-支持所有
                     */
                    std::string m_payModeStatus;
                    bool m_payModeStatusHasBeenSet;

                    /**
                     * 产品类型，购买实例的类型 HA-本地盘高可用(包括双机高可用，alwaysOn集群)，RO-本地盘只读副本，SI-云盘版单节点,BI-商业智能服务，cvmHA-云盘版高可用，cvmRO-云盘版只读副本，MultiHA-多节点，cvmMultiHA-云盘多节点
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 该规格支持的是否跨可用去，MultiZones-只支持跨可用区，SameZones-只支持同可用区，ALL-支持所有
                     */
                    std::string m_multiZonesStatus;
                    bool m_multiZonesStatusHasBeenSet;

                    /**
                     * 架构标识，SINGLE-单节点 DOUBLE-双节点 TRIPLE-三节点 MULTI-多节点
示例值：SINGLE
                     */
                    std::string m_architecture;
                    bool m_architectureHasBeenSet;

                    /**
                     * 类型标识，EXCLUSIVE-独享型，SHARED-共享型
                     */
                    std::string m_style;
                    bool m_styleHasBeenSet;

                    /**
                     * 数据库版本信息
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 每个可用区的售卖状态集合
                     */
                    std::vector<ZoneStatus> m_zoneStatusSet;
                    bool m_zoneStatusSetHasBeenSet;

                    /**
                     * 规格的参考价格，实际价格以询价接口为准
                     */
                    Price m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * 规格售卖状态 1-正常 2-关闭售卖但是可以升级 3-完全关闭售卖
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SPECSELLSTATUS_H_
