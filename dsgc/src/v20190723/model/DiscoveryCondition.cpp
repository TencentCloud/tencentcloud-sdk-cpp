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

#include <tencentcloud/dsgc/v20190723/model/DiscoveryCondition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DiscoveryCondition::DiscoveryCondition() :
    m_rDBInstancesHasBeenSet(false),
    m_cOSInstancesHasBeenSet(false),
    m_nOSQLInstancesHasBeenSet(false),
    m_eSInstancesHasBeenSet(false)
{
}

CoreInternalOutcome DiscoveryCondition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RDBInstances") && !value["RDBInstances"].IsNull())
    {
        if (!value["RDBInstances"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiscoveryCondition.RDBInstances` is not array type"));

        const rapidjson::Value &tmpValue = value["RDBInstances"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RDBInstance item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rDBInstances.push_back(item);
        }
        m_rDBInstancesHasBeenSet = true;
    }

    if (value.HasMember("COSInstances") && !value["COSInstances"].IsNull())
    {
        if (!value["COSInstances"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiscoveryCondition.COSInstances` is not array type"));

        const rapidjson::Value &tmpValue = value["COSInstances"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            COSInstance item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cOSInstances.push_back(item);
        }
        m_cOSInstancesHasBeenSet = true;
    }

    if (value.HasMember("NOSQLInstances") && !value["NOSQLInstances"].IsNull())
    {
        if (!value["NOSQLInstances"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiscoveryCondition.NOSQLInstances` is not array type"));

        const rapidjson::Value &tmpValue = value["NOSQLInstances"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NOSQLInstance item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nOSQLInstances.push_back(item);
        }
        m_nOSQLInstancesHasBeenSet = true;
    }

    if (value.HasMember("ESInstances") && !value["ESInstances"].IsNull())
    {
        if (!value["ESInstances"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiscoveryCondition.ESInstances` is not array type"));

        const rapidjson::Value &tmpValue = value["ESInstances"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ESInstance item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_eSInstances.push_back(item);
        }
        m_eSInstancesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiscoveryCondition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rDBInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RDBInstances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rDBInstances.begin(); itr != m_rDBInstances.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cOSInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "COSInstances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cOSInstances.begin(); itr != m_cOSInstances.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_nOSQLInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NOSQLInstances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nOSQLInstances.begin(); itr != m_nOSQLInstances.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_eSInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ESInstances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_eSInstances.begin(); itr != m_eSInstances.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<RDBInstance> DiscoveryCondition::GetRDBInstances() const
{
    return m_rDBInstances;
}

void DiscoveryCondition::SetRDBInstances(const vector<RDBInstance>& _rDBInstances)
{
    m_rDBInstances = _rDBInstances;
    m_rDBInstancesHasBeenSet = true;
}

bool DiscoveryCondition::RDBInstancesHasBeenSet() const
{
    return m_rDBInstancesHasBeenSet;
}

vector<COSInstance> DiscoveryCondition::GetCOSInstances() const
{
    return m_cOSInstances;
}

void DiscoveryCondition::SetCOSInstances(const vector<COSInstance>& _cOSInstances)
{
    m_cOSInstances = _cOSInstances;
    m_cOSInstancesHasBeenSet = true;
}

bool DiscoveryCondition::COSInstancesHasBeenSet() const
{
    return m_cOSInstancesHasBeenSet;
}

vector<NOSQLInstance> DiscoveryCondition::GetNOSQLInstances() const
{
    return m_nOSQLInstances;
}

void DiscoveryCondition::SetNOSQLInstances(const vector<NOSQLInstance>& _nOSQLInstances)
{
    m_nOSQLInstances = _nOSQLInstances;
    m_nOSQLInstancesHasBeenSet = true;
}

bool DiscoveryCondition::NOSQLInstancesHasBeenSet() const
{
    return m_nOSQLInstancesHasBeenSet;
}

vector<ESInstance> DiscoveryCondition::GetESInstances() const
{
    return m_eSInstances;
}

void DiscoveryCondition::SetESInstances(const vector<ESInstance>& _eSInstances)
{
    m_eSInstances = _eSInstances;
    m_eSInstancesHasBeenSet = true;
}

bool DiscoveryCondition::ESInstancesHasBeenSet() const
{
    return m_eSInstancesHasBeenSet;
}

