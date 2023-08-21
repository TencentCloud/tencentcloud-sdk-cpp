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

#include <tencentcloud/tse/v20201207/model/InternetConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

InternetConfig::InternetConfig() :
    m_internetAddressVersionHasBeenSet(false),
    m_internetPayModeHasBeenSet(false),
    m_internetMaxBandwidthOutHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_slaTypeHasBeenSet(false),
    m_multiZoneFlagHasBeenSet(false),
    m_masterZoneIdHasBeenSet(false),
    m_slaveZoneIdHasBeenSet(false)
{
}

CoreInternalOutcome InternetConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InternetAddressVersion") && !value["InternetAddressVersion"].IsNull())
    {
        if (!value["InternetAddressVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternetConfig.InternetAddressVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internetAddressVersion = string(value["InternetAddressVersion"].GetString());
        m_internetAddressVersionHasBeenSet = true;
    }

    if (value.HasMember("InternetPayMode") && !value["InternetPayMode"].IsNull())
    {
        if (!value["InternetPayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternetConfig.InternetPayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internetPayMode = string(value["InternetPayMode"].GetString());
        m_internetPayModeHasBeenSet = true;
    }

    if (value.HasMember("InternetMaxBandwidthOut") && !value["InternetMaxBandwidthOut"].IsNull())
    {
        if (!value["InternetMaxBandwidthOut"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InternetConfig.InternetMaxBandwidthOut` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_internetMaxBandwidthOut = value["InternetMaxBandwidthOut"].GetUint64();
        m_internetMaxBandwidthOutHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternetConfig.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("SlaType") && !value["SlaType"].IsNull())
    {
        if (!value["SlaType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternetConfig.SlaType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_slaType = string(value["SlaType"].GetString());
        m_slaTypeHasBeenSet = true;
    }

    if (value.HasMember("MultiZoneFlag") && !value["MultiZoneFlag"].IsNull())
    {
        if (!value["MultiZoneFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InternetConfig.MultiZoneFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_multiZoneFlag = value["MultiZoneFlag"].GetBool();
        m_multiZoneFlagHasBeenSet = true;
    }

    if (value.HasMember("MasterZoneId") && !value["MasterZoneId"].IsNull())
    {
        if (!value["MasterZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternetConfig.MasterZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_masterZoneId = string(value["MasterZoneId"].GetString());
        m_masterZoneIdHasBeenSet = true;
    }

    if (value.HasMember("SlaveZoneId") && !value["SlaveZoneId"].IsNull())
    {
        if (!value["SlaveZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternetConfig.SlaveZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_slaveZoneId = string(value["SlaveZoneId"].GetString());
        m_slaveZoneIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InternetConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_internetAddressVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetAddressVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internetAddressVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_internetPayModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetPayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internetPayMode.c_str(), allocator).Move(), allocator);
    }

    if (m_internetMaxBandwidthOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetMaxBandwidthOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_internetMaxBandwidthOut, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_slaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_slaType.c_str(), allocator).Move(), allocator);
    }

    if (m_multiZoneFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiZoneFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_multiZoneFlag, allocator);
    }

    if (m_masterZoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_masterZoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_slaveZoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaveZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_slaveZoneId.c_str(), allocator).Move(), allocator);
    }

}


string InternetConfig::GetInternetAddressVersion() const
{
    return m_internetAddressVersion;
}

void InternetConfig::SetInternetAddressVersion(const string& _internetAddressVersion)
{
    m_internetAddressVersion = _internetAddressVersion;
    m_internetAddressVersionHasBeenSet = true;
}

bool InternetConfig::InternetAddressVersionHasBeenSet() const
{
    return m_internetAddressVersionHasBeenSet;
}

string InternetConfig::GetInternetPayMode() const
{
    return m_internetPayMode;
}

void InternetConfig::SetInternetPayMode(const string& _internetPayMode)
{
    m_internetPayMode = _internetPayMode;
    m_internetPayModeHasBeenSet = true;
}

bool InternetConfig::InternetPayModeHasBeenSet() const
{
    return m_internetPayModeHasBeenSet;
}

uint64_t InternetConfig::GetInternetMaxBandwidthOut() const
{
    return m_internetMaxBandwidthOut;
}

void InternetConfig::SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut)
{
    m_internetMaxBandwidthOut = _internetMaxBandwidthOut;
    m_internetMaxBandwidthOutHasBeenSet = true;
}

bool InternetConfig::InternetMaxBandwidthOutHasBeenSet() const
{
    return m_internetMaxBandwidthOutHasBeenSet;
}

string InternetConfig::GetDescription() const
{
    return m_description;
}

void InternetConfig::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool InternetConfig::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string InternetConfig::GetSlaType() const
{
    return m_slaType;
}

void InternetConfig::SetSlaType(const string& _slaType)
{
    m_slaType = _slaType;
    m_slaTypeHasBeenSet = true;
}

bool InternetConfig::SlaTypeHasBeenSet() const
{
    return m_slaTypeHasBeenSet;
}

bool InternetConfig::GetMultiZoneFlag() const
{
    return m_multiZoneFlag;
}

void InternetConfig::SetMultiZoneFlag(const bool& _multiZoneFlag)
{
    m_multiZoneFlag = _multiZoneFlag;
    m_multiZoneFlagHasBeenSet = true;
}

bool InternetConfig::MultiZoneFlagHasBeenSet() const
{
    return m_multiZoneFlagHasBeenSet;
}

string InternetConfig::GetMasterZoneId() const
{
    return m_masterZoneId;
}

void InternetConfig::SetMasterZoneId(const string& _masterZoneId)
{
    m_masterZoneId = _masterZoneId;
    m_masterZoneIdHasBeenSet = true;
}

bool InternetConfig::MasterZoneIdHasBeenSet() const
{
    return m_masterZoneIdHasBeenSet;
}

string InternetConfig::GetSlaveZoneId() const
{
    return m_slaveZoneId;
}

void InternetConfig::SetSlaveZoneId(const string& _slaveZoneId)
{
    m_slaveZoneId = _slaveZoneId;
    m_slaveZoneIdHasBeenSet = true;
}

bool InternetConfig::SlaveZoneIdHasBeenSet() const
{
    return m_slaveZoneIdHasBeenSet;
}

