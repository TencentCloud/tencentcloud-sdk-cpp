/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/tcb/v20180608/model/VPCWhiteListConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

VPCWhiteListConfig::VPCWhiteListConfig() :
    m_actionHasBeenSet(false),
    m_vPCsHasBeenSet(false)
{
}

CoreInternalOutcome VPCWhiteListConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VPCWhiteListConfig.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("VPCs") && !value["VPCs"].IsNull())
    {
        if (!value["VPCs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VPCWhiteListConfig.VPCs` is not array type"));

        const rapidjson::Value &tmpValue = value["VPCs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VPCInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vPCs.push_back(item);
        }
        m_vPCsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VPCWhiteListConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_vPCsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VPCs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vPCs.begin(); itr != m_vPCs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string VPCWhiteListConfig::GetAction() const
{
    return m_action;
}

void VPCWhiteListConfig::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool VPCWhiteListConfig::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

vector<VPCInfo> VPCWhiteListConfig::GetVPCs() const
{
    return m_vPCs;
}

void VPCWhiteListConfig::SetVPCs(const vector<VPCInfo>& _vPCs)
{
    m_vPCs = _vPCs;
    m_vPCsHasBeenSet = true;
}

bool VPCWhiteListConfig::VPCsHasBeenSet() const
{
    return m_vPCsHasBeenSet;
}

