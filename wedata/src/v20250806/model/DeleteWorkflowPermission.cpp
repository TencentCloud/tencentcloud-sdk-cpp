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

#include <tencentcloud/wedata/v20250806/model/DeleteWorkflowPermission.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

DeleteWorkflowPermission::DeleteWorkflowPermission() :
    m_permissionTargetTypeHasBeenSet(false),
    m_permissionTargetIdHasBeenSet(false),
    m_permissionTypeListHasBeenSet(false)
{
}

CoreInternalOutcome DeleteWorkflowPermission::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PermissionTargetType") && !value["PermissionTargetType"].IsNull())
    {
        if (!value["PermissionTargetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteWorkflowPermission.PermissionTargetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_permissionTargetType = string(value["PermissionTargetType"].GetString());
        m_permissionTargetTypeHasBeenSet = true;
    }

    if (value.HasMember("PermissionTargetId") && !value["PermissionTargetId"].IsNull())
    {
        if (!value["PermissionTargetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteWorkflowPermission.PermissionTargetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_permissionTargetId = string(value["PermissionTargetId"].GetString());
        m_permissionTargetIdHasBeenSet = true;
    }

    if (value.HasMember("PermissionTypeList") && !value["PermissionTypeList"].IsNull())
    {
        if (!value["PermissionTypeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeleteWorkflowPermission.PermissionTypeList` is not array type"));

        const rapidjson::Value &tmpValue = value["PermissionTypeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_permissionTypeList.push_back((*itr).GetString());
        }
        m_permissionTypeListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeleteWorkflowPermission::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_permissionTargetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermissionTargetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_permissionTargetType.c_str(), allocator).Move(), allocator);
    }

    if (m_permissionTargetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermissionTargetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_permissionTargetId.c_str(), allocator).Move(), allocator);
    }

    if (m_permissionTypeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermissionTypeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_permissionTypeList.begin(); itr != m_permissionTypeList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string DeleteWorkflowPermission::GetPermissionTargetType() const
{
    return m_permissionTargetType;
}

void DeleteWorkflowPermission::SetPermissionTargetType(const string& _permissionTargetType)
{
    m_permissionTargetType = _permissionTargetType;
    m_permissionTargetTypeHasBeenSet = true;
}

bool DeleteWorkflowPermission::PermissionTargetTypeHasBeenSet() const
{
    return m_permissionTargetTypeHasBeenSet;
}

string DeleteWorkflowPermission::GetPermissionTargetId() const
{
    return m_permissionTargetId;
}

void DeleteWorkflowPermission::SetPermissionTargetId(const string& _permissionTargetId)
{
    m_permissionTargetId = _permissionTargetId;
    m_permissionTargetIdHasBeenSet = true;
}

bool DeleteWorkflowPermission::PermissionTargetIdHasBeenSet() const
{
    return m_permissionTargetIdHasBeenSet;
}

vector<string> DeleteWorkflowPermission::GetPermissionTypeList() const
{
    return m_permissionTypeList;
}

void DeleteWorkflowPermission::SetPermissionTypeList(const vector<string>& _permissionTypeList)
{
    m_permissionTypeList = _permissionTypeList;
    m_permissionTypeListHasBeenSet = true;
}

bool DeleteWorkflowPermission::PermissionTypeListHasBeenSet() const
{
    return m_permissionTypeListHasBeenSet;
}

