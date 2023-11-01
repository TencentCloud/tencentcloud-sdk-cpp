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

#include <tencentcloud/vpc/v20170312/model/BandwidthPackage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

BandwidthPackage::BandwidthPackage() :
    m_bandwidthPackageIdHasBeenSet(false),
    m_networkTypeHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_bandwidthPackageNameHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_resourceSetHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_egressHasBeenSet(false),
    m_deadlineHasBeenSet(false)
{
}

CoreInternalOutcome BandwidthPackage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BandwidthPackageId") && !value["BandwidthPackageId"].IsNull())
    {
        if (!value["BandwidthPackageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BandwidthPackage.BandwidthPackageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidthPackageId = string(value["BandwidthPackageId"].GetString());
        m_bandwidthPackageIdHasBeenSet = true;
    }

    if (value.HasMember("NetworkType") && !value["NetworkType"].IsNull())
    {
        if (!value["NetworkType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BandwidthPackage.NetworkType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkType = string(value["NetworkType"].GetString());
        m_networkTypeHasBeenSet = true;
    }

    if (value.HasMember("ChargeType") && !value["ChargeType"].IsNull())
    {
        if (!value["ChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BandwidthPackage.ChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeType = string(value["ChargeType"].GetString());
        m_chargeTypeHasBeenSet = true;
    }

    if (value.HasMember("BandwidthPackageName") && !value["BandwidthPackageName"].IsNull())
    {
        if (!value["BandwidthPackageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BandwidthPackage.BandwidthPackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidthPackageName = string(value["BandwidthPackageName"].GetString());
        m_bandwidthPackageNameHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BandwidthPackage.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BandwidthPackage.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ResourceSet") && !value["ResourceSet"].IsNull())
    {
        if (!value["ResourceSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BandwidthPackage.ResourceSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Resource item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceSet.push_back(item);
        }
        m_resourceSetHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BandwidthPackage.Bandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetInt64();
        m_bandwidthHasBeenSet = true;
    }

    if (value.HasMember("Egress") && !value["Egress"].IsNull())
    {
        if (!value["Egress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BandwidthPackage.Egress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_egress = string(value["Egress"].GetString());
        m_egressHasBeenSet = true;
    }

    if (value.HasMember("Deadline") && !value["Deadline"].IsNull())
    {
        if (!value["Deadline"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BandwidthPackage.Deadline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deadline = string(value["Deadline"].GetString());
        m_deadlineHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BandwidthPackage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bandwidthPackageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthPackageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bandwidthPackageId.c_str(), allocator).Move(), allocator);
    }

    if (m_networkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkType.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthPackageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthPackageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bandwidthPackageName.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceSet.begin(); itr != m_resourceSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_egressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Egress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_egress.c_str(), allocator).Move(), allocator);
    }

    if (m_deadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deadline.c_str(), allocator).Move(), allocator);
    }

}


string BandwidthPackage::GetBandwidthPackageId() const
{
    return m_bandwidthPackageId;
}

void BandwidthPackage::SetBandwidthPackageId(const string& _bandwidthPackageId)
{
    m_bandwidthPackageId = _bandwidthPackageId;
    m_bandwidthPackageIdHasBeenSet = true;
}

bool BandwidthPackage::BandwidthPackageIdHasBeenSet() const
{
    return m_bandwidthPackageIdHasBeenSet;
}

string BandwidthPackage::GetNetworkType() const
{
    return m_networkType;
}

void BandwidthPackage::SetNetworkType(const string& _networkType)
{
    m_networkType = _networkType;
    m_networkTypeHasBeenSet = true;
}

bool BandwidthPackage::NetworkTypeHasBeenSet() const
{
    return m_networkTypeHasBeenSet;
}

string BandwidthPackage::GetChargeType() const
{
    return m_chargeType;
}

void BandwidthPackage::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool BandwidthPackage::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

string BandwidthPackage::GetBandwidthPackageName() const
{
    return m_bandwidthPackageName;
}

void BandwidthPackage::SetBandwidthPackageName(const string& _bandwidthPackageName)
{
    m_bandwidthPackageName = _bandwidthPackageName;
    m_bandwidthPackageNameHasBeenSet = true;
}

bool BandwidthPackage::BandwidthPackageNameHasBeenSet() const
{
    return m_bandwidthPackageNameHasBeenSet;
}

string BandwidthPackage::GetCreatedTime() const
{
    return m_createdTime;
}

void BandwidthPackage::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool BandwidthPackage::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string BandwidthPackage::GetStatus() const
{
    return m_status;
}

void BandwidthPackage::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BandwidthPackage::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<Resource> BandwidthPackage::GetResourceSet() const
{
    return m_resourceSet;
}

void BandwidthPackage::SetResourceSet(const vector<Resource>& _resourceSet)
{
    m_resourceSet = _resourceSet;
    m_resourceSetHasBeenSet = true;
}

bool BandwidthPackage::ResourceSetHasBeenSet() const
{
    return m_resourceSetHasBeenSet;
}

int64_t BandwidthPackage::GetBandwidth() const
{
    return m_bandwidth;
}

void BandwidthPackage::SetBandwidth(const int64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool BandwidthPackage::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

string BandwidthPackage::GetEgress() const
{
    return m_egress;
}

void BandwidthPackage::SetEgress(const string& _egress)
{
    m_egress = _egress;
    m_egressHasBeenSet = true;
}

bool BandwidthPackage::EgressHasBeenSet() const
{
    return m_egressHasBeenSet;
}

string BandwidthPackage::GetDeadline() const
{
    return m_deadline;
}

void BandwidthPackage::SetDeadline(const string& _deadline)
{
    m_deadline = _deadline;
    m_deadlineHasBeenSet = true;
}

bool BandwidthPackage::DeadlineHasBeenSet() const
{
    return m_deadlineHasBeenSet;
}

