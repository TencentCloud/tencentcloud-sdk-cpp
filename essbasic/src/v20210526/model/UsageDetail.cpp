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
    m_proxyOrganizationNameHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_usageHasBeenSet(false),
    m_cancelHasBeenSet(false),
    m_flowChannelHasBeenSet(false)
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

    if (value.HasMember("ProxyOrganizationName") && !value["ProxyOrganizationName"].IsNull())
    {
        if (!value["ProxyOrganizationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.ProxyOrganizationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyOrganizationName = string(value["ProxyOrganizationName"].GetString());
        m_proxyOrganizationNameHasBeenSet = true;
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

    if (value.HasMember("Usage") && !value["Usage"].IsNull())
    {
        if (!value["Usage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.Usage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usage = value["Usage"].GetUint64();
        m_usageHasBeenSet = true;
    }

    if (value.HasMember("Cancel") && !value["Cancel"].IsNull())
    {
        if (!value["Cancel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.Cancel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cancel = value["Cancel"].GetUint64();
        m_cancelHasBeenSet = true;
    }

    if (value.HasMember("FlowChannel") && !value["FlowChannel"].IsNull())
    {
        if (!value["FlowChannel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.FlowChannel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowChannel = string(value["FlowChannel"].GetString());
        m_flowChannelHasBeenSet = true;
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

    if (m_proxyOrganizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyOrganizationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyOrganizationName.c_str(), allocator).Move(), allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_usageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Usage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usage, allocator);
    }

    if (m_cancelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cancel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cancel, allocator);
    }

    if (m_flowChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowChannel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowChannel.c_str(), allocator).Move(), allocator);
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

string UsageDetail::GetProxyOrganizationName() const
{
    return m_proxyOrganizationName;
}

void UsageDetail::SetProxyOrganizationName(const string& _proxyOrganizationName)
{
    m_proxyOrganizationName = _proxyOrganizationName;
    m_proxyOrganizationNameHasBeenSet = true;
}

bool UsageDetail::ProxyOrganizationNameHasBeenSet() const
{
    return m_proxyOrganizationNameHasBeenSet;
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

uint64_t UsageDetail::GetCancel() const
{
    return m_cancel;
}

void UsageDetail::SetCancel(const uint64_t& _cancel)
{
    m_cancel = _cancel;
    m_cancelHasBeenSet = true;
}

bool UsageDetail::CancelHasBeenSet() const
{
    return m_cancelHasBeenSet;
}

string UsageDetail::GetFlowChannel() const
{
    return m_flowChannel;
}

void UsageDetail::SetFlowChannel(const string& _flowChannel)
{
    m_flowChannel = _flowChannel;
    m_flowChannelHasBeenSet = true;
}

bool UsageDetail::FlowChannelHasBeenSet() const
{
    return m_flowChannelHasBeenSet;
}

