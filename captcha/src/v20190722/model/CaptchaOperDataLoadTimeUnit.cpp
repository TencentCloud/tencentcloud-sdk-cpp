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

#include <tencentcloud/captcha/v20190722/model/CaptchaOperDataLoadTimeUnit.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Captcha::V20190722::Model;
using namespace std;

CaptchaOperDataLoadTimeUnit::CaptchaOperDataLoadTimeUnit() :
    m_dateKeyHasBeenSet(false),
    m_marketLoadTimeHasBeenSet(false),
    m_appIdLoadTimeHasBeenSet(false)
{
}

CoreInternalOutcome CaptchaOperDataLoadTimeUnit::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DateKey") && !value["DateKey"].IsNull())
    {
        if (!value["DateKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CaptchaOperDataLoadTimeUnit.DateKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateKey = string(value["DateKey"].GetString());
        m_dateKeyHasBeenSet = true;
    }

    if (value.HasMember("MarketLoadTime") && !value["MarketLoadTime"].IsNull())
    {
        if (!value["MarketLoadTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CaptchaOperDataLoadTimeUnit.MarketLoadTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_marketLoadTime = value["MarketLoadTime"].GetDouble();
        m_marketLoadTimeHasBeenSet = true;
    }

    if (value.HasMember("AppIdLoadTime") && !value["AppIdLoadTime"].IsNull())
    {
        if (!value["AppIdLoadTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CaptchaOperDataLoadTimeUnit.AppIdLoadTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_appIdLoadTime = value["AppIdLoadTime"].GetDouble();
        m_appIdLoadTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CaptchaOperDataLoadTimeUnit::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dateKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateKey.c_str(), allocator).Move(), allocator);
    }

    if (m_marketLoadTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarketLoadTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_marketLoadTime, allocator);
    }

    if (m_appIdLoadTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppIdLoadTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appIdLoadTime, allocator);
    }

}


string CaptchaOperDataLoadTimeUnit::GetDateKey() const
{
    return m_dateKey;
}

void CaptchaOperDataLoadTimeUnit::SetDateKey(const string& _dateKey)
{
    m_dateKey = _dateKey;
    m_dateKeyHasBeenSet = true;
}

bool CaptchaOperDataLoadTimeUnit::DateKeyHasBeenSet() const
{
    return m_dateKeyHasBeenSet;
}

double CaptchaOperDataLoadTimeUnit::GetMarketLoadTime() const
{
    return m_marketLoadTime;
}

void CaptchaOperDataLoadTimeUnit::SetMarketLoadTime(const double& _marketLoadTime)
{
    m_marketLoadTime = _marketLoadTime;
    m_marketLoadTimeHasBeenSet = true;
}

bool CaptchaOperDataLoadTimeUnit::MarketLoadTimeHasBeenSet() const
{
    return m_marketLoadTimeHasBeenSet;
}

double CaptchaOperDataLoadTimeUnit::GetAppIdLoadTime() const
{
    return m_appIdLoadTime;
}

void CaptchaOperDataLoadTimeUnit::SetAppIdLoadTime(const double& _appIdLoadTime)
{
    m_appIdLoadTime = _appIdLoadTime;
    m_appIdLoadTimeHasBeenSet = true;
}

bool CaptchaOperDataLoadTimeUnit::AppIdLoadTimeHasBeenSet() const
{
    return m_appIdLoadTimeHasBeenSet;
}

