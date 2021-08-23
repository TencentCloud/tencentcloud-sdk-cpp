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

#include <tencentcloud/dcdb/v20180411/model/SpecConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

SpecConfig::SpecConfig() :
    m_machineHasBeenSet(false),
    m_specConfigInfosHasBeenSet(false)
{
}

CoreInternalOutcome SpecConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Machine") && !value["Machine"].IsNull())
    {
        if (!value["Machine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecConfig.Machine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machine = string(value["Machine"].GetString());
        m_machineHasBeenSet = true;
    }

    if (value.HasMember("SpecConfigInfos") && !value["SpecConfigInfos"].IsNull())
    {
        if (!value["SpecConfigInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SpecConfig.SpecConfigInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["SpecConfigInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SpecConfigInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_specConfigInfos.push_back(item);
        }
        m_specConfigInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpecConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_machineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Machine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machine.c_str(), allocator).Move(), allocator);
    }

    if (m_specConfigInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecConfigInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_specConfigInfos.begin(); itr != m_specConfigInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SpecConfig::GetMachine() const
{
    return m_machine;
}

void SpecConfig::SetMachine(const string& _machine)
{
    m_machine = _machine;
    m_machineHasBeenSet = true;
}

bool SpecConfig::MachineHasBeenSet() const
{
    return m_machineHasBeenSet;
}

vector<SpecConfigInfo> SpecConfig::GetSpecConfigInfos() const
{
    return m_specConfigInfos;
}

void SpecConfig::SetSpecConfigInfos(const vector<SpecConfigInfo>& _specConfigInfos)
{
    m_specConfigInfos = _specConfigInfos;
    m_specConfigInfosHasBeenSet = true;
}

bool SpecConfig::SpecConfigInfosHasBeenSet() const
{
    return m_specConfigInfosHasBeenSet;
}

