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

#include <tencentcloud/cfw/v20190904/model/ModifyNatFwSwitchRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

ModifyNatFwSwitchRequest::ModifyNatFwSwitchRequest() :
    m_enableHasBeenSet(false),
    m_cfwInsIdListHasBeenSet(false),
    m_subnetIdListHasBeenSet(false),
    m_routeTableIdListHasBeenSet(false)
{
}

string ModifyNatFwSwitchRequest::ToJsonString() const
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

    if (m_cfwInsIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CfwInsIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cfwInsIdList.begin(); itr != m_cfwInsIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_subnetIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subnetIdList.begin(); itr != m_subnetIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_routeTableIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteTableIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_routeTableIdList.begin(); itr != m_routeTableIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyNatFwSwitchRequest::GetEnable() const
{
    return m_enable;
}

void ModifyNatFwSwitchRequest::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ModifyNatFwSwitchRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

vector<string> ModifyNatFwSwitchRequest::GetCfwInsIdList() const
{
    return m_cfwInsIdList;
}

void ModifyNatFwSwitchRequest::SetCfwInsIdList(const vector<string>& _cfwInsIdList)
{
    m_cfwInsIdList = _cfwInsIdList;
    m_cfwInsIdListHasBeenSet = true;
}

bool ModifyNatFwSwitchRequest::CfwInsIdListHasBeenSet() const
{
    return m_cfwInsIdListHasBeenSet;
}

vector<string> ModifyNatFwSwitchRequest::GetSubnetIdList() const
{
    return m_subnetIdList;
}

void ModifyNatFwSwitchRequest::SetSubnetIdList(const vector<string>& _subnetIdList)
{
    m_subnetIdList = _subnetIdList;
    m_subnetIdListHasBeenSet = true;
}

bool ModifyNatFwSwitchRequest::SubnetIdListHasBeenSet() const
{
    return m_subnetIdListHasBeenSet;
}

vector<string> ModifyNatFwSwitchRequest::GetRouteTableIdList() const
{
    return m_routeTableIdList;
}

void ModifyNatFwSwitchRequest::SetRouteTableIdList(const vector<string>& _routeTableIdList)
{
    m_routeTableIdList = _routeTableIdList;
    m_routeTableIdListHasBeenSet = true;
}

bool ModifyNatFwSwitchRequest::RouteTableIdListHasBeenSet() const
{
    return m_routeTableIdListHasBeenSet;
}


