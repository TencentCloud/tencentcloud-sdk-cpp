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

#include <tencentcloud/iotexplorer/v20190423/model/OperateTWeSeeDirectUploadObjectResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

OperateTWeSeeDirectUploadObjectResponse::OperateTWeSeeDirectUploadObjectResponse() :
    m_listingResponseHasBeenSet(false),
    m_objectResponseHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome OperateTWeSeeDirectUploadObjectResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ListingResponse") && !rsp["ListingResponse"].IsNull())
    {
        if (!rsp["ListingResponse"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ListingResponse` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_listingResponse.Deserialize(rsp["ListingResponse"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_listingResponseHasBeenSet = true;
    }

    if (rsp.HasMember("ObjectResponse") && !rsp["ObjectResponse"].IsNull())
    {
        if (!rsp["ObjectResponse"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ObjectResponse` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_objectResponse.Deserialize(rsp["ObjectResponse"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_objectResponseHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string OperateTWeSeeDirectUploadObjectResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_listingResponseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListingResponse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_listingResponse.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_objectResponseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectResponse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_objectResponse.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
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


SeeObjectListing OperateTWeSeeDirectUploadObjectResponse::GetListingResponse() const
{
    return m_listingResponse;
}

bool OperateTWeSeeDirectUploadObjectResponse::ListingResponseHasBeenSet() const
{
    return m_listingResponseHasBeenSet;
}

SeeObjectMetadata OperateTWeSeeDirectUploadObjectResponse::GetObjectResponse() const
{
    return m_objectResponse;
}

bool OperateTWeSeeDirectUploadObjectResponse::ObjectResponseHasBeenSet() const
{
    return m_objectResponseHasBeenSet;
}

int64_t OperateTWeSeeDirectUploadObjectResponse::GetStatus() const
{
    return m_status;
}

bool OperateTWeSeeDirectUploadObjectResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


