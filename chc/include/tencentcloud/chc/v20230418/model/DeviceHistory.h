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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_DEVICEHISTORY_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_DEVICEHISTORY_H_

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
                * 工单的设备信息
                */
                class DeviceHistory : public AbstractModel
                {
                public:
                    DeviceHistory();
                    ~DeviceHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备sn
                     * @return Sn 设备sn
                     * 
                     */
                    std::string GetSn() const;

                    /**
                     * 设置设备sn
                     * @param _sn 设备sn
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
                     * 获取设备类型
                     * @return DeviceType 设备类型
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置设备类型
                     * @param _deviceType 设备类型
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
                     * 获取机架名
                     * @return RackName 机架名
                     * 
                     */
                    std::string GetRackName() const;

                    /**
                     * 设置机架名
                     * @param _rackName 机架名
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
                     * 获取机位号
                     * @return PositionCode 机位号
                     * 
                     */
                    uint64_t GetPositionCode() const;

                    /**
                     * 设置机位号
                     * @param _positionCode 机位号
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
                     * 获取机房id
                     * @return IdcId 机房id
                     * 
                     */
                    uint64_t GetIdcId() const;

                    /**
                     * 设置机房id
                     * @param _idcId 机房id
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
                     * 获取机房名称
                     * @return IdcName 机房名称
                     * 
                     */
                    std::string GetIdcName() const;

                    /**
                     * 设置机房名称
                     * @param _idcName 机房名称
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
                     * 获取机房管理单元id
                     * @return IdcUnitId 机房管理单元id
                     * 
                     */
                    uint64_t GetIdcUnitId() const;

                    /**
                     * 设置机房管理单元id
                     * @param _idcUnitId 机房管理单元id
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
                     * 获取机房管理单元名称
                     * @return IdcUnitName 机房管理单元名称
                     * 
                     */
                    std::string GetIdcUnitName() const;

                    /**
                     * 设置机房管理单元名称
                     * @param _idcUnitName 机房管理单元名称
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
                     * 获取固资号
                     * @return AssetId 固资号
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置固资号
                     * @param _assetId 固资号
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
                     * 获取设备型号-版本，只有收货单详情返回
                     * @return ModelVersion 设备型号-版本，只有收货单详情返回
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置设备型号-版本，只有收货单详情返回
                     * @param _modelVersion 设备型号-版本，只有收货单详情返回
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
                     * 获取设备高度，只有收货单详情返回
                     * @return DeviceHeight 设备高度，只有收货单详情返回
                     * 
                     */
                    std::string GetDeviceHeight() const;

                    /**
                     * 设置设备高度，只有收货单详情返回
                     * @param _deviceHeight 设备高度，只有收货单详情返回
                     * 
                     */
                    void SetDeviceHeight(const std::string& _deviceHeight);

                    /**
                     * 判断参数 DeviceHeight 是否已赋值
                     * @return DeviceHeight 是否已赋值
                     * 
                     */
                    bool DeviceHeightHasBeenSet() const;

                    /**
                     * 获取需要万兆机位，只有收货单详情返回
                     * @return Need10GbSlot 需要万兆机位，只有收货单详情返回
                     * 
                     */
                    std::string GetNeed10GbSlot() const;

                    /**
                     * 设置需要万兆机位，只有收货单详情返回
                     * @param _need10GbSlot 需要万兆机位，只有收货单详情返回
                     * 
                     */
                    void SetNeed10GbSlot(const std::string& _need10GbSlot);

                    /**
                     * 判断参数 Need10GbSlot 是否已赋值
                     * @return Need10GbSlot 是否已赋值
                     * 
                     */
                    bool Need10GbSlotHasBeenSet() const;

                    /**
                     * 获取需要直流电，只有收货单详情返回
                     * @return NeedDCPower 需要直流电，只有收货单详情返回
                     * 
                     */
                    std::string GetNeedDCPower() const;

                    /**
                     * 设置需要直流电，只有收货单详情返回
                     * @param _needDCPower 需要直流电，只有收货单详情返回
                     * 
                     */
                    void SetNeedDCPower(const std::string& _needDCPower);

                    /**
                     * 判断参数 NeedDCPower 是否已赋值
                     * @return NeedDCPower 是否已赋值
                     * 
                     */
                    bool NeedDCPowerHasBeenSet() const;

                    /**
                     * 获取需要外网，只有收货单详情返回
                     * @return NeedExtranet 需要外网，只有收货单详情返回
                     * 
                     */
                    std::string GetNeedExtranet() const;

                    /**
                     * 设置需要外网，只有收货单详情返回
                     * @param _needExtranet 需要外网，只有收货单详情返回
                     * 
                     */
                    void SetNeedExtranet(const std::string& _needExtranet);

                    /**
                     * 判断参数 NeedExtranet 是否已赋值
                     * @return NeedExtranet 是否已赋值
                     * 
                     */
                    bool NeedExtranetHasBeenSet() const;

                    /**
                     * 获取需要虚拟化，只有收货单详情返回
                     * @return NeedVirtualization 需要虚拟化，只有收货单详情返回
                     * 
                     */
                    std::string GetNeedVirtualization() const;

                    /**
                     * 设置需要虚拟化，只有收货单详情返回
                     * @param _needVirtualization 需要虚拟化，只有收货单详情返回
                     * 
                     */
                    void SetNeedVirtualization(const std::string& _needVirtualization);

                    /**
                     * 判断参数 NeedVirtualization 是否已赋值
                     * @return NeedVirtualization 是否已赋值
                     * 
                     */
                    bool NeedVirtualizationHasBeenSet() const;

                    /**
                     * 获取厂商,只有收货单详情返回
                     * @return Manufacturer 厂商,只有收货单详情返回
                     * 
                     */
                    std::string GetManufacturer() const;

                    /**
                     * 设置厂商,只有收货单详情返回
                     * @param _manufacturer 厂商,只有收货单详情返回
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

                    /**
                     * 获取目标机架
                     * @return DstRackName 目标机架
                     * 
                     */
                    std::string GetDstRackName() const;

                    /**
                     * 设置目标机架
                     * @param _dstRackName 目标机架
                     * 
                     */
                    void SetDstRackName(const std::string& _dstRackName);

                    /**
                     * 判断参数 DstRackName 是否已赋值
                     * @return DstRackName 是否已赋值
                     * 
                     */
                    bool DstRackNameHasBeenSet() const;

                    /**
                     * 获取目标机位
                     * @return DstPositionCode 目标机位
                     * 
                     */
                    std::string GetDstPositionCode() const;

                    /**
                     * 设置目标机位
                     * @param _dstPositionCode 目标机位
                     * 
                     */
                    void SetDstPositionCode(const std::string& _dstPositionCode);

                    /**
                     * 判断参数 DstPositionCode 是否已赋值
                     * @return DstPositionCode 是否已赋值
                     * 
                     */
                    bool DstPositionCodeHasBeenSet() const;

                    /**
                     * 获取目标ip
                     * @return DstIp 目标ip
                     * 
                     */
                    std::string GetDstIp() const;

                    /**
                     * 设置目标ip
                     * @param _dstIp 目标ip
                     * 
                     */
                    void SetDstIp(const std::string& _dstIp);

                    /**
                     * 判断参数 DstIp 是否已赋值
                     * @return DstIp 是否已赋值
                     * 
                     */
                    bool DstIpHasBeenSet() const;

                    /**
                     * 获取设备子类型, 其他设备/线材用
                     * @return TypeName 设备子类型, 其他设备/线材用
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置设备子类型, 其他设备/线材用
                     * @param _typeName 设备子类型, 其他设备/线材用
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
                     * 获取线材-数量，只有收货单详情返回
                     * @return Quantity 线材-数量，只有收货单详情返回
                     * 
                     */
                    uint64_t GetQuantity() const;

                    /**
                     * 设置线材-数量，只有收货单详情返回
                     * @param _quantity 线材-数量，只有收货单详情返回
                     * 
                     */
                    void SetQuantity(const uint64_t& _quantity);

                    /**
                     * 判断参数 Quantity 是否已赋值
                     * @return Quantity 是否已赋值
                     * 
                     */
                    bool QuantityHasBeenSet() const;

                    /**
                     * 获取计量单位，，只有收货单详情返回，'箱', '卷', '套'
                     * @return Unit 计量单位，，只有收货单详情返回，'箱', '卷', '套'
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置计量单位，，只有收货单详情返回，'箱', '卷', '套'
                     * @param _unit 计量单位，，只有收货单详情返回，'箱', '卷', '套'
                     * 
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取线材-收货凭证号，只有收货单详情返回
                     * @return ReceiptNumber 线材-收货凭证号，只有收货单详情返回
                     * 
                     */
                    std::string GetReceiptNumber() const;

                    /**
                     * 设置线材-收货凭证号，只有收货单详情返回
                     * @param _receiptNumber 线材-收货凭证号，只有收货单详情返回
                     * 
                     */
                    void SetReceiptNumber(const std::string& _receiptNumber);

                    /**
                     * 判断参数 ReceiptNumber 是否已赋值
                     * @return ReceiptNumber 是否已赋值
                     * 
                     */
                    bool ReceiptNumberHasBeenSet() const;

                private:

                    /**
                     * 设备sn
                     */
                    std::string m_sn;
                    bool m_snHasBeenSet;

                    /**
                     * 设备类型
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 机架名
                     */
                    std::string m_rackName;
                    bool m_rackNameHasBeenSet;

                    /**
                     * 机位号
                     */
                    uint64_t m_positionCode;
                    bool m_positionCodeHasBeenSet;

                    /**
                     * 机房id
                     */
                    uint64_t m_idcId;
                    bool m_idcIdHasBeenSet;

                    /**
                     * 机房名称
                     */
                    std::string m_idcName;
                    bool m_idcNameHasBeenSet;

                    /**
                     * 机房管理单元id
                     */
                    uint64_t m_idcUnitId;
                    bool m_idcUnitIdHasBeenSet;

                    /**
                     * 机房管理单元名称
                     */
                    std::string m_idcUnitName;
                    bool m_idcUnitNameHasBeenSet;

                    /**
                     * 固资号
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 设备型号-版本，只有收货单详情返回
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * 设备高度，只有收货单详情返回
                     */
                    std::string m_deviceHeight;
                    bool m_deviceHeightHasBeenSet;

                    /**
                     * 需要万兆机位，只有收货单详情返回
                     */
                    std::string m_need10GbSlot;
                    bool m_need10GbSlotHasBeenSet;

                    /**
                     * 需要直流电，只有收货单详情返回
                     */
                    std::string m_needDCPower;
                    bool m_needDCPowerHasBeenSet;

                    /**
                     * 需要外网，只有收货单详情返回
                     */
                    std::string m_needExtranet;
                    bool m_needExtranetHasBeenSet;

                    /**
                     * 需要虚拟化，只有收货单详情返回
                     */
                    std::string m_needVirtualization;
                    bool m_needVirtualizationHasBeenSet;

                    /**
                     * 厂商,只有收货单详情返回
                     */
                    std::string m_manufacturer;
                    bool m_manufacturerHasBeenSet;

                    /**
                     * 硬件备注
                     */
                    std::string m_hardwareMemo;
                    bool m_hardwareMemoHasBeenSet;

                    /**
                     * 目标机架
                     */
                    std::string m_dstRackName;
                    bool m_dstRackNameHasBeenSet;

                    /**
                     * 目标机位
                     */
                    std::string m_dstPositionCode;
                    bool m_dstPositionCodeHasBeenSet;

                    /**
                     * 目标ip
                     */
                    std::string m_dstIp;
                    bool m_dstIpHasBeenSet;

                    /**
                     * 设备子类型, 其他设备/线材用
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * 线材-数量，只有收货单详情返回
                     */
                    uint64_t m_quantity;
                    bool m_quantityHasBeenSet;

                    /**
                     * 计量单位，，只有收货单详情返回，'箱', '卷', '套'
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * 线材-收货凭证号，只有收货单详情返回
                     */
                    std::string m_receiptNumber;
                    bool m_receiptNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_DEVICEHISTORY_H_
