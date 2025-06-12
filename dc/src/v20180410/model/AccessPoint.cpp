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

#include <tencentcloud/dc/v20180410/model/AccessPoint.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dc::V20180410::Model;
using namespace std;

AccessPoint::AccessPoint() :
    m_accessPointNameHasBeenSet(false),
    m_accessPointIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_lineOperatorHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_availablePortTypeHasBeenSet(false),
    m_coordinateHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_accessPointTypeHasBeenSet(false),
    m_availablePortInfoHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_isMacSecHasBeenSet(false)
{
}

CoreInternalOutcome AccessPoint::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccessPointName") && !value["AccessPointName"].IsNull())
    {
        if (!value["AccessPointName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessPoint.AccessPointName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessPointName = string(value["AccessPointName"].GetString());
        m_accessPointNameHasBeenSet = true;
    }

    if (value.HasMember("AccessPointId") && !value["AccessPointId"].IsNull())
    {
        if (!value["AccessPointId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessPoint.AccessPointId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessPointId = string(value["AccessPointId"].GetString());
        m_accessPointIdHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessPoint.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessPoint.Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(value["Location"].GetString());
        m_locationHasBeenSet = true;
    }

    if (value.HasMember("LineOperator") && !value["LineOperator"].IsNull())
    {
        if (!value["LineOperator"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccessPoint.LineOperator` is not array type"));

        const rapidjson::Value &tmpValue = value["LineOperator"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_lineOperator.push_back((*itr).GetString());
        }
        m_lineOperatorHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessPoint.RegionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = string(value["RegionId"].GetString());
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("AvailablePortType") && !value["AvailablePortType"].IsNull())
    {
        if (!value["AvailablePortType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccessPoint.AvailablePortType` is not array type"));

        const rapidjson::Value &tmpValue = value["AvailablePortType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_availablePortType.push_back((*itr).GetString());
        }
        m_availablePortTypeHasBeenSet = true;
    }

    if (value.HasMember("Coordinate") && !value["Coordinate"].IsNull())
    {
        if (!value["Coordinate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AccessPoint.Coordinate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_coordinate.Deserialize(value["Coordinate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_coordinateHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessPoint.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessPoint.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }

    if (value.HasMember("AccessPointType") && !value["AccessPointType"].IsNull())
    {
        if (!value["AccessPointType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessPoint.AccessPointType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessPointType = string(value["AccessPointType"].GetString());
        m_accessPointTypeHasBeenSet = true;
    }

    if (value.HasMember("AvailablePortInfo") && !value["AvailablePortInfo"].IsNull())
    {
        if (!value["AvailablePortInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccessPoint.AvailablePortInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["AvailablePortInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PortSpecification item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_availablePortInfo.push_back(item);
        }
        m_availablePortInfoHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessPoint.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("IsMacSec") && !value["IsMacSec"].IsNull())
    {
        if (!value["IsMacSec"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AccessPoint.IsMacSec` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isMacSec = value["IsMacSec"].GetBool();
        m_isMacSecHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessPoint::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accessPointNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessPointName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessPointName.c_str(), allocator).Move(), allocator);
    }

    if (m_accessPointIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessPointId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessPointId.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_location.c_str(), allocator).Move(), allocator);
    }

    if (m_lineOperatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineOperator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_lineOperator.begin(); itr != m_lineOperator.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionId.c_str(), allocator).Move(), allocator);
    }

    if (m_availablePortTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailablePortType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_availablePortType.begin(); itr != m_availablePortType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_coordinateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Coordinate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_coordinate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_accessPointTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessPointType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessPointType.c_str(), allocator).Move(), allocator);
    }

    if (m_availablePortInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailablePortInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_availablePortInfo.begin(); itr != m_availablePortInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_isMacSecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsMacSec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isMacSec, allocator);
    }

}


string AccessPoint::GetAccessPointName() const
{
    return m_accessPointName;
}

void AccessPoint::SetAccessPointName(const string& _accessPointName)
{
    m_accessPointName = _accessPointName;
    m_accessPointNameHasBeenSet = true;
}

bool AccessPoint::AccessPointNameHasBeenSet() const
{
    return m_accessPointNameHasBeenSet;
}

string AccessPoint::GetAccessPointId() const
{
    return m_accessPointId;
}

void AccessPoint::SetAccessPointId(const string& _accessPointId)
{
    m_accessPointId = _accessPointId;
    m_accessPointIdHasBeenSet = true;
}

bool AccessPoint::AccessPointIdHasBeenSet() const
{
    return m_accessPointIdHasBeenSet;
}

string AccessPoint::GetState() const
{
    return m_state;
}

void AccessPoint::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool AccessPoint::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string AccessPoint::GetLocation() const
{
    return m_location;
}

void AccessPoint::SetLocation(const string& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool AccessPoint::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

vector<string> AccessPoint::GetLineOperator() const
{
    return m_lineOperator;
}

void AccessPoint::SetLineOperator(const vector<string>& _lineOperator)
{
    m_lineOperator = _lineOperator;
    m_lineOperatorHasBeenSet = true;
}

bool AccessPoint::LineOperatorHasBeenSet() const
{
    return m_lineOperatorHasBeenSet;
}

string AccessPoint::GetRegionId() const
{
    return m_regionId;
}

void AccessPoint::SetRegionId(const string& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool AccessPoint::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

vector<string> AccessPoint::GetAvailablePortType() const
{
    return m_availablePortType;
}

void AccessPoint::SetAvailablePortType(const vector<string>& _availablePortType)
{
    m_availablePortType = _availablePortType;
    m_availablePortTypeHasBeenSet = true;
}

bool AccessPoint::AvailablePortTypeHasBeenSet() const
{
    return m_availablePortTypeHasBeenSet;
}

Coordinate AccessPoint::GetCoordinate() const
{
    return m_coordinate;
}

void AccessPoint::SetCoordinate(const Coordinate& _coordinate)
{
    m_coordinate = _coordinate;
    m_coordinateHasBeenSet = true;
}

bool AccessPoint::CoordinateHasBeenSet() const
{
    return m_coordinateHasBeenSet;
}

string AccessPoint::GetCity() const
{
    return m_city;
}

void AccessPoint::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool AccessPoint::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string AccessPoint::GetArea() const
{
    return m_area;
}

void AccessPoint::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool AccessPoint::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

string AccessPoint::GetAccessPointType() const
{
    return m_accessPointType;
}

void AccessPoint::SetAccessPointType(const string& _accessPointType)
{
    m_accessPointType = _accessPointType;
    m_accessPointTypeHasBeenSet = true;
}

bool AccessPoint::AccessPointTypeHasBeenSet() const
{
    return m_accessPointTypeHasBeenSet;
}

vector<PortSpecification> AccessPoint::GetAvailablePortInfo() const
{
    return m_availablePortInfo;
}

void AccessPoint::SetAvailablePortInfo(const vector<PortSpecification>& _availablePortInfo)
{
    m_availablePortInfo = _availablePortInfo;
    m_availablePortInfoHasBeenSet = true;
}

bool AccessPoint::AvailablePortInfoHasBeenSet() const
{
    return m_availablePortInfoHasBeenSet;
}

string AccessPoint::GetAddress() const
{
    return m_address;
}

void AccessPoint::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool AccessPoint::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

bool AccessPoint::GetIsMacSec() const
{
    return m_isMacSec;
}

void AccessPoint::SetIsMacSec(const bool& _isMacSec)
{
    m_isMacSec = _isMacSec;
    m_isMacSecHasBeenSet = true;
}

bool AccessPoint::IsMacSecHasBeenSet() const
{
    return m_isMacSecHasBeenSet;
}

