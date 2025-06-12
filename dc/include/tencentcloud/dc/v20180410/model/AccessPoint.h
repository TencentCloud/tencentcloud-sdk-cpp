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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_ACCESSPOINT_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_ACCESSPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dc/v20180410/model/Coordinate.h>
#include <tencentcloud/dc/v20180410/model/PortSpecification.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * 接入点信息。
                */
                class AccessPoint : public AbstractModel
                {
                public:
                    AccessPoint();
                    ~AccessPoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取接入点的名称。
                     * @return AccessPointName 接入点的名称。
                     * 
                     */
                    std::string GetAccessPointName() const;

                    /**
                     * 设置接入点的名称。
                     * @param _accessPointName 接入点的名称。
                     * 
                     */
                    void SetAccessPointName(const std::string& _accessPointName);

                    /**
                     * 判断参数 AccessPointName 是否已赋值
                     * @return AccessPointName 是否已赋值
                     * 
                     */
                    bool AccessPointNameHasBeenSet() const;

                    /**
                     * 获取接入点唯一ID。
                     * @return AccessPointId 接入点唯一ID。
                     * 
                     */
                    std::string GetAccessPointId() const;

                    /**
                     * 设置接入点唯一ID。
                     * @param _accessPointId 接入点唯一ID。
                     * 
                     */
                    void SetAccessPointId(const std::string& _accessPointId);

                    /**
                     * 判断参数 AccessPointId 是否已赋值
                     * @return AccessPointId 是否已赋值
                     * 
                     */
                    bool AccessPointIdHasBeenSet() const;

                    /**
                     * 获取接入点的状态。可用，不可用。
                     * @return State 接入点的状态。可用，不可用。
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置接入点的状态。可用，不可用。
                     * @param _state 接入点的状态。可用，不可用。
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取接入点的位置。
                     * @return Location 接入点的位置。
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置接入点的位置。
                     * @param _location 接入点的位置。
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取接入点支持的运营商列表。
                     * @return LineOperator 接入点支持的运营商列表。
                     * 
                     */
                    std::vector<std::string> GetLineOperator() const;

                    /**
                     * 设置接入点支持的运营商列表。
                     * @param _lineOperator 接入点支持的运营商列表。
                     * 
                     */
                    void SetLineOperator(const std::vector<std::string>& _lineOperator);

                    /**
                     * 判断参数 LineOperator 是否已赋值
                     * @return LineOperator 是否已赋值
                     * 
                     */
                    bool LineOperatorHasBeenSet() const;

                    /**
                     * 获取接入点管理的大区ID。
                     * @return RegionId 接入点管理的大区ID。
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置接入点管理的大区ID。
                     * @param _regionId 接入点管理的大区ID。
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取接入点可用的端口类型列表。1000BASE-T代表千兆电口，1000BASE-LX代表千兆单模光口10km，1000BASE-ZX代表千兆单模光口80km,10GBASE-LR代表万兆单模光口10km,10GBASE-ZR代表万兆单模光口80km,10GBASE-LH代表万兆单模光口40km,100GBASE-LR4代表100G单模光口10km。
                     * @return AvailablePortType 接入点可用的端口类型列表。1000BASE-T代表千兆电口，1000BASE-LX代表千兆单模光口10km，1000BASE-ZX代表千兆单模光口80km,10GBASE-LR代表万兆单模光口10km,10GBASE-ZR代表万兆单模光口80km,10GBASE-LH代表万兆单模光口40km,100GBASE-LR4代表100G单模光口10km。
                     * 
                     */
                    std::vector<std::string> GetAvailablePortType() const;

                    /**
                     * 设置接入点可用的端口类型列表。1000BASE-T代表千兆电口，1000BASE-LX代表千兆单模光口10km，1000BASE-ZX代表千兆单模光口80km,10GBASE-LR代表万兆单模光口10km,10GBASE-ZR代表万兆单模光口80km,10GBASE-LH代表万兆单模光口40km,100GBASE-LR4代表100G单模光口10km。
                     * @param _availablePortType 接入点可用的端口类型列表。1000BASE-T代表千兆电口，1000BASE-LX代表千兆单模光口10km，1000BASE-ZX代表千兆单模光口80km,10GBASE-LR代表万兆单模光口10km,10GBASE-ZR代表万兆单模光口80km,10GBASE-LH代表万兆单模光口40km,100GBASE-LR4代表100G单模光口10km。
                     * 
                     */
                    void SetAvailablePortType(const std::vector<std::string>& _availablePortType);

                    /**
                     * 判断参数 AvailablePortType 是否已赋值
                     * @return AvailablePortType 是否已赋值
                     * 
                     */
                    bool AvailablePortTypeHasBeenSet() const;

                    /**
                     * 获取接入点经纬度。
                     * @return Coordinate 接入点经纬度。
                     * 
                     */
                    Coordinate GetCoordinate() const;

                    /**
                     * 设置接入点经纬度。
                     * @param _coordinate 接入点经纬度。
                     * 
                     */
                    void SetCoordinate(const Coordinate& _coordinate);

                    /**
                     * 判断参数 Coordinate 是否已赋值
                     * @return Coordinate 是否已赋值
                     * 
                     */
                    bool CoordinateHasBeenSet() const;

                    /**
                     * 获取接入点所在城市。
                     * @return City 接入点所在城市。
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置接入点所在城市。
                     * @param _city 接入点所在城市。
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
                     * 获取接入点地域名称。
                     * @return Area 接入点地域名称。
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置接入点地域名称。
                     * @param _area 接入点地域名称。
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取接入点类型。VXLAN/QCPL/QCAR
                     * @return AccessPointType 接入点类型。VXLAN/QCPL/QCAR
                     * 
                     */
                    std::string GetAccessPointType() const;

                    /**
                     * 设置接入点类型。VXLAN/QCPL/QCAR
                     * @param _accessPointType 接入点类型。VXLAN/QCPL/QCAR
                     * 
                     */
                    void SetAccessPointType(const std::string& _accessPointType);

                    /**
                     * 判断参数 AccessPointType 是否已赋值
                     * @return AccessPointType 是否已赋值
                     * 
                     */
                    bool AccessPointTypeHasBeenSet() const;

                    /**
                     * 获取端口规格信息。
                     * @return AvailablePortInfo 端口规格信息。
                     * 
                     */
                    std::vector<PortSpecification> GetAvailablePortInfo() const;

                    /**
                     * 设置端口规格信息。
                     * @param _availablePortInfo 端口规格信息。
                     * 
                     */
                    void SetAvailablePortInfo(const std::vector<PortSpecification>& _availablePortInfo);

                    /**
                     * 判断参数 AvailablePortInfo 是否已赋值
                     * @return AvailablePortInfo 是否已赋值
                     * 
                     */
                    bool AvailablePortInfoHasBeenSet() const;

                    /**
                     * 获取接入点地址。
                     * @return Address 接入点地址。
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置接入点地址。
                     * @param _address 接入点地址。
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取是否MACsec
                     * @return IsMacSec 是否MACsec
                     * 
                     */
                    bool GetIsMacSec() const;

                    /**
                     * 设置是否MACsec
                     * @param _isMacSec 是否MACsec
                     * 
                     */
                    void SetIsMacSec(const bool& _isMacSec);

                    /**
                     * 判断参数 IsMacSec 是否已赋值
                     * @return IsMacSec 是否已赋值
                     * 
                     */
                    bool IsMacSecHasBeenSet() const;

                private:

                    /**
                     * 接入点的名称。
                     */
                    std::string m_accessPointName;
                    bool m_accessPointNameHasBeenSet;

                    /**
                     * 接入点唯一ID。
                     */
                    std::string m_accessPointId;
                    bool m_accessPointIdHasBeenSet;

                    /**
                     * 接入点的状态。可用，不可用。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 接入点的位置。
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 接入点支持的运营商列表。
                     */
                    std::vector<std::string> m_lineOperator;
                    bool m_lineOperatorHasBeenSet;

                    /**
                     * 接入点管理的大区ID。
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 接入点可用的端口类型列表。1000BASE-T代表千兆电口，1000BASE-LX代表千兆单模光口10km，1000BASE-ZX代表千兆单模光口80km,10GBASE-LR代表万兆单模光口10km,10GBASE-ZR代表万兆单模光口80km,10GBASE-LH代表万兆单模光口40km,100GBASE-LR4代表100G单模光口10km。
                     */
                    std::vector<std::string> m_availablePortType;
                    bool m_availablePortTypeHasBeenSet;

                    /**
                     * 接入点经纬度。
                     */
                    Coordinate m_coordinate;
                    bool m_coordinateHasBeenSet;

                    /**
                     * 接入点所在城市。
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 接入点地域名称。
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 接入点类型。VXLAN/QCPL/QCAR
                     */
                    std::string m_accessPointType;
                    bool m_accessPointTypeHasBeenSet;

                    /**
                     * 端口规格信息。
                     */
                    std::vector<PortSpecification> m_availablePortInfo;
                    bool m_availablePortInfoHasBeenSet;

                    /**
                     * 接入点地址。
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 是否MACsec
                     */
                    bool m_isMacSec;
                    bool m_isMacSecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_ACCESSPOINT_H_
