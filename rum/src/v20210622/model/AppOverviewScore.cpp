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

#include <tencentcloud/rum/v20210622/model/AppOverviewScore.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

AppOverviewScore::AppOverviewScore() :
    m_appIdHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_totalScoreHasBeenSet(false),
    m_itemsHasBeenSet(false)
{
}

CoreInternalOutcome AppOverviewScore::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppOverviewScore.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Platform") && !value["Platform"].IsNull())
    {
        if (!value["Platform"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppOverviewScore.Platform` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platform = string(value["Platform"].GetString());
        m_platformHasBeenSet = true;
    }

    if (value.HasMember("TotalScore") && !value["TotalScore"].IsNull())
    {
        if (!value["TotalScore"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AppOverviewScore.TotalScore` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalScore = value["TotalScore"].GetDouble();
        m_totalScoreHasBeenSet = true;
    }

    if (value.HasMember("Items") && !value["Items"].IsNull())
    {
        if (!value["Items"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AppOverviewScore.Items` is not array type"));

        const rapidjson::Value &tmpValue = value["Items"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OverviewScoreItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_items.push_back(item);
        }
        m_itemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppOverviewScore::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_totalScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalScore, allocator);
    }

    if (m_itemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Items";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_items.begin(); itr != m_items.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AppOverviewScore::GetAppId() const
{
    return m_appId;
}

void AppOverviewScore::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool AppOverviewScore::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string AppOverviewScore::GetPlatform() const
{
    return m_platform;
}

void AppOverviewScore::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool AppOverviewScore::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

double AppOverviewScore::GetTotalScore() const
{
    return m_totalScore;
}

void AppOverviewScore::SetTotalScore(const double& _totalScore)
{
    m_totalScore = _totalScore;
    m_totalScoreHasBeenSet = true;
}

bool AppOverviewScore::TotalScoreHasBeenSet() const
{
    return m_totalScoreHasBeenSet;
}

vector<OverviewScoreItem> AppOverviewScore::GetItems() const
{
    return m_items;
}

void AppOverviewScore::SetItems(const vector<OverviewScoreItem>& _items)
{
    m_items = _items;
    m_itemsHasBeenSet = true;
}

bool AppOverviewScore::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

