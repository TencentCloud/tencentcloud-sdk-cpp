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

#include <tencentcloud/trp/v20210515/model/UsageQuota.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

UsageQuota::UsageQuota() :
    m_corpIdHasBeenSet(false),
    m_factoryCntHasBeenSet(false),
    m_itemCntHasBeenSet(false),
    m_trackCntHasBeenSet(false),
    m_saleCntHasBeenSet(false),
    m_chainCntHasBeenSet(false),
    m_riskCntHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome UsageQuota::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CorpId") && !value["CorpId"].IsNull())
    {
        if (!value["CorpId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageQuota.CorpId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_corpId = value["CorpId"].GetUint64();
        m_corpIdHasBeenSet = true;
    }

    if (value.HasMember("FactoryCnt") && !value["FactoryCnt"].IsNull())
    {
        if (!value["FactoryCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageQuota.FactoryCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_factoryCnt = value["FactoryCnt"].GetInt64();
        m_factoryCntHasBeenSet = true;
    }

    if (value.HasMember("ItemCnt") && !value["ItemCnt"].IsNull())
    {
        if (!value["ItemCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageQuota.ItemCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_itemCnt = value["ItemCnt"].GetInt64();
        m_itemCntHasBeenSet = true;
    }

    if (value.HasMember("TrackCnt") && !value["TrackCnt"].IsNull())
    {
        if (!value["TrackCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageQuota.TrackCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_trackCnt = value["TrackCnt"].GetInt64();
        m_trackCntHasBeenSet = true;
    }

    if (value.HasMember("SaleCnt") && !value["SaleCnt"].IsNull())
    {
        if (!value["SaleCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageQuota.SaleCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_saleCnt = value["SaleCnt"].GetInt64();
        m_saleCntHasBeenSet = true;
    }

    if (value.HasMember("ChainCnt") && !value["ChainCnt"].IsNull())
    {
        if (!value["ChainCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageQuota.ChainCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_chainCnt = value["ChainCnt"].GetInt64();
        m_chainCntHasBeenSet = true;
    }

    if (value.HasMember("RiskCnt") && !value["RiskCnt"].IsNull())
    {
        if (!value["RiskCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageQuota.RiskCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskCnt = value["RiskCnt"].GetInt64();
        m_riskCntHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageQuota.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UsageQuota::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_corpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_corpId, allocator);
    }

    if (m_factoryCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FactoryCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_factoryCnt, allocator);
    }

    if (m_itemCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_itemCnt, allocator);
    }

    if (m_trackCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrackCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trackCnt, allocator);
    }

    if (m_saleCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaleCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_saleCnt, allocator);
    }

    if (m_chainCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChainCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chainCnt, allocator);
    }

    if (m_riskCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskCnt, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t UsageQuota::GetCorpId() const
{
    return m_corpId;
}

void UsageQuota::SetCorpId(const uint64_t& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool UsageQuota::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}

int64_t UsageQuota::GetFactoryCnt() const
{
    return m_factoryCnt;
}

void UsageQuota::SetFactoryCnt(const int64_t& _factoryCnt)
{
    m_factoryCnt = _factoryCnt;
    m_factoryCntHasBeenSet = true;
}

bool UsageQuota::FactoryCntHasBeenSet() const
{
    return m_factoryCntHasBeenSet;
}

int64_t UsageQuota::GetItemCnt() const
{
    return m_itemCnt;
}

void UsageQuota::SetItemCnt(const int64_t& _itemCnt)
{
    m_itemCnt = _itemCnt;
    m_itemCntHasBeenSet = true;
}

bool UsageQuota::ItemCntHasBeenSet() const
{
    return m_itemCntHasBeenSet;
}

int64_t UsageQuota::GetTrackCnt() const
{
    return m_trackCnt;
}

void UsageQuota::SetTrackCnt(const int64_t& _trackCnt)
{
    m_trackCnt = _trackCnt;
    m_trackCntHasBeenSet = true;
}

bool UsageQuota::TrackCntHasBeenSet() const
{
    return m_trackCntHasBeenSet;
}

int64_t UsageQuota::GetSaleCnt() const
{
    return m_saleCnt;
}

void UsageQuota::SetSaleCnt(const int64_t& _saleCnt)
{
    m_saleCnt = _saleCnt;
    m_saleCntHasBeenSet = true;
}

bool UsageQuota::SaleCntHasBeenSet() const
{
    return m_saleCntHasBeenSet;
}

int64_t UsageQuota::GetChainCnt() const
{
    return m_chainCnt;
}

void UsageQuota::SetChainCnt(const int64_t& _chainCnt)
{
    m_chainCnt = _chainCnt;
    m_chainCntHasBeenSet = true;
}

bool UsageQuota::ChainCntHasBeenSet() const
{
    return m_chainCntHasBeenSet;
}

int64_t UsageQuota::GetRiskCnt() const
{
    return m_riskCnt;
}

void UsageQuota::SetRiskCnt(const int64_t& _riskCnt)
{
    m_riskCnt = _riskCnt;
    m_riskCntHasBeenSet = true;
}

bool UsageQuota::RiskCntHasBeenSet() const
{
    return m_riskCntHasBeenSet;
}

string UsageQuota::GetUpdateTime() const
{
    return m_updateTime;
}

void UsageQuota::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool UsageQuota::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

