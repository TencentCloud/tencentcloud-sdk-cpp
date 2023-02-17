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

#include <tencentcloud/lcic/v20220817/model/DescribeGroupResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

DescribeGroupResponse::DescribeGroupResponse() :
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_teacherIdHasBeenSet(false),
    m_groupTypeHasBeenSet(false),
    m_subGroupIdsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeGroupResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("GroupId") && !rsp["GroupId"].IsNull())
    {
        if (!rsp["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(rsp["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (rsp.HasMember("GroupName") && !rsp["GroupName"].IsNull())
    {
        if (!rsp["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(rsp["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (rsp.HasMember("TeacherId") && !rsp["TeacherId"].IsNull())
    {
        if (!rsp["TeacherId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TeacherId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_teacherId = string(rsp["TeacherId"].GetString());
        m_teacherIdHasBeenSet = true;
    }

    if (rsp.HasMember("GroupType") && !rsp["GroupType"].IsNull())
    {
        if (!rsp["GroupType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_groupType = rsp["GroupType"].GetUint64();
        m_groupTypeHasBeenSet = true;
    }

    if (rsp.HasMember("SubGroupIds") && !rsp["SubGroupIds"].IsNull())
    {
        if (!rsp["SubGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SubGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SubGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subGroupIds.push_back((*itr).GetString());
        }
        m_subGroupIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeGroupResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_teacherIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeacherId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_teacherId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupType, allocator);
    }

    if (m_subGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subGroupIds.begin(); itr != m_subGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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


string DescribeGroupResponse::GetGroupId() const
{
    return m_groupId;
}

bool DescribeGroupResponse::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string DescribeGroupResponse::GetGroupName() const
{
    return m_groupName;
}

bool DescribeGroupResponse::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string DescribeGroupResponse::GetTeacherId() const
{
    return m_teacherId;
}

bool DescribeGroupResponse::TeacherIdHasBeenSet() const
{
    return m_teacherIdHasBeenSet;
}

uint64_t DescribeGroupResponse::GetGroupType() const
{
    return m_groupType;
}

bool DescribeGroupResponse::GroupTypeHasBeenSet() const
{
    return m_groupTypeHasBeenSet;
}

vector<string> DescribeGroupResponse::GetSubGroupIds() const
{
    return m_subGroupIds;
}

bool DescribeGroupResponse::SubGroupIdsHasBeenSet() const
{
    return m_subGroupIdsHasBeenSet;
}


