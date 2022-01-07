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

#include <tencentcloud/eb/v20210416/model/UpdateTransformationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Eb::V20210416::Model;
using namespace std;

UpdateTransformationRequest::UpdateTransformationRequest() :
    m_eventBusIdHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_transformationIdHasBeenSet(false),
    m_transformationsHasBeenSet(false)
{
}

string UpdateTransformationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_eventBusIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventBusId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventBusId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_transformationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransformationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_transformationId.c_str(), allocator).Move(), allocator);
    }

    if (m_transformationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Transformations";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_transformations.begin(); itr != m_transformations.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateTransformationRequest::GetEventBusId() const
{
    return m_eventBusId;
}

void UpdateTransformationRequest::SetEventBusId(const string& _eventBusId)
{
    m_eventBusId = _eventBusId;
    m_eventBusIdHasBeenSet = true;
}

bool UpdateTransformationRequest::EventBusIdHasBeenSet() const
{
    return m_eventBusIdHasBeenSet;
}

string UpdateTransformationRequest::GetRuleId() const
{
    return m_ruleId;
}

void UpdateTransformationRequest::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool UpdateTransformationRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string UpdateTransformationRequest::GetTransformationId() const
{
    return m_transformationId;
}

void UpdateTransformationRequest::SetTransformationId(const string& _transformationId)
{
    m_transformationId = _transformationId;
    m_transformationIdHasBeenSet = true;
}

bool UpdateTransformationRequest::TransformationIdHasBeenSet() const
{
    return m_transformationIdHasBeenSet;
}

vector<Transformation> UpdateTransformationRequest::GetTransformations() const
{
    return m_transformations;
}

void UpdateTransformationRequest::SetTransformations(const vector<Transformation>& _transformations)
{
    m_transformations = _transformations;
    m_transformationsHasBeenSet = true;
}

bool UpdateTransformationRequest::TransformationsHasBeenSet() const
{
    return m_transformationsHasBeenSet;
}


