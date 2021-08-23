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

#include <tencentcloud/vpc/v20170312/model/SecurityGroupAssociationStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

SecurityGroupAssociationStatistics::SecurityGroupAssociationStatistics() :
    m_securityGroupIdHasBeenSet(false),
    m_cVMHasBeenSet(false),
    m_cDBHasBeenSet(false),
    m_eNIHasBeenSet(false),
    m_sGHasBeenSet(false),
    m_cLBHasBeenSet(false),
    m_instanceStatisticsHasBeenSet(false),
    m_totalCountHasBeenSet(false)
{
}

CoreInternalOutcome SecurityGroupAssociationStatistics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SecurityGroupId") && !value["SecurityGroupId"].IsNull())
    {
        if (!value["SecurityGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupAssociationStatistics.SecurityGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityGroupId = string(value["SecurityGroupId"].GetString());
        m_securityGroupIdHasBeenSet = true;
    }

    if (value.HasMember("CVM") && !value["CVM"].IsNull())
    {
        if (!value["CVM"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupAssociationStatistics.CVM` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cVM = value["CVM"].GetUint64();
        m_cVMHasBeenSet = true;
    }

    if (value.HasMember("CDB") && !value["CDB"].IsNull())
    {
        if (!value["CDB"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupAssociationStatistics.CDB` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cDB = value["CDB"].GetUint64();
        m_cDBHasBeenSet = true;
    }

    if (value.HasMember("ENI") && !value["ENI"].IsNull())
    {
        if (!value["ENI"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupAssociationStatistics.ENI` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eNI = value["ENI"].GetUint64();
        m_eNIHasBeenSet = true;
    }

    if (value.HasMember("SG") && !value["SG"].IsNull())
    {
        if (!value["SG"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupAssociationStatistics.SG` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sG = value["SG"].GetUint64();
        m_sGHasBeenSet = true;
    }

    if (value.HasMember("CLB") && !value["CLB"].IsNull())
    {
        if (!value["CLB"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupAssociationStatistics.CLB` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cLB = value["CLB"].GetUint64();
        m_cLBHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatistics") && !value["InstanceStatistics"].IsNull())
    {
        if (!value["InstanceStatistics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecurityGroupAssociationStatistics.InstanceStatistics` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceStatistics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceStatistic item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceStatistics.push_back(item);
        }
        m_instanceStatisticsHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupAssociationStatistics.TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityGroupAssociationStatistics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_securityGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_securityGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_cVMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVM";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cVM, allocator);
    }

    if (m_cDBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CDB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cDB, allocator);
    }

    if (m_eNIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ENI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eNI, allocator);
    }

    if (m_sGHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SG";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sG, allocator);
    }

    if (m_cLBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CLB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cLB, allocator);
    }

    if (m_instanceStatisticsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatistics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceStatistics.begin(); itr != m_instanceStatistics.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

}


string SecurityGroupAssociationStatistics::GetSecurityGroupId() const
{
    return m_securityGroupId;
}

void SecurityGroupAssociationStatistics::SetSecurityGroupId(const string& _securityGroupId)
{
    m_securityGroupId = _securityGroupId;
    m_securityGroupIdHasBeenSet = true;
}

bool SecurityGroupAssociationStatistics::SecurityGroupIdHasBeenSet() const
{
    return m_securityGroupIdHasBeenSet;
}

uint64_t SecurityGroupAssociationStatistics::GetCVM() const
{
    return m_cVM;
}

void SecurityGroupAssociationStatistics::SetCVM(const uint64_t& _cVM)
{
    m_cVM = _cVM;
    m_cVMHasBeenSet = true;
}

bool SecurityGroupAssociationStatistics::CVMHasBeenSet() const
{
    return m_cVMHasBeenSet;
}

uint64_t SecurityGroupAssociationStatistics::GetCDB() const
{
    return m_cDB;
}

void SecurityGroupAssociationStatistics::SetCDB(const uint64_t& _cDB)
{
    m_cDB = _cDB;
    m_cDBHasBeenSet = true;
}

bool SecurityGroupAssociationStatistics::CDBHasBeenSet() const
{
    return m_cDBHasBeenSet;
}

uint64_t SecurityGroupAssociationStatistics::GetENI() const
{
    return m_eNI;
}

void SecurityGroupAssociationStatistics::SetENI(const uint64_t& _eNI)
{
    m_eNI = _eNI;
    m_eNIHasBeenSet = true;
}

bool SecurityGroupAssociationStatistics::ENIHasBeenSet() const
{
    return m_eNIHasBeenSet;
}

uint64_t SecurityGroupAssociationStatistics::GetSG() const
{
    return m_sG;
}

void SecurityGroupAssociationStatistics::SetSG(const uint64_t& _sG)
{
    m_sG = _sG;
    m_sGHasBeenSet = true;
}

bool SecurityGroupAssociationStatistics::SGHasBeenSet() const
{
    return m_sGHasBeenSet;
}

uint64_t SecurityGroupAssociationStatistics::GetCLB() const
{
    return m_cLB;
}

void SecurityGroupAssociationStatistics::SetCLB(const uint64_t& _cLB)
{
    m_cLB = _cLB;
    m_cLBHasBeenSet = true;
}

bool SecurityGroupAssociationStatistics::CLBHasBeenSet() const
{
    return m_cLBHasBeenSet;
}

vector<InstanceStatistic> SecurityGroupAssociationStatistics::GetInstanceStatistics() const
{
    return m_instanceStatistics;
}

void SecurityGroupAssociationStatistics::SetInstanceStatistics(const vector<InstanceStatistic>& _instanceStatistics)
{
    m_instanceStatistics = _instanceStatistics;
    m_instanceStatisticsHasBeenSet = true;
}

bool SecurityGroupAssociationStatistics::InstanceStatisticsHasBeenSet() const
{
    return m_instanceStatisticsHasBeenSet;
}

uint64_t SecurityGroupAssociationStatistics::GetTotalCount() const
{
    return m_totalCount;
}

void SecurityGroupAssociationStatistics::SetTotalCount(const uint64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool SecurityGroupAssociationStatistics::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

