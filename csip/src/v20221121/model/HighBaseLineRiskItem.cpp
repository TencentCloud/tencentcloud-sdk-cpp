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

#include <tencentcloud/csip/v20221121/model/HighBaseLineRiskItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

HighBaseLineRiskItem::HighBaseLineRiskItem() :
    m_cloudAccountIDHasBeenSet(false),
    m_assetIDHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_riskNameHasBeenSet(false),
    m_riskCategoryHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_riskDescHasBeenSet(false),
    m_riskResultHasBeenSet(false),
    m_fixAdviceHasBeenSet(false),
    m_riskCategoryNameHasBeenSet(false),
    m_riskLevelNameHasBeenSet(false),
    m_instanceStatusNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_appIDHasBeenSet(false)
{
}

CoreInternalOutcome HighBaseLineRiskItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CloudAccountID") && !value["CloudAccountID"].IsNull())
    {
        if (!value["CloudAccountID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighBaseLineRiskItem.CloudAccountID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloudAccountID = string(value["CloudAccountID"].GetString());
        m_cloudAccountIDHasBeenSet = true;
    }

    if (value.HasMember("AssetID") && !value["AssetID"].IsNull())
    {
        if (!value["AssetID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighBaseLineRiskItem.AssetID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetID = string(value["AssetID"].GetString());
        m_assetIDHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighBaseLineRiskItem.InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(value["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighBaseLineRiskItem.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("RiskName") && !value["RiskName"].IsNull())
    {
        if (!value["RiskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighBaseLineRiskItem.RiskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskName = string(value["RiskName"].GetString());
        m_riskNameHasBeenSet = true;
    }

    if (value.HasMember("RiskCategory") && !value["RiskCategory"].IsNull())
    {
        if (!value["RiskCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighBaseLineRiskItem.RiskCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskCategory = string(value["RiskCategory"].GetString());
        m_riskCategoryHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighBaseLineRiskItem.RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(value["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("RiskDesc") && !value["RiskDesc"].IsNull())
    {
        if (!value["RiskDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighBaseLineRiskItem.RiskDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskDesc = string(value["RiskDesc"].GetString());
        m_riskDescHasBeenSet = true;
    }

    if (value.HasMember("RiskResult") && !value["RiskResult"].IsNull())
    {
        if (!value["RiskResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighBaseLineRiskItem.RiskResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskResult = string(value["RiskResult"].GetString());
        m_riskResultHasBeenSet = true;
    }

    if (value.HasMember("FixAdvice") && !value["FixAdvice"].IsNull())
    {
        if (!value["FixAdvice"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighBaseLineRiskItem.FixAdvice` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fixAdvice = string(value["FixAdvice"].GetString());
        m_fixAdviceHasBeenSet = true;
    }

    if (value.HasMember("RiskCategoryName") && !value["RiskCategoryName"].IsNull())
    {
        if (!value["RiskCategoryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighBaseLineRiskItem.RiskCategoryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskCategoryName = string(value["RiskCategoryName"].GetString());
        m_riskCategoryNameHasBeenSet = true;
    }

    if (value.HasMember("RiskLevelName") && !value["RiskLevelName"].IsNull())
    {
        if (!value["RiskLevelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighBaseLineRiskItem.RiskLevelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevelName = string(value["RiskLevelName"].GetString());
        m_riskLevelNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatusName") && !value["InstanceStatusName"].IsNull())
    {
        if (!value["InstanceStatusName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighBaseLineRiskItem.InstanceStatusName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatusName = string(value["InstanceStatusName"].GetString());
        m_instanceStatusNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighBaseLineRiskItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighBaseLineRiskItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HighBaseLineRiskItem.AppID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetUint64();
        m_appIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HighBaseLineRiskItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cloudAccountIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudAccountID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cloudAccountID.c_str(), allocator).Move(), allocator);
    }

    if (m_assetIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetID.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_riskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskName.c_str(), allocator).Move(), allocator);
    }

    if (m_riskCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_riskDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_riskResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskResult.c_str(), allocator).Move(), allocator);
    }

    if (m_fixAdviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixAdvice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fixAdvice.c_str(), allocator).Move(), allocator);
    }

    if (m_riskCategoryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCategoryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskCategoryName.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevelName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStatusNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatusName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStatusName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

}


string HighBaseLineRiskItem::GetCloudAccountID() const
{
    return m_cloudAccountID;
}

void HighBaseLineRiskItem::SetCloudAccountID(const string& _cloudAccountID)
{
    m_cloudAccountID = _cloudAccountID;
    m_cloudAccountIDHasBeenSet = true;
}

bool HighBaseLineRiskItem::CloudAccountIDHasBeenSet() const
{
    return m_cloudAccountIDHasBeenSet;
}

string HighBaseLineRiskItem::GetAssetID() const
{
    return m_assetID;
}

void HighBaseLineRiskItem::SetAssetID(const string& _assetID)
{
    m_assetID = _assetID;
    m_assetIDHasBeenSet = true;
}

bool HighBaseLineRiskItem::AssetIDHasBeenSet() const
{
    return m_assetIDHasBeenSet;
}

string HighBaseLineRiskItem::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void HighBaseLineRiskItem::SetInstanceStatus(const string& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool HighBaseLineRiskItem::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

string HighBaseLineRiskItem::GetInstanceName() const
{
    return m_instanceName;
}

void HighBaseLineRiskItem::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool HighBaseLineRiskItem::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string HighBaseLineRiskItem::GetRiskName() const
{
    return m_riskName;
}

void HighBaseLineRiskItem::SetRiskName(const string& _riskName)
{
    m_riskName = _riskName;
    m_riskNameHasBeenSet = true;
}

bool HighBaseLineRiskItem::RiskNameHasBeenSet() const
{
    return m_riskNameHasBeenSet;
}

string HighBaseLineRiskItem::GetRiskCategory() const
{
    return m_riskCategory;
}

void HighBaseLineRiskItem::SetRiskCategory(const string& _riskCategory)
{
    m_riskCategory = _riskCategory;
    m_riskCategoryHasBeenSet = true;
}

bool HighBaseLineRiskItem::RiskCategoryHasBeenSet() const
{
    return m_riskCategoryHasBeenSet;
}

string HighBaseLineRiskItem::GetRiskLevel() const
{
    return m_riskLevel;
}

void HighBaseLineRiskItem::SetRiskLevel(const string& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool HighBaseLineRiskItem::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string HighBaseLineRiskItem::GetRiskDesc() const
{
    return m_riskDesc;
}

void HighBaseLineRiskItem::SetRiskDesc(const string& _riskDesc)
{
    m_riskDesc = _riskDesc;
    m_riskDescHasBeenSet = true;
}

bool HighBaseLineRiskItem::RiskDescHasBeenSet() const
{
    return m_riskDescHasBeenSet;
}

string HighBaseLineRiskItem::GetRiskResult() const
{
    return m_riskResult;
}

void HighBaseLineRiskItem::SetRiskResult(const string& _riskResult)
{
    m_riskResult = _riskResult;
    m_riskResultHasBeenSet = true;
}

bool HighBaseLineRiskItem::RiskResultHasBeenSet() const
{
    return m_riskResultHasBeenSet;
}

string HighBaseLineRiskItem::GetFixAdvice() const
{
    return m_fixAdvice;
}

void HighBaseLineRiskItem::SetFixAdvice(const string& _fixAdvice)
{
    m_fixAdvice = _fixAdvice;
    m_fixAdviceHasBeenSet = true;
}

bool HighBaseLineRiskItem::FixAdviceHasBeenSet() const
{
    return m_fixAdviceHasBeenSet;
}

string HighBaseLineRiskItem::GetRiskCategoryName() const
{
    return m_riskCategoryName;
}

void HighBaseLineRiskItem::SetRiskCategoryName(const string& _riskCategoryName)
{
    m_riskCategoryName = _riskCategoryName;
    m_riskCategoryNameHasBeenSet = true;
}

bool HighBaseLineRiskItem::RiskCategoryNameHasBeenSet() const
{
    return m_riskCategoryNameHasBeenSet;
}

string HighBaseLineRiskItem::GetRiskLevelName() const
{
    return m_riskLevelName;
}

void HighBaseLineRiskItem::SetRiskLevelName(const string& _riskLevelName)
{
    m_riskLevelName = _riskLevelName;
    m_riskLevelNameHasBeenSet = true;
}

bool HighBaseLineRiskItem::RiskLevelNameHasBeenSet() const
{
    return m_riskLevelNameHasBeenSet;
}

string HighBaseLineRiskItem::GetInstanceStatusName() const
{
    return m_instanceStatusName;
}

void HighBaseLineRiskItem::SetInstanceStatusName(const string& _instanceStatusName)
{
    m_instanceStatusName = _instanceStatusName;
    m_instanceStatusNameHasBeenSet = true;
}

bool HighBaseLineRiskItem::InstanceStatusNameHasBeenSet() const
{
    return m_instanceStatusNameHasBeenSet;
}

string HighBaseLineRiskItem::GetCreateTime() const
{
    return m_createTime;
}

void HighBaseLineRiskItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool HighBaseLineRiskItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string HighBaseLineRiskItem::GetUpdateTime() const
{
    return m_updateTime;
}

void HighBaseLineRiskItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool HighBaseLineRiskItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t HighBaseLineRiskItem::GetAppID() const
{
    return m_appID;
}

void HighBaseLineRiskItem::SetAppID(const uint64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool HighBaseLineRiskItem::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

