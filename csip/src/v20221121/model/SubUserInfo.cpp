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

#include <tencentcloud/csip/v20221121/model/SubUserInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

SubUserInfo::SubUserInfo() :
    m_iDHasBeenSet(false),
    m_appIDHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_ownerAppIDHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_ownerNickNameHasBeenSet(false),
    m_ownerMemberIDHasBeenSet(false),
    m_cloudTypeHasBeenSet(false),
    m_serviceCountHasBeenSet(false),
    m_interfaceCountHasBeenSet(false),
    m_assetCountHasBeenSet(false),
    m_logCountHasBeenSet(false),
    m_configRiskCountHasBeenSet(false),
    m_actionRiskCountHasBeenSet(false),
    m_isAccessCloudAuditHasBeenSet(false),
    m_isAccessCheckHasBeenSet(false),
    m_isAccessUebaHasBeenSet(false)
{
}

CoreInternalOutcome SubUserInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubUserInfo.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubUserInfo.AppID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appID = string(value["AppID"].GetString());
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubUserInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("NickName") && !value["NickName"].IsNull())
    {
        if (!value["NickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubUserInfo.NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(value["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerAppID") && !value["OwnerAppID"].IsNull())
    {
        if (!value["OwnerAppID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubUserInfo.OwnerAppID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAppID = string(value["OwnerAppID"].GetString());
        m_ownerAppIDHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubUserInfo.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("OwnerNickName") && !value["OwnerNickName"].IsNull())
    {
        if (!value["OwnerNickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubUserInfo.OwnerNickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerNickName = string(value["OwnerNickName"].GetString());
        m_ownerNickNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerMemberID") && !value["OwnerMemberID"].IsNull())
    {
        if (!value["OwnerMemberID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubUserInfo.OwnerMemberID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerMemberID = string(value["OwnerMemberID"].GetString());
        m_ownerMemberIDHasBeenSet = true;
    }

    if (value.HasMember("CloudType") && !value["CloudType"].IsNull())
    {
        if (!value["CloudType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubUserInfo.CloudType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cloudType = value["CloudType"].GetInt64();
        m_cloudTypeHasBeenSet = true;
    }

    if (value.HasMember("ServiceCount") && !value["ServiceCount"].IsNull())
    {
        if (!value["ServiceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubUserInfo.ServiceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_serviceCount = value["ServiceCount"].GetInt64();
        m_serviceCountHasBeenSet = true;
    }

    if (value.HasMember("InterfaceCount") && !value["InterfaceCount"].IsNull())
    {
        if (!value["InterfaceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubUserInfo.InterfaceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_interfaceCount = value["InterfaceCount"].GetInt64();
        m_interfaceCountHasBeenSet = true;
    }

    if (value.HasMember("AssetCount") && !value["AssetCount"].IsNull())
    {
        if (!value["AssetCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubUserInfo.AssetCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assetCount = value["AssetCount"].GetInt64();
        m_assetCountHasBeenSet = true;
    }

    if (value.HasMember("LogCount") && !value["LogCount"].IsNull())
    {
        if (!value["LogCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubUserInfo.LogCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logCount = value["LogCount"].GetInt64();
        m_logCountHasBeenSet = true;
    }

    if (value.HasMember("ConfigRiskCount") && !value["ConfigRiskCount"].IsNull())
    {
        if (!value["ConfigRiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubUserInfo.ConfigRiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_configRiskCount = value["ConfigRiskCount"].GetInt64();
        m_configRiskCountHasBeenSet = true;
    }

    if (value.HasMember("ActionRiskCount") && !value["ActionRiskCount"].IsNull())
    {
        if (!value["ActionRiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubUserInfo.ActionRiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_actionRiskCount = value["ActionRiskCount"].GetInt64();
        m_actionRiskCountHasBeenSet = true;
    }

    if (value.HasMember("IsAccessCloudAudit") && !value["IsAccessCloudAudit"].IsNull())
    {
        if (!value["IsAccessCloudAudit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SubUserInfo.IsAccessCloudAudit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAccessCloudAudit = value["IsAccessCloudAudit"].GetBool();
        m_isAccessCloudAuditHasBeenSet = true;
    }

    if (value.HasMember("IsAccessCheck") && !value["IsAccessCheck"].IsNull())
    {
        if (!value["IsAccessCheck"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SubUserInfo.IsAccessCheck` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAccessCheck = value["IsAccessCheck"].GetBool();
        m_isAccessCheckHasBeenSet = true;
    }

    if (value.HasMember("IsAccessUeba") && !value["IsAccessUeba"].IsNull())
    {
        if (!value["IsAccessUeba"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SubUserInfo.IsAccessUeba` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAccessUeba = value["IsAccessUeba"].GetBool();
        m_isAccessUebaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubUserInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appID.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_nickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerAppIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerAppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerAppID.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerNickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerNickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerNickName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerMemberIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerMemberID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerMemberID.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cloudType, allocator);
    }

    if (m_serviceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serviceCount, allocator);
    }

    if (m_interfaceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InterfaceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interfaceCount, allocator);
    }

    if (m_assetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetCount, allocator);
    }

    if (m_logCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logCount, allocator);
    }

    if (m_configRiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigRiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_configRiskCount, allocator);
    }

    if (m_actionRiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionRiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_actionRiskCount, allocator);
    }

    if (m_isAccessCloudAuditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAccessCloudAudit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAccessCloudAudit, allocator);
    }

    if (m_isAccessCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAccessCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAccessCheck, allocator);
    }

    if (m_isAccessUebaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAccessUeba";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAccessUeba, allocator);
    }

}


int64_t SubUserInfo::GetID() const
{
    return m_iD;
}

void SubUserInfo::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool SubUserInfo::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string SubUserInfo::GetAppID() const
{
    return m_appID;
}

void SubUserInfo::SetAppID(const string& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool SubUserInfo::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string SubUserInfo::GetUin() const
{
    return m_uin;
}

void SubUserInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool SubUserInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string SubUserInfo::GetNickName() const
{
    return m_nickName;
}

void SubUserInfo::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool SubUserInfo::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

string SubUserInfo::GetOwnerAppID() const
{
    return m_ownerAppID;
}

void SubUserInfo::SetOwnerAppID(const string& _ownerAppID)
{
    m_ownerAppID = _ownerAppID;
    m_ownerAppIDHasBeenSet = true;
}

bool SubUserInfo::OwnerAppIDHasBeenSet() const
{
    return m_ownerAppIDHasBeenSet;
}

string SubUserInfo::GetOwnerUin() const
{
    return m_ownerUin;
}

void SubUserInfo::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool SubUserInfo::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string SubUserInfo::GetOwnerNickName() const
{
    return m_ownerNickName;
}

void SubUserInfo::SetOwnerNickName(const string& _ownerNickName)
{
    m_ownerNickName = _ownerNickName;
    m_ownerNickNameHasBeenSet = true;
}

bool SubUserInfo::OwnerNickNameHasBeenSet() const
{
    return m_ownerNickNameHasBeenSet;
}

string SubUserInfo::GetOwnerMemberID() const
{
    return m_ownerMemberID;
}

void SubUserInfo::SetOwnerMemberID(const string& _ownerMemberID)
{
    m_ownerMemberID = _ownerMemberID;
    m_ownerMemberIDHasBeenSet = true;
}

bool SubUserInfo::OwnerMemberIDHasBeenSet() const
{
    return m_ownerMemberIDHasBeenSet;
}

int64_t SubUserInfo::GetCloudType() const
{
    return m_cloudType;
}

void SubUserInfo::SetCloudType(const int64_t& _cloudType)
{
    m_cloudType = _cloudType;
    m_cloudTypeHasBeenSet = true;
}

bool SubUserInfo::CloudTypeHasBeenSet() const
{
    return m_cloudTypeHasBeenSet;
}

int64_t SubUserInfo::GetServiceCount() const
{
    return m_serviceCount;
}

void SubUserInfo::SetServiceCount(const int64_t& _serviceCount)
{
    m_serviceCount = _serviceCount;
    m_serviceCountHasBeenSet = true;
}

bool SubUserInfo::ServiceCountHasBeenSet() const
{
    return m_serviceCountHasBeenSet;
}

int64_t SubUserInfo::GetInterfaceCount() const
{
    return m_interfaceCount;
}

void SubUserInfo::SetInterfaceCount(const int64_t& _interfaceCount)
{
    m_interfaceCount = _interfaceCount;
    m_interfaceCountHasBeenSet = true;
}

bool SubUserInfo::InterfaceCountHasBeenSet() const
{
    return m_interfaceCountHasBeenSet;
}

int64_t SubUserInfo::GetAssetCount() const
{
    return m_assetCount;
}

void SubUserInfo::SetAssetCount(const int64_t& _assetCount)
{
    m_assetCount = _assetCount;
    m_assetCountHasBeenSet = true;
}

bool SubUserInfo::AssetCountHasBeenSet() const
{
    return m_assetCountHasBeenSet;
}

int64_t SubUserInfo::GetLogCount() const
{
    return m_logCount;
}

void SubUserInfo::SetLogCount(const int64_t& _logCount)
{
    m_logCount = _logCount;
    m_logCountHasBeenSet = true;
}

bool SubUserInfo::LogCountHasBeenSet() const
{
    return m_logCountHasBeenSet;
}

int64_t SubUserInfo::GetConfigRiskCount() const
{
    return m_configRiskCount;
}

void SubUserInfo::SetConfigRiskCount(const int64_t& _configRiskCount)
{
    m_configRiskCount = _configRiskCount;
    m_configRiskCountHasBeenSet = true;
}

bool SubUserInfo::ConfigRiskCountHasBeenSet() const
{
    return m_configRiskCountHasBeenSet;
}

int64_t SubUserInfo::GetActionRiskCount() const
{
    return m_actionRiskCount;
}

void SubUserInfo::SetActionRiskCount(const int64_t& _actionRiskCount)
{
    m_actionRiskCount = _actionRiskCount;
    m_actionRiskCountHasBeenSet = true;
}

bool SubUserInfo::ActionRiskCountHasBeenSet() const
{
    return m_actionRiskCountHasBeenSet;
}

bool SubUserInfo::GetIsAccessCloudAudit() const
{
    return m_isAccessCloudAudit;
}

void SubUserInfo::SetIsAccessCloudAudit(const bool& _isAccessCloudAudit)
{
    m_isAccessCloudAudit = _isAccessCloudAudit;
    m_isAccessCloudAuditHasBeenSet = true;
}

bool SubUserInfo::IsAccessCloudAuditHasBeenSet() const
{
    return m_isAccessCloudAuditHasBeenSet;
}

bool SubUserInfo::GetIsAccessCheck() const
{
    return m_isAccessCheck;
}

void SubUserInfo::SetIsAccessCheck(const bool& _isAccessCheck)
{
    m_isAccessCheck = _isAccessCheck;
    m_isAccessCheckHasBeenSet = true;
}

bool SubUserInfo::IsAccessCheckHasBeenSet() const
{
    return m_isAccessCheckHasBeenSet;
}

bool SubUserInfo::GetIsAccessUeba() const
{
    return m_isAccessUeba;
}

void SubUserInfo::SetIsAccessUeba(const bool& _isAccessUeba)
{
    m_isAccessUeba = _isAccessUeba;
    m_isAccessUebaHasBeenSet = true;
}

bool SubUserInfo::IsAccessUebaHasBeenSet() const
{
    return m_isAccessUebaHasBeenSet;
}

