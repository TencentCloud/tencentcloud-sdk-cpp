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

#include <tencentcloud/tse/v20201207/model/DescribeInstanceRegionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

DescribeInstanceRegionInfo::DescribeInstanceRegionInfo() :
    m_engineRegionHasBeenSet(false),
    m_replicaHasBeenSet(false),
    m_specIdHasBeenSet(false),
    m_intranetVpcInfosHasBeenSet(false),
    m_consoleIntranetVpcInfosHasBeenSet(false),
    m_enableClientInternetHasBeenSet(false),
    m_limiterIntranetVpcInfosHasBeenSet(false),
    m_mainRegionHasBeenSet(false),
    m_eKSClusterIDHasBeenSet(false)
{
}

CoreInternalOutcome DescribeInstanceRegionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EngineRegion") && !value["EngineRegion"].IsNull())
    {
        if (!value["EngineRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstanceRegionInfo.EngineRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineRegion = string(value["EngineRegion"].GetString());
        m_engineRegionHasBeenSet = true;
    }

    if (value.HasMember("Replica") && !value["Replica"].IsNull())
    {
        if (!value["Replica"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstanceRegionInfo.Replica` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replica = value["Replica"].GetInt64();
        m_replicaHasBeenSet = true;
    }

    if (value.HasMember("SpecId") && !value["SpecId"].IsNull())
    {
        if (!value["SpecId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstanceRegionInfo.SpecId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specId = string(value["SpecId"].GetString());
        m_specIdHasBeenSet = true;
    }

    if (value.HasMember("IntranetVpcInfos") && !value["IntranetVpcInfos"].IsNull())
    {
        if (!value["IntranetVpcInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeInstanceRegionInfo.IntranetVpcInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["IntranetVpcInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VpcInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_intranetVpcInfos.push_back(item);
        }
        m_intranetVpcInfosHasBeenSet = true;
    }

    if (value.HasMember("ConsoleIntranetVpcInfos") && !value["ConsoleIntranetVpcInfos"].IsNull())
    {
        if (!value["ConsoleIntranetVpcInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeInstanceRegionInfo.ConsoleIntranetVpcInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["ConsoleIntranetVpcInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VpcInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_consoleIntranetVpcInfos.push_back(item);
        }
        m_consoleIntranetVpcInfosHasBeenSet = true;
    }

    if (value.HasMember("EnableClientInternet") && !value["EnableClientInternet"].IsNull())
    {
        if (!value["EnableClientInternet"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstanceRegionInfo.EnableClientInternet` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableClientInternet = value["EnableClientInternet"].GetBool();
        m_enableClientInternetHasBeenSet = true;
    }

    if (value.HasMember("LimiterIntranetVpcInfos") && !value["LimiterIntranetVpcInfos"].IsNull())
    {
        if (!value["LimiterIntranetVpcInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeInstanceRegionInfo.LimiterIntranetVpcInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["LimiterIntranetVpcInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VpcInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_limiterIntranetVpcInfos.push_back(item);
        }
        m_limiterIntranetVpcInfosHasBeenSet = true;
    }

    if (value.HasMember("MainRegion") && !value["MainRegion"].IsNull())
    {
        if (!value["MainRegion"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstanceRegionInfo.MainRegion` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_mainRegion = value["MainRegion"].GetBool();
        m_mainRegionHasBeenSet = true;
    }

    if (value.HasMember("EKSClusterID") && !value["EKSClusterID"].IsNull())
    {
        if (!value["EKSClusterID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstanceRegionInfo.EKSClusterID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eKSClusterID = string(value["EKSClusterID"].GetString());
        m_eKSClusterIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeInstanceRegionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_engineRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_replicaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replica";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replica, allocator);
    }

    if (m_specIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specId.c_str(), allocator).Move(), allocator);
    }

    if (m_intranetVpcInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntranetVpcInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_intranetVpcInfos.begin(); itr != m_intranetVpcInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_consoleIntranetVpcInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsoleIntranetVpcInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_consoleIntranetVpcInfos.begin(); itr != m_consoleIntranetVpcInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_enableClientInternetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableClientInternet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableClientInternet, allocator);
    }

    if (m_limiterIntranetVpcInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimiterIntranetVpcInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_limiterIntranetVpcInfos.begin(); itr != m_limiterIntranetVpcInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_mainRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mainRegion, allocator);
    }

    if (m_eKSClusterIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EKSClusterID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eKSClusterID.c_str(), allocator).Move(), allocator);
    }

}


string DescribeInstanceRegionInfo::GetEngineRegion() const
{
    return m_engineRegion;
}

void DescribeInstanceRegionInfo::SetEngineRegion(const string& _engineRegion)
{
    m_engineRegion = _engineRegion;
    m_engineRegionHasBeenSet = true;
}

bool DescribeInstanceRegionInfo::EngineRegionHasBeenSet() const
{
    return m_engineRegionHasBeenSet;
}

int64_t DescribeInstanceRegionInfo::GetReplica() const
{
    return m_replica;
}

void DescribeInstanceRegionInfo::SetReplica(const int64_t& _replica)
{
    m_replica = _replica;
    m_replicaHasBeenSet = true;
}

bool DescribeInstanceRegionInfo::ReplicaHasBeenSet() const
{
    return m_replicaHasBeenSet;
}

string DescribeInstanceRegionInfo::GetSpecId() const
{
    return m_specId;
}

void DescribeInstanceRegionInfo::SetSpecId(const string& _specId)
{
    m_specId = _specId;
    m_specIdHasBeenSet = true;
}

bool DescribeInstanceRegionInfo::SpecIdHasBeenSet() const
{
    return m_specIdHasBeenSet;
}

vector<VpcInfo> DescribeInstanceRegionInfo::GetIntranetVpcInfos() const
{
    return m_intranetVpcInfos;
}

void DescribeInstanceRegionInfo::SetIntranetVpcInfos(const vector<VpcInfo>& _intranetVpcInfos)
{
    m_intranetVpcInfos = _intranetVpcInfos;
    m_intranetVpcInfosHasBeenSet = true;
}

bool DescribeInstanceRegionInfo::IntranetVpcInfosHasBeenSet() const
{
    return m_intranetVpcInfosHasBeenSet;
}

vector<VpcInfo> DescribeInstanceRegionInfo::GetConsoleIntranetVpcInfos() const
{
    return m_consoleIntranetVpcInfos;
}

void DescribeInstanceRegionInfo::SetConsoleIntranetVpcInfos(const vector<VpcInfo>& _consoleIntranetVpcInfos)
{
    m_consoleIntranetVpcInfos = _consoleIntranetVpcInfos;
    m_consoleIntranetVpcInfosHasBeenSet = true;
}

bool DescribeInstanceRegionInfo::ConsoleIntranetVpcInfosHasBeenSet() const
{
    return m_consoleIntranetVpcInfosHasBeenSet;
}

bool DescribeInstanceRegionInfo::GetEnableClientInternet() const
{
    return m_enableClientInternet;
}

void DescribeInstanceRegionInfo::SetEnableClientInternet(const bool& _enableClientInternet)
{
    m_enableClientInternet = _enableClientInternet;
    m_enableClientInternetHasBeenSet = true;
}

bool DescribeInstanceRegionInfo::EnableClientInternetHasBeenSet() const
{
    return m_enableClientInternetHasBeenSet;
}

vector<VpcInfo> DescribeInstanceRegionInfo::GetLimiterIntranetVpcInfos() const
{
    return m_limiterIntranetVpcInfos;
}

void DescribeInstanceRegionInfo::SetLimiterIntranetVpcInfos(const vector<VpcInfo>& _limiterIntranetVpcInfos)
{
    m_limiterIntranetVpcInfos = _limiterIntranetVpcInfos;
    m_limiterIntranetVpcInfosHasBeenSet = true;
}

bool DescribeInstanceRegionInfo::LimiterIntranetVpcInfosHasBeenSet() const
{
    return m_limiterIntranetVpcInfosHasBeenSet;
}

bool DescribeInstanceRegionInfo::GetMainRegion() const
{
    return m_mainRegion;
}

void DescribeInstanceRegionInfo::SetMainRegion(const bool& _mainRegion)
{
    m_mainRegion = _mainRegion;
    m_mainRegionHasBeenSet = true;
}

bool DescribeInstanceRegionInfo::MainRegionHasBeenSet() const
{
    return m_mainRegionHasBeenSet;
}

string DescribeInstanceRegionInfo::GetEKSClusterID() const
{
    return m_eKSClusterID;
}

void DescribeInstanceRegionInfo::SetEKSClusterID(const string& _eKSClusterID)
{
    m_eKSClusterID = _eKSClusterID;
    m_eKSClusterIDHasBeenSet = true;
}

bool DescribeInstanceRegionInfo::EKSClusterIDHasBeenSet() const
{
    return m_eKSClusterIDHasBeenSet;
}

