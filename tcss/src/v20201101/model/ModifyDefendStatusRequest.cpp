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

#include <tencentcloud/tcss/v20201101/model/ModifyDefendStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ModifyDefendStatusRequest::ModifyDefendStatusRequest() :
    m_switchOnHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_isAllHasBeenSet(false),
    m_instanceIDsHasBeenSet(false)
{
}

string ModifyDefendStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_switchOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchOn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_switchOn, allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_isAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAll";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isAll, allocator);
    }

    if (m_instanceIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIDs.begin(); itr != m_instanceIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


bool ModifyDefendStatusRequest::GetSwitchOn() const
{
    return m_switchOn;
}

void ModifyDefendStatusRequest::SetSwitchOn(const bool& _switchOn)
{
    m_switchOn = _switchOn;
    m_switchOnHasBeenSet = true;
}

bool ModifyDefendStatusRequest::SwitchOnHasBeenSet() const
{
    return m_switchOnHasBeenSet;
}

string ModifyDefendStatusRequest::GetInstanceType() const
{
    return m_instanceType;
}

void ModifyDefendStatusRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool ModifyDefendStatusRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

bool ModifyDefendStatusRequest::GetIsAll() const
{
    return m_isAll;
}

void ModifyDefendStatusRequest::SetIsAll(const bool& _isAll)
{
    m_isAll = _isAll;
    m_isAllHasBeenSet = true;
}

bool ModifyDefendStatusRequest::IsAllHasBeenSet() const
{
    return m_isAllHasBeenSet;
}

vector<string> ModifyDefendStatusRequest::GetInstanceIDs() const
{
    return m_instanceIDs;
}

void ModifyDefendStatusRequest::SetInstanceIDs(const vector<string>& _instanceIDs)
{
    m_instanceIDs = _instanceIDs;
    m_instanceIDsHasBeenSet = true;
}

bool ModifyDefendStatusRequest::InstanceIDsHasBeenSet() const
{
    return m_instanceIDsHasBeenSet;
}


