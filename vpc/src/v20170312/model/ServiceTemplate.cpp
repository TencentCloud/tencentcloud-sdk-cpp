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
using namespace std;

ServiceTemplate::ServiceTemplate() :
    m_serviceTemplateIdHasBeenSet(false),
    m_serviceTemplateNameHasBeenSet(false),
    m_serviceSetHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false),
    m_serviceExtraSetHasBeenSet(false),
    m_tagSetHasBeenSet(false)
{
}

CoreInternalOutcome ServiceTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceTemplateId") && !value["ServiceTemplateId"].IsNull())
    {
        if (!value["ServiceTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceTemplate.ServiceTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceTemplateId = string(value["ServiceTemplateId"].GetString());
        m_serviceTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("ServiceTemplateName") && !value["ServiceTemplateName"].IsNull())
    {
        if (!value["ServiceTemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceTemplate.ServiceTemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceTemplateName = string(value["ServiceTemplateName"].GetString());
        m_serviceTemplateNameHasBeenSet = true;
    }

    if (value.HasMember("ServiceSet") && !value["ServiceSet"].IsNull())
    {
        if (!value["ServiceSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceTemplate.ServiceSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ServiceSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_serviceSet.push_back((*itr).GetString());
        }
        m_serviceSetHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceTemplate.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdatedTime") && !value["UpdatedTime"].IsNull())
    {
        if (!value["UpdatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceTemplate.UpdatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedTime = string(value["UpdatedTime"].GetString());
        m_updatedTimeHasBeenSet = true;
    }

    if (value.HasMember("ServiceExtraSet") && !value["ServiceExtraSet"].IsNull())
    {
        if (!value["ServiceExtraSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceTemplate.ServiceExtraSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ServiceExtraSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ServicesInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_serviceExtraSet.push_back(item);
        }
        m_serviceExtraSetHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceTemplate.TagSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TagSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagSet.push_back(item);
        }
        m_tagSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTemplateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceTemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceTemplateName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_serviceSet.begin(); itr != m_serviceSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceExtraSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceExtraSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serviceExtraSet.begin(); itr != m_serviceExtraSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tagSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSet.begin(); itr != m_tagSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

string ServiceTemplate::GetUpdatedTime() const
{
    return m_updatedTime;
}

void ServiceTemplate::SetUpdatedTime(const string& _updatedTime)
{
    m_updatedTime = _updatedTime;
    m_updatedTimeHasBeenSet = true;
}

bool ServiceTemplate::UpdatedTimeHasBeenSet() const
{
    return m_updatedTimeHasBeenSet;
}

vector<ServicesInfo> ServiceTemplate::GetServiceExtraSet() const
{
    return m_serviceExtraSet;
}

void ServiceTemplate::SetServiceExtraSet(const vector<ServicesInfo>& _serviceExtraSet)
{
    m_serviceExtraSet = _serviceExtraSet;
    m_serviceExtraSetHasBeenSet = true;
}

bool ServiceTemplate::ServiceExtraSetHasBeenSet() const
{
    return m_serviceExtraSetHasBeenSet;
}

vector<Tag> ServiceTemplate::GetTagSet() const
{
    return m_tagSet;
}

void ServiceTemplate::SetTagSet(const vector<Tag>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool ServiceTemplate::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

