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

#include <tencentcloud/mmps/v20200710/model/FlySecMiniAppRiskItems.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mmps::V20200710::Model;
using namespace std;

FlySecMiniAppRiskItems::FlySecMiniAppRiskItems() :
    m_riskItem1ScoreHasBeenSet(false),
    m_riskItem2ScoreHasBeenSet(false),
    m_riskItem3ScoreHasBeenSet(false),
    m_riskItem4ScoreHasBeenSet(false),
    m_riskItem5ScoreHasBeenSet(false),
    m_riskItem6ScoreHasBeenSet(false),
    m_riskItem7ScoreHasBeenSet(false),
    m_riskItem8ScoreHasBeenSet(false)
{
}

CoreInternalOutcome FlySecMiniAppRiskItems::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RiskItem1Score") && !value["RiskItem1Score"].IsNull())
    {
        if (!value["RiskItem1Score"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlySecMiniAppRiskItems.RiskItem1Score` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskItem1Score = value["RiskItem1Score"].GetInt64();
        m_riskItem1ScoreHasBeenSet = true;
    }

    if (value.HasMember("RiskItem2Score") && !value["RiskItem2Score"].IsNull())
    {
        if (!value["RiskItem2Score"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlySecMiniAppRiskItems.RiskItem2Score` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskItem2Score = value["RiskItem2Score"].GetInt64();
        m_riskItem2ScoreHasBeenSet = true;
    }

    if (value.HasMember("RiskItem3Score") && !value["RiskItem3Score"].IsNull())
    {
        if (!value["RiskItem3Score"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlySecMiniAppRiskItems.RiskItem3Score` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskItem3Score = value["RiskItem3Score"].GetInt64();
        m_riskItem3ScoreHasBeenSet = true;
    }

    if (value.HasMember("RiskItem4Score") && !value["RiskItem4Score"].IsNull())
    {
        if (!value["RiskItem4Score"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlySecMiniAppRiskItems.RiskItem4Score` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskItem4Score = value["RiskItem4Score"].GetInt64();
        m_riskItem4ScoreHasBeenSet = true;
    }

    if (value.HasMember("RiskItem5Score") && !value["RiskItem5Score"].IsNull())
    {
        if (!value["RiskItem5Score"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlySecMiniAppRiskItems.RiskItem5Score` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskItem5Score = value["RiskItem5Score"].GetInt64();
        m_riskItem5ScoreHasBeenSet = true;
    }

    if (value.HasMember("RiskItem6Score") && !value["RiskItem6Score"].IsNull())
    {
        if (!value["RiskItem6Score"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlySecMiniAppRiskItems.RiskItem6Score` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskItem6Score = value["RiskItem6Score"].GetInt64();
        m_riskItem6ScoreHasBeenSet = true;
    }

    if (value.HasMember("RiskItem7Score") && !value["RiskItem7Score"].IsNull())
    {
        if (!value["RiskItem7Score"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlySecMiniAppRiskItems.RiskItem7Score` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskItem7Score = value["RiskItem7Score"].GetInt64();
        m_riskItem7ScoreHasBeenSet = true;
    }

    if (value.HasMember("RiskItem8Score") && !value["RiskItem8Score"].IsNull())
    {
        if (!value["RiskItem8Score"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlySecMiniAppRiskItems.RiskItem8Score` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskItem8Score = value["RiskItem8Score"].GetInt64();
        m_riskItem8ScoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlySecMiniAppRiskItems::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_riskItem1ScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskItem1Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskItem1Score, allocator);
    }

    if (m_riskItem2ScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskItem2Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskItem2Score, allocator);
    }

    if (m_riskItem3ScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskItem3Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskItem3Score, allocator);
    }

    if (m_riskItem4ScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskItem4Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskItem4Score, allocator);
    }

    if (m_riskItem5ScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskItem5Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskItem5Score, allocator);
    }

    if (m_riskItem6ScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskItem6Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskItem6Score, allocator);
    }

    if (m_riskItem7ScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskItem7Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskItem7Score, allocator);
    }

    if (m_riskItem8ScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskItem8Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskItem8Score, allocator);
    }

}


int64_t FlySecMiniAppRiskItems::GetRiskItem1Score() const
{
    return m_riskItem1Score;
}

void FlySecMiniAppRiskItems::SetRiskItem1Score(const int64_t& _riskItem1Score)
{
    m_riskItem1Score = _riskItem1Score;
    m_riskItem1ScoreHasBeenSet = true;
}

bool FlySecMiniAppRiskItems::RiskItem1ScoreHasBeenSet() const
{
    return m_riskItem1ScoreHasBeenSet;
}

int64_t FlySecMiniAppRiskItems::GetRiskItem2Score() const
{
    return m_riskItem2Score;
}

void FlySecMiniAppRiskItems::SetRiskItem2Score(const int64_t& _riskItem2Score)
{
    m_riskItem2Score = _riskItem2Score;
    m_riskItem2ScoreHasBeenSet = true;
}

bool FlySecMiniAppRiskItems::RiskItem2ScoreHasBeenSet() const
{
    return m_riskItem2ScoreHasBeenSet;
}

int64_t FlySecMiniAppRiskItems::GetRiskItem3Score() const
{
    return m_riskItem3Score;
}

void FlySecMiniAppRiskItems::SetRiskItem3Score(const int64_t& _riskItem3Score)
{
    m_riskItem3Score = _riskItem3Score;
    m_riskItem3ScoreHasBeenSet = true;
}

bool FlySecMiniAppRiskItems::RiskItem3ScoreHasBeenSet() const
{
    return m_riskItem3ScoreHasBeenSet;
}

int64_t FlySecMiniAppRiskItems::GetRiskItem4Score() const
{
    return m_riskItem4Score;
}

void FlySecMiniAppRiskItems::SetRiskItem4Score(const int64_t& _riskItem4Score)
{
    m_riskItem4Score = _riskItem4Score;
    m_riskItem4ScoreHasBeenSet = true;
}

bool FlySecMiniAppRiskItems::RiskItem4ScoreHasBeenSet() const
{
    return m_riskItem4ScoreHasBeenSet;
}

int64_t FlySecMiniAppRiskItems::GetRiskItem5Score() const
{
    return m_riskItem5Score;
}

void FlySecMiniAppRiskItems::SetRiskItem5Score(const int64_t& _riskItem5Score)
{
    m_riskItem5Score = _riskItem5Score;
    m_riskItem5ScoreHasBeenSet = true;
}

bool FlySecMiniAppRiskItems::RiskItem5ScoreHasBeenSet() const
{
    return m_riskItem5ScoreHasBeenSet;
}

int64_t FlySecMiniAppRiskItems::GetRiskItem6Score() const
{
    return m_riskItem6Score;
}

void FlySecMiniAppRiskItems::SetRiskItem6Score(const int64_t& _riskItem6Score)
{
    m_riskItem6Score = _riskItem6Score;
    m_riskItem6ScoreHasBeenSet = true;
}

bool FlySecMiniAppRiskItems::RiskItem6ScoreHasBeenSet() const
{
    return m_riskItem6ScoreHasBeenSet;
}

int64_t FlySecMiniAppRiskItems::GetRiskItem7Score() const
{
    return m_riskItem7Score;
}

void FlySecMiniAppRiskItems::SetRiskItem7Score(const int64_t& _riskItem7Score)
{
    m_riskItem7Score = _riskItem7Score;
    m_riskItem7ScoreHasBeenSet = true;
}

bool FlySecMiniAppRiskItems::RiskItem7ScoreHasBeenSet() const
{
    return m_riskItem7ScoreHasBeenSet;
}

int64_t FlySecMiniAppRiskItems::GetRiskItem8Score() const
{
    return m_riskItem8Score;
}

void FlySecMiniAppRiskItems::SetRiskItem8Score(const int64_t& _riskItem8Score)
{
    m_riskItem8Score = _riskItem8Score;
    m_riskItem8ScoreHasBeenSet = true;
}

bool FlySecMiniAppRiskItems::RiskItem8ScoreHasBeenSet() const
{
    return m_riskItem8ScoreHasBeenSet;
}

