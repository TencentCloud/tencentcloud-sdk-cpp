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

#include <tencentcloud/cfw/v20190904/model/OverviewBlockListQuota.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

OverviewBlockListQuota::OverviewBlockListQuota() :
    m_totalCntHasBeenSet(false),
    m_usedCntHasBeenSet(false),
    m_inUsedCntHasBeenSet(false),
    m_outUsedCntHasBeenSet(false)
{
}

CoreInternalOutcome OverviewBlockListQuota::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCnt") && !value["TotalCnt"].IsNull())
    {
        if (!value["TotalCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewBlockListQuota.TotalCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCnt = value["TotalCnt"].GetInt64();
        m_totalCntHasBeenSet = true;
    }

    if (value.HasMember("UsedCnt") && !value["UsedCnt"].IsNull())
    {
        if (!value["UsedCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewBlockListQuota.UsedCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedCnt = value["UsedCnt"].GetInt64();
        m_usedCntHasBeenSet = true;
    }

    if (value.HasMember("InUsedCnt") && !value["InUsedCnt"].IsNull())
    {
        if (!value["InUsedCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewBlockListQuota.InUsedCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inUsedCnt = value["InUsedCnt"].GetInt64();
        m_inUsedCntHasBeenSet = true;
    }

    if (value.HasMember("OutUsedCnt") && !value["OutUsedCnt"].IsNull())
    {
        if (!value["OutUsedCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewBlockListQuota.OutUsedCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outUsedCnt = value["OutUsedCnt"].GetInt64();
        m_outUsedCntHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OverviewBlockListQuota::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_inUsedCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InUsedCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inUsedCnt, allocator);
    }

    if (m_outUsedCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutUsedCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outUsedCnt, allocator);
    }

}


int64_t OverviewBlockListQuota::GetTotalCnt() const
{
    return m_totalCnt;
}

void OverviewBlockListQuota::SetTotalCnt(const int64_t& _totalCnt)
{
    m_totalCnt = _totalCnt;
    m_totalCntHasBeenSet = true;
}

bool OverviewBlockListQuota::TotalCntHasBeenSet() const
{
    return m_totalCntHasBeenSet;
}

int64_t OverviewBlockListQuota::GetUsedCnt() const
{
    return m_usedCnt;
}

void OverviewBlockListQuota::SetUsedCnt(const int64_t& _usedCnt)
{
    m_usedCnt = _usedCnt;
    m_usedCntHasBeenSet = true;
}

bool OverviewBlockListQuota::UsedCntHasBeenSet() const
{
    return m_usedCntHasBeenSet;
}

int64_t OverviewBlockListQuota::GetInUsedCnt() const
{
    return m_inUsedCnt;
}

void OverviewBlockListQuota::SetInUsedCnt(const int64_t& _inUsedCnt)
{
    m_inUsedCnt = _inUsedCnt;
    m_inUsedCntHasBeenSet = true;
}

bool OverviewBlockListQuota::InUsedCntHasBeenSet() const
{
    return m_inUsedCntHasBeenSet;
}

int64_t OverviewBlockListQuota::GetOutUsedCnt() const
{
    return m_outUsedCnt;
}

void OverviewBlockListQuota::SetOutUsedCnt(const int64_t& _outUsedCnt)
{
    m_outUsedCnt = _outUsedCnt;
    m_outUsedCntHasBeenSet = true;
}

bool OverviewBlockListQuota::OutUsedCntHasBeenSet() const
{
    return m_outUsedCntHasBeenSet;
}

