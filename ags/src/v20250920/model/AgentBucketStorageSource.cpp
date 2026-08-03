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

#include <tencentcloud/ags/v20250920/model/AgentBucketStorageSource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

AgentBucketStorageSource::AgentBucketStorageSource() :
    m_libraryIdHasBeenSet(false),
    m_spaceIdHasBeenSet(false),
    m_accessDomainHasBeenSet(false)
{
}

CoreInternalOutcome AgentBucketStorageSource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LibraryId") && !value["LibraryId"].IsNull())
    {
        if (!value["LibraryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentBucketStorageSource.LibraryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_libraryId = string(value["LibraryId"].GetString());
        m_libraryIdHasBeenSet = true;
    }

    if (value.HasMember("SpaceId") && !value["SpaceId"].IsNull())
    {
        if (!value["SpaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentBucketStorageSource.SpaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceId = string(value["SpaceId"].GetString());
        m_spaceIdHasBeenSet = true;
    }

    if (value.HasMember("AccessDomain") && !value["AccessDomain"].IsNull())
    {
        if (!value["AccessDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentBucketStorageSource.AccessDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessDomain = string(value["AccessDomain"].GetString());
        m_accessDomainHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentBucketStorageSource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_libraryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibraryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_libraryId.c_str(), allocator).Move(), allocator);
    }

    if (m_spaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_accessDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessDomain.c_str(), allocator).Move(), allocator);
    }

}


string AgentBucketStorageSource::GetLibraryId() const
{
    return m_libraryId;
}

void AgentBucketStorageSource::SetLibraryId(const string& _libraryId)
{
    m_libraryId = _libraryId;
    m_libraryIdHasBeenSet = true;
}

bool AgentBucketStorageSource::LibraryIdHasBeenSet() const
{
    return m_libraryIdHasBeenSet;
}

string AgentBucketStorageSource::GetSpaceId() const
{
    return m_spaceId;
}

void AgentBucketStorageSource::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool AgentBucketStorageSource::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

string AgentBucketStorageSource::GetAccessDomain() const
{
    return m_accessDomain;
}

void AgentBucketStorageSource::SetAccessDomain(const string& _accessDomain)
{
    m_accessDomain = _accessDomain;
    m_accessDomainHasBeenSet = true;
}

bool AgentBucketStorageSource::AccessDomainHasBeenSet() const
{
    return m_accessDomainHasBeenSet;
}

