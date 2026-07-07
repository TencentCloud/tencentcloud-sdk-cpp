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

#include <tencentcloud/alb/v20251030/model/Zone.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

Zone::Zone() :
    m_localNameHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_zoneStatusHasBeenSet(false)
{
}

CoreInternalOutcome Zone::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LocalName") && !value["LocalName"].IsNull())
    {
        if (!value["LocalName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Zone.LocalName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_localName = string(value["LocalName"].GetString());
        m_localNameHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Zone.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneStatus") && !value["ZoneStatus"].IsNull())
    {
        if (!value["ZoneStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Zone.ZoneStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneStatus = string(value["ZoneStatus"].GetString());
        m_zoneStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Zone::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_localNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_localName.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneStatus.c_str(), allocator).Move(), allocator);
    }

}


string Zone::GetLocalName() const
{
    return m_localName;
}

void Zone::SetLocalName(const string& _localName)
{
    m_localName = _localName;
    m_localNameHasBeenSet = true;
}

bool Zone::LocalNameHasBeenSet() const
{
    return m_localNameHasBeenSet;
}

string Zone::GetZoneId() const
{
    return m_zoneId;
}

void Zone::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool Zone::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string Zone::GetZoneStatus() const
{
    return m_zoneStatus;
}

void Zone::SetZoneStatus(const string& _zoneStatus)
{
    m_zoneStatus = _zoneStatus;
    m_zoneStatusHasBeenSet = true;
}

bool Zone::ZoneStatusHasBeenSet() const
{
    return m_zoneStatusHasBeenSet;
}

