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

#include <tencentcloud/ecm/v20190719/model/SecurityGroupAssociationStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

SecurityGroupAssociationStatistics::SecurityGroupAssociationStatistics() :
    m_securityGroupIdHasBeenSet(false),
    m_eCMHasBeenSet(false),
    m_moduleHasBeenSet(false),
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

    if (value.HasMember("ECM") && !value["ECM"].IsNull())
    {
        if (!value["ECM"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupAssociationStatistics.ECM` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eCM = value["ECM"].GetInt64();
        m_eCMHasBeenSet = true;
    }

    if (value.HasMember("Module") && !value["Module"].IsNull())
    {
        if (!value["Module"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupAssociationStatistics.Module` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_module = value["Module"].GetInt64();
        m_moduleHasBeenSet = true;
    }

    if (value.HasMember("ENI") && !value["ENI"].IsNull())
    {
        if (!value["ENI"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupAssociationStatistics.ENI` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eNI = value["ENI"].GetInt64();
        m_eNIHasBeenSet = true;
    }

    if (value.HasMember("SG") && !value["SG"].IsNull())
    {
        if (!value["SG"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupAssociationStatistics.SG` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sG = value["SG"].GetInt64();
        m_sGHasBeenSet = true;
    }

    if (value.HasMember("CLB") && !value["CLB"].IsNull())
    {
        if (!value["CLB"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupAssociationStatistics.CLB` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cLB = value["CLB"].GetInt64();
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
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupAssociationStatistics.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
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

    if (m_eCMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ECM";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eCM, allocator);
    }

    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_module, allocator);
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

int64_t SecurityGroupAssociationStatistics::GetECM() const
{
    return m_eCM;
}

void SecurityGroupAssociationStatistics::SetECM(const int64_t& _eCM)
{
    m_eCM = _eCM;
    m_eCMHasBeenSet = true;
}

bool SecurityGroupAssociationStatistics::ECMHasBeenSet() const
{
    return m_eCMHasBeenSet;
}

int64_t SecurityGroupAssociationStatistics::GetModule() const
{
    return m_module;
}

void SecurityGroupAssociationStatistics::SetModule(const int64_t& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool SecurityGroupAssociationStatistics::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

int64_t SecurityGroupAssociationStatistics::GetENI() const
{
    return m_eNI;
}

void SecurityGroupAssociationStatistics::SetENI(const int64_t& _eNI)
{
    m_eNI = _eNI;
    m_eNIHasBeenSet = true;
}

bool SecurityGroupAssociationStatistics::ENIHasBeenSet() const
{
    return m_eNIHasBeenSet;
}

int64_t SecurityGroupAssociationStatistics::GetSG() const
{
    return m_sG;
}

void SecurityGroupAssociationStatistics::SetSG(const int64_t& _sG)
{
    m_sG = _sG;
    m_sGHasBeenSet = true;
}

bool SecurityGroupAssociationStatistics::SGHasBeenSet() const
{
    return m_sGHasBeenSet;
}

int64_t SecurityGroupAssociationStatistics::GetCLB() const
{
    return m_cLB;
}

void SecurityGroupAssociationStatistics::SetCLB(const int64_t& _cLB)
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

int64_t SecurityGroupAssociationStatistics::GetTotalCount() const
{
    return m_totalCount;
}

void SecurityGroupAssociationStatistics::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool SecurityGroupAssociationStatistics::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

