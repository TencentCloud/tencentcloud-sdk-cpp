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

#include <tencentcloud/drm/v20181115/model/ModifyFairPlayPemRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Drm::V20181115::Model;
using namespace std;

ModifyFairPlayPemRequest::ModifyFairPlayPemRequest() :
    m_pemHasBeenSet(false),
    m_askHasBeenSet(false),
    m_fairPlayPemIdHasBeenSet(false),
    m_pemDecryptKeyHasBeenSet(false),
    m_bailorIdHasBeenSet(false),
    m_priorityHasBeenSet(false)
{
}

string ModifyFairPlayPemRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pem";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pem.c_str(), allocator).Move(), allocator);
    }

    if (m_askHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ask.c_str(), allocator).Move(), allocator);
    }

    if (m_fairPlayPemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FairPlayPemId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fairPlayPemId, allocator);
    }

    if (m_pemDecryptKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PemDecryptKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pemDecryptKey.c_str(), allocator).Move(), allocator);
    }

    if (m_bailorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BailorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bailorId, allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_priority, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyFairPlayPemRequest::GetPem() const
{
    return m_pem;
}

void ModifyFairPlayPemRequest::SetPem(const string& _pem)
{
    m_pem = _pem;
    m_pemHasBeenSet = true;
}

bool ModifyFairPlayPemRequest::PemHasBeenSet() const
{
    return m_pemHasBeenSet;
}

string ModifyFairPlayPemRequest::GetAsk() const
{
    return m_ask;
}

void ModifyFairPlayPemRequest::SetAsk(const string& _ask)
{
    m_ask = _ask;
    m_askHasBeenSet = true;
}

bool ModifyFairPlayPemRequest::AskHasBeenSet() const
{
    return m_askHasBeenSet;
}

uint64_t ModifyFairPlayPemRequest::GetFairPlayPemId() const
{
    return m_fairPlayPemId;
}

void ModifyFairPlayPemRequest::SetFairPlayPemId(const uint64_t& _fairPlayPemId)
{
    m_fairPlayPemId = _fairPlayPemId;
    m_fairPlayPemIdHasBeenSet = true;
}

bool ModifyFairPlayPemRequest::FairPlayPemIdHasBeenSet() const
{
    return m_fairPlayPemIdHasBeenSet;
}

string ModifyFairPlayPemRequest::GetPemDecryptKey() const
{
    return m_pemDecryptKey;
}

void ModifyFairPlayPemRequest::SetPemDecryptKey(const string& _pemDecryptKey)
{
    m_pemDecryptKey = _pemDecryptKey;
    m_pemDecryptKeyHasBeenSet = true;
}

bool ModifyFairPlayPemRequest::PemDecryptKeyHasBeenSet() const
{
    return m_pemDecryptKeyHasBeenSet;
}

uint64_t ModifyFairPlayPemRequest::GetBailorId() const
{
    return m_bailorId;
}

void ModifyFairPlayPemRequest::SetBailorId(const uint64_t& _bailorId)
{
    m_bailorId = _bailorId;
    m_bailorIdHasBeenSet = true;
}

bool ModifyFairPlayPemRequest::BailorIdHasBeenSet() const
{
    return m_bailorIdHasBeenSet;
}

uint64_t ModifyFairPlayPemRequest::GetPriority() const
{
    return m_priority;
}

void ModifyFairPlayPemRequest::SetPriority(const uint64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool ModifyFairPlayPemRequest::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}


