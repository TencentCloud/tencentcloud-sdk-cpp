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

#include <tencentcloud/iotvideo/v20201215/model/DescribeProductDynamicRegisterResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20201215::Model;
using namespace std;

DescribeProductDynamicRegisterResponse::DescribeProductDynamicRegisterResponse() :
    m_registerTypeHasBeenSet(false),
    m_productSecretHasBeenSet(false),
    m_registerLimitHasBeenSet(false)
{
}

CoreInternalOutcome DescribeProductDynamicRegisterResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("RegisterType") && !rsp["RegisterType"].IsNull())
    {
        if (!rsp["RegisterType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_registerType = rsp["RegisterType"].GetUint64();
        m_registerTypeHasBeenSet = true;
    }

    if (rsp.HasMember("ProductSecret") && !rsp["ProductSecret"].IsNull())
    {
        if (!rsp["ProductSecret"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductSecret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productSecret = string(rsp["ProductSecret"].GetString());
        m_productSecretHasBeenSet = true;
    }

    if (rsp.HasMember("RegisterLimit") && !rsp["RegisterLimit"].IsNull())
    {
        if (!rsp["RegisterLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_registerLimit = rsp["RegisterLimit"].GetUint64();
        m_registerLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeProductDynamicRegisterResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_registerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_registerType, allocator);
    }

    if (m_productSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductSecret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productSecret.c_str(), allocator).Move(), allocator);
    }

    if (m_registerLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisterLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_registerLimit, allocator);
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


uint64_t DescribeProductDynamicRegisterResponse::GetRegisterType() const
{
    return m_registerType;
}

bool DescribeProductDynamicRegisterResponse::RegisterTypeHasBeenSet() const
{
    return m_registerTypeHasBeenSet;
}

string DescribeProductDynamicRegisterResponse::GetProductSecret() const
{
    return m_productSecret;
}

bool DescribeProductDynamicRegisterResponse::ProductSecretHasBeenSet() const
{
    return m_productSecretHasBeenSet;
}

uint64_t DescribeProductDynamicRegisterResponse::GetRegisterLimit() const
{
    return m_registerLimit;
}

bool DescribeProductDynamicRegisterResponse::RegisterLimitHasBeenSet() const
{
    return m_registerLimitHasBeenSet;
}


