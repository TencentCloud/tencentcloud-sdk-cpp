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
    m_enableClientInternetHasBeenSet(false)
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

    if (value.HasMember("EnableClientInternet") && !value["EnableClientInternet"].IsNull())
    {
        if (!value["EnableClientInternet"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstanceRegionInfo.EnableClientInternet` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableClientInternet = value["EnableClientInternet"].GetBool();
        m_enableClientInternetHasBeenSet = true;
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

    if (m_enableClientInternetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableClientInternet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableClientInternet, allocator);
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

