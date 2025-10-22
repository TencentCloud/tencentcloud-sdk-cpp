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

#include <tencentcloud/dlc/v20210125/model/EngineNetworkInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

EngineNetworkInfo::EngineNetworkInfo() :
    m_engineNetworkNameHasBeenSet(false),
    m_engineNetworkStateHasBeenSet(false),
    m_engineNetworkCidrHasBeenSet(false),
    m_engineNetworkIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_privateLinkNumberHasBeenSet(false),
    m_engineNumberHasBeenSet(false),
    m_gateWayInfoHasBeenSet(false)
{
}

CoreInternalOutcome EngineNetworkInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EngineNetworkName") && !value["EngineNetworkName"].IsNull())
    {
        if (!value["EngineNetworkName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EngineNetworkInfo.EngineNetworkName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineNetworkName = string(value["EngineNetworkName"].GetString());
        m_engineNetworkNameHasBeenSet = true;
    }

    if (value.HasMember("EngineNetworkState") && !value["EngineNetworkState"].IsNull())
    {
        if (!value["EngineNetworkState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EngineNetworkInfo.EngineNetworkState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_engineNetworkState = value["EngineNetworkState"].GetInt64();
        m_engineNetworkStateHasBeenSet = true;
    }

    if (value.HasMember("EngineNetworkCidr") && !value["EngineNetworkCidr"].IsNull())
    {
        if (!value["EngineNetworkCidr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EngineNetworkInfo.EngineNetworkCidr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineNetworkCidr = string(value["EngineNetworkCidr"].GetString());
        m_engineNetworkCidrHasBeenSet = true;
    }

    if (value.HasMember("EngineNetworkId") && !value["EngineNetworkId"].IsNull())
    {
        if (!value["EngineNetworkId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EngineNetworkInfo.EngineNetworkId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineNetworkId = string(value["EngineNetworkId"].GetString());
        m_engineNetworkIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EngineNetworkInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EngineNetworkInfo.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("PrivateLinkNumber") && !value["PrivateLinkNumber"].IsNull())
    {
        if (!value["PrivateLinkNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EngineNetworkInfo.PrivateLinkNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_privateLinkNumber = value["PrivateLinkNumber"].GetInt64();
        m_privateLinkNumberHasBeenSet = true;
    }

    if (value.HasMember("EngineNumber") && !value["EngineNumber"].IsNull())
    {
        if (!value["EngineNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EngineNetworkInfo.EngineNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_engineNumber = value["EngineNumber"].GetInt64();
        m_engineNumberHasBeenSet = true;
    }

    if (value.HasMember("GateWayInfo") && !value["GateWayInfo"].IsNull())
    {
        if (!value["GateWayInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EngineNetworkInfo.GateWayInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["GateWayInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GatewayInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_gateWayInfo.push_back(item);
        }
        m_gateWayInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EngineNetworkInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_engineNetworkNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineNetworkName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineNetworkName.c_str(), allocator).Move(), allocator);
    }

    if (m_engineNetworkStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineNetworkState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_engineNetworkState, allocator);
    }

    if (m_engineNetworkCidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineNetworkCidr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineNetworkCidr.c_str(), allocator).Move(), allocator);
    }

    if (m_engineNetworkIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineNetworkId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineNetworkId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_privateLinkNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateLinkNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_privateLinkNumber, allocator);
    }

    if (m_engineNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_engineNumber, allocator);
    }

    if (m_gateWayInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GateWayInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_gateWayInfo.begin(); itr != m_gateWayInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string EngineNetworkInfo::GetEngineNetworkName() const
{
    return m_engineNetworkName;
}

void EngineNetworkInfo::SetEngineNetworkName(const string& _engineNetworkName)
{
    m_engineNetworkName = _engineNetworkName;
    m_engineNetworkNameHasBeenSet = true;
}

bool EngineNetworkInfo::EngineNetworkNameHasBeenSet() const
{
    return m_engineNetworkNameHasBeenSet;
}

int64_t EngineNetworkInfo::GetEngineNetworkState() const
{
    return m_engineNetworkState;
}

void EngineNetworkInfo::SetEngineNetworkState(const int64_t& _engineNetworkState)
{
    m_engineNetworkState = _engineNetworkState;
    m_engineNetworkStateHasBeenSet = true;
}

bool EngineNetworkInfo::EngineNetworkStateHasBeenSet() const
{
    return m_engineNetworkStateHasBeenSet;
}

string EngineNetworkInfo::GetEngineNetworkCidr() const
{
    return m_engineNetworkCidr;
}

void EngineNetworkInfo::SetEngineNetworkCidr(const string& _engineNetworkCidr)
{
    m_engineNetworkCidr = _engineNetworkCidr;
    m_engineNetworkCidrHasBeenSet = true;
}

bool EngineNetworkInfo::EngineNetworkCidrHasBeenSet() const
{
    return m_engineNetworkCidrHasBeenSet;
}

string EngineNetworkInfo::GetEngineNetworkId() const
{
    return m_engineNetworkId;
}

void EngineNetworkInfo::SetEngineNetworkId(const string& _engineNetworkId)
{
    m_engineNetworkId = _engineNetworkId;
    m_engineNetworkIdHasBeenSet = true;
}

bool EngineNetworkInfo::EngineNetworkIdHasBeenSet() const
{
    return m_engineNetworkIdHasBeenSet;
}

int64_t EngineNetworkInfo::GetCreateTime() const
{
    return m_createTime;
}

void EngineNetworkInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool EngineNetworkInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t EngineNetworkInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void EngineNetworkInfo::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool EngineNetworkInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t EngineNetworkInfo::GetPrivateLinkNumber() const
{
    return m_privateLinkNumber;
}

void EngineNetworkInfo::SetPrivateLinkNumber(const int64_t& _privateLinkNumber)
{
    m_privateLinkNumber = _privateLinkNumber;
    m_privateLinkNumberHasBeenSet = true;
}

bool EngineNetworkInfo::PrivateLinkNumberHasBeenSet() const
{
    return m_privateLinkNumberHasBeenSet;
}

int64_t EngineNetworkInfo::GetEngineNumber() const
{
    return m_engineNumber;
}

void EngineNetworkInfo::SetEngineNumber(const int64_t& _engineNumber)
{
    m_engineNumber = _engineNumber;
    m_engineNumberHasBeenSet = true;
}

bool EngineNetworkInfo::EngineNumberHasBeenSet() const
{
    return m_engineNumberHasBeenSet;
}

vector<GatewayInfo> EngineNetworkInfo::GetGateWayInfo() const
{
    return m_gateWayInfo;
}

void EngineNetworkInfo::SetGateWayInfo(const vector<GatewayInfo>& _gateWayInfo)
{
    m_gateWayInfo = _gateWayInfo;
    m_gateWayInfoHasBeenSet = true;
}

bool EngineNetworkInfo::GateWayInfoHasBeenSet() const
{
    return m_gateWayInfoHasBeenSet;
}

