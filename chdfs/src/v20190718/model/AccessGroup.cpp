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

#include <tencentcloud/chdfs/v20190718/model/AccessGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chdfs::V20190718::Model;
using namespace std;

AccessGroup::AccessGroup() :
    m_accessGroupIdHasBeenSet(false),
    m_accessGroupNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome AccessGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccessGroupId") && !value["AccessGroupId"].IsNull())
    {
        if (!value["AccessGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessGroup.AccessGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessGroupId = string(value["AccessGroupId"].GetString());
        m_accessGroupIdHasBeenSet = true;
    }

    if (value.HasMember("AccessGroupName") && !value["AccessGroupName"].IsNull())
    {
        if (!value["AccessGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessGroup.AccessGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessGroupName = string(value["AccessGroupName"].GetString());
        m_accessGroupNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessGroup.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessGroup.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accessGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_accessGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessGroupName.c_str(), allocator).Move(), allocator);
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

}


string AccessGroup::GetAccessGroupId() const
{
    return m_accessGroupId;
}

void AccessGroup::SetAccessGroupId(const string& _accessGroupId)
{
    m_accessGroupId = _accessGroupId;
    m_accessGroupIdHasBeenSet = true;
}

bool AccessGroup::AccessGroupIdHasBeenSet() const
{
    return m_accessGroupIdHasBeenSet;
}

string AccessGroup::GetAccessGroupName() const
{
    return m_accessGroupName;
}

void AccessGroup::SetAccessGroupName(const string& _accessGroupName)
{
    m_accessGroupName = _accessGroupName;
    m_accessGroupNameHasBeenSet = true;
}

bool AccessGroup::AccessGroupNameHasBeenSet() const
{
    return m_accessGroupNameHasBeenSet;
}

string AccessGroup::GetDescription() const
{
    return m_description;
}

void AccessGroup::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AccessGroup::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string AccessGroup::GetCreateTime() const
{
    return m_createTime;
}

void AccessGroup::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AccessGroup::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

