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

#include <tencentcloud/vod/v20180717/model/AigcQuotaItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AigcQuotaItem::AigcQuotaItem() :
    m_quotaTypeHasBeenSet(false),
    m_apiTokenHasBeenSet(false),
    m_quotaLimitHasBeenSet(false),
    m_usageHasBeenSet(false),
    m_quotaPeriodHasBeenSet(false),
    m_resetDayHasBeenSet(false),
    m_modelQuotaSwitchHasBeenSet(false),
    m_modelQuotasHasBeenSet(false)
{
}

CoreInternalOutcome AigcQuotaItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QuotaType") && !value["QuotaType"].IsNull())
    {
        if (!value["QuotaType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcQuotaItem.QuotaType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaType = string(value["QuotaType"].GetString());
        m_quotaTypeHasBeenSet = true;
    }

    if (value.HasMember("ApiToken") && !value["ApiToken"].IsNull())
    {
        if (!value["ApiToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcQuotaItem.ApiToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiToken = string(value["ApiToken"].GetString());
        m_apiTokenHasBeenSet = true;
    }

    if (value.HasMember("QuotaLimit") && !value["QuotaLimit"].IsNull())
    {
        if (!value["QuotaLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AigcQuotaItem.QuotaLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_quotaLimit = value["QuotaLimit"].GetUint64();
        m_quotaLimitHasBeenSet = true;
    }

    if (value.HasMember("Usage") && !value["Usage"].IsNull())
    {
        if (!value["Usage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AigcQuotaItem.Usage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usage = value["Usage"].GetUint64();
        m_usageHasBeenSet = true;
    }

    if (value.HasMember("QuotaPeriod") && !value["QuotaPeriod"].IsNull())
    {
        if (!value["QuotaPeriod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcQuotaItem.QuotaPeriod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaPeriod = string(value["QuotaPeriod"].GetString());
        m_quotaPeriodHasBeenSet = true;
    }

    if (value.HasMember("ResetDay") && !value["ResetDay"].IsNull())
    {
        if (!value["ResetDay"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AigcQuotaItem.ResetDay` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resetDay = value["ResetDay"].GetUint64();
        m_resetDayHasBeenSet = true;
    }

    if (value.HasMember("ModelQuotaSwitch") && !value["ModelQuotaSwitch"].IsNull())
    {
        if (!value["ModelQuotaSwitch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcQuotaItem.ModelQuotaSwitch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelQuotaSwitch = string(value["ModelQuotaSwitch"].GetString());
        m_modelQuotaSwitchHasBeenSet = true;
    }

    if (value.HasMember("ModelQuotas") && !value["ModelQuotas"].IsNull())
    {
        if (!value["ModelQuotas"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AigcQuotaItem.ModelQuotas` is not array type"));

        const rapidjson::Value &tmpValue = value["ModelQuotas"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AigcModelQuotaWithUsage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_modelQuotas.push_back(item);
        }
        m_modelQuotasHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AigcQuotaItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_quotaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quotaType.c_str(), allocator).Move(), allocator);
    }

    if (m_apiTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiToken.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quotaLimit, allocator);
    }

    if (m_usageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Usage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usage, allocator);
    }

    if (m_quotaPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quotaPeriod.c_str(), allocator).Move(), allocator);
    }

    if (m_resetDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResetDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resetDay, allocator);
    }

    if (m_modelQuotaSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelQuotaSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelQuotaSwitch.c_str(), allocator).Move(), allocator);
    }

    if (m_modelQuotasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelQuotas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_modelQuotas.begin(); itr != m_modelQuotas.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AigcQuotaItem::GetQuotaType() const
{
    return m_quotaType;
}

void AigcQuotaItem::SetQuotaType(const string& _quotaType)
{
    m_quotaType = _quotaType;
    m_quotaTypeHasBeenSet = true;
}

bool AigcQuotaItem::QuotaTypeHasBeenSet() const
{
    return m_quotaTypeHasBeenSet;
}

string AigcQuotaItem::GetApiToken() const
{
    return m_apiToken;
}

void AigcQuotaItem::SetApiToken(const string& _apiToken)
{
    m_apiToken = _apiToken;
    m_apiTokenHasBeenSet = true;
}

bool AigcQuotaItem::ApiTokenHasBeenSet() const
{
    return m_apiTokenHasBeenSet;
}

uint64_t AigcQuotaItem::GetQuotaLimit() const
{
    return m_quotaLimit;
}

void AigcQuotaItem::SetQuotaLimit(const uint64_t& _quotaLimit)
{
    m_quotaLimit = _quotaLimit;
    m_quotaLimitHasBeenSet = true;
}

bool AigcQuotaItem::QuotaLimitHasBeenSet() const
{
    return m_quotaLimitHasBeenSet;
}

uint64_t AigcQuotaItem::GetUsage() const
{
    return m_usage;
}

void AigcQuotaItem::SetUsage(const uint64_t& _usage)
{
    m_usage = _usage;
    m_usageHasBeenSet = true;
}

bool AigcQuotaItem::UsageHasBeenSet() const
{
    return m_usageHasBeenSet;
}

string AigcQuotaItem::GetQuotaPeriod() const
{
    return m_quotaPeriod;
}

void AigcQuotaItem::SetQuotaPeriod(const string& _quotaPeriod)
{
    m_quotaPeriod = _quotaPeriod;
    m_quotaPeriodHasBeenSet = true;
}

bool AigcQuotaItem::QuotaPeriodHasBeenSet() const
{
    return m_quotaPeriodHasBeenSet;
}

uint64_t AigcQuotaItem::GetResetDay() const
{
    return m_resetDay;
}

void AigcQuotaItem::SetResetDay(const uint64_t& _resetDay)
{
    m_resetDay = _resetDay;
    m_resetDayHasBeenSet = true;
}

bool AigcQuotaItem::ResetDayHasBeenSet() const
{
    return m_resetDayHasBeenSet;
}

string AigcQuotaItem::GetModelQuotaSwitch() const
{
    return m_modelQuotaSwitch;
}

void AigcQuotaItem::SetModelQuotaSwitch(const string& _modelQuotaSwitch)
{
    m_modelQuotaSwitch = _modelQuotaSwitch;
    m_modelQuotaSwitchHasBeenSet = true;
}

bool AigcQuotaItem::ModelQuotaSwitchHasBeenSet() const
{
    return m_modelQuotaSwitchHasBeenSet;
}

vector<AigcModelQuotaWithUsage> AigcQuotaItem::GetModelQuotas() const
{
    return m_modelQuotas;
}

void AigcQuotaItem::SetModelQuotas(const vector<AigcModelQuotaWithUsage>& _modelQuotas)
{
    m_modelQuotas = _modelQuotas;
    m_modelQuotasHasBeenSet = true;
}

bool AigcQuotaItem::ModelQuotasHasBeenSet() const
{
    return m_modelQuotasHasBeenSet;
}

