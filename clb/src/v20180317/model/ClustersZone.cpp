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

#include <tencentcloud/clb/v20180317/model/ClustersZone.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ClustersZone::ClustersZone() :
    m_masterZoneHasBeenSet(false),
    m_slaveZoneHasBeenSet(false)
{
}

CoreInternalOutcome ClustersZone::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MasterZone") && !value["MasterZone"].IsNull())
    {
        if (!value["MasterZone"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClustersZone.MasterZone` is not array type"));

        const rapidjson::Value &tmpValue = value["MasterZone"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_masterZone.push_back((*itr).GetString());
        }
        m_masterZoneHasBeenSet = true;
    }

    if (value.HasMember("SlaveZone") && !value["SlaveZone"].IsNull())
    {
        if (!value["SlaveZone"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClustersZone.SlaveZone` is not array type"));

        const rapidjson::Value &tmpValue = value["SlaveZone"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_slaveZone.push_back((*itr).GetString());
        }
        m_slaveZoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClustersZone::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_masterZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_masterZone.begin(); itr != m_masterZone.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_slaveZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaveZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_slaveZone.begin(); itr != m_slaveZone.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> ClustersZone::GetMasterZone() const
{
    return m_masterZone;
}

void ClustersZone::SetMasterZone(const vector<string>& _masterZone)
{
    m_masterZone = _masterZone;
    m_masterZoneHasBeenSet = true;
}

bool ClustersZone::MasterZoneHasBeenSet() const
{
    return m_masterZoneHasBeenSet;
}

vector<string> ClustersZone::GetSlaveZone() const
{
    return m_slaveZone;
}

void ClustersZone::SetSlaveZone(const vector<string>& _slaveZone)
{
    m_slaveZone = _slaveZone;
    m_slaveZoneHasBeenSet = true;
}

bool ClustersZone::SlaveZoneHasBeenSet() const
{
    return m_slaveZoneHasBeenSet;
}

