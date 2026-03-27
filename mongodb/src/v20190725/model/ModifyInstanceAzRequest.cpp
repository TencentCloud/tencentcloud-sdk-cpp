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

#include <tencentcloud/mongodb/v20190725/model/ModifyInstanceAzRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

ModifyInstanceAzRequest::ModifyInstanceAzRequest() :
    m_instanceIdHasBeenSet(false),
    m_primaryNodeZoneHasBeenSet(false),
    m_secondaryNodeZoneHasBeenSet(false),
    m_hiddenNodeZoneHasBeenSet(false),
    m_readonlyNodeZoneHasBeenSet(false),
    m_inMaintenanceHasBeenSet(false)
{
}

string ModifyInstanceAzRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_primaryNodeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrimaryNodeZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_primaryNodeZone.c_str(), allocator).Move(), allocator);
    }

    if (m_secondaryNodeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondaryNodeZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_secondaryNodeZone.begin(); itr != m_secondaryNodeZone.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_hiddenNodeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HiddenNodeZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hiddenNodeZone.c_str(), allocator).Move(), allocator);
    }

    if (m_readonlyNodeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadonlyNodeZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_readonlyNodeZone.begin(); itr != m_readonlyNodeZone.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_inMaintenanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InMaintenance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_inMaintenance, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyInstanceAzRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyInstanceAzRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyInstanceAzRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyInstanceAzRequest::GetPrimaryNodeZone() const
{
    return m_primaryNodeZone;
}

void ModifyInstanceAzRequest::SetPrimaryNodeZone(const string& _primaryNodeZone)
{
    m_primaryNodeZone = _primaryNodeZone;
    m_primaryNodeZoneHasBeenSet = true;
}

bool ModifyInstanceAzRequest::PrimaryNodeZoneHasBeenSet() const
{
    return m_primaryNodeZoneHasBeenSet;
}

vector<string> ModifyInstanceAzRequest::GetSecondaryNodeZone() const
{
    return m_secondaryNodeZone;
}

void ModifyInstanceAzRequest::SetSecondaryNodeZone(const vector<string>& _secondaryNodeZone)
{
    m_secondaryNodeZone = _secondaryNodeZone;
    m_secondaryNodeZoneHasBeenSet = true;
}

bool ModifyInstanceAzRequest::SecondaryNodeZoneHasBeenSet() const
{
    return m_secondaryNodeZoneHasBeenSet;
}

string ModifyInstanceAzRequest::GetHiddenNodeZone() const
{
    return m_hiddenNodeZone;
}

void ModifyInstanceAzRequest::SetHiddenNodeZone(const string& _hiddenNodeZone)
{
    m_hiddenNodeZone = _hiddenNodeZone;
    m_hiddenNodeZoneHasBeenSet = true;
}

bool ModifyInstanceAzRequest::HiddenNodeZoneHasBeenSet() const
{
    return m_hiddenNodeZoneHasBeenSet;
}

vector<string> ModifyInstanceAzRequest::GetReadonlyNodeZone() const
{
    return m_readonlyNodeZone;
}

void ModifyInstanceAzRequest::SetReadonlyNodeZone(const vector<string>& _readonlyNodeZone)
{
    m_readonlyNodeZone = _readonlyNodeZone;
    m_readonlyNodeZoneHasBeenSet = true;
}

bool ModifyInstanceAzRequest::ReadonlyNodeZoneHasBeenSet() const
{
    return m_readonlyNodeZoneHasBeenSet;
}

uint64_t ModifyInstanceAzRequest::GetInMaintenance() const
{
    return m_inMaintenance;
}

void ModifyInstanceAzRequest::SetInMaintenance(const uint64_t& _inMaintenance)
{
    m_inMaintenance = _inMaintenance;
    m_inMaintenanceHasBeenSet = true;
}

bool ModifyInstanceAzRequest::InMaintenanceHasBeenSet() const
{
    return m_inMaintenanceHasBeenSet;
}


