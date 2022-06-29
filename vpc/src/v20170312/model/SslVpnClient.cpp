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

#include <tencentcloud/vpc/v20170312/model/SslVpnClient.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

SslVpnClient::SslVpnClient() :
    m_vpcIdHasBeenSet(false),
    m_sslVpnServerIdHasBeenSet(false),
    m_certStatusHasBeenSet(false),
    m_sslVpnClientIdHasBeenSet(false),
    m_certBeginTimeHasBeenSet(false),
    m_certEndTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_stateHasBeenSet(false)
{
}

CoreInternalOutcome SslVpnClient::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SslVpnClient.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SslVpnServerId") && !value["SslVpnServerId"].IsNull())
    {
        if (!value["SslVpnServerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SslVpnClient.SslVpnServerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sslVpnServerId = string(value["SslVpnServerId"].GetString());
        m_sslVpnServerIdHasBeenSet = true;
    }

    if (value.HasMember("CertStatus") && !value["CertStatus"].IsNull())
    {
        if (!value["CertStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SslVpnClient.CertStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_certStatus = value["CertStatus"].GetUint64();
        m_certStatusHasBeenSet = true;
    }

    if (value.HasMember("SslVpnClientId") && !value["SslVpnClientId"].IsNull())
    {
        if (!value["SslVpnClientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SslVpnClient.SslVpnClientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sslVpnClientId = string(value["SslVpnClientId"].GetString());
        m_sslVpnClientIdHasBeenSet = true;
    }

    if (value.HasMember("CertBeginTime") && !value["CertBeginTime"].IsNull())
    {
        if (!value["CertBeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SslVpnClient.CertBeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certBeginTime = string(value["CertBeginTime"].GetString());
        m_certBeginTimeHasBeenSet = true;
    }

    if (value.HasMember("CertEndTime") && !value["CertEndTime"].IsNull())
    {
        if (!value["CertEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SslVpnClient.CertEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certEndTime = string(value["CertEndTime"].GetString());
        m_certEndTimeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SslVpnClient.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SslVpnClient.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SslVpnClient::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_sslVpnServerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SslVpnServerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sslVpnServerId.c_str(), allocator).Move(), allocator);
    }

    if (m_certStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_certStatus, allocator);
    }

    if (m_sslVpnClientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SslVpnClientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sslVpnClientId.c_str(), allocator).Move(), allocator);
    }

    if (m_certBeginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertBeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certBeginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_certEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

}


string SslVpnClient::GetVpcId() const
{
    return m_vpcId;
}

void SslVpnClient::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool SslVpnClient::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string SslVpnClient::GetSslVpnServerId() const
{
    return m_sslVpnServerId;
}

void SslVpnClient::SetSslVpnServerId(const string& _sslVpnServerId)
{
    m_sslVpnServerId = _sslVpnServerId;
    m_sslVpnServerIdHasBeenSet = true;
}

bool SslVpnClient::SslVpnServerIdHasBeenSet() const
{
    return m_sslVpnServerIdHasBeenSet;
}

uint64_t SslVpnClient::GetCertStatus() const
{
    return m_certStatus;
}

void SslVpnClient::SetCertStatus(const uint64_t& _certStatus)
{
    m_certStatus = _certStatus;
    m_certStatusHasBeenSet = true;
}

bool SslVpnClient::CertStatusHasBeenSet() const
{
    return m_certStatusHasBeenSet;
}

string SslVpnClient::GetSslVpnClientId() const
{
    return m_sslVpnClientId;
}

void SslVpnClient::SetSslVpnClientId(const string& _sslVpnClientId)
{
    m_sslVpnClientId = _sslVpnClientId;
    m_sslVpnClientIdHasBeenSet = true;
}

bool SslVpnClient::SslVpnClientIdHasBeenSet() const
{
    return m_sslVpnClientIdHasBeenSet;
}

string SslVpnClient::GetCertBeginTime() const
{
    return m_certBeginTime;
}

void SslVpnClient::SetCertBeginTime(const string& _certBeginTime)
{
    m_certBeginTime = _certBeginTime;
    m_certBeginTimeHasBeenSet = true;
}

bool SslVpnClient::CertBeginTimeHasBeenSet() const
{
    return m_certBeginTimeHasBeenSet;
}

string SslVpnClient::GetCertEndTime() const
{
    return m_certEndTime;
}

void SslVpnClient::SetCertEndTime(const string& _certEndTime)
{
    m_certEndTime = _certEndTime;
    m_certEndTimeHasBeenSet = true;
}

bool SslVpnClient::CertEndTimeHasBeenSet() const
{
    return m_certEndTimeHasBeenSet;
}

string SslVpnClient::GetName() const
{
    return m_name;
}

void SslVpnClient::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SslVpnClient::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SslVpnClient::GetState() const
{
    return m_state;
}

void SslVpnClient::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool SslVpnClient::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

