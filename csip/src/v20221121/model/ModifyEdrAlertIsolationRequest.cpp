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

#include <tencentcloud/csip/v20221121/model/ModifyEdrAlertIsolationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyEdrAlertIsolationRequest::ModifyEdrAlertIsolationRequest() :
    m_targetsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_killProcessHasBeenSet(false)
{
}

string ModifyEdrAlertIsolationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_targetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Targets";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_targets.begin(); itr != m_targets.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_killProcessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KillProcess";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_killProcess, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<EdrAlertTarget> ModifyEdrAlertIsolationRequest::GetTargets() const
{
    return m_targets;
}

void ModifyEdrAlertIsolationRequest::SetTargets(const vector<EdrAlertTarget>& _targets)
{
    m_targets = _targets;
    m_targetsHasBeenSet = true;
}

bool ModifyEdrAlertIsolationRequest::TargetsHasBeenSet() const
{
    return m_targetsHasBeenSet;
}

string ModifyEdrAlertIsolationRequest::GetStatus() const
{
    return m_status;
}

void ModifyEdrAlertIsolationRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyEdrAlertIsolationRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> ModifyEdrAlertIsolationRequest::GetMemberId() const
{
    return m_memberId;
}

void ModifyEdrAlertIsolationRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ModifyEdrAlertIsolationRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

bool ModifyEdrAlertIsolationRequest::GetKillProcess() const
{
    return m_killProcess;
}

void ModifyEdrAlertIsolationRequest::SetKillProcess(const bool& _killProcess)
{
    m_killProcess = _killProcess;
    m_killProcessHasBeenSet = true;
}

bool ModifyEdrAlertIsolationRequest::KillProcessHasBeenSet() const
{
    return m_killProcessHasBeenSet;
}


