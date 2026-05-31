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

#include <tencentcloud/tokenhub/v20260322/model/TokenPlanListItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

TokenPlanListItem::TokenPlanListItem() :
    m_teamIdHasBeenSet(false),
    m_productTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_stopReasonHasBeenSet(false),
    m_apiKeyMaxHasBeenSet(false),
    m_prepayResourceIDHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_packageInfoHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false)
{
}

CoreInternalOutcome TokenPlanListItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TeamId") && !value["TeamId"].IsNull())
    {
        if (!value["TeamId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanListItem.TeamId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_teamId = string(value["TeamId"].GetString());
        m_teamIdHasBeenSet = true;
    }

    if (value.HasMember("ProductType") && !value["ProductType"].IsNull())
    {
        if (!value["ProductType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanListItem.ProductType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productType = string(value["ProductType"].GetString());
        m_productTypeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanListItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanListItem.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanListItem.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanListItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StopReason") && !value["StopReason"].IsNull())
    {
        if (!value["StopReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanListItem.StopReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stopReason = string(value["StopReason"].GetString());
        m_stopReasonHasBeenSet = true;
    }

    if (value.HasMember("ApiKeyMax") && !value["ApiKeyMax"].IsNull())
    {
        if (!value["ApiKeyMax"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanListItem.ApiKeyMax` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_apiKeyMax = value["ApiKeyMax"].GetInt64();
        m_apiKeyMaxHasBeenSet = true;
    }

    if (value.HasMember("PrepayResourceID") && !value["PrepayResourceID"].IsNull())
    {
        if (!value["PrepayResourceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanListItem.PrepayResourceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prepayResourceID = string(value["PrepayResourceID"].GetString());
        m_prepayResourceIDHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanListItem.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanListItem.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanListItem.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("PackageInfo") && !value["PackageInfo"].IsNull())
    {
        if (!value["PackageInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanListItem.PackageInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_packageInfo.Deserialize(value["PackageInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_packageInfoHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanListItem.AutoRenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetInt64();
        m_autoRenewFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TokenPlanListItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_teamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeamId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_teamId.c_str(), allocator).Move(), allocator);
    }

    if (m_productTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productType.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_stopReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StopReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stopReason.c_str(), allocator).Move(), allocator);
    }

    if (m_apiKeyMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKeyMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_apiKeyMax, allocator);
    }

    if (m_prepayResourceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrepayResourceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prepayResourceID.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_packageInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_packageInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

}


string TokenPlanListItem::GetTeamId() const
{
    return m_teamId;
}

void TokenPlanListItem::SetTeamId(const string& _teamId)
{
    m_teamId = _teamId;
    m_teamIdHasBeenSet = true;
}

bool TokenPlanListItem::TeamIdHasBeenSet() const
{
    return m_teamIdHasBeenSet;
}

string TokenPlanListItem::GetProductType() const
{
    return m_productType;
}

void TokenPlanListItem::SetProductType(const string& _productType)
{
    m_productType = _productType;
    m_productTypeHasBeenSet = true;
}

bool TokenPlanListItem::ProductTypeHasBeenSet() const
{
    return m_productTypeHasBeenSet;
}

string TokenPlanListItem::GetName() const
{
    return m_name;
}

void TokenPlanListItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TokenPlanListItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string TokenPlanListItem::GetAppId() const
{
    return m_appId;
}

void TokenPlanListItem::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool TokenPlanListItem::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string TokenPlanListItem::GetUin() const
{
    return m_uin;
}

void TokenPlanListItem::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool TokenPlanListItem::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string TokenPlanListItem::GetStatus() const
{
    return m_status;
}

void TokenPlanListItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TokenPlanListItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string TokenPlanListItem::GetStopReason() const
{
    return m_stopReason;
}

void TokenPlanListItem::SetStopReason(const string& _stopReason)
{
    m_stopReason = _stopReason;
    m_stopReasonHasBeenSet = true;
}

bool TokenPlanListItem::StopReasonHasBeenSet() const
{
    return m_stopReasonHasBeenSet;
}

int64_t TokenPlanListItem::GetApiKeyMax() const
{
    return m_apiKeyMax;
}

void TokenPlanListItem::SetApiKeyMax(const int64_t& _apiKeyMax)
{
    m_apiKeyMax = _apiKeyMax;
    m_apiKeyMaxHasBeenSet = true;
}

bool TokenPlanListItem::ApiKeyMaxHasBeenSet() const
{
    return m_apiKeyMaxHasBeenSet;
}

string TokenPlanListItem::GetPrepayResourceID() const
{
    return m_prepayResourceID;
}

void TokenPlanListItem::SetPrepayResourceID(const string& _prepayResourceID)
{
    m_prepayResourceID = _prepayResourceID;
    m_prepayResourceIDHasBeenSet = true;
}

bool TokenPlanListItem::PrepayResourceIDHasBeenSet() const
{
    return m_prepayResourceIDHasBeenSet;
}

string TokenPlanListItem::GetCreator() const
{
    return m_creator;
}

void TokenPlanListItem::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool TokenPlanListItem::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string TokenPlanListItem::GetCreatedAt() const
{
    return m_createdAt;
}

void TokenPlanListItem::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool TokenPlanListItem::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string TokenPlanListItem::GetUpdatedAt() const
{
    return m_updatedAt;
}

void TokenPlanListItem::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool TokenPlanListItem::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

TokenPlanPackageInfo TokenPlanListItem::GetPackageInfo() const
{
    return m_packageInfo;
}

void TokenPlanListItem::SetPackageInfo(const TokenPlanPackageInfo& _packageInfo)
{
    m_packageInfo = _packageInfo;
    m_packageInfoHasBeenSet = true;
}

bool TokenPlanListItem::PackageInfoHasBeenSet() const
{
    return m_packageInfoHasBeenSet;
}

int64_t TokenPlanListItem::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void TokenPlanListItem::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool TokenPlanListItem::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

