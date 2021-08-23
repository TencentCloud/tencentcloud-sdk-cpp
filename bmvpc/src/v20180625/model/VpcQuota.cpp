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

#include <tencentcloud/bmvpc/v20180625/model/VpcQuota.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmvpc::V20180625::Model;
using namespace std;

VpcQuota::VpcQuota() :
    m_typeIdHasBeenSet(false),
    m_quotaHasBeenSet(false)
{
}

CoreInternalOutcome VpcQuota::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TypeId") && !value["TypeId"].IsNull())
    {
        if (!value["TypeId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcQuota.TypeId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_typeId = value["TypeId"].GetUint64();
        m_typeIdHasBeenSet = true;
    }

    if (value.HasMember("Quota") && !value["Quota"].IsNull())
    {
        if (!value["Quota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcQuota.Quota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_quota = value["Quota"].GetUint64();
        m_quotaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VpcQuota::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_typeId, allocator);
    }

    if (m_quotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quota, allocator);
    }

}


uint64_t VpcQuota::GetTypeId() const
{
    return m_typeId;
}

void VpcQuota::SetTypeId(const uint64_t& _typeId)
{
    m_typeId = _typeId;
    m_typeIdHasBeenSet = true;
}

bool VpcQuota::TypeIdHasBeenSet() const
{
    return m_typeIdHasBeenSet;
}

uint64_t VpcQuota::GetQuota() const
{
    return m_quota;
}

void VpcQuota::SetQuota(const uint64_t& _quota)
{
    m_quota = _quota;
    m_quotaHasBeenSet = true;
}

bool VpcQuota::QuotaHasBeenSet() const
{
    return m_quotaHasBeenSet;
}

