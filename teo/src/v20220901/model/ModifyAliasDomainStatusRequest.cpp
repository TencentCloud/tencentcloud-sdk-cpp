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

#include <tencentcloud/teo/v20220901/model/ModifyAliasDomainStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ModifyAliasDomainStatusRequest::ModifyAliasDomainStatusRequest() :
    m_zoneIdHasBeenSet(false),
    m_pausedHasBeenSet(false),
    m_aliasNamesHasBeenSet(false)
{
}

string ModifyAliasDomainStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_pausedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Paused";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_paused, allocator);
    }

    if (m_aliasNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_aliasNames.begin(); itr != m_aliasNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAliasDomainStatusRequest::GetZoneId() const
{
    return m_zoneId;
}

void ModifyAliasDomainStatusRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ModifyAliasDomainStatusRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

bool ModifyAliasDomainStatusRequest::GetPaused() const
{
    return m_paused;
}

void ModifyAliasDomainStatusRequest::SetPaused(const bool& _paused)
{
    m_paused = _paused;
    m_pausedHasBeenSet = true;
}

bool ModifyAliasDomainStatusRequest::PausedHasBeenSet() const
{
    return m_pausedHasBeenSet;
}

vector<string> ModifyAliasDomainStatusRequest::GetAliasNames() const
{
    return m_aliasNames;
}

void ModifyAliasDomainStatusRequest::SetAliasNames(const vector<string>& _aliasNames)
{
    m_aliasNames = _aliasNames;
    m_aliasNamesHasBeenSet = true;
}

bool ModifyAliasDomainStatusRequest::AliasNamesHasBeenSet() const
{
    return m_aliasNamesHasBeenSet;
}


