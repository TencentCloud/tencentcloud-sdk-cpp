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

#include <tencentcloud/tcb/v20180608/model/UpgradePGInstanceToDedicatedRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

UpgradePGInstanceToDedicatedRequest::UpgradePGInstanceToDedicatedRequest() :
    m_envIdHasBeenSet(false),
    m_switchTagHasBeenSet(false),
    m_switchStartTimeHasBeenSet(false),
    m_switchEndTimeHasBeenSet(false),
    m_specCodeHasBeenSet(false),
    m_storageHasBeenSet(false)
{
}

string UpgradePGInstanceToDedicatedRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_switchTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchTag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_switchTag, allocator);
    }

    if (m_switchStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_switchStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_switchEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchEndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_switchEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_specCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_specCode.c_str(), allocator).Move(), allocator);
    }

    if (m_storageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_storage, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpgradePGInstanceToDedicatedRequest::GetEnvId() const
{
    return m_envId;
}

void UpgradePGInstanceToDedicatedRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool UpgradePGInstanceToDedicatedRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

int64_t UpgradePGInstanceToDedicatedRequest::GetSwitchTag() const
{
    return m_switchTag;
}

void UpgradePGInstanceToDedicatedRequest::SetSwitchTag(const int64_t& _switchTag)
{
    m_switchTag = _switchTag;
    m_switchTagHasBeenSet = true;
}

bool UpgradePGInstanceToDedicatedRequest::SwitchTagHasBeenSet() const
{
    return m_switchTagHasBeenSet;
}

string UpgradePGInstanceToDedicatedRequest::GetSwitchStartTime() const
{
    return m_switchStartTime;
}

void UpgradePGInstanceToDedicatedRequest::SetSwitchStartTime(const string& _switchStartTime)
{
    m_switchStartTime = _switchStartTime;
    m_switchStartTimeHasBeenSet = true;
}

bool UpgradePGInstanceToDedicatedRequest::SwitchStartTimeHasBeenSet() const
{
    return m_switchStartTimeHasBeenSet;
}

string UpgradePGInstanceToDedicatedRequest::GetSwitchEndTime() const
{
    return m_switchEndTime;
}

void UpgradePGInstanceToDedicatedRequest::SetSwitchEndTime(const string& _switchEndTime)
{
    m_switchEndTime = _switchEndTime;
    m_switchEndTimeHasBeenSet = true;
}

bool UpgradePGInstanceToDedicatedRequest::SwitchEndTimeHasBeenSet() const
{
    return m_switchEndTimeHasBeenSet;
}

string UpgradePGInstanceToDedicatedRequest::GetSpecCode() const
{
    return m_specCode;
}

void UpgradePGInstanceToDedicatedRequest::SetSpecCode(const string& _specCode)
{
    m_specCode = _specCode;
    m_specCodeHasBeenSet = true;
}

bool UpgradePGInstanceToDedicatedRequest::SpecCodeHasBeenSet() const
{
    return m_specCodeHasBeenSet;
}

uint64_t UpgradePGInstanceToDedicatedRequest::GetStorage() const
{
    return m_storage;
}

void UpgradePGInstanceToDedicatedRequest::SetStorage(const uint64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool UpgradePGInstanceToDedicatedRequest::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}


