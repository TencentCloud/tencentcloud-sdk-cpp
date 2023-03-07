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

#include <tencentcloud/cwp/v20180228/model/BaselineHost.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

BaselineHost::BaselineHost() :
    m_hostIdHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_hostTagHasBeenSet(false),
    m_hostIpHasBeenSet(false),
    m_wanIpHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false)
{
}

CoreInternalOutcome BaselineHost::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HostId") && !value["HostId"].IsNull())
    {
        if (!value["HostId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineHost.HostId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostId = string(value["HostId"].GetString());
        m_hostIdHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineHost.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("HostTag") && !value["HostTag"].IsNull())
    {
        if (!value["HostTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineHost.HostTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostTag = string(value["HostTag"].GetString());
        m_hostTagHasBeenSet = true;
    }

    if (value.HasMember("HostIp") && !value["HostIp"].IsNull())
    {
        if (!value["HostIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineHost.HostIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIp = string(value["HostIp"].GetString());
        m_hostIpHasBeenSet = true;
    }

    if (value.HasMember("WanIp") && !value["WanIp"].IsNull())
    {
        if (!value["WanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineHost.WanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanIp = string(value["WanIp"].GetString());
        m_wanIpHasBeenSet = true;
    }

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineHost.MachineExtraInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_machineExtraInfo.Deserialize(value["MachineExtraInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_machineExtraInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineHost::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostId.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostTag.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIp.c_str(), allocator).Move(), allocator);
    }

    if (m_wanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_machineExtraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_machineExtraInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string BaselineHost::GetHostId() const
{
    return m_hostId;
}

void BaselineHost::SetHostId(const string& _hostId)
{
    m_hostId = _hostId;
    m_hostIdHasBeenSet = true;
}

bool BaselineHost::HostIdHasBeenSet() const
{
    return m_hostIdHasBeenSet;
}

string BaselineHost::GetHostName() const
{
    return m_hostName;
}

void BaselineHost::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool BaselineHost::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string BaselineHost::GetHostTag() const
{
    return m_hostTag;
}

void BaselineHost::SetHostTag(const string& _hostTag)
{
    m_hostTag = _hostTag;
    m_hostTagHasBeenSet = true;
}

bool BaselineHost::HostTagHasBeenSet() const
{
    return m_hostTagHasBeenSet;
}

string BaselineHost::GetHostIp() const
{
    return m_hostIp;
}

void BaselineHost::SetHostIp(const string& _hostIp)
{
    m_hostIp = _hostIp;
    m_hostIpHasBeenSet = true;
}

bool BaselineHost::HostIpHasBeenSet() const
{
    return m_hostIpHasBeenSet;
}

string BaselineHost::GetWanIp() const
{
    return m_wanIp;
}

void BaselineHost::SetWanIp(const string& _wanIp)
{
    m_wanIp = _wanIp;
    m_wanIpHasBeenSet = true;
}

bool BaselineHost::WanIpHasBeenSet() const
{
    return m_wanIpHasBeenSet;
}

MachineExtraInfo BaselineHost::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void BaselineHost::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool BaselineHost::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}

