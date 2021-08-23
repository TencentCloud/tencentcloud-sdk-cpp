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

#include <tencentcloud/mariadb/v20170312/model/InstanceSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

InstanceSpec::InstanceSpec() :
    m_machineHasBeenSet(false),
    m_specInfosHasBeenSet(false)
{
}

CoreInternalOutcome InstanceSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Machine") && !value["Machine"].IsNull())
    {
        if (!value["Machine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSpec.Machine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machine = string(value["Machine"].GetString());
        m_machineHasBeenSet = true;
    }

    if (value.HasMember("SpecInfos") && !value["SpecInfos"].IsNull())
    {
        if (!value["SpecInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceSpec.SpecInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["SpecInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SpecConfigInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_specInfos.push_back(item);
        }
        m_specInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_machineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Machine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machine.c_str(), allocator).Move(), allocator);
    }

    if (m_specInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_specInfos.begin(); itr != m_specInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string InstanceSpec::GetMachine() const
{
    return m_machine;
}

void InstanceSpec::SetMachine(const string& _machine)
{
    m_machine = _machine;
    m_machineHasBeenSet = true;
}

bool InstanceSpec::MachineHasBeenSet() const
{
    return m_machineHasBeenSet;
}

vector<SpecConfigInfo> InstanceSpec::GetSpecInfos() const
{
    return m_specInfos;
}

void InstanceSpec::SetSpecInfos(const vector<SpecConfigInfo>& _specInfos)
{
    m_specInfos = _specInfos;
    m_specInfosHasBeenSet = true;
}

bool InstanceSpec::SpecInfosHasBeenSet() const
{
    return m_specInfosHasBeenSet;
}

