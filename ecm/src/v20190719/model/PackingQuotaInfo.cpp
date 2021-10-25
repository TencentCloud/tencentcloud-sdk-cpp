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

#include <tencentcloud/ecm/v20190719/model/PackingQuotaInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

PackingQuotaInfo::PackingQuotaInfo() :
    m_instanceTypeHasBeenSet(false),
    m_packingQuotaHasBeenSet(false)
{
}

CoreInternalOutcome PackingQuotaInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackingQuotaInfo.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("PackingQuota") && !value["PackingQuota"].IsNull())
    {
        if (!value["PackingQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PackingQuotaInfo.PackingQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_packingQuota = value["PackingQuota"].GetInt64();
        m_packingQuotaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PackingQuotaInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_packingQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackingQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packingQuota, allocator);
    }

}


string PackingQuotaInfo::GetInstanceType() const
{
    return m_instanceType;
}

void PackingQuotaInfo::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool PackingQuotaInfo::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

int64_t PackingQuotaInfo::GetPackingQuota() const
{
    return m_packingQuota;
}

void PackingQuotaInfo::SetPackingQuota(const int64_t& _packingQuota)
{
    m_packingQuota = _packingQuota;
    m_packingQuotaHasBeenSet = true;
}

bool PackingQuotaInfo::PackingQuotaHasBeenSet() const
{
    return m_packingQuotaHasBeenSet;
}

