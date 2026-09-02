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
                     * 获取<p>项目名称</p>
                     * @return Name <p>项目名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>项目名称</p>
                     * @param _name <p>项目名称</p>
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
                     * 获取<p>数量</p>
                     * @return Quantity <p>数量</p>
                     * 
                     */
                    std::string GetQuantity() const;

                    /**
                     * 设置<p>数量</p>
                     * @param _quantity <p>数量</p>
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
                     * 获取<p>规格型号</p>
                     * @return Specification <p>规格型号</p>
                     * 
                     */
                    std::string GetSpecification() const;

                    /**
                     * 设置<p>规格型号</p>
                     * @param _specification <p>规格型号</p>
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
                     * 获取<p>单价</p>
                     * @return Price <p>单价</p>
                     * 
                     */
                    std::string GetPrice() const;

                    /**
                     * 设置<p>单价</p>
                     * @param _price <p>单价</p>
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
                     * 获取<p>金额</p>
                     * @return Total <p>金额</p>
                     * 
                     */
                    std::string GetTotal() const;

                    /**
                     * 设置<p>金额</p>
                     * @param _total <p>金额</p>
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
                     * 获取<p>税率</p>
                     * @return TaxRate <p>税率</p>
                     * 
                     */
                    std::string GetTaxRate() const;

                    /**
                     * 设置<p>税率</p>
                     * @param _taxRate <p>税率</p>
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
                     * 获取<p>税额</p>
                     * @return Tax <p>税额</p>
                     * 
                     */
                    std::string GetTax() const;

                    /**
                     * 设置<p>税额</p>
                     * @param _tax <p>税额</p>
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
                     * 获取<p>单位</p>
                     * @return Unit <p>单位</p>
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置<p>单位</p>
                     * @param _unit <p>单位</p>
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
                     * 获取<p>运输工具类型</p>
                     * @return VehicleType <p>运输工具类型</p>
                     * 
                     */
                    std::string GetVehicleType() const;

                    /**
                     * 设置<p>运输工具类型</p>
                     * @param _vehicleType <p>运输工具类型</p>
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
                     * 获取<p>运输工具牌号</p>
                     * @return VehicleBrand <p>运输工具牌号</p>
                     * 
                     */
                    std::string GetVehicleBrand() const;

                    /**
                     * 设置<p>运输工具牌号</p>
                     * @param _vehicleBrand <p>运输工具牌号</p>
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
                     * 获取<p>起始地</p>
                     * @return DeparturePlace <p>起始地</p>
                     * 
                     */
                    std::string GetDeparturePlace() const;

                    /**
                     * 设置<p>起始地</p>
                     * @param _departurePlace <p>起始地</p>
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
                     * 获取<p>到达地</p>
                     * @return ArrivalPlace <p>到达地</p>
                     * 
                     */
                    std::string GetArrivalPlace() const;

                    /**
                     * 设置<p>到达地</p>
                     * @param _arrivalPlace <p>到达地</p>
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
                     * 获取<p>运输货物名称，仅货物运输服务发票返回</p>
                     * @return TransportItemsName <p>运输货物名称，仅货物运输服务发票返回</p>
                     * 
                     */
                    std::string GetTransportItemsName() const;

                    /**
                     * 设置<p>运输货物名称，仅货物运输服务发票返回</p>
                     * @param _transportItemsName <p>运输货物名称，仅货物运输服务发票返回</p>
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
                     * 获取<p>建筑服务发生地，仅建筑发票返回</p>
                     * @return PlaceOfBuildingService <p>建筑服务发生地，仅建筑发票返回</p>
                     * 
                     */
                    std::string GetPlaceOfBuildingService() const;

                    /**
                     * 设置<p>建筑服务发生地，仅建筑发票返回</p>
                     * @param _placeOfBuildingService <p>建筑服务发生地，仅建筑发票返回</p>
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
                     * 获取<p>建筑项目名称，仅建筑发票返回</p>
                     * @return BuildingName <p>建筑项目名称，仅建筑发票返回</p>
                     * 
                     */
                    std::string GetBuildingName() const;

                    /**
                     * 设置<p>建筑项目名称，仅建筑发票返回</p>
                     * @param _buildingName <p>建筑项目名称，仅建筑发票返回</p>
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
                     * 获取<p>产权证书/不动产权证号，仅不动产经营租赁服务发票返回</p>
                     * @return EstateNumber <p>产权证书/不动产权证号，仅不动产经营租赁服务发票返回</p>
                     * 
                     */
                    std::string GetEstateNumber() const;

                    /**
                     * 设置<p>产权证书/不动产权证号，仅不动产经营租赁服务发票返回</p>
                     * @param _estateNumber <p>产权证书/不动产权证号，仅不动产经营租赁服务发票返回</p>
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
                     * 获取<p>面积单位，仅不动产经营租赁服务发票返回</p>
                     * @return AreaUnit <p>面积单位，仅不动产经营租赁服务发票返回</p>
                     * 
                     */
                    std::string GetAreaUnit() const;

                    /**
                     * 设置<p>面积单位，仅不动产经营租赁服务发票返回</p>
                     * @param _areaUnit <p>面积单位，仅不动产经营租赁服务发票返回</p>
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
                     * 获取<p>出行人，仅旅客运输服务发票返回</p>
                     * @return Traveler <p>出行人，仅旅客运输服务发票返回</p>
                     * 
                     */
                    std::string GetTraveler() const;

                    /**
                     * 设置<p>出行人，仅旅客运输服务发票返回</p>
                     * @param _traveler <p>出行人，仅旅客运输服务发票返回</p>
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
                     * 获取<p>有效身份证件号，仅旅客运输服务发票返回</p>
                     * @return TravelerID <p>有效身份证件号，仅旅客运输服务发票返回</p>
                     * 
                     */
                    std::string GetTravelerID() const;

                    /**
                     * 设置<p>有效身份证件号，仅旅客运输服务发票返回</p>
                     * @param _travelerID <p>有效身份证件号，仅旅客运输服务发票返回</p>
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
                     * 获取<p>出行日期，仅旅客运输服务发票返回</p>
                     * @return TravelDate <p>出行日期，仅旅客运输服务发票返回</p>
                     * 
                     */
                    std::string GetTravelDate() const;

                    /**
                     * 设置<p>出行日期，仅旅客运输服务发票返回</p>
                     * @param _travelDate <p>出行日期，仅旅客运输服务发票返回</p>
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
                     * 获取<p>等级，仅旅客运输服务发票返回</p>
                     * @return TravelLevel <p>等级，仅旅客运输服务发票返回</p>
                     * 
                     */
                    std::string GetTravelLevel() const;

                    /**
                     * 设置<p>等级，仅旅客运输服务发票返回</p>
                     * @param _travelLevel <p>等级，仅旅客运输服务发票返回</p>
                     * 
                     */
                    void SetTravelLevel(const std::string& _travelLevel);

                    /**
                     * 判断参数 TravelLevel 是否已赋值
                     * @return TravelLevel 是否已赋值
                     * 
                     */
                    bool TravelLevelHasBeenSet() const;

                    /**
                     * 获取<p>通行日期起</p>
                     * @return DateStart <p>通行日期起</p>
                     * 
                     */
                    std::string GetDateStart() const;

                    /**
                     * 设置<p>通行日期起</p>
                     * @param _dateStart <p>通行日期起</p>
                     * 
                     */
                    void SetDateStart(const std::string& _dateStart);

                    /**
                     * 判断参数 DateStart 是否已赋值
                     * @return DateStart 是否已赋值
                     * 
                     */
                    bool DateStartHasBeenSet() const;

                    /**
                     * 获取<p>通行日期止</p>
                     * @return DateEnd <p>通行日期止</p>
                     * 
                     */
                    std::string GetDateEnd() const;

                    /**
                     * 设置<p>通行日期止</p>
                     * @param _dateEnd <p>通行日期止</p>
                     * 
                     */
                    void SetDateEnd(const std::string& _dateEnd);

                    /**
                     * 判断参数 DateEnd 是否已赋值
                     * @return DateEnd 是否已赋值
                     * 
                     */
                    bool DateEndHasBeenSet() const;

                    /**
                     * 获取<p>车架号</p>
                     * @return VinNo <p>车架号</p>
                     * 
                     */
                    std::string GetVinNo() const;

                    /**
                     * 设置<p>车架号</p>
                     * @param _vinNo <p>车架号</p>
                     * 
                     */
                    void SetVinNo(const std::string& _vinNo);

                    /**
                     * 判断参数 VinNo 是否已赋值
                     * @return VinNo 是否已赋值
                     * 
                     */
                    bool VinNoHasBeenSet() const;

                private:

                    /**
                     * <p>项目名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>数量</p>
                     */
                    std::string m_quantity;
                    bool m_quantityHasBeenSet;

                    /**
                     * <p>规格型号</p>
                     */
                    std::string m_specification;
                    bool m_specificationHasBeenSet;

                    /**
                     * <p>单价</p>
                     */
                    std::string m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * <p>金额</p>
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * <p>税率</p>
                     */
                    std::string m_taxRate;
                    bool m_taxRateHasBeenSet;

                    /**
                     * <p>税额</p>
                     */
                    std::string m_tax;
                    bool m_taxHasBeenSet;

                    /**
                     * <p>单位</p>
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * <p>运输工具类型</p>
                     */
                    std::string m_vehicleType;
                    bool m_vehicleTypeHasBeenSet;

                    /**
                     * <p>运输工具牌号</p>
                     */
                    std::string m_vehicleBrand;
                    bool m_vehicleBrandHasBeenSet;

                    /**
                     * <p>起始地</p>
                     */
                    std::string m_departurePlace;
                    bool m_departurePlaceHasBeenSet;

                    /**
                     * <p>到达地</p>
                     */
                    std::string m_arrivalPlace;
                    bool m_arrivalPlaceHasBeenSet;

                    /**
                     * <p>运输货物名称，仅货物运输服务发票返回</p>
                     */
                    std::string m_transportItemsName;
                    bool m_transportItemsNameHasBeenSet;

                    /**
                     * <p>建筑服务发生地，仅建筑发票返回</p>
                     */
                    std::string m_placeOfBuildingService;
                    bool m_placeOfBuildingServiceHasBeenSet;

                    /**
                     * <p>建筑项目名称，仅建筑发票返回</p>
                     */
                    std::string m_buildingName;
                    bool m_buildingNameHasBeenSet;

                    /**
                     * <p>产权证书/不动产权证号，仅不动产经营租赁服务发票返回</p>
                     */
                    std::string m_estateNumber;
                    bool m_estateNumberHasBeenSet;

                    /**
                     * <p>面积单位，仅不动产经营租赁服务发票返回</p>
                     */
                    std::string m_areaUnit;
                    bool m_areaUnitHasBeenSet;

                    /**
                     * <p>出行人，仅旅客运输服务发票返回</p>
                     */
                    std::string m_traveler;
                    bool m_travelerHasBeenSet;

                    /**
                     * <p>有效身份证件号，仅旅客运输服务发票返回</p>
                     */
                    std::string m_travelerID;
                    bool m_travelerIDHasBeenSet;

                    /**
                     * <p>出行日期，仅旅客运输服务发票返回</p>
                     */
                    std::string m_travelDate;
                    bool m_travelDateHasBeenSet;

                    /**
                     * <p>等级，仅旅客运输服务发票返回</p>
                     */
                    std::string m_travelLevel;
                    bool m_travelLevelHasBeenSet;

                    /**
                     * <p>通行日期起</p>
                     */
                    std::string m_dateStart;
                    bool m_dateStartHasBeenSet;

                    /**
                     * <p>通行日期止</p>
                     */
                    std::string m_dateEnd;
                    bool m_dateEndHasBeenSet;

                    /**
                     * <p>车架号</p>
                     */
                    std::string m_vinNo;
                    bool m_vinNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VATELECTRONICITEMINFO_H_
