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

#include <tencentcloud/cfw/v20190904/model/NatFwInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

NatFwInstance::NatFwInstance() :
    m_natinsIdHasBeenSet(false),
    m_natinsNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_fwModeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_natIpHasBeenSet(false)
{
}

CoreInternalOutcome NatFwInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NatinsId") && !value["NatinsId"].IsNull())
    {
        if (!value["NatinsId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatFwInstance.NatinsId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_natinsId = string(value["NatinsId"].GetString());
        m_natinsIdHasBeenSet = true;
    }

    if (value.HasMember("NatinsName") && !value["NatinsName"].IsNull())
    {
        if (!value["NatinsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatFwInstance.NatinsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_natinsName = string(value["NatinsName"].GetString());
        m_natinsNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatFwInstance.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("FwMode") && !value["FwMode"].IsNull())
    {
        if (!value["FwMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatFwInstance.FwMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fwMode = value["FwMode"].GetInt64();
        m_fwModeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatFwInstance.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("NatIp") && !value["NatIp"].IsNull())
    {
        if (!value["NatIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatFwInstance.NatIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_natIp = string(value["NatIp"].GetString());
        m_natIpHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NatFwInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_natinsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatinsId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_natinsId.c_str(), allocator).Move(), allocator);
    }

    if (m_natinsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatinsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_natinsName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_fwModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fwMode, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_natIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_natIp.c_str(), allocator).Move(), allocator);
    }

}


string NatFwInstance::GetNatinsId() const
{
    return m_natinsId;
}

void NatFwInstance::SetNatinsId(const string& _natinsId)
{
    m_natinsId = _natinsId;
    m_natinsIdHasBeenSet = true;
}

bool NatFwInstance::NatinsIdHasBeenSet() const
{
    return m_natinsIdHasBeenSet;
}

string NatFwInstance::GetNatinsName() const
{
    return m_natinsName;
}

void NatFwInstance::SetNatinsName(const string& _natinsName)
{
    m_natinsName = _natinsName;
    m_natinsNameHasBeenSet = true;
}

bool NatFwInstance::NatinsNameHasBeenSet() const
{
    return m_natinsNameHasBeenSet;
}

string NatFwInstance::GetRegion() const
{
    return m_region;
}

void NatFwInstance::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool NatFwInstance::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t NatFwInstance::GetFwMode() const
{
    return m_fwMode;
}

void NatFwInstance::SetFwMode(const int64_t& _fwMode)
{
    m_fwMode = _fwMode;
    m_fwModeHasBeenSet = true;
}

bool NatFwInstance::FwModeHasBeenSet() const
{
    return m_fwModeHasBeenSet;
}

int64_t NatFwInstance::GetStatus() const
{
    return m_status;
}

void NatFwInstance::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool NatFwInstance::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string NatFwInstance::GetNatIp() const
{
    return m_natIp;
}

void NatFwInstance::SetNatIp(const string& _natIp)
{
    m_natIp = _natIp;
    m_natIpHasBeenSet = true;
}

bool NatFwInstance::NatIpHasBeenSet() const
{
    return m_natIpHasBeenSet;
}

