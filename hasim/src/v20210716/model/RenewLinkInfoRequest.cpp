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

#include <tencentcloud/hasim/v20210716/model/RenewLinkInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Hasim::V20210716::Model;
using namespace std;

RenewLinkInfoRequest::RenewLinkInfoRequest() :
    m_linkIDHasBeenSet(false),
    m_uinAccountHasBeenSet(false)
{
}

string RenewLinkInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_linkIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinkID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_linkID, allocator);
    }

    if (m_uinAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UinAccount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uinAccount.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t RenewLinkInfoRequest::GetLinkID() const
{
    return m_linkID;
}

void RenewLinkInfoRequest::SetLinkID(const int64_t& _linkID)
{
    m_linkID = _linkID;
    m_linkIDHasBeenSet = true;
}

bool RenewLinkInfoRequest::LinkIDHasBeenSet() const
{
    return m_linkIDHasBeenSet;
}

string RenewLinkInfoRequest::GetUinAccount() const
{
    return m_uinAccount;
}

void RenewLinkInfoRequest::SetUinAccount(const string& _uinAccount)
{
    m_uinAccount = _uinAccount;
    m_uinAccountHasBeenSet = true;
}

bool RenewLinkInfoRequest::UinAccountHasBeenSet() const
{
    return m_uinAccountHasBeenSet;
}


