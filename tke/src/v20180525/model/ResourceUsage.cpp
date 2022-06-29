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

#include <tencentcloud/tke/v20180525/model/ResourceUsage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ResourceUsage::ResourceUsage() :
    m_nameHasBeenSet(false),
    m_usageHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
}

CoreInternalOutcome ResourceUsage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceUsage.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Usage") && !value["Usage"].IsNull())
    {
        if (!value["Usage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceUsage.Usage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usage = value["Usage"].GetUint64();
        m_usageHasBeenSet = true;
    }

    if (value.HasMember("Details") && !value["Details"].IsNull())
    {
        if (!value["Details"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourceUsage.Details` is not array type"));

        const rapidjson::Value &tmpValue = value["Details"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResourceUsageDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_details.push_back(item);
        }
        m_detailsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceUsage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_usageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Usage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usage, allocator);
    }

    if (m_detailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Details";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_details.begin(); itr != m_details.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ResourceUsage::GetName() const
{
    return m_name;
}

void ResourceUsage::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ResourceUsage::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t ResourceUsage::GetUsage() const
{
    return m_usage;
}

void ResourceUsage::SetUsage(const uint64_t& _usage)
{
    m_usage = _usage;
    m_usageHasBeenSet = true;
}

bool ResourceUsage::UsageHasBeenSet() const
{
    return m_usageHasBeenSet;
}

vector<ResourceUsageDetail> ResourceUsage::GetDetails() const
{
    return m_details;
}

void ResourceUsage::SetDetails(const vector<ResourceUsageDetail>& _details)
{
    m_details = _details;
    m_detailsHasBeenSet = true;
}

bool ResourceUsage::DetailsHasBeenSet() const
{
    return m_detailsHasBeenSet;
}

