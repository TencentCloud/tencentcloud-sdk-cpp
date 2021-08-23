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

#include <tencentcloud/iotvideoindustry/v20201201/model/GroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

GroupInfo::GroupInfo() :
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_groupTypeHasBeenSet(false),
    m_groupPathHasBeenSet(false),
    m_parentIdHasBeenSet(false),
    m_groupDescribeHasBeenSet(false),
    m_extraInformationHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_groupStatusHasBeenSet(false),
    m_errorHasBeenSet(false)
{
}

CoreInternalOutcome GroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("GroupType") && !value["GroupType"].IsNull())
    {
        if (!value["GroupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.GroupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupType = string(value["GroupType"].GetString());
        m_groupTypeHasBeenSet = true;
    }

    if (value.HasMember("GroupPath") && !value["GroupPath"].IsNull())
    {
        if (!value["GroupPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.GroupPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupPath = string(value["GroupPath"].GetString());
        m_groupPathHasBeenSet = true;
    }

    if (value.HasMember("ParentId") && !value["ParentId"].IsNull())
    {
        if (!value["ParentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.ParentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentId = string(value["ParentId"].GetString());
        m_parentIdHasBeenSet = true;
    }

    if (value.HasMember("GroupDescribe") && !value["GroupDescribe"].IsNull())
    {
        if (!value["GroupDescribe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.GroupDescribe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupDescribe = string(value["GroupDescribe"].GetString());
        m_groupDescribeHasBeenSet = true;
    }

    if (value.HasMember("ExtraInformation") && !value["ExtraInformation"].IsNull())
    {
        if (!value["ExtraInformation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.ExtraInformation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extraInformation = string(value["ExtraInformation"].GetString());
        m_extraInformationHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("GroupStatus") && !value["GroupStatus"].IsNull())
    {
        if (!value["GroupStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.GroupStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupStatus = value["GroupStatus"].GetInt64();
        m_groupStatusHasBeenSet = true;
    }

    if (value.HasMember("Error") && !value["Error"].IsNull())
    {
        if (!value["Error"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.Error` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_error = string(value["Error"].GetString());
        m_errorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_groupPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupPath.c_str(), allocator).Move(), allocator);
    }

    if (m_parentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupDescribeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupDescribe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupDescribe.c_str(), allocator).Move(), allocator);
    }

    if (m_extraInformationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraInformation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extraInformation.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_groupStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupStatus, allocator);
    }

    if (m_errorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Error";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_error.c_str(), allocator).Move(), allocator);
    }

}


string GroupInfo::GetGroupId() const
{
    return m_groupId;
}

void GroupInfo::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool GroupInfo::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string GroupInfo::GetGroupName() const
{
    return m_groupName;
}

void GroupInfo::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool GroupInfo::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string GroupInfo::GetGroupType() const
{
    return m_groupType;
}

void GroupInfo::SetGroupType(const string& _groupType)
{
    m_groupType = _groupType;
    m_groupTypeHasBeenSet = true;
}

bool GroupInfo::GroupTypeHasBeenSet() const
{
    return m_groupTypeHasBeenSet;
}

string GroupInfo::GetGroupPath() const
{
    return m_groupPath;
}

void GroupInfo::SetGroupPath(const string& _groupPath)
{
    m_groupPath = _groupPath;
    m_groupPathHasBeenSet = true;
}

bool GroupInfo::GroupPathHasBeenSet() const
{
    return m_groupPathHasBeenSet;
}

string GroupInfo::GetParentId() const
{
    return m_parentId;
}

void GroupInfo::SetParentId(const string& _parentId)
{
    m_parentId = _parentId;
    m_parentIdHasBeenSet = true;
}

bool GroupInfo::ParentIdHasBeenSet() const
{
    return m_parentIdHasBeenSet;
}

string GroupInfo::GetGroupDescribe() const
{
    return m_groupDescribe;
}

void GroupInfo::SetGroupDescribe(const string& _groupDescribe)
{
    m_groupDescribe = _groupDescribe;
    m_groupDescribeHasBeenSet = true;
}

bool GroupInfo::GroupDescribeHasBeenSet() const
{
    return m_groupDescribeHasBeenSet;
}

string GroupInfo::GetExtraInformation() const
{
    return m_extraInformation;
}

void GroupInfo::SetExtraInformation(const string& _extraInformation)
{
    m_extraInformation = _extraInformation;
    m_extraInformationHasBeenSet = true;
}

bool GroupInfo::ExtraInformationHasBeenSet() const
{
    return m_extraInformationHasBeenSet;
}

int64_t GroupInfo::GetCreateTime() const
{
    return m_createTime;
}

void GroupInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool GroupInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t GroupInfo::GetGroupStatus() const
{
    return m_groupStatus;
}

void GroupInfo::SetGroupStatus(const int64_t& _groupStatus)
{
    m_groupStatus = _groupStatus;
    m_groupStatusHasBeenSet = true;
}

bool GroupInfo::GroupStatusHasBeenSet() const
{
    return m_groupStatusHasBeenSet;
}

string GroupInfo::GetError() const
{
    return m_error;
}

void GroupInfo::SetError(const string& _error)
{
    m_error = _error;
    m_errorHasBeenSet = true;
}

bool GroupInfo::ErrorHasBeenSet() const
{
    return m_errorHasBeenSet;
}

