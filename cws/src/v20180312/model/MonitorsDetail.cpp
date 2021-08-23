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

#include <tencentcloud/cws/v20180312/model/MonitorsDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cws::V20180312::Model;
using namespace std;

MonitorsDetail::MonitorsDetail() :
    m_basicHasBeenSet(false),
    m_sitesHasBeenSet(false),
    m_siteNumberHasBeenSet(false),
    m_impactSitesHasBeenSet(false),
    m_impactSiteNumberHasBeenSet(false),
    m_vulsHighNumberHasBeenSet(false),
    m_vulsMiddleNumberHasBeenSet(false),
    m_vulsLowNumberHasBeenSet(false),
    m_vulsNoticeNumberHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_pageCountHasBeenSet(false),
    m_contentNumberHasBeenSet(false)
{
}

CoreInternalOutcome MonitorsDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Basic") && !value["Basic"].IsNull())
    {
        if (!value["Basic"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorsDetail.Basic` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_basic.Deserialize(value["Basic"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_basicHasBeenSet = true;
    }

    if (value.HasMember("Sites") && !value["Sites"].IsNull())
    {
        if (!value["Sites"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MonitorsDetail.Sites` is not array type"));

        const rapidjson::Value &tmpValue = value["Sites"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MonitorMiniSite item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sites.push_back(item);
        }
        m_sitesHasBeenSet = true;
    }

    if (value.HasMember("SiteNumber") && !value["SiteNumber"].IsNull())
    {
        if (!value["SiteNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorsDetail.SiteNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_siteNumber = value["SiteNumber"].GetUint64();
        m_siteNumberHasBeenSet = true;
    }

    if (value.HasMember("ImpactSites") && !value["ImpactSites"].IsNull())
    {
        if (!value["ImpactSites"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MonitorsDetail.ImpactSites` is not array type"));

        const rapidjson::Value &tmpValue = value["ImpactSites"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MonitorMiniSite item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_impactSites.push_back(item);
        }
        m_impactSitesHasBeenSet = true;
    }

    if (value.HasMember("ImpactSiteNumber") && !value["ImpactSiteNumber"].IsNull())
    {
        if (!value["ImpactSiteNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorsDetail.ImpactSiteNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_impactSiteNumber = value["ImpactSiteNumber"].GetUint64();
        m_impactSiteNumberHasBeenSet = true;
    }

    if (value.HasMember("VulsHighNumber") && !value["VulsHighNumber"].IsNull())
    {
        if (!value["VulsHighNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorsDetail.VulsHighNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulsHighNumber = value["VulsHighNumber"].GetUint64();
        m_vulsHighNumberHasBeenSet = true;
    }

    if (value.HasMember("VulsMiddleNumber") && !value["VulsMiddleNumber"].IsNull())
    {
        if (!value["VulsMiddleNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorsDetail.VulsMiddleNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulsMiddleNumber = value["VulsMiddleNumber"].GetUint64();
        m_vulsMiddleNumberHasBeenSet = true;
    }

    if (value.HasMember("VulsLowNumber") && !value["VulsLowNumber"].IsNull())
    {
        if (!value["VulsLowNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorsDetail.VulsLowNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulsLowNumber = value["VulsLowNumber"].GetUint64();
        m_vulsLowNumberHasBeenSet = true;
    }

    if (value.HasMember("VulsNoticeNumber") && !value["VulsNoticeNumber"].IsNull())
    {
        if (!value["VulsNoticeNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorsDetail.VulsNoticeNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulsNoticeNumber = value["VulsNoticeNumber"].GetUint64();
        m_vulsNoticeNumberHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorsDetail.Progress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetUint64();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("PageCount") && !value["PageCount"].IsNull())
    {
        if (!value["PageCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorsDetail.PageCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pageCount = value["PageCount"].GetUint64();
        m_pageCountHasBeenSet = true;
    }

    if (value.HasMember("ContentNumber") && !value["ContentNumber"].IsNull())
    {
        if (!value["ContentNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorsDetail.ContentNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_contentNumber = value["ContentNumber"].GetUint64();
        m_contentNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MonitorsDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_basicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Basic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_basic.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sitesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sites";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sites.begin(); itr != m_sites.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_siteNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SiteNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_siteNumber, allocator);
    }

    if (m_impactSitesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImpactSites";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_impactSites.begin(); itr != m_impactSites.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_impactSiteNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImpactSiteNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_impactSiteNumber, allocator);
    }

    if (m_vulsHighNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulsHighNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulsHighNumber, allocator);
    }

    if (m_vulsMiddleNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulsMiddleNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulsMiddleNumber, allocator);
    }

    if (m_vulsLowNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulsLowNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulsLowNumber, allocator);
    }

    if (m_vulsNoticeNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulsNoticeNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulsNoticeNumber, allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_pageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageCount, allocator);
    }

    if (m_contentNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_contentNumber, allocator);
    }

}


Monitor MonitorsDetail::GetBasic() const
{
    return m_basic;
}

void MonitorsDetail::SetBasic(const Monitor& _basic)
{
    m_basic = _basic;
    m_basicHasBeenSet = true;
}

bool MonitorsDetail::BasicHasBeenSet() const
{
    return m_basicHasBeenSet;
}

vector<MonitorMiniSite> MonitorsDetail::GetSites() const
{
    return m_sites;
}

void MonitorsDetail::SetSites(const vector<MonitorMiniSite>& _sites)
{
    m_sites = _sites;
    m_sitesHasBeenSet = true;
}

bool MonitorsDetail::SitesHasBeenSet() const
{
    return m_sitesHasBeenSet;
}

uint64_t MonitorsDetail::GetSiteNumber() const
{
    return m_siteNumber;
}

void MonitorsDetail::SetSiteNumber(const uint64_t& _siteNumber)
{
    m_siteNumber = _siteNumber;
    m_siteNumberHasBeenSet = true;
}

bool MonitorsDetail::SiteNumberHasBeenSet() const
{
    return m_siteNumberHasBeenSet;
}

vector<MonitorMiniSite> MonitorsDetail::GetImpactSites() const
{
    return m_impactSites;
}

void MonitorsDetail::SetImpactSites(const vector<MonitorMiniSite>& _impactSites)
{
    m_impactSites = _impactSites;
    m_impactSitesHasBeenSet = true;
}

bool MonitorsDetail::ImpactSitesHasBeenSet() const
{
    return m_impactSitesHasBeenSet;
}

uint64_t MonitorsDetail::GetImpactSiteNumber() const
{
    return m_impactSiteNumber;
}

void MonitorsDetail::SetImpactSiteNumber(const uint64_t& _impactSiteNumber)
{
    m_impactSiteNumber = _impactSiteNumber;
    m_impactSiteNumberHasBeenSet = true;
}

bool MonitorsDetail::ImpactSiteNumberHasBeenSet() const
{
    return m_impactSiteNumberHasBeenSet;
}

uint64_t MonitorsDetail::GetVulsHighNumber() const
{
    return m_vulsHighNumber;
}

void MonitorsDetail::SetVulsHighNumber(const uint64_t& _vulsHighNumber)
{
    m_vulsHighNumber = _vulsHighNumber;
    m_vulsHighNumberHasBeenSet = true;
}

bool MonitorsDetail::VulsHighNumberHasBeenSet() const
{
    return m_vulsHighNumberHasBeenSet;
}

uint64_t MonitorsDetail::GetVulsMiddleNumber() const
{
    return m_vulsMiddleNumber;
}

void MonitorsDetail::SetVulsMiddleNumber(const uint64_t& _vulsMiddleNumber)
{
    m_vulsMiddleNumber = _vulsMiddleNumber;
    m_vulsMiddleNumberHasBeenSet = true;
}

bool MonitorsDetail::VulsMiddleNumberHasBeenSet() const
{
    return m_vulsMiddleNumberHasBeenSet;
}

uint64_t MonitorsDetail::GetVulsLowNumber() const
{
    return m_vulsLowNumber;
}

void MonitorsDetail::SetVulsLowNumber(const uint64_t& _vulsLowNumber)
{
    m_vulsLowNumber = _vulsLowNumber;
    m_vulsLowNumberHasBeenSet = true;
}

bool MonitorsDetail::VulsLowNumberHasBeenSet() const
{
    return m_vulsLowNumberHasBeenSet;
}

uint64_t MonitorsDetail::GetVulsNoticeNumber() const
{
    return m_vulsNoticeNumber;
}

void MonitorsDetail::SetVulsNoticeNumber(const uint64_t& _vulsNoticeNumber)
{
    m_vulsNoticeNumber = _vulsNoticeNumber;
    m_vulsNoticeNumberHasBeenSet = true;
}

bool MonitorsDetail::VulsNoticeNumberHasBeenSet() const
{
    return m_vulsNoticeNumberHasBeenSet;
}

uint64_t MonitorsDetail::GetProgress() const
{
    return m_progress;
}

void MonitorsDetail::SetProgress(const uint64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool MonitorsDetail::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

uint64_t MonitorsDetail::GetPageCount() const
{
    return m_pageCount;
}

void MonitorsDetail::SetPageCount(const uint64_t& _pageCount)
{
    m_pageCount = _pageCount;
    m_pageCountHasBeenSet = true;
}

bool MonitorsDetail::PageCountHasBeenSet() const
{
    return m_pageCountHasBeenSet;
}

uint64_t MonitorsDetail::GetContentNumber() const
{
    return m_contentNumber;
}

void MonitorsDetail::SetContentNumber(const uint64_t& _contentNumber)
{
    m_contentNumber = _contentNumber;
    m_contentNumberHasBeenSet = true;
}

bool MonitorsDetail::ContentNumberHasBeenSet() const
{
    return m_contentNumberHasBeenSet;
}

