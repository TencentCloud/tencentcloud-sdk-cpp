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

#include <tencentcloud/tcb/v20180608/model/WxGatewayCustomConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

WxGatewayCustomConfig::WxGatewayCustomConfig() :
    m_isOpenXRealIpHasBeenSet(false),
    m_banConfigHasBeenSet(false),
    m_sourceIpTypeHasBeenSet(false),
    m_logConfigHasBeenSet(false),
    m_isAcceptHttpOneHasBeenSet(false)
{
}

CoreInternalOutcome WxGatewayCustomConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsOpenXRealIp") && !value["IsOpenXRealIp"].IsNull())
    {
        if (!value["IsOpenXRealIp"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `WxGatewayCustomConfig.IsOpenXRealIp` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isOpenXRealIp = value["IsOpenXRealIp"].GetBool();
        m_isOpenXRealIpHasBeenSet = true;
    }

    if (value.HasMember("BanConfig") && !value["BanConfig"].IsNull())
    {
        if (!value["BanConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WxGatewayCustomConfig.BanConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_banConfig.Deserialize(value["BanConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_banConfigHasBeenSet = true;
    }

    if (value.HasMember("SourceIpType") && !value["SourceIpType"].IsNull())
    {
        if (!value["SourceIpType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WxGatewayCustomConfig.SourceIpType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceIpType = string(value["SourceIpType"].GetString());
        m_sourceIpTypeHasBeenSet = true;
    }

    if (value.HasMember("LogConfig") && !value["LogConfig"].IsNull())
    {
        if (!value["LogConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WxGatewayCustomConfig.LogConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_logConfig.Deserialize(value["LogConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_logConfigHasBeenSet = true;
    }

    if (value.HasMember("IsAcceptHttpOne") && !value["IsAcceptHttpOne"].IsNull())
    {
        if (!value["IsAcceptHttpOne"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `WxGatewayCustomConfig.IsAcceptHttpOne` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAcceptHttpOne = value["IsAcceptHttpOne"].GetBool();
        m_isAcceptHttpOneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WxGatewayCustomConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isOpenXRealIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOpenXRealIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isOpenXRealIp, allocator);
    }

    if (m_banConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BanConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_banConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sourceIpTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIpType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceIpType.c_str(), allocator).Move(), allocator);
    }

    if (m_logConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_logConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isAcceptHttpOneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAcceptHttpOne";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAcceptHttpOne, allocator);
    }

}


bool WxGatewayCustomConfig::GetIsOpenXRealIp() const
{
    return m_isOpenXRealIp;
}

void WxGatewayCustomConfig::SetIsOpenXRealIp(const bool& _isOpenXRealIp)
{
    m_isOpenXRealIp = _isOpenXRealIp;
    m_isOpenXRealIpHasBeenSet = true;
}

bool WxGatewayCustomConfig::IsOpenXRealIpHasBeenSet() const
{
    return m_isOpenXRealIpHasBeenSet;
}

BanConfig WxGatewayCustomConfig::GetBanConfig() const
{
    return m_banConfig;
}

void WxGatewayCustomConfig::SetBanConfig(const BanConfig& _banConfig)
{
    m_banConfig = _banConfig;
    m_banConfigHasBeenSet = true;
}

bool WxGatewayCustomConfig::BanConfigHasBeenSet() const
{
    return m_banConfigHasBeenSet;
}

string WxGatewayCustomConfig::GetSourceIpType() const
{
    return m_sourceIpType;
}

void WxGatewayCustomConfig::SetSourceIpType(const string& _sourceIpType)
{
    m_sourceIpType = _sourceIpType;
    m_sourceIpTypeHasBeenSet = true;
}

bool WxGatewayCustomConfig::SourceIpTypeHasBeenSet() const
{
    return m_sourceIpTypeHasBeenSet;
}

CustomLogConfig WxGatewayCustomConfig::GetLogConfig() const
{
    return m_logConfig;
}

void WxGatewayCustomConfig::SetLogConfig(const CustomLogConfig& _logConfig)
{
    m_logConfig = _logConfig;
    m_logConfigHasBeenSet = true;
}

bool WxGatewayCustomConfig::LogConfigHasBeenSet() const
{
    return m_logConfigHasBeenSet;
}

bool WxGatewayCustomConfig::GetIsAcceptHttpOne() const
{
    return m_isAcceptHttpOne;
}

void WxGatewayCustomConfig::SetIsAcceptHttpOne(const bool& _isAcceptHttpOne)
{
    m_isAcceptHttpOne = _isAcceptHttpOne;
    m_isAcceptHttpOneHasBeenSet = true;
}

bool WxGatewayCustomConfig::IsAcceptHttpOneHasBeenSet() const
{
    return m_isAcceptHttpOneHasBeenSet;
}

