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

#include <tencentcloud/wedata/v20210820/model/EventPublisherDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

EventPublisherDTO::EventPublisherDTO() :
    m_keyHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_creationTsHasBeenSet(false),
    m_propertiesListHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome EventPublisherDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventPublisherDTO.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventPublisherDTO.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("CreationTs") && !value["CreationTs"].IsNull())
    {
        if (!value["CreationTs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventPublisherDTO.CreationTs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTs = string(value["CreationTs"].GetString());
        m_creationTsHasBeenSet = true;
    }

    if (value.HasMember("PropertiesList") && !value["PropertiesList"].IsNull())
    {
        if (!value["PropertiesList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EventPublisherDTO.PropertiesList` is not array type"));

        const rapidjson::Value &tmpValue = value["PropertiesList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ParamInfoDs item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_propertiesList.push_back(item);
        }
        m_propertiesListHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventPublisherDTO.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventPublisherDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTs.c_str(), allocator).Move(), allocator);
    }

    if (m_propertiesListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PropertiesList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_propertiesList.begin(); itr != m_propertiesList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


string EventPublisherDTO::GetKey() const
{
    return m_key;
}

void EventPublisherDTO::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool EventPublisherDTO::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string EventPublisherDTO::GetType() const
{
    return m_type;
}

void EventPublisherDTO::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool EventPublisherDTO::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string EventPublisherDTO::GetCreationTs() const
{
    return m_creationTs;
}

void EventPublisherDTO::SetCreationTs(const string& _creationTs)
{
    m_creationTs = _creationTs;
    m_creationTsHasBeenSet = true;
}

bool EventPublisherDTO::CreationTsHasBeenSet() const
{
    return m_creationTsHasBeenSet;
}

vector<ParamInfoDs> EventPublisherDTO::GetPropertiesList() const
{
    return m_propertiesList;
}

void EventPublisherDTO::SetPropertiesList(const vector<ParamInfoDs>& _propertiesList)
{
    m_propertiesList = _propertiesList;
    m_propertiesListHasBeenSet = true;
}

bool EventPublisherDTO::PropertiesListHasBeenSet() const
{
    return m_propertiesListHasBeenSet;
}

string EventPublisherDTO::GetDescription() const
{
    return m_description;
}

void EventPublisherDTO::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool EventPublisherDTO::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

