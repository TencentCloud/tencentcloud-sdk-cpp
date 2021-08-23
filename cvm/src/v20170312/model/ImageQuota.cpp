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

#include <tencentcloud/cvm/v20170312/model/ImageQuota.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

ImageQuota::ImageQuota() :
    m_usedQuotaHasBeenSet(false),
    m_totalQuotaHasBeenSet(false)
{
}

CoreInternalOutcome ImageQuota::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UsedQuota") && !value["UsedQuota"].IsNull())
    {
        if (!value["UsedQuota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageQuota.UsedQuota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedQuota = value["UsedQuota"].GetUint64();
        m_usedQuotaHasBeenSet = true;
    }

    if (value.HasMember("TotalQuota") && !value["TotalQuota"].IsNull())
    {
        if (!value["TotalQuota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageQuota.TotalQuota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalQuota = value["TotalQuota"].GetUint64();
        m_totalQuotaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageQuota::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_usedQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedQuota, allocator);
    }

    if (m_totalQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalQuota, allocator);
    }

}


uint64_t ImageQuota::GetUsedQuota() const
{
    return m_usedQuota;
}

void ImageQuota::SetUsedQuota(const uint64_t& _usedQuota)
{
    m_usedQuota = _usedQuota;
    m_usedQuotaHasBeenSet = true;
}

bool ImageQuota::UsedQuotaHasBeenSet() const
{
    return m_usedQuotaHasBeenSet;
}

uint64_t ImageQuota::GetTotalQuota() const
{
    return m_totalQuota;
}

void ImageQuota::SetTotalQuota(const uint64_t& _totalQuota)
{
    m_totalQuota = _totalQuota;
    m_totalQuotaHasBeenSet = true;
}

bool ImageQuota::TotalQuotaHasBeenSet() const
{
    return m_totalQuotaHasBeenSet;
}

