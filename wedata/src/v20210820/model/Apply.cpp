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

#include <tencentcloud/wedata/v20210820/model/Apply.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

Apply::Apply() :
    m_applicantIdHasBeenSet(false),
    m_applicantNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_approveClassificationHasBeenSet(false),
    m_approveIdHasBeenSet(false),
    m_approveTypeHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_approveTimeHasBeenSet(false),
    m_approveClassificationNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_approveTypeNameHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_applyNameHasBeenSet(false),
    m_approverIdHasBeenSet(false),
    m_approverNameHasBeenSet(false),
    m_approveProjectNameHasBeenSet(false),
    m_applyIdHasBeenSet(false),
    m_metadataHasBeenSet(false)
{
}

CoreInternalOutcome Apply::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApplicantId") && !value["ApplicantId"].IsNull())
    {
        if (!value["ApplicantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Apply.ApplicantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicantId = string(value["ApplicantId"].GetString());
        m_applicantIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicantName") && !value["ApplicantName"].IsNull())
    {
        if (!value["ApplicantName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Apply.ApplicantName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicantName = string(value["ApplicantName"].GetString());
        m_applicantNameHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Apply.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("ApproveClassification") && !value["ApproveClassification"].IsNull())
    {
        if (!value["ApproveClassification"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Apply.ApproveClassification` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approveClassification = string(value["ApproveClassification"].GetString());
        m_approveClassificationHasBeenSet = true;
    }

    if (value.HasMember("ApproveId") && !value["ApproveId"].IsNull())
    {
        if (!value["ApproveId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Apply.ApproveId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approveId = string(value["ApproveId"].GetString());
        m_approveIdHasBeenSet = true;
    }

    if (value.HasMember("ApproveType") && !value["ApproveType"].IsNull())
    {
        if (!value["ApproveType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Apply.ApproveType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approveType = string(value["ApproveType"].GetString());
        m_approveTypeHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Apply.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Apply.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ApproveTime") && !value["ApproveTime"].IsNull())
    {
        if (!value["ApproveTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Apply.ApproveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approveTime = string(value["ApproveTime"].GetString());
        m_approveTimeHasBeenSet = true;
    }

    if (value.HasMember("ApproveClassificationName") && !value["ApproveClassificationName"].IsNull())
    {
        if (!value["ApproveClassificationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Apply.ApproveClassificationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approveClassificationName = string(value["ApproveClassificationName"].GetString());
        m_approveClassificationNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Apply.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ApproveTypeName") && !value["ApproveTypeName"].IsNull())
    {
        if (!value["ApproveTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Apply.ApproveTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approveTypeName = string(value["ApproveTypeName"].GetString());
        m_approveTypeNameHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Apply.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (value.HasMember("ApplyName") && !value["ApplyName"].IsNull())
    {
        if (!value["ApplyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Apply.ApplyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyName = string(value["ApplyName"].GetString());
        m_applyNameHasBeenSet = true;
    }

    if (value.HasMember("ApproverId") && !value["ApproverId"].IsNull())
    {
        if (!value["ApproverId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Apply.ApproverId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverId = string(value["ApproverId"].GetString());
        m_approverIdHasBeenSet = true;
    }

    if (value.HasMember("ApproverName") && !value["ApproverName"].IsNull())
    {
        if (!value["ApproverName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Apply.ApproverName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverName = string(value["ApproverName"].GetString());
        m_approverNameHasBeenSet = true;
    }

    if (value.HasMember("ApproveProjectName") && !value["ApproveProjectName"].IsNull())
    {
        if (!value["ApproveProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Apply.ApproveProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approveProjectName = string(value["ApproveProjectName"].GetString());
        m_approveProjectNameHasBeenSet = true;
    }

    if (value.HasMember("ApplyId") && !value["ApplyId"].IsNull())
    {
        if (!value["ApplyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Apply.ApplyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyId = string(value["ApplyId"].GetString());
        m_applyIdHasBeenSet = true;
    }

    if (value.HasMember("Metadata") && !value["Metadata"].IsNull())
    {
        if (!value["Metadata"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Apply.Metadata` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metadata = string(value["Metadata"].GetString());
        m_metadataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Apply::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_applicantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicantId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicantNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicantName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicantName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_approveClassificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveClassification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approveClassification.c_str(), allocator).Move(), allocator);
    }

    if (m_approveIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approveId.c_str(), allocator).Move(), allocator);
    }

    if (m_approveTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approveType.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_approveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approveTime.c_str(), allocator).Move(), allocator);
    }

    if (m_approveClassificationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveClassificationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approveClassificationName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_approveTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approveTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_applyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applyName.c_str(), allocator).Move(), allocator);
    }

    if (m_approverIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverId.c_str(), allocator).Move(), allocator);
    }

    if (m_approverNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverName.c_str(), allocator).Move(), allocator);
    }

    if (m_approveProjectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approveProjectName.c_str(), allocator).Move(), allocator);
    }

    if (m_applyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applyId.c_str(), allocator).Move(), allocator);
    }

    if (m_metadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadata";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metadata.c_str(), allocator).Move(), allocator);
    }

}


string Apply::GetApplicantId() const
{
    return m_applicantId;
}

void Apply::SetApplicantId(const string& _applicantId)
{
    m_applicantId = _applicantId;
    m_applicantIdHasBeenSet = true;
}

bool Apply::ApplicantIdHasBeenSet() const
{
    return m_applicantIdHasBeenSet;
}

string Apply::GetApplicantName() const
{
    return m_applicantName;
}

void Apply::SetApplicantName(const string& _applicantName)
{
    m_applicantName = _applicantName;
    m_applicantNameHasBeenSet = true;
}

bool Apply::ApplicantNameHasBeenSet() const
{
    return m_applicantNameHasBeenSet;
}

string Apply::GetRemark() const
{
    return m_remark;
}

void Apply::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool Apply::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string Apply::GetApproveClassification() const
{
    return m_approveClassification;
}

void Apply::SetApproveClassification(const string& _approveClassification)
{
    m_approveClassification = _approveClassification;
    m_approveClassificationHasBeenSet = true;
}

bool Apply::ApproveClassificationHasBeenSet() const
{
    return m_approveClassificationHasBeenSet;
}

string Apply::GetApproveId() const
{
    return m_approveId;
}

void Apply::SetApproveId(const string& _approveId)
{
    m_approveId = _approveId;
    m_approveIdHasBeenSet = true;
}

bool Apply::ApproveIdHasBeenSet() const
{
    return m_approveIdHasBeenSet;
}

string Apply::GetApproveType() const
{
    return m_approveType;
}

void Apply::SetApproveType(const string& _approveType)
{
    m_approveType = _approveType;
    m_approveTypeHasBeenSet = true;
}

bool Apply::ApproveTypeHasBeenSet() const
{
    return m_approveTypeHasBeenSet;
}

string Apply::GetReason() const
{
    return m_reason;
}

void Apply::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool Apply::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

string Apply::GetCreateTime() const
{
    return m_createTime;
}

void Apply::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Apply::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Apply::GetApproveTime() const
{
    return m_approveTime;
}

void Apply::SetApproveTime(const string& _approveTime)
{
    m_approveTime = _approveTime;
    m_approveTimeHasBeenSet = true;
}

bool Apply::ApproveTimeHasBeenSet() const
{
    return m_approveTimeHasBeenSet;
}

string Apply::GetApproveClassificationName() const
{
    return m_approveClassificationName;
}

void Apply::SetApproveClassificationName(const string& _approveClassificationName)
{
    m_approveClassificationName = _approveClassificationName;
    m_approveClassificationNameHasBeenSet = true;
}

bool Apply::ApproveClassificationNameHasBeenSet() const
{
    return m_approveClassificationNameHasBeenSet;
}

string Apply::GetStatus() const
{
    return m_status;
}

void Apply::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Apply::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string Apply::GetApproveTypeName() const
{
    return m_approveTypeName;
}

void Apply::SetApproveTypeName(const string& _approveTypeName)
{
    m_approveTypeName = _approveTypeName;
    m_approveTypeNameHasBeenSet = true;
}

bool Apply::ApproveTypeNameHasBeenSet() const
{
    return m_approveTypeNameHasBeenSet;
}

string Apply::GetErrorMessage() const
{
    return m_errorMessage;
}

void Apply::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool Apply::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

string Apply::GetApplyName() const
{
    return m_applyName;
}

void Apply::SetApplyName(const string& _applyName)
{
    m_applyName = _applyName;
    m_applyNameHasBeenSet = true;
}

bool Apply::ApplyNameHasBeenSet() const
{
    return m_applyNameHasBeenSet;
}

string Apply::GetApproverId() const
{
    return m_approverId;
}

void Apply::SetApproverId(const string& _approverId)
{
    m_approverId = _approverId;
    m_approverIdHasBeenSet = true;
}

bool Apply::ApproverIdHasBeenSet() const
{
    return m_approverIdHasBeenSet;
}

string Apply::GetApproverName() const
{
    return m_approverName;
}

void Apply::SetApproverName(const string& _approverName)
{
    m_approverName = _approverName;
    m_approverNameHasBeenSet = true;
}

bool Apply::ApproverNameHasBeenSet() const
{
    return m_approverNameHasBeenSet;
}

string Apply::GetApproveProjectName() const
{
    return m_approveProjectName;
}

void Apply::SetApproveProjectName(const string& _approveProjectName)
{
    m_approveProjectName = _approveProjectName;
    m_approveProjectNameHasBeenSet = true;
}

bool Apply::ApproveProjectNameHasBeenSet() const
{
    return m_approveProjectNameHasBeenSet;
}

string Apply::GetApplyId() const
{
    return m_applyId;
}

void Apply::SetApplyId(const string& _applyId)
{
    m_applyId = _applyId;
    m_applyIdHasBeenSet = true;
}

bool Apply::ApplyIdHasBeenSet() const
{
    return m_applyIdHasBeenSet;
}

string Apply::GetMetadata() const
{
    return m_metadata;
}

void Apply::SetMetadata(const string& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool Apply::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}

