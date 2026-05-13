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

#include <tencentcloud/csip/v20221121/model/CreateDspmApplyOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CreateDspmApplyOrderRequest::CreateDspmApplyOrderRequest() :
    m_assetIdHasBeenSet(false),
    m_applyTypeHasBeenSet(false),
    m_privilegeHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_validatePeriodHasBeenSet(false),
    m_approverUinHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_managerTypeHasBeenSet(false),
    m_subjectHasBeenSet(false)
{
}

string CreateDspmApplyOrderRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_applyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_applyType, allocator);
    }

    if (m_privilegeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Privilege";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_privilege.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_validatePeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidatePeriod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_validatePeriod, allocator);
    }

    if (m_approverUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_approverUin.begin(); itr != m_approverUin.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_managerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_managerType, allocator);
    }

    if (m_subjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Subject";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subject.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDspmApplyOrderRequest::GetAssetId() const
{
    return m_assetId;
}

void CreateDspmApplyOrderRequest::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool CreateDspmApplyOrderRequest::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

int64_t CreateDspmApplyOrderRequest::GetApplyType() const
{
    return m_applyType;
}

void CreateDspmApplyOrderRequest::SetApplyType(const int64_t& _applyType)
{
    m_applyType = _applyType;
    m_applyTypeHasBeenSet = true;
}

bool CreateDspmApplyOrderRequest::ApplyTypeHasBeenSet() const
{
    return m_applyTypeHasBeenSet;
}

DspmDbAccountPrivilege CreateDspmApplyOrderRequest::GetPrivilege() const
{
    return m_privilege;
}

void CreateDspmApplyOrderRequest::SetPrivilege(const DspmDbAccountPrivilege& _privilege)
{
    m_privilege = _privilege;
    m_privilegeHasBeenSet = true;
}

bool CreateDspmApplyOrderRequest::PrivilegeHasBeenSet() const
{
    return m_privilegeHasBeenSet;
}

string CreateDspmApplyOrderRequest::GetHost() const
{
    return m_host;
}

void CreateDspmApplyOrderRequest::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool CreateDspmApplyOrderRequest::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

int64_t CreateDspmApplyOrderRequest::GetValidatePeriod() const
{
    return m_validatePeriod;
}

void CreateDspmApplyOrderRequest::SetValidatePeriod(const int64_t& _validatePeriod)
{
    m_validatePeriod = _validatePeriod;
    m_validatePeriodHasBeenSet = true;
}

bool CreateDspmApplyOrderRequest::ValidatePeriodHasBeenSet() const
{
    return m_validatePeriodHasBeenSet;
}

vector<string> CreateDspmApplyOrderRequest::GetApproverUin() const
{
    return m_approverUin;
}

void CreateDspmApplyOrderRequest::SetApproverUin(const vector<string>& _approverUin)
{
    m_approverUin = _approverUin;
    m_approverUinHasBeenSet = true;
}

bool CreateDspmApplyOrderRequest::ApproverUinHasBeenSet() const
{
    return m_approverUinHasBeenSet;
}

string CreateDspmApplyOrderRequest::GetReason() const
{
    return m_reason;
}

void CreateDspmApplyOrderRequest::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool CreateDspmApplyOrderRequest::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

int64_t CreateDspmApplyOrderRequest::GetManagerType() const
{
    return m_managerType;
}

void CreateDspmApplyOrderRequest::SetManagerType(const int64_t& _managerType)
{
    m_managerType = _managerType;
    m_managerTypeHasBeenSet = true;
}

bool CreateDspmApplyOrderRequest::ManagerTypeHasBeenSet() const
{
    return m_managerTypeHasBeenSet;
}

string CreateDspmApplyOrderRequest::GetSubject() const
{
    return m_subject;
}

void CreateDspmApplyOrderRequest::SetSubject(const string& _subject)
{
    m_subject = _subject;
    m_subjectHasBeenSet = true;
}

bool CreateDspmApplyOrderRequest::SubjectHasBeenSet() const
{
    return m_subjectHasBeenSet;
}


