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

#include <tencentcloud/ess/v20201111/model/DescribeContractComparisonTaskResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

DescribeContractComparisonTaskResponse::DescribeContractComparisonTaskResponse() :
    m_taskIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_originalFileResourceIdHasBeenSet(false),
    m_diffFileResourceIdHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_totalDiffCountHasBeenSet(false),
    m_addDiffCountHasBeenSet(false),
    m_changeDiffCountHasBeenSet(false),
    m_deleteDiffCountHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeContractComparisonTaskResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TaskId") && !rsp["TaskId"].IsNull())
    {
        if (!rsp["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(rsp["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Message") && !rsp["Message"].IsNull())
    {
        if (!rsp["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(rsp["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (rsp.HasMember("OriginalFileResourceId") && !rsp["OriginalFileResourceId"].IsNull())
    {
        if (!rsp["OriginalFileResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginalFileResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalFileResourceId = string(rsp["OriginalFileResourceId"].GetString());
        m_originalFileResourceIdHasBeenSet = true;
    }

    if (rsp.HasMember("DiffFileResourceId") && !rsp["DiffFileResourceId"].IsNull())
    {
        if (!rsp["DiffFileResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiffFileResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diffFileResourceId = string(rsp["DiffFileResourceId"].GetString());
        m_diffFileResourceIdHasBeenSet = true;
    }

    if (rsp.HasMember("Comment") && !rsp["Comment"].IsNull())
    {
        if (!rsp["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(rsp["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (rsp.HasMember("TotalDiffCount") && !rsp["TotalDiffCount"].IsNull())
    {
        if (!rsp["TotalDiffCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalDiffCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalDiffCount = rsp["TotalDiffCount"].GetInt64();
        m_totalDiffCountHasBeenSet = true;
    }

    if (rsp.HasMember("AddDiffCount") && !rsp["AddDiffCount"].IsNull())
    {
        if (!rsp["AddDiffCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AddDiffCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_addDiffCount = rsp["AddDiffCount"].GetInt64();
        m_addDiffCountHasBeenSet = true;
    }

    if (rsp.HasMember("ChangeDiffCount") && !rsp["ChangeDiffCount"].IsNull())
    {
        if (!rsp["ChangeDiffCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChangeDiffCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_changeDiffCount = rsp["ChangeDiffCount"].GetInt64();
        m_changeDiffCountHasBeenSet = true;
    }

    if (rsp.HasMember("DeleteDiffCount") && !rsp["DeleteDiffCount"].IsNull())
    {
        if (!rsp["DeleteDiffCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteDiffCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deleteDiffCount = rsp["DeleteDiffCount"].GetInt64();
        m_deleteDiffCountHasBeenSet = true;
    }

    if (rsp.HasMember("Operator") && !rsp["Operator"].IsNull())
    {
        if (!rsp["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(rsp["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = rsp["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeContractComparisonTaskResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_originalFileResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalFileResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalFileResourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_diffFileResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiffFileResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diffFileResourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_totalDiffCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalDiffCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalDiffCount, allocator);
    }

    if (m_addDiffCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddDiffCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_addDiffCount, allocator);
    }

    if (m_changeDiffCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChangeDiffCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_changeDiffCount, allocator);
    }

    if (m_deleteDiffCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteDiffCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleteDiffCount, allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
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


string DescribeContractComparisonTaskResponse::GetTaskId() const
{
    return m_taskId;
}

bool DescribeContractComparisonTaskResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t DescribeContractComparisonTaskResponse::GetStatus() const
{
    return m_status;
}

bool DescribeContractComparisonTaskResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeContractComparisonTaskResponse::GetMessage() const
{
    return m_message;
}

bool DescribeContractComparisonTaskResponse::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string DescribeContractComparisonTaskResponse::GetOriginalFileResourceId() const
{
    return m_originalFileResourceId;
}

bool DescribeContractComparisonTaskResponse::OriginalFileResourceIdHasBeenSet() const
{
    return m_originalFileResourceIdHasBeenSet;
}

string DescribeContractComparisonTaskResponse::GetDiffFileResourceId() const
{
    return m_diffFileResourceId;
}

bool DescribeContractComparisonTaskResponse::DiffFileResourceIdHasBeenSet() const
{
    return m_diffFileResourceIdHasBeenSet;
}

string DescribeContractComparisonTaskResponse::GetComment() const
{
    return m_comment;
}

bool DescribeContractComparisonTaskResponse::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

int64_t DescribeContractComparisonTaskResponse::GetTotalDiffCount() const
{
    return m_totalDiffCount;
}

bool DescribeContractComparisonTaskResponse::TotalDiffCountHasBeenSet() const
{
    return m_totalDiffCountHasBeenSet;
}

int64_t DescribeContractComparisonTaskResponse::GetAddDiffCount() const
{
    return m_addDiffCount;
}

bool DescribeContractComparisonTaskResponse::AddDiffCountHasBeenSet() const
{
    return m_addDiffCountHasBeenSet;
}

int64_t DescribeContractComparisonTaskResponse::GetChangeDiffCount() const
{
    return m_changeDiffCount;
}

bool DescribeContractComparisonTaskResponse::ChangeDiffCountHasBeenSet() const
{
    return m_changeDiffCountHasBeenSet;
}

int64_t DescribeContractComparisonTaskResponse::GetDeleteDiffCount() const
{
    return m_deleteDiffCount;
}

bool DescribeContractComparisonTaskResponse::DeleteDiffCountHasBeenSet() const
{
    return m_deleteDiffCountHasBeenSet;
}

string DescribeContractComparisonTaskResponse::GetOperator() const
{
    return m_operator;
}

bool DescribeContractComparisonTaskResponse::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

int64_t DescribeContractComparisonTaskResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeContractComparisonTaskResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}


