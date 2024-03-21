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

#include <tencentcloud/cwp/v20180228/model/ModifyBanStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ModifyBanStatusRequest::ModifyBanStatusRequest() :
    m_statusHasBeenSet(false),
    m_openSmartModeHasBeenSet(false)
{
}

string ModifyBanStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_openSmartModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenSmartMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_openSmartMode, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyBanStatusRequest::GetStatus() const
{
    return m_status;
}

void ModifyBanStatusRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyBanStatusRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool ModifyBanStatusRequest::GetOpenSmartMode() const
{
    return m_openSmartMode;
}

void ModifyBanStatusRequest::SetOpenSmartMode(const bool& _openSmartMode)
{
    m_openSmartMode = _openSmartMode;
    m_openSmartModeHasBeenSet = true;
}

bool ModifyBanStatusRequest::OpenSmartModeHasBeenSet() const
{
    return m_openSmartModeHasBeenSet;
}


