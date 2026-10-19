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

#include <tencentcloud/cfw/v20190904/model/OverviewBlockListQuotaDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

OverviewBlockListQuotaDetail::OverviewBlockListQuotaDetail() :
    m_totalCntHasBeenSet(false),
    m_usedCntHasBeenSet(false),
    m_remainCntHasBeenSet(false),
    m_baseTotalCntHasBeenSet(false),
    m_baseUsedCntHasBeenSet(false),
    m_baseRemainCntHasBeenSet(false),
    m_extensionTotalCntHasBeenSet(false),
    m_extensionUsedCntHasBeenSet(false),
    m_extensionRemainCntHasBeenSet(false)
{
}

CoreInternalOutcome OverviewBlockListQuotaDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCnt") && !value["TotalCnt"].IsNull())
    {
        if (!value["TotalCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewBlockListQuotaDetail.TotalCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCnt = value["TotalCnt"].GetInt64();
        m_totalCntHasBeenSet = true;
    }

    if (value.HasMember("UsedCnt") && !value["UsedCnt"].IsNull())
    {
        if (!value["UsedCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewBlockListQuotaDetail.UsedCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedCnt = value["UsedCnt"].GetInt64();
        m_usedCntHasBeenSet = true;
    }

    if (value.HasMember("RemainCnt") && !value["RemainCnt"].IsNull())
    {
        if (!value["RemainCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewBlockListQuotaDetail.RemainCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remainCnt = value["RemainCnt"].GetInt64();
        m_remainCntHasBeenSet = true;
    }

    if (value.HasMember("BaseTotalCnt") && !value["BaseTotalCnt"].IsNull())
    {
        if (!value["BaseTotalCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewBlockListQuotaDetail.BaseTotalCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_baseTotalCnt = value["BaseTotalCnt"].GetInt64();
        m_baseTotalCntHasBeenSet = true;
    }

    if (value.HasMember("BaseUsedCnt") && !value["BaseUsedCnt"].IsNull())
    {
        if (!value["BaseUsedCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewBlockListQuotaDetail.BaseUsedCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_baseUsedCnt = value["BaseUsedCnt"].GetInt64();
        m_baseUsedCntHasBeenSet = true;
    }

    if (value.HasMember("BaseRemainCnt") && !value["BaseRemainCnt"].IsNull())
    {
        if (!value["BaseRemainCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewBlockListQuotaDetail.BaseRemainCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_baseRemainCnt = value["BaseRemainCnt"].GetInt64();
        m_baseRemainCntHasBeenSet = true;
    }

    if (value.HasMember("ExtensionTotalCnt") && !value["ExtensionTotalCnt"].IsNull())
    {
        if (!value["ExtensionTotalCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewBlockListQuotaDetail.ExtensionTotalCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_extensionTotalCnt = value["ExtensionTotalCnt"].GetInt64();
        m_extensionTotalCntHasBeenSet = true;
    }

    if (value.HasMember("ExtensionUsedCnt") && !value["ExtensionUsedCnt"].IsNull())
    {
        if (!value["ExtensionUsedCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewBlockListQuotaDetail.ExtensionUsedCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_extensionUsedCnt = value["ExtensionUsedCnt"].GetInt64();
        m_extensionUsedCntHasBeenSet = true;
    }

    if (value.HasMember("ExtensionRemainCnt") && !value["ExtensionRemainCnt"].IsNull())
    {
        if (!value["ExtensionRemainCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewBlockListQuotaDetail.ExtensionRemainCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_extensionRemainCnt = value["ExtensionRemainCnt"].GetInt64();
        m_extensionRemainCntHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OverviewBlockListQuotaDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCnt, allocator);
    }

    if (m_usedCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedCnt, allocator);
    }

    if (m_remainCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainCnt, allocator);
    }

    if (m_baseTotalCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseTotalCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_baseTotalCnt, allocator);
    }

    if (m_baseUsedCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseUsedCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_baseUsedCnt, allocator);
    }

    if (m_baseRemainCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseRemainCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_baseRemainCnt, allocator);
    }

    if (m_extensionTotalCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtensionTotalCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_extensionTotalCnt, allocator);
    }

    if (m_extensionUsedCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtensionUsedCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_extensionUsedCnt, allocator);
    }

    if (m_extensionRemainCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtensionRemainCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_extensionRemainCnt, allocator);
    }

}


int64_t OverviewBlockListQuotaDetail::GetTotalCnt() const
{
    return m_totalCnt;
}

void OverviewBlockListQuotaDetail::SetTotalCnt(const int64_t& _totalCnt)
{
    m_totalCnt = _totalCnt;
    m_totalCntHasBeenSet = true;
}

bool OverviewBlockListQuotaDetail::TotalCntHasBeenSet() const
{
    return m_totalCntHasBeenSet;
}

int64_t OverviewBlockListQuotaDetail::GetUsedCnt() const
{
    return m_usedCnt;
}

void OverviewBlockListQuotaDetail::SetUsedCnt(const int64_t& _usedCnt)
{
    m_usedCnt = _usedCnt;
    m_usedCntHasBeenSet = true;
}

bool OverviewBlockListQuotaDetail::UsedCntHasBeenSet() const
{
    return m_usedCntHasBeenSet;
}

int64_t OverviewBlockListQuotaDetail::GetRemainCnt() const
{
    return m_remainCnt;
}

void OverviewBlockListQuotaDetail::SetRemainCnt(const int64_t& _remainCnt)
{
    m_remainCnt = _remainCnt;
    m_remainCntHasBeenSet = true;
}

bool OverviewBlockListQuotaDetail::RemainCntHasBeenSet() const
{
    return m_remainCntHasBeenSet;
}

int64_t OverviewBlockListQuotaDetail::GetBaseTotalCnt() const
{
    return m_baseTotalCnt;
}

void OverviewBlockListQuotaDetail::SetBaseTotalCnt(const int64_t& _baseTotalCnt)
{
    m_baseTotalCnt = _baseTotalCnt;
    m_baseTotalCntHasBeenSet = true;
}

bool OverviewBlockListQuotaDetail::BaseTotalCntHasBeenSet() const
{
    return m_baseTotalCntHasBeenSet;
}

int64_t OverviewBlockListQuotaDetail::GetBaseUsedCnt() const
{
    return m_baseUsedCnt;
}

void OverviewBlockListQuotaDetail::SetBaseUsedCnt(const int64_t& _baseUsedCnt)
{
    m_baseUsedCnt = _baseUsedCnt;
    m_baseUsedCntHasBeenSet = true;
}

bool OverviewBlockListQuotaDetail::BaseUsedCntHasBeenSet() const
{
    return m_baseUsedCntHasBeenSet;
}

int64_t OverviewBlockListQuotaDetail::GetBaseRemainCnt() const
{
    return m_baseRemainCnt;
}

void OverviewBlockListQuotaDetail::SetBaseRemainCnt(const int64_t& _baseRemainCnt)
{
    m_baseRemainCnt = _baseRemainCnt;
    m_baseRemainCntHasBeenSet = true;
}

bool OverviewBlockListQuotaDetail::BaseRemainCntHasBeenSet() const
{
    return m_baseRemainCntHasBeenSet;
}

int64_t OverviewBlockListQuotaDetail::GetExtensionTotalCnt() const
{
    return m_extensionTotalCnt;
}

void OverviewBlockListQuotaDetail::SetExtensionTotalCnt(const int64_t& _extensionTotalCnt)
{
    m_extensionTotalCnt = _extensionTotalCnt;
    m_extensionTotalCntHasBeenSet = true;
}

bool OverviewBlockListQuotaDetail::ExtensionTotalCntHasBeenSet() const
{
    return m_extensionTotalCntHasBeenSet;
}

int64_t OverviewBlockListQuotaDetail::GetExtensionUsedCnt() const
{
    return m_extensionUsedCnt;
}

void OverviewBlockListQuotaDetail::SetExtensionUsedCnt(const int64_t& _extensionUsedCnt)
{
    m_extensionUsedCnt = _extensionUsedCnt;
    m_extensionUsedCntHasBeenSet = true;
}

bool OverviewBlockListQuotaDetail::ExtensionUsedCntHasBeenSet() const
{
    return m_extensionUsedCntHasBeenSet;
}

int64_t OverviewBlockListQuotaDetail::GetExtensionRemainCnt() const
{
    return m_extensionRemainCnt;
}

void OverviewBlockListQuotaDetail::SetExtensionRemainCnt(const int64_t& _extensionRemainCnt)
{
    m_extensionRemainCnt = _extensionRemainCnt;
    m_extensionRemainCntHasBeenSet = true;
}

bool OverviewBlockListQuotaDetail::ExtensionRemainCntHasBeenSet() const
{
    return m_extensionRemainCntHasBeenSet;
}

