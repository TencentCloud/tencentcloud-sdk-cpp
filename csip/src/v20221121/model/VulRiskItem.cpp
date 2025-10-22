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

#include <tencentcloud/csip/v20221121/model/VulRiskItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

VulRiskItem::VulRiskItem() :
    m_cloudAccountIDHasBeenSet(false),
    m_assetIDHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_vulNameHasBeenSet(false),
    m_vulCategoryHasBeenSet(false),
    m_vulLevelHasBeenSet(false),
    m_cveIDHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_containerIDHasBeenSet(false),
    m_fixHasBeenSet(false),
    m_vulCategoryNameHasBeenSet(false),
    m_vulLevelNameHasBeenSet(false),
    m_instanceStatusNameHasBeenSet(false),
    m_appIDHasBeenSet(false)
{
}

CoreInternalOutcome VulRiskItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CloudAccountID") && !value["CloudAccountID"].IsNull())
    {
        if (!value["CloudAccountID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulRiskItem.CloudAccountID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloudAccountID = string(value["CloudAccountID"].GetString());
        m_cloudAccountIDHasBeenSet = true;
    }

    if (value.HasMember("AssetID") && !value["AssetID"].IsNull())
    {
        if (!value["AssetID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulRiskItem.AssetID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetID = string(value["AssetID"].GetString());
        m_assetIDHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulRiskItem.InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(value["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulRiskItem.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulRiskItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulRiskItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("VulName") && !value["VulName"].IsNull())
    {
        if (!value["VulName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulRiskItem.VulName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulName = string(value["VulName"].GetString());
        m_vulNameHasBeenSet = true;
    }

    if (value.HasMember("VulCategory") && !value["VulCategory"].IsNull())
    {
        if (!value["VulCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulRiskItem.VulCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulCategory = string(value["VulCategory"].GetString());
        m_vulCategoryHasBeenSet = true;
    }

    if (value.HasMember("VulLevel") && !value["VulLevel"].IsNull())
    {
        if (!value["VulLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulRiskItem.VulLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulLevel = string(value["VulLevel"].GetString());
        m_vulLevelHasBeenSet = true;
    }

    if (value.HasMember("CveID") && !value["CveID"].IsNull())
    {
        if (!value["CveID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulRiskItem.CveID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cveID = string(value["CveID"].GetString());
        m_cveIDHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulRiskItem.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ContainerID") && !value["ContainerID"].IsNull())
    {
        if (!value["ContainerID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulRiskItem.ContainerID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerID = string(value["ContainerID"].GetString());
        m_containerIDHasBeenSet = true;
    }

    if (value.HasMember("Fix") && !value["Fix"].IsNull())
    {
        if (!value["Fix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulRiskItem.Fix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fix = string(value["Fix"].GetString());
        m_fixHasBeenSet = true;
    }

    if (value.HasMember("VulCategoryName") && !value["VulCategoryName"].IsNull())
    {
        if (!value["VulCategoryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulRiskItem.VulCategoryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulCategoryName = string(value["VulCategoryName"].GetString());
        m_vulCategoryNameHasBeenSet = true;
    }

    if (value.HasMember("VulLevelName") && !value["VulLevelName"].IsNull())
    {
        if (!value["VulLevelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulRiskItem.VulLevelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulLevelName = string(value["VulLevelName"].GetString());
        m_vulLevelNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatusName") && !value["InstanceStatusName"].IsNull())
    {
        if (!value["InstanceStatusName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulRiskItem.InstanceStatusName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatusName = string(value["InstanceStatusName"].GetString());
        m_instanceStatusNameHasBeenSet = true;
    }

    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulRiskItem.AppID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetUint64();
        m_appIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulRiskItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_vulNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulName.c_str(), allocator).Move(), allocator);
    }

    if (m_vulCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_vulLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_cveIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CveID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cveID.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_containerIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerID.c_str(), allocator).Move(), allocator);
    }

    if (m_fixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fix.c_str(), allocator).Move(), allocator);
    }

    if (m_vulCategoryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulCategoryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulCategoryName.c_str(), allocator).Move(), allocator);
    }

    if (m_vulLevelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulLevelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulLevelName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStatusNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatusName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStatusName.c_str(), allocator).Move(), allocator);
    }

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

}


string VulRiskItem::GetCloudAccountID() const
{
    return m_cloudAccountID;
}

void VulRiskItem::SetCloudAccountID(const string& _cloudAccountID)
{
    m_cloudAccountID = _cloudAccountID;
    m_cloudAccountIDHasBeenSet = true;
}

bool VulRiskItem::CloudAccountIDHasBeenSet() const
{
    return m_cloudAccountIDHasBeenSet;
}

string VulRiskItem::GetAssetID() const
{
    return m_assetID;
}

void VulRiskItem::SetAssetID(const string& _assetID)
{
    m_assetID = _assetID;
    m_assetIDHasBeenSet = true;
}

bool VulRiskItem::AssetIDHasBeenSet() const
{
    return m_assetIDHasBeenSet;
}

string VulRiskItem::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void VulRiskItem::SetInstanceStatus(const string& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool VulRiskItem::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

string VulRiskItem::GetInstanceName() const
{
    return m_instanceName;
}

void VulRiskItem::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool VulRiskItem::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string VulRiskItem::GetCreateTime() const
{
    return m_createTime;
}

void VulRiskItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool VulRiskItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string VulRiskItem::GetUpdateTime() const
{
    return m_updateTime;
}

void VulRiskItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool VulRiskItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string VulRiskItem::GetVulName() const
{
    return m_vulName;
}

void VulRiskItem::SetVulName(const string& _vulName)
{
    m_vulName = _vulName;
    m_vulNameHasBeenSet = true;
}

bool VulRiskItem::VulNameHasBeenSet() const
{
    return m_vulNameHasBeenSet;
}

string VulRiskItem::GetVulCategory() const
{
    return m_vulCategory;
}

void VulRiskItem::SetVulCategory(const string& _vulCategory)
{
    m_vulCategory = _vulCategory;
    m_vulCategoryHasBeenSet = true;
}

bool VulRiskItem::VulCategoryHasBeenSet() const
{
    return m_vulCategoryHasBeenSet;
}

string VulRiskItem::GetVulLevel() const
{
    return m_vulLevel;
}

void VulRiskItem::SetVulLevel(const string& _vulLevel)
{
    m_vulLevel = _vulLevel;
    m_vulLevelHasBeenSet = true;
}

bool VulRiskItem::VulLevelHasBeenSet() const
{
    return m_vulLevelHasBeenSet;
}

string VulRiskItem::GetCveID() const
{
    return m_cveID;
}

void VulRiskItem::SetCveID(const string& _cveID)
{
    m_cveID = _cveID;
    m_cveIDHasBeenSet = true;
}

bool VulRiskItem::CveIDHasBeenSet() const
{
    return m_cveIDHasBeenSet;
}

string VulRiskItem::GetDescription() const
{
    return m_description;
}

void VulRiskItem::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool VulRiskItem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string VulRiskItem::GetContainerID() const
{
    return m_containerID;
}

void VulRiskItem::SetContainerID(const string& _containerID)
{
    m_containerID = _containerID;
    m_containerIDHasBeenSet = true;
}

bool VulRiskItem::ContainerIDHasBeenSet() const
{
    return m_containerIDHasBeenSet;
}

string VulRiskItem::GetFix() const
{
    return m_fix;
}

void VulRiskItem::SetFix(const string& _fix)
{
    m_fix = _fix;
    m_fixHasBeenSet = true;
}

bool VulRiskItem::FixHasBeenSet() const
{
    return m_fixHasBeenSet;
}

string VulRiskItem::GetVulCategoryName() const
{
    return m_vulCategoryName;
}

void VulRiskItem::SetVulCategoryName(const string& _vulCategoryName)
{
    m_vulCategoryName = _vulCategoryName;
    m_vulCategoryNameHasBeenSet = true;
}

bool VulRiskItem::VulCategoryNameHasBeenSet() const
{
    return m_vulCategoryNameHasBeenSet;
}

string VulRiskItem::GetVulLevelName() const
{
    return m_vulLevelName;
}

void VulRiskItem::SetVulLevelName(const string& _vulLevelName)
{
    m_vulLevelName = _vulLevelName;
    m_vulLevelNameHasBeenSet = true;
}

bool VulRiskItem::VulLevelNameHasBeenSet() const
{
    return m_vulLevelNameHasBeenSet;
}

string VulRiskItem::GetInstanceStatusName() const
{
    return m_instanceStatusName;
}

void VulRiskItem::SetInstanceStatusName(const string& _instanceStatusName)
{
    m_instanceStatusName = _instanceStatusName;
    m_instanceStatusNameHasBeenSet = true;
}

bool VulRiskItem::InstanceStatusNameHasBeenSet() const
{
    return m_instanceStatusNameHasBeenSet;
}

uint64_t VulRiskItem::GetAppID() const
{
    return m_appID;
}

void VulRiskItem::SetAppID(const uint64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool VulRiskItem::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

