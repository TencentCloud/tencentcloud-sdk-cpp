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

#include <tencentcloud/cfw/v20190904/model/DescribeCfwAnalysisDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescribeCfwAnalysisDataRequest::DescribeCfwAnalysisDataRequest() :
    m_scenarioHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_objectTypeHasBeenSet(false),
    m_objectIdHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_skipSectionsHasBeenSet(false)
{
}

string DescribeCfwAnalysisDataRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_scenarioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scenario";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scenario.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_objectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_objectType.c_str(), allocator).Move(), allocator);
    }

    if (m_objectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_objectId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Target";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_target.c_str(), allocator).Move(), allocator);
    }

    if (m_skipSectionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkipSections";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_skipSections.begin(); itr != m_skipSections.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCfwAnalysisDataRequest::GetScenario() const
{
    return m_scenario;
}

void DescribeCfwAnalysisDataRequest::SetScenario(const string& _scenario)
{
    m_scenario = _scenario;
    m_scenarioHasBeenSet = true;
}

bool DescribeCfwAnalysisDataRequest::ScenarioHasBeenSet() const
{
    return m_scenarioHasBeenSet;
}

string DescribeCfwAnalysisDataRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeCfwAnalysisDataRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeCfwAnalysisDataRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeCfwAnalysisDataRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeCfwAnalysisDataRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeCfwAnalysisDataRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeCfwAnalysisDataRequest::GetObjectType() const
{
    return m_objectType;
}

void DescribeCfwAnalysisDataRequest::SetObjectType(const string& _objectType)
{
    m_objectType = _objectType;
    m_objectTypeHasBeenSet = true;
}

bool DescribeCfwAnalysisDataRequest::ObjectTypeHasBeenSet() const
{
    return m_objectTypeHasBeenSet;
}

string DescribeCfwAnalysisDataRequest::GetObjectId() const
{
    return m_objectId;
}

void DescribeCfwAnalysisDataRequest::SetObjectId(const string& _objectId)
{
    m_objectId = _objectId;
    m_objectIdHasBeenSet = true;
}

bool DescribeCfwAnalysisDataRequest::ObjectIdHasBeenSet() const
{
    return m_objectIdHasBeenSet;
}

string DescribeCfwAnalysisDataRequest::GetTarget() const
{
    return m_target;
}

void DescribeCfwAnalysisDataRequest::SetTarget(const string& _target)
{
    m_target = _target;
    m_targetHasBeenSet = true;
}

bool DescribeCfwAnalysisDataRequest::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

vector<string> DescribeCfwAnalysisDataRequest::GetSkipSections() const
{
    return m_skipSections;
}

void DescribeCfwAnalysisDataRequest::SetSkipSections(const vector<string>& _skipSections)
{
    m_skipSections = _skipSections;
    m_skipSectionsHasBeenSet = true;
}

bool DescribeCfwAnalysisDataRequest::SkipSectionsHasBeenSet() const
{
    return m_skipSectionsHasBeenSet;
}


