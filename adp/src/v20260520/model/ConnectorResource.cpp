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

#include <tencentcloud/adp/v20260520/model/ConnectorResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ConnectorResource::ConnectorResource() :
    m_typeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ancestorListHasBeenSet(false)
{
}

CoreInternalOutcome ConnectorResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectorResource.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectorResource.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectorResource.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("AncestorList") && !value["AncestorList"].IsNull())
    {
        if (!value["AncestorList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConnectorResource.AncestorList` is not array type"));

        const rapidjson::Value &tmpValue = value["AncestorList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConnectorResourceRef item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ancestorList.push_back(item);
        }
        m_ancestorListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConnectorResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_ancestorListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AncestorList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ancestorList.begin(); itr != m_ancestorList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t ConnectorResource::GetType() const
{
    return m_type;
}

void ConnectorResource::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ConnectorResource::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ConnectorResource::GetResourceId() const
{
    return m_resourceId;
}

void ConnectorResource::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ConnectorResource::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string ConnectorResource::GetName() const
{
    return m_name;
}

void ConnectorResource::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ConnectorResource::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<ConnectorResourceRef> ConnectorResource::GetAncestorList() const
{
    return m_ancestorList;
}

void ConnectorResource::SetAncestorList(const vector<ConnectorResourceRef>& _ancestorList)
{
    m_ancestorList = _ancestorList;
    m_ancestorListHasBeenSet = true;
}

bool ConnectorResource::AncestorListHasBeenSet() const
{
    return m_ancestorListHasBeenSet;
}

