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

#include <tencentcloud/bpaas/v20181217/model/OutApproveBpaasApplicationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bpaas::V20181217::Model;
using namespace std;

OutApproveBpaasApplicationRequest::OutApproveBpaasApplicationRequest() :
    m_statusHasBeenSet(false),
    m_approveIdHasBeenSet(false),
    m_msgHasBeenSet(false)
{
}

string OutApproveBpaasApplicationRequest::ToJsonString() const
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

    if (m_approveIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_approveId, allocator);
    }

    if (m_msgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Msg";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_msg.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t OutApproveBpaasApplicationRequest::GetStatus() const
{
    return m_status;
}

void OutApproveBpaasApplicationRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool OutApproveBpaasApplicationRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t OutApproveBpaasApplicationRequest::GetApproveId() const
{
    return m_approveId;
}

void OutApproveBpaasApplicationRequest::SetApproveId(const uint64_t& _approveId)
{
    m_approveId = _approveId;
    m_approveIdHasBeenSet = true;
}

bool OutApproveBpaasApplicationRequest::ApproveIdHasBeenSet() const
{
    return m_approveIdHasBeenSet;
}

string OutApproveBpaasApplicationRequest::GetMsg() const
{
    return m_msg;
}

void OutApproveBpaasApplicationRequest::SetMsg(const string& _msg)
{
    m_msg = _msg;
    m_msgHasBeenSet = true;
}

bool OutApproveBpaasApplicationRequest::MsgHasBeenSet() const
{
    return m_msgHasBeenSet;
}


