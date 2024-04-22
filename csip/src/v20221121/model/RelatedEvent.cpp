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

#include <tencentcloud/csip/v20221121/model/RelatedEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

RelatedEvent::RelatedEvent() :
    m_eventIDHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_relatedCountHasBeenSet(false)
{
}

CoreInternalOutcome RelatedEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventID") && !value["EventID"].IsNull())
    {
        if (!value["EventID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RelatedEvent.EventID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventID = string(value["EventID"].GetString());
        m_eventIDHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RelatedEvent.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("RelatedCount") && !value["RelatedCount"].IsNull())
    {
        if (!value["RelatedCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RelatedEvent.RelatedCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_relatedCount = value["RelatedCount"].GetInt64();
        m_relatedCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RelatedEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventID.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_relatedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_relatedCount, allocator);
    }

}


string RelatedEvent::GetEventID() const
{
    return m_eventID;
}

void RelatedEvent::SetEventID(const string& _eventID)
{
    m_eventID = _eventID;
    m_eventIDHasBeenSet = true;
}

bool RelatedEvent::EventIDHasBeenSet() const
{
    return m_eventIDHasBeenSet;
}

string RelatedEvent::GetDescription() const
{
    return m_description;
}

void RelatedEvent::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool RelatedEvent::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t RelatedEvent::GetRelatedCount() const
{
    return m_relatedCount;
}

void RelatedEvent::SetRelatedCount(const int64_t& _relatedCount)
{
    m_relatedCount = _relatedCount;
    m_relatedCountHasBeenSet = true;
}

bool RelatedEvent::RelatedCountHasBeenSet() const
{
    return m_relatedCountHasBeenSet;
}

