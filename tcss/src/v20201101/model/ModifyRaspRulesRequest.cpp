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

#include <tencentcloud/tcss/v20201101/model/ModifyRaspRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ModifyRaspRulesRequest::ModifyRaspRulesRequest() :
    m_idHasBeenSet(false),
    m_vulVulsIDsHasBeenSet(false),
    m_uRLRegexpHasBeenSet(false),
    m_whiteTypeHasBeenSet(false)
{
}

string ModifyRaspRulesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_vulVulsIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulVulsIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vulVulsIDs.begin(); itr != m_vulVulsIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_uRLRegexpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URLRegexp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uRLRegexp.c_str(), allocator).Move(), allocator);
    }

    if (m_whiteTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_whiteType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyRaspRulesRequest::GetId() const
{
    return m_id;
}

void ModifyRaspRulesRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyRaspRulesRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<uint64_t> ModifyRaspRulesRequest::GetVulVulsIDs() const
{
    return m_vulVulsIDs;
}

void ModifyRaspRulesRequest::SetVulVulsIDs(const vector<uint64_t>& _vulVulsIDs)
{
    m_vulVulsIDs = _vulVulsIDs;
    m_vulVulsIDsHasBeenSet = true;
}

bool ModifyRaspRulesRequest::VulVulsIDsHasBeenSet() const
{
    return m_vulVulsIDsHasBeenSet;
}

string ModifyRaspRulesRequest::GetURLRegexp() const
{
    return m_uRLRegexp;
}

void ModifyRaspRulesRequest::SetURLRegexp(const string& _uRLRegexp)
{
    m_uRLRegexp = _uRLRegexp;
    m_uRLRegexpHasBeenSet = true;
}

bool ModifyRaspRulesRequest::URLRegexpHasBeenSet() const
{
    return m_uRLRegexpHasBeenSet;
}

uint64_t ModifyRaspRulesRequest::GetWhiteType() const
{
    return m_whiteType;
}

void ModifyRaspRulesRequest::SetWhiteType(const uint64_t& _whiteType)
{
    m_whiteType = _whiteType;
    m_whiteTypeHasBeenSet = true;
}

bool ModifyRaspRulesRequest::WhiteTypeHasBeenSet() const
{
    return m_whiteTypeHasBeenSet;
}


