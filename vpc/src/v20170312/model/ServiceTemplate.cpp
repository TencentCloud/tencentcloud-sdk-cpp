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

#include <tencentcloud/vpc/v20170312/model/ServiceTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

ServiceTemplate::ServiceTemplate() :
    m_serviceTemplateIdHasBeenSet(false),
    m_serviceTemplateNameHasBeenSet(false),
    m_serviceSetHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
}

CoreInternalOutcome ServiceTemplate::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceTemplateId") && !value["ServiceTemplateId"].IsNull())
    {
        if (!value["ServiceTemplateId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServiceTemplate.ServiceTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceTemplateId = string(value["ServiceTemplateId"].GetString());
        m_serviceTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("ServiceTemplateName") && !value["ServiceTemplateName"].IsNull())
    {
        if (!value["ServiceTemplateName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServiceTemplate.ServiceTemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceTemplateName = string(value["ServiceTemplateName"].GetString());
        m_serviceTemplateNameHasBeenSet = true;
    }

    if (value.HasMember("ServiceSet") && !value["ServiceSet"].IsNull())
    {
        if (!value["ServiceSet"].IsArray())
            return CoreInternalOutcome(Error("response `ServiceTemplate.ServiceSet` is not array type"));

        const Value &tmpValue = value["ServiceSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_serviceSet.push_back((*itr).GetString());
        }
        m_serviceSetHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServiceTemplate.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceTemplate::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_serviceTemplateIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_serviceTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTemplateNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceTemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_serviceTemplateName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_serviceSet.begin(); itr != m_serviceSet.end(); ++itr)
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


string ServiceTemplate::GetServiceTemplateId() const
{
    return m_serviceTemplateId;
}

void ServiceTemplate::SetServiceTemplateId(const string& _serviceTemplateId)
{
    m_serviceTemplateId = _serviceTemplateId;
    m_serviceTemplateIdHasBeenSet = true;
}

bool ServiceTemplate::ServiceTemplateIdHasBeenSet() const
{
    return m_serviceTemplateIdHasBeenSet;
}

string ServiceTemplate::GetServiceTemplateName() const
{
    return m_serviceTemplateName;
}

void ServiceTemplate::SetServiceTemplateName(const string& _serviceTemplateName)
{
    m_serviceTemplateName = _serviceTemplateName;
    m_serviceTemplateNameHasBeenSet = true;
}

bool ServiceTemplate::ServiceTemplateNameHasBeenSet() const
{
    return m_serviceTemplateNameHasBeenSet;
}

vector<string> ServiceTemplate::GetServiceSet() const
{
    return m_serviceSet;
}

void ServiceTemplate::SetServiceSet(const vector<string>& _serviceSet)
{
    m_serviceSet = _serviceSet;
    m_serviceSetHasBeenSet = true;
}

bool ServiceTemplate::ServiceSetHasBeenSet() const
{
    return m_serviceSetHasBeenSet;
}

string ServiceTemplate::GetCreatedTime() const
{
    return m_createdTime;
}

void ServiceTemplate::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool ServiceTemplate::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

