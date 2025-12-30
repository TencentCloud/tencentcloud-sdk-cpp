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
                     * 获取<p>站点名称</p>
                     * @return Name <p>站点名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>站点名称</p>
                     * @param _name <p>站点名称</p>
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
                     * 获取<p>站点所在国家</p>
                     * @return Country <p>站点所在国家</p>
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置<p>站点所在国家</p>
                     * @param _country <p>站点所在国家</p>
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
                     * 获取<p>站点所在省份</p>
                     * @return Province <p>站点所在省份</p>
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置<p>站点所在省份</p>
                     * @param _province <p>站点所在省份</p>
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
                     * 获取<p>站点所在城市</p>
                     * @return City <p>站点所在城市</p>
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置<p>站点所在城市</p>
                     * @param _city <p>站点所在城市</p>
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
                     * 获取<p>站点所在地区的详细地址信息</p>
                     * @return AddressLine <p>站点所在地区的详细地址信息</p>
                     * 
                     */
                    std::string GetAddressLine() const;

                    /**
                     * 设置<p>站点所在地区的详细地址信息</p>
                     * @param _addressLine <p>站点所在地区的详细地址信息</p>
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
                     * 获取<p>站点描述</p>
                     * @return Description <p>站点描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>站点描述</p>
                     * @param _description <p>站点描述</p>
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
                     * 获取<p>注意事项</p>
                     * @return Note <p>注意事项</p>
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置<p>注意事项</p>
                     * @param _note <p>注意事项</p>
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
                     * 获取<p>您将使用光纤类型将CDC设备连接到网络。有单模和多模两种选项。取值范围："MM","SM"</p>
                     * @return FiberType <p>您将使用光纤类型将CDC设备连接到网络。有单模和多模两种选项。取值范围："MM","SM"</p>
                     * 
                     */
                    std::string GetFiberType() const;

                    /**
                     * 设置<p>您将使用光纤类型将CDC设备连接到网络。有单模和多模两种选项。取值范围："MM","SM"</p>
                     * @param _fiberType <p>您将使用光纤类型将CDC设备连接到网络。有单模和多模两种选项。取值范围："MM","SM"</p>
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
                     * 获取<p>您将CDC连接到网络时采用的光学标准。此字段取决于上行链路速度、光纤类型和到上游设备的距离。</p>
                     * @return OpticalStandard <p>您将CDC连接到网络时采用的光学标准。此字段取决于上行链路速度、光纤类型和到上游设备的距离。</p>
                     * 
                     */
                    std::string GetOpticalStandard() const;

                    /**
                     * 设置<p>您将CDC连接到网络时采用的光学标准。此字段取决于上行链路速度、光纤类型和到上游设备的距离。</p>
                     * @param _opticalStandard <p>您将CDC连接到网络时采用的光学标准。此字段取决于上行链路速度、光纤类型和到上游设备的距离。</p>
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
                     * 获取<p>电源连接器类型</p>
                     * @return PowerConnectors <p>电源连接器类型</p>
                     * 
                     */
                    std::string GetPowerConnectors() const;

                    /**
                     * 设置<p>电源连接器类型</p>
                     * @param _powerConnectors <p>电源连接器类型</p>
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
                     * 获取<p>从机架上方还是下方供电。取值范围：["UP","DOWN"]</p>
                     * @return PowerFeedDrop <p>从机架上方还是下方供电。取值范围：["UP","DOWN"]</p>
                     * 
                     */
                    std::string GetPowerFeedDrop() const;

                    /**
                     * 设置<p>从机架上方还是下方供电。取值范围：["UP","DOWN"]</p>
                     * @param _powerFeedDrop <p>从机架上方还是下方供电。取值范围：["UP","DOWN"]</p>
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
                     * 获取<p>最大承重(KG)</p>
                     * @return MaxWeight <p>最大承重(KG)</p>
                     * 
                     */
                    int64_t GetMaxWeight() const;

                    /**
                     * 设置<p>最大承重(KG)</p>
                     * @param _maxWeight <p>最大承重(KG)</p>
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
                     * 获取<p>功耗(KW)</p>
                     * @return PowerDrawKva <p>功耗(KW)</p>
                     * 
                     */
                    int64_t GetPowerDrawKva() const;

                    /**
                     * 设置<p>功耗(KW)</p>
                     * @param _powerDrawKva <p>功耗(KW)</p>
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
                     * 获取<p>网络到腾讯云Region区域的上行链路速度(Gbps)</p>
                     * @return UplinkSpeedGbps <p>网络到腾讯云Region区域的上行链路速度(Gbps)</p>
                     * 
                     */
                    int64_t GetUplinkSpeedGbps() const;

                    /**
                     * 设置<p>网络到腾讯云Region区域的上行链路速度(Gbps)</p>
                     * @param _uplinkSpeedGbps <p>网络到腾讯云Region区域的上行链路速度(Gbps)</p>
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
                     * 获取<p>将CDC连接到网络时，每台CDC网络设备(每个机架 2 台设备)使用的上行链路数量。</p>
                     * @return UplinkCount <p>将CDC连接到网络时，每台CDC网络设备(每个机架 2 台设备)使用的上行链路数量。</p>
                     * 
                     */
                    int64_t GetUplinkCount() const;

                    /**
                     * 设置<p>将CDC连接到网络时，每台CDC网络设备(每个机架 2 台设备)使用的上行链路数量。</p>
                     * @param _uplinkCount <p>将CDC连接到网络时，每台CDC网络设备(每个机架 2 台设备)使用的上行链路数量。</p>
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
                     * 获取<p>是否满足下面环境条件：1、场地没有材料要求或验收标准会影响 CDC 设备配送和安装。2、确定的机架位置包含:温度范围为 41 到 104°F (5 到 40°C)。湿度范围为 10°F (-12°C)和 8% RH (相对湿度)到 70°F(21°C)和 80% RH。机架位置的气流方向为从前向后，且应具有足够的 CFM (每分钟立方英尺)。CFM 必须是 CDC 配置的 kVA 功耗值的 145.8 倍。</p>
                     * @return ConditionRequirement <p>是否满足下面环境条件：1、场地没有材料要求或验收标准会影响 CDC 设备配送和安装。2、确定的机架位置包含:温度范围为 41 到 104°F (5 到 40°C)。湿度范围为 10°F (-12°C)和 8% RH (相对湿度)到 70°F(21°C)和 80% RH。机架位置的气流方向为从前向后，且应具有足够的 CFM (每分钟立方英尺)。CFM 必须是 CDC 配置的 kVA 功耗值的 145.8 倍。</p>
                     * 
                     */
                    bool GetConditionRequirement() const;

                    /**
                     * 设置<p>是否满足下面环境条件：1、场地没有材料要求或验收标准会影响 CDC 设备配送和安装。2、确定的机架位置包含:温度范围为 41 到 104°F (5 到 40°C)。湿度范围为 10°F (-12°C)和 8% RH (相对湿度)到 70°F(21°C)和 80% RH。机架位置的气流方向为从前向后，且应具有足够的 CFM (每分钟立方英尺)。CFM 必须是 CDC 配置的 kVA 功耗值的 145.8 倍。</p>
                     * @param _conditionRequirement <p>是否满足下面环境条件：1、场地没有材料要求或验收标准会影响 CDC 设备配送和安装。2、确定的机架位置包含:温度范围为 41 到 104°F (5 到 40°C)。湿度范围为 10°F (-12°C)和 8% RH (相对湿度)到 70°F(21°C)和 80% RH。机架位置的气流方向为从前向后，且应具有足够的 CFM (每分钟立方英尺)。CFM 必须是 CDC 配置的 kVA 功耗值的 145.8 倍。</p>
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
                     * 获取<p>是否满足下面的尺寸条件：您的装货站台可以容纳一个机架箱(高 x 宽 x 深 = 94" x 54" x 48")。您可以提供从机架(高 x 宽 x 深 = 80" x 24" x 48")交货地点到机架最终安置位置的明确通道。测量深度时，应包括站台、走廊通道、门、转弯、坡道、货梯，并将其他通道限制考虑在内。在最终的 CDC安置位置，前部间隙可以为 48" 或更大，后部间隙可以为 24" 或更大。</p>
                     * @return DimensionRequirement <p>是否满足下面的尺寸条件：您的装货站台可以容纳一个机架箱(高 x 宽 x 深 = 94" x 54" x 48")。您可以提供从机架(高 x 宽 x 深 = 80" x 24" x 48")交货地点到机架最终安置位置的明确通道。测量深度时，应包括站台、走廊通道、门、转弯、坡道、货梯，并将其他通道限制考虑在内。在最终的 CDC安置位置，前部间隙可以为 48" 或更大，后部间隙可以为 24" 或更大。</p>
                     * 
                     */
                    bool GetDimensionRequirement() const;

                    /**
                     * 设置<p>是否满足下面的尺寸条件：您的装货站台可以容纳一个机架箱(高 x 宽 x 深 = 94" x 54" x 48")。您可以提供从机架(高 x 宽 x 深 = 80" x 24" x 48")交货地点到机架最终安置位置的明确通道。测量深度时，应包括站台、走廊通道、门、转弯、坡道、货梯，并将其他通道限制考虑在内。在最终的 CDC安置位置，前部间隙可以为 48" 或更大，后部间隙可以为 24" 或更大。</p>
                     * @param _dimensionRequirement <p>是否满足下面的尺寸条件：您的装货站台可以容纳一个机架箱(高 x 宽 x 深 = 94" x 54" x 48")。您可以提供从机架(高 x 宽 x 深 = 80" x 24" x 48")交货地点到机架最终安置位置的明确通道。测量深度时，应包括站台、走廊通道、门、转弯、坡道、货梯，并将其他通道限制考虑在内。在最终的 CDC安置位置，前部间隙可以为 48" 或更大，后部间隙可以为 24" 或更大。</p>
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
                     * 获取<p>是否提供冗余的上游设备(交换机或路由器)，以便两台  网络设备都能连接到网络设备。</p>
                     * @return RedundantNetworking <p>是否提供冗余的上游设备(交换机或路由器)，以便两台  网络设备都能连接到网络设备。</p>
                     * 
                     */
                    bool GetRedundantNetworking() const;

                    /**
                     * 设置<p>是否提供冗余的上游设备(交换机或路由器)，以便两台  网络设备都能连接到网络设备。</p>
                     * @param _redundantNetworking <p>是否提供冗余的上游设备(交换机或路由器)，以便两台  网络设备都能连接到网络设备。</p>
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
                     * 获取<p>站点所在地区的邮编</p>
                     * @return PostalCode <p>站点所在地区的邮编</p>
                     * 
                     */
                    int64_t GetPostalCode() const;

                    /**
                     * 设置<p>站点所在地区的邮编</p>
                     * @param _postalCode <p>站点所在地区的邮编</p>
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
                     * 获取<p>站点所在地区的详细地址信息（补充）</p>
                     * @return OptionalAddressLine <p>站点所在地区的详细地址信息（补充）</p>
                     * 
                     */
                    std::string GetOptionalAddressLine() const;

                    /**
                     * 设置<p>站点所在地区的详细地址信息（补充）</p>
                     * @param _optionalAddressLine <p>站点所在地区的详细地址信息（补充）</p>
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
                     * 获取<p>是否需要腾讯云团队协助完成机架支撑工作</p>
                     * @return NeedHelp <p>是否需要腾讯云团队协助完成机架支撑工作</p>
                     * 
                     */
                    bool GetNeedHelp() const;

                    /**
                     * 设置<p>是否需要腾讯云团队协助完成机架支撑工作</p>
                     * @param _needHelp <p>是否需要腾讯云团队协助完成机架支撑工作</p>
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
                     * 获取<p>是否电源冗余</p>
                     * @return RedundantPower <p>是否电源冗余</p>
                     * 
                     */
                    bool GetRedundantPower() const;

                    /**
                     * 设置<p>是否电源冗余</p>
                     * @param _redundantPower <p>是否电源冗余</p>
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
                     * 获取<p>上游断路器是否具备</p>
                     * @return BreakerRequirement <p>上游断路器是否具备</p>
                     * 
                     */
                    bool GetBreakerRequirement() const;

                    /**
                     * 设置<p>上游断路器是否具备</p>
                     * @param _breakerRequirement <p>上游断路器是否具备</p>
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
                     * <p>站点名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>站点所在国家</p>
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * <p>站点所在省份</p>
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * <p>站点所在城市</p>
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * <p>站点所在地区的详细地址信息</p>
                     */
                    std::string m_addressLine;
                    bool m_addressLineHasBeenSet;

                    /**
                     * <p>站点描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>注意事项</p>
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * <p>您将使用光纤类型将CDC设备连接到网络。有单模和多模两种选项。取值范围："MM","SM"</p>
                     */
                    std::string m_fiberType;
                    bool m_fiberTypeHasBeenSet;

                    /**
                     * <p>您将CDC连接到网络时采用的光学标准。此字段取决于上行链路速度、光纤类型和到上游设备的距离。</p>
                     */
                    std::string m_opticalStandard;
                    bool m_opticalStandardHasBeenSet;

                    /**
                     * <p>电源连接器类型</p>
                     */
                    std::string m_powerConnectors;
                    bool m_powerConnectorsHasBeenSet;

                    /**
                     * <p>从机架上方还是下方供电。取值范围：["UP","DOWN"]</p>
                     */
                    std::string m_powerFeedDrop;
                    bool m_powerFeedDropHasBeenSet;

                    /**
                     * <p>最大承重(KG)</p>
                     */
                    int64_t m_maxWeight;
                    bool m_maxWeightHasBeenSet;

                    /**
                     * <p>功耗(KW)</p>
                     */
                    int64_t m_powerDrawKva;
                    bool m_powerDrawKvaHasBeenSet;

                    /**
                     * <p>网络到腾讯云Region区域的上行链路速度(Gbps)</p>
                     */
                    int64_t m_uplinkSpeedGbps;
                    bool m_uplinkSpeedGbpsHasBeenSet;

                    /**
                     * <p>将CDC连接到网络时，每台CDC网络设备(每个机架 2 台设备)使用的上行链路数量。</p>
                     */
                    int64_t m_uplinkCount;
                    bool m_uplinkCountHasBeenSet;

                    /**
                     * <p>是否满足下面环境条件：1、场地没有材料要求或验收标准会影响 CDC 设备配送和安装。2、确定的机架位置包含:温度范围为 41 到 104°F (5 到 40°C)。湿度范围为 10°F (-12°C)和 8% RH (相对湿度)到 70°F(21°C)和 80% RH。机架位置的气流方向为从前向后，且应具有足够的 CFM (每分钟立方英尺)。CFM 必须是 CDC 配置的 kVA 功耗值的 145.8 倍。</p>
                     */
                    bool m_conditionRequirement;
                    bool m_conditionRequirementHasBeenSet;

                    /**
                     * <p>是否满足下面的尺寸条件：您的装货站台可以容纳一个机架箱(高 x 宽 x 深 = 94" x 54" x 48")。您可以提供从机架(高 x 宽 x 深 = 80" x 24" x 48")交货地点到机架最终安置位置的明确通道。测量深度时，应包括站台、走廊通道、门、转弯、坡道、货梯，并将其他通道限制考虑在内。在最终的 CDC安置位置，前部间隙可以为 48" 或更大，后部间隙可以为 24" 或更大。</p>
                     */
                    bool m_dimensionRequirement;
                    bool m_dimensionRequirementHasBeenSet;

                    /**
                     * <p>是否提供冗余的上游设备(交换机或路由器)，以便两台  网络设备都能连接到网络设备。</p>
                     */
                    bool m_redundantNetworking;
                    bool m_redundantNetworkingHasBeenSet;

                    /**
                     * <p>站点所在地区的邮编</p>
                     */
                    int64_t m_postalCode;
                    bool m_postalCodeHasBeenSet;

                    /**
                     * <p>站点所在地区的详细地址信息（补充）</p>
                     */
                    std::string m_optionalAddressLine;
                    bool m_optionalAddressLineHasBeenSet;

                    /**
                     * <p>是否需要腾讯云团队协助完成机架支撑工作</p>
                     */
                    bool m_needHelp;
                    bool m_needHelpHasBeenSet;

                    /**
                     * <p>是否电源冗余</p>
                     */
                    bool m_redundantPower;
                    bool m_redundantPowerHasBeenSet;

                    /**
                     * <p>上游断路器是否具备</p>
                     */
                    bool m_breakerRequirement;
                    bool m_breakerRequirementHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_CREATESITEREQUEST_H_
