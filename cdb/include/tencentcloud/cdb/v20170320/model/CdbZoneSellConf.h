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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CDBZONESELLCONF_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CDBZONESELLCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/ZoneConf.h>
#include <tencentcloud/cdb/v20170320/model/CdbSellType.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 可用区售卖配置
                */
                class CdbZoneSellConf : public AbstractModel
                {
                public:
                    CdbZoneSellConf();
                    ~CdbZoneSellConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可用区状态。可能的返回值为：1-上线；3-停售；4-不展示
                     * @return Status 可用区状态。可能的返回值为：1-上线；3-停售；4-不展示
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置可用区状态。可能的返回值为：1-上线；3-停售；4-不展示
                     * @param _status 可用区状态。可能的返回值为：1-上线；3-停售；4-不展示
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取可用区中文名称
                     * @return ZoneName 可用区中文名称
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置可用区中文名称
                     * @param _zoneName 可用区中文名称
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取实例类型是否为自定义类型
                     * @return IsCustom 实例类型是否为自定义类型
                     * 
                     */
                    bool GetIsCustom() const;

                    /**
                     * 设置实例类型是否为自定义类型
                     * @param _isCustom 实例类型是否为自定义类型
                     * 
                     */
                    void SetIsCustom(const bool& _isCustom);

                    /**
                     * 判断参数 IsCustom 是否已赋值
                     * @return IsCustom 是否已赋值
                     * 
                     */
                    bool IsCustomHasBeenSet() const;

                    /**
                     * 获取是否支持灾备
                     * @return IsSupportDr 是否支持灾备
                     * 
                     */
                    bool GetIsSupportDr() const;

                    /**
                     * 设置是否支持灾备
                     * @param _isSupportDr 是否支持灾备
                     * 
                     */
                    void SetIsSupportDr(const bool& _isSupportDr);

                    /**
                     * 判断参数 IsSupportDr 是否已赋值
                     * @return IsSupportDr 是否已赋值
                     * 
                     */
                    bool IsSupportDrHasBeenSet() const;

                    /**
                     * 获取是否支持私有网络
                     * @return IsSupportVpc 是否支持私有网络
                     * 
                     */
                    bool GetIsSupportVpc() const;

                    /**
                     * 设置是否支持私有网络
                     * @param _isSupportVpc 是否支持私有网络
                     * 
                     */
                    void SetIsSupportVpc(const bool& _isSupportVpc);

                    /**
                     * 判断参数 IsSupportVpc 是否已赋值
                     * @return IsSupportVpc 是否已赋值
                     * 
                     */
                    bool IsSupportVpcHasBeenSet() const;

                    /**
                     * 获取小时计费实例最大售卖数量
                     * @return HourInstanceSaleMaxNum 小时计费实例最大售卖数量
                     * 
                     */
                    int64_t GetHourInstanceSaleMaxNum() const;

                    /**
                     * 设置小时计费实例最大售卖数量
                     * @param _hourInstanceSaleMaxNum 小时计费实例最大售卖数量
                     * 
                     */
                    void SetHourInstanceSaleMaxNum(const int64_t& _hourInstanceSaleMaxNum);

                    /**
                     * 判断参数 HourInstanceSaleMaxNum 是否已赋值
                     * @return HourInstanceSaleMaxNum 是否已赋值
                     * 
                     */
                    bool HourInstanceSaleMaxNumHasBeenSet() const;

                    /**
                     * 获取是否为默认可用区
                     * @return IsDefaultZone 是否为默认可用区
                     * 
                     */
                    bool GetIsDefaultZone() const;

                    /**
                     * 设置是否为默认可用区
                     * @param _isDefaultZone 是否为默认可用区
                     * 
                     */
                    void SetIsDefaultZone(const bool& _isDefaultZone);

                    /**
                     * 判断参数 IsDefaultZone 是否已赋值
                     * @return IsDefaultZone 是否已赋值
                     * 
                     */
                    bool IsDefaultZoneHasBeenSet() const;

                    /**
                     * 获取是否为黑石区
                     * @return IsBm 是否为黑石区
                     * 
                     */
                    bool GetIsBm() const;

                    /**
                     * 设置是否为黑石区
                     * @param _isBm 是否为黑石区
                     * 
                     */
                    void SetIsBm(const bool& _isBm);

                    /**
                     * 判断参数 IsBm 是否已赋值
                     * @return IsBm 是否已赋值
                     * 
                     */
                    bool IsBmHasBeenSet() const;

                    /**
                     * 获取支持的付费类型。可能的返回值为：0-包年包月；1-小时计费；2-后付费
                     * @return PayType 支持的付费类型。可能的返回值为：0-包年包月；1-小时计费；2-后付费
                     * 
                     */
                    std::vector<std::string> GetPayType() const;

                    /**
                     * 设置支持的付费类型。可能的返回值为：0-包年包月；1-小时计费；2-后付费
                     * @param _payType 支持的付费类型。可能的返回值为：0-包年包月；1-小时计费；2-后付费
                     * 
                     */
                    void SetPayType(const std::vector<std::string>& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     * 
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取数据复制类型。0-异步复制；1-半同步复制；2-强同步复制
                     * @return ProtectMode 数据复制类型。0-异步复制；1-半同步复制；2-强同步复制
                     * 
                     */
                    std::vector<std::string> GetProtectMode() const;

                    /**
                     * 设置数据复制类型。0-异步复制；1-半同步复制；2-强同步复制
                     * @param _protectMode 数据复制类型。0-异步复制；1-半同步复制；2-强同步复制
                     * 
                     */
                    void SetProtectMode(const std::vector<std::string>& _protectMode);

                    /**
                     * 判断参数 ProtectMode 是否已赋值
                     * @return ProtectMode 是否已赋值
                     * 
                     */
                    bool ProtectModeHasBeenSet() const;

                    /**
                     * 获取可用区名称
                     * @return Zone 可用区名称
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区名称
                     * @param _zone 可用区名称
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
                     * 获取多可用区信息
                     * @return ZoneConf 多可用区信息
                     * 
                     */
                    ZoneConf GetZoneConf() const;

                    /**
                     * 设置多可用区信息
                     * @param _zoneConf 多可用区信息
                     * 
                     */
                    void SetZoneConf(const ZoneConf& _zoneConf);

                    /**
                     * 判断参数 ZoneConf 是否已赋值
                     * @return ZoneConf 是否已赋值
                     * 
                     */
                    bool ZoneConfHasBeenSet() const;

                    /**
                     * 获取可支持的灾备可用区信息
                     * @return DrZone 可支持的灾备可用区信息
                     * 
                     */
                    std::vector<std::string> GetDrZone() const;

                    /**
                     * 设置可支持的灾备可用区信息
                     * @param _drZone 可支持的灾备可用区信息
                     * 
                     */
                    void SetDrZone(const std::vector<std::string>& _drZone);

                    /**
                     * 判断参数 DrZone 是否已赋值
                     * @return DrZone 是否已赋值
                     * 
                     */
                    bool DrZoneHasBeenSet() const;

                    /**
                     * 获取是否支持跨可用区只读
                     * @return IsSupportRemoteRo 是否支持跨可用区只读
                     * 
                     */
                    bool GetIsSupportRemoteRo() const;

                    /**
                     * 设置是否支持跨可用区只读
                     * @param _isSupportRemoteRo 是否支持跨可用区只读
                     * 
                     */
                    void SetIsSupportRemoteRo(const bool& _isSupportRemoteRo);

                    /**
                     * 判断参数 IsSupportRemoteRo 是否已赋值
                     * @return IsSupportRemoteRo 是否已赋值
                     * 
                     */
                    bool IsSupportRemoteRoHasBeenSet() const;

                    /**
                     * 获取可支持的跨可用区只读区信息
                     * @return RemoteRoZone 可支持的跨可用区只读区信息
                     * 
                     */
                    std::vector<std::string> GetRemoteRoZone() const;

                    /**
                     * 设置可支持的跨可用区只读区信息
                     * @param _remoteRoZone 可支持的跨可用区只读区信息
                     * 
                     */
                    void SetRemoteRoZone(const std::vector<std::string>& _remoteRoZone);

                    /**
                     * 判断参数 RemoteRoZone 是否已赋值
                     * @return RemoteRoZone 是否已赋值
                     * 
                     */
                    bool RemoteRoZoneHasBeenSet() const;

                    /**
                     * 获取独享型可用区状态。可能的返回值为：1-上线；3-停售；4-不展示
                     * @return ExClusterStatus 独享型可用区状态。可能的返回值为：1-上线；3-停售；4-不展示
                     * 
                     */
                    int64_t GetExClusterStatus() const;

                    /**
                     * 设置独享型可用区状态。可能的返回值为：1-上线；3-停售；4-不展示
                     * @param _exClusterStatus 独享型可用区状态。可能的返回值为：1-上线；3-停售；4-不展示
                     * 
                     */
                    void SetExClusterStatus(const int64_t& _exClusterStatus);

                    /**
                     * 判断参数 ExClusterStatus 是否已赋值
                     * @return ExClusterStatus 是否已赋值
                     * 
                     */
                    bool ExClusterStatusHasBeenSet() const;

                    /**
                     * 获取独享型可支持的跨可用区只读区信息
                     * @return ExClusterRemoteRoZone 独享型可支持的跨可用区只读区信息
                     * 
                     */
                    std::vector<std::string> GetExClusterRemoteRoZone() const;

                    /**
                     * 设置独享型可支持的跨可用区只读区信息
                     * @param _exClusterRemoteRoZone 独享型可支持的跨可用区只读区信息
                     * 
                     */
                    void SetExClusterRemoteRoZone(const std::vector<std::string>& _exClusterRemoteRoZone);

                    /**
                     * 判断参数 ExClusterRemoteRoZone 是否已赋值
                     * @return ExClusterRemoteRoZone 是否已赋值
                     * 
                     */
                    bool ExClusterRemoteRoZoneHasBeenSet() const;

                    /**
                     * 获取独享型多可用区信息
                     * @return ExClusterZoneConf 独享型多可用区信息
                     * 
                     */
                    ZoneConf GetExClusterZoneConf() const;

                    /**
                     * 设置独享型多可用区信息
                     * @param _exClusterZoneConf 独享型多可用区信息
                     * 
                     */
                    void SetExClusterZoneConf(const ZoneConf& _exClusterZoneConf);

                    /**
                     * 判断参数 ExClusterZoneConf 是否已赋值
                     * @return ExClusterZoneConf 是否已赋值
                     * 
                     */
                    bool ExClusterZoneConfHasBeenSet() const;

                    /**
                     * 获取售卖实例类型数组，其中configIds的值与configs结构体中的id一一对应。
                     * @return SellType 售卖实例类型数组，其中configIds的值与configs结构体中的id一一对应。
                     * 
                     */
                    std::vector<CdbSellType> GetSellType() const;

                    /**
                     * 设置售卖实例类型数组，其中configIds的值与configs结构体中的id一一对应。
                     * @param _sellType 售卖实例类型数组，其中configIds的值与configs结构体中的id一一对应。
                     * 
                     */
                    void SetSellType(const std::vector<CdbSellType>& _sellType);

                    /**
                     * 判断参数 SellType 是否已赋值
                     * @return SellType 是否已赋值
                     * 
                     */
                    bool SellTypeHasBeenSet() const;

                    /**
                     * 获取可用区id
                     * @return ZoneId 可用区id
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置可用区id
                     * @param _zoneId 可用区id
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取是否支持ipv6
                     * @return IsSupportIpv6 是否支持ipv6
                     * 
                     */
                    bool GetIsSupportIpv6() const;

                    /**
                     * 设置是否支持ipv6
                     * @param _isSupportIpv6 是否支持ipv6
                     * 
                     */
                    void SetIsSupportIpv6(const bool& _isSupportIpv6);

                    /**
                     * 判断参数 IsSupportIpv6 是否已赋值
                     * @return IsSupportIpv6 是否已赋值
                     * 
                     */
                    bool IsSupportIpv6HasBeenSet() const;

                    /**
                     * 获取可支持的售卖数据库引擎类型
                     * @return EngineType 可支持的售卖数据库引擎类型
                     * 
                     */
                    std::vector<std::string> GetEngineType() const;

                    /**
                     * 设置可支持的售卖数据库引擎类型
                     * @param _engineType 可支持的售卖数据库引擎类型
                     * 
                     */
                    void SetEngineType(const std::vector<std::string>& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                private:

                    /**
                     * 可用区状态。可能的返回值为：1-上线；3-停售；4-不展示
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 可用区中文名称
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 实例类型是否为自定义类型
                     */
                    bool m_isCustom;
                    bool m_isCustomHasBeenSet;

                    /**
                     * 是否支持灾备
                     */
                    bool m_isSupportDr;
                    bool m_isSupportDrHasBeenSet;

                    /**
                     * 是否支持私有网络
                     */
                    bool m_isSupportVpc;
                    bool m_isSupportVpcHasBeenSet;

                    /**
                     * 小时计费实例最大售卖数量
                     */
                    int64_t m_hourInstanceSaleMaxNum;
                    bool m_hourInstanceSaleMaxNumHasBeenSet;

                    /**
                     * 是否为默认可用区
                     */
                    bool m_isDefaultZone;
                    bool m_isDefaultZoneHasBeenSet;

                    /**
                     * 是否为黑石区
                     */
                    bool m_isBm;
                    bool m_isBmHasBeenSet;

                    /**
                     * 支持的付费类型。可能的返回值为：0-包年包月；1-小时计费；2-后付费
                     */
                    std::vector<std::string> m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * 数据复制类型。0-异步复制；1-半同步复制；2-强同步复制
                     */
                    std::vector<std::string> m_protectMode;
                    bool m_protectModeHasBeenSet;

                    /**
                     * 可用区名称
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 多可用区信息
                     */
                    ZoneConf m_zoneConf;
                    bool m_zoneConfHasBeenSet;

                    /**
                     * 可支持的灾备可用区信息
                     */
                    std::vector<std::string> m_drZone;
                    bool m_drZoneHasBeenSet;

                    /**
                     * 是否支持跨可用区只读
                     */
                    bool m_isSupportRemoteRo;
                    bool m_isSupportRemoteRoHasBeenSet;

                    /**
                     * 可支持的跨可用区只读区信息
                     */
                    std::vector<std::string> m_remoteRoZone;
                    bool m_remoteRoZoneHasBeenSet;

                    /**
                     * 独享型可用区状态。可能的返回值为：1-上线；3-停售；4-不展示
                     */
                    int64_t m_exClusterStatus;
                    bool m_exClusterStatusHasBeenSet;

                    /**
                     * 独享型可支持的跨可用区只读区信息
                     */
                    std::vector<std::string> m_exClusterRemoteRoZone;
                    bool m_exClusterRemoteRoZoneHasBeenSet;

                    /**
                     * 独享型多可用区信息
                     */
                    ZoneConf m_exClusterZoneConf;
                    bool m_exClusterZoneConfHasBeenSet;

                    /**
                     * 售卖实例类型数组，其中configIds的值与configs结构体中的id一一对应。
                     */
                    std::vector<CdbSellType> m_sellType;
                    bool m_sellTypeHasBeenSet;

                    /**
                     * 可用区id
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 是否支持ipv6
                     */
                    bool m_isSupportIpv6;
                    bool m_isSupportIpv6HasBeenSet;

                    /**
                     * 可支持的售卖数据库引擎类型
                     */
                    std::vector<std::string> m_engineType;
                    bool m_engineTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CDBZONESELLCONF_H_
