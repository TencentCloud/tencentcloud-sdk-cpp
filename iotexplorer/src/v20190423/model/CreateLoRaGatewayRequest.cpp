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

#include <tencentcloud/iotexplorer/v20190423/model/CreateLoRaGatewayRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

CreateLoRaGatewayRequest::CreateLoRaGatewayRequest() :
    m_gatewayIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_positionDetailsHasBeenSet(false),
    m_isPublicHasBeenSet(false),
    m_frequencyIdHasBeenSet(false)
{
}

string CreateLoRaGatewayRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_location.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_positionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Position";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_position.c_str(), allocator).Move(), allocator);
    }

    if (m_positionDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PositionDetails";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_positionDetails.c_str(), allocator).Move(), allocator);
    }

    if (m_isPublicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPublic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isPublic, allocator);
    }

    if (m_frequencyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrequencyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_frequencyId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateLoRaGatewayRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void CreateLoRaGatewayRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool CreateLoRaGatewayRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string CreateLoRaGatewayRequest::GetName() const
{
    return m_name;
}

void CreateLoRaGatewayRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateLoRaGatewayRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateLoRaGatewayRequest::GetDescription() const
{
    return m_description;
}

void CreateLoRaGatewayRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateLoRaGatewayRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

LoRaGatewayLocation CreateLoRaGatewayRequest::GetLocation() const
{
    return m_location;
}

void CreateLoRaGatewayRequest::SetLocation(const LoRaGatewayLocation& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool CreateLoRaGatewayRequest::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

string CreateLoRaGatewayRequest::GetPosition() const
{
    return m_position;
}

void CreateLoRaGatewayRequest::SetPosition(const string& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool CreateLoRaGatewayRequest::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

string CreateLoRaGatewayRequest::GetPositionDetails() const
{
    return m_positionDetails;
}

void CreateLoRaGatewayRequest::SetPositionDetails(const string& _positionDetails)
{
    m_positionDetails = _positionDetails;
    m_positionDetailsHasBeenSet = true;
}

bool CreateLoRaGatewayRequest::PositionDetailsHasBeenSet() const
{
    return m_positionDetailsHasBeenSet;
}

bool CreateLoRaGatewayRequest::GetIsPublic() const
{
    return m_isPublic;
}

void CreateLoRaGatewayRequest::SetIsPublic(const bool& _isPublic)
{
    m_isPublic = _isPublic;
    m_isPublicHasBeenSet = true;
}

bool CreateLoRaGatewayRequest::IsPublicHasBeenSet() const
{
    return m_isPublicHasBeenSet;
}

string CreateLoRaGatewayRequest::GetFrequencyId() const
{
    return m_frequencyId;
}

void CreateLoRaGatewayRequest::SetFrequencyId(const string& _frequencyId)
{
    m_frequencyId = _frequencyId;
    m_frequencyIdHasBeenSet = true;
}

bool CreateLoRaGatewayRequest::FrequencyIdHasBeenSet() const
{
    return m_frequencyIdHasBeenSet;
}


