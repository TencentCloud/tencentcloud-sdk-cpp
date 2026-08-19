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

#include <tencentcloud/csip/v20221121/model/RiskCenterOverviewTrendAnalysis.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

RiskCenterOverviewTrendAnalysis::RiskCenterOverviewTrendAnalysis() :
    m_dateHasBeenSet(false),
    m_portHasBeenSet(false),
    m_vULHasBeenSet(false),
    m_weakPasswordHasBeenSet(false),
    m_websiteHasBeenSet(false),
    m_cFGHasBeenSet(false),
    m_serverHasBeenSet(false),
    m_hostCFGHasBeenSet(false),
    m_podCFGHasBeenSet(false)
{
}

CoreInternalOutcome RiskCenterOverviewTrendAnalysis::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCenterOverviewTrendAnalysis.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCenterOverviewTrendAnalysis.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("VUL") && !value["VUL"].IsNull())
    {
        if (!value["VUL"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCenterOverviewTrendAnalysis.VUL` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vUL = value["VUL"].GetInt64();
        m_vULHasBeenSet = true;
    }

    if (value.HasMember("WeakPassword") && !value["WeakPassword"].IsNull())
    {
        if (!value["WeakPassword"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCenterOverviewTrendAnalysis.WeakPassword` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_weakPassword = value["WeakPassword"].GetInt64();
        m_weakPasswordHasBeenSet = true;
    }

    if (value.HasMember("Website") && !value["Website"].IsNull())
    {
        if (!value["Website"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCenterOverviewTrendAnalysis.Website` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_website = value["Website"].GetInt64();
        m_websiteHasBeenSet = true;
    }

    if (value.HasMember("CFG") && !value["CFG"].IsNull())
    {
        if (!value["CFG"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCenterOverviewTrendAnalysis.CFG` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cFG = value["CFG"].GetInt64();
        m_cFGHasBeenSet = true;
    }

    if (value.HasMember("Server") && !value["Server"].IsNull())
    {
        if (!value["Server"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCenterOverviewTrendAnalysis.Server` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_server = value["Server"].GetInt64();
        m_serverHasBeenSet = true;
    }

    if (value.HasMember("HostCFG") && !value["HostCFG"].IsNull())
    {
        if (!value["HostCFG"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCenterOverviewTrendAnalysis.HostCFG` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hostCFG = value["HostCFG"].GetInt64();
        m_hostCFGHasBeenSet = true;
    }

    if (value.HasMember("PodCFG") && !value["PodCFG"].IsNull())
    {
        if (!value["PodCFG"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCenterOverviewTrendAnalysis.PodCFG` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_podCFG = value["PodCFG"].GetInt64();
        m_podCFGHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RiskCenterOverviewTrendAnalysis::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_vULHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VUL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vUL, allocator);
    }

    if (m_weakPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeakPassword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weakPassword, allocator);
    }

    if (m_websiteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Website";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_website, allocator);
    }

    if (m_cFGHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CFG";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cFG, allocator);
    }

    if (m_serverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Server";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_server, allocator);
    }

    if (m_hostCFGHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostCFG";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostCFG, allocator);
    }

    if (m_podCFGHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodCFG";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_podCFG, allocator);
    }

}


string RiskCenterOverviewTrendAnalysis::GetDate() const
{
    return m_date;
}

void RiskCenterOverviewTrendAnalysis::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool RiskCenterOverviewTrendAnalysis::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

int64_t RiskCenterOverviewTrendAnalysis::GetPort() const
{
    return m_port;
}

void RiskCenterOverviewTrendAnalysis::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool RiskCenterOverviewTrendAnalysis::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

int64_t RiskCenterOverviewTrendAnalysis::GetVUL() const
{
    return m_vUL;
}

void RiskCenterOverviewTrendAnalysis::SetVUL(const int64_t& _vUL)
{
    m_vUL = _vUL;
    m_vULHasBeenSet = true;
}

bool RiskCenterOverviewTrendAnalysis::VULHasBeenSet() const
{
    return m_vULHasBeenSet;
}

int64_t RiskCenterOverviewTrendAnalysis::GetWeakPassword() const
{
    return m_weakPassword;
}

void RiskCenterOverviewTrendAnalysis::SetWeakPassword(const int64_t& _weakPassword)
{
    m_weakPassword = _weakPassword;
    m_weakPasswordHasBeenSet = true;
}

bool RiskCenterOverviewTrendAnalysis::WeakPasswordHasBeenSet() const
{
    return m_weakPasswordHasBeenSet;
}

int64_t RiskCenterOverviewTrendAnalysis::GetWebsite() const
{
    return m_website;
}

void RiskCenterOverviewTrendAnalysis::SetWebsite(const int64_t& _website)
{
    m_website = _website;
    m_websiteHasBeenSet = true;
}

bool RiskCenterOverviewTrendAnalysis::WebsiteHasBeenSet() const
{
    return m_websiteHasBeenSet;
}

int64_t RiskCenterOverviewTrendAnalysis::GetCFG() const
{
    return m_cFG;
}

void RiskCenterOverviewTrendAnalysis::SetCFG(const int64_t& _cFG)
{
    m_cFG = _cFG;
    m_cFGHasBeenSet = true;
}

bool RiskCenterOverviewTrendAnalysis::CFGHasBeenSet() const
{
    return m_cFGHasBeenSet;
}

int64_t RiskCenterOverviewTrendAnalysis::GetServer() const
{
    return m_server;
}

void RiskCenterOverviewTrendAnalysis::SetServer(const int64_t& _server)
{
    m_server = _server;
    m_serverHasBeenSet = true;
}

bool RiskCenterOverviewTrendAnalysis::ServerHasBeenSet() const
{
    return m_serverHasBeenSet;
}

int64_t RiskCenterOverviewTrendAnalysis::GetHostCFG() const
{
    return m_hostCFG;
}

void RiskCenterOverviewTrendAnalysis::SetHostCFG(const int64_t& _hostCFG)
{
    m_hostCFG = _hostCFG;
    m_hostCFGHasBeenSet = true;
}

bool RiskCenterOverviewTrendAnalysis::HostCFGHasBeenSet() const
{
    return m_hostCFGHasBeenSet;
}

int64_t RiskCenterOverviewTrendAnalysis::GetPodCFG() const
{
    return m_podCFG;
}

void RiskCenterOverviewTrendAnalysis::SetPodCFG(const int64_t& _podCFG)
{
    m_podCFG = _podCFG;
    m_podCFGHasBeenSet = true;
}

bool RiskCenterOverviewTrendAnalysis::PodCFGHasBeenSet() const
{
    return m_podCFGHasBeenSet;
}

