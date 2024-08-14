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

#include <tencentcloud/organization/v20210331/model/ListGroupMembersResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

ListGroupMembersResponse::ListGroupMembersResponse() :
    m_nextTokenHasBeenSet(false),
    m_totalCountsHasBeenSet(false),
    m_maxResultsHasBeenSet(false),
    m_isTruncatedHasBeenSet(false),
    m_groupMembersHasBeenSet(false)
{
}

CoreInternalOutcome ListGroupMembersResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("NextToken") && !rsp["NextToken"].IsNull())
    {
        if (!rsp["NextToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NextToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextToken = string(rsp["NextToken"].GetString());
        m_nextTokenHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCounts") && !rsp["TotalCounts"].IsNull())
    {
        if (!rsp["TotalCounts"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCounts` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCounts = rsp["TotalCounts"].GetInt64();
        m_totalCountsHasBeenSet = true;
    }

    if (rsp.HasMember("MaxResults") && !rsp["MaxResults"].IsNull())
    {
        if (!rsp["MaxResults"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxResults` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxResults = rsp["MaxResults"].GetInt64();
        m_maxResultsHasBeenSet = true;
    }

    if (rsp.HasMember("IsTruncated") && !rsp["IsTruncated"].IsNull())
    {
        if (!rsp["IsTruncated"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsTruncated` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isTruncated = rsp["IsTruncated"].GetBool();
        m_isTruncatedHasBeenSet = true;
    }

    if (rsp.HasMember("GroupMembers") && !rsp["GroupMembers"].IsNull())
    {
        if (!rsp["GroupMembers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GroupMembers` is not array type"));

        const rapidjson::Value &tmpValue = rsp["GroupMembers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GroupMembers item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_groupMembers.push_back(item);
        }
        m_groupMembersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ListGroupMembersResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_nextTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextToken.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCounts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCounts, allocator);
    }

    if (m_maxResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxResults, allocator);
    }

    if (m_isTruncatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsTruncated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isTruncated, allocator);
    }

    if (m_groupMembersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupMembers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_groupMembers.begin(); itr != m_groupMembers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string ListGroupMembersResponse::GetNextToken() const
{
    return m_nextToken;
}

bool ListGroupMembersResponse::NextTokenHasBeenSet() const
{
    return m_nextTokenHasBeenSet;
}

int64_t ListGroupMembersResponse::GetTotalCounts() const
{
    return m_totalCounts;
}

bool ListGroupMembersResponse::TotalCountsHasBeenSet() const
{
    return m_totalCountsHasBeenSet;
}

int64_t ListGroupMembersResponse::GetMaxResults() const
{
    return m_maxResults;
}

bool ListGroupMembersResponse::MaxResultsHasBeenSet() const
{
    return m_maxResultsHasBeenSet;
}

bool ListGroupMembersResponse::GetIsTruncated() const
{
    return m_isTruncated;
}

bool ListGroupMembersResponse::IsTruncatedHasBeenSet() const
{
    return m_isTruncatedHasBeenSet;
}

vector<GroupMembers> ListGroupMembersResponse::GetGroupMembers() const
{
    return m_groupMembers;
}

bool ListGroupMembersResponse::GroupMembersHasBeenSet() const
{
    return m_groupMembersHasBeenSet;
}


