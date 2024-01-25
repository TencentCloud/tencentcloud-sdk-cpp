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

#include <tencentcloud/wedata/v20210820/model/ListBatchDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ListBatchDetailResponse::ListBatchDetailResponse() :
    m_jobIdHasBeenSet(false),
    m_runTypeHasBeenSet(false),
    m_successResourceHasBeenSet(false),
    m_failResourceHasBeenSet(false),
    m_jobTypeHasBeenSet(false),
    m_jobStatusHasBeenSet(false),
    m_totalResourceHasBeenSet(false),
    m_needApproveHasBeenSet(false)
{
}

CoreInternalOutcome ListBatchDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("JobId") && !rsp["JobId"].IsNull())
    {
        if (!rsp["JobId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `JobId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = rsp["JobId"].GetUint64();
        m_jobIdHasBeenSet = true;
    }

    if (rsp.HasMember("RunType") && !rsp["RunType"].IsNull())
    {
        if (!rsp["RunType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runType = string(rsp["RunType"].GetString());
        m_runTypeHasBeenSet = true;
    }

    if (rsp.HasMember("SuccessResource") && !rsp["SuccessResource"].IsNull())
    {
        if (!rsp["SuccessResource"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SuccessResource` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SuccessResource"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AsyncResourceVO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_successResource.push_back(item);
        }
        m_successResourceHasBeenSet = true;
    }

    if (rsp.HasMember("FailResource") && !rsp["FailResource"].IsNull())
    {
        if (!rsp["FailResource"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FailResource` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FailResource"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AsyncResourceVO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_failResource.push_back(item);
        }
        m_failResourceHasBeenSet = true;
    }

    if (rsp.HasMember("JobType") && !rsp["JobType"].IsNull())
    {
        if (!rsp["JobType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobType = string(rsp["JobType"].GetString());
        m_jobTypeHasBeenSet = true;
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

    if (rsp.HasMember("TotalResource") && !rsp["TotalResource"].IsNull())
    {
        if (!rsp["TotalResource"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalResource` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalResource = rsp["TotalResource"].GetUint64();
        m_totalResourceHasBeenSet = true;
    }

    if (rsp.HasMember("NeedApprove") && !rsp["NeedApprove"].IsNull())
    {
        if (!rsp["NeedApprove"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NeedApprove` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_needApprove = rsp["NeedApprove"].GetBool();
        m_needApproveHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ListBatchDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobId, allocator);
    }

    if (m_runTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runType.c_str(), allocator).Move(), allocator);
    }

    if (m_successResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_successResource.begin(); itr != m_successResource.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_failResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_failResource.begin(); itr != m_failResource.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_jobTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobType.c_str(), allocator).Move(), allocator);
    }

    if (m_jobStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_totalResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalResource, allocator);
    }

    if (m_needApproveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedApprove";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needApprove, allocator);
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


uint64_t ListBatchDetailResponse::GetJobId() const
{
    return m_jobId;
}

bool ListBatchDetailResponse::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string ListBatchDetailResponse::GetRunType() const
{
    return m_runType;
}

bool ListBatchDetailResponse::RunTypeHasBeenSet() const
{
    return m_runTypeHasBeenSet;
}

vector<AsyncResourceVO> ListBatchDetailResponse::GetSuccessResource() const
{
    return m_successResource;
}

bool ListBatchDetailResponse::SuccessResourceHasBeenSet() const
{
    return m_successResourceHasBeenSet;
}

vector<AsyncResourceVO> ListBatchDetailResponse::GetFailResource() const
{
    return m_failResource;
}

bool ListBatchDetailResponse::FailResourceHasBeenSet() const
{
    return m_failResourceHasBeenSet;
}

string ListBatchDetailResponse::GetJobType() const
{
    return m_jobType;
}

bool ListBatchDetailResponse::JobTypeHasBeenSet() const
{
    return m_jobTypeHasBeenSet;
}

string ListBatchDetailResponse::GetJobStatus() const
{
    return m_jobStatus;
}

bool ListBatchDetailResponse::JobStatusHasBeenSet() const
{
    return m_jobStatusHasBeenSet;
}

uint64_t ListBatchDetailResponse::GetTotalResource() const
{
    return m_totalResource;
}

bool ListBatchDetailResponse::TotalResourceHasBeenSet() const
{
    return m_totalResourceHasBeenSet;
}

bool ListBatchDetailResponse::GetNeedApprove() const
{
    return m_needApprove;
}

bool ListBatchDetailResponse::NeedApproveHasBeenSet() const
{
    return m_needApproveHasBeenSet;
}


