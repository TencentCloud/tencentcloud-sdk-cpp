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

#include <tencentcloud/eiam/v20210420/model/ListUserGroupsOfUserResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

ListUserGroupsOfUserResponse::ListUserGroupsOfUserResponse() :
    m_userGroupIdsHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userGroupInfoListHasBeenSet(false),
    m_totalCountHasBeenSet(false)
{
}

CoreInternalOutcome ListUserGroupsOfUserResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("UserGroupIds") && !rsp["UserGroupIds"].IsNull())
    {
        if (!rsp["UserGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["UserGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_userGroupIds.push_back((*itr).GetString());
        }
        m_userGroupIdsHasBeenSet = true;
    }

    if (rsp.HasMember("UserId") && !rsp["UserId"].IsNull())
    {
        if (!rsp["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(rsp["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (rsp.HasMember("UserGroupInfoList") && !rsp["UserGroupInfoList"].IsNull())
    {
        if (!rsp["UserGroupInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserGroupInfoList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["UserGroupInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UserGroupInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_userGroupInfoList.push_back(item);
        }
        m_userGroupInfoListHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ListUserGroupsOfUserResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_userGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_userGroupIds.begin(); itr != m_userGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_userGroupInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroupInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_userGroupInfoList.begin(); itr != m_userGroupInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
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


vector<string> ListUserGroupsOfUserResponse::GetUserGroupIds() const
{
    return m_userGroupIds;
}

bool ListUserGroupsOfUserResponse::UserGroupIdsHasBeenSet() const
{
    return m_userGroupIdsHasBeenSet;
}

string ListUserGroupsOfUserResponse::GetUserId() const
{
    return m_userId;
}

bool ListUserGroupsOfUserResponse::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

vector<UserGroupInfo> ListUserGroupsOfUserResponse::GetUserGroupInfoList() const
{
    return m_userGroupInfoList;
}

bool ListUserGroupsOfUserResponse::UserGroupInfoListHasBeenSet() const
{
    return m_userGroupInfoListHasBeenSet;
}

uint64_t ListUserGroupsOfUserResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool ListUserGroupsOfUserResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}


