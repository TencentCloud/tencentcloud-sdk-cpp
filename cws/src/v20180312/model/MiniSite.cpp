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

#include <tencentcloud/cws/v20180312/model/MiniSite.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cws::V20180312::Model;
using namespace std;

MiniSite::MiniSite() :
    m_siteIdHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

CoreInternalOutcome MiniSite::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SiteId") && !value["SiteId"].IsNull())
    {
        if (!value["SiteId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MiniSite.SiteId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_siteId = value["SiteId"].GetUint64();
        m_siteIdHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MiniSite.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MiniSite::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_siteIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SiteId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_siteId, allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

}


uint64_t MiniSite::GetSiteId() const
{
    return m_siteId;
}

void MiniSite::SetSiteId(const uint64_t& _siteId)
{
    m_siteId = _siteId;
    m_siteIdHasBeenSet = true;
}

bool MiniSite::SiteIdHasBeenSet() const
{
    return m_siteIdHasBeenSet;
}

string MiniSite::GetUrl() const
{
    return m_url;
}

void MiniSite::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool MiniSite::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

