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

#include <tencentcloud/rum/v20210622/model/ScoreInfoV2.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

ScoreInfoV2::ScoreInfoV2() :
    m_projectIDHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_apiPerformanceScoreHasBeenSet(false),
    m_apiAvailableScoreHasBeenSet(false),
    m_apiNumHasBeenSet(false),
    m_apiFailHasBeenSet(false),
    m_apiDurationHasBeenSet(false),
    m_pagePerformanceScoreHasBeenSet(false),
    m_pagePvHasBeenSet(false),
    m_pageUvHasBeenSet(false),
    m_pageErrorHasBeenSet(false),
    m_pageDurationHasBeenSet(false),
    m_pageLCPHasBeenSet(false),
    m_pageFIDHasBeenSet(false),
    m_pageCLSHasBeenSet(false),
    m_pageFCPHasBeenSet(false),
    m_pageINPHasBeenSet(false),
    m_jsErrorScoreHasBeenSet(false),
    m_staticAvailableScoreHasBeenSet(false),
    m_staticPerformanceScoreHasBeenSet(false),
    m_staticNumHasBeenSet(false),
    m_staticFailHasBeenSet(false),
    m_staticDurationHasBeenSet(false)
{
}

CoreInternalOutcome ScoreInfoV2::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectID") && !value["ProjectID"].IsNull())
    {
        if (!value["ProjectID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreInfoV2.ProjectID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectID = value["ProjectID"].GetInt64();
        m_projectIDHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreInfoV2.Score` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetDouble();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("ApiPerformanceScore") && !value["ApiPerformanceScore"].IsNull())
    {
        if (!value["ApiPerformanceScore"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreInfoV2.ApiPerformanceScore` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_apiPerformanceScore = value["ApiPerformanceScore"].GetDouble();
        m_apiPerformanceScoreHasBeenSet = true;
    }

    if (value.HasMember("ApiAvailableScore") && !value["ApiAvailableScore"].IsNull())
    {
        if (!value["ApiAvailableScore"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreInfoV2.ApiAvailableScore` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_apiAvailableScore = value["ApiAvailableScore"].GetDouble();
        m_apiAvailableScoreHasBeenSet = true;
    }

    if (value.HasMember("ApiNum") && !value["ApiNum"].IsNull())
    {
        if (!value["ApiNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreInfoV2.ApiNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_apiNum = value["ApiNum"].GetInt64();
        m_apiNumHasBeenSet = true;
    }

    if (value.HasMember("ApiFail") && !value["ApiFail"].IsNull())
    {
        if (!value["ApiFail"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreInfoV2.ApiFail` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_apiFail = value["ApiFail"].GetInt64();
        m_apiFailHasBeenSet = true;
    }

    if (value.HasMember("ApiDuration") && !value["ApiDuration"].IsNull())
    {
        if (!value["ApiDuration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreInfoV2.ApiDuration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_apiDuration = value["ApiDuration"].GetDouble();
        m_apiDurationHasBeenSet = true;
    }

    if (value.HasMember("PagePerformanceScore") && !value["PagePerformanceScore"].IsNull())
    {
        if (!value["PagePerformanceScore"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreInfoV2.PagePerformanceScore` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_pagePerformanceScore = value["PagePerformanceScore"].GetDouble();
        m_pagePerformanceScoreHasBeenSet = true;
    }

    if (value.HasMember("PagePv") && !value["PagePv"].IsNull())
    {
        if (!value["PagePv"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreInfoV2.PagePv` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pagePv = value["PagePv"].GetInt64();
        m_pagePvHasBeenSet = true;
    }

    if (value.HasMember("PageUv") && !value["PageUv"].IsNull())
    {
        if (!value["PageUv"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreInfoV2.PageUv` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageUv = value["PageUv"].GetInt64();
        m_pageUvHasBeenSet = true;
    }

    if (value.HasMember("PageError") && !value["PageError"].IsNull())
    {
        if (!value["PageError"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreInfoV2.PageError` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageError = value["PageError"].GetInt64();
        m_pageErrorHasBeenSet = true;
    }

    if (value.HasMember("PageDuration") && !value["PageDuration"].IsNull())
    {
        if (!value["PageDuration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreInfoV2.PageDuration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_pageDuration = value["PageDuration"].GetDouble();
        m_pageDurationHasBeenSet = true;
    }

    if (value.HasMember("PageLCP") && !value["PageLCP"].IsNull())
    {
        if (!value["PageLCP"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreInfoV2.PageLCP` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_pageLCP = value["PageLCP"].GetDouble();
        m_pageLCPHasBeenSet = true;
    }

    if (value.HasMember("PageFID") && !value["PageFID"].IsNull())
    {
        if (!value["PageFID"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreInfoV2.PageFID` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_pageFID = value["PageFID"].GetDouble();
        m_pageFIDHasBeenSet = true;
    }

    if (value.HasMember("PageCLS") && !value["PageCLS"].IsNull())
    {
        if (!value["PageCLS"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreInfoV2.PageCLS` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_pageCLS = value["PageCLS"].GetDouble();
        m_pageCLSHasBeenSet = true;
    }

    if (value.HasMember("PageFCP") && !value["PageFCP"].IsNull())
    {
        if (!value["PageFCP"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreInfoV2.PageFCP` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_pageFCP = value["PageFCP"].GetDouble();
        m_pageFCPHasBeenSet = true;
    }

    if (value.HasMember("PageINP") && !value["PageINP"].IsNull())
    {
        if (!value["PageINP"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreInfoV2.PageINP` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_pageINP = value["PageINP"].GetDouble();
        m_pageINPHasBeenSet = true;
    }

    if (value.HasMember("JsErrorScore") && !value["JsErrorScore"].IsNull())
    {
        if (!value["JsErrorScore"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreInfoV2.JsErrorScore` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_jsErrorScore = value["JsErrorScore"].GetDouble();
        m_jsErrorScoreHasBeenSet = true;
    }

    if (value.HasMember("StaticAvailableScore") && !value["StaticAvailableScore"].IsNull())
    {
        if (!value["StaticAvailableScore"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreInfoV2.StaticAvailableScore` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_staticAvailableScore = value["StaticAvailableScore"].GetDouble();
        m_staticAvailableScoreHasBeenSet = true;
    }

    if (value.HasMember("StaticPerformanceScore") && !value["StaticPerformanceScore"].IsNull())
    {
        if (!value["StaticPerformanceScore"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreInfoV2.StaticPerformanceScore` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_staticPerformanceScore = value["StaticPerformanceScore"].GetDouble();
        m_staticPerformanceScoreHasBeenSet = true;
    }

    if (value.HasMember("StaticNum") && !value["StaticNum"].IsNull())
    {
        if (!value["StaticNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreInfoV2.StaticNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_staticNum = value["StaticNum"].GetInt64();
        m_staticNumHasBeenSet = true;
    }

    if (value.HasMember("StaticFail") && !value["StaticFail"].IsNull())
    {
        if (!value["StaticFail"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreInfoV2.StaticFail` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_staticFail = value["StaticFail"].GetInt64();
        m_staticFailHasBeenSet = true;
    }

    if (value.HasMember("StaticDuration") && !value["StaticDuration"].IsNull())
    {
        if (!value["StaticDuration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreInfoV2.StaticDuration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_staticDuration = value["StaticDuration"].GetDouble();
        m_staticDurationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScoreInfoV2::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_projectIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectID, allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_apiPerformanceScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiPerformanceScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_apiPerformanceScore, allocator);
    }

    if (m_apiAvailableScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiAvailableScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_apiAvailableScore, allocator);
    }

    if (m_apiNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_apiNum, allocator);
    }

    if (m_apiFailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiFail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_apiFail, allocator);
    }

    if (m_apiDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_apiDuration, allocator);
    }

    if (m_pagePerformanceScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PagePerformanceScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pagePerformanceScore, allocator);
    }

    if (m_pagePvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PagePv";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pagePv, allocator);
    }

    if (m_pageUvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageUv";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageUv, allocator);
    }

    if (m_pageErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageError";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageError, allocator);
    }

    if (m_pageDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageDuration, allocator);
    }

    if (m_pageLCPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageLCP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageLCP, allocator);
    }

    if (m_pageFIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageFID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageFID, allocator);
    }

    if (m_pageCLSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageCLS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageCLS, allocator);
    }

    if (m_pageFCPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageFCP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageFCP, allocator);
    }

    if (m_pageINPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageINP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageINP, allocator);
    }

    if (m_jsErrorScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JsErrorScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jsErrorScore, allocator);
    }

    if (m_staticAvailableScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaticAvailableScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_staticAvailableScore, allocator);
    }

    if (m_staticPerformanceScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaticPerformanceScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_staticPerformanceScore, allocator);
    }

    if (m_staticNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaticNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_staticNum, allocator);
    }

    if (m_staticFailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaticFail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_staticFail, allocator);
    }

    if (m_staticDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaticDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_staticDuration, allocator);
    }

}


int64_t ScoreInfoV2::GetProjectID() const
{
    return m_projectID;
}

void ScoreInfoV2::SetProjectID(const int64_t& _projectID)
{
    m_projectID = _projectID;
    m_projectIDHasBeenSet = true;
}

bool ScoreInfoV2::ProjectIDHasBeenSet() const
{
    return m_projectIDHasBeenSet;
}

double ScoreInfoV2::GetScore() const
{
    return m_score;
}

void ScoreInfoV2::SetScore(const double& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool ScoreInfoV2::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

double ScoreInfoV2::GetApiPerformanceScore() const
{
    return m_apiPerformanceScore;
}

void ScoreInfoV2::SetApiPerformanceScore(const double& _apiPerformanceScore)
{
    m_apiPerformanceScore = _apiPerformanceScore;
    m_apiPerformanceScoreHasBeenSet = true;
}

bool ScoreInfoV2::ApiPerformanceScoreHasBeenSet() const
{
    return m_apiPerformanceScoreHasBeenSet;
}

double ScoreInfoV2::GetApiAvailableScore() const
{
    return m_apiAvailableScore;
}

void ScoreInfoV2::SetApiAvailableScore(const double& _apiAvailableScore)
{
    m_apiAvailableScore = _apiAvailableScore;
    m_apiAvailableScoreHasBeenSet = true;
}

bool ScoreInfoV2::ApiAvailableScoreHasBeenSet() const
{
    return m_apiAvailableScoreHasBeenSet;
}

int64_t ScoreInfoV2::GetApiNum() const
{
    return m_apiNum;
}

void ScoreInfoV2::SetApiNum(const int64_t& _apiNum)
{
    m_apiNum = _apiNum;
    m_apiNumHasBeenSet = true;
}

bool ScoreInfoV2::ApiNumHasBeenSet() const
{
    return m_apiNumHasBeenSet;
}

int64_t ScoreInfoV2::GetApiFail() const
{
    return m_apiFail;
}

void ScoreInfoV2::SetApiFail(const int64_t& _apiFail)
{
    m_apiFail = _apiFail;
    m_apiFailHasBeenSet = true;
}

bool ScoreInfoV2::ApiFailHasBeenSet() const
{
    return m_apiFailHasBeenSet;
}

double ScoreInfoV2::GetApiDuration() const
{
    return m_apiDuration;
}

void ScoreInfoV2::SetApiDuration(const double& _apiDuration)
{
    m_apiDuration = _apiDuration;
    m_apiDurationHasBeenSet = true;
}

bool ScoreInfoV2::ApiDurationHasBeenSet() const
{
    return m_apiDurationHasBeenSet;
}

double ScoreInfoV2::GetPagePerformanceScore() const
{
    return m_pagePerformanceScore;
}

void ScoreInfoV2::SetPagePerformanceScore(const double& _pagePerformanceScore)
{
    m_pagePerformanceScore = _pagePerformanceScore;
    m_pagePerformanceScoreHasBeenSet = true;
}

bool ScoreInfoV2::PagePerformanceScoreHasBeenSet() const
{
    return m_pagePerformanceScoreHasBeenSet;
}

int64_t ScoreInfoV2::GetPagePv() const
{
    return m_pagePv;
}

void ScoreInfoV2::SetPagePv(const int64_t& _pagePv)
{
    m_pagePv = _pagePv;
    m_pagePvHasBeenSet = true;
}

bool ScoreInfoV2::PagePvHasBeenSet() const
{
    return m_pagePvHasBeenSet;
}

int64_t ScoreInfoV2::GetPageUv() const
{
    return m_pageUv;
}

void ScoreInfoV2::SetPageUv(const int64_t& _pageUv)
{
    m_pageUv = _pageUv;
    m_pageUvHasBeenSet = true;
}

bool ScoreInfoV2::PageUvHasBeenSet() const
{
    return m_pageUvHasBeenSet;
}

int64_t ScoreInfoV2::GetPageError() const
{
    return m_pageError;
}

void ScoreInfoV2::SetPageError(const int64_t& _pageError)
{
    m_pageError = _pageError;
    m_pageErrorHasBeenSet = true;
}

bool ScoreInfoV2::PageErrorHasBeenSet() const
{
    return m_pageErrorHasBeenSet;
}

double ScoreInfoV2::GetPageDuration() const
{
    return m_pageDuration;
}

void ScoreInfoV2::SetPageDuration(const double& _pageDuration)
{
    m_pageDuration = _pageDuration;
    m_pageDurationHasBeenSet = true;
}

bool ScoreInfoV2::PageDurationHasBeenSet() const
{
    return m_pageDurationHasBeenSet;
}

double ScoreInfoV2::GetPageLCP() const
{
    return m_pageLCP;
}

void ScoreInfoV2::SetPageLCP(const double& _pageLCP)
{
    m_pageLCP = _pageLCP;
    m_pageLCPHasBeenSet = true;
}

bool ScoreInfoV2::PageLCPHasBeenSet() const
{
    return m_pageLCPHasBeenSet;
}

double ScoreInfoV2::GetPageFID() const
{
    return m_pageFID;
}

void ScoreInfoV2::SetPageFID(const double& _pageFID)
{
    m_pageFID = _pageFID;
    m_pageFIDHasBeenSet = true;
}

bool ScoreInfoV2::PageFIDHasBeenSet() const
{
    return m_pageFIDHasBeenSet;
}

double ScoreInfoV2::GetPageCLS() const
{
    return m_pageCLS;
}

void ScoreInfoV2::SetPageCLS(const double& _pageCLS)
{
    m_pageCLS = _pageCLS;
    m_pageCLSHasBeenSet = true;
}

bool ScoreInfoV2::PageCLSHasBeenSet() const
{
    return m_pageCLSHasBeenSet;
}

double ScoreInfoV2::GetPageFCP() const
{
    return m_pageFCP;
}

void ScoreInfoV2::SetPageFCP(const double& _pageFCP)
{
    m_pageFCP = _pageFCP;
    m_pageFCPHasBeenSet = true;
}

bool ScoreInfoV2::PageFCPHasBeenSet() const
{
    return m_pageFCPHasBeenSet;
}

double ScoreInfoV2::GetPageINP() const
{
    return m_pageINP;
}

void ScoreInfoV2::SetPageINP(const double& _pageINP)
{
    m_pageINP = _pageINP;
    m_pageINPHasBeenSet = true;
}

bool ScoreInfoV2::PageINPHasBeenSet() const
{
    return m_pageINPHasBeenSet;
}

double ScoreInfoV2::GetJsErrorScore() const
{
    return m_jsErrorScore;
}

void ScoreInfoV2::SetJsErrorScore(const double& _jsErrorScore)
{
    m_jsErrorScore = _jsErrorScore;
    m_jsErrorScoreHasBeenSet = true;
}

bool ScoreInfoV2::JsErrorScoreHasBeenSet() const
{
    return m_jsErrorScoreHasBeenSet;
}

double ScoreInfoV2::GetStaticAvailableScore() const
{
    return m_staticAvailableScore;
}

void ScoreInfoV2::SetStaticAvailableScore(const double& _staticAvailableScore)
{
    m_staticAvailableScore = _staticAvailableScore;
    m_staticAvailableScoreHasBeenSet = true;
}

bool ScoreInfoV2::StaticAvailableScoreHasBeenSet() const
{
    return m_staticAvailableScoreHasBeenSet;
}

double ScoreInfoV2::GetStaticPerformanceScore() const
{
    return m_staticPerformanceScore;
}

void ScoreInfoV2::SetStaticPerformanceScore(const double& _staticPerformanceScore)
{
    m_staticPerformanceScore = _staticPerformanceScore;
    m_staticPerformanceScoreHasBeenSet = true;
}

bool ScoreInfoV2::StaticPerformanceScoreHasBeenSet() const
{
    return m_staticPerformanceScoreHasBeenSet;
}

int64_t ScoreInfoV2::GetStaticNum() const
{
    return m_staticNum;
}

void ScoreInfoV2::SetStaticNum(const int64_t& _staticNum)
{
    m_staticNum = _staticNum;
    m_staticNumHasBeenSet = true;
}

bool ScoreInfoV2::StaticNumHasBeenSet() const
{
    return m_staticNumHasBeenSet;
}

int64_t ScoreInfoV2::GetStaticFail() const
{
    return m_staticFail;
}

void ScoreInfoV2::SetStaticFail(const int64_t& _staticFail)
{
    m_staticFail = _staticFail;
    m_staticFailHasBeenSet = true;
}

bool ScoreInfoV2::StaticFailHasBeenSet() const
{
    return m_staticFailHasBeenSet;
}

double ScoreInfoV2::GetStaticDuration() const
{
    return m_staticDuration;
}

void ScoreInfoV2::SetStaticDuration(const double& _staticDuration)
{
    m_staticDuration = _staticDuration;
    m_staticDurationHasBeenSet = true;
}

bool ScoreInfoV2::StaticDurationHasBeenSet() const
{
    return m_staticDurationHasBeenSet;
}

