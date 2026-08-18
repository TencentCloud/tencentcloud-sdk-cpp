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

#include <tencentcloud/adp/v20260520/model/ConsumptionDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ConsumptionDetail::ConsumptionDetail() :
    m_classificationHasBeenSet(false),
    m_eventTimeHasBeenSet(false),
    m_metricSourceTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_spaceNameHasBeenSet(false),
    m_usageHasBeenSet(false),
    m_userNameHasBeenSet(false)
{
}

CoreInternalOutcome ConsumptionDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Classification") && !value["Classification"].IsNull())
    {
        if (!value["Classification"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionDetail.Classification` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_classification.Deserialize(value["Classification"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_classificationHasBeenSet = true;
    }

    if (value.HasMember("EventTime") && !value["EventTime"].IsNull())
    {
        if (!value["EventTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionDetail.EventTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventTime = string(value["EventTime"].GetString());
        m_eventTimeHasBeenSet = true;
    }

    if (value.HasMember("MetricSourceType") && !value["MetricSourceType"].IsNull())
    {
        if (!value["MetricSourceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionDetail.MetricSourceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_metricSourceType = value["MetricSourceType"].GetInt64();
        m_metricSourceTypeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("SpaceName") && !value["SpaceName"].IsNull())
    {
        if (!value["SpaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionDetail.SpaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceName = string(value["SpaceName"].GetString());
        m_spaceNameHasBeenSet = true;
    }

    if (value.HasMember("Usage") && !value["Usage"].IsNull())
    {
        if (!value["Usage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionDetail.Usage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_usage.Deserialize(value["Usage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_usageHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionDetail.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConsumptionDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_classificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Classification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_classification.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_eventTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventTime.c_str(), allocator).Move(), allocator);
    }

    if (m_metricSourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricSourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_metricSourceType, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_spaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_usageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Usage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_usage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

}


ConsumptionClassification ConsumptionDetail::GetClassification() const
{
    return m_classification;
}

void ConsumptionDetail::SetClassification(const ConsumptionClassification& _classification)
{
    m_classification = _classification;
    m_classificationHasBeenSet = true;
}

bool ConsumptionDetail::ClassificationHasBeenSet() const
{
    return m_classificationHasBeenSet;
}

string ConsumptionDetail::GetEventTime() const
{
    return m_eventTime;
}

void ConsumptionDetail::SetEventTime(const string& _eventTime)
{
    m_eventTime = _eventTime;
    m_eventTimeHasBeenSet = true;
}

bool ConsumptionDetail::EventTimeHasBeenSet() const
{
    return m_eventTimeHasBeenSet;
}

int64_t ConsumptionDetail::GetMetricSourceType() const
{
    return m_metricSourceType;
}

void ConsumptionDetail::SetMetricSourceType(const int64_t& _metricSourceType)
{
    m_metricSourceType = _metricSourceType;
    m_metricSourceTypeHasBeenSet = true;
}

bool ConsumptionDetail::MetricSourceTypeHasBeenSet() const
{
    return m_metricSourceTypeHasBeenSet;
}

string ConsumptionDetail::GetName() const
{
    return m_name;
}

void ConsumptionDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ConsumptionDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ConsumptionDetail::GetSpaceName() const
{
    return m_spaceName;
}

void ConsumptionDetail::SetSpaceName(const string& _spaceName)
{
    m_spaceName = _spaceName;
    m_spaceNameHasBeenSet = true;
}

bool ConsumptionDetail::SpaceNameHasBeenSet() const
{
    return m_spaceNameHasBeenSet;
}

ConsumptionUsage ConsumptionDetail::GetUsage() const
{
    return m_usage;
}

void ConsumptionDetail::SetUsage(const ConsumptionUsage& _usage)
{
    m_usage = _usage;
    m_usageHasBeenSet = true;
}

bool ConsumptionDetail::UsageHasBeenSet() const
{
    return m_usageHasBeenSet;
}

string ConsumptionDetail::GetUserName() const
{
    return m_userName;
}

void ConsumptionDetail::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ConsumptionDetail::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

