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

#include <tencentcloud/cws/v20180312/model/DescribeVulsNumberResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cws::V20180312::Model;
using namespace rapidjson;
using namespace std;

DescribeVulsNumberResponse::DescribeVulsNumberResponse() :
    m_impactSiteNumberHasBeenSet(false),
    m_siteNumberHasBeenSet(false),
    m_vulsHighNumberHasBeenSet(false),
    m_vulsMiddleNumberHasBeenSet(false),
    m_vulsLowNumberHasBeenSet(false),
    m_vulsNoticeNumberHasBeenSet(false),
    m_pageCountHasBeenSet(false),
    m_sitesHasBeenSet(false),
    m_impactSitesHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVulsNumberResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("ImpactSiteNumber") && !rsp["ImpactSiteNumber"].IsNull())
    {
        if (!rsp["ImpactSiteNumber"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ImpactSiteNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_impactSiteNumber = rsp["ImpactSiteNumber"].GetUint64();
        m_impactSiteNumberHasBeenSet = true;
    }

    if (rsp.HasMember("SiteNumber") && !rsp["SiteNumber"].IsNull())
    {
        if (!rsp["SiteNumber"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SiteNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_siteNumber = rsp["SiteNumber"].GetUint64();
        m_siteNumberHasBeenSet = true;
    }

    if (rsp.HasMember("VulsHighNumber") && !rsp["VulsHighNumber"].IsNull())
    {
        if (!rsp["VulsHighNumber"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `VulsHighNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulsHighNumber = rsp["VulsHighNumber"].GetUint64();
        m_vulsHighNumberHasBeenSet = true;
    }

    if (rsp.HasMember("VulsMiddleNumber") && !rsp["VulsMiddleNumber"].IsNull())
    {
        if (!rsp["VulsMiddleNumber"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `VulsMiddleNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulsMiddleNumber = rsp["VulsMiddleNumber"].GetUint64();
        m_vulsMiddleNumberHasBeenSet = true;
    }

    if (rsp.HasMember("VulsLowNumber") && !rsp["VulsLowNumber"].IsNull())
    {
        if (!rsp["VulsLowNumber"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `VulsLowNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulsLowNumber = rsp["VulsLowNumber"].GetUint64();
        m_vulsLowNumberHasBeenSet = true;
    }

    if (rsp.HasMember("VulsNoticeNumber") && !rsp["VulsNoticeNumber"].IsNull())
    {
        if (!rsp["VulsNoticeNumber"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `VulsNoticeNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulsNoticeNumber = rsp["VulsNoticeNumber"].GetUint64();
        m_vulsNoticeNumberHasBeenSet = true;
    }

    if (rsp.HasMember("PageCount") && !rsp["PageCount"].IsNull())
    {
        if (!rsp["PageCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `PageCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pageCount = rsp["PageCount"].GetUint64();
        m_pageCountHasBeenSet = true;
    }

    if (rsp.HasMember("Sites") && !rsp["Sites"].IsNull())
    {
        if (!rsp["Sites"].IsArray())
            return CoreInternalOutcome(Error("response `Sites` is not array type"));

        const Value &tmpValue = rsp["Sites"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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

    if (rsp.HasMember("ImpactSites") && !rsp["ImpactSites"].IsNull())
    {
        if (!rsp["ImpactSites"].IsArray())
            return CoreInternalOutcome(Error("response `ImpactSites` is not array type"));

        const Value &tmpValue = rsp["ImpactSites"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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


    return CoreInternalOutcome(true);
}


uint64_t DescribeVulsNumberResponse::GetImpactSiteNumber() const
{
    return m_impactSiteNumber;
}

bool DescribeVulsNumberResponse::ImpactSiteNumberHasBeenSet() const
{
    return m_impactSiteNumberHasBeenSet;
}

uint64_t DescribeVulsNumberResponse::GetSiteNumber() const
{
    return m_siteNumber;
}

bool DescribeVulsNumberResponse::SiteNumberHasBeenSet() const
{
    return m_siteNumberHasBeenSet;
}

uint64_t DescribeVulsNumberResponse::GetVulsHighNumber() const
{
    return m_vulsHighNumber;
}

bool DescribeVulsNumberResponse::VulsHighNumberHasBeenSet() const
{
    return m_vulsHighNumberHasBeenSet;
}

uint64_t DescribeVulsNumberResponse::GetVulsMiddleNumber() const
{
    return m_vulsMiddleNumber;
}

bool DescribeVulsNumberResponse::VulsMiddleNumberHasBeenSet() const
{
    return m_vulsMiddleNumberHasBeenSet;
}

uint64_t DescribeVulsNumberResponse::GetVulsLowNumber() const
{
    return m_vulsLowNumber;
}

bool DescribeVulsNumberResponse::VulsLowNumberHasBeenSet() const
{
    return m_vulsLowNumberHasBeenSet;
}

uint64_t DescribeVulsNumberResponse::GetVulsNoticeNumber() const
{
    return m_vulsNoticeNumber;
}

bool DescribeVulsNumberResponse::VulsNoticeNumberHasBeenSet() const
{
    return m_vulsNoticeNumberHasBeenSet;
}

uint64_t DescribeVulsNumberResponse::GetPageCount() const
{
    return m_pageCount;
}

bool DescribeVulsNumberResponse::PageCountHasBeenSet() const
{
    return m_pageCountHasBeenSet;
}

vector<MonitorMiniSite> DescribeVulsNumberResponse::GetSites() const
{
    return m_sites;
}

bool DescribeVulsNumberResponse::SitesHasBeenSet() const
{
    return m_sitesHasBeenSet;
}

vector<MonitorMiniSite> DescribeVulsNumberResponse::GetImpactSites() const
{
    return m_impactSites;
}

bool DescribeVulsNumberResponse::ImpactSitesHasBeenSet() const
{
    return m_impactSitesHasBeenSet;
}


