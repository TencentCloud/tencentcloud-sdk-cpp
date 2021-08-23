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

#include <tencentcloud/iotexplorer/v20190423/model/LoRaGatewayItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

LoRaGatewayItem::LoRaGatewayItem() :
    m_gatewayIdHasBeenSet(false),
    m_isPublicHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_positionDetailsHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastSeenAtHasBeenSet(false),
    m_frequencyIdHasBeenSet(false)
{
}

CoreInternalOutcome LoRaGatewayItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GatewayId") && !value["GatewayId"].IsNull())
    {
        if (!value["GatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoRaGatewayItem.GatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayId = string(value["GatewayId"].GetString());
        m_gatewayIdHasBeenSet = true;
    }

    if (value.HasMember("IsPublic") && !value["IsPublic"].IsNull())
    {
        if (!value["IsPublic"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LoRaGatewayItem.IsPublic` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPublic = value["IsPublic"].GetBool();
        m_isPublicHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoRaGatewayItem.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoRaGatewayItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Position") && !value["Position"].IsNull())
    {
        if (!value["Position"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoRaGatewayItem.Position` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_position = string(value["Position"].GetString());
        m_positionHasBeenSet = true;
    }

    if (value.HasMember("PositionDetails") && !value["PositionDetails"].IsNull())
    {
        if (!value["PositionDetails"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoRaGatewayItem.PositionDetails` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_positionDetails = string(value["PositionDetails"].GetString());
        m_positionDetailsHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LoRaGatewayItem.Location` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_location.Deserialize(value["Location"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_locationHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoRaGatewayItem.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoRaGatewayItem.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("LastSeenAt") && !value["LastSeenAt"].IsNull())
    {
        if (!value["LastSeenAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoRaGatewayItem.LastSeenAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastSeenAt = string(value["LastSeenAt"].GetString());
        m_lastSeenAtHasBeenSet = true;
    }

    if (value.HasMember("FrequencyId") && !value["FrequencyId"].IsNull())
    {
        if (!value["FrequencyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoRaGatewayItem.FrequencyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frequencyId = string(value["FrequencyId"].GetString());
        m_frequencyIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoRaGatewayItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_isPublicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPublic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPublic, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_positionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Position";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_position.c_str(), allocator).Move(), allocator);
    }

    if (m_positionDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PositionDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_positionDetails.c_str(), allocator).Move(), allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_location.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_lastSeenAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastSeenAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastSeenAt.c_str(), allocator).Move(), allocator);
    }

    if (m_frequencyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrequencyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_frequencyId.c_str(), allocator).Move(), allocator);
    }

}


string LoRaGatewayItem::GetGatewayId() const
{
    return m_gatewayId;
}

void LoRaGatewayItem::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool LoRaGatewayItem::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

bool LoRaGatewayItem::GetIsPublic() const
{
    return m_isPublic;
}

void LoRaGatewayItem::SetIsPublic(const bool& _isPublic)
{
    m_isPublic = _isPublic;
    m_isPublicHasBeenSet = true;
}

bool LoRaGatewayItem::IsPublicHasBeenSet() const
{
    return m_isPublicHasBeenSet;
}

string LoRaGatewayItem::GetDescription() const
{
    return m_description;
}

void LoRaGatewayItem::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool LoRaGatewayItem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string LoRaGatewayItem::GetName() const
{
    return m_name;
}

void LoRaGatewayItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool LoRaGatewayItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string LoRaGatewayItem::GetPosition() const
{
    return m_position;
}

void LoRaGatewayItem::SetPosition(const string& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool LoRaGatewayItem::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

string LoRaGatewayItem::GetPositionDetails() const
{
    return m_positionDetails;
}

void LoRaGatewayItem::SetPositionDetails(const string& _positionDetails)
{
    m_positionDetails = _positionDetails;
    m_positionDetailsHasBeenSet = true;
}

bool LoRaGatewayItem::PositionDetailsHasBeenSet() const
{
    return m_positionDetailsHasBeenSet;
}

LoRaGatewayLocation LoRaGatewayItem::GetLocation() const
{
    return m_location;
}

void LoRaGatewayItem::SetLocation(const LoRaGatewayLocation& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool LoRaGatewayItem::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

string LoRaGatewayItem::GetUpdatedAt() const
{
    return m_updatedAt;
}

void LoRaGatewayItem::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool LoRaGatewayItem::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

string LoRaGatewayItem::GetCreatedAt() const
{
    return m_createdAt;
}

void LoRaGatewayItem::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool LoRaGatewayItem::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string LoRaGatewayItem::GetLastSeenAt() const
{
    return m_lastSeenAt;
}

void LoRaGatewayItem::SetLastSeenAt(const string& _lastSeenAt)
{
    m_lastSeenAt = _lastSeenAt;
    m_lastSeenAtHasBeenSet = true;
}

bool LoRaGatewayItem::LastSeenAtHasBeenSet() const
{
    return m_lastSeenAtHasBeenSet;
}

string LoRaGatewayItem::GetFrequencyId() const
{
    return m_frequencyId;
}

void LoRaGatewayItem::SetFrequencyId(const string& _frequencyId)
{
    m_frequencyId = _frequencyId;
    m_frequencyIdHasBeenSet = true;
}

bool LoRaGatewayItem::FrequencyIdHasBeenSet() const
{
    return m_frequencyIdHasBeenSet;
}

