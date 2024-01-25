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

#include <tencentcloud/wedata/v20210820/model/DescribeExecutionLogResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeExecutionLogResponse::DescribeExecutionLogResponse() :
    m_instanceIdHasBeenSet(false),
    m_logsHasBeenSet(false),
    m_detailIdHasBeenSet(false),
    m_detailStatusHasBeenSet(false)
{
}

CoreInternalOutcome DescribeExecutionLogResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("InstanceId") && !rsp["InstanceId"].IsNull())
    {
        if (!rsp["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(rsp["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (rsp.HasMember("Logs") && !rsp["Logs"].IsNull())
    {
        if (!rsp["Logs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Logs` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Logs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_logs.push_back((*itr).GetString());
        }
        m_logsHasBeenSet = true;
    }

    if (rsp.HasMember("DetailId") && !rsp["DetailId"].IsNull())
    {
        if (!rsp["DetailId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DetailId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_detailId = rsp["DetailId"].GetUint64();
        m_detailIdHasBeenSet = true;
    }

    if (rsp.HasMember("DetailStatus") && !rsp["DetailStatus"].IsNull())
    {
        if (!rsp["DetailStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detailStatus = string(rsp["DetailStatus"].GetString());
        m_detailStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeExecutionLogResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_logsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Logs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_logs.begin(); itr != m_logs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_detailIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetailId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_detailId, allocator);
    }

    if (m_detailStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetailStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detailStatus.c_str(), allocator).Move(), allocator);
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


string DescribeExecutionLogResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool DescribeExecutionLogResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<string> DescribeExecutionLogResponse::GetLogs() const
{
    return m_logs;
}

bool DescribeExecutionLogResponse::LogsHasBeenSet() const
{
    return m_logsHasBeenSet;
}

uint64_t DescribeExecutionLogResponse::GetDetailId() const
{
    return m_detailId;
}

bool DescribeExecutionLogResponse::DetailIdHasBeenSet() const
{
    return m_detailIdHasBeenSet;
}

string DescribeExecutionLogResponse::GetDetailStatus() const
{
    return m_detailStatus;
}

bool DescribeExecutionLogResponse::DetailStatusHasBeenSet() const
{
    return m_detailStatusHasBeenSet;
}


