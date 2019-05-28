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

#include <tencentcloud/ticm/v20181127/model/PoliticsResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ticm::V20181127::Model;
using namespace rapidjson;
using namespace std;

PoliticsResult::PoliticsResult() :
    m_codeHasBeenSet(false),
    m_msgHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_faceResultsHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_advancedInfoHasBeenSet(false)
{
}

CoreInternalOutcome PoliticsResult::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `PoliticsResult.Code` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_code = value["Code"].GetInt64();
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Msg") && !value["Msg"].IsNull())
    {
        if (!value["Msg"].IsString())
        {
            return CoreInternalOutcome(Error("response `PoliticsResult.Msg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msg = string(value["Msg"].GetString());
        m_msgHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Error("response `PoliticsResult.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `PoliticsResult.Confidence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetInt64();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("FaceResults") && !value["FaceResults"].IsNull())
    {
        if (!value["FaceResults"].IsArray())
            return CoreInternalOutcome(Error("response `PoliticsResult.FaceResults` is not array type"));

        const Value &tmpValue = value["FaceResults"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FaceResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_faceResults.push_back(item);
        }
        m_faceResultsHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `PoliticsResult.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("AdvancedInfo") && !value["AdvancedInfo"].IsNull())
    {
        if (!value["AdvancedInfo"].IsString())
        {
            return CoreInternalOutcome(Error("response `PoliticsResult.AdvancedInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_advancedInfo = string(value["AdvancedInfo"].GetString());
        m_advancedInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PoliticsResult::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_code, allocator);
    }

    if (m_msgHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Msg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_msg.c_str(), allocator).Move(), allocator);
    }

    if (m_suggestionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_faceResultsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FaceResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_faceResults.begin(); itr != m_faceResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_advancedInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AdvancedInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_advancedInfo.c_str(), allocator).Move(), allocator);
    }

}


int64_t PoliticsResult::GetCode() const
{
    return m_code;
}

void PoliticsResult::SetCode(const int64_t& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool PoliticsResult::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string PoliticsResult::GetMsg() const
{
    return m_msg;
}

void PoliticsResult::SetMsg(const string& _msg)
{
    m_msg = _msg;
    m_msgHasBeenSet = true;
}

bool PoliticsResult::MsgHasBeenSet() const
{
    return m_msgHasBeenSet;
}

string PoliticsResult::GetSuggestion() const
{
    return m_suggestion;
}

void PoliticsResult::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool PoliticsResult::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

int64_t PoliticsResult::GetConfidence() const
{
    return m_confidence;
}

void PoliticsResult::SetConfidence(const int64_t& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool PoliticsResult::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

vector<FaceResult> PoliticsResult::GetFaceResults() const
{
    return m_faceResults;
}

void PoliticsResult::SetFaceResults(const vector<FaceResult>& _faceResults)
{
    m_faceResults = _faceResults;
    m_faceResultsHasBeenSet = true;
}

bool PoliticsResult::FaceResultsHasBeenSet() const
{
    return m_faceResultsHasBeenSet;
}

string PoliticsResult::GetType() const
{
    return m_type;
}

void PoliticsResult::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool PoliticsResult::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string PoliticsResult::GetAdvancedInfo() const
{
    return m_advancedInfo;
}

void PoliticsResult::SetAdvancedInfo(const string& _advancedInfo)
{
    m_advancedInfo = _advancedInfo;
    m_advancedInfoHasBeenSet = true;
}

bool PoliticsResult::AdvancedInfoHasBeenSet() const
{
    return m_advancedInfoHasBeenSet;
}

