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

#include <tencentcloud/organization/v20210331/model/ResourceTagMapping.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

ResourceTagMapping::ResourceTagMapping() :
    m_resourceHasBeenSet(false),
    m_complianceDetailsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome ResourceTagMapping::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceTagMapping.Resource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resource = string(value["Resource"].GetString());
        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("ComplianceDetails") && !value["ComplianceDetails"].IsNull())
    {
        if (!value["ComplianceDetails"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceTagMapping.ComplianceDetails` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_complianceDetails.Deserialize(value["ComplianceDetails"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_complianceDetailsHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourceTagMapping.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tags item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceTagMapping::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resource.c_str(), allocator).Move(), allocator);
    }

    if (m_complianceDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_complianceDetails.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ResourceTagMapping::GetResource() const
{
    return m_resource;
}

void ResourceTagMapping::SetResource(const string& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool ResourceTagMapping::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

TagComplianceDetails ResourceTagMapping::GetComplianceDetails() const
{
    return m_complianceDetails;
}

void ResourceTagMapping::SetComplianceDetails(const TagComplianceDetails& _complianceDetails)
{
    m_complianceDetails = _complianceDetails;
    m_complianceDetailsHasBeenSet = true;
}

bool ResourceTagMapping::ComplianceDetailsHasBeenSet() const
{
    return m_complianceDetailsHasBeenSet;
}

vector<Tags> ResourceTagMapping::GetTags() const
{
    return m_tags;
}

void ResourceTagMapping::SetTags(const vector<Tags>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ResourceTagMapping::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

