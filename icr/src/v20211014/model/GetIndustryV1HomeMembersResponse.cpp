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

#include <tencentcloud/icr/v20211014/model/GetIndustryV1HomeMembersResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Icr::V20211014::Model;
using namespace std;

GetIndustryV1HomeMembersResponse::GetIndustryV1HomeMembersResponse() :
    m_metadataHasBeenSet(false),
    m_payloadHasBeenSet(false)
{
}

CoreInternalOutcome GetIndustryV1HomeMembersResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Metadata") && !rsp["Metadata"].IsNull())
    {
        if (!rsp["Metadata"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Metadata` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metadata.Deserialize(rsp["Metadata"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metadataHasBeenSet = true;
    }

    if (rsp.HasMember("Payload") && !rsp["Payload"].IsNull())
    {
        if (!rsp["Payload"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Payload` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_payload.Deserialize(rsp["Payload"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_payloadHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetIndustryV1HomeMembersResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_metadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadata";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metadata.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_payloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Payload";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_payload.ToJsonObject(value[key.c_str()], allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


RspMetadata GetIndustryV1HomeMembersResponse::GetMetadata() const
{
    return m_metadata;
}

bool GetIndustryV1HomeMembersResponse::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}

GetIndustryV1HomeMembersRespPayload GetIndustryV1HomeMembersResponse::GetPayload() const
{
    return m_payload;
}

bool GetIndustryV1HomeMembersResponse::PayloadHasBeenSet() const
{
    return m_payloadHasBeenSet;
}


