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

#include <tencentcloud/tdid/v20210519/model/GetTDidDocumentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

GetTDidDocumentRequest::GetTDidDocumentRequest() :
    m_didHasBeenSet(false),
    m_dAPIdHasBeenSet(false)
{
}

string GetTDidDocumentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_didHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Did";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_did.c_str(), allocator).Move(), allocator);
    }

    if (m_dAPIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DAPId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dAPId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetTDidDocumentRequest::GetDid() const
{
    return m_did;
}

void GetTDidDocumentRequest::SetDid(const string& _did)
{
    m_did = _did;
    m_didHasBeenSet = true;
}

bool GetTDidDocumentRequest::DidHasBeenSet() const
{
    return m_didHasBeenSet;
}

uint64_t GetTDidDocumentRequest::GetDAPId() const
{
    return m_dAPId;
}

void GetTDidDocumentRequest::SetDAPId(const uint64_t& _dAPId)
{
    m_dAPId = _dAPId;
    m_dAPIdHasBeenSet = true;
}

bool GetTDidDocumentRequest::DAPIdHasBeenSet() const
{
    return m_dAPIdHasBeenSet;
}


