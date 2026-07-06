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

#include <tencentcloud/adp/v20260520/model/CreateSkillShareRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

CreateSkillShareRequest::CreateSkillShareRequest() :
    m_applyRemarkHasBeenSet(false),
    m_skillIdHasBeenSet(false),
    m_spaceIdHasBeenSet(false),
    m_versionIdHasBeenSet(false)
{
}

string CreateSkillShareRequest::ToJsonString() const
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


string CreateSkillShareRequest::GetApplyRemark() const
{
    return m_applyRemark;
}

void CreateSkillShareRequest::SetApplyRemark(const string& _applyRemark)
{
    m_applyRemark = _applyRemark;
    m_applyRemarkHasBeenSet = true;
}

bool CreateSkillShareRequest::ApplyRemarkHasBeenSet() const
{
    return m_applyRemarkHasBeenSet;
}

string CreateSkillShareRequest::GetSkillId() const
{
    return m_skillId;
}

void CreateSkillShareRequest::SetSkillId(const string& _skillId)
{
    m_skillId = _skillId;
    m_skillIdHasBeenSet = true;
}

bool CreateSkillShareRequest::SkillIdHasBeenSet() const
{
    return m_skillIdHasBeenSet;
}

string CreateSkillShareRequest::GetSpaceId() const
{
    return m_spaceId;
}

void CreateSkillShareRequest::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool CreateSkillShareRequest::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

string CreateSkillShareRequest::GetVersionId() const
{
    return m_versionId;
}

void CreateSkillShareRequest::SetVersionId(const string& _versionId)
{
    m_versionId = _versionId;
    m_versionIdHasBeenSet = true;
}

bool CreateSkillShareRequest::VersionIdHasBeenSet() const
{
    return m_versionIdHasBeenSet;
}


