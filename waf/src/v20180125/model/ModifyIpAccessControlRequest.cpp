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

#include <tencentcloud/waf/v20180125/model/ModifyIpAccessControlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ModifyIpAccessControlRequest::ModifyIpAccessControlRequest() :
    m_domainHasBeenSet(false),
    m_ipListHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_validTSHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_editionHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_noteHasBeenSet(false),
    m_jobTypeHasBeenSet(false),
    m_jobDateTimeHasBeenSet(false)
{
}

string ModifyIpAccessControlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
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

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_actionType, allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_validTSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidTS";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_validTS, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_editionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Edition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_edition.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_noteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Note";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_note.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyIpAccessControlRequest::GetDomain() const
{
    return m_domain;
}

void ModifyIpAccessControlRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifyIpAccessControlRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

vector<string> ModifyIpAccessControlRequest::GetIpList() const
{
    return m_ipList;
}

void ModifyIpAccessControlRequest::SetIpList(const vector<string>& _ipList)
{
    m_ipList = _ipList;
    m_ipListHasBeenSet = true;
}

bool ModifyIpAccessControlRequest::IpListHasBeenSet() const
{
    return m_ipListHasBeenSet;
}

int64_t ModifyIpAccessControlRequest::GetActionType() const
{
    return m_actionType;
}

void ModifyIpAccessControlRequest::SetActionType(const int64_t& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool ModifyIpAccessControlRequest::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

uint64_t ModifyIpAccessControlRequest::GetRuleId() const
{
    return m_ruleId;
}

void ModifyIpAccessControlRequest::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool ModifyIpAccessControlRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

int64_t ModifyIpAccessControlRequest::GetValidTS() const
{
    return m_validTS;
}

void ModifyIpAccessControlRequest::SetValidTS(const int64_t& _validTS)
{
    m_validTS = _validTS;
    m_validTSHasBeenSet = true;
}

bool ModifyIpAccessControlRequest::ValidTSHasBeenSet() const
{
    return m_validTSHasBeenSet;
}

string ModifyIpAccessControlRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyIpAccessControlRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyIpAccessControlRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyIpAccessControlRequest::GetEdition() const
{
    return m_edition;
}

void ModifyIpAccessControlRequest::SetEdition(const string& _edition)
{
    m_edition = _edition;
    m_editionHasBeenSet = true;
}

bool ModifyIpAccessControlRequest::EditionHasBeenSet() const
{
    return m_editionHasBeenSet;
}

string ModifyIpAccessControlRequest::GetSourceType() const
{
    return m_sourceType;
}

void ModifyIpAccessControlRequest::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool ModifyIpAccessControlRequest::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string ModifyIpAccessControlRequest::GetNote() const
{
    return m_note;
}

void ModifyIpAccessControlRequest::SetNote(const string& _note)
{
    m_note = _note;
    m_noteHasBeenSet = true;
}

bool ModifyIpAccessControlRequest::NoteHasBeenSet() const
{
    return m_noteHasBeenSet;
}

string ModifyIpAccessControlRequest::GetJobType() const
{
    return m_jobType;
}

void ModifyIpAccessControlRequest::SetJobType(const string& _jobType)
{
    m_jobType = _jobType;
    m_jobTypeHasBeenSet = true;
}

bool ModifyIpAccessControlRequest::JobTypeHasBeenSet() const
{
    return m_jobTypeHasBeenSet;
}

JobDateTime ModifyIpAccessControlRequest::GetJobDateTime() const
{
    return m_jobDateTime;
}

void ModifyIpAccessControlRequest::SetJobDateTime(const JobDateTime& _jobDateTime)
{
    m_jobDateTime = _jobDateTime;
    m_jobDateTimeHasBeenSet = true;
}

bool ModifyIpAccessControlRequest::JobDateTimeHasBeenSet() const
{
    return m_jobDateTimeHasBeenSet;
}


