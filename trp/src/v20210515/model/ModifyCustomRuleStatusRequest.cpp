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

#include <tencentcloud/trp/v20210515/model/ModifyCustomRuleStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

ModifyCustomRuleStatusRequest::ModifyCustomRuleStatusRequest() :
    m_customIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_corpIdHasBeenSet(false)
{
}

string ModifyCustomRuleStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_customIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_corpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_corpId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCustomRuleStatusRequest::GetCustomId() const
{
    return m_customId;
}

void ModifyCustomRuleStatusRequest::SetCustomId(const string& _customId)
{
    m_customId = _customId;
    m_customIdHasBeenSet = true;
}

bool ModifyCustomRuleStatusRequest::CustomIdHasBeenSet() const
{
    return m_customIdHasBeenSet;
}

int64_t ModifyCustomRuleStatusRequest::GetStatus() const
{
    return m_status;
}

void ModifyCustomRuleStatusRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyCustomRuleStatusRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t ModifyCustomRuleStatusRequest::GetCorpId() const
{
    return m_corpId;
}

void ModifyCustomRuleStatusRequest::SetCorpId(const uint64_t& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool ModifyCustomRuleStatusRequest::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}


