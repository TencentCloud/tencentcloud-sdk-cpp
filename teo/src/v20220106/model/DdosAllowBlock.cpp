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

#include <tencentcloud/teo/v20220106/model/DdosAllowBlock.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

DdosAllowBlock::DdosAllowBlock() :
    m_switchHasBeenSet(false),
    m_userAllowBlockIpHasBeenSet(false)
{
}

CoreInternalOutcome DdosAllowBlock::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DdosAllowBlock.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("UserAllowBlockIp") && !value["UserAllowBlockIp"].IsNull())
    {
        if (!value["UserAllowBlockIp"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DdosAllowBlock.UserAllowBlockIp` is not array type"));

        const rapidjson::Value &tmpValue = value["UserAllowBlockIp"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DDoSUserAllowBlockIP item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_userAllowBlockIp.push_back(item);
        }
        m_userAllowBlockIpHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DdosAllowBlock::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_userAllowBlockIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAllowBlockIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_userAllowBlockIp.begin(); itr != m_userAllowBlockIp.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DdosAllowBlock::GetSwitch() const
{
    return m_switch;
}

void DdosAllowBlock::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool DdosAllowBlock::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

vector<DDoSUserAllowBlockIP> DdosAllowBlock::GetUserAllowBlockIp() const
{
    return m_userAllowBlockIp;
}

void DdosAllowBlock::SetUserAllowBlockIp(const vector<DDoSUserAllowBlockIP>& _userAllowBlockIp)
{
    m_userAllowBlockIp = _userAllowBlockIp;
    m_userAllowBlockIpHasBeenSet = true;
}

bool DdosAllowBlock::UserAllowBlockIpHasBeenSet() const
{
    return m_userAllowBlockIpHasBeenSet;
}

