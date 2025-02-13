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

#include <tencentcloud/trocket/v20230308/model/RoleItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

RoleItem::RoleItem() :
    m_roleNameHasBeenSet(false),
    m_permReadHasBeenSet(false),
    m_permWriteHasBeenSet(false),
    m_accessKeyHasBeenSet(false),
    m_secretKeyHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
    m_permTypeHasBeenSet(false),
    m_detailedRolePermsHasBeenSet(false)
{
}

CoreInternalOutcome RoleItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoleName") && !value["RoleName"].IsNull())
    {
        if (!value["RoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleItem.RoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleName = string(value["RoleName"].GetString());
        m_roleNameHasBeenSet = true;
    }

    if (value.HasMember("PermRead") && !value["PermRead"].IsNull())
    {
        if (!value["PermRead"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RoleItem.PermRead` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_permRead = value["PermRead"].GetBool();
        m_permReadHasBeenSet = true;
    }

    if (value.HasMember("PermWrite") && !value["PermWrite"].IsNull())
    {
        if (!value["PermWrite"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RoleItem.PermWrite` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_permWrite = value["PermWrite"].GetBool();
        m_permWriteHasBeenSet = true;
    }

    if (value.HasMember("AccessKey") && !value["AccessKey"].IsNull())
    {
        if (!value["AccessKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleItem.AccessKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessKey = string(value["AccessKey"].GetString());
        m_accessKeyHasBeenSet = true;
    }

    if (value.HasMember("SecretKey") && !value["SecretKey"].IsNull())
    {
        if (!value["SecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleItem.SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKey = string(value["SecretKey"].GetString());
        m_secretKeyHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleItem.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoleItem.CreatedTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = value["CreatedTime"].GetInt64();
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoleItem.ModifiedTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = value["ModifiedTime"].GetInt64();
        m_modifiedTimeHasBeenSet = true;
    }

    if (value.HasMember("PermType") && !value["PermType"].IsNull())
    {
        if (!value["PermType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleItem.PermType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_permType = string(value["PermType"].GetString());
        m_permTypeHasBeenSet = true;
    }

    if (value.HasMember("DetailedRolePerms") && !value["DetailedRolePerms"].IsNull())
    {
        if (!value["DetailedRolePerms"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RoleItem.DetailedRolePerms` is not array type"));

        const rapidjson::Value &tmpValue = value["DetailedRolePerms"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DetailedRolePerm item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_detailedRolePerms.push_back(item);
        }
        m_detailedRolePermsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoleItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleName.c_str(), allocator).Move(), allocator);
    }

    if (m_permReadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermRead";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_permRead, allocator);
    }

    if (m_permWriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermWrite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_permWrite, allocator);
    }

    if (m_accessKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessKey.c_str(), allocator).Move(), allocator);
    }

    if (m_secretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdTime, allocator);
    }

    if (m_modifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modifiedTime, allocator);
    }

    if (m_permTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_permType.c_str(), allocator).Move(), allocator);
    }

    if (m_detailedRolePermsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetailedRolePerms";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_detailedRolePerms.begin(); itr != m_detailedRolePerms.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string RoleItem::GetRoleName() const
{
    return m_roleName;
}

void RoleItem::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool RoleItem::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

bool RoleItem::GetPermRead() const
{
    return m_permRead;
}

void RoleItem::SetPermRead(const bool& _permRead)
{
    m_permRead = _permRead;
    m_permReadHasBeenSet = true;
}

bool RoleItem::PermReadHasBeenSet() const
{
    return m_permReadHasBeenSet;
}

bool RoleItem::GetPermWrite() const
{
    return m_permWrite;
}

void RoleItem::SetPermWrite(const bool& _permWrite)
{
    m_permWrite = _permWrite;
    m_permWriteHasBeenSet = true;
}

bool RoleItem::PermWriteHasBeenSet() const
{
    return m_permWriteHasBeenSet;
}

string RoleItem::GetAccessKey() const
{
    return m_accessKey;
}

void RoleItem::SetAccessKey(const string& _accessKey)
{
    m_accessKey = _accessKey;
    m_accessKeyHasBeenSet = true;
}

bool RoleItem::AccessKeyHasBeenSet() const
{
    return m_accessKeyHasBeenSet;
}

string RoleItem::GetSecretKey() const
{
    return m_secretKey;
}

void RoleItem::SetSecretKey(const string& _secretKey)
{
    m_secretKey = _secretKey;
    m_secretKeyHasBeenSet = true;
}

bool RoleItem::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

string RoleItem::GetRemark() const
{
    return m_remark;
}

void RoleItem::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool RoleItem::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t RoleItem::GetCreatedTime() const
{
    return m_createdTime;
}

void RoleItem::SetCreatedTime(const int64_t& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool RoleItem::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

int64_t RoleItem::GetModifiedTime() const
{
    return m_modifiedTime;
}

void RoleItem::SetModifiedTime(const int64_t& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool RoleItem::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

string RoleItem::GetPermType() const
{
    return m_permType;
}

void RoleItem::SetPermType(const string& _permType)
{
    m_permType = _permType;
    m_permTypeHasBeenSet = true;
}

bool RoleItem::PermTypeHasBeenSet() const
{
    return m_permTypeHasBeenSet;
}

vector<DetailedRolePerm> RoleItem::GetDetailedRolePerms() const
{
    return m_detailedRolePerms;
}

void RoleItem::SetDetailedRolePerms(const vector<DetailedRolePerm>& _detailedRolePerms)
{
    m_detailedRolePerms = _detailedRolePerms;
    m_detailedRolePermsHasBeenSet = true;
}

bool RoleItem::DetailedRolePermsHasBeenSet() const
{
    return m_detailedRolePermsHasBeenSet;
}

