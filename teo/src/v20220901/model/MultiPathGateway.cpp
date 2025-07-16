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

#include <tencentcloud/teo/v20220901/model/MultiPathGateway.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

MultiPathGateway::MultiPathGateway() :
    m_gatewayIdHasBeenSet(false),
    m_gatewayNameHasBeenSet(false),
    m_gatewayTypeHasBeenSet(false),
    m_gatewayPortHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_gatewayIPHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_linesHasBeenSet(false)
{
}

CoreInternalOutcome MultiPathGateway::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GatewayId") && !value["GatewayId"].IsNull())
    {
        if (!value["GatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MultiPathGateway.GatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayId = string(value["GatewayId"].GetString());
        m_gatewayIdHasBeenSet = true;
    }

    if (value.HasMember("GatewayName") && !value["GatewayName"].IsNull())
    {
        if (!value["GatewayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MultiPathGateway.GatewayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayName = string(value["GatewayName"].GetString());
        m_gatewayNameHasBeenSet = true;
    }

    if (value.HasMember("GatewayType") && !value["GatewayType"].IsNull())
    {
        if (!value["GatewayType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MultiPathGateway.GatewayType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayType = string(value["GatewayType"].GetString());
        m_gatewayTypeHasBeenSet = true;
    }

    if (value.HasMember("GatewayPort") && !value["GatewayPort"].IsNull())
    {
        if (!value["GatewayPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MultiPathGateway.GatewayPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayPort = value["GatewayPort"].GetInt64();
        m_gatewayPortHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MultiPathGateway.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("GatewayIP") && !value["GatewayIP"].IsNull())
    {
        if (!value["GatewayIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MultiPathGateway.GatewayIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayIP = string(value["GatewayIP"].GetString());
        m_gatewayIPHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MultiPathGateway.RegionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = string(value["RegionId"].GetString());
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("Lines") && !value["Lines"].IsNull())
    {
        if (!value["Lines"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MultiPathGateway.Lines` is not array type"));

        const rapidjson::Value &tmpValue = value["Lines"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MultiPathGatewayLine item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_lines.push_back(item);
        }
        m_linesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MultiPathGateway::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayName.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayType.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gatewayPort, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayIP.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionId.c_str(), allocator).Move(), allocator);
    }

    if (m_linesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lines";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_lines.begin(); itr != m_lines.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string MultiPathGateway::GetGatewayId() const
{
    return m_gatewayId;
}

void MultiPathGateway::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool MultiPathGateway::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string MultiPathGateway::GetGatewayName() const
{
    return m_gatewayName;
}

void MultiPathGateway::SetGatewayName(const string& _gatewayName)
{
    m_gatewayName = _gatewayName;
    m_gatewayNameHasBeenSet = true;
}

bool MultiPathGateway::GatewayNameHasBeenSet() const
{
    return m_gatewayNameHasBeenSet;
}

string MultiPathGateway::GetGatewayType() const
{
    return m_gatewayType;
}

void MultiPathGateway::SetGatewayType(const string& _gatewayType)
{
    m_gatewayType = _gatewayType;
    m_gatewayTypeHasBeenSet = true;
}

bool MultiPathGateway::GatewayTypeHasBeenSet() const
{
    return m_gatewayTypeHasBeenSet;
}

int64_t MultiPathGateway::GetGatewayPort() const
{
    return m_gatewayPort;
}

void MultiPathGateway::SetGatewayPort(const int64_t& _gatewayPort)
{
    m_gatewayPort = _gatewayPort;
    m_gatewayPortHasBeenSet = true;
}

bool MultiPathGateway::GatewayPortHasBeenSet() const
{
    return m_gatewayPortHasBeenSet;
}

string MultiPathGateway::GetStatus() const
{
    return m_status;
}

void MultiPathGateway::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool MultiPathGateway::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string MultiPathGateway::GetGatewayIP() const
{
    return m_gatewayIP;
}

void MultiPathGateway::SetGatewayIP(const string& _gatewayIP)
{
    m_gatewayIP = _gatewayIP;
    m_gatewayIPHasBeenSet = true;
}

bool MultiPathGateway::GatewayIPHasBeenSet() const
{
    return m_gatewayIPHasBeenSet;
}

string MultiPathGateway::GetRegionId() const
{
    return m_regionId;
}

void MultiPathGateway::SetRegionId(const string& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool MultiPathGateway::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

vector<MultiPathGatewayLine> MultiPathGateway::GetLines() const
{
    return m_lines;
}

void MultiPathGateway::SetLines(const vector<MultiPathGatewayLine>& _lines)
{
    m_lines = _lines;
    m_linesHasBeenSet = true;
}

bool MultiPathGateway::LinesHasBeenSet() const
{
    return m_linesHasBeenSet;
}

