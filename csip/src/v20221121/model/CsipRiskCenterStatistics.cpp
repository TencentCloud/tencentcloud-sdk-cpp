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

#include <tencentcloud/csip/v20221121/model/CsipRiskCenterStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CsipRiskCenterStatistics::CsipRiskCenterStatistics() :
    m_portTotalHasBeenSet(false),
    m_portHighLevelHasBeenSet(false),
    m_weakPasswordTotalHasBeenSet(false),
    m_weakPasswordHighLevelHasBeenSet(false),
    m_websiteTotalHasBeenSet(false),
    m_websiteHighLevelHasBeenSet(false),
    m_lastScanTimeHasBeenSet(false),
    m_vULTotalHasBeenSet(false),
    m_vULHighLevelHasBeenSet(false),
    m_cFGTotalHasBeenSet(false),
    m_cFGHighLevelHasBeenSet(false),
    m_serverTotalHasBeenSet(false),
    m_serverHighLevelHasBeenSet(false),
    m_hostBaseLineRiskTotalHasBeenSet(false),
    m_hostBaseLineRiskHighLevelHasBeenSet(false),
    m_podBaseLineRiskTotalHasBeenSet(false),
    m_podBaseLineRiskHighLevelHasBeenSet(false)
{
}

CoreInternalOutcome CsipRiskCenterStatistics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PortTotal") && !value["PortTotal"].IsNull())
    {
        if (!value["PortTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CsipRiskCenterStatistics.PortTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_portTotal = value["PortTotal"].GetUint64();
        m_portTotalHasBeenSet = true;
    }

    if (value.HasMember("PortHighLevel") && !value["PortHighLevel"].IsNull())
    {
        if (!value["PortHighLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CsipRiskCenterStatistics.PortHighLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_portHighLevel = value["PortHighLevel"].GetUint64();
        m_portHighLevelHasBeenSet = true;
    }

    if (value.HasMember("WeakPasswordTotal") && !value["WeakPasswordTotal"].IsNull())
    {
        if (!value["WeakPasswordTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CsipRiskCenterStatistics.WeakPasswordTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_weakPasswordTotal = value["WeakPasswordTotal"].GetUint64();
        m_weakPasswordTotalHasBeenSet = true;
    }

    if (value.HasMember("WeakPasswordHighLevel") && !value["WeakPasswordHighLevel"].IsNull())
    {
        if (!value["WeakPasswordHighLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CsipRiskCenterStatistics.WeakPasswordHighLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_weakPasswordHighLevel = value["WeakPasswordHighLevel"].GetUint64();
        m_weakPasswordHighLevelHasBeenSet = true;
    }

    if (value.HasMember("WebsiteTotal") && !value["WebsiteTotal"].IsNull())
    {
        if (!value["WebsiteTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CsipRiskCenterStatistics.WebsiteTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_websiteTotal = value["WebsiteTotal"].GetUint64();
        m_websiteTotalHasBeenSet = true;
    }

    if (value.HasMember("WebsiteHighLevel") && !value["WebsiteHighLevel"].IsNull())
    {
        if (!value["WebsiteHighLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CsipRiskCenterStatistics.WebsiteHighLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_websiteHighLevel = value["WebsiteHighLevel"].GetUint64();
        m_websiteHighLevelHasBeenSet = true;
    }

    if (value.HasMember("LastScanTime") && !value["LastScanTime"].IsNull())
    {
        if (!value["LastScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CsipRiskCenterStatistics.LastScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanTime = string(value["LastScanTime"].GetString());
        m_lastScanTimeHasBeenSet = true;
    }

    if (value.HasMember("VULTotal") && !value["VULTotal"].IsNull())
    {
        if (!value["VULTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CsipRiskCenterStatistics.VULTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vULTotal = value["VULTotal"].GetInt64();
        m_vULTotalHasBeenSet = true;
    }

    if (value.HasMember("VULHighLevel") && !value["VULHighLevel"].IsNull())
    {
        if (!value["VULHighLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CsipRiskCenterStatistics.VULHighLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vULHighLevel = value["VULHighLevel"].GetInt64();
        m_vULHighLevelHasBeenSet = true;
    }

    if (value.HasMember("CFGTotal") && !value["CFGTotal"].IsNull())
    {
        if (!value["CFGTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CsipRiskCenterStatistics.CFGTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cFGTotal = value["CFGTotal"].GetInt64();
        m_cFGTotalHasBeenSet = true;
    }

    if (value.HasMember("CFGHighLevel") && !value["CFGHighLevel"].IsNull())
    {
        if (!value["CFGHighLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CsipRiskCenterStatistics.CFGHighLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cFGHighLevel = value["CFGHighLevel"].GetInt64();
        m_cFGHighLevelHasBeenSet = true;
    }

    if (value.HasMember("ServerTotal") && !value["ServerTotal"].IsNull())
    {
        if (!value["ServerTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CsipRiskCenterStatistics.ServerTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_serverTotal = value["ServerTotal"].GetInt64();
        m_serverTotalHasBeenSet = true;
    }

    if (value.HasMember("ServerHighLevel") && !value["ServerHighLevel"].IsNull())
    {
        if (!value["ServerHighLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CsipRiskCenterStatistics.ServerHighLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_serverHighLevel = value["ServerHighLevel"].GetInt64();
        m_serverHighLevelHasBeenSet = true;
    }

    if (value.HasMember("HostBaseLineRiskTotal") && !value["HostBaseLineRiskTotal"].IsNull())
    {
        if (!value["HostBaseLineRiskTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CsipRiskCenterStatistics.HostBaseLineRiskTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hostBaseLineRiskTotal = value["HostBaseLineRiskTotal"].GetInt64();
        m_hostBaseLineRiskTotalHasBeenSet = true;
    }

    if (value.HasMember("HostBaseLineRiskHighLevel") && !value["HostBaseLineRiskHighLevel"].IsNull())
    {
        if (!value["HostBaseLineRiskHighLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CsipRiskCenterStatistics.HostBaseLineRiskHighLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hostBaseLineRiskHighLevel = value["HostBaseLineRiskHighLevel"].GetInt64();
        m_hostBaseLineRiskHighLevelHasBeenSet = true;
    }

    if (value.HasMember("PodBaseLineRiskTotal") && !value["PodBaseLineRiskTotal"].IsNull())
    {
        if (!value["PodBaseLineRiskTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CsipRiskCenterStatistics.PodBaseLineRiskTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_podBaseLineRiskTotal = value["PodBaseLineRiskTotal"].GetInt64();
        m_podBaseLineRiskTotalHasBeenSet = true;
    }

    if (value.HasMember("PodBaseLineRiskHighLevel") && !value["PodBaseLineRiskHighLevel"].IsNull())
    {
        if (!value["PodBaseLineRiskHighLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CsipRiskCenterStatistics.PodBaseLineRiskHighLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_podBaseLineRiskHighLevel = value["PodBaseLineRiskHighLevel"].GetInt64();
        m_podBaseLineRiskHighLevelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CsipRiskCenterStatistics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_portTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_portTotal, allocator);
    }

    if (m_portHighLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortHighLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_portHighLevel, allocator);
    }

    if (m_weakPasswordTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeakPasswordTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weakPasswordTotal, allocator);
    }

    if (m_weakPasswordHighLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeakPasswordHighLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weakPasswordHighLevel, allocator);
    }

    if (m_websiteTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebsiteTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_websiteTotal, allocator);
    }

    if (m_websiteHighLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebsiteHighLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_websiteHighLevel, allocator);
    }

    if (m_lastScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastScanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_vULTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VULTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vULTotal, allocator);
    }

    if (m_vULHighLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VULHighLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vULHighLevel, allocator);
    }

    if (m_cFGTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CFGTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cFGTotal, allocator);
    }

    if (m_cFGHighLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CFGHighLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cFGHighLevel, allocator);
    }

    if (m_serverTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serverTotal, allocator);
    }

    if (m_serverHighLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerHighLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serverHighLevel, allocator);
    }

    if (m_hostBaseLineRiskTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostBaseLineRiskTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostBaseLineRiskTotal, allocator);
    }

    if (m_hostBaseLineRiskHighLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostBaseLineRiskHighLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostBaseLineRiskHighLevel, allocator);
    }

    if (m_podBaseLineRiskTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodBaseLineRiskTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_podBaseLineRiskTotal, allocator);
    }

    if (m_podBaseLineRiskHighLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodBaseLineRiskHighLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_podBaseLineRiskHighLevel, allocator);
    }

}


uint64_t CsipRiskCenterStatistics::GetPortTotal() const
{
    return m_portTotal;
}

void CsipRiskCenterStatistics::SetPortTotal(const uint64_t& _portTotal)
{
    m_portTotal = _portTotal;
    m_portTotalHasBeenSet = true;
}

bool CsipRiskCenterStatistics::PortTotalHasBeenSet() const
{
    return m_portTotalHasBeenSet;
}

uint64_t CsipRiskCenterStatistics::GetPortHighLevel() const
{
    return m_portHighLevel;
}

void CsipRiskCenterStatistics::SetPortHighLevel(const uint64_t& _portHighLevel)
{
    m_portHighLevel = _portHighLevel;
    m_portHighLevelHasBeenSet = true;
}

bool CsipRiskCenterStatistics::PortHighLevelHasBeenSet() const
{
    return m_portHighLevelHasBeenSet;
}

uint64_t CsipRiskCenterStatistics::GetWeakPasswordTotal() const
{
    return m_weakPasswordTotal;
}

void CsipRiskCenterStatistics::SetWeakPasswordTotal(const uint64_t& _weakPasswordTotal)
{
    m_weakPasswordTotal = _weakPasswordTotal;
    m_weakPasswordTotalHasBeenSet = true;
}

bool CsipRiskCenterStatistics::WeakPasswordTotalHasBeenSet() const
{
    return m_weakPasswordTotalHasBeenSet;
}

uint64_t CsipRiskCenterStatistics::GetWeakPasswordHighLevel() const
{
    return m_weakPasswordHighLevel;
}

void CsipRiskCenterStatistics::SetWeakPasswordHighLevel(const uint64_t& _weakPasswordHighLevel)
{
    m_weakPasswordHighLevel = _weakPasswordHighLevel;
    m_weakPasswordHighLevelHasBeenSet = true;
}

bool CsipRiskCenterStatistics::WeakPasswordHighLevelHasBeenSet() const
{
    return m_weakPasswordHighLevelHasBeenSet;
}

uint64_t CsipRiskCenterStatistics::GetWebsiteTotal() const
{
    return m_websiteTotal;
}

void CsipRiskCenterStatistics::SetWebsiteTotal(const uint64_t& _websiteTotal)
{
    m_websiteTotal = _websiteTotal;
    m_websiteTotalHasBeenSet = true;
}

bool CsipRiskCenterStatistics::WebsiteTotalHasBeenSet() const
{
    return m_websiteTotalHasBeenSet;
}

uint64_t CsipRiskCenterStatistics::GetWebsiteHighLevel() const
{
    return m_websiteHighLevel;
}

void CsipRiskCenterStatistics::SetWebsiteHighLevel(const uint64_t& _websiteHighLevel)
{
    m_websiteHighLevel = _websiteHighLevel;
    m_websiteHighLevelHasBeenSet = true;
}

bool CsipRiskCenterStatistics::WebsiteHighLevelHasBeenSet() const
{
    return m_websiteHighLevelHasBeenSet;
}

string CsipRiskCenterStatistics::GetLastScanTime() const
{
    return m_lastScanTime;
}

void CsipRiskCenterStatistics::SetLastScanTime(const string& _lastScanTime)
{
    m_lastScanTime = _lastScanTime;
    m_lastScanTimeHasBeenSet = true;
}

bool CsipRiskCenterStatistics::LastScanTimeHasBeenSet() const
{
    return m_lastScanTimeHasBeenSet;
}

int64_t CsipRiskCenterStatistics::GetVULTotal() const
{
    return m_vULTotal;
}

void CsipRiskCenterStatistics::SetVULTotal(const int64_t& _vULTotal)
{
    m_vULTotal = _vULTotal;
    m_vULTotalHasBeenSet = true;
}

bool CsipRiskCenterStatistics::VULTotalHasBeenSet() const
{
    return m_vULTotalHasBeenSet;
}

int64_t CsipRiskCenterStatistics::GetVULHighLevel() const
{
    return m_vULHighLevel;
}

void CsipRiskCenterStatistics::SetVULHighLevel(const int64_t& _vULHighLevel)
{
    m_vULHighLevel = _vULHighLevel;
    m_vULHighLevelHasBeenSet = true;
}

bool CsipRiskCenterStatistics::VULHighLevelHasBeenSet() const
{
    return m_vULHighLevelHasBeenSet;
}

int64_t CsipRiskCenterStatistics::GetCFGTotal() const
{
    return m_cFGTotal;
}

void CsipRiskCenterStatistics::SetCFGTotal(const int64_t& _cFGTotal)
{
    m_cFGTotal = _cFGTotal;
    m_cFGTotalHasBeenSet = true;
}

bool CsipRiskCenterStatistics::CFGTotalHasBeenSet() const
{
    return m_cFGTotalHasBeenSet;
}

int64_t CsipRiskCenterStatistics::GetCFGHighLevel() const
{
    return m_cFGHighLevel;
}

void CsipRiskCenterStatistics::SetCFGHighLevel(const int64_t& _cFGHighLevel)
{
    m_cFGHighLevel = _cFGHighLevel;
    m_cFGHighLevelHasBeenSet = true;
}

bool CsipRiskCenterStatistics::CFGHighLevelHasBeenSet() const
{
    return m_cFGHighLevelHasBeenSet;
}

int64_t CsipRiskCenterStatistics::GetServerTotal() const
{
    return m_serverTotal;
}

void CsipRiskCenterStatistics::SetServerTotal(const int64_t& _serverTotal)
{
    m_serverTotal = _serverTotal;
    m_serverTotalHasBeenSet = true;
}

bool CsipRiskCenterStatistics::ServerTotalHasBeenSet() const
{
    return m_serverTotalHasBeenSet;
}

int64_t CsipRiskCenterStatistics::GetServerHighLevel() const
{
    return m_serverHighLevel;
}

void CsipRiskCenterStatistics::SetServerHighLevel(const int64_t& _serverHighLevel)
{
    m_serverHighLevel = _serverHighLevel;
    m_serverHighLevelHasBeenSet = true;
}

bool CsipRiskCenterStatistics::ServerHighLevelHasBeenSet() const
{
    return m_serverHighLevelHasBeenSet;
}

int64_t CsipRiskCenterStatistics::GetHostBaseLineRiskTotal() const
{
    return m_hostBaseLineRiskTotal;
}

void CsipRiskCenterStatistics::SetHostBaseLineRiskTotal(const int64_t& _hostBaseLineRiskTotal)
{
    m_hostBaseLineRiskTotal = _hostBaseLineRiskTotal;
    m_hostBaseLineRiskTotalHasBeenSet = true;
}

bool CsipRiskCenterStatistics::HostBaseLineRiskTotalHasBeenSet() const
{
    return m_hostBaseLineRiskTotalHasBeenSet;
}

int64_t CsipRiskCenterStatistics::GetHostBaseLineRiskHighLevel() const
{
    return m_hostBaseLineRiskHighLevel;
}

void CsipRiskCenterStatistics::SetHostBaseLineRiskHighLevel(const int64_t& _hostBaseLineRiskHighLevel)
{
    m_hostBaseLineRiskHighLevel = _hostBaseLineRiskHighLevel;
    m_hostBaseLineRiskHighLevelHasBeenSet = true;
}

bool CsipRiskCenterStatistics::HostBaseLineRiskHighLevelHasBeenSet() const
{
    return m_hostBaseLineRiskHighLevelHasBeenSet;
}

int64_t CsipRiskCenterStatistics::GetPodBaseLineRiskTotal() const
{
    return m_podBaseLineRiskTotal;
}

void CsipRiskCenterStatistics::SetPodBaseLineRiskTotal(const int64_t& _podBaseLineRiskTotal)
{
    m_podBaseLineRiskTotal = _podBaseLineRiskTotal;
    m_podBaseLineRiskTotalHasBeenSet = true;
}

bool CsipRiskCenterStatistics::PodBaseLineRiskTotalHasBeenSet() const
{
    return m_podBaseLineRiskTotalHasBeenSet;
}

int64_t CsipRiskCenterStatistics::GetPodBaseLineRiskHighLevel() const
{
    return m_podBaseLineRiskHighLevel;
}

void CsipRiskCenterStatistics::SetPodBaseLineRiskHighLevel(const int64_t& _podBaseLineRiskHighLevel)
{
    m_podBaseLineRiskHighLevel = _podBaseLineRiskHighLevel;
    m_podBaseLineRiskHighLevelHasBeenSet = true;
}

bool CsipRiskCenterStatistics::PodBaseLineRiskHighLevelHasBeenSet() const
{
    return m_podBaseLineRiskHighLevelHasBeenSet;
}

