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

#include <tencentcloud/cam/v20190116/model/GetGroupResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace rapidjson;
using namespace std;

GetGroupResponse::GetGroupResponse() :
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_groupNumHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_userInfoHasBeenSet(false)
{
}

CoreInternalOutcome GetGroupResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("GroupId") && !rsp["GroupId"].IsNull())
    {
        if (!rsp["GroupId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `GroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = rsp["GroupId"].GetUint64();
        m_groupIdHasBeenSet = true;
    }

    if (rsp.HasMember("GroupName") && !rsp["GroupName"].IsNull())
    {
        if (!rsp["GroupName"].IsString())
        {
            return CoreInternalOutcome(Error("response `GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(rsp["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (rsp.HasMember("GroupNum") && !rsp["GroupNum"].IsNull())
    {
        if (!rsp["GroupNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `GroupNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_groupNum = rsp["GroupNum"].GetUint64();
        m_groupNumHasBeenSet = true;
    }

    if (rsp.HasMember("Remark") && !rsp["Remark"].IsNull())
    {
        if (!rsp["Remark"].IsString())
        {
            return CoreInternalOutcome(Error("response `Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(rsp["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("UserInfo") && !rsp["UserInfo"].IsNull())
    {
        if (!rsp["UserInfo"].IsArray())
            return CoreInternalOutcome(Error("response `UserInfo` is not array type"));

        const Value &tmpValue = rsp["UserInfo"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GroupMemberInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_userInfo.push_back(item);
        }
        m_userInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


uint64_t GetGroupResponse::GetGroupId() const
{
    return m_groupId;
}

bool GetGroupResponse::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string GetGroupResponse::GetGroupName() const
{
    return m_groupName;
}

bool GetGroupResponse::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

uint64_t GetGroupResponse::GetGroupNum() const
{
    return m_groupNum;
}

bool GetGroupResponse::GroupNumHasBeenSet() const
{
    return m_groupNumHasBeenSet;
}

string GetGroupResponse::GetRemark() const
{
    return m_remark;
}

bool GetGroupResponse::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string GetGroupResponse::GetCreateTime() const
{
    return m_createTime;
}

bool GetGroupResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<GroupMemberInfo> GetGroupResponse::GetUserInfo() const
{
    return m_userInfo;
}

bool GetGroupResponse::UserInfoHasBeenSet() const
{
    return m_userInfoHasBeenSet;
}


