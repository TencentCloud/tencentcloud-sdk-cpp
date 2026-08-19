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

#include <tencentcloud/csip/v20221121/model/StopPreventUninstallRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

StopPreventUninstallRequest::StopPreventUninstallRequest() :
    m_stopGlobalHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_quuidHasBeenSet(false)
{
}

string StopPreventUninstallRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_stopGlobalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StopGlobal";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_stopGlobal, allocator);
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

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_quuid.begin(); itr != m_quuid.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t StopPreventUninstallRequest::GetStopGlobal() const
{
    return m_stopGlobal;
}

void StopPreventUninstallRequest::SetStopGlobal(const uint64_t& _stopGlobal)
{
    m_stopGlobal = _stopGlobal;
    m_stopGlobalHasBeenSet = true;
}

bool StopPreventUninstallRequest::StopGlobalHasBeenSet() const
{
    return m_stopGlobalHasBeenSet;
}

vector<string> StopPreventUninstallRequest::GetMemberId() const
{
    return m_memberId;
}

void StopPreventUninstallRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool StopPreventUninstallRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<string> StopPreventUninstallRequest::GetQuuid() const
{
    return m_quuid;
}

void StopPreventUninstallRequest::SetQuuid(const vector<string>& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool StopPreventUninstallRequest::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}


