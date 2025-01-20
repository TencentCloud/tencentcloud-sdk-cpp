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

#include <tencentcloud/vpc/v20170312/model/ServiceTemplateGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ServiceTemplateGroup::ServiceTemplateGroup() :
    m_serviceTemplateGroupIdHasBeenSet(false),
    m_serviceTemplateGroupNameHasBeenSet(false),
    m_serviceTemplateIdSetHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false),
    m_serviceTemplateSetHasBeenSet(false),
    m_tagSetHasBeenSet(false)
{
}

CoreInternalOutcome ServiceTemplateGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceTemplateGroupId") && !value["ServiceTemplateGroupId"].IsNull())
    {
        if (!value["ServiceTemplateGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceTemplateGroup.ServiceTemplateGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceTemplateGroupId = string(value["ServiceTemplateGroupId"].GetString());
        m_serviceTemplateGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ServiceTemplateGroupName") && !value["ServiceTemplateGroupName"].IsNull())
    {
        if (!value["ServiceTemplateGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceTemplateGroup.ServiceTemplateGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceTemplateGroupName = string(value["ServiceTemplateGroupName"].GetString());
        m_serviceTemplateGroupNameHasBeenSet = true;
    }

    if (value.HasMember("ServiceTemplateIdSet") && !value["ServiceTemplateIdSet"].IsNull())
    {
        if (!value["ServiceTemplateIdSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceTemplateGroup.ServiceTemplateIdSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ServiceTemplateIdSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_serviceTemplateIdSet.push_back((*itr).GetString());
        }
        m_serviceTemplateIdSetHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceTemplateGroup.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdatedTime") && !value["UpdatedTime"].IsNull())
    {
        if (!value["UpdatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceTemplateGroup.UpdatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedTime = string(value["UpdatedTime"].GetString());
        m_updatedTimeHasBeenSet = true;
    }

    if (value.HasMember("ServiceTemplateSet") && !value["ServiceTemplateSet"].IsNull())
    {
        if (!value["ServiceTemplateSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceTemplateGroup.ServiceTemplateSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ServiceTemplateSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ServiceTemplate item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_serviceTemplateSet.push_back(item);
        }
        m_serviceTemplateSetHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceTemplateGroup.TagSet` is not array type"));

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

void ServiceTemplateGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceTemplateGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceTemplateGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceTemplateGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTemplateGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceTemplateGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceTemplateGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTemplateIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceTemplateIdSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_serviceTemplateIdSet.begin(); itr != m_serviceTemplateIdSet.end(); ++itr)
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

    if (m_serviceTemplateSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceTemplateSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serviceTemplateSet.begin(); itr != m_serviceTemplateSet.end(); ++itr, ++i)
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


string ServiceTemplateGroup::GetServiceTemplateGroupId() const
{
    return m_serviceTemplateGroupId;
}

void ServiceTemplateGroup::SetServiceTemplateGroupId(const string& _serviceTemplateGroupId)
{
    m_serviceTemplateGroupId = _serviceTemplateGroupId;
    m_serviceTemplateGroupIdHasBeenSet = true;
}

bool ServiceTemplateGroup::ServiceTemplateGroupIdHasBeenSet() const
{
    return m_serviceTemplateGroupIdHasBeenSet;
}

string ServiceTemplateGroup::GetServiceTemplateGroupName() const
{
    return m_serviceTemplateGroupName;
}

void ServiceTemplateGroup::SetServiceTemplateGroupName(const string& _serviceTemplateGroupName)
{
    m_serviceTemplateGroupName = _serviceTemplateGroupName;
    m_serviceTemplateGroupNameHasBeenSet = true;
}

bool ServiceTemplateGroup::ServiceTemplateGroupNameHasBeenSet() const
{
    return m_serviceTemplateGroupNameHasBeenSet;
}

vector<string> ServiceTemplateGroup::GetServiceTemplateIdSet() const
{
    return m_serviceTemplateIdSet;
}

void ServiceTemplateGroup::SetServiceTemplateIdSet(const vector<string>& _serviceTemplateIdSet)
{
    m_serviceTemplateIdSet = _serviceTemplateIdSet;
    m_serviceTemplateIdSetHasBeenSet = true;
}

bool ServiceTemplateGroup::ServiceTemplateIdSetHasBeenSet() const
{
    return m_serviceTemplateIdSetHasBeenSet;
}

string ServiceTemplateGroup::GetCreatedTime() const
{
    return m_createdTime;
}

void ServiceTemplateGroup::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool ServiceTemplateGroup::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string ServiceTemplateGroup::GetUpdatedTime() const
{
    return m_updatedTime;
}

void ServiceTemplateGroup::SetUpdatedTime(const string& _updatedTime)
{
    m_updatedTime = _updatedTime;
    m_updatedTimeHasBeenSet = true;
}

bool ServiceTemplateGroup::UpdatedTimeHasBeenSet() const
{
    return m_updatedTimeHasBeenSet;
}

vector<ServiceTemplate> ServiceTemplateGroup::GetServiceTemplateSet() const
{
    return m_serviceTemplateSet;
}

void ServiceTemplateGroup::SetServiceTemplateSet(const vector<ServiceTemplate>& _serviceTemplateSet)
{
    m_serviceTemplateSet = _serviceTemplateSet;
    m_serviceTemplateSetHasBeenSet = true;
}

bool ServiceTemplateGroup::ServiceTemplateSetHasBeenSet() const
{
    return m_serviceTemplateSetHasBeenSet;
}

vector<Tag> ServiceTemplateGroup::GetTagSet() const
{
    return m_tagSet;
}

void ServiceTemplateGroup::SetTagSet(const vector<Tag>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool ServiceTemplateGroup::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

