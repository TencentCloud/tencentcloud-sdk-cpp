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

#include <tencentcloud/cwp/v20180228/model/SkillInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

SkillInfo::SkillInfo() :
    m_skillNameHasBeenSet(false),
    m_skillDescHasBeenSet(false),
    m_skillSourceHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_riskDescHasBeenSet(false),
    m_evidenceHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

CoreInternalOutcome SkillInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SkillName") && !value["SkillName"].IsNull())
    {
        if (!value["SkillName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillInfo.SkillName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skillName = string(value["SkillName"].GetString());
        m_skillNameHasBeenSet = true;
    }

    if (value.HasMember("SkillDesc") && !value["SkillDesc"].IsNull())
    {
        if (!value["SkillDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillInfo.SkillDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skillDesc = string(value["SkillDesc"].GetString());
        m_skillDescHasBeenSet = true;
    }

    if (value.HasMember("SkillSource") && !value["SkillSource"].IsNull())
    {
        if (!value["SkillSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillInfo.SkillSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skillSource = string(value["SkillSource"].GetString());
        m_skillSourceHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SkillInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("RiskDesc") && !value["RiskDesc"].IsNull())
    {
        if (!value["RiskDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillInfo.RiskDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskDesc = string(value["RiskDesc"].GetString());
        m_riskDescHasBeenSet = true;
    }

    if (value.HasMember("Evidence") && !value["Evidence"].IsNull())
    {
        if (!value["Evidence"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillInfo.Evidence` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_evidence = string(value["Evidence"].GetString());
        m_evidenceHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SkillInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SkillInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_skillNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skillName.c_str(), allocator).Move(), allocator);
    }

    if (m_skillDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skillDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_skillSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skillSource.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_riskDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_evidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Evidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_evidence.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

}


string SkillInfo::GetSkillName() const
{
    return m_skillName;
}

void SkillInfo::SetSkillName(const string& _skillName)
{
    m_skillName = _skillName;
    m_skillNameHasBeenSet = true;
}

bool SkillInfo::SkillNameHasBeenSet() const
{
    return m_skillNameHasBeenSet;
}

string SkillInfo::GetSkillDesc() const
{
    return m_skillDesc;
}

void SkillInfo::SetSkillDesc(const string& _skillDesc)
{
    m_skillDesc = _skillDesc;
    m_skillDescHasBeenSet = true;
}

bool SkillInfo::SkillDescHasBeenSet() const
{
    return m_skillDescHasBeenSet;
}

string SkillInfo::GetSkillSource() const
{
    return m_skillSource;
}

void SkillInfo::SetSkillSource(const string& _skillSource)
{
    m_skillSource = _skillSource;
    m_skillSourceHasBeenSet = true;
}

bool SkillInfo::SkillSourceHasBeenSet() const
{
    return m_skillSourceHasBeenSet;
}

vector<string> SkillInfo::GetTags() const
{
    return m_tags;
}

void SkillInfo::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool SkillInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string SkillInfo::GetRiskDesc() const
{
    return m_riskDesc;
}

void SkillInfo::SetRiskDesc(const string& _riskDesc)
{
    m_riskDesc = _riskDesc;
    m_riskDescHasBeenSet = true;
}

bool SkillInfo::RiskDescHasBeenSet() const
{
    return m_riskDescHasBeenSet;
}

string SkillInfo::GetEvidence() const
{
    return m_evidence;
}

void SkillInfo::SetEvidence(const string& _evidence)
{
    m_evidence = _evidence;
    m_evidenceHasBeenSet = true;
}

bool SkillInfo::EvidenceHasBeenSet() const
{
    return m_evidenceHasBeenSet;
}

uint64_t SkillInfo::GetId() const
{
    return m_id;
}

void SkillInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool SkillInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

