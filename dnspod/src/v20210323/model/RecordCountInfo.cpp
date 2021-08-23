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

#include <tencentcloud/dnspod/v20210323/model/RecordCountInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

RecordCountInfo::RecordCountInfo() :
    m_subdomainCountHasBeenSet(false),
    m_listCountHasBeenSet(false),
    m_totalCountHasBeenSet(false)
{
}

CoreInternalOutcome RecordCountInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubdomainCount") && !value["SubdomainCount"].IsNull())
    {
        if (!value["SubdomainCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordCountInfo.SubdomainCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_subdomainCount = value["SubdomainCount"].GetUint64();
        m_subdomainCountHasBeenSet = true;
    }

    if (value.HasMember("ListCount") && !value["ListCount"].IsNull())
    {
        if (!value["ListCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordCountInfo.ListCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_listCount = value["ListCount"].GetUint64();
        m_listCountHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordCountInfo.TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecordCountInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subdomainCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubdomainCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subdomainCount, allocator);
    }

    if (m_listCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_listCount, allocator);
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

}


uint64_t RecordCountInfo::GetSubdomainCount() const
{
    return m_subdomainCount;
}

void RecordCountInfo::SetSubdomainCount(const uint64_t& _subdomainCount)
{
    m_subdomainCount = _subdomainCount;
    m_subdomainCountHasBeenSet = true;
}

bool RecordCountInfo::SubdomainCountHasBeenSet() const
{
    return m_subdomainCountHasBeenSet;
}

uint64_t RecordCountInfo::GetListCount() const
{
    return m_listCount;
}

void RecordCountInfo::SetListCount(const uint64_t& _listCount)
{
    m_listCount = _listCount;
    m_listCountHasBeenSet = true;
}

bool RecordCountInfo::ListCountHasBeenSet() const
{
    return m_listCountHasBeenSet;
}

uint64_t RecordCountInfo::GetTotalCount() const
{
    return m_totalCount;
}

void RecordCountInfo::SetTotalCount(const uint64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool RecordCountInfo::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

