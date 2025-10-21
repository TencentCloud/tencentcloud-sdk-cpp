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

#include <tencentcloud/ctem/v20231128/model/DisplayToolCommon.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

DisplayToolCommon::DisplayToolCommon() :
    m_enterpriseUidHasBeenSet(false),
    m_enterpriseNameHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_jobStageIdHasBeenSet(false),
    m_ignoredHasBeenSet(false),
    m_jobRecordIdHasBeenSet(false),
    m_customerIdHasBeenSet(false),
    m_customerNameHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_md5HasBeenSet(false),
    m_createAtHasBeenSet(false),
    m_updateAtHasBeenSet(false),
    m_labelsHasBeenSet(false)
{
}

CoreInternalOutcome DisplayToolCommon::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnterpriseUid") && !value["EnterpriseUid"].IsNull())
    {
        if (!value["EnterpriseUid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayToolCommon.EnterpriseUid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enterpriseUid = string(value["EnterpriseUid"].GetString());
        m_enterpriseUidHasBeenSet = true;
    }

    if (value.HasMember("EnterpriseName") && !value["EnterpriseName"].IsNull())
    {
        if (!value["EnterpriseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayToolCommon.EnterpriseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enterpriseName = string(value["EnterpriseName"].GetString());
        m_enterpriseNameHasBeenSet = true;
    }

    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayToolCommon.JobId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = value["JobId"].GetInt64();
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("JobStageId") && !value["JobStageId"].IsNull())
    {
        if (!value["JobStageId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayToolCommon.JobStageId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobStageId = value["JobStageId"].GetInt64();
        m_jobStageIdHasBeenSet = true;
    }

    if (value.HasMember("Ignored") && !value["Ignored"].IsNull())
    {
        if (!value["Ignored"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayToolCommon.Ignored` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_ignored = value["Ignored"].GetBool();
        m_ignoredHasBeenSet = true;
    }

    if (value.HasMember("JobRecordId") && !value["JobRecordId"].IsNull())
    {
        if (!value["JobRecordId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayToolCommon.JobRecordId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobRecordId = value["JobRecordId"].GetInt64();
        m_jobRecordIdHasBeenSet = true;
    }

    if (value.HasMember("CustomerId") && !value["CustomerId"].IsNull())
    {
        if (!value["CustomerId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayToolCommon.CustomerId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_customerId = value["CustomerId"].GetInt64();
        m_customerIdHasBeenSet = true;
    }

    if (value.HasMember("CustomerName") && !value["CustomerName"].IsNull())
    {
        if (!value["CustomerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayToolCommon.CustomerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerName = string(value["CustomerName"].GetString());
        m_customerNameHasBeenSet = true;
    }

    if (value.HasMember("Detail") && !value["Detail"].IsNull())
    {
        if (!value["Detail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayToolCommon.Detail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detail = string(value["Detail"].GetString());
        m_detailHasBeenSet = true;
    }

    if (value.HasMember("Md5") && !value["Md5"].IsNull())
    {
        if (!value["Md5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayToolCommon.Md5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_md5 = string(value["Md5"].GetString());
        m_md5HasBeenSet = true;
    }

    if (value.HasMember("CreateAt") && !value["CreateAt"].IsNull())
    {
        if (!value["CreateAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayToolCommon.CreateAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createAt = string(value["CreateAt"].GetString());
        m_createAtHasBeenSet = true;
    }

    if (value.HasMember("UpdateAt") && !value["UpdateAt"].IsNull())
    {
        if (!value["UpdateAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayToolCommon.UpdateAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateAt = string(value["UpdateAt"].GetString());
        m_updateAtHasBeenSet = true;
    }

    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayToolCommon.Labels` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labels = string(value["Labels"].GetString());
        m_labelsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DisplayToolCommon::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enterpriseUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnterpriseUid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enterpriseUid.c_str(), allocator).Move(), allocator);
    }

    if (m_enterpriseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnterpriseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enterpriseName.c_str(), allocator).Move(), allocator);
    }

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobId, allocator);
    }

    if (m_jobStageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobStageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobStageId, allocator);
    }

    if (m_ignoredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ignored";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ignored, allocator);
    }

    if (m_jobRecordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobRecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobRecordId, allocator);
    }

    if (m_customerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_customerId, allocator);
    }

    if (m_customerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerName.c_str(), allocator).Move(), allocator);
    }

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detail.c_str(), allocator).Move(), allocator);
    }

    if (m_md5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Md5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_md5.c_str(), allocator).Move(), allocator);
    }

    if (m_createAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updateAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateAt.c_str(), allocator).Move(), allocator);
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labels.c_str(), allocator).Move(), allocator);
    }

}


string DisplayToolCommon::GetEnterpriseUid() const
{
    return m_enterpriseUid;
}

void DisplayToolCommon::SetEnterpriseUid(const string& _enterpriseUid)
{
    m_enterpriseUid = _enterpriseUid;
    m_enterpriseUidHasBeenSet = true;
}

bool DisplayToolCommon::EnterpriseUidHasBeenSet() const
{
    return m_enterpriseUidHasBeenSet;
}

string DisplayToolCommon::GetEnterpriseName() const
{
    return m_enterpriseName;
}

void DisplayToolCommon::SetEnterpriseName(const string& _enterpriseName)
{
    m_enterpriseName = _enterpriseName;
    m_enterpriseNameHasBeenSet = true;
}

bool DisplayToolCommon::EnterpriseNameHasBeenSet() const
{
    return m_enterpriseNameHasBeenSet;
}

int64_t DisplayToolCommon::GetJobId() const
{
    return m_jobId;
}

void DisplayToolCommon::SetJobId(const int64_t& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool DisplayToolCommon::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

int64_t DisplayToolCommon::GetJobStageId() const
{
    return m_jobStageId;
}

void DisplayToolCommon::SetJobStageId(const int64_t& _jobStageId)
{
    m_jobStageId = _jobStageId;
    m_jobStageIdHasBeenSet = true;
}

bool DisplayToolCommon::JobStageIdHasBeenSet() const
{
    return m_jobStageIdHasBeenSet;
}

bool DisplayToolCommon::GetIgnored() const
{
    return m_ignored;
}

void DisplayToolCommon::SetIgnored(const bool& _ignored)
{
    m_ignored = _ignored;
    m_ignoredHasBeenSet = true;
}

bool DisplayToolCommon::IgnoredHasBeenSet() const
{
    return m_ignoredHasBeenSet;
}

int64_t DisplayToolCommon::GetJobRecordId() const
{
    return m_jobRecordId;
}

void DisplayToolCommon::SetJobRecordId(const int64_t& _jobRecordId)
{
    m_jobRecordId = _jobRecordId;
    m_jobRecordIdHasBeenSet = true;
}

bool DisplayToolCommon::JobRecordIdHasBeenSet() const
{
    return m_jobRecordIdHasBeenSet;
}

int64_t DisplayToolCommon::GetCustomerId() const
{
    return m_customerId;
}

void DisplayToolCommon::SetCustomerId(const int64_t& _customerId)
{
    m_customerId = _customerId;
    m_customerIdHasBeenSet = true;
}

bool DisplayToolCommon::CustomerIdHasBeenSet() const
{
    return m_customerIdHasBeenSet;
}

string DisplayToolCommon::GetCustomerName() const
{
    return m_customerName;
}

void DisplayToolCommon::SetCustomerName(const string& _customerName)
{
    m_customerName = _customerName;
    m_customerNameHasBeenSet = true;
}

bool DisplayToolCommon::CustomerNameHasBeenSet() const
{
    return m_customerNameHasBeenSet;
}

string DisplayToolCommon::GetDetail() const
{
    return m_detail;
}

void DisplayToolCommon::SetDetail(const string& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool DisplayToolCommon::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

string DisplayToolCommon::GetMd5() const
{
    return m_md5;
}

void DisplayToolCommon::SetMd5(const string& _md5)
{
    m_md5 = _md5;
    m_md5HasBeenSet = true;
}

bool DisplayToolCommon::Md5HasBeenSet() const
{
    return m_md5HasBeenSet;
}

string DisplayToolCommon::GetCreateAt() const
{
    return m_createAt;
}

void DisplayToolCommon::SetCreateAt(const string& _createAt)
{
    m_createAt = _createAt;
    m_createAtHasBeenSet = true;
}

bool DisplayToolCommon::CreateAtHasBeenSet() const
{
    return m_createAtHasBeenSet;
}

string DisplayToolCommon::GetUpdateAt() const
{
    return m_updateAt;
}

void DisplayToolCommon::SetUpdateAt(const string& _updateAt)
{
    m_updateAt = _updateAt;
    m_updateAtHasBeenSet = true;
}

bool DisplayToolCommon::UpdateAtHasBeenSet() const
{
    return m_updateAtHasBeenSet;
}

string DisplayToolCommon::GetLabels() const
{
    return m_labels;
}

void DisplayToolCommon::SetLabels(const string& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool DisplayToolCommon::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

