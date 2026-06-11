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

#include <tencentcloud/tcr/v20190924/model/SkillVersionList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

SkillVersionList::SkillVersionList() :
    m_versionHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_pushTimeHasBeenSet(false)
{
}

CoreInternalOutcome SkillVersionList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillVersionList.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SkillVersionList.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("PushTime") && !value["PushTime"].IsNull())
    {
        if (!value["PushTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillVersionList.PushTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pushTime = string(value["PushTime"].GetString());
        m_pushTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SkillVersionList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_pushTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pushTime.c_str(), allocator).Move(), allocator);
    }

}


string SkillVersionList::GetVersion() const
{
    return m_version;
}

void SkillVersionList::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool SkillVersionList::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

int64_t SkillVersionList::GetSize() const
{
    return m_size;
}

void SkillVersionList::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool SkillVersionList::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string SkillVersionList::GetPushTime() const
{
    return m_pushTime;
}

void SkillVersionList::SetPushTime(const string& _pushTime)
{
    m_pushTime = _pushTime;
    m_pushTimeHasBeenSet = true;
}

bool SkillVersionList::PushTimeHasBeenSet() const
{
    return m_pushTimeHasBeenSet;
}

