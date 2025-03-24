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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_DEVICE_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_DEVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 服务器信息
                */
                class Device : public AbstractModel
                {
                public:
                    Device();
                    ~Device() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备 SN 码
                     * @return Sn 设备 SN 码
                     * 
                     */
                    std::string GetSn() const;

                    /**
                     * 设置设备 SN 码
                     * @param _sn 设备 SN 码
                     * 
                     */
                    void SetSn(const std::string& _sn);

                    /**
                     * 判断参数 Sn 是否已赋值
                     * @return Sn 是否已赋值
                     * 
                     */
                    bool SnHasBeenSet() const;

                    /**
                     * 获取设备型号版本
                     * @return ModelVersion 设备型号版本
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置设备型号版本
                     * @param _modelVersion 设备型号版本
                     * 
                     */
                    void SetModelVersion(const std::string& _modelVersion);

                    /**
                     * 判断参数 ModelVersion 是否已赋值
                     * @return ModelVersion 是否已赋值
                     * 
                     */
                    bool ModelVersionHasBeenSet() const;

                    /**
                     * 获取设备固资号。只有设备类型为服务器时才返回
                     * @return AssetId 设备固资号。只有设备类型为服务器时才返回
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置设备固资号。只有设备类型为服务器时才返回
                     * @param _assetId 设备固资号。只有设备类型为服务器时才返回
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取0 自有，1 租用。只有设备类型为服务器时才返回
                     * @return SvrIsSpecial 0 自有，1 租用。只有设备类型为服务器时才返回
                     * 
                     */
                    uint64_t GetSvrIsSpecial() const;

                    /**
                     * 设置0 自有，1 租用。只有设备类型为服务器时才返回
                     * @param _svrIsSpecial 0 自有，1 租用。只有设备类型为服务器时才返回
                     * 
                     */
                    void SetSvrIsSpecial(const uint64_t& _svrIsSpecial);

                    /**
                     * 判断参数 SvrIsSpecial 是否已赋值
                     * @return SvrIsSpecial 是否已赋值
                     * 
                     */
                    bool SvrIsSpecialHasBeenSet() const;

                    /**
                     * 获取IP。
                     * @return Ip IP。
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP。
                     * @param _ip IP。
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取设备所属的机房名称
                     * @return IdcName 设备所属的机房名称
                     * 
                     */
                    std::string GetIdcName() const;

                    /**
                     * 设置设备所属的机房名称
                     * @param _idcName 设备所属的机房名称
                     * 
                     */
                    void SetIdcName(const std::string& _idcName);

                    /**
                     * 判断参数 IdcName 是否已赋值
                     * @return IdcName 是否已赋值
                     * 
                     */
                    bool IdcNameHasBeenSet() const;

                    /**
                     * 获取设备所属的机房ID
                     * @return IdcId 设备所属的机房ID
                     * 
                     */
                    uint64_t GetIdcId() const;

                    /**
                     * 设置设备所属的机房ID
                     * @param _idcId 设备所属的机房ID
                     * 
                     */
                    void SetIdcId(const uint64_t& _idcId);

                    /**
                     * 判断参数 IdcId 是否已赋值
                     * @return IdcId 是否已赋值
                     * 
                     */
                    bool IdcIdHasBeenSet() const;

                    /**
                     * 获取设备所属的机房管理单元ID
                     * @return IdcUnitId 设备所属的机房管理单元ID
                     * 
                     */
                    uint64_t GetIdcUnitId() const;

                    /**
                     * 设置设备所属的机房管理单元ID
                     * @param _idcUnitId 设备所属的机房管理单元ID
                     * 
                     */
                    void SetIdcUnitId(const uint64_t& _idcUnitId);

                    /**
                     * 判断参数 IdcUnitId 是否已赋值
                     * @return IdcUnitId 是否已赋值
                     * 
                     */
                    bool IdcUnitIdHasBeenSet() const;

                    /**
                     * 获取设备所属的机房管理单元名称
                     * @return IdcUnitName 设备所属的机房管理单元名称
                     * 
                     */
                    std::string GetIdcUnitName() const;

                    /**
                     * 设置设备所属的机房管理单元名称
                     * @param _idcUnitName 设备所属的机房管理单元名称
                     * 
                     */
                    void SetIdcUnitName(const std::string& _idcUnitName);

                    /**
                     * 判断参数 IdcUnitName 是否已赋值
                     * @return IdcUnitName 是否已赋值
                     * 
                     */
                    bool IdcUnitNameHasBeenSet() const;

                    /**
                     * 获取已上架设备所在的机架ID，未上架设备不返回
                     * @return RackId 已上架设备所在的机架ID，未上架设备不返回
                     * 
                     */
                    uint64_t GetRackId() const;

                    /**
                     * 设置已上架设备所在的机架ID，未上架设备不返回
                     * @param _rackId 已上架设备所在的机架ID，未上架设备不返回
                     * 
                     */
                    void SetRackId(const uint64_t& _rackId);

                    /**
                     * 判断参数 RackId 是否已赋值
                     * @return RackId 是否已赋值
                     * 
                     */
                    bool RackIdHasBeenSet() const;

                    /**
                     * 获取服务器类型， 1 代表服务器， 7 代表 2U4S。只有设备类型为服务器时才返回
                     * @return ServerTypeId 服务器类型， 1 代表服务器， 7 代表 2U4S。只有设备类型为服务器时才返回
                     * 
                     */
                    uint64_t GetServerTypeId() const;

                    /**
                     * 设置服务器类型， 1 代表服务器， 7 代表 2U4S。只有设备类型为服务器时才返回
                     * @param _serverTypeId 服务器类型， 1 代表服务器， 7 代表 2U4S。只有设备类型为服务器时才返回
                     * 
                     */
                    void SetServerTypeId(const uint64_t& _serverTypeId);

                    /**
                     * 判断参数 ServerTypeId 是否已赋值
                     * @return ServerTypeId 是否已赋值
                     * 
                     */
                    bool ServerTypeIdHasBeenSet() const;

                    /**
                     * 获取已上架设备所在的机架名称，未上架设备不返回
                     * @return RackName 已上架设备所在的机架名称，未上架设备不返回
                     * 
                     */
                    std::string GetRackName() const;

                    /**
                     * 设置已上架设备所在的机架名称，未上架设备不返回
                     * @param _rackName 已上架设备所在的机架名称，未上架设备不返回
                     * 
                     */
                    void SetRackName(const std::string& _rackName);

                    /**
                     * 判断参数 RackName 是否已赋值
                     * @return RackName 是否已赋值
                     * 
                     */
                    bool RackNameHasBeenSet() const;

                    /**
                     * 获取已上架设备所在的机位编号，未上架设备不返回。只有设备类型为服务器时才返回
                     * @return PositionCode 已上架设备所在的机位编号，未上架设备不返回。只有设备类型为服务器时才返回
                     * 
                     */
                    uint64_t GetPositionCode() const;

                    /**
                     * 设置已上架设备所在的机位编号，未上架设备不返回。只有设备类型为服务器时才返回
                     * @param _positionCode 已上架设备所在的机位编号，未上架设备不返回。只有设备类型为服务器时才返回
                     * 
                     */
                    void SetPositionCode(const uint64_t& _positionCode);

                    /**
                     * 判断参数 PositionCode 是否已赋值
                     * @return PositionCode 是否已赋值
                     * 
                     */
                    bool PositionCodeHasBeenSet() const;

                    /**
                     * 获取设备状态：POWER_ON 已开电 POWER_OFF 未开电 RACK_OFF 未上架 MOVING 搬迁中
                     * @return Status 设备状态：POWER_ON 已开电 POWER_OFF 未开电 RACK_OFF 未上架 MOVING 搬迁中
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置设备状态：POWER_ON 已开电 POWER_OFF 未开电 RACK_OFF 未上架 MOVING 搬迁中
                     * @param _status 设备状态：POWER_ON 已开电 POWER_OFF 未开电 RACK_OFF 未上架 MOVING 搬迁中
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取设备最近一次的开电时间，YYYY-MM-DD 格式。
                     * @return PowerOnTime 设备最近一次的开电时间，YYYY-MM-DD 格式。
                     * 
                     */
                    std::string GetPowerOnTime() const;

                    /**
                     * 设置设备最近一次的开电时间，YYYY-MM-DD 格式。
                     * @param _powerOnTime 设备最近一次的开电时间，YYYY-MM-DD 格式。
                     * 
                     */
                    void SetPowerOnTime(const std::string& _powerOnTime);

                    /**
                     * 判断参数 PowerOnTime 是否已赋值
                     * @return PowerOnTime 是否已赋值
                     * 
                     */
                    bool PowerOnTimeHasBeenSet() const;

                    /**
                     * 获取设备最近一次的上架时间，YYYY-MM-DD 格式。
                     * @return OnshelfDate 设备最近一次的上架时间，YYYY-MM-DD 格式。
                     * 
                     */
                    std::string GetOnshelfDate() const;

                    /**
                     * 设置设备最近一次的上架时间，YYYY-MM-DD 格式。
                     * @param _onshelfDate 设备最近一次的上架时间，YYYY-MM-DD 格式。
                     * 
                     */
                    void SetOnshelfDate(const std::string& _onshelfDate);

                    /**
                     * 判断参数 OnshelfDate 是否已赋值
                     * @return OnshelfDate 是否已赋值
                     * 
                     */
                    bool OnshelfDateHasBeenSet() const;

                    /**
                     * 获取设备类型 server 服务器，netDevice 网络设备
                     * @return DeviceType 设备类型 server 服务器，netDevice 网络设备
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置设备类型 server 服务器，netDevice 网络设备
                     * @param _deviceType 设备类型 server 服务器，netDevice 网络设备
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取厂商
                     * @return Manufacturer 厂商
                     * 
                     */
                    std::string GetManufacturer() const;

                    /**
                     * 设置厂商
                     * @param _manufacturer 厂商
                     * 
                     */
                    void SetManufacturer(const std::string& _manufacturer);

                    /**
                     * 判断参数 Manufacturer 是否已赋值
                     * @return Manufacturer 是否已赋值
                     * 
                     */
                    bool ManufacturerHasBeenSet() const;

                    /**
                     * 获取其他设备-设备子类型
                     * @return TypeName 其他设备-设备子类型
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置其他设备-设备子类型
                     * @param _typeName 其他设备-设备子类型
                     * 
                     */
                    void SetTypeName(const std::string& _typeName);

                    /**
                     * 判断参数 TypeName 是否已赋值
                     * @return TypeName 是否已赋值
                     * 
                     */
                    bool TypeNameHasBeenSet() const;

                    /**
                     * 获取硬件备注
                     * @return HardwareMemo 硬件备注
                     * 
                     */
                    std::string GetHardwareMemo() const;

                    /**
                     * 设置硬件备注
                     * @param _hardwareMemo 硬件备注
                     * 
                     */
                    void SetHardwareMemo(const std::string& _hardwareMemo);

                    /**
                     * 判断参数 HardwareMemo 是否已赋值
                     * @return HardwareMemo 是否已赋值
                     * 
                     */
                    bool HardwareMemoHasBeenSet() const;

                private:

                    /**
                     * 设备 SN 码
                     */
                    std::string m_sn;
                    bool m_snHasBeenSet;

                    /**
                     * 设备型号版本
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * 设备固资号。只有设备类型为服务器时才返回
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 0 自有，1 租用。只有设备类型为服务器时才返回
                     */
                    uint64_t m_svrIsSpecial;
                    bool m_svrIsSpecialHasBeenSet;

                    /**
                     * IP。
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 设备所属的机房名称
                     */
                    std::string m_idcName;
                    bool m_idcNameHasBeenSet;

                    /**
                     * 设备所属的机房ID
                     */
                    uint64_t m_idcId;
                    bool m_idcIdHasBeenSet;

                    /**
                     * 设备所属的机房管理单元ID
                     */
                    uint64_t m_idcUnitId;
                    bool m_idcUnitIdHasBeenSet;

                    /**
                     * 设备所属的机房管理单元名称
                     */
                    std::string m_idcUnitName;
                    bool m_idcUnitNameHasBeenSet;

                    /**
                     * 已上架设备所在的机架ID，未上架设备不返回
                     */
                    uint64_t m_rackId;
                    bool m_rackIdHasBeenSet;

                    /**
                     * 服务器类型， 1 代表服务器， 7 代表 2U4S。只有设备类型为服务器时才返回
                     */
                    uint64_t m_serverTypeId;
                    bool m_serverTypeIdHasBeenSet;

                    /**
                     * 已上架设备所在的机架名称，未上架设备不返回
                     */
                    std::string m_rackName;
                    bool m_rackNameHasBeenSet;

                    /**
                     * 已上架设备所在的机位编号，未上架设备不返回。只有设备类型为服务器时才返回
                     */
                    uint64_t m_positionCode;
                    bool m_positionCodeHasBeenSet;

                    /**
                     * 设备状态：POWER_ON 已开电 POWER_OFF 未开电 RACK_OFF 未上架 MOVING 搬迁中
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 设备最近一次的开电时间，YYYY-MM-DD 格式。
                     */
                    std::string m_powerOnTime;
                    bool m_powerOnTimeHasBeenSet;

                    /**
                     * 设备最近一次的上架时间，YYYY-MM-DD 格式。
                     */
                    std::string m_onshelfDate;
                    bool m_onshelfDateHasBeenSet;

                    /**
                     * 设备类型 server 服务器，netDevice 网络设备
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 厂商
                     */
                    std::string m_manufacturer;
                    bool m_manufacturerHasBeenSet;

                    /**
                     * 其他设备-设备子类型
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * 硬件备注
                     */
                    std::string m_hardwareMemo;
                    bool m_hardwareMemoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_DEVICE_H_
