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

#include <tencentcloud/tcr/v20190924/model/RenewInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

RenewInstanceRequest::RenewInstanceRequest() :
    m_registryIdHasBeenSet(false),
    m_registryChargePrepaidHasBeenSet(false),
    m_flagHasBeenSet(false)
{
}

string RenewInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_registryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_registryChargePrepaidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_registryChargePrepaid.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_flagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Flag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_flag, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RenewInstanceRequest::GetRegistryId() const
{
    return m_registryId;
}

void RenewInstanceRequest::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool RenewInstanceRequest::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

RegistryChargePrepaid RenewInstanceRequest::GetRegistryChargePrepaid() const
{
    return m_registryChargePrepaid;
}

void RenewInstanceRequest::SetRegistryChargePrepaid(const RegistryChargePrepaid& _registryChargePrepaid)
{
    m_registryChargePrepaid = _registryChargePrepaid;
    m_registryChargePrepaidHasBeenSet = true;
}

bool RenewInstanceRequest::RegistryChargePrepaidHasBeenSet() const
{
    return m_registryChargePrepaidHasBeenSet;
}

int64_t RenewInstanceRequest::GetFlag() const
{
    return m_flag;
}

void RenewInstanceRequest::SetFlag(const int64_t& _flag)
{
    m_flag = _flag;
    m_flagHasBeenSet = true;
}

bool RenewInstanceRequest::FlagHasBeenSet() const
{
    return m_flagHasBeenSet;
}


