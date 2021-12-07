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

#include <tencentcloud/tcss/v20201101/model/DescribeValueAddedSrvInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeValueAddedSrvInfoResponse::DescribeValueAddedSrvInfoResponse() :
    m_registryImageCntHasBeenSet(false),
    m_localImageCntHasBeenSet(false),
    m_unusedAuthorizedCntHasBeenSet(false)
{
}

CoreInternalOutcome DescribeValueAddedSrvInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("RegistryImageCnt") && !rsp["RegistryImageCnt"].IsNull())
    {
        if (!rsp["RegistryImageCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RegistryImageCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_registryImageCnt = rsp["RegistryImageCnt"].GetUint64();
        m_registryImageCntHasBeenSet = true;
    }

    if (rsp.HasMember("LocalImageCnt") && !rsp["LocalImageCnt"].IsNull())
    {
        if (!rsp["LocalImageCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LocalImageCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_localImageCnt = rsp["LocalImageCnt"].GetUint64();
        m_localImageCntHasBeenSet = true;
    }

    if (rsp.HasMember("UnusedAuthorizedCnt") && !rsp["UnusedAuthorizedCnt"].IsNull())
    {
        if (!rsp["UnusedAuthorizedCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UnusedAuthorizedCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unusedAuthorizedCnt = rsp["UnusedAuthorizedCnt"].GetUint64();
        m_unusedAuthorizedCntHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeValueAddedSrvInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_registryImageCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryImageCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_registryImageCnt, allocator);
    }

    if (m_localImageCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalImageCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_localImageCnt, allocator);
    }

    if (m_unusedAuthorizedCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnusedAuthorizedCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unusedAuthorizedCnt, allocator);
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


uint64_t DescribeValueAddedSrvInfoResponse::GetRegistryImageCnt() const
{
    return m_registryImageCnt;
}

bool DescribeValueAddedSrvInfoResponse::RegistryImageCntHasBeenSet() const
{
    return m_registryImageCntHasBeenSet;
}

uint64_t DescribeValueAddedSrvInfoResponse::GetLocalImageCnt() const
{
    return m_localImageCnt;
}

bool DescribeValueAddedSrvInfoResponse::LocalImageCntHasBeenSet() const
{
    return m_localImageCntHasBeenSet;
}

uint64_t DescribeValueAddedSrvInfoResponse::GetUnusedAuthorizedCnt() const
{
    return m_unusedAuthorizedCnt;
}

bool DescribeValueAddedSrvInfoResponse::UnusedAuthorizedCntHasBeenSet() const
{
    return m_unusedAuthorizedCntHasBeenSet;
}


