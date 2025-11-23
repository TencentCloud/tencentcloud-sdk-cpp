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

#include <tencentcloud/waf/v20180125/model/CreateRateLimitV2Request.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

CreateRateLimitV2Request::CreateRateLimitV2Request() :
    m_domainHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_limitWindowHasBeenSet(false),
    m_limitObjectHasBeenSet(false),
    m_limitStrategyHasBeenSet(false),
    m_limitMethodHasBeenSet(false),
    m_limitPathsHasBeenSet(false),
    m_limitHeadersHasBeenSet(false),
    m_limitHeaderNameHasBeenSet(false),
    m_getParamsNameHasBeenSet(false),
    m_getParamsValueHasBeenSet(false),
    m_postParamsNameHasBeenSet(false),
    m_postParamsValueHasBeenSet(false),
    m_ipLocationHasBeenSet(false),
    m_redirectInfoHasBeenSet(false),
    m_blockPageHasBeenSet(false),
    m_objectSrcHasBeenSet(false),
    m_quotaShareHasBeenSet(false),
    m_pathsOptionHasBeenSet(false),
    m_orderHasBeenSet(false)
{
}

string CreateRateLimitV2Request::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_priority, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_limitWindowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitWindow";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_limitWindow.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_limitObjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitObject";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_limitObject.c_str(), allocator).Move(), allocator);
    }

    if (m_limitStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limitStrategy, allocator);
    }

    if (m_limitMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_limitMethod.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_limitPathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitPaths";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_limitPaths.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_limitHeadersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitHeaders";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_limitHeaders.begin(); itr != m_limitHeaders.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_limitHeaderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitHeaderName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_limitHeaderName.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_getParamsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GetParamsName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_getParamsName.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_getParamsValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GetParamsValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_getParamsValue.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_postParamsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostParamsName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_postParamsName.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_postParamsValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostParamsValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_postParamsValue.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_ipLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpLocation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ipLocation.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_redirectInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedirectInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_redirectInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_blockPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockPage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_blockPage, allocator);
    }

    if (m_objectSrcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectSrc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_objectSrc, allocator);
    }

    if (m_quotaShareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaShare";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_quotaShare, allocator);
    }

    if (m_pathsOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathsOption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_pathsOption.begin(); itr != m_pathsOption.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_order, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRateLimitV2Request::GetDomain() const
{
    return m_domain;
}

void CreateRateLimitV2Request::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CreateRateLimitV2Request::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string CreateRateLimitV2Request::GetName() const
{
    return m_name;
}

void CreateRateLimitV2Request::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateRateLimitV2Request::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t CreateRateLimitV2Request::GetPriority() const
{
    return m_priority;
}

void CreateRateLimitV2Request::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool CreateRateLimitV2Request::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

int64_t CreateRateLimitV2Request::GetStatus() const
{
    return m_status;
}

void CreateRateLimitV2Request::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CreateRateLimitV2Request::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

LimitWindow CreateRateLimitV2Request::GetLimitWindow() const
{
    return m_limitWindow;
}

void CreateRateLimitV2Request::SetLimitWindow(const LimitWindow& _limitWindow)
{
    m_limitWindow = _limitWindow;
    m_limitWindowHasBeenSet = true;
}

bool CreateRateLimitV2Request::LimitWindowHasBeenSet() const
{
    return m_limitWindowHasBeenSet;
}

string CreateRateLimitV2Request::GetLimitObject() const
{
    return m_limitObject;
}

void CreateRateLimitV2Request::SetLimitObject(const string& _limitObject)
{
    m_limitObject = _limitObject;
    m_limitObjectHasBeenSet = true;
}

bool CreateRateLimitV2Request::LimitObjectHasBeenSet() const
{
    return m_limitObjectHasBeenSet;
}

int64_t CreateRateLimitV2Request::GetLimitStrategy() const
{
    return m_limitStrategy;
}

void CreateRateLimitV2Request::SetLimitStrategy(const int64_t& _limitStrategy)
{
    m_limitStrategy = _limitStrategy;
    m_limitStrategyHasBeenSet = true;
}

bool CreateRateLimitV2Request::LimitStrategyHasBeenSet() const
{
    return m_limitStrategyHasBeenSet;
}

LimitMethod CreateRateLimitV2Request::GetLimitMethod() const
{
    return m_limitMethod;
}

void CreateRateLimitV2Request::SetLimitMethod(const LimitMethod& _limitMethod)
{
    m_limitMethod = _limitMethod;
    m_limitMethodHasBeenSet = true;
}

bool CreateRateLimitV2Request::LimitMethodHasBeenSet() const
{
    return m_limitMethodHasBeenSet;
}

LimitPath CreateRateLimitV2Request::GetLimitPaths() const
{
    return m_limitPaths;
}

void CreateRateLimitV2Request::SetLimitPaths(const LimitPath& _limitPaths)
{
    m_limitPaths = _limitPaths;
    m_limitPathsHasBeenSet = true;
}

bool CreateRateLimitV2Request::LimitPathsHasBeenSet() const
{
    return m_limitPathsHasBeenSet;
}

vector<LimitHeader> CreateRateLimitV2Request::GetLimitHeaders() const
{
    return m_limitHeaders;
}

void CreateRateLimitV2Request::SetLimitHeaders(const vector<LimitHeader>& _limitHeaders)
{
    m_limitHeaders = _limitHeaders;
    m_limitHeadersHasBeenSet = true;
}

bool CreateRateLimitV2Request::LimitHeadersHasBeenSet() const
{
    return m_limitHeadersHasBeenSet;
}

LimitHeaderName CreateRateLimitV2Request::GetLimitHeaderName() const
{
    return m_limitHeaderName;
}

void CreateRateLimitV2Request::SetLimitHeaderName(const LimitHeaderName& _limitHeaderName)
{
    m_limitHeaderName = _limitHeaderName;
    m_limitHeaderNameHasBeenSet = true;
}

bool CreateRateLimitV2Request::LimitHeaderNameHasBeenSet() const
{
    return m_limitHeaderNameHasBeenSet;
}

MatchOption CreateRateLimitV2Request::GetGetParamsName() const
{
    return m_getParamsName;
}

void CreateRateLimitV2Request::SetGetParamsName(const MatchOption& _getParamsName)
{
    m_getParamsName = _getParamsName;
    m_getParamsNameHasBeenSet = true;
}

bool CreateRateLimitV2Request::GetParamsNameHasBeenSet() const
{
    return m_getParamsNameHasBeenSet;
}

MatchOption CreateRateLimitV2Request::GetGetParamsValue() const
{
    return m_getParamsValue;
}

void CreateRateLimitV2Request::SetGetParamsValue(const MatchOption& _getParamsValue)
{
    m_getParamsValue = _getParamsValue;
    m_getParamsValueHasBeenSet = true;
}

bool CreateRateLimitV2Request::GetParamsValueHasBeenSet() const
{
    return m_getParamsValueHasBeenSet;
}

MatchOption CreateRateLimitV2Request::GetPostParamsName() const
{
    return m_postParamsName;
}

void CreateRateLimitV2Request::SetPostParamsName(const MatchOption& _postParamsName)
{
    m_postParamsName = _postParamsName;
    m_postParamsNameHasBeenSet = true;
}

bool CreateRateLimitV2Request::PostParamsNameHasBeenSet() const
{
    return m_postParamsNameHasBeenSet;
}

MatchOption CreateRateLimitV2Request::GetPostParamsValue() const
{
    return m_postParamsValue;
}

void CreateRateLimitV2Request::SetPostParamsValue(const MatchOption& _postParamsValue)
{
    m_postParamsValue = _postParamsValue;
    m_postParamsValueHasBeenSet = true;
}

bool CreateRateLimitV2Request::PostParamsValueHasBeenSet() const
{
    return m_postParamsValueHasBeenSet;
}

MatchOption CreateRateLimitV2Request::GetIpLocation() const
{
    return m_ipLocation;
}

void CreateRateLimitV2Request::SetIpLocation(const MatchOption& _ipLocation)
{
    m_ipLocation = _ipLocation;
    m_ipLocationHasBeenSet = true;
}

bool CreateRateLimitV2Request::IpLocationHasBeenSet() const
{
    return m_ipLocationHasBeenSet;
}

RedirectInfo CreateRateLimitV2Request::GetRedirectInfo() const
{
    return m_redirectInfo;
}

void CreateRateLimitV2Request::SetRedirectInfo(const RedirectInfo& _redirectInfo)
{
    m_redirectInfo = _redirectInfo;
    m_redirectInfoHasBeenSet = true;
}

bool CreateRateLimitV2Request::RedirectInfoHasBeenSet() const
{
    return m_redirectInfoHasBeenSet;
}

int64_t CreateRateLimitV2Request::GetBlockPage() const
{
    return m_blockPage;
}

void CreateRateLimitV2Request::SetBlockPage(const int64_t& _blockPage)
{
    m_blockPage = _blockPage;
    m_blockPageHasBeenSet = true;
}

bool CreateRateLimitV2Request::BlockPageHasBeenSet() const
{
    return m_blockPageHasBeenSet;
}

int64_t CreateRateLimitV2Request::GetObjectSrc() const
{
    return m_objectSrc;
}

void CreateRateLimitV2Request::SetObjectSrc(const int64_t& _objectSrc)
{
    m_objectSrc = _objectSrc;
    m_objectSrcHasBeenSet = true;
}

bool CreateRateLimitV2Request::ObjectSrcHasBeenSet() const
{
    return m_objectSrcHasBeenSet;
}

bool CreateRateLimitV2Request::GetQuotaShare() const
{
    return m_quotaShare;
}

void CreateRateLimitV2Request::SetQuotaShare(const bool& _quotaShare)
{
    m_quotaShare = _quotaShare;
    m_quotaShareHasBeenSet = true;
}

bool CreateRateLimitV2Request::QuotaShareHasBeenSet() const
{
    return m_quotaShareHasBeenSet;
}

vector<PathItem> CreateRateLimitV2Request::GetPathsOption() const
{
    return m_pathsOption;
}

void CreateRateLimitV2Request::SetPathsOption(const vector<PathItem>& _pathsOption)
{
    m_pathsOption = _pathsOption;
    m_pathsOptionHasBeenSet = true;
}

bool CreateRateLimitV2Request::PathsOptionHasBeenSet() const
{
    return m_pathsOptionHasBeenSet;
}

int64_t CreateRateLimitV2Request::GetOrder() const
{
    return m_order;
}

void CreateRateLimitV2Request::SetOrder(const int64_t& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool CreateRateLimitV2Request::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}


