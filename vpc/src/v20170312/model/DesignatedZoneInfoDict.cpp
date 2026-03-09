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

#include <tencentcloud/vpc/v20170312/model/DesignatedZoneInfoDict.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DesignatedZoneInfoDict::DesignatedZoneInfoDict() :
    m_designatedZoneHasBeenSet(false),
    m_designatedZoneNameHasBeenSet(false),
    m_designatedZoneTypeHasBeenSet(false)
{
}

CoreInternalOutcome DesignatedZoneInfoDict::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DesignatedZone") && !value["DesignatedZone"].IsNull())
    {
        if (!value["DesignatedZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DesignatedZoneInfoDict.DesignatedZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_designatedZone = string(value["DesignatedZone"].GetString());
        m_designatedZoneHasBeenSet = true;
    }

    if (value.HasMember("DesignatedZoneName") && !value["DesignatedZoneName"].IsNull())
    {
        if (!value["DesignatedZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DesignatedZoneInfoDict.DesignatedZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_designatedZoneName = string(value["DesignatedZoneName"].GetString());
        m_designatedZoneNameHasBeenSet = true;
    }

    if (value.HasMember("DesignatedZoneType") && !value["DesignatedZoneType"].IsNull())
    {
        if (!value["DesignatedZoneType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DesignatedZoneInfoDict.DesignatedZoneType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_designatedZoneType = string(value["DesignatedZoneType"].GetString());
        m_designatedZoneTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DesignatedZoneInfoDict::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_designatedZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DesignatedZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_designatedZone.c_str(), allocator).Move(), allocator);
    }

    if (m_designatedZoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DesignatedZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_designatedZoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_designatedZoneTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DesignatedZoneType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_designatedZoneType.c_str(), allocator).Move(), allocator);
    }

}


string DesignatedZoneInfoDict::GetDesignatedZone() const
{
    return m_designatedZone;
}

void DesignatedZoneInfoDict::SetDesignatedZone(const string& _designatedZone)
{
    m_designatedZone = _designatedZone;
    m_designatedZoneHasBeenSet = true;
}

bool DesignatedZoneInfoDict::DesignatedZoneHasBeenSet() const
{
    return m_designatedZoneHasBeenSet;
}

string DesignatedZoneInfoDict::GetDesignatedZoneName() const
{
    return m_designatedZoneName;
}

void DesignatedZoneInfoDict::SetDesignatedZoneName(const string& _designatedZoneName)
{
    m_designatedZoneName = _designatedZoneName;
    m_designatedZoneNameHasBeenSet = true;
}

bool DesignatedZoneInfoDict::DesignatedZoneNameHasBeenSet() const
{
    return m_designatedZoneNameHasBeenSet;
}

string DesignatedZoneInfoDict::GetDesignatedZoneType() const
{
    return m_designatedZoneType;
}

void DesignatedZoneInfoDict::SetDesignatedZoneType(const string& _designatedZoneType)
{
    m_designatedZoneType = _designatedZoneType;
    m_designatedZoneTypeHasBeenSet = true;
}

bool DesignatedZoneInfoDict::DesignatedZoneTypeHasBeenSet() const
{
    return m_designatedZoneTypeHasBeenSet;
}

