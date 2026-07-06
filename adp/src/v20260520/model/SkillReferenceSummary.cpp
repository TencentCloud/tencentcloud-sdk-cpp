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

#include <tencentcloud/adp/v20260520/model/SkillReferenceSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

SkillReferenceSummary::SkillReferenceSummary() :
    m_referenceIdHasBeenSet(false),
    m_referenceNameHasBeenSet(false),
    m_referenceTypeHasBeenSet(false),
    m_spaceIdHasBeenSet(false),
    m_spaceNameHasBeenSet(false),
    m_ownerHasBeenSet(false)
{
}

CoreInternalOutcome SkillReferenceSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReferenceId") && !value["ReferenceId"].IsNull())
    {
        if (!value["ReferenceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillReferenceSummary.ReferenceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_referenceId = string(value["ReferenceId"].GetString());
        m_referenceIdHasBeenSet = true;
    }

    if (value.HasMember("ReferenceName") && !value["ReferenceName"].IsNull())
    {
        if (!value["ReferenceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillReferenceSummary.ReferenceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_referenceName = string(value["ReferenceName"].GetString());
        m_referenceNameHasBeenSet = true;
    }

    if (value.HasMember("ReferenceType") && !value["ReferenceType"].IsNull())
    {
        if (!value["ReferenceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SkillReferenceSummary.ReferenceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_referenceType = value["ReferenceType"].GetInt64();
        m_referenceTypeHasBeenSet = true;
    }

    if (value.HasMember("SpaceId") && !value["SpaceId"].IsNull())
    {
        if (!value["SpaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillReferenceSummary.SpaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceId = string(value["SpaceId"].GetString());
        m_spaceIdHasBeenSet = true;
    }

    if (value.HasMember("SpaceName") && !value["SpaceName"].IsNull())
    {
        if (!value["SpaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillReferenceSummary.SpaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceName = string(value["SpaceName"].GetString());
        m_spaceNameHasBeenSet = true;
    }

    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillReferenceSummary.Owner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_owner = string(value["Owner"].GetString());
        m_ownerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SkillReferenceSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_referenceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferenceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_referenceId.c_str(), allocator).Move(), allocator);
    }

    if (m_referenceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferenceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_referenceName.c_str(), allocator).Move(), allocator);
    }

    if (m_referenceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferenceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_referenceType, allocator);
    }

    if (m_spaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_spaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_owner.c_str(), allocator).Move(), allocator);
    }

}


string SkillReferenceSummary::GetReferenceId() const
{
    return m_referenceId;
}

void SkillReferenceSummary::SetReferenceId(const string& _referenceId)
{
    m_referenceId = _referenceId;
    m_referenceIdHasBeenSet = true;
}

bool SkillReferenceSummary::ReferenceIdHasBeenSet() const
{
    return m_referenceIdHasBeenSet;
}

string SkillReferenceSummary::GetReferenceName() const
{
    return m_referenceName;
}

void SkillReferenceSummary::SetReferenceName(const string& _referenceName)
{
    m_referenceName = _referenceName;
    m_referenceNameHasBeenSet = true;
}

bool SkillReferenceSummary::ReferenceNameHasBeenSet() const
{
    return m_referenceNameHasBeenSet;
}

int64_t SkillReferenceSummary::GetReferenceType() const
{
    return m_referenceType;
}

void SkillReferenceSummary::SetReferenceType(const int64_t& _referenceType)
{
    m_referenceType = _referenceType;
    m_referenceTypeHasBeenSet = true;
}

bool SkillReferenceSummary::ReferenceTypeHasBeenSet() const
{
    return m_referenceTypeHasBeenSet;
}

string SkillReferenceSummary::GetSpaceId() const
{
    return m_spaceId;
}

void SkillReferenceSummary::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool SkillReferenceSummary::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

string SkillReferenceSummary::GetSpaceName() const
{
    return m_spaceName;
}

void SkillReferenceSummary::SetSpaceName(const string& _spaceName)
{
    m_spaceName = _spaceName;
    m_spaceNameHasBeenSet = true;
}

bool SkillReferenceSummary::SpaceNameHasBeenSet() const
{
    return m_spaceNameHasBeenSet;
}

string SkillReferenceSummary::GetOwner() const
{
    return m_owner;
}

void SkillReferenceSummary::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool SkillReferenceSummary::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

