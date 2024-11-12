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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_CREATESITEREQUEST_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_CREATESITEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * CreateSite请求参数结构体
                */
                class CreateSiteRequest : public AbstractModel
                {
                public:
                    CreateSiteRequest();
                    ~CreateSiteRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点名称
                     * @return Name 站点名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置站点名称
                     * @param _name 站点名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取站点所在国家
                     * @return Country 站点所在国家
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置站点所在国家
                     * @param _country 站点所在国家
                     * 
                     */
                    void SetCountry(const std::string& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取站点所在省份
                     * @return Province 站点所在省份
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置站点所在省份
                     * @param _province 站点所在省份
                     * 
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取站点所在城市
                     * @return City 站点所在城市
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置站点所在城市
                     * @param _city 站点所在城市
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取站点所在地区的详细地址信息
                     * @return AddressLine 站点所在地区的详细地址信息
                     * 
                     */
                    std::string GetAddressLine() const;

                    /**
                     * 设置站点所在地区的详细地址信息
                     * @param _addressLine 站点所在地区的详细地址信息
                     * 
                     */
                    void SetAddressLine(const std::string& _addressLine);

                    /**
                     * 判断参数 AddressLine 是否已赋值
                     * @return AddressLine 是否已赋值
                     * 
                     */
                    bool AddressLineHasBeenSet() const;

                    /**
                     * 获取站点描述
                     * @return Description 站点描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置站点描述
                     * @param _description 站点描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取注意事项
                     * @return Note 注意事项
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置注意事项
                     * @param _note 注意事项
                     * 
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                    /**
                     * 获取您将使用光纤类型将CDC设备连接到网络。有单模和多模两种选项。取值范围："MM","SM"
                     * @return FiberType 您将使用光纤类型将CDC设备连接到网络。有单模和多模两种选项。取值范围："MM","SM"
                     * 
                     */
                    std::string GetFiberType() const;

                    /**
                     * 设置您将使用光纤类型将CDC设备连接到网络。有单模和多模两种选项。取值范围："MM","SM"
                     * @param _fiberType 您将使用光纤类型将CDC设备连接到网络。有单模和多模两种选项。取值范围："MM","SM"
                     * 
                     */
                    void SetFiberType(const std::string& _fiberType);

                    /**
                     * 判断参数 FiberType 是否已赋值
                     * @return FiberType 是否已赋值
                     * 
                     */
                    bool FiberTypeHasBeenSet() const;

                    /**
                     * 获取您将CDC连接到网络时采用的光学标准。此字段取决于上行链路速度、光纤类型和到上游设备的距离。
                     * @return OpticalStandard 您将CDC连接到网络时采用的光学标准。此字段取决于上行链路速度、光纤类型和到上游设备的距离。
                     * 
                     */
                    std::string GetOpticalStandard() const;

                    /**
                     * 设置您将CDC连接到网络时采用的光学标准。此字段取决于上行链路速度、光纤类型和到上游设备的距离。
                     * @param _opticalStandard 您将CDC连接到网络时采用的光学标准。此字段取决于上行链路速度、光纤类型和到上游设备的距离。
                     * 
                     */
                    void SetOpticalStandard(const std::string& _opticalStandard);

                    /**
                     * 判断参数 OpticalStandard 是否已赋值
                     * @return OpticalStandard 是否已赋值
                     * 
                     */
                    bool OpticalStandardHasBeenSet() const;

                    /**
                     * 获取电源连接器类型
                     * @return PowerConnectors 电源连接器类型
                     * 
                     */
                    std::string GetPowerConnectors() const;

                    /**
                     * 设置电源连接器类型
                     * @param _powerConnectors 电源连接器类型
                     * 
                     */
                    void SetPowerConnectors(const std::string& _powerConnectors);

                    /**
                     * 判断参数 PowerConnectors 是否已赋值
                     * @return PowerConnectors 是否已赋值
                     * 
                     */
                    bool PowerConnectorsHasBeenSet() const;

                    /**
                     * 获取从机架上方还是下方供电。取值范围：["UP","DOWN"]
                     * @return PowerFeedDrop 从机架上方还是下方供电。取值范围：["UP","DOWN"]
                     * 
                     */
                    std::string GetPowerFeedDrop() const;

                    /**
                     * 设置从机架上方还是下方供电。取值范围：["UP","DOWN"]
                     * @param _powerFeedDrop 从机架上方还是下方供电。取值范围：["UP","DOWN"]
                     * 
                     */
                    void SetPowerFeedDrop(const std::string& _powerFeedDrop);

                    /**
                     * 判断参数 PowerFeedDrop 是否已赋值
                     * @return PowerFeedDrop 是否已赋值
                     * 
                     */
                    bool PowerFeedDropHasBeenSet() const;

                    /**
                     * 获取最大承重(KG)
                     * @return MaxWeight 最大承重(KG)
                     * 
                     */
                    int64_t GetMaxWeight() const;

                    /**
                     * 设置最大承重(KG)
                     * @param _maxWeight 最大承重(KG)
                     * 
                     */
                    void SetMaxWeight(const int64_t& _maxWeight);

                    /**
                     * 判断参数 MaxWeight 是否已赋值
                     * @return MaxWeight 是否已赋值
                     * 
                     */
                    bool MaxWeightHasBeenSet() const;

                    /**
                     * 获取功耗(KW)
                     * @return PowerDrawKva 功耗(KW)
                     * 
                     */
                    int64_t GetPowerDrawKva() const;

                    /**
                     * 设置功耗(KW)
                     * @param _powerDrawKva 功耗(KW)
                     * 
                     */
                    void SetPowerDrawKva(const int64_t& _powerDrawKva);

                    /**
                     * 判断参数 PowerDrawKva 是否已赋值
                     * @return PowerDrawKva 是否已赋值
                     * 
                     */
                    bool PowerDrawKvaHasBeenSet() const;

                    /**
                     * 获取网络到腾讯云Region区域的上行链路速度(Gbps)
                     * @return UplinkSpeedGbps 网络到腾讯云Region区域的上行链路速度(Gbps)
                     * 
                     */
                    int64_t GetUplinkSpeedGbps() const;

                    /**
                     * 设置网络到腾讯云Region区域的上行链路速度(Gbps)
                     * @param _uplinkSpeedGbps 网络到腾讯云Region区域的上行链路速度(Gbps)
                     * 
                     */
                    void SetUplinkSpeedGbps(const int64_t& _uplinkSpeedGbps);

                    /**
                     * 判断参数 UplinkSpeedGbps 是否已赋值
                     * @return UplinkSpeedGbps 是否已赋值
                     * 
                     */
                    bool UplinkSpeedGbpsHasBeenSet() const;

                    /**
                     * 获取将CDC连接到网络时，每台CDC网络设备(每个机架 2 台设备)使用的上行链路数量。
                     * @return UplinkCount 将CDC连接到网络时，每台CDC网络设备(每个机架 2 台设备)使用的上行链路数量。
                     * 
                     */
                    int64_t GetUplinkCount() const;

                    /**
                     * 设置将CDC连接到网络时，每台CDC网络设备(每个机架 2 台设备)使用的上行链路数量。
                     * @param _uplinkCount 将CDC连接到网络时，每台CDC网络设备(每个机架 2 台设备)使用的上行链路数量。
                     * 
                     */
                    void SetUplinkCount(const int64_t& _uplinkCount);

                    /**
                     * 判断参数 UplinkCount 是否已赋值
                     * @return UplinkCount 是否已赋值
                     * 
                     */
                    bool UplinkCountHasBeenSet() const;

                    /**
                     * 获取是否满足下面环境条件：
1、场地没有材料要求或验收标准会影响 CDC 设备配送和安装。
2、确定的机架位置包含:
温度范围为 41 到 104°F (5 到 40°C)。
湿度范围为 10°F (-12°C)和 8% RH (相对湿度)到 70°F(21°C)和 80% RH。
机架位置的气流方向为从前向后，且应具有足够的 CFM (每分钟立方英尺)。CFM 必须是 CDC 配置的 kVA 功耗值的 145.8 倍。
                     * @return ConditionRequirement 是否满足下面环境条件：
1、场地没有材料要求或验收标准会影响 CDC 设备配送和安装。
2、确定的机架位置包含:
温度范围为 41 到 104°F (5 到 40°C)。
湿度范围为 10°F (-12°C)和 8% RH (相对湿度)到 70°F(21°C)和 80% RH。
机架位置的气流方向为从前向后，且应具有足够的 CFM (每分钟立方英尺)。CFM 必须是 CDC 配置的 kVA 功耗值的 145.8 倍。
                     * 
                     */
                    bool GetConditionRequirement() const;

                    /**
                     * 设置是否满足下面环境条件：
1、场地没有材料要求或验收标准会影响 CDC 设备配送和安装。
2、确定的机架位置包含:
温度范围为 41 到 104°F (5 到 40°C)。
湿度范围为 10°F (-12°C)和 8% RH (相对湿度)到 70°F(21°C)和 80% RH。
机架位置的气流方向为从前向后，且应具有足够的 CFM (每分钟立方英尺)。CFM 必须是 CDC 配置的 kVA 功耗值的 145.8 倍。
                     * @param _conditionRequirement 是否满足下面环境条件：
1、场地没有材料要求或验收标准会影响 CDC 设备配送和安装。
2、确定的机架位置包含:
温度范围为 41 到 104°F (5 到 40°C)。
湿度范围为 10°F (-12°C)和 8% RH (相对湿度)到 70°F(21°C)和 80% RH。
机架位置的气流方向为从前向后，且应具有足够的 CFM (每分钟立方英尺)。CFM 必须是 CDC 配置的 kVA 功耗值的 145.8 倍。
                     * 
                     */
                    void SetConditionRequirement(const bool& _conditionRequirement);

                    /**
                     * 判断参数 ConditionRequirement 是否已赋值
                     * @return ConditionRequirement 是否已赋值
                     * 
                     */
                    bool ConditionRequirementHasBeenSet() const;

                    /**
                     * 获取是否满足下面的尺寸条件：
您的装货站台可以容纳一个机架箱(高 x 宽 x 深 = 94" x 54" x 48")。
您可以提供从机架(高 x 宽 x 深 = 80" x 24" x 48")交货地点到机架最终安置位置的明确通道。测量深度时，应包括站台、走廊通道、门、转弯、坡道、货梯，并将其他通道限制考虑在内。
在最终的 CDC安置位置，前部间隙可以为 48" 或更大，后部间隙可以为 24" 或更大。
                     * @return DimensionRequirement 是否满足下面的尺寸条件：
您的装货站台可以容纳一个机架箱(高 x 宽 x 深 = 94" x 54" x 48")。
您可以提供从机架(高 x 宽 x 深 = 80" x 24" x 48")交货地点到机架最终安置位置的明确通道。测量深度时，应包括站台、走廊通道、门、转弯、坡道、货梯，并将其他通道限制考虑在内。
在最终的 CDC安置位置，前部间隙可以为 48" 或更大，后部间隙可以为 24" 或更大。
                     * 
                     */
                    bool GetDimensionRequirement() const;

                    /**
                     * 设置是否满足下面的尺寸条件：
您的装货站台可以容纳一个机架箱(高 x 宽 x 深 = 94" x 54" x 48")。
您可以提供从机架(高 x 宽 x 深 = 80" x 24" x 48")交货地点到机架最终安置位置的明确通道。测量深度时，应包括站台、走廊通道、门、转弯、坡道、货梯，并将其他通道限制考虑在内。
在最终的 CDC安置位置，前部间隙可以为 48" 或更大，后部间隙可以为 24" 或更大。
                     * @param _dimensionRequirement 是否满足下面的尺寸条件：
您的装货站台可以容纳一个机架箱(高 x 宽 x 深 = 94" x 54" x 48")。
您可以提供从机架(高 x 宽 x 深 = 80" x 24" x 48")交货地点到机架最终安置位置的明确通道。测量深度时，应包括站台、走廊通道、门、转弯、坡道、货梯，并将其他通道限制考虑在内。
在最终的 CDC安置位置，前部间隙可以为 48" 或更大，后部间隙可以为 24" 或更大。
                     * 
                     */
                    void SetDimensionRequirement(const bool& _dimensionRequirement);

                    /**
                     * 判断参数 DimensionRequirement 是否已赋值
                     * @return DimensionRequirement 是否已赋值
                     * 
                     */
                    bool DimensionRequirementHasBeenSet() const;

                    /**
                     * 获取是否提供冗余的上游设备(交换机或路由器)，以便两台  网络设备都能连接到网络设备。
                     * @return RedundantNetworking 是否提供冗余的上游设备(交换机或路由器)，以便两台  网络设备都能连接到网络设备。
                     * 
                     */
                    bool GetRedundantNetworking() const;

                    /**
                     * 设置是否提供冗余的上游设备(交换机或路由器)，以便两台  网络设备都能连接到网络设备。
                     * @param _redundantNetworking 是否提供冗余的上游设备(交换机或路由器)，以便两台  网络设备都能连接到网络设备。
                     * 
                     */
                    void SetRedundantNetworking(const bool& _redundantNetworking);

                    /**
                     * 判断参数 RedundantNetworking 是否已赋值
                     * @return RedundantNetworking 是否已赋值
                     * 
                     */
                    bool RedundantNetworkingHasBeenSet() const;

                    /**
                     * 获取站点所在地区的邮编
                     * @return PostalCode 站点所在地区的邮编
                     * 
                     */
                    int64_t GetPostalCode() const;

                    /**
                     * 设置站点所在地区的邮编
                     * @param _postalCode 站点所在地区的邮编
                     * 
                     */
                    void SetPostalCode(const int64_t& _postalCode);

                    /**
                     * 判断参数 PostalCode 是否已赋值
                     * @return PostalCode 是否已赋值
                     * 
                     */
                    bool PostalCodeHasBeenSet() const;

                    /**
                     * 获取站点所在地区的详细地址信息（补充）
                     * @return OptionalAddressLine 站点所在地区的详细地址信息（补充）
                     * 
                     */
                    std::string GetOptionalAddressLine() const;

                    /**
                     * 设置站点所在地区的详细地址信息（补充）
                     * @param _optionalAddressLine 站点所在地区的详细地址信息（补充）
                     * 
                     */
                    void SetOptionalAddressLine(const std::string& _optionalAddressLine);

                    /**
                     * 判断参数 OptionalAddressLine 是否已赋值
                     * @return OptionalAddressLine 是否已赋值
                     * 
                     */
                    bool OptionalAddressLineHasBeenSet() const;

                    /**
                     * 获取是否需要腾讯云团队协助完成机架支撑工作
                     * @return NeedHelp 是否需要腾讯云团队协助完成机架支撑工作
                     * 
                     */
                    bool GetNeedHelp() const;

                    /**
                     * 设置是否需要腾讯云团队协助完成机架支撑工作
                     * @param _needHelp 是否需要腾讯云团队协助完成机架支撑工作
                     * 
                     */
                    void SetNeedHelp(const bool& _needHelp);

                    /**
                     * 判断参数 NeedHelp 是否已赋值
                     * @return NeedHelp 是否已赋值
                     * 
                     */
                    bool NeedHelpHasBeenSet() const;

                    /**
                     * 获取是否电源冗余
                     * @return RedundantPower 是否电源冗余
                     * 
                     */
                    bool GetRedundantPower() const;

                    /**
                     * 设置是否电源冗余
                     * @param _redundantPower 是否电源冗余
                     * 
                     */
                    void SetRedundantPower(const bool& _redundantPower);

                    /**
                     * 判断参数 RedundantPower 是否已赋值
                     * @return RedundantPower 是否已赋值
                     * 
                     */
                    bool RedundantPowerHasBeenSet() const;

                    /**
                     * 获取上游断路器是否具备
                     * @return BreakerRequirement 上游断路器是否具备
                     * 
                     */
                    bool GetBreakerRequirement() const;

                    /**
                     * 设置上游断路器是否具备
                     * @param _breakerRequirement 上游断路器是否具备
                     * 
                     */
                    void SetBreakerRequirement(const bool& _breakerRequirement);

                    /**
                     * 判断参数 BreakerRequirement 是否已赋值
                     * @return BreakerRequirement 是否已赋值
                     * 
                     */
                    bool BreakerRequirementHasBeenSet() const;

                private:

                    /**
                     * 站点名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 站点所在国家
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * 站点所在省份
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 站点所在城市
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 站点所在地区的详细地址信息
                     */
                    std::string m_addressLine;
                    bool m_addressLineHasBeenSet;

                    /**
                     * 站点描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 注意事项
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * 您将使用光纤类型将CDC设备连接到网络。有单模和多模两种选项。取值范围："MM","SM"
                     */
                    std::string m_fiberType;
                    bool m_fiberTypeHasBeenSet;

                    /**
                     * 您将CDC连接到网络时采用的光学标准。此字段取决于上行链路速度、光纤类型和到上游设备的距离。
                     */
                    std::string m_opticalStandard;
                    bool m_opticalStandardHasBeenSet;

                    /**
                     * 电源连接器类型
                     */
                    std::string m_powerConnectors;
                    bool m_powerConnectorsHasBeenSet;

                    /**
                     * 从机架上方还是下方供电。取值范围：["UP","DOWN"]
                     */
                    std::string m_powerFeedDrop;
                    bool m_powerFeedDropHasBeenSet;

                    /**
                     * 最大承重(KG)
                     */
                    int64_t m_maxWeight;
                    bool m_maxWeightHasBeenSet;

                    /**
                     * 功耗(KW)
                     */
                    int64_t m_powerDrawKva;
                    bool m_powerDrawKvaHasBeenSet;

                    /**
                     * 网络到腾讯云Region区域的上行链路速度(Gbps)
                     */
                    int64_t m_uplinkSpeedGbps;
                    bool m_uplinkSpeedGbpsHasBeenSet;

                    /**
                     * 将CDC连接到网络时，每台CDC网络设备(每个机架 2 台设备)使用的上行链路数量。
                     */
                    int64_t m_uplinkCount;
                    bool m_uplinkCountHasBeenSet;

                    /**
                     * 是否满足下面环境条件：
1、场地没有材料要求或验收标准会影响 CDC 设备配送和安装。
2、确定的机架位置包含:
温度范围为 41 到 104°F (5 到 40°C)。
湿度范围为 10°F (-12°C)和 8% RH (相对湿度)到 70°F(21°C)和 80% RH。
机架位置的气流方向为从前向后，且应具有足够的 CFM (每分钟立方英尺)。CFM 必须是 CDC 配置的 kVA 功耗值的 145.8 倍。
                     */
                    bool m_conditionRequirement;
                    bool m_conditionRequirementHasBeenSet;

                    /**
                     * 是否满足下面的尺寸条件：
您的装货站台可以容纳一个机架箱(高 x 宽 x 深 = 94" x 54" x 48")。
您可以提供从机架(高 x 宽 x 深 = 80" x 24" x 48")交货地点到机架最终安置位置的明确通道。测量深度时，应包括站台、走廊通道、门、转弯、坡道、货梯，并将其他通道限制考虑在内。
在最终的 CDC安置位置，前部间隙可以为 48" 或更大，后部间隙可以为 24" 或更大。
                     */
                    bool m_dimensionRequirement;
                    bool m_dimensionRequirementHasBeenSet;

                    /**
                     * 是否提供冗余的上游设备(交换机或路由器)，以便两台  网络设备都能连接到网络设备。
                     */
                    bool m_redundantNetworking;
                    bool m_redundantNetworkingHasBeenSet;

                    /**
                     * 站点所在地区的邮编
                     */
                    int64_t m_postalCode;
                    bool m_postalCodeHasBeenSet;

                    /**
                     * 站点所在地区的详细地址信息（补充）
                     */
                    std::string m_optionalAddressLine;
                    bool m_optionalAddressLineHasBeenSet;

                    /**
                     * 是否需要腾讯云团队协助完成机架支撑工作
                     */
                    bool m_needHelp;
                    bool m_needHelpHasBeenSet;

                    /**
                     * 是否电源冗余
                     */
                    bool m_redundantPower;
                    bool m_redundantPowerHasBeenSet;

                    /**
                     * 上游断路器是否具备
                     */
                    bool m_breakerRequirement;
                    bool m_breakerRequirementHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_CREATESITEREQUEST_H_
