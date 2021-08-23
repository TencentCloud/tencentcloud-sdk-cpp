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

#include <tencentcloud/monitor/v20180724/model/DescribePolicyConditionListEventMetric.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribePolicyConditionListEventMetric::DescribePolicyConditionListEventMetric() :
    m_eventIdHasBeenSet(false),
    m_eventShowNameHasBeenSet(false),
    m_needRecoveredHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome DescribePolicyConditionListEventMetric::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListEventMetric.EventId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = value["EventId"].GetInt64();
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("EventShowName") && !value["EventShowName"].IsNull())
    {
        if (!value["EventShowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListEventMetric.EventShowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventShowName = string(value["EventShowName"].GetString());
        m_eventShowNameHasBeenSet = true;
    }

    if (value.HasMember("NeedRecovered") && !value["NeedRecovered"].IsNull())
    {
        if (!value["NeedRecovered"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListEventMetric.NeedRecovered` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_needRecovered = value["NeedRecovered"].GetBool();
        m_needRecoveredHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListEventMetric.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribePolicyConditionListEventMetric::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventId, allocator);
    }

    if (m_eventShowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventShowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventShowName.c_str(), allocator).Move(), allocator);
    }

    if (m_needRecoveredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedRecovered";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needRecovered, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

}


int64_t DescribePolicyConditionListEventMetric::GetEventId() const
{
    return m_eventId;
}

void DescribePolicyConditionListEventMetric::SetEventId(const int64_t& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool DescribePolicyConditionListEventMetric::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string DescribePolicyConditionListEventMetric::GetEventShowName() const
{
    return m_eventShowName;
}

void DescribePolicyConditionListEventMetric::SetEventShowName(const string& _eventShowName)
{
    m_eventShowName = _eventShowName;
    m_eventShowNameHasBeenSet = true;
}

bool DescribePolicyConditionListEventMetric::EventShowNameHasBeenSet() const
{
    return m_eventShowNameHasBeenSet;
}

bool DescribePolicyConditionListEventMetric::GetNeedRecovered() const
{
    return m_needRecovered;
}

void DescribePolicyConditionListEventMetric::SetNeedRecovered(const bool& _needRecovered)
{
    m_needRecovered = _needRecovered;
    m_needRecoveredHasBeenSet = true;
}

bool DescribePolicyConditionListEventMetric::NeedRecoveredHasBeenSet() const
{
    return m_needRecoveredHasBeenSet;
}

int64_t DescribePolicyConditionListEventMetric::GetType() const
{
    return m_type;
}

void DescribePolicyConditionListEventMetric::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribePolicyConditionListEventMetric::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

