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

#include <tencentcloud/hunyuan/v20230901/model/GlossaryEntry.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

GlossaryEntry::GlossaryEntry() :
    m_sourceTermHasBeenSet(false),
    m_targetTermHasBeenSet(false),
    m_entryIdHasBeenSet(false)
{
}

CoreInternalOutcome GlossaryEntry::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceTerm") && !value["SourceTerm"].IsNull())
    {
        if (!value["SourceTerm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlossaryEntry.SourceTerm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceTerm = string(value["SourceTerm"].GetString());
        m_sourceTermHasBeenSet = true;
    }

    if (value.HasMember("TargetTerm") && !value["TargetTerm"].IsNull())
    {
        if (!value["TargetTerm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlossaryEntry.TargetTerm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetTerm = string(value["TargetTerm"].GetString());
        m_targetTermHasBeenSet = true;
    }

    if (value.HasMember("EntryId") && !value["EntryId"].IsNull())
    {
        if (!value["EntryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlossaryEntry.EntryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entryId = string(value["EntryId"].GetString());
        m_entryIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GlossaryEntry::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceTermHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceTerm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceTerm.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTermHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetTerm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetTerm.c_str(), allocator).Move(), allocator);
    }

    if (m_entryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entryId.c_str(), allocator).Move(), allocator);
    }

}


string GlossaryEntry::GetSourceTerm() const
{
    return m_sourceTerm;
}

void GlossaryEntry::SetSourceTerm(const string& _sourceTerm)
{
    m_sourceTerm = _sourceTerm;
    m_sourceTermHasBeenSet = true;
}

bool GlossaryEntry::SourceTermHasBeenSet() const
{
    return m_sourceTermHasBeenSet;
}

string GlossaryEntry::GetTargetTerm() const
{
    return m_targetTerm;
}

void GlossaryEntry::SetTargetTerm(const string& _targetTerm)
{
    m_targetTerm = _targetTerm;
    m_targetTermHasBeenSet = true;
}

bool GlossaryEntry::TargetTermHasBeenSet() const
{
    return m_targetTermHasBeenSet;
}

string GlossaryEntry::GetEntryId() const
{
    return m_entryId;
}

void GlossaryEntry::SetEntryId(const string& _entryId)
{
    m_entryId = _entryId;
    m_entryIdHasBeenSet = true;
}

bool GlossaryEntry::EntryIdHasBeenSet() const
{
    return m_entryIdHasBeenSet;
}

