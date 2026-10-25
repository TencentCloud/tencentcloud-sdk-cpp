/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/rum/v20210622/model/DialProbe.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DialProbe::DialProbe() :
    m_targetIpHasBeenSet(false),
    m_pingSuccessHasBeenSet(false),
    m_sentHasBeenSet(false),
    m_receivedHasBeenSet(false),
    m_lossHasBeenSet(false),
    m_minHasBeenSet(false),
    m_maxHasBeenSet(false),
    m_avgHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_skipReasonHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

CoreInternalOutcome DialProbe::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TargetIp") && !value["TargetIp"].IsNull())
    {
        if (!value["TargetIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DialProbe.TargetIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetIp = string(value["TargetIp"].GetString());
        m_targetIpHasBeenSet = true;
    }

    if (value.HasMember("PingSuccess") && !value["PingSuccess"].IsNull())
    {
        if (!value["PingSuccess"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DialProbe.PingSuccess` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_pingSuccess = value["PingSuccess"].GetBool();
        m_pingSuccessHasBeenSet = true;
    }

    if (value.HasMember("Sent") && !value["Sent"].IsNull())
    {
        if (!value["Sent"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DialProbe.Sent` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_sent = value["Sent"].GetDouble();
        m_sentHasBeenSet = true;
    }

    if (value.HasMember("Received") && !value["Received"].IsNull())
    {
        if (!value["Received"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DialProbe.Received` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_received = value["Received"].GetDouble();
        m_receivedHasBeenSet = true;
    }

    if (value.HasMember("Loss") && !value["Loss"].IsNull())
    {
        if (!value["Loss"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DialProbe.Loss` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_loss = value["Loss"].GetDouble();
        m_lossHasBeenSet = true;
    }

    if (value.HasMember("Min") && !value["Min"].IsNull())
    {
        if (!value["Min"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DialProbe.Min` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_min = value["Min"].GetDouble();
        m_minHasBeenSet = true;
    }

    if (value.HasMember("Max") && !value["Max"].IsNull())
    {
        if (!value["Max"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DialProbe.Max` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_max = value["Max"].GetDouble();
        m_maxHasBeenSet = true;
    }

    if (value.HasMember("Avg") && !value["Avg"].IsNull())
    {
        if (!value["Avg"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DialProbe.Avg` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_avg = value["Avg"].GetDouble();
        m_avgHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DialProbe.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DialProbe.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("SkipReason") && !value["SkipReason"].IsNull())
    {
        if (!value["SkipReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DialProbe.SkipReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skipReason = string(value["SkipReason"].GetString());
        m_skipReasonHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DialProbe.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DialProbe.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DialProbe::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_targetIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetIp.c_str(), allocator).Move(), allocator);
    }

    if (m_pingSuccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PingSuccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pingSuccess, allocator);
    }

    if (m_sentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sent, allocator);
    }

    if (m_receivedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Received";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_received, allocator);
    }

    if (m_lossHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Loss";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loss, allocator);
    }

    if (m_minHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Min";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_min, allocator);
    }

    if (m_maxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Max";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_max, allocator);
    }

    if (m_avgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Avg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avg, allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_skipReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkipReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skipReason.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

}


string DialProbe::GetTargetIp() const
{
    return m_targetIp;
}

void DialProbe::SetTargetIp(const string& _targetIp)
{
    m_targetIp = _targetIp;
    m_targetIpHasBeenSet = true;
}

bool DialProbe::TargetIpHasBeenSet() const
{
    return m_targetIpHasBeenSet;
}

bool DialProbe::GetPingSuccess() const
{
    return m_pingSuccess;
}

void DialProbe::SetPingSuccess(const bool& _pingSuccess)
{
    m_pingSuccess = _pingSuccess;
    m_pingSuccessHasBeenSet = true;
}

bool DialProbe::PingSuccessHasBeenSet() const
{
    return m_pingSuccessHasBeenSet;
}

double DialProbe::GetSent() const
{
    return m_sent;
}

void DialProbe::SetSent(const double& _sent)
{
    m_sent = _sent;
    m_sentHasBeenSet = true;
}

bool DialProbe::SentHasBeenSet() const
{
    return m_sentHasBeenSet;
}

double DialProbe::GetReceived() const
{
    return m_received;
}

void DialProbe::SetReceived(const double& _received)
{
    m_received = _received;
    m_receivedHasBeenSet = true;
}

bool DialProbe::ReceivedHasBeenSet() const
{
    return m_receivedHasBeenSet;
}

double DialProbe::GetLoss() const
{
    return m_loss;
}

void DialProbe::SetLoss(const double& _loss)
{
    m_loss = _loss;
    m_lossHasBeenSet = true;
}

bool DialProbe::LossHasBeenSet() const
{
    return m_lossHasBeenSet;
}

double DialProbe::GetMin() const
{
    return m_min;
}

void DialProbe::SetMin(const double& _min)
{
    m_min = _min;
    m_minHasBeenSet = true;
}

bool DialProbe::MinHasBeenSet() const
{
    return m_minHasBeenSet;
}

double DialProbe::GetMax() const
{
    return m_max;
}

void DialProbe::SetMax(const double& _max)
{
    m_max = _max;
    m_maxHasBeenSet = true;
}

bool DialProbe::MaxHasBeenSet() const
{
    return m_maxHasBeenSet;
}

double DialProbe::GetAvg() const
{
    return m_avg;
}

void DialProbe::SetAvg(const double& _avg)
{
    m_avg = _avg;
    m_avgHasBeenSet = true;
}

bool DialProbe::AvgHasBeenSet() const
{
    return m_avgHasBeenSet;
}

string DialProbe::GetProtocol() const
{
    return m_protocol;
}

void DialProbe::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool DialProbe::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string DialProbe::GetDomain() const
{
    return m_domain;
}

void DialProbe::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DialProbe::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DialProbe::GetSkipReason() const
{
    return m_skipReason;
}

void DialProbe::SetSkipReason(const string& _skipReason)
{
    m_skipReason = _skipReason;
    m_skipReasonHasBeenSet = true;
}

bool DialProbe::SkipReasonHasBeenSet() const
{
    return m_skipReasonHasBeenSet;
}

string DialProbe::GetRegion() const
{
    return m_region;
}

void DialProbe::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DialProbe::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DialProbe::GetOperator() const
{
    return m_operator;
}

void DialProbe::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool DialProbe::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

