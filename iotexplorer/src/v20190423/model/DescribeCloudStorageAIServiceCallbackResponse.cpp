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

#include <tencentcloud/iotexplorer/v20190423/model/DescribeCloudStorageAIServiceCallbackResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

DescribeCloudStorageAIServiceCallbackResponse::DescribeCloudStorageAIServiceCallbackResponse() :
    m_typeHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_callbackTokenHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCloudStorageAIServiceCallbackResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(rsp["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("CallbackUrl") && !rsp["CallbackUrl"].IsNull())
    {
        if (!rsp["CallbackUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallbackUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackUrl = string(rsp["CallbackUrl"].GetString());
        m_callbackUrlHasBeenSet = true;
    }

    if (rsp.HasMember("CallbackToken") && !rsp["CallbackToken"].IsNull())
    {
        if (!rsp["CallbackToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallbackToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackToken = string(rsp["CallbackToken"].GetString());
        m_callbackTokenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCloudStorageAIServiceCallbackResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackToken.c_str(), allocator).Move(), allocator);
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


string DescribeCloudStorageAIServiceCallbackResponse::GetType() const
{
    return m_type;
}

bool DescribeCloudStorageAIServiceCallbackResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribeCloudStorageAIServiceCallbackResponse::GetCallbackUrl() const
{
    return m_callbackUrl;
}

bool DescribeCloudStorageAIServiceCallbackResponse::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

string DescribeCloudStorageAIServiceCallbackResponse::GetCallbackToken() const
{
    return m_callbackToken;
}

bool DescribeCloudStorageAIServiceCallbackResponse::CallbackTokenHasBeenSet() const
{
    return m_callbackTokenHasBeenSet;
}


