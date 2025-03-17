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

#include <tencentcloud/tdmq/v20200217/model/RabbitMQClusterAccessInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RabbitMQClusterAccessInfo::RabbitMQClusterAccessInfo() :
    m_publicAccessEndpointHasBeenSet(false),
    m_webConsoleEndpointHasBeenSet(false),
    m_webConsoleUsernameHasBeenSet(false),
    m_webConsolePasswordHasBeenSet(false),
    m_publicAccessEndpointStatusHasBeenSet(false),
    m_publicControlConsoleSwitchStatusHasBeenSet(false),
    m_vpcControlConsoleSwitchStatusHasBeenSet(false),
    m_vpcWebConsoleEndpointHasBeenSet(false),
    m_publicWebConsoleSwitchStatusHasBeenSet(false),
    m_vpcWebConsoleSwitchStatusHasBeenSet(false),
    m_publicDataStreamStatusHasBeenSet(false),
    m_prometheusEndpointInfoHasBeenSet(false),
    m_webConsoleDomainEndpointHasBeenSet(false),
    m_controlPlaneEndpointInfoHasBeenSet(false)
{
}

CoreInternalOutcome RabbitMQClusterAccessInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PublicAccessEndpoint") && !value["PublicAccessEndpoint"].IsNull())
    {
        if (!value["PublicAccessEndpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterAccessInfo.PublicAccessEndpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicAccessEndpoint = string(value["PublicAccessEndpoint"].GetString());
        m_publicAccessEndpointHasBeenSet = true;
    }

    if (value.HasMember("WebConsoleEndpoint") && !value["WebConsoleEndpoint"].IsNull())
    {
        if (!value["WebConsoleEndpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterAccessInfo.WebConsoleEndpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webConsoleEndpoint = string(value["WebConsoleEndpoint"].GetString());
        m_webConsoleEndpointHasBeenSet = true;
    }

    if (value.HasMember("WebConsoleUsername") && !value["WebConsoleUsername"].IsNull())
    {
        if (!value["WebConsoleUsername"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterAccessInfo.WebConsoleUsername` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webConsoleUsername = string(value["WebConsoleUsername"].GetString());
        m_webConsoleUsernameHasBeenSet = true;
    }

    if (value.HasMember("WebConsolePassword") && !value["WebConsolePassword"].IsNull())
    {
        if (!value["WebConsolePassword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterAccessInfo.WebConsolePassword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webConsolePassword = string(value["WebConsolePassword"].GetString());
        m_webConsolePasswordHasBeenSet = true;
    }

    if (value.HasMember("PublicAccessEndpointStatus") && !value["PublicAccessEndpointStatus"].IsNull())
    {
        if (!value["PublicAccessEndpointStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterAccessInfo.PublicAccessEndpointStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_publicAccessEndpointStatus = value["PublicAccessEndpointStatus"].GetBool();
        m_publicAccessEndpointStatusHasBeenSet = true;
    }

    if (value.HasMember("PublicControlConsoleSwitchStatus") && !value["PublicControlConsoleSwitchStatus"].IsNull())
    {
        if (!value["PublicControlConsoleSwitchStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterAccessInfo.PublicControlConsoleSwitchStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_publicControlConsoleSwitchStatus = value["PublicControlConsoleSwitchStatus"].GetBool();
        m_publicControlConsoleSwitchStatusHasBeenSet = true;
    }

    if (value.HasMember("VpcControlConsoleSwitchStatus") && !value["VpcControlConsoleSwitchStatus"].IsNull())
    {
        if (!value["VpcControlConsoleSwitchStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterAccessInfo.VpcControlConsoleSwitchStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_vpcControlConsoleSwitchStatus = value["VpcControlConsoleSwitchStatus"].GetBool();
        m_vpcControlConsoleSwitchStatusHasBeenSet = true;
    }

    if (value.HasMember("VpcWebConsoleEndpoint") && !value["VpcWebConsoleEndpoint"].IsNull())
    {
        if (!value["VpcWebConsoleEndpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterAccessInfo.VpcWebConsoleEndpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcWebConsoleEndpoint = string(value["VpcWebConsoleEndpoint"].GetString());
        m_vpcWebConsoleEndpointHasBeenSet = true;
    }

    if (value.HasMember("PublicWebConsoleSwitchStatus") && !value["PublicWebConsoleSwitchStatus"].IsNull())
    {
        if (!value["PublicWebConsoleSwitchStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterAccessInfo.PublicWebConsoleSwitchStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicWebConsoleSwitchStatus = string(value["PublicWebConsoleSwitchStatus"].GetString());
        m_publicWebConsoleSwitchStatusHasBeenSet = true;
    }

    if (value.HasMember("VpcWebConsoleSwitchStatus") && !value["VpcWebConsoleSwitchStatus"].IsNull())
    {
        if (!value["VpcWebConsoleSwitchStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterAccessInfo.VpcWebConsoleSwitchStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcWebConsoleSwitchStatus = string(value["VpcWebConsoleSwitchStatus"].GetString());
        m_vpcWebConsoleSwitchStatusHasBeenSet = true;
    }

    if (value.HasMember("PublicDataStreamStatus") && !value["PublicDataStreamStatus"].IsNull())
    {
        if (!value["PublicDataStreamStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterAccessInfo.PublicDataStreamStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicDataStreamStatus = string(value["PublicDataStreamStatus"].GetString());
        m_publicDataStreamStatusHasBeenSet = true;
    }

    if (value.HasMember("PrometheusEndpointInfo") && !value["PrometheusEndpointInfo"].IsNull())
    {
        if (!value["PrometheusEndpointInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterAccessInfo.PrometheusEndpointInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_prometheusEndpointInfo.Deserialize(value["PrometheusEndpointInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_prometheusEndpointInfoHasBeenSet = true;
    }

    if (value.HasMember("WebConsoleDomainEndpoint") && !value["WebConsoleDomainEndpoint"].IsNull())
    {
        if (!value["WebConsoleDomainEndpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterAccessInfo.WebConsoleDomainEndpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webConsoleDomainEndpoint = string(value["WebConsoleDomainEndpoint"].GetString());
        m_webConsoleDomainEndpointHasBeenSet = true;
    }

    if (value.HasMember("ControlPlaneEndpointInfo") && !value["ControlPlaneEndpointInfo"].IsNull())
    {
        if (!value["ControlPlaneEndpointInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterAccessInfo.ControlPlaneEndpointInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_controlPlaneEndpointInfo.Deserialize(value["ControlPlaneEndpointInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_controlPlaneEndpointInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RabbitMQClusterAccessInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_publicAccessEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicAccessEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicAccessEndpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_webConsoleEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebConsoleEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webConsoleEndpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_webConsoleUsernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebConsoleUsername";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webConsoleUsername.c_str(), allocator).Move(), allocator);
    }

    if (m_webConsolePasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebConsolePassword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webConsolePassword.c_str(), allocator).Move(), allocator);
    }

    if (m_publicAccessEndpointStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicAccessEndpointStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publicAccessEndpointStatus, allocator);
    }

    if (m_publicControlConsoleSwitchStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicControlConsoleSwitchStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publicControlConsoleSwitchStatus, allocator);
    }

    if (m_vpcControlConsoleSwitchStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcControlConsoleSwitchStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vpcControlConsoleSwitchStatus, allocator);
    }

    if (m_vpcWebConsoleEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcWebConsoleEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcWebConsoleEndpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_publicWebConsoleSwitchStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicWebConsoleSwitchStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicWebConsoleSwitchStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcWebConsoleSwitchStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcWebConsoleSwitchStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcWebConsoleSwitchStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_publicDataStreamStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicDataStreamStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicDataStreamStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_prometheusEndpointInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrometheusEndpointInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_prometheusEndpointInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_webConsoleDomainEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebConsoleDomainEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webConsoleDomainEndpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_controlPlaneEndpointInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ControlPlaneEndpointInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_controlPlaneEndpointInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string RabbitMQClusterAccessInfo::GetPublicAccessEndpoint() const
{
    return m_publicAccessEndpoint;
}

void RabbitMQClusterAccessInfo::SetPublicAccessEndpoint(const string& _publicAccessEndpoint)
{
    m_publicAccessEndpoint = _publicAccessEndpoint;
    m_publicAccessEndpointHasBeenSet = true;
}

bool RabbitMQClusterAccessInfo::PublicAccessEndpointHasBeenSet() const
{
    return m_publicAccessEndpointHasBeenSet;
}

string RabbitMQClusterAccessInfo::GetWebConsoleEndpoint() const
{
    return m_webConsoleEndpoint;
}

void RabbitMQClusterAccessInfo::SetWebConsoleEndpoint(const string& _webConsoleEndpoint)
{
    m_webConsoleEndpoint = _webConsoleEndpoint;
    m_webConsoleEndpointHasBeenSet = true;
}

bool RabbitMQClusterAccessInfo::WebConsoleEndpointHasBeenSet() const
{
    return m_webConsoleEndpointHasBeenSet;
}

string RabbitMQClusterAccessInfo::GetWebConsoleUsername() const
{
    return m_webConsoleUsername;
}

void RabbitMQClusterAccessInfo::SetWebConsoleUsername(const string& _webConsoleUsername)
{
    m_webConsoleUsername = _webConsoleUsername;
    m_webConsoleUsernameHasBeenSet = true;
}

bool RabbitMQClusterAccessInfo::WebConsoleUsernameHasBeenSet() const
{
    return m_webConsoleUsernameHasBeenSet;
}

string RabbitMQClusterAccessInfo::GetWebConsolePassword() const
{
    return m_webConsolePassword;
}

void RabbitMQClusterAccessInfo::SetWebConsolePassword(const string& _webConsolePassword)
{
    m_webConsolePassword = _webConsolePassword;
    m_webConsolePasswordHasBeenSet = true;
}

bool RabbitMQClusterAccessInfo::WebConsolePasswordHasBeenSet() const
{
    return m_webConsolePasswordHasBeenSet;
}

bool RabbitMQClusterAccessInfo::GetPublicAccessEndpointStatus() const
{
    return m_publicAccessEndpointStatus;
}

void RabbitMQClusterAccessInfo::SetPublicAccessEndpointStatus(const bool& _publicAccessEndpointStatus)
{
    m_publicAccessEndpointStatus = _publicAccessEndpointStatus;
    m_publicAccessEndpointStatusHasBeenSet = true;
}

bool RabbitMQClusterAccessInfo::PublicAccessEndpointStatusHasBeenSet() const
{
    return m_publicAccessEndpointStatusHasBeenSet;
}

bool RabbitMQClusterAccessInfo::GetPublicControlConsoleSwitchStatus() const
{
    return m_publicControlConsoleSwitchStatus;
}

void RabbitMQClusterAccessInfo::SetPublicControlConsoleSwitchStatus(const bool& _publicControlConsoleSwitchStatus)
{
    m_publicControlConsoleSwitchStatus = _publicControlConsoleSwitchStatus;
    m_publicControlConsoleSwitchStatusHasBeenSet = true;
}

bool RabbitMQClusterAccessInfo::PublicControlConsoleSwitchStatusHasBeenSet() const
{
    return m_publicControlConsoleSwitchStatusHasBeenSet;
}

bool RabbitMQClusterAccessInfo::GetVpcControlConsoleSwitchStatus() const
{
    return m_vpcControlConsoleSwitchStatus;
}

void RabbitMQClusterAccessInfo::SetVpcControlConsoleSwitchStatus(const bool& _vpcControlConsoleSwitchStatus)
{
    m_vpcControlConsoleSwitchStatus = _vpcControlConsoleSwitchStatus;
    m_vpcControlConsoleSwitchStatusHasBeenSet = true;
}

bool RabbitMQClusterAccessInfo::VpcControlConsoleSwitchStatusHasBeenSet() const
{
    return m_vpcControlConsoleSwitchStatusHasBeenSet;
}

string RabbitMQClusterAccessInfo::GetVpcWebConsoleEndpoint() const
{
    return m_vpcWebConsoleEndpoint;
}

void RabbitMQClusterAccessInfo::SetVpcWebConsoleEndpoint(const string& _vpcWebConsoleEndpoint)
{
    m_vpcWebConsoleEndpoint = _vpcWebConsoleEndpoint;
    m_vpcWebConsoleEndpointHasBeenSet = true;
}

bool RabbitMQClusterAccessInfo::VpcWebConsoleEndpointHasBeenSet() const
{
    return m_vpcWebConsoleEndpointHasBeenSet;
}

string RabbitMQClusterAccessInfo::GetPublicWebConsoleSwitchStatus() const
{
    return m_publicWebConsoleSwitchStatus;
}

void RabbitMQClusterAccessInfo::SetPublicWebConsoleSwitchStatus(const string& _publicWebConsoleSwitchStatus)
{
    m_publicWebConsoleSwitchStatus = _publicWebConsoleSwitchStatus;
    m_publicWebConsoleSwitchStatusHasBeenSet = true;
}

bool RabbitMQClusterAccessInfo::PublicWebConsoleSwitchStatusHasBeenSet() const
{
    return m_publicWebConsoleSwitchStatusHasBeenSet;
}

string RabbitMQClusterAccessInfo::GetVpcWebConsoleSwitchStatus() const
{
    return m_vpcWebConsoleSwitchStatus;
}

void RabbitMQClusterAccessInfo::SetVpcWebConsoleSwitchStatus(const string& _vpcWebConsoleSwitchStatus)
{
    m_vpcWebConsoleSwitchStatus = _vpcWebConsoleSwitchStatus;
    m_vpcWebConsoleSwitchStatusHasBeenSet = true;
}

bool RabbitMQClusterAccessInfo::VpcWebConsoleSwitchStatusHasBeenSet() const
{
    return m_vpcWebConsoleSwitchStatusHasBeenSet;
}

string RabbitMQClusterAccessInfo::GetPublicDataStreamStatus() const
{
    return m_publicDataStreamStatus;
}

void RabbitMQClusterAccessInfo::SetPublicDataStreamStatus(const string& _publicDataStreamStatus)
{
    m_publicDataStreamStatus = _publicDataStreamStatus;
    m_publicDataStreamStatusHasBeenSet = true;
}

bool RabbitMQClusterAccessInfo::PublicDataStreamStatusHasBeenSet() const
{
    return m_publicDataStreamStatusHasBeenSet;
}

PrometheusEndpointInfo RabbitMQClusterAccessInfo::GetPrometheusEndpointInfo() const
{
    return m_prometheusEndpointInfo;
}

void RabbitMQClusterAccessInfo::SetPrometheusEndpointInfo(const PrometheusEndpointInfo& _prometheusEndpointInfo)
{
    m_prometheusEndpointInfo = _prometheusEndpointInfo;
    m_prometheusEndpointInfoHasBeenSet = true;
}

bool RabbitMQClusterAccessInfo::PrometheusEndpointInfoHasBeenSet() const
{
    return m_prometheusEndpointInfoHasBeenSet;
}

string RabbitMQClusterAccessInfo::GetWebConsoleDomainEndpoint() const
{
    return m_webConsoleDomainEndpoint;
}

void RabbitMQClusterAccessInfo::SetWebConsoleDomainEndpoint(const string& _webConsoleDomainEndpoint)
{
    m_webConsoleDomainEndpoint = _webConsoleDomainEndpoint;
    m_webConsoleDomainEndpointHasBeenSet = true;
}

bool RabbitMQClusterAccessInfo::WebConsoleDomainEndpointHasBeenSet() const
{
    return m_webConsoleDomainEndpointHasBeenSet;
}

VpcEndpointInfo RabbitMQClusterAccessInfo::GetControlPlaneEndpointInfo() const
{
    return m_controlPlaneEndpointInfo;
}

void RabbitMQClusterAccessInfo::SetControlPlaneEndpointInfo(const VpcEndpointInfo& _controlPlaneEndpointInfo)
{
    m_controlPlaneEndpointInfo = _controlPlaneEndpointInfo;
    m_controlPlaneEndpointInfoHasBeenSet = true;
}

bool RabbitMQClusterAccessInfo::ControlPlaneEndpointInfoHasBeenSet() const
{
    return m_controlPlaneEndpointInfoHasBeenSet;
}

