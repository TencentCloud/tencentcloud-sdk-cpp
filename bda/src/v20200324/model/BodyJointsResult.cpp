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

#include <tencentcloud/bda/v20200324/model/BodyJointsResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bda::V20200324::Model;
using namespace std;

BodyJointsResult::BodyJointsResult() :
    m_boundBoxHasBeenSet(false),
    m_bodyJointsHasBeenSet(false),
    m_confidenceHasBeenSet(false)
{
}

CoreInternalOutcome BodyJointsResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BoundBox") && !value["BoundBox"].IsNull())
    {
        if (!value["BoundBox"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BodyJointsResult.BoundBox` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_boundBox.Deserialize(value["BoundBox"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_boundBoxHasBeenSet = true;
    }

    if (value.HasMember("BodyJoints") && !value["BodyJoints"].IsNull())
    {
        if (!value["BodyJoints"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BodyJointsResult.BodyJoints` is not array type"));

        const rapidjson::Value &tmpValue = value["BodyJoints"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KeyPointInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_bodyJoints.push_back(item);
        }
        m_bodyJointsHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BodyJointsResult.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BodyJointsResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_boundBoxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoundBox";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_boundBox.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bodyJointsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BodyJoints";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bodyJoints.begin(); itr != m_bodyJoints.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

}


BoundRect BodyJointsResult::GetBoundBox() const
{
    return m_boundBox;
}

void BodyJointsResult::SetBoundBox(const BoundRect& _boundBox)
{
    m_boundBox = _boundBox;
    m_boundBoxHasBeenSet = true;
}

bool BodyJointsResult::BoundBoxHasBeenSet() const
{
    return m_boundBoxHasBeenSet;
}

vector<KeyPointInfo> BodyJointsResult::GetBodyJoints() const
{
    return m_bodyJoints;
}

void BodyJointsResult::SetBodyJoints(const vector<KeyPointInfo>& _bodyJoints)
{
    m_bodyJoints = _bodyJoints;
    m_bodyJointsHasBeenSet = true;
}

bool BodyJointsResult::BodyJointsHasBeenSet() const
{
    return m_bodyJointsHasBeenSet;
}

double BodyJointsResult::GetConfidence() const
{
    return m_confidence;
}

void BodyJointsResult::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool BodyJointsResult::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

