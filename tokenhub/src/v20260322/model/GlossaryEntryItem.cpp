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

#include <tencentcloud/tokenhub/v20260322/model/GlossaryEntryItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

GlossaryEntryItem::GlossaryEntryItem() :
    m_entryIdHasBeenSet(false),
    m_sourceTermHasBeenSet(false),
    m_targetTermHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

CoreInternalOutcome GlossaryEntryItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EntryId") && !value["EntryId"].IsNull())
    {
        if (!value["EntryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlossaryEntryItem.EntryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entryId = string(value["EntryId"].GetString());
        m_entryIdHasBeenSet = true;
    }

    if (value.HasMember("SourceTerm") && !value["SourceTerm"].IsNull())
    {
        if (!value["SourceTerm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlossaryEntryItem.SourceTerm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceTerm = string(value["SourceTerm"].GetString());
        m_sourceTermHasBeenSet = true;
    }

    if (value.HasMember("TargetTerm") && !value["TargetTerm"].IsNull())
    {
        if (!value["TargetTerm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlossaryEntryItem.TargetTerm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetTerm = string(value["TargetTerm"].GetString());
        m_targetTermHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GlossaryEntryItem.UpdatedAt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = value["UpdatedAt"].GetInt64();
        m_updatedAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GlossaryEntryItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_entryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entryId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updatedAt, allocator);
    }

}


string GlossaryEntryItem::GetEntryId() const
{
    return m_entryId;
}

void GlossaryEntryItem::SetEntryId(const string& _entryId)
{
    m_entryId = _entryId;
    m_entryIdHasBeenSet = true;
}

bool GlossaryEntryItem::EntryIdHasBeenSet() const
{
    return m_entryIdHasBeenSet;
}

string GlossaryEntryItem::GetSourceTerm() const
{
    return m_sourceTerm;
}

void GlossaryEntryItem::SetSourceTerm(const string& _sourceTerm)
{
    m_sourceTerm = _sourceTerm;
    m_sourceTermHasBeenSet = true;
}

bool GlossaryEntryItem::SourceTermHasBeenSet() const
{
    return m_sourceTermHasBeenSet;
}

string GlossaryEntryItem::GetTargetTerm() const
{
    return m_targetTerm;
}

void GlossaryEntryItem::SetTargetTerm(const string& _targetTerm)
{
    m_targetTerm = _targetTerm;
    m_targetTermHasBeenSet = true;
}

bool GlossaryEntryItem::TargetTermHasBeenSet() const
{
    return m_targetTermHasBeenSet;
}

int64_t GlossaryEntryItem::GetUpdatedAt() const
{
    return m_updatedAt;
}

void GlossaryEntryItem::SetUpdatedAt(const int64_t& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool GlossaryEntryItem::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

