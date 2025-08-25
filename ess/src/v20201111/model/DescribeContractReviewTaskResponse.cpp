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

#include <tencentcloud/ess/v20201111/model/DescribeContractReviewTaskResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

DescribeContractReviewTaskResponse::DescribeContractReviewTaskResponse() :
    m_checklistIdHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_finishedOnHasBeenSet(false),
    m_policyTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_risksHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_highRiskCountHasBeenSet(false),
    m_totalRiskCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeContractReviewTaskResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ChecklistId") && !rsp["ChecklistId"].IsNull())
    {
        if (!rsp["ChecklistId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChecklistId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checklistId = string(rsp["ChecklistId"].GetString());
        m_checklistIdHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedOn") && !rsp["CreatedOn"].IsNull())
    {
        if (!rsp["CreatedOn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreatedOn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = rsp["CreatedOn"].GetInt64();
        m_createdOnHasBeenSet = true;
    }

    if (rsp.HasMember("FinishedOn") && !rsp["FinishedOn"].IsNull())
    {
        if (!rsp["FinishedOn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FinishedOn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_finishedOn = rsp["FinishedOn"].GetInt64();
        m_finishedOnHasBeenSet = true;
    }

    if (rsp.HasMember("PolicyType") && !rsp["PolicyType"].IsNull())
    {
        if (!rsp["PolicyType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyType = rsp["PolicyType"].GetInt64();
        m_policyTypeHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceId") && !rsp["ResourceId"].IsNull())
    {
        if (!rsp["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(rsp["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (rsp.HasMember("Risks") && !rsp["Risks"].IsNull())
    {
        if (!rsp["Risks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Risks` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Risks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OutputRisk item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_risks.push_back(item);
        }
        m_risksHasBeenSet = true;
    }

    if (rsp.HasMember("Role") && !rsp["Role"].IsNull())
    {
        if (!rsp["Role"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Role` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_role.Deserialize(rsp["Role"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_roleHasBeenSet = true;
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

    if (rsp.HasMember("TaskId") && !rsp["TaskId"].IsNull())
    {
        if (!rsp["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(rsp["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
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

    if (rsp.HasMember("UserData") && !rsp["UserData"].IsNull())
    {
        if (!rsp["UserData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userData = string(rsp["UserData"].GetString());
        m_userDataHasBeenSet = true;
    }

    if (rsp.HasMember("HighRiskCount") && !rsp["HighRiskCount"].IsNull())
    {
        if (!rsp["HighRiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HighRiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_highRiskCount = rsp["HighRiskCount"].GetInt64();
        m_highRiskCountHasBeenSet = true;
    }

    if (rsp.HasMember("TotalRiskCount") && !rsp["TotalRiskCount"].IsNull())
    {
        if (!rsp["TotalRiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalRiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRiskCount = rsp["TotalRiskCount"].GetInt64();
        m_totalRiskCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeContractReviewTaskResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_checklistIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChecklistId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checklistId.c_str(), allocator).Move(), allocator);
    }

    if (m_createdOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdOn, allocator);
    }

    if (m_finishedOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_finishedOn, allocator);
    }

    if (m_policyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyType, allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_risksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Risks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_risks.begin(); itr != m_risks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_role.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_userDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userData.c_str(), allocator).Move(), allocator);
    }

    if (m_highRiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighRiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highRiskCount, allocator);
    }

    if (m_totalRiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalRiskCount, allocator);
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


string DescribeContractReviewTaskResponse::GetChecklistId() const
{
    return m_checklistId;
}

bool DescribeContractReviewTaskResponse::ChecklistIdHasBeenSet() const
{
    return m_checklistIdHasBeenSet;
}

int64_t DescribeContractReviewTaskResponse::GetCreatedOn() const
{
    return m_createdOn;
}

bool DescribeContractReviewTaskResponse::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

int64_t DescribeContractReviewTaskResponse::GetFinishedOn() const
{
    return m_finishedOn;
}

bool DescribeContractReviewTaskResponse::FinishedOnHasBeenSet() const
{
    return m_finishedOnHasBeenSet;
}

int64_t DescribeContractReviewTaskResponse::GetPolicyType() const
{
    return m_policyType;
}

bool DescribeContractReviewTaskResponse::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

string DescribeContractReviewTaskResponse::GetResourceId() const
{
    return m_resourceId;
}

bool DescribeContractReviewTaskResponse::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

vector<OutputRisk> DescribeContractReviewTaskResponse::GetRisks() const
{
    return m_risks;
}

bool DescribeContractReviewTaskResponse::RisksHasBeenSet() const
{
    return m_risksHasBeenSet;
}

RiskIdentificationRoleInfo DescribeContractReviewTaskResponse::GetRole() const
{
    return m_role;
}

bool DescribeContractReviewTaskResponse::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

int64_t DescribeContractReviewTaskResponse::GetStatus() const
{
    return m_status;
}

bool DescribeContractReviewTaskResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeContractReviewTaskResponse::GetTaskId() const
{
    return m_taskId;
}

bool DescribeContractReviewTaskResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DescribeContractReviewTaskResponse::GetComment() const
{
    return m_comment;
}

bool DescribeContractReviewTaskResponse::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string DescribeContractReviewTaskResponse::GetUserData() const
{
    return m_userData;
}

bool DescribeContractReviewTaskResponse::UserDataHasBeenSet() const
{
    return m_userDataHasBeenSet;
}

int64_t DescribeContractReviewTaskResponse::GetHighRiskCount() const
{
    return m_highRiskCount;
}

bool DescribeContractReviewTaskResponse::HighRiskCountHasBeenSet() const
{
    return m_highRiskCountHasBeenSet;
}

int64_t DescribeContractReviewTaskResponse::GetTotalRiskCount() const
{
    return m_totalRiskCount;
}

bool DescribeContractReviewTaskResponse::TotalRiskCountHasBeenSet() const
{
    return m_totalRiskCountHasBeenSet;
}


