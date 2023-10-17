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

#include <tencentcloud/tse/v20201207/model/EnvAddressInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

EnvAddressInfo::EnvAddressInfo() :
    m_envNameHasBeenSet(false),
    m_enableConfigInternetHasBeenSet(false),
    m_configInternetServiceIpHasBeenSet(false),
    m_configIntranetAddressHasBeenSet(false),
    m_enableConfigIntranetHasBeenSet(false),
    m_internetBandWidthHasBeenSet(false),
    m_cLBMultiRegionHasBeenSet(false)
{
}

CoreInternalOutcome EnvAddressInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnvName") && !value["EnvName"].IsNull())
    {
        if (!value["EnvName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvAddressInfo.EnvName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envName = string(value["EnvName"].GetString());
        m_envNameHasBeenSet = true;
    }

    if (value.HasMember("EnableConfigInternet") && !value["EnableConfigInternet"].IsNull())
    {
        if (!value["EnableConfigInternet"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnvAddressInfo.EnableConfigInternet` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableConfigInternet = value["EnableConfigInternet"].GetBool();
        m_enableConfigInternetHasBeenSet = true;
    }

    if (value.HasMember("ConfigInternetServiceIp") && !value["ConfigInternetServiceIp"].IsNull())
    {
        if (!value["ConfigInternetServiceIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvAddressInfo.ConfigInternetServiceIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configInternetServiceIp = string(value["ConfigInternetServiceIp"].GetString());
        m_configInternetServiceIpHasBeenSet = true;
    }

    if (value.HasMember("ConfigIntranetAddress") && !value["ConfigIntranetAddress"].IsNull())
    {
        if (!value["ConfigIntranetAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvAddressInfo.ConfigIntranetAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configIntranetAddress = string(value["ConfigIntranetAddress"].GetString());
        m_configIntranetAddressHasBeenSet = true;
    }

    if (value.HasMember("EnableConfigIntranet") && !value["EnableConfigIntranet"].IsNull())
    {
        if (!value["EnableConfigIntranet"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnvAddressInfo.EnableConfigIntranet` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableConfigIntranet = value["EnableConfigIntranet"].GetBool();
        m_enableConfigIntranetHasBeenSet = true;
    }

    if (value.HasMember("InternetBandWidth") && !value["InternetBandWidth"].IsNull())
    {
        if (!value["InternetBandWidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EnvAddressInfo.InternetBandWidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_internetBandWidth = value["InternetBandWidth"].GetInt64();
        m_internetBandWidthHasBeenSet = true;
    }

    if (value.HasMember("CLBMultiRegion") && !value["CLBMultiRegion"].IsNull())
    {
        if (!value["CLBMultiRegion"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EnvAddressInfo.CLBMultiRegion` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cLBMultiRegion.Deserialize(value["CLBMultiRegion"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cLBMultiRegionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EnvAddressInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_envNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envName.c_str(), allocator).Move(), allocator);
    }

    if (m_enableConfigInternetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableConfigInternet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableConfigInternet, allocator);
    }

    if (m_configInternetServiceIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigInternetServiceIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configInternetServiceIp.c_str(), allocator).Move(), allocator);
    }

    if (m_configIntranetAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigIntranetAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configIntranetAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_enableConfigIntranetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableConfigIntranet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableConfigIntranet, allocator);
    }

    if (m_internetBandWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetBandWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_internetBandWidth, allocator);
    }

    if (m_cLBMultiRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CLBMultiRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cLBMultiRegion.ToJsonObject(value[key.c_str()], allocator);
    }

}


string EnvAddressInfo::GetEnvName() const
{
    return m_envName;
}

void EnvAddressInfo::SetEnvName(const string& _envName)
{
    m_envName = _envName;
    m_envNameHasBeenSet = true;
}

bool EnvAddressInfo::EnvNameHasBeenSet() const
{
    return m_envNameHasBeenSet;
}

bool EnvAddressInfo::GetEnableConfigInternet() const
{
    return m_enableConfigInternet;
}

void EnvAddressInfo::SetEnableConfigInternet(const bool& _enableConfigInternet)
{
    m_enableConfigInternet = _enableConfigInternet;
    m_enableConfigInternetHasBeenSet = true;
}

bool EnvAddressInfo::EnableConfigInternetHasBeenSet() const
{
    return m_enableConfigInternetHasBeenSet;
}

string EnvAddressInfo::GetConfigInternetServiceIp() const
{
    return m_configInternetServiceIp;
}

void EnvAddressInfo::SetConfigInternetServiceIp(const string& _configInternetServiceIp)
{
    m_configInternetServiceIp = _configInternetServiceIp;
    m_configInternetServiceIpHasBeenSet = true;
}

bool EnvAddressInfo::ConfigInternetServiceIpHasBeenSet() const
{
    return m_configInternetServiceIpHasBeenSet;
}

string EnvAddressInfo::GetConfigIntranetAddress() const
{
    return m_configIntranetAddress;
}

void EnvAddressInfo::SetConfigIntranetAddress(const string& _configIntranetAddress)
{
    m_configIntranetAddress = _configIntranetAddress;
    m_configIntranetAddressHasBeenSet = true;
}

bool EnvAddressInfo::ConfigIntranetAddressHasBeenSet() const
{
    return m_configIntranetAddressHasBeenSet;
}

bool EnvAddressInfo::GetEnableConfigIntranet() const
{
    return m_enableConfigIntranet;
}

void EnvAddressInfo::SetEnableConfigIntranet(const bool& _enableConfigIntranet)
{
    m_enableConfigIntranet = _enableConfigIntranet;
    m_enableConfigIntranetHasBeenSet = true;
}

bool EnvAddressInfo::EnableConfigIntranetHasBeenSet() const
{
    return m_enableConfigIntranetHasBeenSet;
}

int64_t EnvAddressInfo::GetInternetBandWidth() const
{
    return m_internetBandWidth;
}

void EnvAddressInfo::SetInternetBandWidth(const int64_t& _internetBandWidth)
{
    m_internetBandWidth = _internetBandWidth;
    m_internetBandWidthHasBeenSet = true;
}

bool EnvAddressInfo::InternetBandWidthHasBeenSet() const
{
    return m_internetBandWidthHasBeenSet;
}

CLBMultiRegion EnvAddressInfo::GetCLBMultiRegion() const
{
    return m_cLBMultiRegion;
}

void EnvAddressInfo::SetCLBMultiRegion(const CLBMultiRegion& _cLBMultiRegion)
{
    m_cLBMultiRegion = _cLBMultiRegion;
    m_cLBMultiRegionHasBeenSet = true;
}

bool EnvAddressInfo::CLBMultiRegionHasBeenSet() const
{
    return m_cLBMultiRegionHasBeenSet;
}

