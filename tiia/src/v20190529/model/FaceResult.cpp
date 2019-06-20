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

#include <tencentcloud/tiia/v20190529/model/FaceResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiia::V20190529::Model;
using namespace rapidjson;
using namespace std;

FaceResult::FaceResult() :
    m_faceRectHasBeenSet(false),
    m_candidatesHasBeenSet(false)
{
}

CoreInternalOutcome FaceResult::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("FaceRect") && !value["FaceRect"].IsNull())
    {
        if (!value["FaceRect"].IsObject())
        {
            return CoreInternalOutcome(Error("response `FaceResult.FaceRect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_faceRect.Deserialize(value["FaceRect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_faceRectHasBeenSet = true;
    }

    if (value.HasMember("Candidates") && !value["Candidates"].IsNull())
    {
        if (!value["Candidates"].IsArray())
            return CoreInternalOutcome(Error("response `FaceResult.Candidates` is not array type"));

        const Value &tmpValue = value["Candidates"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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


    return CoreInternalOutcome(true);
}

void FaceResult::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_faceRectHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FaceRect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_faceRect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_candidatesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Candidates";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_candidates.begin(); itr != m_candidates.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


FaceRect FaceResult::GetFaceRect() const
{
    return m_faceRect;
}

void FaceResult::SetFaceRect(const FaceRect& _faceRect)
{
    m_faceRect = _faceRect;
    m_faceRectHasBeenSet = true;
}

bool FaceResult::FaceRectHasBeenSet() const
{
    return m_faceRectHasBeenSet;
}

vector<Candidate> FaceResult::GetCandidates() const
{
    return m_candidates;
}

void FaceResult::SetCandidates(const vector<Candidate>& _candidates)
{
    m_candidates = _candidates;
    m_candidatesHasBeenSet = true;
}

bool FaceResult::CandidatesHasBeenSet() const
{
    return m_candidatesHasBeenSet;
}

