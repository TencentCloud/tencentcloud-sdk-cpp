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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VATELECTRONICITEMINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VATELECTRONICITEMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 电子发票详细条目信息
                */
                class VatElectronicItemInfo : public AbstractModel
                {
                public:
                    VatElectronicItemInfo();
                    ~VatElectronicItemInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目名称
                     * @return Name 项目名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置项目名称
                     * @param _name 项目名称
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
                     * 获取数量
                     * @return Quantity 数量
                     * 
                     */
                    std::string GetQuantity() const;

                    /**
                     * 设置数量
                     * @param _quantity 数量
                     * 
                     */
                    void SetQuantity(const std::string& _quantity);

                    /**
                     * 判断参数 Quantity 是否已赋值
                     * @return Quantity 是否已赋值
                     * 
                     */
                    bool QuantityHasBeenSet() const;

                    /**
                     * 获取规格型号
                     * @return Specification 规格型号
                     * 
                     */
                    std::string GetSpecification() const;

                    /**
                     * 设置规格型号
                     * @param _specification 规格型号
                     * 
                     */
                    void SetSpecification(const std::string& _specification);

                    /**
                     * 判断参数 Specification 是否已赋值
                     * @return Specification 是否已赋值
                     * 
                     */
                    bool SpecificationHasBeenSet() const;

                    /**
                     * 获取单价
                     * @return Price 单价
                     * 
                     */
                    std::string GetPrice() const;

                    /**
                     * 设置单价
                     * @param _price 单价
                     * 
                     */
                    void SetPrice(const std::string& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取金额
                     * @return Total 金额
                     * 
                     */
                    std::string GetTotal() const;

                    /**
                     * 设置金额
                     * @param _total 金额
                     * 
                     */
                    void SetTotal(const std::string& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取税率
                     * @return TaxRate 税率
                     * 
                     */
                    std::string GetTaxRate() const;

                    /**
                     * 设置税率
                     * @param _taxRate 税率
                     * 
                     */
                    void SetTaxRate(const std::string& _taxRate);

                    /**
                     * 判断参数 TaxRate 是否已赋值
                     * @return TaxRate 是否已赋值
                     * 
                     */
                    bool TaxRateHasBeenSet() const;

                    /**
                     * 获取税额
                     * @return Tax 税额
                     * 
                     */
                    std::string GetTax() const;

                    /**
                     * 设置税额
                     * @param _tax 税额
                     * 
                     */
                    void SetTax(const std::string& _tax);

                    /**
                     * 判断参数 Tax 是否已赋值
                     * @return Tax 是否已赋值
                     * 
                     */
                    bool TaxHasBeenSet() const;

                    /**
                     * 获取单位
                     * @return Unit 单位
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置单位
                     * @param _unit 单位
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
                     * 获取运输工具类型
                     * @return VehicleType 运输工具类型
                     * 
                     */
                    std::string GetVehicleType() const;

                    /**
                     * 设置运输工具类型
                     * @param _vehicleType 运输工具类型
                     * 
                     */
                    void SetVehicleType(const std::string& _vehicleType);

                    /**
                     * 判断参数 VehicleType 是否已赋值
                     * @return VehicleType 是否已赋值
                     * 
                     */
                    bool VehicleTypeHasBeenSet() const;

                    /**
                     * 获取运输工具牌号
                     * @return VehicleBrand 运输工具牌号
                     * 
                     */
                    std::string GetVehicleBrand() const;

                    /**
                     * 设置运输工具牌号
                     * @param _vehicleBrand 运输工具牌号
                     * 
                     */
                    void SetVehicleBrand(const std::string& _vehicleBrand);

                    /**
                     * 判断参数 VehicleBrand 是否已赋值
                     * @return VehicleBrand 是否已赋值
                     * 
                     */
                    bool VehicleBrandHasBeenSet() const;

                    /**
                     * 获取起始地
                     * @return DeparturePlace 起始地
                     * 
                     */
                    std::string GetDeparturePlace() const;

                    /**
                     * 设置起始地
                     * @param _departurePlace 起始地
                     * 
                     */
                    void SetDeparturePlace(const std::string& _departurePlace);

                    /**
                     * 判断参数 DeparturePlace 是否已赋值
                     * @return DeparturePlace 是否已赋值
                     * 
                     */
                    bool DeparturePlaceHasBeenSet() const;

                    /**
                     * 获取到达地
                     * @return ArrivalPlace 到达地
                     * 
                     */
                    std::string GetArrivalPlace() const;

                    /**
                     * 设置到达地
                     * @param _arrivalPlace 到达地
                     * 
                     */
                    void SetArrivalPlace(const std::string& _arrivalPlace);

                    /**
                     * 判断参数 ArrivalPlace 是否已赋值
                     * @return ArrivalPlace 是否已赋值
                     * 
                     */
                    bool ArrivalPlaceHasBeenSet() const;

                    /**
                     * 获取运输货物名称，仅货物运输服务发票返回
                     * @return TransportItemsName 运输货物名称，仅货物运输服务发票返回
                     * 
                     */
                    std::string GetTransportItemsName() const;

                    /**
                     * 设置运输货物名称，仅货物运输服务发票返回
                     * @param _transportItemsName 运输货物名称，仅货物运输服务发票返回
                     * 
                     */
                    void SetTransportItemsName(const std::string& _transportItemsName);

                    /**
                     * 判断参数 TransportItemsName 是否已赋值
                     * @return TransportItemsName 是否已赋值
                     * 
                     */
                    bool TransportItemsNameHasBeenSet() const;

                    /**
                     * 获取建筑服务发生地，仅建筑发票返回
                     * @return PlaceOfBuildingService 建筑服务发生地，仅建筑发票返回
                     * 
                     */
                    std::string GetPlaceOfBuildingService() const;

                    /**
                     * 设置建筑服务发生地，仅建筑发票返回
                     * @param _placeOfBuildingService 建筑服务发生地，仅建筑发票返回
                     * 
                     */
                    void SetPlaceOfBuildingService(const std::string& _placeOfBuildingService);

                    /**
                     * 判断参数 PlaceOfBuildingService 是否已赋值
                     * @return PlaceOfBuildingService 是否已赋值
                     * 
                     */
                    bool PlaceOfBuildingServiceHasBeenSet() const;

                    /**
                     * 获取建筑项目名称，仅建筑发票返回
                     * @return BuildingName 建筑项目名称，仅建筑发票返回
                     * 
                     */
                    std::string GetBuildingName() const;

                    /**
                     * 设置建筑项目名称，仅建筑发票返回
                     * @param _buildingName 建筑项目名称，仅建筑发票返回
                     * 
                     */
                    void SetBuildingName(const std::string& _buildingName);

                    /**
                     * 判断参数 BuildingName 是否已赋值
                     * @return BuildingName 是否已赋值
                     * 
                     */
                    bool BuildingNameHasBeenSet() const;

                    /**
                     * 获取产权证书/不动产权证号，仅不动产经营租赁服务发票返回
                     * @return EstateNumber 产权证书/不动产权证号，仅不动产经营租赁服务发票返回
                     * 
                     */
                    std::string GetEstateNumber() const;

                    /**
                     * 设置产权证书/不动产权证号，仅不动产经营租赁服务发票返回
                     * @param _estateNumber 产权证书/不动产权证号，仅不动产经营租赁服务发票返回
                     * 
                     */
                    void SetEstateNumber(const std::string& _estateNumber);

                    /**
                     * 判断参数 EstateNumber 是否已赋值
                     * @return EstateNumber 是否已赋值
                     * 
                     */
                    bool EstateNumberHasBeenSet() const;

                    /**
                     * 获取面积单位，仅不动产经营租赁服务发票返回
                     * @return AreaUnit 面积单位，仅不动产经营租赁服务发票返回
                     * 
                     */
                    std::string GetAreaUnit() const;

                    /**
                     * 设置面积单位，仅不动产经营租赁服务发票返回
                     * @param _areaUnit 面积单位，仅不动产经营租赁服务发票返回
                     * 
                     */
                    void SetAreaUnit(const std::string& _areaUnit);

                    /**
                     * 判断参数 AreaUnit 是否已赋值
                     * @return AreaUnit 是否已赋值
                     * 
                     */
                    bool AreaUnitHasBeenSet() const;

                    /**
                     * 获取出行人，仅旅客运输服务发票返回
                     * @return Traveler 出行人，仅旅客运输服务发票返回
                     * 
                     */
                    std::string GetTraveler() const;

                    /**
                     * 设置出行人，仅旅客运输服务发票返回
                     * @param _traveler 出行人，仅旅客运输服务发票返回
                     * 
                     */
                    void SetTraveler(const std::string& _traveler);

                    /**
                     * 判断参数 Traveler 是否已赋值
                     * @return Traveler 是否已赋值
                     * 
                     */
                    bool TravelerHasBeenSet() const;

                    /**
                     * 获取有效身份证件号，仅旅客运输服务发票返回
                     * @return TravelerID 有效身份证件号，仅旅客运输服务发票返回
                     * 
                     */
                    std::string GetTravelerID() const;

                    /**
                     * 设置有效身份证件号，仅旅客运输服务发票返回
                     * @param _travelerID 有效身份证件号，仅旅客运输服务发票返回
                     * 
                     */
                    void SetTravelerID(const std::string& _travelerID);

                    /**
                     * 判断参数 TravelerID 是否已赋值
                     * @return TravelerID 是否已赋值
                     * 
                     */
                    bool TravelerIDHasBeenSet() const;

                    /**
                     * 获取出行日期，仅旅客运输服务发票返回
                     * @return TravelDate 出行日期，仅旅客运输服务发票返回
                     * 
                     */
                    std::string GetTravelDate() const;

                    /**
                     * 设置出行日期，仅旅客运输服务发票返回
                     * @param _travelDate 出行日期，仅旅客运输服务发票返回
                     * 
                     */
                    void SetTravelDate(const std::string& _travelDate);

                    /**
                     * 判断参数 TravelDate 是否已赋值
                     * @return TravelDate 是否已赋值
                     * 
                     */
                    bool TravelDateHasBeenSet() const;

                    /**
                     * 获取等级，仅旅客运输服务发票返回
                     * @return TravelLevel 等级，仅旅客运输服务发票返回
                     * 
                     */
                    std::string GetTravelLevel() const;

                    /**
                     * 设置等级，仅旅客运输服务发票返回
                     * @param _travelLevel 等级，仅旅客运输服务发票返回
                     * 
                     */
                    void SetTravelLevel(const std::string& _travelLevel);

                    /**
                     * 判断参数 TravelLevel 是否已赋值
                     * @return TravelLevel 是否已赋值
                     * 
                     */
                    bool TravelLevelHasBeenSet() const;

                private:

                    /**
                     * 项目名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 数量
                     */
                    std::string m_quantity;
                    bool m_quantityHasBeenSet;

                    /**
                     * 规格型号
                     */
                    std::string m_specification;
                    bool m_specificationHasBeenSet;

                    /**
                     * 单价
                     */
                    std::string m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * 金额
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 税率
                     */
                    std::string m_taxRate;
                    bool m_taxRateHasBeenSet;

                    /**
                     * 税额
                     */
                    std::string m_tax;
                    bool m_taxHasBeenSet;

                    /**
                     * 单位
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * 运输工具类型
                     */
                    std::string m_vehicleType;
                    bool m_vehicleTypeHasBeenSet;

                    /**
                     * 运输工具牌号
                     */
                    std::string m_vehicleBrand;
                    bool m_vehicleBrandHasBeenSet;

                    /**
                     * 起始地
                     */
                    std::string m_departurePlace;
                    bool m_departurePlaceHasBeenSet;

                    /**
                     * 到达地
                     */
                    std::string m_arrivalPlace;
                    bool m_arrivalPlaceHasBeenSet;

                    /**
                     * 运输货物名称，仅货物运输服务发票返回
                     */
                    std::string m_transportItemsName;
                    bool m_transportItemsNameHasBeenSet;

                    /**
                     * 建筑服务发生地，仅建筑发票返回
                     */
                    std::string m_placeOfBuildingService;
                    bool m_placeOfBuildingServiceHasBeenSet;

                    /**
                     * 建筑项目名称，仅建筑发票返回
                     */
                    std::string m_buildingName;
                    bool m_buildingNameHasBeenSet;

                    /**
                     * 产权证书/不动产权证号，仅不动产经营租赁服务发票返回
                     */
                    std::string m_estateNumber;
                    bool m_estateNumberHasBeenSet;

                    /**
                     * 面积单位，仅不动产经营租赁服务发票返回
                     */
                    std::string m_areaUnit;
                    bool m_areaUnitHasBeenSet;

                    /**
                     * 出行人，仅旅客运输服务发票返回
                     */
                    std::string m_traveler;
                    bool m_travelerHasBeenSet;

                    /**
                     * 有效身份证件号，仅旅客运输服务发票返回
                     */
                    std::string m_travelerID;
                    bool m_travelerIDHasBeenSet;

                    /**
                     * 出行日期，仅旅客运输服务发票返回
                     */
                    std::string m_travelDate;
                    bool m_travelDateHasBeenSet;

                    /**
                     * 等级，仅旅客运输服务发票返回
                     */
                    std::string m_travelLevel;
                    bool m_travelLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VATELECTRONICITEMINFO_H_
