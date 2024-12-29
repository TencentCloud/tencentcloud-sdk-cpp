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

#include <tencentcloud/emr/v20190103/model/DescribeResourceConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DescribeResourceConfig::DescribeResourceConfig() :
    m_resourceTypeHasBeenSet(false),
    m_resourceDataHasBeenSet(false)
{
}

CoreInternalOutcome DescribeResourceConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeResourceConfig.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceData") && !value["ResourceData"].IsNull())
    {
        if (!value["ResourceData"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeResourceConfig.ResourceData` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceData"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NodeResource item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceData.push_back(item);
        }
        m_resourceDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeResourceConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceData.begin(); itr != m_resourceData.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DescribeResourceConfig::GetResourceType() const
{
    return m_resourceType;
}

void DescribeResourceConfig::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool DescribeResourceConfig::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

vector<NodeResource> DescribeResourceConfig::GetResourceData() const
{
    return m_resourceData;
}

void DescribeResourceConfig::SetResourceData(const vector<NodeResource>& _resourceData)
{
    m_resourceData = _resourceData;
    m_resourceDataHasBeenSet = true;
}

bool DescribeResourceConfig::ResourceDataHasBeenSet() const
{
    return m_resourceDataHasBeenSet;
}

