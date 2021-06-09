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

#include <tencentcloud/iotvideo/v20191126/model/CreateDevTokenRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

CreateDevTokenRequest::CreateDevTokenRequest() :
    m_accessIdHasBeenSet(false),
    m_tidsHasBeenSet(false),
    m_ttlMinutesHasBeenSet(false)
{
}

string CreateDevTokenRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_accessIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessId.c_str(), allocator).Move(), allocator);
    }

    if (m_tidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tids.begin(); itr != m_tids.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ttlMinutesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TtlMinutes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ttlMinutes, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDevTokenRequest::GetAccessId() const
{
    return m_accessId;
}

void CreateDevTokenRequest::SetAccessId(const string& _accessId)
{
    m_accessId = _accessId;
    m_accessIdHasBeenSet = true;
}

bool CreateDevTokenRequest::AccessIdHasBeenSet() const
{
    return m_accessIdHasBeenSet;
}

vector<string> CreateDevTokenRequest::GetTids() const
{
    return m_tids;
}

void CreateDevTokenRequest::SetTids(const vector<string>& _tids)
{
    m_tids = _tids;
    m_tidsHasBeenSet = true;
}

bool CreateDevTokenRequest::TidsHasBeenSet() const
{
    return m_tidsHasBeenSet;
}

uint64_t CreateDevTokenRequest::GetTtlMinutes() const
{
    return m_ttlMinutes;
}

void CreateDevTokenRequest::SetTtlMinutes(const uint64_t& _ttlMinutes)
{
    m_ttlMinutes = _ttlMinutes;
    m_ttlMinutesHasBeenSet = true;
}

bool CreateDevTokenRequest::TtlMinutesHasBeenSet() const
{
    return m_ttlMinutesHasBeenSet;
}


