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

#include <tencentcloud/tat/v20201028/model/GeneralResourceQuotaSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tat::V20201028::Model;
using namespace std;

GeneralResourceQuotaSet::GeneralResourceQuotaSet() :
    m_resourceNameHasBeenSet(false),
    m_resourceQuotaUsedHasBeenSet(false),
    m_resourceQuotaTotalHasBeenSet(false)
{
}

CoreInternalOutcome GeneralResourceQuotaSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralResourceQuotaSet.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceQuotaUsed") && !value["ResourceQuotaUsed"].IsNull())
    {
        if (!value["ResourceQuotaUsed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralResourceQuotaSet.ResourceQuotaUsed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceQuotaUsed = value["ResourceQuotaUsed"].GetInt64();
        m_resourceQuotaUsedHasBeenSet = true;
    }

    if (value.HasMember("ResourceQuotaTotal") && !value["ResourceQuotaTotal"].IsNull())
    {
        if (!value["ResourceQuotaTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralResourceQuotaSet.ResourceQuotaTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceQuotaTotal = value["ResourceQuotaTotal"].GetInt64();
        m_resourceQuotaTotalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GeneralResourceQuotaSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceQuotaUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceQuotaUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceQuotaUsed, allocator);
    }

    if (m_resourceQuotaTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceQuotaTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceQuotaTotal, allocator);
    }

}


string GeneralResourceQuotaSet::GetResourceName() const
{
    return m_resourceName;
}

void GeneralResourceQuotaSet::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool GeneralResourceQuotaSet::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

int64_t GeneralResourceQuotaSet::GetResourceQuotaUsed() const
{
    return m_resourceQuotaUsed;
}

void GeneralResourceQuotaSet::SetResourceQuotaUsed(const int64_t& _resourceQuotaUsed)
{
    m_resourceQuotaUsed = _resourceQuotaUsed;
    m_resourceQuotaUsedHasBeenSet = true;
}

bool GeneralResourceQuotaSet::ResourceQuotaUsedHasBeenSet() const
{
    return m_resourceQuotaUsedHasBeenSet;
}

int64_t GeneralResourceQuotaSet::GetResourceQuotaTotal() const
{
    return m_resourceQuotaTotal;
}

void GeneralResourceQuotaSet::SetResourceQuotaTotal(const int64_t& _resourceQuotaTotal)
{
    m_resourceQuotaTotal = _resourceQuotaTotal;
    m_resourceQuotaTotalHasBeenSet = true;
}

bool GeneralResourceQuotaSet::ResourceQuotaTotalHasBeenSet() const
{
    return m_resourceQuotaTotalHasBeenSet;
}

