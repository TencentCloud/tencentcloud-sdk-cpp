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

#include <tencentcloud/dlc/v20210125/model/WorkGroupDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

WorkGroupDetailInfo::WorkGroupDetailInfo() :
    m_workGroupIdHasBeenSet(false),
    m_workGroupNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_userInfoHasBeenSet(false),
    m_dataPolicyInfoHasBeenSet(false),
    m_enginePolicyInfoHasBeenSet(false),
    m_workGroupDescriptionHasBeenSet(false),
    m_rowFilterInfoHasBeenSet(false),
    m_catalogPolicyInfoHasBeenSet(false)
{
}

CoreInternalOutcome WorkGroupDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkGroupId") && !value["WorkGroupId"].IsNull())
    {
        if (!value["WorkGroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkGroupDetailInfo.WorkGroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_workGroupId = value["WorkGroupId"].GetInt64();
        m_workGroupIdHasBeenSet = true;
    }

    if (value.HasMember("WorkGroupName") && !value["WorkGroupName"].IsNull())
    {
        if (!value["WorkGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkGroupDetailInfo.WorkGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workGroupName = string(value["WorkGroupName"].GetString());
        m_workGroupNameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkGroupDetailInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("UserInfo") && !value["UserInfo"].IsNull())
    {
        if (!value["UserInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkGroupDetailInfo.UserInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_userInfo.Deserialize(value["UserInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_userInfoHasBeenSet = true;
    }

    if (value.HasMember("DataPolicyInfo") && !value["DataPolicyInfo"].IsNull())
    {
        if (!value["DataPolicyInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkGroupDetailInfo.DataPolicyInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dataPolicyInfo.Deserialize(value["DataPolicyInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dataPolicyInfoHasBeenSet = true;
    }

    if (value.HasMember("EnginePolicyInfo") && !value["EnginePolicyInfo"].IsNull())
    {
        if (!value["EnginePolicyInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkGroupDetailInfo.EnginePolicyInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_enginePolicyInfo.Deserialize(value["EnginePolicyInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_enginePolicyInfoHasBeenSet = true;
    }

    if (value.HasMember("WorkGroupDescription") && !value["WorkGroupDescription"].IsNull())
    {
        if (!value["WorkGroupDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkGroupDetailInfo.WorkGroupDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workGroupDescription = string(value["WorkGroupDescription"].GetString());
        m_workGroupDescriptionHasBeenSet = true;
    }

    if (value.HasMember("RowFilterInfo") && !value["RowFilterInfo"].IsNull())
    {
        if (!value["RowFilterInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkGroupDetailInfo.RowFilterInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rowFilterInfo.Deserialize(value["RowFilterInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rowFilterInfoHasBeenSet = true;
    }

    if (value.HasMember("CatalogPolicyInfo") && !value["CatalogPolicyInfo"].IsNull())
    {
        if (!value["CatalogPolicyInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkGroupDetailInfo.CatalogPolicyInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_catalogPolicyInfo.Deserialize(value["CatalogPolicyInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_catalogPolicyInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkGroupDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_workGroupId, allocator);
    }

    if (m_workGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_userInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dataPolicyInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataPolicyInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dataPolicyInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_enginePolicyInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnginePolicyInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_enginePolicyInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_workGroupDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkGroupDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workGroupDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_rowFilterInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RowFilterInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rowFilterInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_catalogPolicyInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogPolicyInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_catalogPolicyInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t WorkGroupDetailInfo::GetWorkGroupId() const
{
    return m_workGroupId;
}

void WorkGroupDetailInfo::SetWorkGroupId(const int64_t& _workGroupId)
{
    m_workGroupId = _workGroupId;
    m_workGroupIdHasBeenSet = true;
}

bool WorkGroupDetailInfo::WorkGroupIdHasBeenSet() const
{
    return m_workGroupIdHasBeenSet;
}

string WorkGroupDetailInfo::GetWorkGroupName() const
{
    return m_workGroupName;
}

void WorkGroupDetailInfo::SetWorkGroupName(const string& _workGroupName)
{
    m_workGroupName = _workGroupName;
    m_workGroupNameHasBeenSet = true;
}

bool WorkGroupDetailInfo::WorkGroupNameHasBeenSet() const
{
    return m_workGroupNameHasBeenSet;
}

string WorkGroupDetailInfo::GetType() const
{
    return m_type;
}

void WorkGroupDetailInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool WorkGroupDetailInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

Users WorkGroupDetailInfo::GetUserInfo() const
{
    return m_userInfo;
}

void WorkGroupDetailInfo::SetUserInfo(const Users& _userInfo)
{
    m_userInfo = _userInfo;
    m_userInfoHasBeenSet = true;
}

bool WorkGroupDetailInfo::UserInfoHasBeenSet() const
{
    return m_userInfoHasBeenSet;
}

Policys WorkGroupDetailInfo::GetDataPolicyInfo() const
{
    return m_dataPolicyInfo;
}

void WorkGroupDetailInfo::SetDataPolicyInfo(const Policys& _dataPolicyInfo)
{
    m_dataPolicyInfo = _dataPolicyInfo;
    m_dataPolicyInfoHasBeenSet = true;
}

bool WorkGroupDetailInfo::DataPolicyInfoHasBeenSet() const
{
    return m_dataPolicyInfoHasBeenSet;
}

Policys WorkGroupDetailInfo::GetEnginePolicyInfo() const
{
    return m_enginePolicyInfo;
}

void WorkGroupDetailInfo::SetEnginePolicyInfo(const Policys& _enginePolicyInfo)
{
    m_enginePolicyInfo = _enginePolicyInfo;
    m_enginePolicyInfoHasBeenSet = true;
}

bool WorkGroupDetailInfo::EnginePolicyInfoHasBeenSet() const
{
    return m_enginePolicyInfoHasBeenSet;
}

string WorkGroupDetailInfo::GetWorkGroupDescription() const
{
    return m_workGroupDescription;
}

void WorkGroupDetailInfo::SetWorkGroupDescription(const string& _workGroupDescription)
{
    m_workGroupDescription = _workGroupDescription;
    m_workGroupDescriptionHasBeenSet = true;
}

bool WorkGroupDetailInfo::WorkGroupDescriptionHasBeenSet() const
{
    return m_workGroupDescriptionHasBeenSet;
}

Policys WorkGroupDetailInfo::GetRowFilterInfo() const
{
    return m_rowFilterInfo;
}

void WorkGroupDetailInfo::SetRowFilterInfo(const Policys& _rowFilterInfo)
{
    m_rowFilterInfo = _rowFilterInfo;
    m_rowFilterInfoHasBeenSet = true;
}

bool WorkGroupDetailInfo::RowFilterInfoHasBeenSet() const
{
    return m_rowFilterInfoHasBeenSet;
}

Policy WorkGroupDetailInfo::GetCatalogPolicyInfo() const
{
    return m_catalogPolicyInfo;
}

void WorkGroupDetailInfo::SetCatalogPolicyInfo(const Policy& _catalogPolicyInfo)
{
    m_catalogPolicyInfo = _catalogPolicyInfo;
    m_catalogPolicyInfoHasBeenSet = true;
}

bool WorkGroupDetailInfo::CatalogPolicyInfoHasBeenSet() const
{
    return m_catalogPolicyInfoHasBeenSet;
}

