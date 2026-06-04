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

#include <tencentcloud/cfw/v20190904/model/ModifyClusterFwBypassRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

ModifyClusterFwBypassRequest::ModifyClusterFwBypassRequest() :
    m_fwTypeHasBeenSet(false),
    m_ccnIdHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_natInsIdHasBeenSet(false)
{
}

string ModifyClusterFwBypassRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fwTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fwType.c_str(), allocator).Move(), allocator);
    }

    if (m_ccnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ccnId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enable, allocator);
    }

    if (m_natInsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatInsId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_natInsId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyClusterFwBypassRequest::GetFwType() const
{
    return m_fwType;
}

void ModifyClusterFwBypassRequest::SetFwType(const string& _fwType)
{
    m_fwType = _fwType;
    m_fwTypeHasBeenSet = true;
}

bool ModifyClusterFwBypassRequest::FwTypeHasBeenSet() const
{
    return m_fwTypeHasBeenSet;
}

string ModifyClusterFwBypassRequest::GetCcnId() const
{
    return m_ccnId;
}

void ModifyClusterFwBypassRequest::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool ModifyClusterFwBypassRequest::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

bool ModifyClusterFwBypassRequest::GetEnable() const
{
    return m_enable;
}

void ModifyClusterFwBypassRequest::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ModifyClusterFwBypassRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string ModifyClusterFwBypassRequest::GetNatInsId() const
{
    return m_natInsId;
}

void ModifyClusterFwBypassRequest::SetNatInsId(const string& _natInsId)
{
    m_natInsId = _natInsId;
    m_natInsIdHasBeenSet = true;
}

bool ModifyClusterFwBypassRequest::NatInsIdHasBeenSet() const
{
    return m_natInsIdHasBeenSet;
}


