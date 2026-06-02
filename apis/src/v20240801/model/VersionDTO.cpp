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

#include <tencentcloud/apis/v20240801/model/VersionDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

VersionDTO::VersionDTO() :
    m_versionHasBeenSet(false),
    m_targetPathHasBeenSet(false)
{
}

CoreInternalOutcome VersionDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionDTO.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("TargetPath") && !value["TargetPath"].IsNull())
    {
        if (!value["TargetPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionDTO.TargetPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetPath = string(value["TargetPath"].GetString());
        m_targetPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VersionDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_targetPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetPath.c_str(), allocator).Move(), allocator);
    }

}


string VersionDTO::GetVersion() const
{
    return m_version;
}

void VersionDTO::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool VersionDTO::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string VersionDTO::GetTargetPath() const
{
    return m_targetPath;
}

void VersionDTO::SetTargetPath(const string& _targetPath)
{
    m_targetPath = _targetPath;
    m_targetPathHasBeenSet = true;
}

bool VersionDTO::TargetPathHasBeenSet() const
{
    return m_targetPathHasBeenSet;
}

