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

#include <tencentcloud/tokenhub/v20260322/model/TokenPlanApiKeyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

TokenPlanApiKeyInfo::TokenPlanApiKeyInfo() :
    m_apiKeyIdHasBeenSet(false),
    m_apiKeyHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_teamIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_allowedModelsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_stopReasonHasBeenSet(false),
    m_useStatusHasBeenSet(false),
    m_keyVersionHasBeenSet(false),
    m_lastRotatedAtHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_tPMHasBeenSet(false),
    m_productTypeHasBeenSet(false)
{
}

CoreInternalOutcome TokenPlanApiKeyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApiKeyId") && !value["ApiKeyId"].IsNull())
    {
        if (!value["ApiKeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanApiKeyInfo.ApiKeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiKeyId = string(value["ApiKeyId"].GetString());
        m_apiKeyIdHasBeenSet = true;
    }

    if (value.HasMember("ApiKey") && !value["ApiKey"].IsNull())
    {
        if (!value["ApiKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanApiKeyInfo.ApiKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiKey = string(value["ApiKey"].GetString());
        m_apiKeyHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanApiKeyInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("TeamId") && !value["TeamId"].IsNull())
    {
        if (!value["TeamId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanApiKeyInfo.TeamId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_teamId = string(value["TeamId"].GetString());
        m_teamIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanApiKeyInfo.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanApiKeyInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("AllowedModels") && !value["AllowedModels"].IsNull())
    {
        if (!value["AllowedModels"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanApiKeyInfo.AllowedModels` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_allowedModels = string(value["AllowedModels"].GetString());
        m_allowedModelsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanApiKeyInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StopReason") && !value["StopReason"].IsNull())
    {
        if (!value["StopReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanApiKeyInfo.StopReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stopReason = string(value["StopReason"].GetString());
        m_stopReasonHasBeenSet = true;
    }

    if (value.HasMember("UseStatus") && !value["UseStatus"].IsNull())
    {
        if (!value["UseStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanApiKeyInfo.UseStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_useStatus = string(value["UseStatus"].GetString());
        m_useStatusHasBeenSet = true;
    }

    if (value.HasMember("KeyVersion") && !value["KeyVersion"].IsNull())
    {
        if (!value["KeyVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanApiKeyInfo.KeyVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_keyVersion = value["KeyVersion"].GetInt64();
        m_keyVersionHasBeenSet = true;
    }

    if (value.HasMember("LastRotatedAt") && !value["LastRotatedAt"].IsNull())
    {
        if (!value["LastRotatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanApiKeyInfo.LastRotatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastRotatedAt = string(value["LastRotatedAt"].GetString());
        m_lastRotatedAtHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanApiKeyInfo.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanApiKeyInfo.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanApiKeyInfo.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("TPM") && !value["TPM"].IsNull())
    {
        if (!value["TPM"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanApiKeyInfo.TPM` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tPM = value["TPM"].GetInt64();
        m_tPMHasBeenSet = true;
    }

    if (value.HasMember("ProductType") && !value["ProductType"].IsNull())
    {
        if (!value["ProductType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanApiKeyInfo.ProductType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productType = string(value["ProductType"].GetString());
        m_productTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TokenPlanApiKeyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_apiKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_apiKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiKey.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_teamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeamId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_teamId.c_str(), allocator).Move(), allocator);
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

    if (m_allowedModelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowedModels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_allowedModels.c_str(), allocator).Move(), allocator);
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

    if (m_useStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_useStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_keyVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keyVersion, allocator);
    }

    if (m_lastRotatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastRotatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastRotatedAt.c_str(), allocator).Move(), allocator);
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

    if (m_tPMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TPM";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tPM, allocator);
    }

    if (m_productTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productType.c_str(), allocator).Move(), allocator);
    }

}


string TokenPlanApiKeyInfo::GetApiKeyId() const
{
    return m_apiKeyId;
}

void TokenPlanApiKeyInfo::SetApiKeyId(const string& _apiKeyId)
{
    m_apiKeyId = _apiKeyId;
    m_apiKeyIdHasBeenSet = true;
}

bool TokenPlanApiKeyInfo::ApiKeyIdHasBeenSet() const
{
    return m_apiKeyIdHasBeenSet;
}

string TokenPlanApiKeyInfo::GetApiKey() const
{
    return m_apiKey;
}

void TokenPlanApiKeyInfo::SetApiKey(const string& _apiKey)
{
    m_apiKey = _apiKey;
    m_apiKeyHasBeenSet = true;
}

bool TokenPlanApiKeyInfo::ApiKeyHasBeenSet() const
{
    return m_apiKeyHasBeenSet;
}

string TokenPlanApiKeyInfo::GetName() const
{
    return m_name;
}

void TokenPlanApiKeyInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TokenPlanApiKeyInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string TokenPlanApiKeyInfo::GetTeamId() const
{
    return m_teamId;
}

void TokenPlanApiKeyInfo::SetTeamId(const string& _teamId)
{
    m_teamId = _teamId;
    m_teamIdHasBeenSet = true;
}

bool TokenPlanApiKeyInfo::TeamIdHasBeenSet() const
{
    return m_teamIdHasBeenSet;
}

string TokenPlanApiKeyInfo::GetAppId() const
{
    return m_appId;
}

void TokenPlanApiKeyInfo::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool TokenPlanApiKeyInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string TokenPlanApiKeyInfo::GetUin() const
{
    return m_uin;
}

void TokenPlanApiKeyInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool TokenPlanApiKeyInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string TokenPlanApiKeyInfo::GetAllowedModels() const
{
    return m_allowedModels;
}

void TokenPlanApiKeyInfo::SetAllowedModels(const string& _allowedModels)
{
    m_allowedModels = _allowedModels;
    m_allowedModelsHasBeenSet = true;
}

bool TokenPlanApiKeyInfo::AllowedModelsHasBeenSet() const
{
    return m_allowedModelsHasBeenSet;
}

string TokenPlanApiKeyInfo::GetStatus() const
{
    return m_status;
}

void TokenPlanApiKeyInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TokenPlanApiKeyInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string TokenPlanApiKeyInfo::GetStopReason() const
{
    return m_stopReason;
}

void TokenPlanApiKeyInfo::SetStopReason(const string& _stopReason)
{
    m_stopReason = _stopReason;
    m_stopReasonHasBeenSet = true;
}

bool TokenPlanApiKeyInfo::StopReasonHasBeenSet() const
{
    return m_stopReasonHasBeenSet;
}

string TokenPlanApiKeyInfo::GetUseStatus() const
{
    return m_useStatus;
}

void TokenPlanApiKeyInfo::SetUseStatus(const string& _useStatus)
{
    m_useStatus = _useStatus;
    m_useStatusHasBeenSet = true;
}

bool TokenPlanApiKeyInfo::UseStatusHasBeenSet() const
{
    return m_useStatusHasBeenSet;
}

int64_t TokenPlanApiKeyInfo::GetKeyVersion() const
{
    return m_keyVersion;
}

void TokenPlanApiKeyInfo::SetKeyVersion(const int64_t& _keyVersion)
{
    m_keyVersion = _keyVersion;
    m_keyVersionHasBeenSet = true;
}

bool TokenPlanApiKeyInfo::KeyVersionHasBeenSet() const
{
    return m_keyVersionHasBeenSet;
}

string TokenPlanApiKeyInfo::GetLastRotatedAt() const
{
    return m_lastRotatedAt;
}

void TokenPlanApiKeyInfo::SetLastRotatedAt(const string& _lastRotatedAt)
{
    m_lastRotatedAt = _lastRotatedAt;
    m_lastRotatedAtHasBeenSet = true;
}

bool TokenPlanApiKeyInfo::LastRotatedAtHasBeenSet() const
{
    return m_lastRotatedAtHasBeenSet;
}

string TokenPlanApiKeyInfo::GetCreator() const
{
    return m_creator;
}

void TokenPlanApiKeyInfo::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool TokenPlanApiKeyInfo::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string TokenPlanApiKeyInfo::GetCreatedAt() const
{
    return m_createdAt;
}

void TokenPlanApiKeyInfo::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool TokenPlanApiKeyInfo::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string TokenPlanApiKeyInfo::GetUpdatedAt() const
{
    return m_updatedAt;
}

void TokenPlanApiKeyInfo::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool TokenPlanApiKeyInfo::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

int64_t TokenPlanApiKeyInfo::GetTPM() const
{
    return m_tPM;
}

void TokenPlanApiKeyInfo::SetTPM(const int64_t& _tPM)
{
    m_tPM = _tPM;
    m_tPMHasBeenSet = true;
}

bool TokenPlanApiKeyInfo::TPMHasBeenSet() const
{
    return m_tPMHasBeenSet;
}

string TokenPlanApiKeyInfo::GetProductType() const
{
    return m_productType;
}

void TokenPlanApiKeyInfo::SetProductType(const string& _productType)
{
    m_productType = _productType;
    m_productTypeHasBeenSet = true;
}

bool TokenPlanApiKeyInfo::ProductTypeHasBeenSet() const
{
    return m_productTypeHasBeenSet;
}

