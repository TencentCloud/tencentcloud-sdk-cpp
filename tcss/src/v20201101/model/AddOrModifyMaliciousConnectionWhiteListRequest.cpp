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

#include <tencentcloud/tcss/v20201101/model/AddOrModifyMaliciousConnectionWhiteListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

AddOrModifyMaliciousConnectionWhiteListRequest::AddOrModifyMaliciousConnectionWhiteListRequest() :
    m_requestTypeHasBeenSet(false),
    m_whiteDomainListHasBeenSet(false),
    m_whiteIPListHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_iDHasBeenSet(false)
{
}

string AddOrModifyMaliciousConnectionWhiteListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_requestTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_requestType.c_str(), allocator).Move(), allocator);
    }

    if (m_whiteDomainListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteDomainList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_whiteDomainList.begin(); itr != m_whiteDomainList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_whiteIPListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteIPList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_whiteIPList.begin(); itr != m_whiteIPList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_iD, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddOrModifyMaliciousConnectionWhiteListRequest::GetRequestType() const
{
    return m_requestType;
}

void AddOrModifyMaliciousConnectionWhiteListRequest::SetRequestType(const string& _requestType)
{
    m_requestType = _requestType;
    m_requestTypeHasBeenSet = true;
}

bool AddOrModifyMaliciousConnectionWhiteListRequest::RequestTypeHasBeenSet() const
{
    return m_requestTypeHasBeenSet;
}

vector<string> AddOrModifyMaliciousConnectionWhiteListRequest::GetWhiteDomainList() const
{
    return m_whiteDomainList;
}

void AddOrModifyMaliciousConnectionWhiteListRequest::SetWhiteDomainList(const vector<string>& _whiteDomainList)
{
    m_whiteDomainList = _whiteDomainList;
    m_whiteDomainListHasBeenSet = true;
}

bool AddOrModifyMaliciousConnectionWhiteListRequest::WhiteDomainListHasBeenSet() const
{
    return m_whiteDomainListHasBeenSet;
}

vector<string> AddOrModifyMaliciousConnectionWhiteListRequest::GetWhiteIPList() const
{
    return m_whiteIPList;
}

void AddOrModifyMaliciousConnectionWhiteListRequest::SetWhiteIPList(const vector<string>& _whiteIPList)
{
    m_whiteIPList = _whiteIPList;
    m_whiteIPListHasBeenSet = true;
}

bool AddOrModifyMaliciousConnectionWhiteListRequest::WhiteIPListHasBeenSet() const
{
    return m_whiteIPListHasBeenSet;
}

string AddOrModifyMaliciousConnectionWhiteListRequest::GetRemark() const
{
    return m_remark;
}

void AddOrModifyMaliciousConnectionWhiteListRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool AddOrModifyMaliciousConnectionWhiteListRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

uint64_t AddOrModifyMaliciousConnectionWhiteListRequest::GetID() const
{
    return m_iD;
}

void AddOrModifyMaliciousConnectionWhiteListRequest::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool AddOrModifyMaliciousConnectionWhiteListRequest::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}


