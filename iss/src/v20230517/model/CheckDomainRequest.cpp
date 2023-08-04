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

#include <tencentcloud/iss/v20230517/model/CheckDomainRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

CheckDomainRequest::CheckDomainRequest() :
    m_playDomainHasBeenSet(false),
    m_internalDomainHasBeenSet(false)
{
}

string CheckDomainRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_playDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_playDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_internalDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternalDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_internalDomain.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CheckDomainRequest::GetPlayDomain() const
{
    return m_playDomain;
}

void CheckDomainRequest::SetPlayDomain(const string& _playDomain)
{
    m_playDomain = _playDomain;
    m_playDomainHasBeenSet = true;
}

bool CheckDomainRequest::PlayDomainHasBeenSet() const
{
    return m_playDomainHasBeenSet;
}

string CheckDomainRequest::GetInternalDomain() const
{
    return m_internalDomain;
}

void CheckDomainRequest::SetInternalDomain(const string& _internalDomain)
{
    m_internalDomain = _internalDomain;
    m_internalDomainHasBeenSet = true;
}

bool CheckDomainRequest::InternalDomainHasBeenSet() const
{
    return m_internalDomainHasBeenSet;
}


