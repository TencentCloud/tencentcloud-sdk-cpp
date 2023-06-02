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

#include <tencentcloud/clb/v20180317/model/SpecAvailability.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

SpecAvailability::SpecAvailability() :
    m_specTypeHasBeenSet(false),
    m_availabilityHasBeenSet(false)
{
}

CoreInternalOutcome SpecAvailability::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SpecType") && !value["SpecType"].IsNull())
    {
        if (!value["SpecType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecAvailability.SpecType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specType = string(value["SpecType"].GetString());
        m_specTypeHasBeenSet = true;
    }

    if (value.HasMember("Availability") && !value["Availability"].IsNull())
    {
        if (!value["Availability"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecAvailability.Availability` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_availability = string(value["Availability"].GetString());
        m_availabilityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpecAvailability::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_specTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specType.c_str(), allocator).Move(), allocator);
    }

    if (m_availabilityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Availability";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_availability.c_str(), allocator).Move(), allocator);
    }

}


string SpecAvailability::GetSpecType() const
{
    return m_specType;
}

void SpecAvailability::SetSpecType(const string& _specType)
{
    m_specType = _specType;
    m_specTypeHasBeenSet = true;
}

bool SpecAvailability::SpecTypeHasBeenSet() const
{
    return m_specTypeHasBeenSet;
}

string SpecAvailability::GetAvailability() const
{
    return m_availability;
}

void SpecAvailability::SetAvailability(const string& _availability)
{
    m_availability = _availability;
    m_availabilityHasBeenSet = true;
}

bool SpecAvailability::AvailabilityHasBeenSet() const
{
    return m_availabilityHasBeenSet;
}

