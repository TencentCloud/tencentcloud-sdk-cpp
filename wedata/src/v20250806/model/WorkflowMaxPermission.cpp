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

#include <tencentcloud/wedata/v20250806/model/WorkflowMaxPermission.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

WorkflowMaxPermission::WorkflowMaxPermission() :
    m_permissionTypeHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowMaxPermission::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PermissionType") && !value["PermissionType"].IsNull())
    {
        if (!value["PermissionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowMaxPermission.PermissionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_permissionType = string(value["PermissionType"].GetString());
        m_permissionTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowMaxPermission::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_permissionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermissionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_permissionType.c_str(), allocator).Move(), allocator);
    }

}


string WorkflowMaxPermission::GetPermissionType() const
{
    return m_permissionType;
}

void WorkflowMaxPermission::SetPermissionType(const string& _permissionType)
{
    m_permissionType = _permissionType;
    m_permissionTypeHasBeenSet = true;
}

bool WorkflowMaxPermission::PermissionTypeHasBeenSet() const
{
    return m_permissionTypeHasBeenSet;
}

