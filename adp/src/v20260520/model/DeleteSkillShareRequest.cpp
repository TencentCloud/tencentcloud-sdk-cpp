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

#include <tencentcloud/adp/v20260520/model/DeleteSkillShareRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

DeleteSkillShareRequest::DeleteSkillShareRequest() :
    m_applyRemarkHasBeenSet(false),
    m_skillIdHasBeenSet(false),
    m_spaceIdHasBeenSet(false),
    m_versionIdHasBeenSet(false)
{
}

string DeleteSkillShareRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applyRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyRemark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applyRemark.c_str(), allocator).Move(), allocator);
    }

    if (m_skillIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_skillId.c_str(), allocator).Move(), allocator);
    }

    if (m_spaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_spaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_versionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_versionId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteSkillShareRequest::GetApplyRemark() const
{
    return m_applyRemark;
}

void DeleteSkillShareRequest::SetApplyRemark(const string& _applyRemark)
{
    m_applyRemark = _applyRemark;
    m_applyRemarkHasBeenSet = true;
}

bool DeleteSkillShareRequest::ApplyRemarkHasBeenSet() const
{
    return m_applyRemarkHasBeenSet;
}

string DeleteSkillShareRequest::GetSkillId() const
{
    return m_skillId;
}

void DeleteSkillShareRequest::SetSkillId(const string& _skillId)
{
    m_skillId = _skillId;
    m_skillIdHasBeenSet = true;
}

bool DeleteSkillShareRequest::SkillIdHasBeenSet() const
{
    return m_skillIdHasBeenSet;
}

string DeleteSkillShareRequest::GetSpaceId() const
{
    return m_spaceId;
}

void DeleteSkillShareRequest::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool DeleteSkillShareRequest::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

string DeleteSkillShareRequest::GetVersionId() const
{
    return m_versionId;
}

void DeleteSkillShareRequest::SetVersionId(const string& _versionId)
{
    m_versionId = _versionId;
    m_versionIdHasBeenSet = true;
}

bool DeleteSkillShareRequest::VersionIdHasBeenSet() const
{
    return m_versionIdHasBeenSet;
}


