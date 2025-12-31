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

#include <tencentcloud/cfw/v20190904/model/ModifyClusterVpcFwSwitchRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

ModifyClusterVpcFwSwitchRequest::ModifyClusterVpcFwSwitchRequest() :
    m_enableHasBeenSet(false),
    m_ccnSwitchHasBeenSet(false)
{
}

string ModifyClusterVpcFwSwitchRequest::ToJsonString() const
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

    if (m_ccnSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ccnSwitch.begin(); itr != m_ccnSwitch.end(); ++itr, ++i)
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


int64_t ModifyClusterVpcFwSwitchRequest::GetEnable() const
{
    return m_enable;
}

void ModifyClusterVpcFwSwitchRequest::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ModifyClusterVpcFwSwitchRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

vector<CcnSwitchInfo> ModifyClusterVpcFwSwitchRequest::GetCcnSwitch() const
{
    return m_ccnSwitch;
}

void ModifyClusterVpcFwSwitchRequest::SetCcnSwitch(const vector<CcnSwitchInfo>& _ccnSwitch)
{
    m_ccnSwitch = _ccnSwitch;
    m_ccnSwitchHasBeenSet = true;
}

bool ModifyClusterVpcFwSwitchRequest::CcnSwitchHasBeenSet() const
{
    return m_ccnSwitchHasBeenSet;
}


