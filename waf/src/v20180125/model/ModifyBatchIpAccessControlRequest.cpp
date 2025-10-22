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

#include <tencentcloud/waf/v20180125/model/ModifyBatchIpAccessControlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ModifyBatchIpAccessControlRequest::ModifyBatchIpAccessControlRequest() :
    m_ruleIdHasBeenSet(false),
    m_ipListHasBeenSet(false),
    m_jobTypeHasBeenSet(false),
    m_jobDateTimeHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_groupIdsHasBeenSet(false),
    m_domainsHasBeenSet(false),
    m_noteHasBeenSet(false)
{
}

string ModifyBatchIpAccessControlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_ipListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipList.begin(); itr != m_ipList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_jobTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobType.c_str(), allocator).Move(), allocator);
    }

    if (m_jobDateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobDateTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_jobDateTime.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_actionType, allocator);
    }

    if (m_groupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupIds.begin(); itr != m_groupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_domainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domains";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_domains.begin(); itr != m_domains.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_noteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Note";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_note.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyBatchIpAccessControlRequest::GetRuleId() const
{
    return m_ruleId;
}

void ModifyBatchIpAccessControlRequest::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool ModifyBatchIpAccessControlRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

vector<string> ModifyBatchIpAccessControlRequest::GetIpList() const
{
    return m_ipList;
}

void ModifyBatchIpAccessControlRequest::SetIpList(const vector<string>& _ipList)
{
    m_ipList = _ipList;
    m_ipListHasBeenSet = true;
}

bool ModifyBatchIpAccessControlRequest::IpListHasBeenSet() const
{
    return m_ipListHasBeenSet;
}

string ModifyBatchIpAccessControlRequest::GetJobType() const
{
    return m_jobType;
}

void ModifyBatchIpAccessControlRequest::SetJobType(const string& _jobType)
{
    m_jobType = _jobType;
    m_jobTypeHasBeenSet = true;
}

bool ModifyBatchIpAccessControlRequest::JobTypeHasBeenSet() const
{
    return m_jobTypeHasBeenSet;
}

JobDateTime ModifyBatchIpAccessControlRequest::GetJobDateTime() const
{
    return m_jobDateTime;
}

void ModifyBatchIpAccessControlRequest::SetJobDateTime(const JobDateTime& _jobDateTime)
{
    m_jobDateTime = _jobDateTime;
    m_jobDateTimeHasBeenSet = true;
}

bool ModifyBatchIpAccessControlRequest::JobDateTimeHasBeenSet() const
{
    return m_jobDateTimeHasBeenSet;
}

int64_t ModifyBatchIpAccessControlRequest::GetActionType() const
{
    return m_actionType;
}

void ModifyBatchIpAccessControlRequest::SetActionType(const int64_t& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool ModifyBatchIpAccessControlRequest::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

vector<uint64_t> ModifyBatchIpAccessControlRequest::GetGroupIds() const
{
    return m_groupIds;
}

void ModifyBatchIpAccessControlRequest::SetGroupIds(const vector<uint64_t>& _groupIds)
{
    m_groupIds = _groupIds;
    m_groupIdsHasBeenSet = true;
}

bool ModifyBatchIpAccessControlRequest::GroupIdsHasBeenSet() const
{
    return m_groupIdsHasBeenSet;
}

vector<string> ModifyBatchIpAccessControlRequest::GetDomains() const
{
    return m_domains;
}

void ModifyBatchIpAccessControlRequest::SetDomains(const vector<string>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool ModifyBatchIpAccessControlRequest::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}

string ModifyBatchIpAccessControlRequest::GetNote() const
{
    return m_note;
}

void ModifyBatchIpAccessControlRequest::SetNote(const string& _note)
{
    m_note = _note;
    m_noteHasBeenSet = true;
}

bool ModifyBatchIpAccessControlRequest::NoteHasBeenSet() const
{
    return m_noteHasBeenSet;
}


