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

#include <tencentcloud/eb/v20210416/model/CreateTargetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Eb::V20210416::Model;
using namespace std;

CreateTargetRequest::CreateTargetRequest() :
    m_eventBusIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_targetDescriptionHasBeenSet(false),
    m_ruleIdHasBeenSet(false)
{
}

string CreateTargetRequest::ToJsonString() const
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_targetDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_targetDescription.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTargetRequest::GetEventBusId() const
{
    return m_eventBusId;
}

void CreateTargetRequest::SetEventBusId(const string& _eventBusId)
{
    m_eventBusId = _eventBusId;
    m_eventBusIdHasBeenSet = true;
}

bool CreateTargetRequest::EventBusIdHasBeenSet() const
{
    return m_eventBusIdHasBeenSet;
}

string CreateTargetRequest::GetType() const
{
    return m_type;
}

void CreateTargetRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateTargetRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

TargetDescription CreateTargetRequest::GetTargetDescription() const
{
    return m_targetDescription;
}

void CreateTargetRequest::SetTargetDescription(const TargetDescription& _targetDescription)
{
    m_targetDescription = _targetDescription;
    m_targetDescriptionHasBeenSet = true;
}

bool CreateTargetRequest::TargetDescriptionHasBeenSet() const
{
    return m_targetDescriptionHasBeenSet;
}

string CreateTargetRequest::GetRuleId() const
{
    return m_ruleId;
}

void CreateTargetRequest::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool CreateTargetRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}


