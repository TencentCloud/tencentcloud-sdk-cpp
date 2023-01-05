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

#include <tencentcloud/hasim/v20210716/model/ModifyLinkAdvancedLogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Hasim::V20210716::Model;
using namespace std;

ModifyLinkAdvancedLogRequest::ModifyLinkAdvancedLogRequest() :
    m_linkIDHasBeenSet(false),
    m_isAdLogHasBeenSet(false)
{
}

string ModifyLinkAdvancedLogRequest::ToJsonString() const
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

    if (m_isAdLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAdLog";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isAdLog, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyLinkAdvancedLogRequest::GetLinkID() const
{
    return m_linkID;
}

void ModifyLinkAdvancedLogRequest::SetLinkID(const int64_t& _linkID)
{
    m_linkID = _linkID;
    m_linkIDHasBeenSet = true;
}

bool ModifyLinkAdvancedLogRequest::LinkIDHasBeenSet() const
{
    return m_linkIDHasBeenSet;
}

int64_t ModifyLinkAdvancedLogRequest::GetIsAdLog() const
{
    return m_isAdLog;
}

void ModifyLinkAdvancedLogRequest::SetIsAdLog(const int64_t& _isAdLog)
{
    m_isAdLog = _isAdLog;
    m_isAdLogHasBeenSet = true;
}

bool ModifyLinkAdvancedLogRequest::IsAdLogHasBeenSet() const
{
    return m_isAdLogHasBeenSet;
}


