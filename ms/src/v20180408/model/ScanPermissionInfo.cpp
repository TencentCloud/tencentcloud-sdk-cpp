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

#include <tencentcloud/ms/v20180408/model/ScanPermissionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

ScanPermissionInfo::ScanPermissionInfo() :
    m_permissionHasBeenSet(false)
{
}

CoreInternalOutcome ScanPermissionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Permission") && !value["Permission"].IsNull())
    {
        if (!value["Permission"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanPermissionInfo.Permission` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_permission = string(value["Permission"].GetString());
        m_permissionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScanPermissionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_permissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_permission.c_str(), allocator).Move(), allocator);
    }

}


string ScanPermissionInfo::GetPermission() const
{
    return m_permission;
}

void ScanPermissionInfo::SetPermission(const string& _permission)
{
    m_permission = _permission;
    m_permissionHasBeenSet = true;
}

bool ScanPermissionInfo::PermissionHasBeenSet() const
{
    return m_permissionHasBeenSet;
}

