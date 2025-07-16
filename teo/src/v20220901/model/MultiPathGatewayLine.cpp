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

#include <tencentcloud/teo/v20220901/model/MultiPathGatewayLine.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

MultiPathGatewayLine::MultiPathGatewayLine() :
    m_lineIdHasBeenSet(false),
    m_lineTypeHasBeenSet(false),
    m_lineAddressHasBeenSet(false),
    m_proxyIdHasBeenSet(false),
    m_ruleIdHasBeenSet(false)
{
}

CoreInternalOutcome MultiPathGatewayLine::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LineId") && !value["LineId"].IsNull())
    {
        if (!value["LineId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MultiPathGatewayLine.LineId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lineId = string(value["LineId"].GetString());
        m_lineIdHasBeenSet = true;
    }

    if (value.HasMember("LineType") && !value["LineType"].IsNull())
    {
        if (!value["LineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MultiPathGatewayLine.LineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lineType = string(value["LineType"].GetString());
        m_lineTypeHasBeenSet = true;
    }

    if (value.HasMember("LineAddress") && !value["LineAddress"].IsNull())
    {
        if (!value["LineAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MultiPathGatewayLine.LineAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lineAddress = string(value["LineAddress"].GetString());
        m_lineAddressHasBeenSet = true;
    }

    if (value.HasMember("ProxyId") && !value["ProxyId"].IsNull())
    {
        if (!value["ProxyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MultiPathGatewayLine.ProxyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyId = string(value["ProxyId"].GetString());
        m_proxyIdHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MultiPathGatewayLine.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MultiPathGatewayLine::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_lineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lineId.c_str(), allocator).Move(), allocator);
    }

    if (m_lineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lineType.c_str(), allocator).Move(), allocator);
    }

    if (m_lineAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lineAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

}


string MultiPathGatewayLine::GetLineId() const
{
    return m_lineId;
}

void MultiPathGatewayLine::SetLineId(const string& _lineId)
{
    m_lineId = _lineId;
    m_lineIdHasBeenSet = true;
}

bool MultiPathGatewayLine::LineIdHasBeenSet() const
{
    return m_lineIdHasBeenSet;
}

string MultiPathGatewayLine::GetLineType() const
{
    return m_lineType;
}

void MultiPathGatewayLine::SetLineType(const string& _lineType)
{
    m_lineType = _lineType;
    m_lineTypeHasBeenSet = true;
}

bool MultiPathGatewayLine::LineTypeHasBeenSet() const
{
    return m_lineTypeHasBeenSet;
}

string MultiPathGatewayLine::GetLineAddress() const
{
    return m_lineAddress;
}

void MultiPathGatewayLine::SetLineAddress(const string& _lineAddress)
{
    m_lineAddress = _lineAddress;
    m_lineAddressHasBeenSet = true;
}

bool MultiPathGatewayLine::LineAddressHasBeenSet() const
{
    return m_lineAddressHasBeenSet;
}

string MultiPathGatewayLine::GetProxyId() const
{
    return m_proxyId;
}

void MultiPathGatewayLine::SetProxyId(const string& _proxyId)
{
    m_proxyId = _proxyId;
    m_proxyIdHasBeenSet = true;
}

bool MultiPathGatewayLine::ProxyIdHasBeenSet() const
{
    return m_proxyIdHasBeenSet;
}

string MultiPathGatewayLine::GetRuleId() const
{
    return m_ruleId;
}

void MultiPathGatewayLine::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool MultiPathGatewayLine::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

