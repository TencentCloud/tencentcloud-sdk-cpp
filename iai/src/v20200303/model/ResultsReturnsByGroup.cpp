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

#include <tencentcloud/iai/v20200303/model/ResultsReturnsByGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20200303::Model;
using namespace std;

ResultsReturnsByGroup::ResultsReturnsByGroup() :
    m_faceRectHasBeenSet(false),
    m_groupCandidatesHasBeenSet(false),
    m_retCodeHasBeenSet(false)
{
}

CoreInternalOutcome ResultsReturnsByGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FaceRect") && !value["FaceRect"].IsNull())
    {
        if (!value["FaceRect"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResultsReturnsByGroup.FaceRect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_faceRect.Deserialize(value["FaceRect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_faceRectHasBeenSet = true;
    }

    if (value.HasMember("GroupCandidates") && !value["GroupCandidates"].IsNull())
    {
        if (!value["GroupCandidates"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResultsReturnsByGroup.GroupCandidates` is not array type"));

        const rapidjson::Value &tmpValue = value["GroupCandidates"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GroupCandidate item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_groupCandidates.push_back(item);
        }
        m_groupCandidatesHasBeenSet = true;
    }

    if (value.HasMember("RetCode") && !value["RetCode"].IsNull())
    {
        if (!value["RetCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResultsReturnsByGroup.RetCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retCode = value["RetCode"].GetInt64();
        m_retCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResultsReturnsByGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_faceRectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceRect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_faceRect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_groupCandidatesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupCandidates";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_groupCandidates.begin(); itr != m_groupCandidates.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_retCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retCode, allocator);
    }

}


FaceRect ResultsReturnsByGroup::GetFaceRect() const
{
    return m_faceRect;
}

void ResultsReturnsByGroup::SetFaceRect(const FaceRect& _faceRect)
{
    m_faceRect = _faceRect;
    m_faceRectHasBeenSet = true;
}

bool ResultsReturnsByGroup::FaceRectHasBeenSet() const
{
    return m_faceRectHasBeenSet;
}

vector<GroupCandidate> ResultsReturnsByGroup::GetGroupCandidates() const
{
    return m_groupCandidates;
}

void ResultsReturnsByGroup::SetGroupCandidates(const vector<GroupCandidate>& _groupCandidates)
{
    m_groupCandidates = _groupCandidates;
    m_groupCandidatesHasBeenSet = true;
}

bool ResultsReturnsByGroup::GroupCandidatesHasBeenSet() const
{
    return m_groupCandidatesHasBeenSet;
}

int64_t ResultsReturnsByGroup::GetRetCode() const
{
    return m_retCode;
}

void ResultsReturnsByGroup::SetRetCode(const int64_t& _retCode)
{
    m_retCode = _retCode;
    m_retCodeHasBeenSet = true;
}

bool ResultsReturnsByGroup::RetCodeHasBeenSet() const
{
    return m_retCodeHasBeenSet;
}

