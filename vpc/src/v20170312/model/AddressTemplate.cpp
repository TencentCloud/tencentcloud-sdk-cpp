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

#include <tencentcloud/vpc/v20170312/model/AddressTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

AddressTemplate::AddressTemplate() :
    m_addressTemplateNameHasBeenSet(false),
    m_addressTemplateIdHasBeenSet(false),
    m_addressSetHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
}

CoreInternalOutcome AddressTemplate::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("AddressTemplateName") && !value["AddressTemplateName"].IsNull())
    {
        if (!value["AddressTemplateName"].IsString())
        {
            return CoreInternalOutcome(Error("response `AddressTemplate.AddressTemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressTemplateName = string(value["AddressTemplateName"].GetString());
        m_addressTemplateNameHasBeenSet = true;
    }

    if (value.HasMember("AddressTemplateId") && !value["AddressTemplateId"].IsNull())
    {
        if (!value["AddressTemplateId"].IsString())
        {
            return CoreInternalOutcome(Error("response `AddressTemplate.AddressTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressTemplateId = string(value["AddressTemplateId"].GetString());
        m_addressTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("AddressSet") && !value["AddressSet"].IsNull())
    {
        if (!value["AddressSet"].IsArray())
            return CoreInternalOutcome(Error("response `AddressTemplate.AddressSet` is not array type"));

        const Value &tmpValue = value["AddressSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_addressSet.push_back((*itr).GetString());
        }
        m_addressSetHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `AddressTemplate.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AddressTemplate::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_addressTemplateNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddressTemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_addressTemplateName.c_str(), allocator).Move(), allocator);
    }

    if (m_addressTemplateIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddressTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_addressTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_addressSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddressSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_addressSet.begin(); itr != m_addressSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_createdTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

}


string AddressTemplate::GetAddressTemplateName() const
{
    return m_addressTemplateName;
}

void AddressTemplate::SetAddressTemplateName(const string& _addressTemplateName)
{
    m_addressTemplateName = _addressTemplateName;
    m_addressTemplateNameHasBeenSet = true;
}

bool AddressTemplate::AddressTemplateNameHasBeenSet() const
{
    return m_addressTemplateNameHasBeenSet;
}

string AddressTemplate::GetAddressTemplateId() const
{
    return m_addressTemplateId;
}

void AddressTemplate::SetAddressTemplateId(const string& _addressTemplateId)
{
    m_addressTemplateId = _addressTemplateId;
    m_addressTemplateIdHasBeenSet = true;
}

bool AddressTemplate::AddressTemplateIdHasBeenSet() const
{
    return m_addressTemplateIdHasBeenSet;
}

vector<string> AddressTemplate::GetAddressSet() const
{
    return m_addressSet;
}

void AddressTemplate::SetAddressSet(const vector<string>& _addressSet)
{
    m_addressSet = _addressSet;
    m_addressSetHasBeenSet = true;
}

bool AddressTemplate::AddressSetHasBeenSet() const
{
    return m_addressSetHasBeenSet;
}

string AddressTemplate::GetCreatedTime() const
{
    return m_createdTime;
}

void AddressTemplate::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool AddressTemplate::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

