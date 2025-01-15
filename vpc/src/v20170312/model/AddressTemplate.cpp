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
using namespace std;

AddressTemplate::AddressTemplate() :
    m_addressTemplateNameHasBeenSet(false),
    m_addressTemplateIdHasBeenSet(false),
    m_addressSetHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false),
    m_addressExtraSetHasBeenSet(false),
    m_tagSetHasBeenSet(false)
{
}

CoreInternalOutcome AddressTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AddressTemplateName") && !value["AddressTemplateName"].IsNull())
    {
        if (!value["AddressTemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddressTemplate.AddressTemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressTemplateName = string(value["AddressTemplateName"].GetString());
        m_addressTemplateNameHasBeenSet = true;
    }

    if (value.HasMember("AddressTemplateId") && !value["AddressTemplateId"].IsNull())
    {
        if (!value["AddressTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddressTemplate.AddressTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressTemplateId = string(value["AddressTemplateId"].GetString());
        m_addressTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("AddressSet") && !value["AddressSet"].IsNull())
    {
        if (!value["AddressSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AddressTemplate.AddressSet` is not array type"));

        const rapidjson::Value &tmpValue = value["AddressSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_addressSet.push_back((*itr).GetString());
        }
        m_addressSetHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddressTemplate.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdatedTime") && !value["UpdatedTime"].IsNull())
    {
        if (!value["UpdatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddressTemplate.UpdatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedTime = string(value["UpdatedTime"].GetString());
        m_updatedTimeHasBeenSet = true;
    }

    if (value.HasMember("AddressExtraSet") && !value["AddressExtraSet"].IsNull())
    {
        if (!value["AddressExtraSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AddressTemplate.AddressExtraSet` is not array type"));

        const rapidjson::Value &tmpValue = value["AddressExtraSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AddressInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_addressExtraSet.push_back(item);
        }
        m_addressExtraSetHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AddressTemplate.TagSet` is not array type"));

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

void AddressTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_addressTemplateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressTemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressTemplateName.c_str(), allocator).Move(), allocator);
    }

    if (m_addressTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_addressSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_addressSet.begin(); itr != m_addressSet.end(); ++itr)
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

    if (m_addressExtraSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressExtraSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_addressExtraSet.begin(); itr != m_addressExtraSet.end(); ++itr, ++i)
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

string AddressTemplate::GetUpdatedTime() const
{
    return m_updatedTime;
}

void AddressTemplate::SetUpdatedTime(const string& _updatedTime)
{
    m_updatedTime = _updatedTime;
    m_updatedTimeHasBeenSet = true;
}

bool AddressTemplate::UpdatedTimeHasBeenSet() const
{
    return m_updatedTimeHasBeenSet;
}

vector<AddressInfo> AddressTemplate::GetAddressExtraSet() const
{
    return m_addressExtraSet;
}

void AddressTemplate::SetAddressExtraSet(const vector<AddressInfo>& _addressExtraSet)
{
    m_addressExtraSet = _addressExtraSet;
    m_addressExtraSetHasBeenSet = true;
}

bool AddressTemplate::AddressExtraSetHasBeenSet() const
{
    return m_addressExtraSetHasBeenSet;
}

vector<Tag> AddressTemplate::GetTagSet() const
{
    return m_tagSet;
}

void AddressTemplate::SetTagSet(const vector<Tag>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool AddressTemplate::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

