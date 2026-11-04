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

#include <tencentcloud/tione/v20211111/model/DescribeWorkspaceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

DescribeWorkspaceResponse::DescribeWorkspaceResponse() :
    m_tiProjectIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_runningTasksHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_ownedRolesHasBeenSet(false),
    m_memberInfoHasBeenSet(false)
{
}

CoreInternalOutcome DescribeWorkspaceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TiProjectId") && !rsp["TiProjectId"].IsNull())
    {
        if (!rsp["TiProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TiProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tiProjectId = string(rsp["TiProjectId"].GetString());
        m_tiProjectIdHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("RunningTasks") && !rsp["RunningTasks"].IsNull())
    {
        if (!rsp["RunningTasks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RunningTasks` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RunningTasks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WorkspaceTaskInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_runningTasks.push_back(item);
        }
        m_runningTasksHasBeenSet = true;
    }

    if (rsp.HasMember("Creator") && !rsp["Creator"].IsNull())
    {
        if (!rsp["Creator"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Creator` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_creator.Deserialize(rsp["Creator"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_creatorHasBeenSet = true;
    }

    if (rsp.HasMember("OwnedRoles") && !rsp["OwnedRoles"].IsNull())
    {
        if (!rsp["OwnedRoles"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OwnedRoles` is not array type"));

        const rapidjson::Value &tmpValue = rsp["OwnedRoles"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RoleBriefInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ownedRoles.push_back(item);
        }
        m_ownedRolesHasBeenSet = true;
    }

    if (rsp.HasMember("MemberInfo") && !rsp["MemberInfo"].IsNull())
    {
        if (!rsp["MemberInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MemberInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_memberInfo.Deserialize(rsp["MemberInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_memberInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeWorkspaceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_tiProjectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TiProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tiProjectId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_runningTasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningTasks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_runningTasks.begin(); itr != m_runningTasks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_creator.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ownedRolesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnedRoles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ownedRoles.begin(); itr != m_ownedRoles.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_memberInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_memberInfo.ToJsonObject(value[key.c_str()], allocator);
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


string DescribeWorkspaceResponse::GetTiProjectId() const
{
    return m_tiProjectId;
}

bool DescribeWorkspaceResponse::TiProjectIdHasBeenSet() const
{
    return m_tiProjectIdHasBeenSet;
}

string DescribeWorkspaceResponse::GetName() const
{
    return m_name;
}

bool DescribeWorkspaceResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeWorkspaceResponse::GetDescription() const
{
    return m_description;
}

bool DescribeWorkspaceResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DescribeWorkspaceResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeWorkspaceResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<WorkspaceTaskInfo> DescribeWorkspaceResponse::GetRunningTasks() const
{
    return m_runningTasks;
}

bool DescribeWorkspaceResponse::RunningTasksHasBeenSet() const
{
    return m_runningTasksHasBeenSet;
}

UserBriefInfo DescribeWorkspaceResponse::GetCreator() const
{
    return m_creator;
}

bool DescribeWorkspaceResponse::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

vector<RoleBriefInfo> DescribeWorkspaceResponse::GetOwnedRoles() const
{
    return m_ownedRoles;
}

bool DescribeWorkspaceResponse::OwnedRolesHasBeenSet() const
{
    return m_ownedRolesHasBeenSet;
}

MemberInfo DescribeWorkspaceResponse::GetMemberInfo() const
{
    return m_memberInfo;
}

bool DescribeWorkspaceResponse::MemberInfoHasBeenSet() const
{
    return m_memberInfoHasBeenSet;
}


