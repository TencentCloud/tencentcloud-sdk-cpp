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

#include <tencentcloud/cls/v20201016/model/PreviewKafkaRechargeResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

PreviewKafkaRechargeResponse::PreviewKafkaRechargeResponse() :
    m_logSampleHasBeenSet(false),
    m_logDataHasBeenSet(false)
{
}

CoreInternalOutcome PreviewKafkaRechargeResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("LogSample") && !rsp["LogSample"].IsNull())
    {
        if (!rsp["LogSample"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogSample` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logSample = string(rsp["LogSample"].GetString());
        m_logSampleHasBeenSet = true;
    }

    if (rsp.HasMember("LogData") && !rsp["LogData"].IsNull())
    {
        if (!rsp["LogData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logData = string(rsp["LogData"].GetString());
        m_logDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string PreviewKafkaRechargeResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_logSampleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSample";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logSample.c_str(), allocator).Move(), allocator);
    }

    if (m_logDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logData.c_str(), allocator).Move(), allocator);
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


string PreviewKafkaRechargeResponse::GetLogSample() const
{
    return m_logSample;
}

bool PreviewKafkaRechargeResponse::LogSampleHasBeenSet() const
{
    return m_logSampleHasBeenSet;
}

string PreviewKafkaRechargeResponse::GetLogData() const
{
    return m_logData;
}

bool PreviewKafkaRechargeResponse::LogDataHasBeenSet() const
{
    return m_logDataHasBeenSet;
}


