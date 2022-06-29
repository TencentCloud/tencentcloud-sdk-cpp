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

#include <tencentcloud/acp/v20220105/model/ResourceUsageInfoData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Acp::V20220105::Model;
using namespace std;

ResourceUsageInfoData::ResourceUsageInfoData() :
    m_resourceNameHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_unusedCountHasBeenSet(false)
{
}

CoreInternalOutcome ResourceUsageInfoData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceUsageInfoData.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceUsageInfoData.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("UnusedCount") && !value["UnusedCount"].IsNull())
    {
        if (!value["UnusedCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceUsageInfoData.UnusedCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unusedCount = value["UnusedCount"].GetInt64();
        m_unusedCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceUsageInfoData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_unusedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnusedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unusedCount, allocator);
    }

}


string ResourceUsageInfoData::GetResourceName() const
{
    return m_resourceName;
}

void ResourceUsageInfoData::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool ResourceUsageInfoData::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

int64_t ResourceUsageInfoData::GetTotal() const
{
    return m_total;
}

void ResourceUsageInfoData::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool ResourceUsageInfoData::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

int64_t ResourceUsageInfoData::GetUnusedCount() const
{
    return m_unusedCount;
}

void ResourceUsageInfoData::SetUnusedCount(const int64_t& _unusedCount)
{
    m_unusedCount = _unusedCount;
    m_unusedCountHasBeenSet = true;
}

bool ResourceUsageInfoData::UnusedCountHasBeenSet() const
{
    return m_unusedCountHasBeenSet;
}

