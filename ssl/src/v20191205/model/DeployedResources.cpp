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

#include <tencentcloud/ssl/v20191205/model/DeployedResources.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

DeployedResources::DeployedResources() :
    m_certificateIdHasBeenSet(false),
    m_countHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_resourceIdsHasBeenSet(false),
    m_resourcesHasBeenSet(false)
{
}

CoreInternalOutcome DeployedResources::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CertificateId") && !value["CertificateId"].IsNull())
    {
        if (!value["CertificateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeployedResources.CertificateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificateId = string(value["CertificateId"].GetString());
        m_certificateIdHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeployedResources.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeployedResources.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ResourceIds") && !value["ResourceIds"].IsNull())
    {
        if (!value["ResourceIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeployedResources.ResourceIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_resourceIds.push_back((*itr).GetString());
        }
        m_resourceIdsHasBeenSet = true;
    }

    if (value.HasMember("Resources") && !value["Resources"].IsNull())
    {
        if (!value["Resources"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeployedResources.Resources` is not array type"));

        const rapidjson::Value &tmpValue = value["Resources"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_resources.push_back((*itr).GetString());
        }
        m_resourcesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeployedResources::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_certificateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certificateId.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceIds.begin(); itr != m_resourceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_resourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resources";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resources.begin(); itr != m_resources.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string DeployedResources::GetCertificateId() const
{
    return m_certificateId;
}

void DeployedResources::SetCertificateId(const string& _certificateId)
{
    m_certificateId = _certificateId;
    m_certificateIdHasBeenSet = true;
}

bool DeployedResources::CertificateIdHasBeenSet() const
{
    return m_certificateIdHasBeenSet;
}

int64_t DeployedResources::GetCount() const
{
    return m_count;
}

void DeployedResources::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool DeployedResources::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string DeployedResources::GetType() const
{
    return m_type;
}

void DeployedResources::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DeployedResources::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<string> DeployedResources::GetResourceIds() const
{
    return m_resourceIds;
}

void DeployedResources::SetResourceIds(const vector<string>& _resourceIds)
{
    m_resourceIds = _resourceIds;
    m_resourceIdsHasBeenSet = true;
}

bool DeployedResources::ResourceIdsHasBeenSet() const
{
    return m_resourceIdsHasBeenSet;
}

vector<string> DeployedResources::GetResources() const
{
    return m_resources;
}

void DeployedResources::SetResources(const vector<string>& _resources)
{
    m_resources = _resources;
    m_resourcesHasBeenSet = true;
}

bool DeployedResources::ResourcesHasBeenSet() const
{
    return m_resourcesHasBeenSet;
}

