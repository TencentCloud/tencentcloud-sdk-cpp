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

#include <tencentcloud/tdid/v20210519/model/QueryCPTRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

QueryCPTRequest::QueryCPTRequest() :
    m_dAPIdHasBeenSet(false),
    m_cPTIdHasBeenSet(false)
{
}

string QueryCPTRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dAPIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DAPId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dAPId, allocator);
    }

    if (m_cPTIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPTId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cPTId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t QueryCPTRequest::GetDAPId() const
{
    return m_dAPId;
}

void QueryCPTRequest::SetDAPId(const uint64_t& _dAPId)
{
    m_dAPId = _dAPId;
    m_dAPIdHasBeenSet = true;
}

bool QueryCPTRequest::DAPIdHasBeenSet() const
{
    return m_dAPIdHasBeenSet;
}

int64_t QueryCPTRequest::GetCPTId() const
{
    return m_cPTId;
}

void QueryCPTRequest::SetCPTId(const int64_t& _cPTId)
{
    m_cPTId = _cPTId;
    m_cPTIdHasBeenSet = true;
}

bool QueryCPTRequest::CPTIdHasBeenSet() const
{
    return m_cPTIdHasBeenSet;
}


