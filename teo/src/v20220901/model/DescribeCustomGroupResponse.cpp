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

#include <tencentcloud/teo/v20220901/model/DescribeCustomGroupResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

DescribeCustomGroupResponse::DescribeCustomGroupResponse() :
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_groupTypeHasBeenSet(false),
    m_groupItemsHasBeenSet(false),
    m_groupItemTotalCountHasBeenSet(false),
    m_refCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCustomGroupResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("GroupType") && !rsp["GroupType"].IsNull())
    {
        if (!rsp["GroupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupType = string(rsp["GroupType"].GetString());
        m_groupTypeHasBeenSet = true;
    }

    if (rsp.HasMember("GroupItems") && !rsp["GroupItems"].IsNull())
    {
        if (!rsp["GroupItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GroupItems` is not array type"));

        const rapidjson::Value &tmpValue = rsp["GroupItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CustomGroupItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_groupItems.push_back(item);
        }
        m_groupItemsHasBeenSet = true;
    }

    if (rsp.HasMember("GroupItemTotalCount") && !rsp["GroupItemTotalCount"].IsNull())
    {
        if (!rsp["GroupItemTotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupItemTotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupItemTotalCount = rsp["GroupItemTotalCount"].GetInt64();
        m_groupItemTotalCountHasBeenSet = true;
    }

    if (rsp.HasMember("RefCount") && !rsp["RefCount"].IsNull())
    {
        if (!rsp["RefCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RefCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_refCount = rsp["RefCount"].GetInt64();
        m_refCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCustomGroupResponse::ToJsonString() const
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

    if (m_groupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupType.c_str(), allocator).Move(), allocator);
    }

    if (m_groupItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_groupItems.begin(); itr != m_groupItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_groupItemTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupItemTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupItemTotalCount, allocator);
    }

    if (m_refCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_refCount, allocator);
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


string DescribeCustomGroupResponse::GetGroupId() const
{
    return m_groupId;
}

bool DescribeCustomGroupResponse::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string DescribeCustomGroupResponse::GetGroupName() const
{
    return m_groupName;
}

bool DescribeCustomGroupResponse::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string DescribeCustomGroupResponse::GetGroupType() const
{
    return m_groupType;
}

bool DescribeCustomGroupResponse::GroupTypeHasBeenSet() const
{
    return m_groupTypeHasBeenSet;
}

vector<CustomGroupItem> DescribeCustomGroupResponse::GetGroupItems() const
{
    return m_groupItems;
}

bool DescribeCustomGroupResponse::GroupItemsHasBeenSet() const
{
    return m_groupItemsHasBeenSet;
}

int64_t DescribeCustomGroupResponse::GetGroupItemTotalCount() const
{
    return m_groupItemTotalCount;
}

bool DescribeCustomGroupResponse::GroupItemTotalCountHasBeenSet() const
{
    return m_groupItemTotalCountHasBeenSet;
}

int64_t DescribeCustomGroupResponse::GetRefCount() const
{
    return m_refCount;
}

bool DescribeCustomGroupResponse::RefCountHasBeenSet() const
{
    return m_refCountHasBeenSet;
}


