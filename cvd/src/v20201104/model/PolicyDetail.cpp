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

#include <tencentcloud/cvd/v20201104/model/PolicyDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvd::V20201104::Model;
using namespace std;

PolicyDetail::PolicyDetail() :
    m_policyIdHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_userIdsHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_filePolicyIdHasBeenSet(false),
    m_clipPolicyIdHasBeenSet(false),
    m_drivePolicyIdHasBeenSet(false),
    m_waterMarkPolicyIdHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_totalUserHasBeenSet(false)
{
}

CoreInternalOutcome PolicyDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyDetail.PolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = string(value["PolicyId"].GetString());
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyName") && !value["PolicyName"].IsNull())
    {
        if (!value["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyDetail.PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(value["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyDetail.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("UserIds") && !value["UserIds"].IsNull())
    {
        if (!value["UserIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PolicyDetail.UserIds` is not array type"));

        const rapidjson::Value &tmpValue = value["UserIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_userIds.push_back((*itr).GetString());
        }
        m_userIdsHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyDetail.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("FilePolicyId") && !value["FilePolicyId"].IsNull())
    {
        if (!value["FilePolicyId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyDetail.FilePolicyId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_filePolicyId = value["FilePolicyId"].GetInt64();
        m_filePolicyIdHasBeenSet = true;
    }

    if (value.HasMember("ClipPolicyId") && !value["ClipPolicyId"].IsNull())
    {
        if (!value["ClipPolicyId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyDetail.ClipPolicyId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clipPolicyId = value["ClipPolicyId"].GetInt64();
        m_clipPolicyIdHasBeenSet = true;
    }

    if (value.HasMember("DrivePolicyId") && !value["DrivePolicyId"].IsNull())
    {
        if (!value["DrivePolicyId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyDetail.DrivePolicyId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_drivePolicyId = value["DrivePolicyId"].GetInt64();
        m_drivePolicyIdHasBeenSet = true;
    }

    if (value.HasMember("WaterMarkPolicyId") && !value["WaterMarkPolicyId"].IsNull())
    {
        if (!value["WaterMarkPolicyId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyDetail.WaterMarkPolicyId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_waterMarkPolicyId = value["WaterMarkPolicyId"].GetInt64();
        m_waterMarkPolicyIdHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyDetail.IsDefault` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetBool();
        m_isDefaultHasBeenSet = true;
    }

    if (value.HasMember("TotalUser") && !value["TotalUser"].IsNull())
    {
        if (!value["TotalUser"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyDetail.TotalUser` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalUser = value["TotalUser"].GetInt64();
        m_totalUserHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PolicyDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyId.c_str(), allocator).Move(), allocator);
    }

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_userIds.begin(); itr != m_userIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_filePolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_filePolicyId, allocator);
    }

    if (m_clipPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClipPolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clipPolicyId, allocator);
    }

    if (m_drivePolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrivePolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_drivePolicyId, allocator);
    }

    if (m_waterMarkPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaterMarkPolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_waterMarkPolicyId, allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

    if (m_totalUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalUser, allocator);
    }

}


string PolicyDetail::GetPolicyId() const
{
    return m_policyId;
}

void PolicyDetail::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool PolicyDetail::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string PolicyDetail::GetPolicyName() const
{
    return m_policyName;
}

void PolicyDetail::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool PolicyDetail::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

string PolicyDetail::GetDescription() const
{
    return m_description;
}

void PolicyDetail::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool PolicyDetail::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<string> PolicyDetail::GetUserIds() const
{
    return m_userIds;
}

void PolicyDetail::SetUserIds(const vector<string>& _userIds)
{
    m_userIds = _userIds;
    m_userIdsHasBeenSet = true;
}

bool PolicyDetail::UserIdsHasBeenSet() const
{
    return m_userIdsHasBeenSet;
}

string PolicyDetail::GetUin() const
{
    return m_uin;
}

void PolicyDetail::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool PolicyDetail::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

int64_t PolicyDetail::GetFilePolicyId() const
{
    return m_filePolicyId;
}

void PolicyDetail::SetFilePolicyId(const int64_t& _filePolicyId)
{
    m_filePolicyId = _filePolicyId;
    m_filePolicyIdHasBeenSet = true;
}

bool PolicyDetail::FilePolicyIdHasBeenSet() const
{
    return m_filePolicyIdHasBeenSet;
}

int64_t PolicyDetail::GetClipPolicyId() const
{
    return m_clipPolicyId;
}

void PolicyDetail::SetClipPolicyId(const int64_t& _clipPolicyId)
{
    m_clipPolicyId = _clipPolicyId;
    m_clipPolicyIdHasBeenSet = true;
}

bool PolicyDetail::ClipPolicyIdHasBeenSet() const
{
    return m_clipPolicyIdHasBeenSet;
}

int64_t PolicyDetail::GetDrivePolicyId() const
{
    return m_drivePolicyId;
}

void PolicyDetail::SetDrivePolicyId(const int64_t& _drivePolicyId)
{
    m_drivePolicyId = _drivePolicyId;
    m_drivePolicyIdHasBeenSet = true;
}

bool PolicyDetail::DrivePolicyIdHasBeenSet() const
{
    return m_drivePolicyIdHasBeenSet;
}

int64_t PolicyDetail::GetWaterMarkPolicyId() const
{
    return m_waterMarkPolicyId;
}

void PolicyDetail::SetWaterMarkPolicyId(const int64_t& _waterMarkPolicyId)
{
    m_waterMarkPolicyId = _waterMarkPolicyId;
    m_waterMarkPolicyIdHasBeenSet = true;
}

bool PolicyDetail::WaterMarkPolicyIdHasBeenSet() const
{
    return m_waterMarkPolicyIdHasBeenSet;
}

bool PolicyDetail::GetIsDefault() const
{
    return m_isDefault;
}

void PolicyDetail::SetIsDefault(const bool& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool PolicyDetail::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

int64_t PolicyDetail::GetTotalUser() const
{
    return m_totalUser;
}

void PolicyDetail::SetTotalUser(const int64_t& _totalUser)
{
    m_totalUser = _totalUser;
    m_totalUserHasBeenSet = true;
}

bool PolicyDetail::TotalUserHasBeenSet() const
{
    return m_totalUserHasBeenSet;
}

