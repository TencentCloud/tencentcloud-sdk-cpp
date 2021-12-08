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

#include <tencentcloud/ft/v20200304/model/QueryFaceMorphJobResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ft::V20200304::Model;
using namespace std;

QueryFaceMorphJobResponse::QueryFaceMorphJobResponse() :
    m_jobStatusHasBeenSet(false),
    m_faceMorphOutputHasBeenSet(false),
    m_jobStatusCodeHasBeenSet(false)
{
}

CoreInternalOutcome QueryFaceMorphJobResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("JobStatus") && !rsp["JobStatus"].IsNull())
    {
        if (!rsp["JobStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobStatus = string(rsp["JobStatus"].GetString());
        m_jobStatusHasBeenSet = true;
    }

    if (rsp.HasMember("FaceMorphOutput") && !rsp["FaceMorphOutput"].IsNull())
    {
        if (!rsp["FaceMorphOutput"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FaceMorphOutput` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_faceMorphOutput.Deserialize(rsp["FaceMorphOutput"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_faceMorphOutputHasBeenSet = true;
    }

    if (rsp.HasMember("JobStatusCode") && !rsp["JobStatusCode"].IsNull())
    {
        if (!rsp["JobStatusCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobStatusCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobStatusCode = rsp["JobStatusCode"].GetInt64();
        m_jobStatusCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string QueryFaceMorphJobResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_jobStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_faceMorphOutputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceMorphOutput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_faceMorphOutput.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_jobStatusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobStatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobStatusCode, allocator);
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


string QueryFaceMorphJobResponse::GetJobStatus() const
{
    return m_jobStatus;
}

bool QueryFaceMorphJobResponse::JobStatusHasBeenSet() const
{
    return m_jobStatusHasBeenSet;
}

FaceMorphOutput QueryFaceMorphJobResponse::GetFaceMorphOutput() const
{
    return m_faceMorphOutput;
}

bool QueryFaceMorphJobResponse::FaceMorphOutputHasBeenSet() const
{
    return m_faceMorphOutputHasBeenSet;
}

int64_t QueryFaceMorphJobResponse::GetJobStatusCode() const
{
    return m_jobStatusCode;
}

bool QueryFaceMorphJobResponse::JobStatusCodeHasBeenSet() const
{
    return m_jobStatusCodeHasBeenSet;
}


