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

#include <tencentcloud/wedata/v20210820/model/EventCaseDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

EventCaseDTO::EventCaseDTO() :
    m_caseIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_dimensionHasBeenSet(false),
    m_creationTsHasBeenSet(false),
    m_consumerIdHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome EventCaseDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CaseId") && !value["CaseId"].IsNull())
    {
        if (!value["CaseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventCaseDTO.CaseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_caseId = string(value["CaseId"].GetString());
        m_caseIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventCaseDTO.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Dimension") && !value["Dimension"].IsNull())
    {
        if (!value["Dimension"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventCaseDTO.Dimension` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dimension = string(value["Dimension"].GetString());
        m_dimensionHasBeenSet = true;
    }

    if (value.HasMember("CreationTs") && !value["CreationTs"].IsNull())
    {
        if (!value["CreationTs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventCaseDTO.CreationTs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTs = string(value["CreationTs"].GetString());
        m_creationTsHasBeenSet = true;
    }

    if (value.HasMember("ConsumerId") && !value["ConsumerId"].IsNull())
    {
        if (!value["ConsumerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventCaseDTO.ConsumerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerId = string(value["ConsumerId"].GetString());
        m_consumerIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventCaseDTO.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventCaseDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string EventCaseDTO::GetCaseId() const
{
    return m_caseId;
}

void EventCaseDTO::SetCaseId(const string& _caseId)
{
    m_caseId = _caseId;
    m_caseIdHasBeenSet = true;
}

bool EventCaseDTO::CaseIdHasBeenSet() const
{
    return m_caseIdHasBeenSet;
}

string EventCaseDTO::GetName() const
{
    return m_name;
}

void EventCaseDTO::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool EventCaseDTO::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string EventCaseDTO::GetDimension() const
{
    return m_dimension;
}

void EventCaseDTO::SetDimension(const string& _dimension)
{
    m_dimension = _dimension;
    m_dimensionHasBeenSet = true;
}

bool EventCaseDTO::DimensionHasBeenSet() const
{
    return m_dimensionHasBeenSet;
}

string EventCaseDTO::GetCreationTs() const
{
    return m_creationTs;
}

void EventCaseDTO::SetCreationTs(const string& _creationTs)
{
    m_creationTs = _creationTs;
    m_creationTsHasBeenSet = true;
}

bool EventCaseDTO::CreationTsHasBeenSet() const
{
    return m_creationTsHasBeenSet;
}

string EventCaseDTO::GetConsumerId() const
{
    return m_consumerId;
}

void EventCaseDTO::SetConsumerId(const string& _consumerId)
{
    m_consumerId = _consumerId;
    m_consumerIdHasBeenSet = true;
}

bool EventCaseDTO::ConsumerIdHasBeenSet() const
{
    return m_consumerIdHasBeenSet;
}

string EventCaseDTO::GetDescription() const
{
    return m_description;
}

void EventCaseDTO::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool EventCaseDTO::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

