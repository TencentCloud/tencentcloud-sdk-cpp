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

#include <tencentcloud/cwp/v20180228/model/ModifyWebPageProtectSwitchRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ModifyWebPageProtectSwitchRequest::ModifyWebPageProtectSwitchRequest() :
    m_switchTypeHasBeenSet(false),
    m_idsHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string ModifyWebPageProtectSwitchRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_switchTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_switchType, allocator);
    }

    if (m_idsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ids.begin(); itr != m_ids.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyWebPageProtectSwitchRequest::GetSwitchType() const
{
    return m_switchType;
}

void ModifyWebPageProtectSwitchRequest::SetSwitchType(const uint64_t& _switchType)
{
    m_switchType = _switchType;
    m_switchTypeHasBeenSet = true;
}

bool ModifyWebPageProtectSwitchRequest::SwitchTypeHasBeenSet() const
{
    return m_switchTypeHasBeenSet;
}

vector<string> ModifyWebPageProtectSwitchRequest::GetIds() const
{
    return m_ids;
}

void ModifyWebPageProtectSwitchRequest::SetIds(const vector<string>& _ids)
{
    m_ids = _ids;
    m_idsHasBeenSet = true;
}

bool ModifyWebPageProtectSwitchRequest::IdsHasBeenSet() const
{
    return m_idsHasBeenSet;
}

uint64_t ModifyWebPageProtectSwitchRequest::GetStatus() const
{
    return m_status;
}

void ModifyWebPageProtectSwitchRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyWebPageProtectSwitchRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


