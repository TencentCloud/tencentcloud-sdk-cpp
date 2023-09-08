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

#include <tencentcloud/cfw/v20190904/model/ModifyFwGroupSwitchRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

ModifyFwGroupSwitchRequest::ModifyFwGroupSwitchRequest() :
    m_enableHasBeenSet(false),
    m_allSwitchHasBeenSet(false),
    m_switchListHasBeenSet(false)
{
}

string ModifyFwGroupSwitchRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enable, allocator);
    }

    if (m_allSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allSwitch, allocator);
    }

    if (m_switchListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_switchList.begin(); itr != m_switchList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyFwGroupSwitchRequest::GetEnable() const
{
    return m_enable;
}

void ModifyFwGroupSwitchRequest::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ModifyFwGroupSwitchRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

int64_t ModifyFwGroupSwitchRequest::GetAllSwitch() const
{
    return m_allSwitch;
}

void ModifyFwGroupSwitchRequest::SetAllSwitch(const int64_t& _allSwitch)
{
    m_allSwitch = _allSwitch;
    m_allSwitchHasBeenSet = true;
}

bool ModifyFwGroupSwitchRequest::AllSwitchHasBeenSet() const
{
    return m_allSwitchHasBeenSet;
}

vector<FwGroupSwitch> ModifyFwGroupSwitchRequest::GetSwitchList() const
{
    return m_switchList;
}

void ModifyFwGroupSwitchRequest::SetSwitchList(const vector<FwGroupSwitch>& _switchList)
{
    m_switchList = _switchList;
    m_switchListHasBeenSet = true;
}

bool ModifyFwGroupSwitchRequest::SwitchListHasBeenSet() const
{
    return m_switchListHasBeenSet;
}


