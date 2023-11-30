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

#include <tencentcloud/wedata/v20210820/model/EventBatchCaseDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

EventBatchCaseDTO::EventBatchCaseDTO() :
    m_caseIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_startDimensionHasBeenSet(false),
    m_creationTsHasBeenSet(false),
    m_consumerIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_endDimensionHasBeenSet(false),
    m_eventSubTypeHasBeenSet(false)
{
}

CoreInternalOutcome EventBatchCaseDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CaseId") && !value["CaseId"].IsNull())
    {
        if (!value["CaseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventBatchCaseDTO.CaseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_caseId = string(value["CaseId"].GetString());
        m_caseIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventBatchCaseDTO.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("StartDimension") && !value["StartDimension"].IsNull())
    {
        if (!value["StartDimension"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventBatchCaseDTO.StartDimension` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startDimension = string(value["StartDimension"].GetString());
        m_startDimensionHasBeenSet = true;
    }

    if (value.HasMember("CreationTs") && !value["CreationTs"].IsNull())
    {
        if (!value["CreationTs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventBatchCaseDTO.CreationTs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTs = string(value["CreationTs"].GetString());
        m_creationTsHasBeenSet = true;
    }

    if (value.HasMember("ConsumerId") && !value["ConsumerId"].IsNull())
    {
        if (!value["ConsumerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventBatchCaseDTO.ConsumerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerId = string(value["ConsumerId"].GetString());
        m_consumerIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventBatchCaseDTO.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("EndDimension") && !value["EndDimension"].IsNull())
    {
        if (!value["EndDimension"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventBatchCaseDTO.EndDimension` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endDimension = string(value["EndDimension"].GetString());
        m_endDimensionHasBeenSet = true;
    }

    if (value.HasMember("EventSubType") && !value["EventSubType"].IsNull())
    {
        if (!value["EventSubType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventBatchCaseDTO.EventSubType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventSubType = string(value["EventSubType"].GetString());
        m_eventSubTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventBatchCaseDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_startDimensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartDimension";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startDimension.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTs.c_str(), allocator).Move(), allocator);
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

    if (m_endDimensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndDimension";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endDimension.c_str(), allocator).Move(), allocator);
    }

    if (m_eventSubTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventSubType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventSubType.c_str(), allocator).Move(), allocator);
    }

}


string EventBatchCaseDTO::GetCaseId() const
{
    return m_caseId;
}

void EventBatchCaseDTO::SetCaseId(const string& _caseId)
{
    m_caseId = _caseId;
    m_caseIdHasBeenSet = true;
}

bool EventBatchCaseDTO::CaseIdHasBeenSet() const
{
    return m_caseIdHasBeenSet;
}

string EventBatchCaseDTO::GetName() const
{
    return m_name;
}

void EventBatchCaseDTO::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool EventBatchCaseDTO::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string EventBatchCaseDTO::GetStartDimension() const
{
    return m_startDimension;
}

void EventBatchCaseDTO::SetStartDimension(const string& _startDimension)
{
    m_startDimension = _startDimension;
    m_startDimensionHasBeenSet = true;
}

bool EventBatchCaseDTO::StartDimensionHasBeenSet() const
{
    return m_startDimensionHasBeenSet;
}

string EventBatchCaseDTO::GetCreationTs() const
{
    return m_creationTs;
}

void EventBatchCaseDTO::SetCreationTs(const string& _creationTs)
{
    m_creationTs = _creationTs;
    m_creationTsHasBeenSet = true;
}

bool EventBatchCaseDTO::CreationTsHasBeenSet() const
{
    return m_creationTsHasBeenSet;
}

string EventBatchCaseDTO::GetConsumerId() const
{
    return m_consumerId;
}

void EventBatchCaseDTO::SetConsumerId(const string& _consumerId)
{
    m_consumerId = _consumerId;
    m_consumerIdHasBeenSet = true;
}

bool EventBatchCaseDTO::ConsumerIdHasBeenSet() const
{
    return m_consumerIdHasBeenSet;
}

string EventBatchCaseDTO::GetDescription() const
{
    return m_description;
}

void EventBatchCaseDTO::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool EventBatchCaseDTO::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string EventBatchCaseDTO::GetEndDimension() const
{
    return m_endDimension;
}

void EventBatchCaseDTO::SetEndDimension(const string& _endDimension)
{
    m_endDimension = _endDimension;
    m_endDimensionHasBeenSet = true;
}

bool EventBatchCaseDTO::EndDimensionHasBeenSet() const
{
    return m_endDimensionHasBeenSet;
}

string EventBatchCaseDTO::GetEventSubType() const
{
    return m_eventSubType;
}

void EventBatchCaseDTO::SetEventSubType(const string& _eventSubType)
{
    m_eventSubType = _eventSubType;
    m_eventSubTypeHasBeenSet = true;
}

bool EventBatchCaseDTO::EventSubTypeHasBeenSet() const
{
    return m_eventSubTypeHasBeenSet;
}

