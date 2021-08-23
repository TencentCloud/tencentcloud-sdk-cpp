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

#include <tencentcloud/iai/v20200303/model/Result.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20200303::Model;
using namespace std;

Result::Result() :
    m_candidatesHasBeenSet(false),
    m_faceRectHasBeenSet(false),
    m_retCodeHasBeenSet(false)
{
}

CoreInternalOutcome Result::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Candidates") && !value["Candidates"].IsNull())
    {
        if (!value["Candidates"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Result.Candidates` is not array type"));

        const rapidjson::Value &tmpValue = value["Candidates"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Candidate item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_candidates.push_back(item);
        }
        m_candidatesHasBeenSet = true;
    }

    if (value.HasMember("FaceRect") && !value["FaceRect"].IsNull())
    {
        if (!value["FaceRect"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Result.FaceRect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_faceRect.Deserialize(value["FaceRect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_faceRectHasBeenSet = true;
    }

    if (value.HasMember("RetCode") && !value["RetCode"].IsNull())
    {
        if (!value["RetCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Result.RetCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retCode = value["RetCode"].GetInt64();
        m_retCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Result::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_candidatesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Candidates";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_candidates.begin(); itr != m_candidates.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_faceRectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceRect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_faceRect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_retCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retCode, allocator);
    }

}


vector<Candidate> Result::GetCandidates() const
{
    return m_candidates;
}

void Result::SetCandidates(const vector<Candidate>& _candidates)
{
    m_candidates = _candidates;
    m_candidatesHasBeenSet = true;
}

bool Result::CandidatesHasBeenSet() const
{
    return m_candidatesHasBeenSet;
}

FaceRect Result::GetFaceRect() const
{
    return m_faceRect;
}

void Result::SetFaceRect(const FaceRect& _faceRect)
{
    m_faceRect = _faceRect;
    m_faceRectHasBeenSet = true;
}

bool Result::FaceRectHasBeenSet() const
{
    return m_faceRectHasBeenSet;
}

int64_t Result::GetRetCode() const
{
    return m_retCode;
}

void Result::SetRetCode(const int64_t& _retCode)
{
    m_retCode = _retCode;
    m_retCodeHasBeenSet = true;
}

bool Result::RetCodeHasBeenSet() const
{
    return m_retCodeHasBeenSet;
}

