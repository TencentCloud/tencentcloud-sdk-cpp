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

#include <tencentcloud/essbasic/v20210526/model/UsageDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

UsageDetail::UsageDetail() :
    m_proxyOrganizationOpenIdHasBeenSet(false),
    m_usageHasBeenSet(false),
    m_dateHasBeenSet(false)
{
}

CoreInternalOutcome UsageDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProxyOrganizationOpenId") && !value["ProxyOrganizationOpenId"].IsNull())
    {
        if (!value["ProxyOrganizationOpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.ProxyOrganizationOpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyOrganizationOpenId = string(value["ProxyOrganizationOpenId"].GetString());
        m_proxyOrganizationOpenIdHasBeenSet = true;
    }

    if (value.HasMember("Usage") && !value["Usage"].IsNull())
    {
        if (!value["Usage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.Usage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usage = value["Usage"].GetUint64();
        m_usageHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UsageDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_proxyOrganizationOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyOrganizationOpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyOrganizationOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_usageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Usage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usage, allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

}


string UsageDetail::GetProxyOrganizationOpenId() const
{
    return m_proxyOrganizationOpenId;
}

void UsageDetail::SetProxyOrganizationOpenId(const string& _proxyOrganizationOpenId)
{
    m_proxyOrganizationOpenId = _proxyOrganizationOpenId;
    m_proxyOrganizationOpenIdHasBeenSet = true;
}

bool UsageDetail::ProxyOrganizationOpenIdHasBeenSet() const
{
    return m_proxyOrganizationOpenIdHasBeenSet;
}

uint64_t UsageDetail::GetUsage() const
{
    return m_usage;
}

void UsageDetail::SetUsage(const uint64_t& _usage)
{
    m_usage = _usage;
    m_usageHasBeenSet = true;
}

bool UsageDetail::UsageHasBeenSet() const
{
    return m_usageHasBeenSet;
}

string UsageDetail::GetDate() const
{
    return m_date;
}

void UsageDetail::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool UsageDetail::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

