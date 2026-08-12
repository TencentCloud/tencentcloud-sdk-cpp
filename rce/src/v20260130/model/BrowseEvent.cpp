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

#include <tencentcloud/rce/v20260130/model/BrowseEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

BrowseEvent::BrowseEvent() :
    m_pageTypeHasBeenSet(false),
    m_pageUrlHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_contentIdHasBeenSet(false),
    m_referPageTypeHasBeenSet(false),
    m_referPageUrlHasBeenSet(false),
    m_guestIdHasBeenSet(false),
    m_custHasBeenSet(false)
{
}

CoreInternalOutcome BrowseEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PageType") && !value["PageType"].IsNull())
    {
        if (!value["PageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrowseEvent.PageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pageType = string(value["PageType"].GetString());
        m_pageTypeHasBeenSet = true;
    }

    if (value.HasMember("PageUrl") && !value["PageUrl"].IsNull())
    {
        if (!value["PageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrowseEvent.PageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pageUrl = string(value["PageUrl"].GetString());
        m_pageUrlHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BrowseEvent.Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("ContentType") && !value["ContentType"].IsNull())
    {
        if (!value["ContentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrowseEvent.ContentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentType = string(value["ContentType"].GetString());
        m_contentTypeHasBeenSet = true;
    }

    if (value.HasMember("ContentId") && !value["ContentId"].IsNull())
    {
        if (!value["ContentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrowseEvent.ContentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentId = string(value["ContentId"].GetString());
        m_contentIdHasBeenSet = true;
    }

    if (value.HasMember("ReferPageType") && !value["ReferPageType"].IsNull())
    {
        if (!value["ReferPageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrowseEvent.ReferPageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_referPageType = string(value["ReferPageType"].GetString());
        m_referPageTypeHasBeenSet = true;
    }

    if (value.HasMember("ReferPageUrl") && !value["ReferPageUrl"].IsNull())
    {
        if (!value["ReferPageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrowseEvent.ReferPageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_referPageUrl = string(value["ReferPageUrl"].GetString());
        m_referPageUrlHasBeenSet = true;
    }

    if (value.HasMember("GuestId") && !value["GuestId"].IsNull())
    {
        if (!value["GuestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrowseEvent.GuestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_guestId = string(value["GuestId"].GetString());
        m_guestIdHasBeenSet = true;
    }

    if (value.HasMember("Cust") && !value["Cust"].IsNull())
    {
        if (!value["Cust"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BrowseEvent.Cust` is not array type"));

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

void BrowseEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pageType.c_str(), allocator).Move(), allocator);
    }

    if (m_pageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_contentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentType.c_str(), allocator).Move(), allocator);
    }

    if (m_contentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentId.c_str(), allocator).Move(), allocator);
    }

    if (m_referPageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferPageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_referPageType.c_str(), allocator).Move(), allocator);
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


string BrowseEvent::GetPageType() const
{
    return m_pageType;
}

void BrowseEvent::SetPageType(const string& _pageType)
{
    m_pageType = _pageType;
    m_pageTypeHasBeenSet = true;
}

bool BrowseEvent::PageTypeHasBeenSet() const
{
    return m_pageTypeHasBeenSet;
}

string BrowseEvent::GetPageUrl() const
{
    return m_pageUrl;
}

void BrowseEvent::SetPageUrl(const string& _pageUrl)
{
    m_pageUrl = _pageUrl;
    m_pageUrlHasBeenSet = true;
}

bool BrowseEvent::PageUrlHasBeenSet() const
{
    return m_pageUrlHasBeenSet;
}

int64_t BrowseEvent::GetDuration() const
{
    return m_duration;
}

void BrowseEvent::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool BrowseEvent::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string BrowseEvent::GetContentType() const
{
    return m_contentType;
}

void BrowseEvent::SetContentType(const string& _contentType)
{
    m_contentType = _contentType;
    m_contentTypeHasBeenSet = true;
}

bool BrowseEvent::ContentTypeHasBeenSet() const
{
    return m_contentTypeHasBeenSet;
}

string BrowseEvent::GetContentId() const
{
    return m_contentId;
}

void BrowseEvent::SetContentId(const string& _contentId)
{
    m_contentId = _contentId;
    m_contentIdHasBeenSet = true;
}

bool BrowseEvent::ContentIdHasBeenSet() const
{
    return m_contentIdHasBeenSet;
}

string BrowseEvent::GetReferPageType() const
{
    return m_referPageType;
}

void BrowseEvent::SetReferPageType(const string& _referPageType)
{
    m_referPageType = _referPageType;
    m_referPageTypeHasBeenSet = true;
}

bool BrowseEvent::ReferPageTypeHasBeenSet() const
{
    return m_referPageTypeHasBeenSet;
}

string BrowseEvent::GetReferPageUrl() const
{
    return m_referPageUrl;
}

void BrowseEvent::SetReferPageUrl(const string& _referPageUrl)
{
    m_referPageUrl = _referPageUrl;
    m_referPageUrlHasBeenSet = true;
}

bool BrowseEvent::ReferPageUrlHasBeenSet() const
{
    return m_referPageUrlHasBeenSet;
}

string BrowseEvent::GetGuestId() const
{
    return m_guestId;
}

void BrowseEvent::SetGuestId(const string& _guestId)
{
    m_guestId = _guestId;
    m_guestIdHasBeenSet = true;
}

bool BrowseEvent::GuestIdHasBeenSet() const
{
    return m_guestIdHasBeenSet;
}

vector<Cust> BrowseEvent::GetCust() const
{
    return m_cust;
}

void BrowseEvent::SetCust(const vector<Cust>& _cust)
{
    m_cust = _cust;
    m_custHasBeenSet = true;
}

bool BrowseEvent::CustHasBeenSet() const
{
    return m_custHasBeenSet;
}

