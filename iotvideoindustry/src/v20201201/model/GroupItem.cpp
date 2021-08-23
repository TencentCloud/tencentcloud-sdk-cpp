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

#include <tencentcloud/iotvideoindustry/v20201201/model/GroupItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

GroupItem::GroupItem() :
    m_groupNameHasBeenSet(false),
    m_parentIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupPathHasBeenSet(false),
    m_groupDescribeHasBeenSet(false),
    m_deviceNumHasBeenSet(false),
    m_subGroupNumHasBeenSet(false),
    m_extraInformationHasBeenSet(false),
    m_groupTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_groupStatusHasBeenSet(false)
{
}

CoreInternalOutcome GroupItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupItem.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("ParentId") && !value["ParentId"].IsNull())
    {
        if (!value["ParentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupItem.ParentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentId = string(value["ParentId"].GetString());
        m_parentIdHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupItem.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupPath") && !value["GroupPath"].IsNull())
    {
        if (!value["GroupPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupItem.GroupPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupPath = string(value["GroupPath"].GetString());
        m_groupPathHasBeenSet = true;
    }

    if (value.HasMember("GroupDescribe") && !value["GroupDescribe"].IsNull())
    {
        if (!value["GroupDescribe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupItem.GroupDescribe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupDescribe = string(value["GroupDescribe"].GetString());
        m_groupDescribeHasBeenSet = true;
    }

    if (value.HasMember("DeviceNum") && !value["DeviceNum"].IsNull())
    {
        if (!value["DeviceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupItem.DeviceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deviceNum = value["DeviceNum"].GetInt64();
        m_deviceNumHasBeenSet = true;
    }

    if (value.HasMember("SubGroupNum") && !value["SubGroupNum"].IsNull())
    {
        if (!value["SubGroupNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupItem.SubGroupNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subGroupNum = value["SubGroupNum"].GetInt64();
        m_subGroupNumHasBeenSet = true;
    }

    if (value.HasMember("ExtraInformation") && !value["ExtraInformation"].IsNull())
    {
        if (!value["ExtraInformation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupItem.ExtraInformation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extraInformation = string(value["ExtraInformation"].GetString());
        m_extraInformationHasBeenSet = true;
    }

    if (value.HasMember("GroupType") && !value["GroupType"].IsNull())
    {
        if (!value["GroupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupItem.GroupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupType = string(value["GroupType"].GetString());
        m_groupTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupItem.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("GroupStatus") && !value["GroupStatus"].IsNull())
    {
        if (!value["GroupStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupItem.GroupStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupStatus = value["GroupStatus"].GetInt64();
        m_groupStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GroupItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_parentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupPath.c_str(), allocator).Move(), allocator);
    }

    if (m_groupDescribeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupDescribe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupDescribe.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deviceNum, allocator);
    }

    if (m_subGroupNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubGroupNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subGroupNum, allocator);
    }

    if (m_extraInformationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraInformation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extraInformation.c_str(), allocator).Move(), allocator);
    }

    if (m_groupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupType.c_str(), allocator).Move(), allocator);
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

}


string GroupItem::GetGroupName() const
{
    return m_groupName;
}

void GroupItem::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool GroupItem::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string GroupItem::GetParentId() const
{
    return m_parentId;
}

void GroupItem::SetParentId(const string& _parentId)
{
    m_parentId = _parentId;
    m_parentIdHasBeenSet = true;
}

bool GroupItem::ParentIdHasBeenSet() const
{
    return m_parentIdHasBeenSet;
}

string GroupItem::GetGroupId() const
{
    return m_groupId;
}

void GroupItem::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool GroupItem::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string GroupItem::GetGroupPath() const
{
    return m_groupPath;
}

void GroupItem::SetGroupPath(const string& _groupPath)
{
    m_groupPath = _groupPath;
    m_groupPathHasBeenSet = true;
}

bool GroupItem::GroupPathHasBeenSet() const
{
    return m_groupPathHasBeenSet;
}

string GroupItem::GetGroupDescribe() const
{
    return m_groupDescribe;
}

void GroupItem::SetGroupDescribe(const string& _groupDescribe)
{
    m_groupDescribe = _groupDescribe;
    m_groupDescribeHasBeenSet = true;
}

bool GroupItem::GroupDescribeHasBeenSet() const
{
    return m_groupDescribeHasBeenSet;
}

int64_t GroupItem::GetDeviceNum() const
{
    return m_deviceNum;
}

void GroupItem::SetDeviceNum(const int64_t& _deviceNum)
{
    m_deviceNum = _deviceNum;
    m_deviceNumHasBeenSet = true;
}

bool GroupItem::DeviceNumHasBeenSet() const
{
    return m_deviceNumHasBeenSet;
}

int64_t GroupItem::GetSubGroupNum() const
{
    return m_subGroupNum;
}

void GroupItem::SetSubGroupNum(const int64_t& _subGroupNum)
{
    m_subGroupNum = _subGroupNum;
    m_subGroupNumHasBeenSet = true;
}

bool GroupItem::SubGroupNumHasBeenSet() const
{
    return m_subGroupNumHasBeenSet;
}

string GroupItem::GetExtraInformation() const
{
    return m_extraInformation;
}

void GroupItem::SetExtraInformation(const string& _extraInformation)
{
    m_extraInformation = _extraInformation;
    m_extraInformationHasBeenSet = true;
}

bool GroupItem::ExtraInformationHasBeenSet() const
{
    return m_extraInformationHasBeenSet;
}

string GroupItem::GetGroupType() const
{
    return m_groupType;
}

void GroupItem::SetGroupType(const string& _groupType)
{
    m_groupType = _groupType;
    m_groupTypeHasBeenSet = true;
}

bool GroupItem::GroupTypeHasBeenSet() const
{
    return m_groupTypeHasBeenSet;
}

int64_t GroupItem::GetCreateTime() const
{
    return m_createTime;
}

void GroupItem::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool GroupItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t GroupItem::GetGroupStatus() const
{
    return m_groupStatus;
}

void GroupItem::SetGroupStatus(const int64_t& _groupStatus)
{
    m_groupStatus = _groupStatus;
    m_groupStatusHasBeenSet = true;
}

bool GroupItem::GroupStatusHasBeenSet() const
{
    return m_groupStatusHasBeenSet;
}

