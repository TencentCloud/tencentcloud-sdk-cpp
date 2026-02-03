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

#include <tencentcloud/cynosdb/v20190107/model/LibraDBVersion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

LibraDBVersion::LibraDBVersion() :
    m_versionHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_hasPermissionHasBeenSet(false)
{
}

CoreInternalOutcome LibraDBVersion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBVersion.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBVersion.Tag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tag = string(value["Tag"].GetString());
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("HasPermission") && !value["HasPermission"].IsNull())
    {
        if (!value["HasPermission"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBVersion.HasPermission` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasPermission = value["HasPermission"].GetBool();
        m_hasPermissionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LibraDBVersion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tag.c_str(), allocator).Move(), allocator);
    }

    if (m_hasPermissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasPermission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasPermission, allocator);
    }

}


string LibraDBVersion::GetVersion() const
{
    return m_version;
}

void LibraDBVersion::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool LibraDBVersion::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string LibraDBVersion::GetTag() const
{
    return m_tag;
}

void LibraDBVersion::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool LibraDBVersion::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

bool LibraDBVersion::GetHasPermission() const
{
    return m_hasPermission;
}

void LibraDBVersion::SetHasPermission(const bool& _hasPermission)
{
    m_hasPermission = _hasPermission;
    m_hasPermissionHasBeenSet = true;
}

bool LibraDBVersion::HasPermissionHasBeenSet() const
{
    return m_hasPermissionHasBeenSet;
}

