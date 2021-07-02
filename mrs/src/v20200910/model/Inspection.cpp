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

#include <tencentcloud/mrs/v20200910/model/Inspection.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

Inspection::Inspection() :
    m_findingHasBeenSet(false),
    m_conclusionHasBeenSet(false)
{
}

CoreInternalOutcome Inspection::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Finding") && !value["Finding"].IsNull())
    {
        if (!value["Finding"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Inspection.Finding` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_finding.Deserialize(value["Finding"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_findingHasBeenSet = true;
    }

    if (value.HasMember("Conclusion") && !value["Conclusion"].IsNull())
    {
        if (!value["Conclusion"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Inspection.Conclusion` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_conclusion.Deserialize(value["Conclusion"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_conclusionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Inspection::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_findingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Finding";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_finding.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_conclusionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Conclusion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_conclusion.ToJsonObject(value[key.c_str()], allocator);
    }

}


Finding Inspection::GetFinding() const
{
    return m_finding;
}

void Inspection::SetFinding(const Finding& _finding)
{
    m_finding = _finding;
    m_findingHasBeenSet = true;
}

bool Inspection::FindingHasBeenSet() const
{
    return m_findingHasBeenSet;
}

Conclusion Inspection::GetConclusion() const
{
    return m_conclusion;
}

void Inspection::SetConclusion(const Conclusion& _conclusion)
{
    m_conclusion = _conclusion;
    m_conclusionHasBeenSet = true;
}

bool Inspection::ConclusionHasBeenSet() const
{
    return m_conclusionHasBeenSet;
}

