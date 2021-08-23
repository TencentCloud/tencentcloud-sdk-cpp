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

#include <tencentcloud/cdb/v20170320/model/DBSwitchInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

DBSwitchInfo::DBSwitchInfo() :
    m_switchTimeHasBeenSet(false),
    m_switchTypeHasBeenSet(false)
{
}

CoreInternalOutcome DBSwitchInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SwitchTime") && !value["SwitchTime"].IsNull())
    {
        if (!value["SwitchTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBSwitchInfo.SwitchTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switchTime = string(value["SwitchTime"].GetString());
        m_switchTimeHasBeenSet = true;
    }

    if (value.HasMember("SwitchType") && !value["SwitchType"].IsNull())
    {
        if (!value["SwitchType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBSwitchInfo.SwitchType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switchType = string(value["SwitchType"].GetString());
        m_switchTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DBSwitchInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switchTime.c_str(), allocator).Move(), allocator);
    }

    if (m_switchTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switchType.c_str(), allocator).Move(), allocator);
    }

}


string DBSwitchInfo::GetSwitchTime() const
{
    return m_switchTime;
}

void DBSwitchInfo::SetSwitchTime(const string& _switchTime)
{
    m_switchTime = _switchTime;
    m_switchTimeHasBeenSet = true;
}

bool DBSwitchInfo::SwitchTimeHasBeenSet() const
{
    return m_switchTimeHasBeenSet;
}

string DBSwitchInfo::GetSwitchType() const
{
    return m_switchType;
}

void DBSwitchInfo::SetSwitchType(const string& _switchType)
{
    m_switchType = _switchType;
    m_switchTypeHasBeenSet = true;
}

bool DBSwitchInfo::SwitchTypeHasBeenSet() const
{
    return m_switchTypeHasBeenSet;
}

