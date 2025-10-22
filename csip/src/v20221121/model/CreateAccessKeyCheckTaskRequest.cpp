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

#include <tencentcloud/csip/v20221121/model/CreateAccessKeyCheckTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CreateAccessKeyCheckTaskRequest::CreateAccessKeyCheckTaskRequest() :
    m_memberIdHasBeenSet(false),
    m_riskIDListHasBeenSet(false),
    m_accessKeyListHasBeenSet(false),
    m_subUinListHasBeenSet(false),
    m_riskRuleIDListHasBeenSet(false)
{
}

string CreateAccessKeyCheckTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_riskIDListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskIDList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_riskIDList.begin(); itr != m_riskIDList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_accessKeyListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKeyList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_accessKeyList.begin(); itr != m_accessKeyList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_subUinListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubUinList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subUinList.begin(); itr != m_subUinList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_riskRuleIDListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskRuleIDList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_riskRuleIDList.begin(); itr != m_riskRuleIDList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> CreateAccessKeyCheckTaskRequest::GetMemberId() const
{
    return m_memberId;
}

void CreateAccessKeyCheckTaskRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool CreateAccessKeyCheckTaskRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<int64_t> CreateAccessKeyCheckTaskRequest::GetRiskIDList() const
{
    return m_riskIDList;
}

void CreateAccessKeyCheckTaskRequest::SetRiskIDList(const vector<int64_t>& _riskIDList)
{
    m_riskIDList = _riskIDList;
    m_riskIDListHasBeenSet = true;
}

bool CreateAccessKeyCheckTaskRequest::RiskIDListHasBeenSet() const
{
    return m_riskIDListHasBeenSet;
}

vector<string> CreateAccessKeyCheckTaskRequest::GetAccessKeyList() const
{
    return m_accessKeyList;
}

void CreateAccessKeyCheckTaskRequest::SetAccessKeyList(const vector<string>& _accessKeyList)
{
    m_accessKeyList = _accessKeyList;
    m_accessKeyListHasBeenSet = true;
}

bool CreateAccessKeyCheckTaskRequest::AccessKeyListHasBeenSet() const
{
    return m_accessKeyListHasBeenSet;
}

vector<string> CreateAccessKeyCheckTaskRequest::GetSubUinList() const
{
    return m_subUinList;
}

void CreateAccessKeyCheckTaskRequest::SetSubUinList(const vector<string>& _subUinList)
{
    m_subUinList = _subUinList;
    m_subUinListHasBeenSet = true;
}

bool CreateAccessKeyCheckTaskRequest::SubUinListHasBeenSet() const
{
    return m_subUinListHasBeenSet;
}

vector<int64_t> CreateAccessKeyCheckTaskRequest::GetRiskRuleIDList() const
{
    return m_riskRuleIDList;
}

void CreateAccessKeyCheckTaskRequest::SetRiskRuleIDList(const vector<int64_t>& _riskRuleIDList)
{
    m_riskRuleIDList = _riskRuleIDList;
    m_riskRuleIDListHasBeenSet = true;
}

bool CreateAccessKeyCheckTaskRequest::RiskRuleIDListHasBeenSet() const
{
    return m_riskRuleIDListHasBeenSet;
}


