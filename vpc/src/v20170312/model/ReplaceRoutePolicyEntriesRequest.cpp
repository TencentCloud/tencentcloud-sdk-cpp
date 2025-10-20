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

#include <tencentcloud/vpc/v20170312/model/ReplaceRoutePolicyEntriesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ReplaceRoutePolicyEntriesRequest::ReplaceRoutePolicyEntriesRequest() :
    m_routePolicyIdHasBeenSet(false),
    m_routePolicyEntrySetHasBeenSet(false)
{
}

string ReplaceRoutePolicyEntriesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_routePolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutePolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_routePolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_routePolicyEntrySetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutePolicyEntrySet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_routePolicyEntrySet.begin(); itr != m_routePolicyEntrySet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ReplaceRoutePolicyEntriesRequest::GetRoutePolicyId() const
{
    return m_routePolicyId;
}

void ReplaceRoutePolicyEntriesRequest::SetRoutePolicyId(const string& _routePolicyId)
{
    m_routePolicyId = _routePolicyId;
    m_routePolicyIdHasBeenSet = true;
}

bool ReplaceRoutePolicyEntriesRequest::RoutePolicyIdHasBeenSet() const
{
    return m_routePolicyIdHasBeenSet;
}

vector<RoutePolicyEntry> ReplaceRoutePolicyEntriesRequest::GetRoutePolicyEntrySet() const
{
    return m_routePolicyEntrySet;
}

void ReplaceRoutePolicyEntriesRequest::SetRoutePolicyEntrySet(const vector<RoutePolicyEntry>& _routePolicyEntrySet)
{
    m_routePolicyEntrySet = _routePolicyEntrySet;
    m_routePolicyEntrySetHasBeenSet = true;
}

bool ReplaceRoutePolicyEntriesRequest::RoutePolicyEntrySetHasBeenSet() const
{
    return m_routePolicyEntrySetHasBeenSet;
}


