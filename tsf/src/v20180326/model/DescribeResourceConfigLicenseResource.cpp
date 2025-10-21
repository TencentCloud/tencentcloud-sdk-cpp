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

#include <tencentcloud/tsf/v20180326/model/DescribeResourceConfigLicenseResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

DescribeResourceConfigLicenseResource::DescribeResourceConfigLicenseResource() :
    m_nameHasBeenSet(false),
    m_quotaHasBeenSet(false)
{
}

CoreInternalOutcome DescribeResourceConfigLicenseResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeResourceConfigLicenseResource.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Quota") && !value["Quota"].IsNull())
    {
        if (!value["Quota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeResourceConfigLicenseResource.Quota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_quota = value["Quota"].GetUint64();
        m_quotaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeResourceConfigLicenseResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quota, allocator);
    }

}


string DescribeResourceConfigLicenseResource::GetName() const
{
    return m_name;
}

void DescribeResourceConfigLicenseResource::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeResourceConfigLicenseResource::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t DescribeResourceConfigLicenseResource::GetQuota() const
{
    return m_quota;
}

void DescribeResourceConfigLicenseResource::SetQuota(const uint64_t& _quota)
{
    m_quota = _quota;
    m_quotaHasBeenSet = true;
}

bool DescribeResourceConfigLicenseResource::QuotaHasBeenSet() const
{
    return m_quotaHasBeenSet;
}

