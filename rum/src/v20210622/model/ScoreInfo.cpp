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

#include <tencentcloud/rum/v20210622/model/ScoreInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

ScoreInfo::ScoreInfo() :
    m_staticDurationHasBeenSet(false),
    m_pagePvHasBeenSet(false),
    m_apiFailHasBeenSet(false),
    m_apiNumHasBeenSet(false),
    m_staticFailHasBeenSet(false),
    m_projectIDHasBeenSet(false),
    m_pageUvHasBeenSet(false),
    m_apiDurationHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_pageErrorHasBeenSet(false),
    m_staticNumHasBeenSet(false),
    m_recordNumHasBeenSet(false),
    m_pageDurationHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome ScoreInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StaticDuration") && !value["StaticDuration"].IsNull())
    {
        if (!value["StaticDuration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreInfo.StaticDuration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_staticDuration = string(value["StaticDuration"].GetString());
        m_staticDurationHasBeenSet = true;
    }

    if (value.HasMember("PagePv") && !value["PagePv"].IsNull())
    {
        if (!value["PagePv"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreInfo.PagePv` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pagePv = string(value["PagePv"].GetString());
        m_pagePvHasBeenSet = true;
    }

    if (value.HasMember("ApiFail") && !value["ApiFail"].IsNull())
    {
        if (!value["ApiFail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreInfo.ApiFail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiFail = string(value["ApiFail"].GetString());
        m_apiFailHasBeenSet = true;
    }

    if (value.HasMember("ApiNum") && !value["ApiNum"].IsNull())
    {
        if (!value["ApiNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreInfo.ApiNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiNum = string(value["ApiNum"].GetString());
        m_apiNumHasBeenSet = true;
    }

    if (value.HasMember("StaticFail") && !value["StaticFail"].IsNull())
    {
        if (!value["StaticFail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreInfo.StaticFail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_staticFail = string(value["StaticFail"].GetString());
        m_staticFailHasBeenSet = true;
    }

    if (value.HasMember("ProjectID") && !value["ProjectID"].IsNull())
    {
        if (!value["ProjectID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreInfo.ProjectID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectID = value["ProjectID"].GetInt64();
        m_projectIDHasBeenSet = true;
    }

    if (value.HasMember("PageUv") && !value["PageUv"].IsNull())
    {
        if (!value["PageUv"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreInfo.PageUv` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pageUv = string(value["PageUv"].GetString());
        m_pageUvHasBeenSet = true;
    }

    if (value.HasMember("ApiDuration") && !value["ApiDuration"].IsNull())
    {
        if (!value["ApiDuration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreInfo.ApiDuration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiDuration = string(value["ApiDuration"].GetString());
        m_apiDurationHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreInfo.Score` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_score = string(value["Score"].GetString());
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("PageError") && !value["PageError"].IsNull())
    {
        if (!value["PageError"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreInfo.PageError` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pageError = string(value["PageError"].GetString());
        m_pageErrorHasBeenSet = true;
    }

    if (value.HasMember("StaticNum") && !value["StaticNum"].IsNull())
    {
        if (!value["StaticNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreInfo.StaticNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_staticNum = string(value["StaticNum"].GetString());
        m_staticNumHasBeenSet = true;
    }

    if (value.HasMember("RecordNum") && !value["RecordNum"].IsNull())
    {
        if (!value["RecordNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreInfo.RecordNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recordNum = value["RecordNum"].GetInt64();
        m_recordNumHasBeenSet = true;
    }

    if (value.HasMember("PageDuration") && !value["PageDuration"].IsNull())
    {
        if (!value["PageDuration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreInfo.PageDuration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pageDuration = string(value["PageDuration"].GetString());
        m_pageDurationHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScoreInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_staticDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaticDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_staticDuration.c_str(), allocator).Move(), allocator);
    }

    if (m_pagePvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PagePv";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pagePv.c_str(), allocator).Move(), allocator);
    }

    if (m_apiFailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiFail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiFail.c_str(), allocator).Move(), allocator);
    }

    if (m_apiNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiNum.c_str(), allocator).Move(), allocator);
    }

    if (m_staticFailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaticFail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_staticFail.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectID, allocator);
    }

    if (m_pageUvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageUv";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pageUv.c_str(), allocator).Move(), allocator);
    }

    if (m_apiDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiDuration.c_str(), allocator).Move(), allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_score.c_str(), allocator).Move(), allocator);
    }

    if (m_pageErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageError";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pageError.c_str(), allocator).Move(), allocator);
    }

    if (m_staticNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaticNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_staticNum.c_str(), allocator).Move(), allocator);
    }

    if (m_recordNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordNum, allocator);
    }

    if (m_pageDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pageDuration.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string ScoreInfo::GetStaticDuration() const
{
    return m_staticDuration;
}

void ScoreInfo::SetStaticDuration(const string& _staticDuration)
{
    m_staticDuration = _staticDuration;
    m_staticDurationHasBeenSet = true;
}

bool ScoreInfo::StaticDurationHasBeenSet() const
{
    return m_staticDurationHasBeenSet;
}

string ScoreInfo::GetPagePv() const
{
    return m_pagePv;
}

void ScoreInfo::SetPagePv(const string& _pagePv)
{
    m_pagePv = _pagePv;
    m_pagePvHasBeenSet = true;
}

bool ScoreInfo::PagePvHasBeenSet() const
{
    return m_pagePvHasBeenSet;
}

string ScoreInfo::GetApiFail() const
{
    return m_apiFail;
}

void ScoreInfo::SetApiFail(const string& _apiFail)
{
    m_apiFail = _apiFail;
    m_apiFailHasBeenSet = true;
}

bool ScoreInfo::ApiFailHasBeenSet() const
{
    return m_apiFailHasBeenSet;
}

string ScoreInfo::GetApiNum() const
{
    return m_apiNum;
}

void ScoreInfo::SetApiNum(const string& _apiNum)
{
    m_apiNum = _apiNum;
    m_apiNumHasBeenSet = true;
}

bool ScoreInfo::ApiNumHasBeenSet() const
{
    return m_apiNumHasBeenSet;
}

string ScoreInfo::GetStaticFail() const
{
    return m_staticFail;
}

void ScoreInfo::SetStaticFail(const string& _staticFail)
{
    m_staticFail = _staticFail;
    m_staticFailHasBeenSet = true;
}

bool ScoreInfo::StaticFailHasBeenSet() const
{
    return m_staticFailHasBeenSet;
}

int64_t ScoreInfo::GetProjectID() const
{
    return m_projectID;
}

void ScoreInfo::SetProjectID(const int64_t& _projectID)
{
    m_projectID = _projectID;
    m_projectIDHasBeenSet = true;
}

bool ScoreInfo::ProjectIDHasBeenSet() const
{
    return m_projectIDHasBeenSet;
}

string ScoreInfo::GetPageUv() const
{
    return m_pageUv;
}

void ScoreInfo::SetPageUv(const string& _pageUv)
{
    m_pageUv = _pageUv;
    m_pageUvHasBeenSet = true;
}

bool ScoreInfo::PageUvHasBeenSet() const
{
    return m_pageUvHasBeenSet;
}

string ScoreInfo::GetApiDuration() const
{
    return m_apiDuration;
}

void ScoreInfo::SetApiDuration(const string& _apiDuration)
{
    m_apiDuration = _apiDuration;
    m_apiDurationHasBeenSet = true;
}

bool ScoreInfo::ApiDurationHasBeenSet() const
{
    return m_apiDurationHasBeenSet;
}

string ScoreInfo::GetScore() const
{
    return m_score;
}

void ScoreInfo::SetScore(const string& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool ScoreInfo::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

string ScoreInfo::GetPageError() const
{
    return m_pageError;
}

void ScoreInfo::SetPageError(const string& _pageError)
{
    m_pageError = _pageError;
    m_pageErrorHasBeenSet = true;
}

bool ScoreInfo::PageErrorHasBeenSet() const
{
    return m_pageErrorHasBeenSet;
}

string ScoreInfo::GetStaticNum() const
{
    return m_staticNum;
}

void ScoreInfo::SetStaticNum(const string& _staticNum)
{
    m_staticNum = _staticNum;
    m_staticNumHasBeenSet = true;
}

bool ScoreInfo::StaticNumHasBeenSet() const
{
    return m_staticNumHasBeenSet;
}

int64_t ScoreInfo::GetRecordNum() const
{
    return m_recordNum;
}

void ScoreInfo::SetRecordNum(const int64_t& _recordNum)
{
    m_recordNum = _recordNum;
    m_recordNumHasBeenSet = true;
}

bool ScoreInfo::RecordNumHasBeenSet() const
{
    return m_recordNumHasBeenSet;
}

string ScoreInfo::GetPageDuration() const
{
    return m_pageDuration;
}

void ScoreInfo::SetPageDuration(const string& _pageDuration)
{
    m_pageDuration = _pageDuration;
    m_pageDurationHasBeenSet = true;
}

bool ScoreInfo::PageDurationHasBeenSet() const
{
    return m_pageDurationHasBeenSet;
}

string ScoreInfo::GetCreateTime() const
{
    return m_createTime;
}

void ScoreInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ScoreInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

