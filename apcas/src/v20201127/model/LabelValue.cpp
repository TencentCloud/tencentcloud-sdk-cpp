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

#include <tencentcloud/apcas/v20201127/model/LabelValue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apcas::V20201127::Model;
using namespace std;

LabelValue::LabelValue() :
    m_proportionHasBeenSet(false),
    m_marketHasBeenSet(false),
    m_tgiHasBeenSet(false)
{
}

CoreInternalOutcome LabelValue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Proportion") && !value["Proportion"].IsNull())
    {
        if (!value["Proportion"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `LabelValue.Proportion` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_proportion = value["Proportion"].GetDouble();
        m_proportionHasBeenSet = true;
    }

    if (value.HasMember("Market") && !value["Market"].IsNull())
    {
        if (!value["Market"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `LabelValue.Market` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_market = value["Market"].GetDouble();
        m_marketHasBeenSet = true;
    }

    if (value.HasMember("Tgi") && !value["Tgi"].IsNull())
    {
        if (!value["Tgi"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `LabelValue.Tgi` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_tgi = value["Tgi"].GetDouble();
        m_tgiHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LabelValue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_proportionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Proportion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_proportion, allocator);
    }

    if (m_marketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Market";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_market, allocator);
    }

    if (m_tgiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tgi";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tgi, allocator);
    }

}


double LabelValue::GetProportion() const
{
    return m_proportion;
}

void LabelValue::SetProportion(const double& _proportion)
{
    m_proportion = _proportion;
    m_proportionHasBeenSet = true;
}

bool LabelValue::ProportionHasBeenSet() const
{
    return m_proportionHasBeenSet;
}

double LabelValue::GetMarket() const
{
    return m_market;
}

void LabelValue::SetMarket(const double& _market)
{
    m_market = _market;
    m_marketHasBeenSet = true;
}

bool LabelValue::MarketHasBeenSet() const
{
    return m_marketHasBeenSet;
}

double LabelValue::GetTgi() const
{
    return m_tgi;
}

void LabelValue::SetTgi(const double& _tgi)
{
    m_tgi = _tgi;
    m_tgiHasBeenSet = true;
}

bool LabelValue::TgiHasBeenSet() const
{
    return m_tgiHasBeenSet;
}

