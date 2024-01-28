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

#include <tencentcloud/svp/v20240125/model/CreateSavingPlanOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Svp::V20240125::Model;
using namespace std;

CreateSavingPlanOrderRequest::CreateSavingPlanOrderRequest() :
    m_regionIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_prePayTypeHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_commodityCodeHasBeenSet(false),
    m_promiseUseAmountHasBeenSet(false),
    m_specifyEffectTimeHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

string CreateSavingPlanOrderRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_regionId, allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_prePayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrePayType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_prePayType.c_str(), allocator).Move(), allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_commodityCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommodityCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_commodityCode.c_str(), allocator).Move(), allocator);
    }

    if (m_promiseUseAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromiseUseAmount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_promiseUseAmount, allocator);
    }

    if (m_specifyEffectTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecifyEffectTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_specifyEffectTime.c_str(), allocator).Move(), allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateSavingPlanOrderRequest::GetRegionId() const
{
    return m_regionId;
}

void CreateSavingPlanOrderRequest::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool CreateSavingPlanOrderRequest::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

int64_t CreateSavingPlanOrderRequest::GetZoneId() const
{
    return m_zoneId;
}

void CreateSavingPlanOrderRequest::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreateSavingPlanOrderRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string CreateSavingPlanOrderRequest::GetPrePayType() const
{
    return m_prePayType;
}

void CreateSavingPlanOrderRequest::SetPrePayType(const string& _prePayType)
{
    m_prePayType = _prePayType;
    m_prePayTypeHasBeenSet = true;
}

bool CreateSavingPlanOrderRequest::PrePayTypeHasBeenSet() const
{
    return m_prePayTypeHasBeenSet;
}

int64_t CreateSavingPlanOrderRequest::GetTimeSpan() const
{
    return m_timeSpan;
}

void CreateSavingPlanOrderRequest::SetTimeSpan(const int64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool CreateSavingPlanOrderRequest::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

string CreateSavingPlanOrderRequest::GetTimeUnit() const
{
    return m_timeUnit;
}

void CreateSavingPlanOrderRequest::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool CreateSavingPlanOrderRequest::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

string CreateSavingPlanOrderRequest::GetCommodityCode() const
{
    return m_commodityCode;
}

void CreateSavingPlanOrderRequest::SetCommodityCode(const string& _commodityCode)
{
    m_commodityCode = _commodityCode;
    m_commodityCodeHasBeenSet = true;
}

bool CreateSavingPlanOrderRequest::CommodityCodeHasBeenSet() const
{
    return m_commodityCodeHasBeenSet;
}

int64_t CreateSavingPlanOrderRequest::GetPromiseUseAmount() const
{
    return m_promiseUseAmount;
}

void CreateSavingPlanOrderRequest::SetPromiseUseAmount(const int64_t& _promiseUseAmount)
{
    m_promiseUseAmount = _promiseUseAmount;
    m_promiseUseAmountHasBeenSet = true;
}

bool CreateSavingPlanOrderRequest::PromiseUseAmountHasBeenSet() const
{
    return m_promiseUseAmountHasBeenSet;
}

string CreateSavingPlanOrderRequest::GetSpecifyEffectTime() const
{
    return m_specifyEffectTime;
}

void CreateSavingPlanOrderRequest::SetSpecifyEffectTime(const string& _specifyEffectTime)
{
    m_specifyEffectTime = _specifyEffectTime;
    m_specifyEffectTimeHasBeenSet = true;
}

bool CreateSavingPlanOrderRequest::SpecifyEffectTimeHasBeenSet() const
{
    return m_specifyEffectTimeHasBeenSet;
}

string CreateSavingPlanOrderRequest::GetClientToken() const
{
    return m_clientToken;
}

void CreateSavingPlanOrderRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool CreateSavingPlanOrderRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}


