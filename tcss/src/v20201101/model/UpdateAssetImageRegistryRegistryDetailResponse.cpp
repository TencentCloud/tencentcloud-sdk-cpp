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

#include <tencentcloud/tcss/v20201101/model/UpdateAssetImageRegistryRegistryDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

UpdateAssetImageRegistryRegistryDetailResponse::UpdateAssetImageRegistryRegistryDetailResponse() :
    m_healthCheckErrHasBeenSet(false),
    m_nameRepeatErrHasBeenSet(false),
    m_registryIdHasBeenSet(false)
{
}

CoreInternalOutcome UpdateAssetImageRegistryRegistryDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("HealthCheckErr") && !rsp["HealthCheckErr"].IsNull())
    {
        if (!rsp["HealthCheckErr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckErr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckErr = string(rsp["HealthCheckErr"].GetString());
        m_healthCheckErrHasBeenSet = true;
    }

    if (rsp.HasMember("NameRepeatErr") && !rsp["NameRepeatErr"].IsNull())
    {
        if (!rsp["NameRepeatErr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NameRepeatErr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nameRepeatErr = string(rsp["NameRepeatErr"].GetString());
        m_nameRepeatErrHasBeenSet = true;
    }

    if (rsp.HasMember("RegistryId") && !rsp["RegistryId"].IsNull())
    {
        if (!rsp["RegistryId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegistryId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_registryId = rsp["RegistryId"].GetInt64();
        m_registryIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string UpdateAssetImageRegistryRegistryDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_healthCheckErrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckErr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthCheckErr.c_str(), allocator).Move(), allocator);
    }

    if (m_nameRepeatErrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameRepeatErr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nameRepeatErr.c_str(), allocator).Move(), allocator);
    }

    if (m_registryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_registryId, allocator);
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


string UpdateAssetImageRegistryRegistryDetailResponse::GetHealthCheckErr() const
{
    return m_healthCheckErr;
}

bool UpdateAssetImageRegistryRegistryDetailResponse::HealthCheckErrHasBeenSet() const
{
    return m_healthCheckErrHasBeenSet;
}

string UpdateAssetImageRegistryRegistryDetailResponse::GetNameRepeatErr() const
{
    return m_nameRepeatErr;
}

bool UpdateAssetImageRegistryRegistryDetailResponse::NameRepeatErrHasBeenSet() const
{
    return m_nameRepeatErrHasBeenSet;
}

int64_t UpdateAssetImageRegistryRegistryDetailResponse::GetRegistryId() const
{
    return m_registryId;
}

bool UpdateAssetImageRegistryRegistryDetailResponse::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}


