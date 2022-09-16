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

#include <tencentcloud/live/v20180801/model/AddLiveDomainRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

AddLiveDomainRequest::AddLiveDomainRequest() :
    m_domainNameHasBeenSet(false),
    m_domainTypeHasBeenSet(false),
    m_playTypeHasBeenSet(false),
    m_isDelayLiveHasBeenSet(false),
    m_isMiniProgramLiveHasBeenSet(false),
    m_verifyOwnerTypeHasBeenSet(false)
{
}

string AddLiveDomainRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_domainTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_domainType, allocator);
    }

    if (m_playTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_playType, allocator);
    }

    if (m_isDelayLiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDelayLive";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isDelayLive, allocator);
    }

    if (m_isMiniProgramLiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsMiniProgramLive";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isMiniProgramLive, allocator);
    }

    if (m_verifyOwnerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyOwnerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_verifyOwnerType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddLiveDomainRequest::GetDomainName() const
{
    return m_domainName;
}

void AddLiveDomainRequest::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool AddLiveDomainRequest::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

uint64_t AddLiveDomainRequest::GetDomainType() const
{
    return m_domainType;
}

void AddLiveDomainRequest::SetDomainType(const uint64_t& _domainType)
{
    m_domainType = _domainType;
    m_domainTypeHasBeenSet = true;
}

bool AddLiveDomainRequest::DomainTypeHasBeenSet() const
{
    return m_domainTypeHasBeenSet;
}

uint64_t AddLiveDomainRequest::GetPlayType() const
{
    return m_playType;
}

void AddLiveDomainRequest::SetPlayType(const uint64_t& _playType)
{
    m_playType = _playType;
    m_playTypeHasBeenSet = true;
}

bool AddLiveDomainRequest::PlayTypeHasBeenSet() const
{
    return m_playTypeHasBeenSet;
}

int64_t AddLiveDomainRequest::GetIsDelayLive() const
{
    return m_isDelayLive;
}

void AddLiveDomainRequest::SetIsDelayLive(const int64_t& _isDelayLive)
{
    m_isDelayLive = _isDelayLive;
    m_isDelayLiveHasBeenSet = true;
}

bool AddLiveDomainRequest::IsDelayLiveHasBeenSet() const
{
    return m_isDelayLiveHasBeenSet;
}

int64_t AddLiveDomainRequest::GetIsMiniProgramLive() const
{
    return m_isMiniProgramLive;
}

void AddLiveDomainRequest::SetIsMiniProgramLive(const int64_t& _isMiniProgramLive)
{
    m_isMiniProgramLive = _isMiniProgramLive;
    m_isMiniProgramLiveHasBeenSet = true;
}

bool AddLiveDomainRequest::IsMiniProgramLiveHasBeenSet() const
{
    return m_isMiniProgramLiveHasBeenSet;
}

string AddLiveDomainRequest::GetVerifyOwnerType() const
{
    return m_verifyOwnerType;
}

void AddLiveDomainRequest::SetVerifyOwnerType(const string& _verifyOwnerType)
{
    m_verifyOwnerType = _verifyOwnerType;
    m_verifyOwnerTypeHasBeenSet = true;
}

bool AddLiveDomainRequest::VerifyOwnerTypeHasBeenSet() const
{
    return m_verifyOwnerTypeHasBeenSet;
}


