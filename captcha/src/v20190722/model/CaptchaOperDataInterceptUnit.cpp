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

#include <tencentcloud/captcha/v20190722/model/CaptchaOperDataInterceptUnit.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Captcha::V20190722::Model;
using namespace std;

CaptchaOperDataInterceptUnit::CaptchaOperDataInterceptUnit() :
    m_dateKeyHasBeenSet(false),
    m_allStopCntHasBeenSet(false),
    m_picStopCntHasBeenSet(false),
    m_strategyStopCntHasBeenSet(false)
{
}

CoreInternalOutcome CaptchaOperDataInterceptUnit::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DateKey") && !value["DateKey"].IsNull())
    {
        if (!value["DateKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CaptchaOperDataInterceptUnit.DateKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateKey = string(value["DateKey"].GetString());
        m_dateKeyHasBeenSet = true;
    }

    if (value.HasMember("AllStopCnt") && !value["AllStopCnt"].IsNull())
    {
        if (!value["AllStopCnt"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CaptchaOperDataInterceptUnit.AllStopCnt` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_allStopCnt = value["AllStopCnt"].GetDouble();
        m_allStopCntHasBeenSet = true;
    }

    if (value.HasMember("PicStopCnt") && !value["PicStopCnt"].IsNull())
    {
        if (!value["PicStopCnt"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CaptchaOperDataInterceptUnit.PicStopCnt` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_picStopCnt = value["PicStopCnt"].GetDouble();
        m_picStopCntHasBeenSet = true;
    }

    if (value.HasMember("StrategyStopCnt") && !value["StrategyStopCnt"].IsNull())
    {
        if (!value["StrategyStopCnt"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CaptchaOperDataInterceptUnit.StrategyStopCnt` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_strategyStopCnt = value["StrategyStopCnt"].GetDouble();
        m_strategyStopCntHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CaptchaOperDataInterceptUnit::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dateKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateKey.c_str(), allocator).Move(), allocator);
    }

    if (m_allStopCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllStopCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allStopCnt, allocator);
    }

    if (m_picStopCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PicStopCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_picStopCnt, allocator);
    }

    if (m_strategyStopCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyStopCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strategyStopCnt, allocator);
    }

}


string CaptchaOperDataInterceptUnit::GetDateKey() const
{
    return m_dateKey;
}

void CaptchaOperDataInterceptUnit::SetDateKey(const string& _dateKey)
{
    m_dateKey = _dateKey;
    m_dateKeyHasBeenSet = true;
}

bool CaptchaOperDataInterceptUnit::DateKeyHasBeenSet() const
{
    return m_dateKeyHasBeenSet;
}

double CaptchaOperDataInterceptUnit::GetAllStopCnt() const
{
    return m_allStopCnt;
}

void CaptchaOperDataInterceptUnit::SetAllStopCnt(const double& _allStopCnt)
{
    m_allStopCnt = _allStopCnt;
    m_allStopCntHasBeenSet = true;
}

bool CaptchaOperDataInterceptUnit::AllStopCntHasBeenSet() const
{
    return m_allStopCntHasBeenSet;
}

double CaptchaOperDataInterceptUnit::GetPicStopCnt() const
{
    return m_picStopCnt;
}

void CaptchaOperDataInterceptUnit::SetPicStopCnt(const double& _picStopCnt)
{
    m_picStopCnt = _picStopCnt;
    m_picStopCntHasBeenSet = true;
}

bool CaptchaOperDataInterceptUnit::PicStopCntHasBeenSet() const
{
    return m_picStopCntHasBeenSet;
}

double CaptchaOperDataInterceptUnit::GetStrategyStopCnt() const
{
    return m_strategyStopCnt;
}

void CaptchaOperDataInterceptUnit::SetStrategyStopCnt(const double& _strategyStopCnt)
{
    m_strategyStopCnt = _strategyStopCnt;
    m_strategyStopCntHasBeenSet = true;
}

bool CaptchaOperDataInterceptUnit::StrategyStopCntHasBeenSet() const
{
    return m_strategyStopCntHasBeenSet;
}

