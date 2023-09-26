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

#include <tencentcloud/cfw/v20190904/model/ModifyEdgeIpSwitchRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

ModifyEdgeIpSwitchRequest::ModifyEdgeIpSwitchRequest() :
    m_enableHasBeenSet(false),
    m_edgeIpSwitchLstHasBeenSet(false),
    m_autoChooseSubnetHasBeenSet(false),
    m_switchModeHasBeenSet(false)
{
}

string ModifyEdgeIpSwitchRequest::ToJsonString() const
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

    if (m_edgeIpSwitchLstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeIpSwitchLst";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_edgeIpSwitchLst.begin(); itr != m_edgeIpSwitchLst.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_autoChooseSubnetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoChooseSubnet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoChooseSubnet, allocator);
    }

    if (m_switchModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_switchMode, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyEdgeIpSwitchRequest::GetEnable() const
{
    return m_enable;
}

void ModifyEdgeIpSwitchRequest::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ModifyEdgeIpSwitchRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

vector<EdgeIpSwitch> ModifyEdgeIpSwitchRequest::GetEdgeIpSwitchLst() const
{
    return m_edgeIpSwitchLst;
}

void ModifyEdgeIpSwitchRequest::SetEdgeIpSwitchLst(const vector<EdgeIpSwitch>& _edgeIpSwitchLst)
{
    m_edgeIpSwitchLst = _edgeIpSwitchLst;
    m_edgeIpSwitchLstHasBeenSet = true;
}

bool ModifyEdgeIpSwitchRequest::EdgeIpSwitchLstHasBeenSet() const
{
    return m_edgeIpSwitchLstHasBeenSet;
}

int64_t ModifyEdgeIpSwitchRequest::GetAutoChooseSubnet() const
{
    return m_autoChooseSubnet;
}

void ModifyEdgeIpSwitchRequest::SetAutoChooseSubnet(const int64_t& _autoChooseSubnet)
{
    m_autoChooseSubnet = _autoChooseSubnet;
    m_autoChooseSubnetHasBeenSet = true;
}

bool ModifyEdgeIpSwitchRequest::AutoChooseSubnetHasBeenSet() const
{
    return m_autoChooseSubnetHasBeenSet;
}

int64_t ModifyEdgeIpSwitchRequest::GetSwitchMode() const
{
    return m_switchMode;
}

void ModifyEdgeIpSwitchRequest::SetSwitchMode(const int64_t& _switchMode)
{
    m_switchMode = _switchMode;
    m_switchModeHasBeenSet = true;
}

bool ModifyEdgeIpSwitchRequest::SwitchModeHasBeenSet() const
{
    return m_switchModeHasBeenSet;
}


