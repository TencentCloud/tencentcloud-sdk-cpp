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

#include <tencentcloud/ctem/v20231128/model/DisplayPort.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

DisplayPort::DisplayPort() :
    m_idHasBeenSet(false),
    m_displayToolCommonHasBeenSet(false),
    m_assetHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_portHasBeenSet(false),
    m_isHighRiskHasBeenSet(false),
    m_appHasBeenSet(false),
    m_serviceHasBeenSet(false),
    m_bannerHasBeenSet(false),
    m_lastCheckTimeHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome DisplayPort::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayPort.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("DisplayToolCommon") && !value["DisplayToolCommon"].IsNull())
    {
        if (!value["DisplayToolCommon"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayPort.DisplayToolCommon` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_displayToolCommon.Deserialize(value["DisplayToolCommon"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_displayToolCommonHasBeenSet = true;
    }

    if (value.HasMember("Asset") && !value["Asset"].IsNull())
    {
        if (!value["Asset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayPort.Asset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_asset = string(value["Asset"].GetString());
        m_assetHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayPort.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayPort.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("IsHighRisk") && !value["IsHighRisk"].IsNull())
    {
        if (!value["IsHighRisk"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayPort.IsHighRisk` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isHighRisk = value["IsHighRisk"].GetBool();
        m_isHighRiskHasBeenSet = true;
    }

    if (value.HasMember("App") && !value["App"].IsNull())
    {
        if (!value["App"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayPort.App` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_app = string(value["App"].GetString());
        m_appHasBeenSet = true;
    }

    if (value.HasMember("Service") && !value["Service"].IsNull())
    {
        if (!value["Service"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayPort.Service` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_service = string(value["Service"].GetString());
        m_serviceHasBeenSet = true;
    }

    if (value.HasMember("Banner") && !value["Banner"].IsNull())
    {
        if (!value["Banner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayPort.Banner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_banner = string(value["Banner"].GetString());
        m_bannerHasBeenSet = true;
    }

    if (value.HasMember("LastCheckTime") && !value["LastCheckTime"].IsNull())
    {
        if (!value["LastCheckTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayPort.LastCheckTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastCheckTime = string(value["LastCheckTime"].GetString());
        m_lastCheckTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayPort.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DisplayPort::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_displayToolCommonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayToolCommon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_displayToolCommon.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_assetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Asset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_asset.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_isHighRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsHighRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isHighRisk, allocator);
    }

    if (m_appHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "App";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_app.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Service";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_service.c_str(), allocator).Move(), allocator);
    }

    if (m_bannerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Banner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_banner.c_str(), allocator).Move(), allocator);
    }

    if (m_lastCheckTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastCheckTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastCheckTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


int64_t DisplayPort::GetId() const
{
    return m_id;
}

void DisplayPort::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DisplayPort::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

DisplayToolCommon DisplayPort::GetDisplayToolCommon() const
{
    return m_displayToolCommon;
}

void DisplayPort::SetDisplayToolCommon(const DisplayToolCommon& _displayToolCommon)
{
    m_displayToolCommon = _displayToolCommon;
    m_displayToolCommonHasBeenSet = true;
}

bool DisplayPort::DisplayToolCommonHasBeenSet() const
{
    return m_displayToolCommonHasBeenSet;
}

string DisplayPort::GetAsset() const
{
    return m_asset;
}

void DisplayPort::SetAsset(const string& _asset)
{
    m_asset = _asset;
    m_assetHasBeenSet = true;
}

bool DisplayPort::AssetHasBeenSet() const
{
    return m_assetHasBeenSet;
}

string DisplayPort::GetIp() const
{
    return m_ip;
}

void DisplayPort::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool DisplayPort::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

int64_t DisplayPort::GetPort() const
{
    return m_port;
}

void DisplayPort::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool DisplayPort::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

bool DisplayPort::GetIsHighRisk() const
{
    return m_isHighRisk;
}

void DisplayPort::SetIsHighRisk(const bool& _isHighRisk)
{
    m_isHighRisk = _isHighRisk;
    m_isHighRiskHasBeenSet = true;
}

bool DisplayPort::IsHighRiskHasBeenSet() const
{
    return m_isHighRiskHasBeenSet;
}

string DisplayPort::GetApp() const
{
    return m_app;
}

void DisplayPort::SetApp(const string& _app)
{
    m_app = _app;
    m_appHasBeenSet = true;
}

bool DisplayPort::AppHasBeenSet() const
{
    return m_appHasBeenSet;
}

string DisplayPort::GetService() const
{
    return m_service;
}

void DisplayPort::SetService(const string& _service)
{
    m_service = _service;
    m_serviceHasBeenSet = true;
}

bool DisplayPort::ServiceHasBeenSet() const
{
    return m_serviceHasBeenSet;
}

string DisplayPort::GetBanner() const
{
    return m_banner;
}

void DisplayPort::SetBanner(const string& _banner)
{
    m_banner = _banner;
    m_bannerHasBeenSet = true;
}

bool DisplayPort::BannerHasBeenSet() const
{
    return m_bannerHasBeenSet;
}

string DisplayPort::GetLastCheckTime() const
{
    return m_lastCheckTime;
}

void DisplayPort::SetLastCheckTime(const string& _lastCheckTime)
{
    m_lastCheckTime = _lastCheckTime;
    m_lastCheckTimeHasBeenSet = true;
}

bool DisplayPort::LastCheckTimeHasBeenSet() const
{
    return m_lastCheckTimeHasBeenSet;
}

string DisplayPort::GetStatus() const
{
    return m_status;
}

void DisplayPort::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DisplayPort::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

