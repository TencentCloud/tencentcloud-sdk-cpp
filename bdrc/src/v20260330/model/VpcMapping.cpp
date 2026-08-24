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

#include <tencentcloud/bdrc/v20260330/model/VpcMapping.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

VpcMapping::VpcMapping() :
    m_idHasBeenSet(false),
    m_sitePairIdHasBeenSet(false),
    m_sourceVpcHasBeenSet(false),
    m_sourceSubnetHasBeenSet(false),
    m_targetVpcHasBeenSet(false),
    m_targetSubnetHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_lifeStateHasBeenSet(false)
{
}

CoreInternalOutcome VpcMapping::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcMapping.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("SitePairId") && !value["SitePairId"].IsNull())
    {
        if (!value["SitePairId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcMapping.SitePairId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sitePairId = string(value["SitePairId"].GetString());
        m_sitePairIdHasBeenSet = true;
    }

    if (value.HasMember("SourceVpc") && !value["SourceVpc"].IsNull())
    {
        if (!value["SourceVpc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcMapping.SourceVpc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceVpc = string(value["SourceVpc"].GetString());
        m_sourceVpcHasBeenSet = true;
    }

    if (value.HasMember("SourceSubnet") && !value["SourceSubnet"].IsNull())
    {
        if (!value["SourceSubnet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcMapping.SourceSubnet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceSubnet = string(value["SourceSubnet"].GetString());
        m_sourceSubnetHasBeenSet = true;
    }

    if (value.HasMember("TargetVpc") && !value["TargetVpc"].IsNull())
    {
        if (!value["TargetVpc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcMapping.TargetVpc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetVpc = string(value["TargetVpc"].GetString());
        m_targetVpcHasBeenSet = true;
    }

    if (value.HasMember("TargetSubnet") && !value["TargetSubnet"].IsNull())
    {
        if (!value["TargetSubnet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcMapping.TargetSubnet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetSubnet = string(value["TargetSubnet"].GetString());
        m_targetSubnetHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcMapping.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("LifeState") && !value["LifeState"].IsNull())
    {
        if (!value["LifeState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcMapping.LifeState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lifeState = string(value["LifeState"].GetString());
        m_lifeStateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VpcMapping::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_sitePairIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SitePairId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sitePairId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceVpcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceVpc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceVpc.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceSubnetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceSubnet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceSubnet.c_str(), allocator).Move(), allocator);
    }

    if (m_targetVpcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetVpc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetVpc.c_str(), allocator).Move(), allocator);
    }

    if (m_targetSubnetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetSubnet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetSubnet.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_lifeStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lifeState.c_str(), allocator).Move(), allocator);
    }

}


uint64_t VpcMapping::GetId() const
{
    return m_id;
}

void VpcMapping::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool VpcMapping::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string VpcMapping::GetSitePairId() const
{
    return m_sitePairId;
}

void VpcMapping::SetSitePairId(const string& _sitePairId)
{
    m_sitePairId = _sitePairId;
    m_sitePairIdHasBeenSet = true;
}

bool VpcMapping::SitePairIdHasBeenSet() const
{
    return m_sitePairIdHasBeenSet;
}

string VpcMapping::GetSourceVpc() const
{
    return m_sourceVpc;
}

void VpcMapping::SetSourceVpc(const string& _sourceVpc)
{
    m_sourceVpc = _sourceVpc;
    m_sourceVpcHasBeenSet = true;
}

bool VpcMapping::SourceVpcHasBeenSet() const
{
    return m_sourceVpcHasBeenSet;
}

string VpcMapping::GetSourceSubnet() const
{
    return m_sourceSubnet;
}

void VpcMapping::SetSourceSubnet(const string& _sourceSubnet)
{
    m_sourceSubnet = _sourceSubnet;
    m_sourceSubnetHasBeenSet = true;
}

bool VpcMapping::SourceSubnetHasBeenSet() const
{
    return m_sourceSubnetHasBeenSet;
}

string VpcMapping::GetTargetVpc() const
{
    return m_targetVpc;
}

void VpcMapping::SetTargetVpc(const string& _targetVpc)
{
    m_targetVpc = _targetVpc;
    m_targetVpcHasBeenSet = true;
}

bool VpcMapping::TargetVpcHasBeenSet() const
{
    return m_targetVpcHasBeenSet;
}

string VpcMapping::GetTargetSubnet() const
{
    return m_targetSubnet;
}

void VpcMapping::SetTargetSubnet(const string& _targetSubnet)
{
    m_targetSubnet = _targetSubnet;
    m_targetSubnetHasBeenSet = true;
}

bool VpcMapping::TargetSubnetHasBeenSet() const
{
    return m_targetSubnetHasBeenSet;
}

string VpcMapping::GetStatus() const
{
    return m_status;
}

void VpcMapping::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool VpcMapping::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string VpcMapping::GetLifeState() const
{
    return m_lifeState;
}

void VpcMapping::SetLifeState(const string& _lifeState)
{
    m_lifeState = _lifeState;
    m_lifeStateHasBeenSet = true;
}

bool VpcMapping::LifeStateHasBeenSet() const
{
    return m_lifeStateHasBeenSet;
}

