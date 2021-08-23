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

#include <tencentcloud/ecm/v20190719/model/ModuleCounter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

ModuleCounter::ModuleCounter() :
    m_iSPCounterSetHasBeenSet(false),
    m_provinceNumHasBeenSet(false),
    m_cityNumHasBeenSet(false),
    m_nodeNumHasBeenSet(false),
    m_instanceNumHasBeenSet(false)
{
}

CoreInternalOutcome ModuleCounter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ISPCounterSet") && !value["ISPCounterSet"].IsNull())
    {
        if (!value["ISPCounterSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModuleCounter.ISPCounterSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ISPCounterSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ISPCounter item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_iSPCounterSet.push_back(item);
        }
        m_iSPCounterSetHasBeenSet = true;
    }

    if (value.HasMember("ProvinceNum") && !value["ProvinceNum"].IsNull())
    {
        if (!value["ProvinceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModuleCounter.ProvinceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_provinceNum = value["ProvinceNum"].GetInt64();
        m_provinceNumHasBeenSet = true;
    }

    if (value.HasMember("CityNum") && !value["CityNum"].IsNull())
    {
        if (!value["CityNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModuleCounter.CityNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cityNum = value["CityNum"].GetInt64();
        m_cityNumHasBeenSet = true;
    }

    if (value.HasMember("NodeNum") && !value["NodeNum"].IsNull())
    {
        if (!value["NodeNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModuleCounter.NodeNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeNum = value["NodeNum"].GetInt64();
        m_nodeNumHasBeenSet = true;
    }

    if (value.HasMember("InstanceNum") && !value["InstanceNum"].IsNull())
    {
        if (!value["InstanceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModuleCounter.InstanceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceNum = value["InstanceNum"].GetInt64();
        m_instanceNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModuleCounter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iSPCounterSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ISPCounterSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_iSPCounterSet.begin(); itr != m_iSPCounterSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_provinceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProvinceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_provinceNum, allocator);
    }

    if (m_cityNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CityNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cityNum, allocator);
    }

    if (m_nodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeNum, allocator);
    }

    if (m_instanceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceNum, allocator);
    }

}


vector<ISPCounter> ModuleCounter::GetISPCounterSet() const
{
    return m_iSPCounterSet;
}

void ModuleCounter::SetISPCounterSet(const vector<ISPCounter>& _iSPCounterSet)
{
    m_iSPCounterSet = _iSPCounterSet;
    m_iSPCounterSetHasBeenSet = true;
}

bool ModuleCounter::ISPCounterSetHasBeenSet() const
{
    return m_iSPCounterSetHasBeenSet;
}

int64_t ModuleCounter::GetProvinceNum() const
{
    return m_provinceNum;
}

void ModuleCounter::SetProvinceNum(const int64_t& _provinceNum)
{
    m_provinceNum = _provinceNum;
    m_provinceNumHasBeenSet = true;
}

bool ModuleCounter::ProvinceNumHasBeenSet() const
{
    return m_provinceNumHasBeenSet;
}

int64_t ModuleCounter::GetCityNum() const
{
    return m_cityNum;
}

void ModuleCounter::SetCityNum(const int64_t& _cityNum)
{
    m_cityNum = _cityNum;
    m_cityNumHasBeenSet = true;
}

bool ModuleCounter::CityNumHasBeenSet() const
{
    return m_cityNumHasBeenSet;
}

int64_t ModuleCounter::GetNodeNum() const
{
    return m_nodeNum;
}

void ModuleCounter::SetNodeNum(const int64_t& _nodeNum)
{
    m_nodeNum = _nodeNum;
    m_nodeNumHasBeenSet = true;
}

bool ModuleCounter::NodeNumHasBeenSet() const
{
    return m_nodeNumHasBeenSet;
}

int64_t ModuleCounter::GetInstanceNum() const
{
    return m_instanceNum;
}

void ModuleCounter::SetInstanceNum(const int64_t& _instanceNum)
{
    m_instanceNum = _instanceNum;
    m_instanceNumHasBeenSet = true;
}

bool ModuleCounter::InstanceNumHasBeenSet() const
{
    return m_instanceNumHasBeenSet;
}

