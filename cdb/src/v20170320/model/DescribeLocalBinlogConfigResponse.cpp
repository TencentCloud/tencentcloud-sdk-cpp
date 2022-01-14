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

#include <tencentcloud/cdb/v20170320/model/DescribeLocalBinlogConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

DescribeLocalBinlogConfigResponse::DescribeLocalBinlogConfigResponse() :
    m_localBinlogConfigHasBeenSet(false),
    m_localBinlogConfigDefaultHasBeenSet(false)
{
}

CoreInternalOutcome DescribeLocalBinlogConfigResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("LocalBinlogConfig") && !rsp["LocalBinlogConfig"].IsNull())
    {
        if (!rsp["LocalBinlogConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LocalBinlogConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_localBinlogConfig.Deserialize(rsp["LocalBinlogConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_localBinlogConfigHasBeenSet = true;
    }

    if (rsp.HasMember("LocalBinlogConfigDefault") && !rsp["LocalBinlogConfigDefault"].IsNull())
    {
        if (!rsp["LocalBinlogConfigDefault"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LocalBinlogConfigDefault` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_localBinlogConfigDefault.Deserialize(rsp["LocalBinlogConfigDefault"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_localBinlogConfigDefaultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeLocalBinlogConfigResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_localBinlogConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalBinlogConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_localBinlogConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_localBinlogConfigDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalBinlogConfigDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_localBinlogConfigDefault.ToJsonObject(value[key.c_str()], allocator);
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


LocalBinlogConfig DescribeLocalBinlogConfigResponse::GetLocalBinlogConfig() const
{
    return m_localBinlogConfig;
}

bool DescribeLocalBinlogConfigResponse::LocalBinlogConfigHasBeenSet() const
{
    return m_localBinlogConfigHasBeenSet;
}

LocalBinlogConfigDefault DescribeLocalBinlogConfigResponse::GetLocalBinlogConfigDefault() const
{
    return m_localBinlogConfigDefault;
}

bool DescribeLocalBinlogConfigResponse::LocalBinlogConfigDefaultHasBeenSet() const
{
    return m_localBinlogConfigDefaultHasBeenSet;
}


