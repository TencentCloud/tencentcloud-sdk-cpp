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

#include <tencentcloud/captcha/v20190722/model/CaptchaOperDataTryTimesUnit.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Captcha::V20190722::Model;
using namespace std;

CaptchaOperDataTryTimesUnit::CaptchaOperDataTryTimesUnit() :
    m_dateKeyHasBeenSet(false),
    m_cntPerPassHasBeenSet(false),
    m_marketCntPerPassHasBeenSet(false)
{
}

CoreInternalOutcome CaptchaOperDataTryTimesUnit::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DateKey") && !value["DateKey"].IsNull())
    {
        if (!value["DateKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CaptchaOperDataTryTimesUnit.DateKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateKey = string(value["DateKey"].GetString());
        m_dateKeyHasBeenSet = true;
    }

    if (value.HasMember("CntPerPass") && !value["CntPerPass"].IsNull())
    {
        if (!value["CntPerPass"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CaptchaOperDataTryTimesUnit.CntPerPass` is not array type"));

        const rapidjson::Value &tmpValue = value["CntPerPass"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_cntPerPass.push_back((*itr).GetDouble());
        }
        m_cntPerPassHasBeenSet = true;
    }

    if (value.HasMember("MarketCntPerPass") && !value["MarketCntPerPass"].IsNull())
    {
        if (!value["MarketCntPerPass"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CaptchaOperDataTryTimesUnit.MarketCntPerPass` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_marketCntPerPass = value["MarketCntPerPass"].GetDouble();
        m_marketCntPerPassHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CaptchaOperDataTryTimesUnit::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dateKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateKey.c_str(), allocator).Move(), allocator);
    }

    if (m_cntPerPassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CntPerPass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cntPerPass.begin(); itr != m_cntPerPass.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

    if (m_marketCntPerPassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarketCntPerPass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_marketCntPerPass, allocator);
    }

}


string CaptchaOperDataTryTimesUnit::GetDateKey() const
{
    return m_dateKey;
}

void CaptchaOperDataTryTimesUnit::SetDateKey(const string& _dateKey)
{
    m_dateKey = _dateKey;
    m_dateKeyHasBeenSet = true;
}

bool CaptchaOperDataTryTimesUnit::DateKeyHasBeenSet() const
{
    return m_dateKeyHasBeenSet;
}

vector<double> CaptchaOperDataTryTimesUnit::GetCntPerPass() const
{
    return m_cntPerPass;
}

void CaptchaOperDataTryTimesUnit::SetCntPerPass(const vector<double>& _cntPerPass)
{
    m_cntPerPass = _cntPerPass;
    m_cntPerPassHasBeenSet = true;
}

bool CaptchaOperDataTryTimesUnit::CntPerPassHasBeenSet() const
{
    return m_cntPerPassHasBeenSet;
}

double CaptchaOperDataTryTimesUnit::GetMarketCntPerPass() const
{
    return m_marketCntPerPass;
}

void CaptchaOperDataTryTimesUnit::SetMarketCntPerPass(const double& _marketCntPerPass)
{
    m_marketCntPerPass = _marketCntPerPass;
    m_marketCntPerPassHasBeenSet = true;
}

bool CaptchaOperDataTryTimesUnit::MarketCntPerPassHasBeenSet() const
{
    return m_marketCntPerPassHasBeenSet;
}

