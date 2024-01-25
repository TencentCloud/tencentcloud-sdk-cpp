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

#include <tencentcloud/wedata/v20210820/model/DescribeTestRunResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeTestRunResponse::DescribeTestRunResponse() :
    m_instanceKeyHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_finishedHasBeenSet(false),
    m_logContentHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTestRunResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("InstanceKey") && !rsp["InstanceKey"].IsNull())
    {
        if (!rsp["InstanceKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceKey = string(rsp["InstanceKey"].GetString());
        m_instanceKeyHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Finished") && !rsp["Finished"].IsNull())
    {
        if (!rsp["Finished"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Finished` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_finished = rsp["Finished"].GetBool();
        m_finishedHasBeenSet = true;
    }

    if (rsp.HasMember("LogContent") && !rsp["LogContent"].IsNull())
    {
        if (!rsp["LogContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logContent = string(rsp["LogContent"].GetString());
        m_logContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTestRunResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_instanceKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceKey.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_finishedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Finished";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_finished, allocator);
    }

    if (m_logContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logContent.c_str(), allocator).Move(), allocator);
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


string DescribeTestRunResponse::GetInstanceKey() const
{
    return m_instanceKey;
}

bool DescribeTestRunResponse::InstanceKeyHasBeenSet() const
{
    return m_instanceKeyHasBeenSet;
}

string DescribeTestRunResponse::GetStatus() const
{
    return m_status;
}

bool DescribeTestRunResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool DescribeTestRunResponse::GetFinished() const
{
    return m_finished;
}

bool DescribeTestRunResponse::FinishedHasBeenSet() const
{
    return m_finishedHasBeenSet;
}

string DescribeTestRunResponse::GetLogContent() const
{
    return m_logContent;
}

bool DescribeTestRunResponse::LogContentHasBeenSet() const
{
    return m_logContentHasBeenSet;
}


