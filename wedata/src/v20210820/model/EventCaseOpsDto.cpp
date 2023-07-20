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

#include <tencentcloud/wedata/v20210820/model/EventCaseOpsDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

EventCaseOpsDto::EventCaseOpsDto() :
    m_caseIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_dimensionHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_consumerIdHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome EventCaseOpsDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CaseId") && !value["CaseId"].IsNull())
    {
        if (!value["CaseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventCaseOpsDto.CaseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_caseId = string(value["CaseId"].GetString());
        m_caseIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventCaseOpsDto.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Dimension") && !value["Dimension"].IsNull())
    {
        if (!value["Dimension"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventCaseOpsDto.Dimension` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dimension = string(value["Dimension"].GetString());
        m_dimensionHasBeenSet = true;
    }

    if (value.HasMember("CreationTimestamp") && !value["CreationTimestamp"].IsNull())
    {
        if (!value["CreationTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventCaseOpsDto.CreationTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTimestamp = string(value["CreationTimestamp"].GetString());
        m_creationTimestampHasBeenSet = true;
    }

    if (value.HasMember("ConsumerId") && !value["ConsumerId"].IsNull())
    {
        if (!value["ConsumerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventCaseOpsDto.ConsumerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerId = string(value["ConsumerId"].GetString());
        m_consumerIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventCaseOpsDto.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventCaseOpsDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_caseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_caseId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_dimensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dimension";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dimension.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTimestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumerId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


string EventCaseOpsDto::GetCaseId() const
{
    return m_caseId;
}

void EventCaseOpsDto::SetCaseId(const string& _caseId)
{
    m_caseId = _caseId;
    m_caseIdHasBeenSet = true;
}

bool EventCaseOpsDto::CaseIdHasBeenSet() const
{
    return m_caseIdHasBeenSet;
}

string EventCaseOpsDto::GetName() const
{
    return m_name;
}

void EventCaseOpsDto::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool EventCaseOpsDto::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string EventCaseOpsDto::GetDimension() const
{
    return m_dimension;
}

void EventCaseOpsDto::SetDimension(const string& _dimension)
{
    m_dimension = _dimension;
    m_dimensionHasBeenSet = true;
}

bool EventCaseOpsDto::DimensionHasBeenSet() const
{
    return m_dimensionHasBeenSet;
}

string EventCaseOpsDto::GetCreationTimestamp() const
{
    return m_creationTimestamp;
}

void EventCaseOpsDto::SetCreationTimestamp(const string& _creationTimestamp)
{
    m_creationTimestamp = _creationTimestamp;
    m_creationTimestampHasBeenSet = true;
}

bool EventCaseOpsDto::CreationTimestampHasBeenSet() const
{
    return m_creationTimestampHasBeenSet;
}

string EventCaseOpsDto::GetConsumerId() const
{
    return m_consumerId;
}

void EventCaseOpsDto::SetConsumerId(const string& _consumerId)
{
    m_consumerId = _consumerId;
    m_consumerIdHasBeenSet = true;
}

bool EventCaseOpsDto::ConsumerIdHasBeenSet() const
{
    return m_consumerIdHasBeenSet;
}

string EventCaseOpsDto::GetDescription() const
{
    return m_description;
}

void EventCaseOpsDto::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool EventCaseOpsDto::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

