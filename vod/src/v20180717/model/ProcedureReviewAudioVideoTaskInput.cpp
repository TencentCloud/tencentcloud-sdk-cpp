/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/vod/v20180717/model/ProcedureReviewAudioVideoTaskInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ProcedureReviewAudioVideoTaskInput::ProcedureReviewAudioVideoTaskInput() :
    m_definitionHasBeenSet(false),
    m_reviewContentsHasBeenSet(false)
{
}

CoreInternalOutcome ProcedureReviewAudioVideoTaskInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProcedureReviewAudioVideoTaskInput.Definition` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetUint64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("ReviewContents") && !value["ReviewContents"].IsNull())
    {
        if (!value["ReviewContents"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProcedureReviewAudioVideoTaskInput.ReviewContents` is not array type"));

        const rapidjson::Value &tmpValue = value["ReviewContents"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_reviewContents.push_back((*itr).GetString());
        }
        m_reviewContentsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProcedureReviewAudioVideoTaskInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_reviewContentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReviewContents";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_reviewContents.begin(); itr != m_reviewContents.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


uint64_t ProcedureReviewAudioVideoTaskInput::GetDefinition() const
{
    return m_definition;
}

void ProcedureReviewAudioVideoTaskInput::SetDefinition(const uint64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool ProcedureReviewAudioVideoTaskInput::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

vector<string> ProcedureReviewAudioVideoTaskInput::GetReviewContents() const
{
    return m_reviewContents;
}

void ProcedureReviewAudioVideoTaskInput::SetReviewContents(const vector<string>& _reviewContents)
{
    m_reviewContents = _reviewContents;
    m_reviewContentsHasBeenSet = true;
}

bool ProcedureReviewAudioVideoTaskInput::ReviewContentsHasBeenSet() const
{
    return m_reviewContentsHasBeenSet;
}

