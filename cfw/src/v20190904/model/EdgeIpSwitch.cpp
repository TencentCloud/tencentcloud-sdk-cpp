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

#include <tencentcloud/cfw/v20190904/model/EdgeIpSwitch.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

EdgeIpSwitch::EdgeIpSwitch() :
    m_publicIpHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_endpointIpHasBeenSet(false),
    m_switchModeHasBeenSet(false)
{
}

CoreInternalOutcome EdgeIpSwitch::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeIpSwitch.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeIpSwitch.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("EndpointIp") && !value["EndpointIp"].IsNull())
    {
        if (!value["EndpointIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeIpSwitch.EndpointIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpointIp = string(value["EndpointIp"].GetString());
        m_endpointIpHasBeenSet = true;
    }

    if (value.HasMember("SwitchMode") && !value["SwitchMode"].IsNull())
    {
        if (!value["SwitchMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeIpSwitch.SwitchMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_switchMode = value["SwitchMode"].GetInt64();
        m_switchModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EdgeIpSwitch::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpointIp.c_str(), allocator).Move(), allocator);
    }

    if (m_switchModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_switchMode, allocator);
    }

}


string EdgeIpSwitch::GetPublicIp() const
{
    return m_publicIp;
}

void EdgeIpSwitch::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool EdgeIpSwitch::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string EdgeIpSwitch::GetSubnetId() const
{
    return m_subnetId;
}

void EdgeIpSwitch::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool EdgeIpSwitch::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string EdgeIpSwitch::GetEndpointIp() const
{
    return m_endpointIp;
}

void EdgeIpSwitch::SetEndpointIp(const string& _endpointIp)
{
    m_endpointIp = _endpointIp;
    m_endpointIpHasBeenSet = true;
}

bool EdgeIpSwitch::EndpointIpHasBeenSet() const
{
    return m_endpointIpHasBeenSet;
}

int64_t EdgeIpSwitch::GetSwitchMode() const
{
    return m_switchMode;
}

void EdgeIpSwitch::SetSwitchMode(const int64_t& _switchMode)
{
    m_switchMode = _switchMode;
    m_switchModeHasBeenSet = true;
}

bool EdgeIpSwitch::SwitchModeHasBeenSet() const
{
    return m_switchModeHasBeenSet;
}

