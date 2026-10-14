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

#include <tencentcloud/rce/v20260130/model/SearchEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

SearchEvent::SearchEvent() :
    m_searchSceneHasBeenSet(false),
    m_searchParamHasBeenSet(false),
    m_referPageUrlHasBeenSet(false),
    m_guestIdHasBeenSet(false),
    m_custHasBeenSet(false)
{
}

CoreInternalOutcome SearchEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SearchScene") && !value["SearchScene"].IsNull())
    {
        if (!value["SearchScene"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchEvent.SearchScene` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_searchScene = string(value["SearchScene"].GetString());
        m_searchSceneHasBeenSet = true;
    }

    if (value.HasMember("SearchParam") && !value["SearchParam"].IsNull())
    {
        if (!value["SearchParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchEvent.SearchParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_searchParam = string(value["SearchParam"].GetString());
        m_searchParamHasBeenSet = true;
    }

    if (value.HasMember("ReferPageUrl") && !value["ReferPageUrl"].IsNull())
    {
        if (!value["ReferPageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchEvent.ReferPageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_referPageUrl = string(value["ReferPageUrl"].GetString());
        m_referPageUrlHasBeenSet = true;
    }

    if (value.HasMember("GuestId") && !value["GuestId"].IsNull())
    {
        if (!value["GuestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchEvent.GuestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_guestId = string(value["GuestId"].GetString());
        m_guestIdHasBeenSet = true;
    }

    if (value.HasMember("Cust") && !value["Cust"].IsNull())
    {
        if (!value["Cust"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SearchEvent.Cust` is not array type"));

        const rapidjson::Value &tmpValue = value["Cust"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Cust item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cust.push_back(item);
        }
        m_custHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_searchSceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchScene";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_searchScene.c_str(), allocator).Move(), allocator);
    }

    if (m_searchParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_searchParam.c_str(), allocator).Move(), allocator);
    }

    if (m_referPageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferPageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_referPageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_guestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GuestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_guestId.c_str(), allocator).Move(), allocator);
    }

    if (m_custHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cust";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cust.begin(); itr != m_cust.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SearchEvent::GetSearchScene() const
{
    return m_searchScene;
}

void SearchEvent::SetSearchScene(const string& _searchScene)
{
    m_searchScene = _searchScene;
    m_searchSceneHasBeenSet = true;
}

bool SearchEvent::SearchSceneHasBeenSet() const
{
    return m_searchSceneHasBeenSet;
}

string SearchEvent::GetSearchParam() const
{
    return m_searchParam;
}

void SearchEvent::SetSearchParam(const string& _searchParam)
{
    m_searchParam = _searchParam;
    m_searchParamHasBeenSet = true;
}

bool SearchEvent::SearchParamHasBeenSet() const
{
    return m_searchParamHasBeenSet;
}

string SearchEvent::GetReferPageUrl() const
{
    return m_referPageUrl;
}

void SearchEvent::SetReferPageUrl(const string& _referPageUrl)
{
    m_referPageUrl = _referPageUrl;
    m_referPageUrlHasBeenSet = true;
}

bool SearchEvent::ReferPageUrlHasBeenSet() const
{
    return m_referPageUrlHasBeenSet;
}

string SearchEvent::GetGuestId() const
{
    return m_guestId;
}

void SearchEvent::SetGuestId(const string& _guestId)
{
    m_guestId = _guestId;
    m_guestIdHasBeenSet = true;
}

bool SearchEvent::GuestIdHasBeenSet() const
{
    return m_guestIdHasBeenSet;
}

vector<Cust> SearchEvent::GetCust() const
{
    return m_cust;
}

void SearchEvent::SetCust(const vector<Cust>& _cust)
{
    m_cust = _cust;
    m_custHasBeenSet = true;
}

bool SearchEvent::CustHasBeenSet() const
{
    return m_custHasBeenSet;
}

