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

#include <tencentcloud/cwp/v20180228/model/AssetWebLocationPath.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

AssetWebLocationPath::AssetWebLocationPath() :
    m_virtualPathHasBeenSet(false),
    m_realPathHasBeenSet(false),
    m_userHasBeenSet(false),
    m_groupHasBeenSet(false),
    m_permissionHasBeenSet(false)
{
}

CoreInternalOutcome AssetWebLocationPath::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VirtualPath") && !value["VirtualPath"].IsNull())
    {
        if (!value["VirtualPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebLocationPath.VirtualPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virtualPath = string(value["VirtualPath"].GetString());
        m_virtualPathHasBeenSet = true;
    }

    if (value.HasMember("RealPath") && !value["RealPath"].IsNull())
    {
        if (!value["RealPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebLocationPath.RealPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realPath = string(value["RealPath"].GetString());
        m_realPathHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebLocationPath.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("Group") && !value["Group"].IsNull())
    {
        if (!value["Group"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebLocationPath.Group` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_group = string(value["Group"].GetString());
        m_groupHasBeenSet = true;
    }

    if (value.HasMember("Permission") && !value["Permission"].IsNull())
    {
        if (!value["Permission"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebLocationPath.Permission` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_permission = string(value["Permission"].GetString());
        m_permissionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetWebLocationPath::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_virtualPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virtualPath.c_str(), allocator).Move(), allocator);
    }

    if (m_realPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realPath.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_groupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Group";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_group.c_str(), allocator).Move(), allocator);
    }

    if (m_permissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_permission.c_str(), allocator).Move(), allocator);
    }

}


string AssetWebLocationPath::GetVirtualPath() const
{
    return m_virtualPath;
}

void AssetWebLocationPath::SetVirtualPath(const string& _virtualPath)
{
    m_virtualPath = _virtualPath;
    m_virtualPathHasBeenSet = true;
}

bool AssetWebLocationPath::VirtualPathHasBeenSet() const
{
    return m_virtualPathHasBeenSet;
}

string AssetWebLocationPath::GetRealPath() const
{
    return m_realPath;
}

void AssetWebLocationPath::SetRealPath(const string& _realPath)
{
    m_realPath = _realPath;
    m_realPathHasBeenSet = true;
}

bool AssetWebLocationPath::RealPathHasBeenSet() const
{
    return m_realPathHasBeenSet;
}

string AssetWebLocationPath::GetUser() const
{
    return m_user;
}

void AssetWebLocationPath::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool AssetWebLocationPath::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string AssetWebLocationPath::GetGroup() const
{
    return m_group;
}

void AssetWebLocationPath::SetGroup(const string& _group)
{
    m_group = _group;
    m_groupHasBeenSet = true;
}

bool AssetWebLocationPath::GroupHasBeenSet() const
{
    return m_groupHasBeenSet;
}

string AssetWebLocationPath::GetPermission() const
{
    return m_permission;
}

void AssetWebLocationPath::SetPermission(const string& _permission)
{
    m_permission = _permission;
    m_permissionHasBeenSet = true;
}

bool AssetWebLocationPath::PermissionHasBeenSet() const
{
    return m_permissionHasBeenSet;
}

