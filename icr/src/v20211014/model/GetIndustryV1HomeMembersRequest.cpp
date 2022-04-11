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

#include <tencentcloud/icr/v20211014/model/GetIndustryV1HomeMembersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Icr::V20211014::Model;
using namespace std;

GetIndustryV1HomeMembersRequest::GetIndustryV1HomeMembersRequest() :
    m_payloadHasBeenSet(false),
    m_metadataHasBeenSet(false)
{
}

string GetIndustryV1HomeMembersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_payloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Payload";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_payload.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_metadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadata";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metadata.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


GetIndustryV1HomeMembersReqPayload GetIndustryV1HomeMembersRequest::GetPayload() const
{
    return m_payload;
}

void GetIndustryV1HomeMembersRequest::SetPayload(const GetIndustryV1HomeMembersReqPayload& _payload)
{
    m_payload = _payload;
    m_payloadHasBeenSet = true;
}

bool GetIndustryV1HomeMembersRequest::PayloadHasBeenSet() const
{
    return m_payloadHasBeenSet;
}

ReqMetadata GetIndustryV1HomeMembersRequest::GetMetadata() const
{
    return m_metadata;
}

void GetIndustryV1HomeMembersRequest::SetMetadata(const ReqMetadata& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool GetIndustryV1HomeMembersRequest::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}


