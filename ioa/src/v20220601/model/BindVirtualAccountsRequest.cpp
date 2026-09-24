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

#include <tencentcloud/ioa/v20220601/model/BindVirtualAccountsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

BindVirtualAccountsRequest::BindVirtualAccountsRequest() :
    m_virtualGroupIdHasBeenSet(false),
    m_accountIdListHasBeenSet(false),
    m_accountUserListHasBeenSet(false),
    m_domainInstanceIdHasBeenSet(false)
{
}

string BindVirtualAccountsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_virtualGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_virtualGroupId, allocator);
    }

    if (m_accountIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_accountIdList.begin(); itr != m_accountIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_accountUserListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountUserList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_accountUserList.begin(); itr != m_accountUserList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_domainInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainInstanceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t BindVirtualAccountsRequest::GetVirtualGroupId() const
{
    return m_virtualGroupId;
}

void BindVirtualAccountsRequest::SetVirtualGroupId(const int64_t& _virtualGroupId)
{
    m_virtualGroupId = _virtualGroupId;
    m_virtualGroupIdHasBeenSet = true;
}

bool BindVirtualAccountsRequest::VirtualGroupIdHasBeenSet() const
{
    return m_virtualGroupIdHasBeenSet;
}

vector<int64_t> BindVirtualAccountsRequest::GetAccountIdList() const
{
    return m_accountIdList;
}

void BindVirtualAccountsRequest::SetAccountIdList(const vector<int64_t>& _accountIdList)
{
    m_accountIdList = _accountIdList;
    m_accountIdListHasBeenSet = true;
}

bool BindVirtualAccountsRequest::AccountIdListHasBeenSet() const
{
    return m_accountIdListHasBeenSet;
}

vector<AccountUserIdItem> BindVirtualAccountsRequest::GetAccountUserList() const
{
    return m_accountUserList;
}

void BindVirtualAccountsRequest::SetAccountUserList(const vector<AccountUserIdItem>& _accountUserList)
{
    m_accountUserList = _accountUserList;
    m_accountUserListHasBeenSet = true;
}

bool BindVirtualAccountsRequest::AccountUserListHasBeenSet() const
{
    return m_accountUserListHasBeenSet;
}

string BindVirtualAccountsRequest::GetDomainInstanceId() const
{
    return m_domainInstanceId;
}

void BindVirtualAccountsRequest::SetDomainInstanceId(const string& _domainInstanceId)
{
    m_domainInstanceId = _domainInstanceId;
    m_domainInstanceIdHasBeenSet = true;
}

bool BindVirtualAccountsRequest::DomainInstanceIdHasBeenSet() const
{
    return m_domainInstanceIdHasBeenSet;
}


