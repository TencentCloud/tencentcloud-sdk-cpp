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

#include <tencentcloud/hasim/v20210716/model/ModifyLinkTeleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Hasim::V20210716::Model;
using namespace std;

ModifyLinkTeleRequest::ModifyLinkTeleRequest() :
    m_linkIDHasBeenSet(false),
    m_teleOperatorHasBeenSet(false)
{
}

string ModifyLinkTeleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_linkIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinkID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_linkID, allocator);
    }

    if (m_teleOperatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeleOperator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_teleOperator, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyLinkTeleRequest::GetLinkID() const
{
    return m_linkID;
}

void ModifyLinkTeleRequest::SetLinkID(const int64_t& _linkID)
{
    m_linkID = _linkID;
    m_linkIDHasBeenSet = true;
}

bool ModifyLinkTeleRequest::LinkIDHasBeenSet() const
{
    return m_linkIDHasBeenSet;
}

int64_t ModifyLinkTeleRequest::GetTeleOperator() const
{
    return m_teleOperator;
}

void ModifyLinkTeleRequest::SetTeleOperator(const int64_t& _teleOperator)
{
    m_teleOperator = _teleOperator;
    m_teleOperatorHasBeenSet = true;
}

bool ModifyLinkTeleRequest::TeleOperatorHasBeenSet() const
{
    return m_teleOperatorHasBeenSet;
}


