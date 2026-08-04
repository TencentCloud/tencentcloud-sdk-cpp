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

#include <tencentcloud/dlc/v20210125/model/ResourceQuota.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

ResourceQuota::ResourceQuota() :
    m_resourceSpecHasBeenSet(false),
    m_quotaHasBeenSet(false)
{
}

CoreInternalOutcome ResourceQuota::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceSpec") && !value["ResourceSpec"].IsNull())
    {
        if (!value["ResourceSpec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceQuota.ResourceSpec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resourceSpec.Deserialize(value["ResourceSpec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceSpecHasBeenSet = true;
    }

    if (value.HasMember("Quota") && !value["Quota"].IsNull())
    {
        if (!value["Quota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceQuota.Quota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_quota = value["Quota"].GetInt64();
        m_quotaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceQuota::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resourceSpec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_quotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quota, allocator);
    }

}


ResourceSpec ResourceQuota::GetResourceSpec() const
{
    return m_resourceSpec;
}

void ResourceQuota::SetResourceSpec(const ResourceSpec& _resourceSpec)
{
    m_resourceSpec = _resourceSpec;
    m_resourceSpecHasBeenSet = true;
}

bool ResourceQuota::ResourceSpecHasBeenSet() const
{
    return m_resourceSpecHasBeenSet;
}

int64_t ResourceQuota::GetQuota() const
{
    return m_quota;
}

void ResourceQuota::SetQuota(const int64_t& _quota)
{
    m_quota = _quota;
    m_quotaHasBeenSet = true;
}

bool ResourceQuota::QuotaHasBeenSet() const
{
    return m_quotaHasBeenSet;
}

