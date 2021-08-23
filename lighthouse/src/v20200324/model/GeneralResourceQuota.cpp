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

#include <tencentcloud/lighthouse/v20200324/model/GeneralResourceQuota.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

GeneralResourceQuota::GeneralResourceQuota() :
    m_resourceNameHasBeenSet(false),
    m_resourceQuotaAvailableHasBeenSet(false),
    m_resourceQuotaTotalHasBeenSet(false)
{
}

CoreInternalOutcome GeneralResourceQuota::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralResourceQuota.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceQuotaAvailable") && !value["ResourceQuotaAvailable"].IsNull())
    {
        if (!value["ResourceQuotaAvailable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralResourceQuota.ResourceQuotaAvailable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceQuotaAvailable = value["ResourceQuotaAvailable"].GetInt64();
        m_resourceQuotaAvailableHasBeenSet = true;
    }

    if (value.HasMember("ResourceQuotaTotal") && !value["ResourceQuotaTotal"].IsNull())
    {
        if (!value["ResourceQuotaTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralResourceQuota.ResourceQuotaTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceQuotaTotal = value["ResourceQuotaTotal"].GetInt64();
        m_resourceQuotaTotalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GeneralResourceQuota::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceQuotaAvailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceQuotaAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceQuotaAvailable, allocator);
    }

    if (m_resourceQuotaTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceQuotaTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceQuotaTotal, allocator);
    }

}


string GeneralResourceQuota::GetResourceName() const
{
    return m_resourceName;
}

void GeneralResourceQuota::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool GeneralResourceQuota::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

int64_t GeneralResourceQuota::GetResourceQuotaAvailable() const
{
    return m_resourceQuotaAvailable;
}

void GeneralResourceQuota::SetResourceQuotaAvailable(const int64_t& _resourceQuotaAvailable)
{
    m_resourceQuotaAvailable = _resourceQuotaAvailable;
    m_resourceQuotaAvailableHasBeenSet = true;
}

bool GeneralResourceQuota::ResourceQuotaAvailableHasBeenSet() const
{
    return m_resourceQuotaAvailableHasBeenSet;
}

int64_t GeneralResourceQuota::GetResourceQuotaTotal() const
{
    return m_resourceQuotaTotal;
}

void GeneralResourceQuota::SetResourceQuotaTotal(const int64_t& _resourceQuotaTotal)
{
    m_resourceQuotaTotal = _resourceQuotaTotal;
    m_resourceQuotaTotalHasBeenSet = true;
}

bool GeneralResourceQuota::ResourceQuotaTotalHasBeenSet() const
{
    return m_resourceQuotaTotalHasBeenSet;
}

