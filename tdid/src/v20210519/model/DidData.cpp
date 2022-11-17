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

#include <tencentcloud/tdid/v20210519/model/DidData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

DidData::DidData() :
    m_serviceIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_didHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_authorityStateHasBeenSet(false),
    m_labelNameHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_allianceNameHasBeenSet(false),
    m_labelIdHasBeenSet(false)
{
}

CoreInternalOutcome DidData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceId") && !value["ServiceId"].IsNull())
    {
        if (!value["ServiceId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DidData.ServiceId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = value["ServiceId"].GetUint64();
        m_serviceIdHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DidData.GroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = value["GroupId"].GetUint64();
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DidData.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("Did") && !value["Did"].IsNull())
    {
        if (!value["Did"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DidData.Did` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_did = string(value["Did"].GetString());
        m_didHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DidData.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("AuthorityState") && !value["AuthorityState"].IsNull())
    {
        if (!value["AuthorityState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DidData.AuthorityState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authorityState = value["AuthorityState"].GetInt64();
        m_authorityStateHasBeenSet = true;
    }

    if (value.HasMember("LabelName") && !value["LabelName"].IsNull())
    {
        if (!value["LabelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DidData.LabelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelName = string(value["LabelName"].GetString());
        m_labelNameHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DidData.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DidData.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("AllianceName") && !value["AllianceName"].IsNull())
    {
        if (!value["AllianceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DidData.AllianceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_allianceName = string(value["AllianceName"].GetString());
        m_allianceNameHasBeenSet = true;
    }

    if (value.HasMember("LabelId") && !value["LabelId"].IsNull())
    {
        if (!value["LabelId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DidData.LabelId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_labelId = value["LabelId"].GetUint64();
        m_labelIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DidData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serviceId, allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupId, allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_didHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Did";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_did.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_authorityStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorityState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authorityState, allocator);
    }

    if (m_labelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelName.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_allianceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllianceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_allianceName.c_str(), allocator).Move(), allocator);
    }

    if (m_labelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_labelId, allocator);
    }

}


uint64_t DidData::GetServiceId() const
{
    return m_serviceId;
}

void DidData::SetServiceId(const uint64_t& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool DidData::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

uint64_t DidData::GetGroupId() const
{
    return m_groupId;
}

void DidData::SetGroupId(const uint64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DidData::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string DidData::GetAppName() const
{
    return m_appName;
}

void DidData::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool DidData::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string DidData::GetDid() const
{
    return m_did;
}

void DidData::SetDid(const string& _did)
{
    m_did = _did;
    m_didHasBeenSet = true;
}

bool DidData::DidHasBeenSet() const
{
    return m_didHasBeenSet;
}

string DidData::GetRemark() const
{
    return m_remark;
}

void DidData::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool DidData::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t DidData::GetAuthorityState() const
{
    return m_authorityState;
}

void DidData::SetAuthorityState(const int64_t& _authorityState)
{
    m_authorityState = _authorityState;
    m_authorityStateHasBeenSet = true;
}

bool DidData::AuthorityStateHasBeenSet() const
{
    return m_authorityStateHasBeenSet;
}

string DidData::GetLabelName() const
{
    return m_labelName;
}

void DidData::SetLabelName(const string& _labelName)
{
    m_labelName = _labelName;
    m_labelNameHasBeenSet = true;
}

bool DidData::LabelNameHasBeenSet() const
{
    return m_labelNameHasBeenSet;
}

string DidData::GetCreatedAt() const
{
    return m_createdAt;
}

void DidData::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool DidData::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string DidData::GetClusterId() const
{
    return m_clusterId;
}

void DidData::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DidData::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DidData::GetAllianceName() const
{
    return m_allianceName;
}

void DidData::SetAllianceName(const string& _allianceName)
{
    m_allianceName = _allianceName;
    m_allianceNameHasBeenSet = true;
}

bool DidData::AllianceNameHasBeenSet() const
{
    return m_allianceNameHasBeenSet;
}

uint64_t DidData::GetLabelId() const
{
    return m_labelId;
}

void DidData::SetLabelId(const uint64_t& _labelId)
{
    m_labelId = _labelId;
    m_labelIdHasBeenSet = true;
}

bool DidData::LabelIdHasBeenSet() const
{
    return m_labelIdHasBeenSet;
}

