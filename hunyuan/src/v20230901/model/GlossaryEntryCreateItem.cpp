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

#include <tencentcloud/hunyuan/v20230901/model/GlossaryEntryCreateItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

GlossaryEntryCreateItem::GlossaryEntryCreateItem() :
    m_sourceTermHasBeenSet(false),
    m_targetTermHasBeenSet(false)
{
}

CoreInternalOutcome GlossaryEntryCreateItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceTerm") && !value["SourceTerm"].IsNull())
    {
        if (!value["SourceTerm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlossaryEntryCreateItem.SourceTerm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceTerm = string(value["SourceTerm"].GetString());
        m_sourceTermHasBeenSet = true;
    }

    if (value.HasMember("TargetTerm") && !value["TargetTerm"].IsNull())
    {
        if (!value["TargetTerm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlossaryEntryCreateItem.TargetTerm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetTerm = string(value["TargetTerm"].GetString());
        m_targetTermHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GlossaryEntryCreateItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string GlossaryEntryCreateItem::GetSourceTerm() const
{
    return m_sourceTerm;
}

void GlossaryEntryCreateItem::SetSourceTerm(const string& _sourceTerm)
{
    m_sourceTerm = _sourceTerm;
    m_sourceTermHasBeenSet = true;
}

bool GlossaryEntryCreateItem::SourceTermHasBeenSet() const
{
    return m_sourceTermHasBeenSet;
}

string GlossaryEntryCreateItem::GetTargetTerm() const
{
    return m_targetTerm;
}

void GlossaryEntryCreateItem::SetTargetTerm(const string& _targetTerm)
{
    m_targetTerm = _targetTerm;
    m_targetTermHasBeenSet = true;
}

bool GlossaryEntryCreateItem::TargetTermHasBeenSet() const
{
    return m_targetTermHasBeenSet;
}

