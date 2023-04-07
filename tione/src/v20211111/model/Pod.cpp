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

#include <tencentcloud/tione/v20211111/model/Pod.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

Pod::Pod() :
    m_nameHasBeenSet(false),
    m_uidHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_phaseHasBeenSet(false),
    m_iPHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_containersHasBeenSet(false),
    m_containerInfosHasBeenSet(false)
{
}

CoreInternalOutcome Pod::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Pod.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Uid") && !value["Uid"].IsNull())
    {
        if (!value["Uid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Pod.Uid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uid = string(value["Uid"].GetString());
        m_uidHasBeenSet = true;
    }

    if (value.HasMember("ChargeType") && !value["ChargeType"].IsNull())
    {
        if (!value["ChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Pod.ChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeType = string(value["ChargeType"].GetString());
        m_chargeTypeHasBeenSet = true;
    }

    if (value.HasMember("Phase") && !value["Phase"].IsNull())
    {
        if (!value["Phase"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Pod.Phase` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phase = string(value["Phase"].GetString());
        m_phaseHasBeenSet = true;
    }

    if (value.HasMember("IP") && !value["IP"].IsNull())
    {
        if (!value["IP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Pod.IP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iP = string(value["IP"].GetString());
        m_iPHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Pod.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Containers") && !value["Containers"].IsNull())
    {
        if (!value["Containers"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Pod.Containers` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_containers.Deserialize(value["Containers"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_containersHasBeenSet = true;
    }

    if (value.HasMember("ContainerInfos") && !value["ContainerInfos"].IsNull())
    {
        if (!value["ContainerInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Pod.ContainerInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["ContainerInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Container item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_containerInfos.push_back(item);
        }
        m_containerInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Pod::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_uidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uid.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_phaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phase";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phase.c_str(), allocator).Move(), allocator);
    }

    if (m_iPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iP.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_containersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Containers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_containers.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_containerInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_containerInfos.begin(); itr != m_containerInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Pod::GetName() const
{
    return m_name;
}

void Pod::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Pod::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Pod::GetUid() const
{
    return m_uid;
}

void Pod::SetUid(const string& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool Pod::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

string Pod::GetChargeType() const
{
    return m_chargeType;
}

void Pod::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool Pod::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

string Pod::GetPhase() const
{
    return m_phase;
}

void Pod::SetPhase(const string& _phase)
{
    m_phase = _phase;
    m_phaseHasBeenSet = true;
}

bool Pod::PhaseHasBeenSet() const
{
    return m_phaseHasBeenSet;
}

string Pod::GetIP() const
{
    return m_iP;
}

void Pod::SetIP(const string& _iP)
{
    m_iP = _iP;
    m_iPHasBeenSet = true;
}

bool Pod::IPHasBeenSet() const
{
    return m_iPHasBeenSet;
}

string Pod::GetCreateTime() const
{
    return m_createTime;
}

void Pod::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Pod::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

Container Pod::GetContainers() const
{
    return m_containers;
}

void Pod::SetContainers(const Container& _containers)
{
    m_containers = _containers;
    m_containersHasBeenSet = true;
}

bool Pod::ContainersHasBeenSet() const
{
    return m_containersHasBeenSet;
}

vector<Container> Pod::GetContainerInfos() const
{
    return m_containerInfos;
}

void Pod::SetContainerInfos(const vector<Container>& _containerInfos)
{
    m_containerInfos = _containerInfos;
    m_containerInfosHasBeenSet = true;
}

bool Pod::ContainerInfosHasBeenSet() const
{
    return m_containerInfosHasBeenSet;
}

