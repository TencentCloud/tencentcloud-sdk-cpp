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

#include <tencentcloud/ccc/v20200210/model/ExtensionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

ExtensionInfo::ExtensionInfo() :
    m_sdkAppIdHasBeenSet(false),
    m_fullExtensionIdHasBeenSet(false),
    m_extensionIdHasBeenSet(false),
    m_skillGroupIdHasBeenSet(false),
    m_extensionNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_registerHasBeenSet(false),
    m_relationHasBeenSet(false),
    m_relationNameHasBeenSet(false)
{
}

CoreInternalOutcome ExtensionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SdkAppId") && !value["SdkAppId"].IsNull())
    {
        if (!value["SdkAppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExtensionInfo.SdkAppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sdkAppId = value["SdkAppId"].GetInt64();
        m_sdkAppIdHasBeenSet = true;
    }

    if (value.HasMember("FullExtensionId") && !value["FullExtensionId"].IsNull())
    {
        if (!value["FullExtensionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtensionInfo.FullExtensionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fullExtensionId = string(value["FullExtensionId"].GetString());
        m_fullExtensionIdHasBeenSet = true;
    }

    if (value.HasMember("ExtensionId") && !value["ExtensionId"].IsNull())
    {
        if (!value["ExtensionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtensionInfo.ExtensionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extensionId = string(value["ExtensionId"].GetString());
        m_extensionIdHasBeenSet = true;
    }

    if (value.HasMember("SkillGroupId") && !value["SkillGroupId"].IsNull())
    {
        if (!value["SkillGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtensionInfo.SkillGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skillGroupId = string(value["SkillGroupId"].GetString());
        m_skillGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ExtensionName") && !value["ExtensionName"].IsNull())
    {
        if (!value["ExtensionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtensionInfo.ExtensionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extensionName = string(value["ExtensionName"].GetString());
        m_extensionNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExtensionInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExtensionInfo.ModifyTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = value["ModifyTime"].GetInt64();
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExtensionInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Register") && !value["Register"].IsNull())
    {
        if (!value["Register"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ExtensionInfo.Register` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_register = value["Register"].GetBool();
        m_registerHasBeenSet = true;
    }

    if (value.HasMember("Relation") && !value["Relation"].IsNull())
    {
        if (!value["Relation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtensionInfo.Relation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relation = string(value["Relation"].GetString());
        m_relationHasBeenSet = true;
    }

    if (value.HasMember("RelationName") && !value["RelationName"].IsNull())
    {
        if (!value["RelationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtensionInfo.RelationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relationName = string(value["RelationName"].GetString());
        m_relationNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExtensionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_fullExtensionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullExtensionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fullExtensionId.c_str(), allocator).Move(), allocator);
    }

    if (m_extensionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtensionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extensionId.c_str(), allocator).Move(), allocator);
    }

    if (m_skillGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skillGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_extensionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtensionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extensionName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modifyTime, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_registerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Register";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_register, allocator);
    }

    if (m_relationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Relation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relation.c_str(), allocator).Move(), allocator);
    }

    if (m_relationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relationName.c_str(), allocator).Move(), allocator);
    }

}


int64_t ExtensionInfo::GetSdkAppId() const
{
    return m_sdkAppId;
}

void ExtensionInfo::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool ExtensionInfo::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string ExtensionInfo::GetFullExtensionId() const
{
    return m_fullExtensionId;
}

void ExtensionInfo::SetFullExtensionId(const string& _fullExtensionId)
{
    m_fullExtensionId = _fullExtensionId;
    m_fullExtensionIdHasBeenSet = true;
}

bool ExtensionInfo::FullExtensionIdHasBeenSet() const
{
    return m_fullExtensionIdHasBeenSet;
}

string ExtensionInfo::GetExtensionId() const
{
    return m_extensionId;
}

void ExtensionInfo::SetExtensionId(const string& _extensionId)
{
    m_extensionId = _extensionId;
    m_extensionIdHasBeenSet = true;
}

bool ExtensionInfo::ExtensionIdHasBeenSet() const
{
    return m_extensionIdHasBeenSet;
}

string ExtensionInfo::GetSkillGroupId() const
{
    return m_skillGroupId;
}

void ExtensionInfo::SetSkillGroupId(const string& _skillGroupId)
{
    m_skillGroupId = _skillGroupId;
    m_skillGroupIdHasBeenSet = true;
}

bool ExtensionInfo::SkillGroupIdHasBeenSet() const
{
    return m_skillGroupIdHasBeenSet;
}

string ExtensionInfo::GetExtensionName() const
{
    return m_extensionName;
}

void ExtensionInfo::SetExtensionName(const string& _extensionName)
{
    m_extensionName = _extensionName;
    m_extensionNameHasBeenSet = true;
}

bool ExtensionInfo::ExtensionNameHasBeenSet() const
{
    return m_extensionNameHasBeenSet;
}

int64_t ExtensionInfo::GetCreateTime() const
{
    return m_createTime;
}

void ExtensionInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ExtensionInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t ExtensionInfo::GetModifyTime() const
{
    return m_modifyTime;
}

void ExtensionInfo::SetModifyTime(const int64_t& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool ExtensionInfo::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

int64_t ExtensionInfo::GetStatus() const
{
    return m_status;
}

void ExtensionInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ExtensionInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool ExtensionInfo::GetRegister() const
{
    return m_register;
}

void ExtensionInfo::SetRegister(const bool& _register)
{
    m_register = _register;
    m_registerHasBeenSet = true;
}

bool ExtensionInfo::RegisterHasBeenSet() const
{
    return m_registerHasBeenSet;
}

string ExtensionInfo::GetRelation() const
{
    return m_relation;
}

void ExtensionInfo::SetRelation(const string& _relation)
{
    m_relation = _relation;
    m_relationHasBeenSet = true;
}

bool ExtensionInfo::RelationHasBeenSet() const
{
    return m_relationHasBeenSet;
}

string ExtensionInfo::GetRelationName() const
{
    return m_relationName;
}

void ExtensionInfo::SetRelationName(const string& _relationName)
{
    m_relationName = _relationName;
    m_relationNameHasBeenSet = true;
}

bool ExtensionInfo::RelationNameHasBeenSet() const
{
    return m_relationNameHasBeenSet;
}

