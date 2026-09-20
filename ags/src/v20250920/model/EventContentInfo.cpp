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

#include <tencentcloud/ags/v20250920/model/EventContentInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

EventContentInfo::EventContentInfo() :
    m_roleHasBeenSet(false),
    m_partsHasBeenSet(false)
{
}

CoreInternalOutcome EventContentInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Role") && !value["Role"].IsNull())
    {
        if (!value["Role"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventContentInfo.Role` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_role = string(value["Role"].GetString());
        m_roleHasBeenSet = true;
    }

    if (value.HasMember("Parts") && !value["Parts"].IsNull())
    {
        if (!value["Parts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EventContentInfo.Parts` is not array type"));

        const rapidjson::Value &tmpValue = value["Parts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EventPartInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_parts.push_back(item);
        }
        m_partsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventContentInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_role.c_str(), allocator).Move(), allocator);
    }

    if (m_partsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Parts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_parts.begin(); itr != m_parts.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string EventContentInfo::GetRole() const
{
    return m_role;
}

void EventContentInfo::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool EventContentInfo::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

vector<EventPartInfo> EventContentInfo::GetParts() const
{
    return m_parts;
}

void EventContentInfo::SetParts(const vector<EventPartInfo>& _parts)
{
    m_parts = _parts;
    m_partsHasBeenSet = true;
}

bool EventContentInfo::PartsHasBeenSet() const
{
    return m_partsHasBeenSet;
}

