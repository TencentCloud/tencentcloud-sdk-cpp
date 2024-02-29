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

#include <tencentcloud/ccc/v20200210/model/DescribePredictiveDialingCampaignsElement.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

DescribePredictiveDialingCampaignsElement::DescribePredictiveDialingCampaignsElement() :
    m_campaignIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_calleeCountHasBeenSet(false),
    m_finishedCalleeCountHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_skillGroupIdHasBeenSet(false)
{
}

CoreInternalOutcome DescribePredictiveDialingCampaignsElement::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CampaignId") && !value["CampaignId"].IsNull())
    {
        if (!value["CampaignId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePredictiveDialingCampaignsElement.CampaignId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_campaignId = value["CampaignId"].GetInt64();
        m_campaignIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePredictiveDialingCampaignsElement.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePredictiveDialingCampaignsElement.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusReason") && !value["StatusReason"].IsNull())
    {
        if (!value["StatusReason"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePredictiveDialingCampaignsElement.StatusReason` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_statusReason = value["StatusReason"].GetInt64();
        m_statusReasonHasBeenSet = true;
    }

    if (value.HasMember("CalleeCount") && !value["CalleeCount"].IsNull())
    {
        if (!value["CalleeCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePredictiveDialingCampaignsElement.CalleeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_calleeCount = value["CalleeCount"].GetInt64();
        m_calleeCountHasBeenSet = true;
    }

    if (value.HasMember("FinishedCalleeCount") && !value["FinishedCalleeCount"].IsNull())
    {
        if (!value["FinishedCalleeCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePredictiveDialingCampaignsElement.FinishedCalleeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_finishedCalleeCount = value["FinishedCalleeCount"].GetInt64();
        m_finishedCalleeCountHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePredictiveDialingCampaignsElement.Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("SkillGroupId") && !value["SkillGroupId"].IsNull())
    {
        if (!value["SkillGroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePredictiveDialingCampaignsElement.SkillGroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_skillGroupId = value["SkillGroupId"].GetInt64();
        m_skillGroupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribePredictiveDialingCampaignsElement::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_campaignIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CampaignId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_campaignId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_statusReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statusReason, allocator);
    }

    if (m_calleeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CalleeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_calleeCount, allocator);
    }

    if (m_finishedCalleeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishedCalleeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_finishedCalleeCount, allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_skillGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_skillGroupId, allocator);
    }

}


int64_t DescribePredictiveDialingCampaignsElement::GetCampaignId() const
{
    return m_campaignId;
}

void DescribePredictiveDialingCampaignsElement::SetCampaignId(const int64_t& _campaignId)
{
    m_campaignId = _campaignId;
    m_campaignIdHasBeenSet = true;
}

bool DescribePredictiveDialingCampaignsElement::CampaignIdHasBeenSet() const
{
    return m_campaignIdHasBeenSet;
}

string DescribePredictiveDialingCampaignsElement::GetName() const
{
    return m_name;
}

void DescribePredictiveDialingCampaignsElement::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribePredictiveDialingCampaignsElement::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t DescribePredictiveDialingCampaignsElement::GetStatus() const
{
    return m_status;
}

void DescribePredictiveDialingCampaignsElement::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribePredictiveDialingCampaignsElement::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribePredictiveDialingCampaignsElement::GetStatusReason() const
{
    return m_statusReason;
}

void DescribePredictiveDialingCampaignsElement::SetStatusReason(const int64_t& _statusReason)
{
    m_statusReason = _statusReason;
    m_statusReasonHasBeenSet = true;
}

bool DescribePredictiveDialingCampaignsElement::StatusReasonHasBeenSet() const
{
    return m_statusReasonHasBeenSet;
}

int64_t DescribePredictiveDialingCampaignsElement::GetCalleeCount() const
{
    return m_calleeCount;
}

void DescribePredictiveDialingCampaignsElement::SetCalleeCount(const int64_t& _calleeCount)
{
    m_calleeCount = _calleeCount;
    m_calleeCountHasBeenSet = true;
}

bool DescribePredictiveDialingCampaignsElement::CalleeCountHasBeenSet() const
{
    return m_calleeCountHasBeenSet;
}

int64_t DescribePredictiveDialingCampaignsElement::GetFinishedCalleeCount() const
{
    return m_finishedCalleeCount;
}

void DescribePredictiveDialingCampaignsElement::SetFinishedCalleeCount(const int64_t& _finishedCalleeCount)
{
    m_finishedCalleeCount = _finishedCalleeCount;
    m_finishedCalleeCountHasBeenSet = true;
}

bool DescribePredictiveDialingCampaignsElement::FinishedCalleeCountHasBeenSet() const
{
    return m_finishedCalleeCountHasBeenSet;
}

int64_t DescribePredictiveDialingCampaignsElement::GetPriority() const
{
    return m_priority;
}

void DescribePredictiveDialingCampaignsElement::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool DescribePredictiveDialingCampaignsElement::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

int64_t DescribePredictiveDialingCampaignsElement::GetSkillGroupId() const
{
    return m_skillGroupId;
}

void DescribePredictiveDialingCampaignsElement::SetSkillGroupId(const int64_t& _skillGroupId)
{
    m_skillGroupId = _skillGroupId;
    m_skillGroupIdHasBeenSet = true;
}

bool DescribePredictiveDialingCampaignsElement::SkillGroupIdHasBeenSet() const
{
    return m_skillGroupIdHasBeenSet;
}

