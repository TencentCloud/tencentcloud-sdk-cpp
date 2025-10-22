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

#include <tencentcloud/cwp/v20180228/model/ModifyBanModeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ModifyBanModeRequest::ModifyBanModeRequest() :
    m_modeHasBeenSet(false),
    m_ttlHasBeenSet(false)
{
}

string ModifyBanModeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_ttlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ttl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ttl, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyBanModeRequest::GetMode() const
{
    return m_mode;
}

void ModifyBanModeRequest::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool ModifyBanModeRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

uint64_t ModifyBanModeRequest::GetTtl() const
{
    return m_ttl;
}

void ModifyBanModeRequest::SetTtl(const uint64_t& _ttl)
{
    m_ttl = _ttl;
    m_ttlHasBeenSet = true;
}

bool ModifyBanModeRequest::TtlHasBeenSet() const
{
    return m_ttlHasBeenSet;
}


