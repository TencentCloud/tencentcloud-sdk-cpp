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

#include <tencentcloud/privatedns/v20201028/model/CreateExtendEndpointResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace std;

CreateExtendEndpointResponse::CreateExtendEndpointResponse() :
    m_endpointIdHasBeenSet(false),
    m_endpointNameHasBeenSet(false)
{
}

CoreInternalOutcome CreateExtendEndpointResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("EndpointId") && !rsp["EndpointId"].IsNull())
    {
        if (!rsp["EndpointId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpointId = string(rsp["EndpointId"].GetString());
        m_endpointIdHasBeenSet = true;
    }

    if (rsp.HasMember("EndpointName") && !rsp["EndpointName"].IsNull())
    {
        if (!rsp["EndpointName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpointName = string(rsp["EndpointName"].GetString());
        m_endpointNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateExtendEndpointResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_endpointIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpointId.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpointName.c_str(), allocator).Move(), allocator);
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


string CreateExtendEndpointResponse::GetEndpointId() const
{
    return m_endpointId;
}

bool CreateExtendEndpointResponse::EndpointIdHasBeenSet() const
{
    return m_endpointIdHasBeenSet;
}

string CreateExtendEndpointResponse::GetEndpointName() const
{
    return m_endpointName;
}

bool CreateExtendEndpointResponse::EndpointNameHasBeenSet() const
{
    return m_endpointNameHasBeenSet;
}


