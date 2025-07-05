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

#include <tencentcloud/tia/v20180226/model/QueryLogsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tia::V20180226::Model;
using namespace std;

QueryLogsResponse::QueryLogsResponse() :
    m_contextHasBeenSet(false),
    m_logsHasBeenSet(false),
    m_listoverHasBeenSet(false)
{
}

CoreInternalOutcome QueryLogsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Context") && !rsp["Context"].IsNull())
    {
        if (!rsp["Context"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Context` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_context = string(rsp["Context"].GetString());
        m_contextHasBeenSet = true;
    }

    if (rsp.HasMember("Logs") && !rsp["Logs"].IsNull())
    {
        if (!rsp["Logs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Logs` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Logs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Log item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_logs.push_back(item);
        }
        m_logsHasBeenSet = true;
    }

    if (rsp.HasMember("Listover") && !rsp["Listover"].IsNull())
    {
        if (!rsp["Listover"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Listover` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_listover = rsp["Listover"].GetBool();
        m_listoverHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string QueryLogsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_contextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Context";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_context.c_str(), allocator).Move(), allocator);
    }

    if (m_logsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Logs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_logs.begin(); itr != m_logs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_listoverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Listover";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_listover, allocator);
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


string QueryLogsResponse::GetContext() const
{
    return m_context;
}

bool QueryLogsResponse::ContextHasBeenSet() const
{
    return m_contextHasBeenSet;
}

vector<Log> QueryLogsResponse::GetLogs() const
{
    return m_logs;
}

bool QueryLogsResponse::LogsHasBeenSet() const
{
    return m_logsHasBeenSet;
}

bool QueryLogsResponse::GetListover() const
{
    return m_listover;
}

bool QueryLogsResponse::ListoverHasBeenSet() const
{
    return m_listoverHasBeenSet;
}


