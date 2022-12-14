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

#include <tencentcloud/clb/v20180317/model/ResourceAvailability.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ResourceAvailability::ResourceAvailability() :
    m_typeHasBeenSet(false),
    m_availabilityHasBeenSet(false)
{
}

CoreInternalOutcome ResourceAvailability::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceAvailability.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Availability") && !value["Availability"].IsNull())
    {
        if (!value["Availability"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceAvailability.Availability` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_availability = string(value["Availability"].GetString());
        m_availabilityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceAvailability::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_availabilityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Availability";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_availability.c_str(), allocator).Move(), allocator);
    }

}


string ResourceAvailability::GetType() const
{
    return m_type;
}

void ResourceAvailability::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ResourceAvailability::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ResourceAvailability::GetAvailability() const
{
    return m_availability;
}

void ResourceAvailability::SetAvailability(const string& _availability)
{
    m_availability = _availability;
    m_availabilityHasBeenSet = true;
}

bool ResourceAvailability::AvailabilityHasBeenSet() const
{
    return m_availabilityHasBeenSet;
}

